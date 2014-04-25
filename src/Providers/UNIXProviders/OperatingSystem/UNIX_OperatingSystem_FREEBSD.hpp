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

#include <unistd.h>
#include <sys/stat.h>
#include <sys/sysctl.h>
#include <sys/utsname.h>
#include <sys/user.h>
#include <sys/vmmeter.h>
#include <utmpx.h>
#include <sys/fcntl.h>
#include <kvm.h>

UNIX_OperatingSystem::UNIX_OperatingSystem(void)
{
}

UNIX_OperatingSystem::~UNIX_OperatingSystem(void)
{
}


Boolean UNIX_OperatingSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OperatingSystem::getInstanceID() const
{
	String s;
	s.append(CIMHelper::OSName);
	s.append("-");
	s.append(CIMHelper::HostName);
	return s;
}

Boolean UNIX_OperatingSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OperatingSystem::getCaption() const
{
	return getName();
}

Boolean UNIX_OperatingSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OperatingSystem::getDescription() const
{
	return String ("This instance reflects the Operating System"
           " on which the CIMOM is executing (as distinguished from instances"
           " of other installed operating systems that could be run).");
}

Boolean UNIX_OperatingSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OperatingSystem::getElementName() const
{
	return String("OperatingSystem");
}

Boolean UNIX_OperatingSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OperatingSystem::getInstallDate() const
{
	return CIMHelper::getOSInstallDate();
}

Boolean UNIX_OperatingSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OperatingSystem::getName() const
{
	return CIMHelper::OSName;
}

Boolean UNIX_OperatingSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OperatingSystem::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK

	return as;

}

Boolean UNIX_OperatingSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OperatingSystem::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OperatingSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OperatingSystem::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_OperatingSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OperatingSystem::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_OperatingSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OperatingSystem::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_OperatingSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OperatingSystem::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_OperatingSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OperatingSystem::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_OperatingSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OperatingSystem::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_OperatingSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_OperatingSystem::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_OperatingSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_OperatingSystem::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_OperatingSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_OperatingSystem::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_OperatingSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_OperatingSystem::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_OperatingSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_OperatingSystem::getTimeOfLastStateChange() const
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

Boolean UNIX_OperatingSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_OperatingSystem::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OperatingSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_OperatingSystem::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_OperatingSystem::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_OperatingSystem::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_OperatingSystem::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_OperatingSystem::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_OperatingSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OperatingSystem::getCreationClassName() const
{
	return String("UNIX_OperatingSystem");
}

Boolean UNIX_OperatingSystem::getOSType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_TYPE, getOSType());
	return true;
}

Uint16 UNIX_OperatingSystem::getOSType() const
{
	return Uint16(FreeBSD);
}

Boolean UNIX_OperatingSystem::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_OperatingSystem::getOtherTypeDescription() const
{
	struct utsname  unameInfo;
    char version[sizeof(unameInfo.release) + sizeof(unameInfo.version) + 1];

    // Call uname and check for any errors.
    if (uname(&unameInfo) < 0)
    {
       return CIMHelper::EmptyString;
    }

    sprintf(version, "%s %s", unameInfo.version, unameInfo.release);
	return String (version);
}

Boolean UNIX_OperatingSystem::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_OperatingSystem::getVersion() const
{
	struct utsname  unameInfo;

    // Call uname and check for any errors.
    if (uname(&unameInfo) < 0)
    {
       return CIMHelper::EmptyString;
    }

    return String(unameInfo.release);
}

Boolean UNIX_OperatingSystem::getLastBootUpTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_BOOT_UP_TIME, getLastBootUpTime());
	return true;
}

CIMDateTime UNIX_OperatingSystem::getLastBootUpTime() const
{
	int mib[2] = { CTL_KERN, KERN_BOOTTIME };
    struct timeval   tv;
    struct tm* clock;
    size_t len = sizeof(tv);
    if (sysctl(mib, 2, &tv, &len, NULL, 0) == -1)
    {
        return CIMHelper::getOSInstallDate();
    }
	clock = gmtime(&(tv.tv_sec));	// Get the last modified time and put it into the time structure
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

Boolean UNIX_OperatingSystem::getLocalDateTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_DATE_TIME, getLocalDateTime());
	return true;
}

CIMDateTime UNIX_OperatingSystem::getLocalDateTime() const
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

