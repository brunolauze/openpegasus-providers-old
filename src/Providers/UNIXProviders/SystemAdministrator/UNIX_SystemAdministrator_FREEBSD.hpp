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


UNIX_SystemAdministrator::UNIX_SystemAdministrator(void)
{
}

UNIX_SystemAdministrator::~UNIX_SystemAdministrator(void)
{
}


Boolean UNIX_SystemAdministrator::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_SystemAdministrator::getAntecedent() const
{
	return _systemProvider.constructInstance(
				CIMName("UNIX_ComputerSystem"),
				CIMNamespaceName("root/cimv2"),
				_s);
}

Boolean UNIX_SystemAdministrator::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_SystemAdministrator::getDependent() const
{
	return _usersProvider.constructInstance(
				CIMName("UNIX_UsersAccess"),
				CIMNamespaceName("root/cimv2"),
				_u);
}

Boolean UNIX_SystemAdministrator::initialize()
{
	users.clear();
	//TODO: Loop through SystemAdministratorGroup */
	FILE* pipe = popen("pw group show wheel && pw group show operator", "r");
	if (!pipe) return false;
	char buffer[1024];
	if(!feof(pipe)) {
    	while (fgets(buffer, 1024, pipe) != NULL)
    	{
    		std::vector<std::string> gline = CIMHelper::split(buffer, ':');
    		if (gline.size() > 0)
    		{
	    		std::vector<std::string> gusers = CIMHelper::split(gline[gline.size() - 1].c_str(), ',');
	    		for(unsigned int i = 0; i < gusers.size(); i++)
	    		{
	    			bool found = false;
	    			const char *val = gusers.at(i).c_str();
	    			/* Strip newline */
	    			char *pos;
	    			while ((pos=strchr(val, '\n')) != NULL)
	    				*pos = '\0';

	    		    String name = String(val);
	    			for (Uint32 j = 0; j < users.size(); j++)
	    			{
	    				if (String::equal(users[j], name))
	    				{
	    					found = true;
	    					break;
	    				}
	    			}
	    			if (!found)
	    				users.append(name);
	    		}
	    	}
    	}
	}
	fclose(pipe);
	return _s.initialize();
}

Boolean UNIX_SystemAdministrator::load(int &pIndex)
{
	if (Uint32(pIndex) < users.size())
	{
		if (!_u.getByName(users[pIndex]))
		{
			return load(++pIndex);
		}
		return true;
	}
	return false;
}

Boolean UNIX_SystemAdministrator::finalize()
{
	return _s.finalize();
}

Boolean UNIX_SystemAdministrator::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String antecedentKey;
	String dependentKey;

	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ANTECEDENT)) antecedentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT)) dependentKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
