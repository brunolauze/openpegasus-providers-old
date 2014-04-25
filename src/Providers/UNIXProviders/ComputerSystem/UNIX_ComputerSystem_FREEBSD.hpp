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
//#include <Pegasus/Common/FileSystem.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/param.h>     // for MAXHOSTNAMELEN
#include <sys/sysctl.h>	   // sysctl
#include <sys/stat.h>	   // stat
#include <errno.h>         // for errno
#include <stdlib.h>
#include <string.h>

#define CAPTION "Computer System"
#define DESCRIPTION "WBEM-enabled computer system"

UNIX_ComputerSystem::UNIX_ComputerSystem(void)
{
}

UNIX_ComputerSystem::~UNIX_ComputerSystem(void)
{
}


Boolean UNIX_ComputerSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ComputerSystem::getInstanceID() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_ComputerSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ComputerSystem::getCaption() const
{
	return String (CAPTION);
}

Boolean UNIX_ComputerSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ComputerSystem::getDescription() const
{
	return String (DESCRIPTION);
}

Boolean UNIX_ComputerSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ComputerSystem::getElementName() const
{
	return String("ComputerSystem");
}

Boolean UNIX_ComputerSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ComputerSystem::getInstallDate() const
{
	return CIMHelper::getOSInstallDate();
}

Boolean UNIX_ComputerSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ComputerSystem::getName() const
{
	return getInstanceID();
}

Boolean UNIX_ComputerSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ComputerSystem::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK

	return as;

}

Boolean UNIX_ComputerSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ComputerSystem::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ComputerSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ComputerSystem::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_ComputerSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ComputerSystem::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_ComputerSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ComputerSystem::getCommunicationStatus() const
{
	return Uint16(DEFAULT_COMMUNICATION_STATUS);
}

Boolean UNIX_ComputerSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ComputerSystem::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ComputerSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ComputerSystem::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_ComputerSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ComputerSystem::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_ComputerSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ComputerSystem::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_ComputerSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ComputerSystem::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_ComputerSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ComputerSystem::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_ComputerSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ComputerSystem::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_ComputerSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ComputerSystem::getTimeOfLastStateChange() const
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

Boolean UNIX_ComputerSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ComputerSystem::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ComputerSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ComputerSystem::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_ComputerSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ComputerSystem::getCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_ComputerSystem::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_ComputerSystem::getNameFormat() const
{
	return String ("Other");
}

Boolean UNIX_ComputerSystem::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_ComputerSystem::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_ComputerSystem::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_ComputerSystem::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_ComputerSystem::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_ComputerSystem::getRoles() const
{
	Array<String> as;
	// Defines Roles
    // SSH Server -- check sshd_enable
    // WebServer -- check nginx or apache22
    // Database Server -- check mysql or postgresql
    // Network Switch -- check gateway_enable
    // Firewall -- check pf_enable
    // Cim Server -- check cimserver
    // VPN Server -- check openikve2
    // Mail Server - check dovecot2
    // Developement - check git lab
    //  
    // Desktop check ttys8, kde_enable or gdm_enable or just dbus_enable ?

    Array<String> array;
    FILE* pipe = popen("/usr/sbin/sysrc sshd_enable ftpd_enable cimserver_enable samba_server_enable nfsd_enable nginx_enable apache22_enable dovecot2_enable postfix_enable dbus_enable", "r");
    if (!pipe) return false;
    char buffer[256];
    bool webserver = false;
    while(!feof(pipe)) {
    	if (fgets(buffer, 128, pipe) != NULL)
    	{
    		if (strstr(buffer, "sshd_enable: YES") != NULL)
    		{
    			as.append("SSH Server");
    		}
    		if (strstr(buffer, "ftpd_enable: YES") != NULL)
    		{
    			as.append("FTP Server");
    		}
    		if (strstr(buffer, "cimserver_enable: YES") != NULL)
    		{
    			as.append("CIM Server");
    		}
    		if (strstr(buffer, "samba_server_enable: YES") != NULL)
    		{
    			as.append("Directory Server");
    			as.append("File Server");
    		}
    		if (strstr(buffer, "nfsd_enable: YES") != NULL)
    		{
    			array.append("NFS Server");
    		}
    		if (strstr(buffer, "nginx_enable: YES") != NULL)
    		{
    			if (!webserver)
    			{
	    			as.append("Web Server");
	    			webserver = true;
    			}
    		}
    		if (strstr(buffer, "apache22_enable: YES") != NULL)
    		{
    			if (!webserver)
    			{
	    			as.append("Web Server");
	    			webserver = true;
    			}
    		}
    		if (strstr(buffer, "dovecot2_enable: YES") != NULL)
    		{
    			as.append("Mail Server");
    		}
    		if (strstr(buffer, "postfix_enable: YES") != NULL)
    		{
    			as.append("Smtp Server");
    		}
    		/* What is the best way to describe Desktop Role? */
    		if (strstr(buffer, "dbus_enable: YES") != NULL)
    		{
    			as.append("Desktop System");
    		}
    	}
    }
    pclose(pipe);
	return as;
}