Boolean UNIX_OperatingSystem::getCurrentTimeZone(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_TIME_ZONE, getCurrentTimeZone());
	return true;
}

Sint16 UNIX_OperatingSystem::getCurrentTimeZone() const
{
	time_t now;
   	now = time(NULL);
    struct tm* clock = gmtime(&(now));
	return Sint16(-clock->tm_gmtoff);
}

Boolean UNIX_OperatingSystem::getNumberOfLicensedUsers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_LICENSED_USERS, getNumberOfLicensedUsers());
	return true;
}

Uint32 UNIX_OperatingSystem::getNumberOfLicensedUsers() const
{
	return Uint32(0);
}

Boolean UNIX_OperatingSystem::getNumberOfUsers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_USERS, getNumberOfUsers());
	return true;
}

Uint32 UNIX_OperatingSystem::getNumberOfUsers() const
{
	struct utmpx * utmpp;

    Uint32 numberOfUsers(0);

    while ((utmpp = getutxent()) != NULL)
    {
        if (utmpp->ut_type == USER_PROCESS)
        {
            numberOfUsers++;
        }
    }

    endutxent();
	return numberOfUsers;
}

Boolean UNIX_OperatingSystem::getNumberOfProcesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PROCESSES, getNumberOfProcesses());
	return true;
}

Uint32 UNIX_OperatingSystem::getNumberOfProcesses() const
{
	size_t length = 0;
    static const int name[] = { CTL_KERN, KERN_PROC, KERN_PROC_ALL, 0 };

    // Call sysctl with a NULL buffer to get proper length
    if (sysctl((int *)name, (sizeof(name) / sizeof(*name)) - 1, NULL, &length, NULL, 0) != -1)
    {
    	int proc_count = length / sizeof(struct kinfo_proc);
		return Uint32(proc_count);
	}
	return Uint32(0);
}

Boolean UNIX_OperatingSystem::getMaxNumberOfProcesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_PROCESSES, getMaxNumberOfProcesses());
	return true;
}

Uint32 UNIX_OperatingSystem::getMaxNumberOfProcesses() const
{
	long pid_max;
    size_t ret_len = sizeof(pid_max);
    if (sysctlbyname("kern.pid_max", &pid_max, &ret_len, NULL, 0) != -1)
    {
    	return Uint32(pid_max);
    }
	return Uint32(0);
}

Boolean UNIX_OperatingSystem::getTotalSwapSpaceSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_SWAP_SPACE_SIZE, getTotalSwapSpaceSize());
	return true;
}

#define NSWAP 16
static struct kvm_swap swapary[NSWAP];

Uint64 UNIX_OperatingSystem::getTotalSwapSpaceSize() const
{
	long retavail = 0;
	int n;
	int hlen = 0;
	long blocksize = 0;
	getbsize(&hlen, &blocksize);
	int pagesize = getpagesize();

	if (CIMHelper::kd == NULL)
	{
		char errbuf[_POSIX2_LINE_MAX];
		CIMHelper::kd = kvm_openfiles("/dev/null", "/dev/null", "/dev/null", O_RDONLY, errbuf);
	}
	if (CIMHelper::kd == NULL) return Uint64(0);
	n = kvm_getswapinfo(CIMHelper::kd, swapary, NSWAP, 0);
	#define CONVERT(v)	((quad_t)(v) * pagesize)
	if (n < 0 || swapary[0].ksw_total == 0) {
		return Uint64(0);
	}
	retavail = CONVERT(swapary[0].ksw_total);
	//retfree = CONVERT(swapary[0].ksw_total - swapary[0].ksw_used);
	return Uint64(retavail);
}

Boolean UNIX_OperatingSystem::getTotalVirtualMemorySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_VIRTUAL_MEMORY_SIZE, getTotalVirtualMemorySize());
	return true;
}

Uint64 UNIX_OperatingSystem::getTotalVirtualMemorySize() const
{
  	struct vmtotal vm_info;
  	int mib[2];
  
  	mib[0] = CTL_VM;
  	mib[1] = VM_TOTAL;

  	size_t len = sizeof(vm_info);
  	sysctl(mib, 2, &vm_info, &len, NULL, 0);

  	return Uint64(vm_info.t_vm);
}

Boolean UNIX_OperatingSystem::getFreeVirtualMemory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREE_VIRTUAL_MEMORY, getFreeVirtualMemory());
	return true;
}

