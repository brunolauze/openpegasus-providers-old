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

#ifndef __UNIX_OPERATINGSYSTEM_H
#define __UNIX_OPERATINGSYSTEM_H


#include "CIM_EnabledLogicalElement.h"

#include "UNIX_OperatingSystemDeps.h"


#define PROPERTY_CS_CREATION_CLASS_NAME				"CSCreationClassName"
#define PROPERTY_CS_NAME				"CSName"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_OS_TYPE				"OSType"
#define PROPERTY_OTHER_TYPE_DESCRIPTION				"OtherTypeDescription"
#define PROPERTY_VERSION				"Version"
#define PROPERTY_LAST_BOOT_UP_TIME				"LastBootUpTime"
#define PROPERTY_LOCAL_DATE_TIME				"LocalDateTime"
#define PROPERTY_CURRENT_TIME_ZONE				"CurrentTimeZone"
#define PROPERTY_NUMBER_OF_LICENSED_USERS				"NumberOfLicensedUsers"
#define PROPERTY_NUMBER_OF_USERS				"NumberOfUsers"
#define PROPERTY_NUMBER_OF_PROCESSES				"NumberOfProcesses"
#define PROPERTY_MAX_NUMBER_OF_PROCESSES				"MaxNumberOfProcesses"
#define PROPERTY_TOTAL_SWAP_SPACE_SIZE				"TotalSwapSpaceSize"
#define PROPERTY_TOTAL_VIRTUAL_MEMORY_SIZE				"TotalVirtualMemorySize"
#define PROPERTY_FREE_VIRTUAL_MEMORY				"FreeVirtualMemory"
#define PROPERTY_FREE_PHYSICAL_MEMORY				"FreePhysicalMemory"
#define PROPERTY_TOTAL_VISIBLE_MEMORY_SIZE				"TotalVisibleMemorySize"
#define PROPERTY_SIZE_STORED_IN_PAGING_FILES				"SizeStoredInPagingFiles"
#define PROPERTY_FREE_SPACE_IN_PAGING_FILES				"FreeSpaceInPagingFiles"
#define PROPERTY_MAX_PROCESS_MEMORY_SIZE				"MaxProcessMemorySize"
#define PROPERTY_DISTRIBUTED				"Distributed"
#define PROPERTY_MAX_PROCESSES_PER_USER				"MaxProcessesPerUser"


class UNIX_OperatingSystem :
	public CIM_EnabledLogicalElement
{
public:

	UNIX_OperatingSystem();
	~UNIX_OperatingSystem();

	enum OSTYPE {
        Unknown, Other, MACOS, ATTUNIX, DGUX, DECNT, Digital_Unix,
        OpenVMS, HP_UX, AIX, MVS, OS400, OS2, JavaVM, MSDOS, WIN3x,
        WIN95, WIN98, WINNT, WINCE, NCR3000, NetWare, OSF,
        DCOS, Reliant_UNIX, SCO_UnixWare, SCO_OpenServer, Sequent,
        IRIX, Solaris, SunOS, U6000, ASERIES, TandemNSK, TandemNT,
        BS2000, LINUX, Lynx, XENIX, VM_ESA, Interactive_UNIX,
        BSDUNIX, FreeBSD, NetBSD, GNU_Hurd, OS9, MACH_Kernel,
        Inferno, QNX, EPOC, IxWorks, VxWorks, MiNT, BeOS, HP_MPE,
        NextStep, PalmPilot, Rhapsody, Windows_2000, Dedicated,
        OS_390, VSE, TPF, Windows_Me, Open_UNIX, OpenBDS, NotApplicable,
        Windows_XP, zOS, Windows_2003, Windows_2003_64
    };

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getOSType(CIMProperty&) const;
	virtual Uint16 getOSType() const;
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual Boolean getLastBootUpTime(CIMProperty&) const;
	virtual CIMDateTime getLastBootUpTime() const;
	virtual Boolean getLocalDateTime(CIMProperty&) const;
	virtual CIMDateTime getLocalDateTime() const;
	virtual Boolean getCurrentTimeZone(CIMProperty&) const;
	virtual Sint16 getCurrentTimeZone() const;
	virtual Boolean getNumberOfLicensedUsers(CIMProperty&) const;
	virtual Uint32 getNumberOfLicensedUsers() const;
	virtual Boolean getNumberOfUsers(CIMProperty&) const;
	virtual Uint32 getNumberOfUsers() const;
	virtual Boolean getNumberOfProcesses(CIMProperty&) const;
	virtual Uint32 getNumberOfProcesses() const;
	virtual Boolean getMaxNumberOfProcesses(CIMProperty&) const;
	virtual Uint32 getMaxNumberOfProcesses() const;
	virtual Boolean getTotalSwapSpaceSize(CIMProperty&) const;
	virtual Uint64 getTotalSwapSpaceSize() const;
	virtual Boolean getTotalVirtualMemorySize(CIMProperty&) const;
	virtual Uint64 getTotalVirtualMemorySize() const;
	virtual Boolean getFreeVirtualMemory(CIMProperty&) const;
	virtual Uint64 getFreeVirtualMemory() const;
	virtual Boolean getFreePhysicalMemory(CIMProperty&) const;
	virtual Uint64 getFreePhysicalMemory() const;
	virtual Boolean getTotalVisibleMemorySize(CIMProperty&) const;
	virtual Uint64 getTotalVisibleMemorySize() const;
	virtual Boolean getSizeStoredInPagingFiles(CIMProperty&) const;
	virtual Uint64 getSizeStoredInPagingFiles() const;
	virtual Boolean getFreeSpaceInPagingFiles(CIMProperty&) const;
	virtual Uint64 getFreeSpaceInPagingFiles() const;
	virtual Boolean getMaxProcessMemorySize(CIMProperty&) const;
	virtual Uint64 getMaxProcessMemorySize() const;
	virtual Boolean getDistributed(CIMProperty&) const;
	virtual Boolean getDistributed() const;
	virtual Boolean getMaxProcessesPerUser(CIMProperty&) const;
	virtual Uint32 getMaxProcessesPerUser() const;

private:
	CIMName currentScope;

#	include "UNIX_OperatingSystemPrivate.h"


};

#endif /* UNIX_OPERATINGSYSTEM */