Boolean UNIX_ComputerSystem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_ComputerSystem::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ComputerSystem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_ComputerSystem::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ComputerSystem::getDedicated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDICATED, getDedicated());
	return true;
}

Array<Uint16> UNIX_ComputerSystem::getDedicated() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ComputerSystem::getOtherDedicatedDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DEDICATED_DESCRIPTIONS, getOtherDedicatedDescriptions());
	return true;
}

Array<String> UNIX_ComputerSystem::getOtherDedicatedDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ComputerSystem::getResetCapability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESET_CAPABILITY, getResetCapability());
	return true;
}

Uint16 UNIX_ComputerSystem::getResetCapability() const
{
	return Uint16(0);
}

Boolean UNIX_ComputerSystem::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_ComputerSystem::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	size_t ret_len;
    if (sysctlbyname("hw.acpi.supported_sleep_state", NULL, &ret_len, NULL, 0) != -1)
    {
    	char ret[ret_len];
    	if (sysctlbyname("hw.acpi.supported_sleep_state", &ret, &ret_len, NULL, 0) != -1)
    	{
	    	if (strstr(ret, "S2") != NULL)
	    	{
	    		as.append(2);
	    	}
	    	if (strstr(ret, "S3") != NULL)
	    	{
	    		as.append(3);
	    	}
	    	if (strstr(ret, "S4") != NULL)
	    	{
	    		as.append(4);
	    	}
	    	if (strstr(ret, "S5") != NULL)
	    	{
	    		as.append(5);
	    	}
    	}
    }	
    else 
    	as.append(1);

	return as;

}

Boolean UNIX_ComputerSystem::getInitialLoadInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_LOAD_INFO, getInitialLoadInfo());
	return true;
}

Array<String> UNIX_ComputerSystem::getInitialLoadInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ComputerSystem::getLastLoadInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOAD_INFO, getLastLoadInfo());
	return true;
}

String UNIX_ComputerSystem::getLastLoadInfo() const
{
	return String ("");
}

Boolean UNIX_ComputerSystem::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_ComputerSystem::getPowerManagementSupported() const
{
	bool result = false;
	size_t ret_len;
    if (sysctlbyname("hw.acpi.supported_sleep_state", NULL, &ret_len, NULL, 0) != -1)
    {
    	char ret[ret_len];
    	if (sysctlbyname("hw.acpi.supported_sleep_state", &ret, &ret_len, NULL, 0) != -1)
    	{
	    	result = strstr(ret, "S5") != NULL;
    	}
    }
	return Boolean(result);
}

Boolean UNIX_ComputerSystem::getPowerState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_STATE, getPowerState());
	return true;
}

Uint16 UNIX_ComputerSystem::getPowerState() const
{
	return Uint16(0);
}

Boolean UNIX_ComputerSystem::getWakeUpType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WAKE_UP_TYPE, getWakeUpType());
	return true;
}

Uint16 UNIX_ComputerSystem::getWakeUpType() const
{
	return Uint16(0);
}

Boolean UNIX_ComputerSystem::initialize()
{
	return true;
}

Boolean UNIX_ComputerSystem::load(int &pIndex)
{
	if (pIndex == 0) return true;
	return false;
}

Boolean UNIX_ComputerSystem::finalize()
{
	return true;
}

Boolean UNIX_ComputerSystem::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}

	/* EXecute find with extracted keys */
	if (String::equal(nameKey, CIMHelper::EmptyString) ||
		String::equal(nameKey, CIMHelper::HostName))
		return true;

	return false;
}