Uint64 UNIX_OperatingSystem::getFreeVirtualMemory() const
{
  	struct vmtotal vm_info;
  	int mib[2];
  
  	mib[0] = CTL_VM;
  	mib[1] = VM_TOTAL;

  	size_t len = sizeof(vm_info);
  	sysctl(mib, 2, &vm_info, &len, NULL, 0);

  	return Uint64(vm_info.t_free);
}

Boolean UNIX_OperatingSystem::getFreePhysicalMemory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREE_PHYSICAL_MEMORY, getFreePhysicalMemory());
	return true;
}

Uint64 UNIX_OperatingSystem::getFreePhysicalMemory() const
{
	long val = 0;
	size_t len = sizeof(val);
    long blocksize = 0;
    int hlen = 0;
    getbsize(&hlen, &blocksize);
    if (sysctlbyname("vm.stats.vm.v_free_count", &val, &len, NULL, 0) == -1)
    {
        return Uint64(0);
    }
	return Uint64(val * blocksize);
}

Boolean UNIX_OperatingSystem::getTotalVisibleMemorySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_VISIBLE_MEMORY_SIZE, getTotalVisibleMemorySize());
	return true;
}

Uint64 UNIX_OperatingSystem::getTotalVisibleMemorySize() const
{
	long memory;
	int mib[2] = { CTL_HW, HW_REALMEM };
    size_t len = sizeof(memory);

    if (sysctl(mib, 2, &memory, &len, NULL, 0) == -1)
    {
        return Uint64(0);
    }
	return Uint64(memory);
}

Boolean UNIX_OperatingSystem::getSizeStoredInPagingFiles(CIMProperty &p) const
{
	/* TODO: */
	//p = CIMProperty(PROPERTY_SIZE_STORED_IN_PAGING_FILES, getSizeStoredInPagingFiles());
	return false;
}

Uint64 UNIX_OperatingSystem::getSizeStoredInPagingFiles() const
{
	return Uint64(0);
}

Boolean UNIX_OperatingSystem::getFreeSpaceInPagingFiles(CIMProperty &p) const
{
	/* TODO: */
	//p = CIMProperty(PROPERTY_FREE_SPACE_IN_PAGING_FILES, getFreeSpaceInPagingFiles());
	return false;
}

Uint64 UNIX_OperatingSystem::getFreeSpaceInPagingFiles() const
{
	return Uint64(0);
}

Boolean UNIX_OperatingSystem::getMaxProcessMemorySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_PROCESS_MEMORY_SIZE, getMaxProcessMemorySize());
	return true;
}

Uint64 UNIX_OperatingSystem::getMaxProcessMemorySize() const
{
	long val = 0;
    size_t len = sizeof(val);
    long blocksize = 0;
    int hlen = 0;
    getbsize(&hlen, &blocksize);
    if (sysctlbyname("kern.maxdsiz", &val, &len, NULL, 0) == -1)
    {
        return Uint64(0);
    }
	return Uint64(val);
}

Boolean UNIX_OperatingSystem::getDistributed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISTRIBUTED, getDistributed());
	return true;
}

Boolean UNIX_OperatingSystem::getDistributed() const
{
	return Boolean(false);
}

Boolean UNIX_OperatingSystem::getMaxProcessesPerUser(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_PROCESSES_PER_USER, getMaxProcessesPerUser());
	return true;
}

Uint32 UNIX_OperatingSystem::getMaxProcessesPerUser() const
{
	int mib[2] = { CTL_KERN, KERN_MAXPROCPERUID };
    long maxp = 0;
    size_t len = sizeof(maxp);

    if (sysctl(mib, 2, &maxp, &len, NULL, 0) == -1)
    {
        return Uint32(0);
    }
    return Uint32(maxp);
}



Boolean UNIX_OperatingSystem::initialize()
{
	return true;
}

Boolean UNIX_OperatingSystem::load(int &pIndex)
{
	if (pIndex == 0) return true;
	return false;
}

Boolean UNIX_OperatingSystem::finalize()
{
	return true;
}

Boolean UNIX_OperatingSystem::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;
	String nameKey;

	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}

	/* EXecute find with extracted keys */
	if (String::equal(nameKey, CIMHelper::EmptyString) ||
		String::equalNoCase(nameKey, CIMHelper::OSName))
		return true;

	return false;
}
