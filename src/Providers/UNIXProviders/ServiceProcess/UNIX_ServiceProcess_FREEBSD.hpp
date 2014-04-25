//%LICENSE////////////////////////////////////////////////////////////////
//
// Licensed to The Open Group (TOG) under one or more contributor license
// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
// this work for additional information regarding copyright ownership.
// Each contributor licenses this file to you under the OpenPegasus Open
// Source License; you may not use this file except in compliance with the
// License.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//////////////////////////////////////////////////////////////////////////
//
//%/////////////////////////////////////////////////////////////////////////


UNIX_ServiceProcess::UNIX_ServiceProcess(void)
{
}

UNIX_ServiceProcess::~UNIX_ServiceProcess(void)
{
}


Boolean UNIX_ServiceProcess::getService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE, getService());
	return true;
}

CIMInstance UNIX_ServiceProcess::getService() const
{
	return _serviceProvider.constructInstance(
			CIMName("UNIX_Service"), 
			CIMNamespaceName("root/cimv2"),
			_s);
}

Boolean UNIX_ServiceProcess::getProcess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS, getProcess());
	return true;
}

CIMInstance UNIX_ServiceProcess::getProcess() const
{
	return _processProvider.constructInstance(
			CIMName("UNIX_Process"), 
			CIMNamespaceName("root/cimv2"),
			_p);
}

Boolean UNIX_ServiceProcess::getExecutionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_TYPE, getExecutionType());
	return true;
}

Uint16 UNIX_ServiceProcess::getExecutionType() const
{
	return Uint16(3); //Independant /* TODO: How to detect this? */
}


Boolean UNIX_ServiceProcess::initialize()
{
	svcnames.clear();
	/* Fetch services that are enabled */
	FILE* pipe = popen("/usr/sbin/service -e", "r");
    if (!pipe) return false;
    char buffer[256];
    while(!feof(pipe)) {
    	while (fgets(buffer, 128, pipe) != NULL)
    	{
    		/* Extract service name from daemon script path */
    		int index = CIMHelper::lastIndexOf(buffer, strdup("/"));
    		if (index > 0)
    		{
    			svcnames.append(String(CIMHelper::trim(buffer)).subString(index + 1));
    		}
    	}
    }
    fclose(pipe);
	return true;
}

Boolean UNIX_ServiceProcess::load(int &pIndex)
{
	if (Uint32(pIndex) < svcnames.size())
	{
		_p.finalize();
		_s.finalize();
		bool found = false;
		String svcname = svcnames[pIndex];
		String statuscmd("/usr/sbin/service ");
		statuscmd.append(svcname);
		statuscmd.append(" status 2>/dev/null");
		const char *statuscmdline = statuscmd.getCString();
		FILE* statuspipe = popen(statuscmdline, "r");
		if (!statuspipe) return load(++pIndex);
		char statusbuffer[512];
		if(!feof(statuspipe)) {
	    	if (fgets(statusbuffer, 512, statuspipe) != NULL)
	    	{
	    		if (strstr(statusbuffer, "is not") == NULL && strstr(statusbuffer, "Permission denied") == NULL)
	    		{
	    			int pidindex = CIMHelper::lastIndexOf(statusbuffer, strdup(" "));
	    			if (pidindex > 0)
	    			{
	    				String pidstring = String(statusbuffer).subString(pidindex + 1, strlen(statusbuffer) - 2);
	    				int pid = atoi(pidstring.getCString());
	    				if (pid > 0)
	    				{
	    					_p.initialize();

	    					if (_p.loadByPID(pid))
	    					{
	    						_s.initialize();
	    						_s.loadService(svcname, true, "Automatic");
	    					 	found = true;
	    					}
    					}
	    			}
	    		}
    		}
		}
		fclose(statuspipe);
		if (!found) return load(++pIndex);
		return true;
	}
	return false;
}

Boolean UNIX_ServiceProcess::finalize()
{
	_p.finalize();
	_s.finalize();

	return true;
}

Boolean UNIX_ServiceProcess::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String serviceKey;
	String processKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SERVICE)) serviceKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PROCESS)) processKey = kb.getValue();
	}



	/* EXecute find with extracted keys */

	return false;
}
