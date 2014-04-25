
#include <sys/stat.h>
#include "UNIX_AccountManagementService_FREEBSD.hxx"
#include <unistd.h>
#include <stdio.h>

OpenPAMService::OpenPAMService(void)
{
}

OpenPAMService::~OpenPAMService(void)
{
}


Boolean OpenPAMService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String OpenPAMService::getInstanceID() const
{
	return String ("OpenPAM");
}

Boolean OpenPAMService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String OpenPAMService::getCaption() const
{
	return getName();
}

Boolean OpenPAMService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String OpenPAMService::getDescription() const
{
	return String ("OpenPAM is an implementation of PAM used by FreeBSD, NetBSD, DragonFly BSD and Mac OS X (starting with Snow Leopard), and offered as an alternative to Linux PAM in certain Linux distributions.");
}

Boolean OpenPAMService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String OpenPAMService::getElementName() const
{
	return String("AccountManagementService");
}

Boolean OpenPAMService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime OpenPAMService::getInstallDate() const
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

Boolean OpenPAMService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String OpenPAMService::getName() const
{
	return String ("OpenPAM Service");
}

Boolean OpenPAMService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> OpenPAMService::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK	

	return as;

}

Boolean OpenPAMService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> OpenPAMService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean OpenPAMService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String OpenPAMService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean OpenPAMService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 OpenPAMService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean OpenPAMService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 OpenPAMService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean OpenPAMService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 OpenPAMService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean OpenPAMService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 OpenPAMService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean OpenPAMService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 OpenPAMService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean OpenPAMService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 OpenPAMService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean OpenPAMService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String OpenPAMService::getOtherEnabledState() const
{
	return String ("");
}

Boolean OpenPAMService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 OpenPAMService::getRequestedState() const
{
	return Uint16(0);
}

Boolean OpenPAMService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 OpenPAMService::getEnabledDefault() const
{
	return Uint16(2);
}

Boolean OpenPAMService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime OpenPAMService::getTimeOfLastStateChange() const
{
	struct tm* clock;			// create a time structure
	struct stat attrib;			// create a file attribute structure
	stat("/etc/passwd", &attrib);		// get the attributes /etc/passwd
	clock = gmtime(&(attrib.st_mtime));	// Get the last modified time and put it into the time structure
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

Boolean OpenPAMService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> OpenPAMService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean OpenPAMService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 OpenPAMService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean OpenPAMService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String OpenPAMService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean OpenPAMService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String OpenPAMService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean OpenPAMService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String OpenPAMService::getCreationClassName() const
{
	return String("OpenPAMService");
}

Boolean OpenPAMService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String OpenPAMService::getPrimaryOwnerName() const
{
	return String ("root");
}

Boolean OpenPAMService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String OpenPAMService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean OpenPAMService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String OpenPAMService::getStartMode() const
{
	return String ("Automatic");
}

Boolean OpenPAMService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean OpenPAMService::getStarted() const
{
	return Boolean(true);
}


Boolean OpenPAMService::initialize()
{
	return true;
}

Boolean OpenPAMService::load(int &pIndex)
{
	if (pIndex == 0) return true;
	return false;
}

Boolean OpenPAMService::finalize()
{
	return true;
}


Boolean OpenPAMService::createAccount(
						CIMObjectPath accountTemplate,
						Array<CIMInstance> &accountIdenties,
						CIMInstance &account,
						CIMInstance computerSystem) const
{
	
	String name = CIMHelper::getPropertyAsString(account, "Name");
	String cmd("pw user add -e /etc/pw.conf -q ");

	//Login Class TODO: Review
	//cmd.append("-L <default>");

	cmd.append("-n ");
	cmd.append(name);

	String suid = CIMHelper::getPropertyAsString(account, "UserID");
	if (suid.size() > 0)
	{
		int uid;
		uid = atoi(suid.getCString());
		if (uid > 80) // Seems fairs FreeBSD takes the other ones....
		{
			cmd.append("-u ");
			cmd.append(suid);
		}
	}

	cmd.append("-c ");

	String fullname = CIMHelper::getPropertyAsString(account, "Caption");

	if (fullname.size() == 0)
		cmd.append(name);
	else
		cmd.append(fullname);

	cmd.append("-h fd");
	cmd.append("-m"); /* Create Home Directory */
	cmd.append("-g ");
	cmd.append(name);
	cmd.append("-s csh"); // Shell TODO: Review

	FILE * fp = popen(cmd.getCString(), "w");

	if (fp == NULL) 
	{
		//throw Exception
		return false;
	}
	String password("");
	const char *pwd = password.getCString();
	size_t pwd_len = strlen(pwd);
	fwrite(pwd, sizeof(char), pwd_len, fp);

	pclose(fp);

	return true;
}