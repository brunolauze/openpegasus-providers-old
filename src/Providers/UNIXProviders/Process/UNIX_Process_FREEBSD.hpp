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

#include <iostream>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <sys/sysctl.h>
#include <unistd.h>
#include <libutil.h>

UNIX_Process::UNIX_Process(void)
{
}

UNIX_Process::~UNIX_Process(void)
{
}


Boolean UNIX_Process::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Process::getInstanceID() const
{
	char uid[1028];
	sprintf(uid, "%d", kp->ki_pid);
	return String (uid);
}

Boolean UNIX_Process::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Process::getCaption() const
{
	int cnt;
	kinfo_file *_f = kinfo_getfile(kp->ki_ppid, &cnt); 
	if (_f == NULL) return String (kp->ki_comm);
	return String(_f->kf_path);
}

Boolean UNIX_Process::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Process::getDescription() const
{
	return String ("");
}

Boolean UNIX_Process::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Process::getElementName() const
{
	return String("Process");
}

Boolean UNIX_Process::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Process::getInstallDate() const
{
	int cnt;
	kinfo_file *_f = kinfo_getfile(kp->ki_ppid, &cnt); 
	if (_f == NULL) return getCreationDate();
	return CIMHelper::getInstallDate(String(_f->kf_path));
}

Boolean UNIX_Process::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Process::getName() const
{
	return String (kp->ki_comm);
}

Boolean UNIX_Process::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Process::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK	

	return as;

}

Boolean UNIX_Process::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Process::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Process::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Process::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Process::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Process::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Process::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Process::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Process::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Process::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Process::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Process::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Process::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Process::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Process::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Process::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_Process::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Process::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_Process::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Process::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_Process::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Process::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_Process::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Process::getTimeOfLastStateChange() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_Process::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Process::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Process::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Process::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_Process::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_Process::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Process::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_Process::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Process::getOSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_CREATION_CLASS_NAME, getOSCreationClassName());
	return true;
}

String UNIX_Process::getOSCreationClassName() const
{
	return String ("UNIX_OperatingSystem");
}

Boolean UNIX_Process::getOSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_NAME, getOSName());
	return true;
}

String UNIX_Process::getOSName() const
{
	return CIMHelper::OSName;
}

Boolean UNIX_Process::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Process::getCreationClassName() const
{
	return String("UNIX_Process");
}

Boolean UNIX_Process::getHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HANDLE, getHandle());
	return true;
}

String UNIX_Process::getHandle() const
{
	return getInstanceID();
}

Boolean UNIX_Process::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_Process::getPriority() const
{
	return Uint32(kp->ki_pri.pri_level);
}

Boolean UNIX_Process::getExecutionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STATE, getExecutionState());
	return true;
}

Uint16 UNIX_Process::getExecutionState() const
{
	return Uint16(0);
}

Boolean UNIX_Process::getOtherExecutionDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_EXECUTION_DESCRIPTION, getOtherExecutionDescription());
	return true;
}

String UNIX_Process::getOtherExecutionDescription() const
{
	return String ("");
}

Boolean UNIX_Process::getCreationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_DATE, getCreationDate());
	return true;
}

CIMDateTime UNIX_Process::getCreationDate() const
{
	struct tm* clock;			// create a time structure
	clock = gmtime(&(kp->ki_start.tv_sec));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_Process::getTerminationDate(CIMProperty &p) const
{
	//p = CIMProperty(PROPERTY_TERMINATION_DATE, getTerminationDate());
	return false;
}

CIMDateTime UNIX_Process::getTerminationDate() const
{
	throw;
}

Boolean UNIX_Process::getKernelModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KERNEL_MODE_TIME, getKernelModeTime());
	return true;
}

Uint64 UNIX_Process::getKernelModeTime() const
{
	return Uint64(kp->ki_childstime.tv_sec);
}

Boolean UNIX_Process::getUserModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_MODE_TIME, getUserModeTime());
	return true;
}

Uint64 UNIX_Process::getUserModeTime() const
{
	return Uint64(kp->ki_childutime.tv_sec);
}

Boolean UNIX_Process::getWorkingSetSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORKING_SET_SIZE, getWorkingSetSize());
	return true;
}

Uint64 UNIX_Process::getWorkingSetSize() const
{ 
	return Uint64(0);
}

Boolean UNIX_Process::getParentProcessID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT_PROCESS_ID, getParentProcessID());
	return true;
}

String UNIX_Process::getParentProcessID() const
{
	char ppid[1028];
	sprintf(ppid, "%d", kp->ki_ppid);
	return String (ppid);
}

Boolean UNIX_Process::getRealUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REAL_USER_ID, getRealUserID());
	return true;
}

Uint64 UNIX_Process::getRealUserID() const
{
	return Uint64(kp->ki_ruid);
}

Boolean UNIX_Process::getProcessGroupID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_GROUP_ID, getProcessGroupID());
	return true;
}

Uint64 UNIX_Process::getProcessGroupID() const
{
	return Uint64(kp->ki_pgid);
}

Boolean UNIX_Process::getProcessSessionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_SESSION_ID, getProcessSessionID());
	return true;
}

Uint64 UNIX_Process::getProcessSessionID() const
{
	return Uint64(kp->ki_sid);
}

Boolean UNIX_Process::getProcessTTY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_T_T_Y, getProcessTTY());
	return true;
}

String UNIX_Process::getProcessTTY() const
{
	if (kp->ki_tdev == NODEV) return CIMHelper::EmptyString;
	return String (devname(kp->ki_tdev, S_IFCHR));
}

Boolean UNIX_Process::getModulePath(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULE_PATH, getModulePath());
	return true;
}

String UNIX_Process::getModulePath() const
{
	return String ("");
}

Boolean UNIX_Process::getParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETERS, getParameters());
	return true;
}

Array<String> UNIX_Process::getParameters() const
{
	Array<String> as;

	int narg = 2048;
	char **argv = kvm_getargv(CIMHelper::kd, kp, narg);
	if (argv == NULL) return as;
	argv++;
	while (*argv)
	{
		String s(*argv);
		Uint32 start = 0;
		Uint32 end = s.find(start, ' ');
		bool found = false;
		if (end == PEG_NOT_FOUND) as.append(s);
		else {
			while(end != PEG_NOT_FOUND)
			{
				if (found)
					as.append(s.subString(start, end - start));
				start = end + 1;
				end = s.find(start, ' ');
				found = true;
			}
		}
		argv++;
	}



	return as;
}

Boolean UNIX_Process::getProcessNiceValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_NICE_VALUE, getProcessNiceValue());
	return true;
}

Uint32 UNIX_Process::getProcessNiceValue() const
{
	return Uint32(kp->ki_nice);
}

Boolean UNIX_Process::getProcessWaitingForEvent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_WAITING_FOR_EVENT, getProcessWaitingForEvent());
	return true;
}

String UNIX_Process::getProcessWaitingForEvent() const
{
	return String ("");
}



Boolean UNIX_Process::initialize()
{
	int nentries = -1;
	if (CIMHelper::kd == NULL)
	{
		char errbuf[_POSIX2_LINE_MAX];
		CIMHelper::kd = kvm_openfiles("/dev/null", "/dev/null", "/dev/null", O_RDONLY, errbuf);
	}
	if (CIMHelper::kd == NULL) return false;
	kp = kvm_getprocs(CIMHelper::kd, KERN_PROC_PROC, O_RDONLY, &nentries);
	if ((kp == NULL && nentries > 0) || (kp != NULL && nentries < 0))
		return false;
	
	processCount = nentries;
	/*
	cout << "Number of Processes:" << nentries << endl;
	for(int i = 0; i < nentries; ++kp)
	{
		i++;
		if (kp->ki_pid == 0) continue;
		cout << kp->ki_pid << " : " << kp->ki_comm << endl;
	}
	cout << "ENDING " << endl;
	*/
	return true;
}

Boolean UNIX_Process::loadByPID(int pid)
{
	bool found = false;
	while (kp != NULL)
	{
		if (kp->ki_pid == pid)
		{
			found = true;
			break;
		}
		++kp; 
	}
	return found;
}

Boolean UNIX_Process::load(int &pIndex)
{
	if (pIndex < processCount -1)
	{
		if (pIndex > 0) ++kp;
		while (kp != NULL)
		{
			if (kp->ki_pid == 0)
			{
				++kp; continue;
			}
			return true;
		}
	}
	return false;
}

Boolean UNIX_Process::finalize()
{
	kp = NULL;
	processCount = 0;
	return true;
}

Boolean UNIX_Process::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String oSCreationClassNameKey;
	String oSNameKey;
	String creationClassNameKey;
	String handleKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_CREATION_CLASS_NAME)) oSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_NAME)) oSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_HANDLE)) handleKey = kb.getValue();
	}

	/* EXecute find with extracted keys */
	bool found = false;
	for(int i = 0; load(i); i++)
	{
		if (String::equalNoCase(cSNameKey, getCSName()) && String::equal(handleKey, getHandle()))
		{
			found = true;
			break;
		}
	}

	return found;
}

Uint32 UNIX_Process::createInstance(const CIMInstance& instanceObject) const
{
	String processName = CIMHelper::getPropertyAsString(instanceObject, String("Name"));
	Array<String> parameters = CIMHelper::getPropertyAsStringArray(instanceObject, String("Parameters"));

	char *argv[parameters.size() + 1];
	const char *pName = processName.getCString();
	argv[0] = const_cast<char*>(pName);
	for(Uint32 i = 0; i < parameters.size(); i++)
	{
		const char *val = parameters[i].getCString();
		argv[i + 1] = const_cast<char*>(val);
	}
	int pid = vfork();
	if (pid == 0)
	{
		pid = vfork();
		if (pid != 0)
		{
			execvp(argv[0], argv);
		}
		exit(0);
	}
	return Uint32(0);
}