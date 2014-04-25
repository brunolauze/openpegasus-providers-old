
#include <sys/stat.h>
#include "UNIX_AccountManagementService_FREEBSD.hxx"

SambaService::SambaService(void)
{
}

SambaService::~SambaService(void)
{
}


Boolean SambaService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String SambaService::getInstanceID() const
{
	return String ("Samba");
}

Boolean SambaService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String SambaService::getCaption() const
{
	return getName();
}

Boolean SambaService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String SambaService::getDescription() const
{
	return String ("Samba is an implementation of PAM used by FreeBSD, NetBSD, DragonFly BSD and Mac OS X (starting with Snow Leopard), and offered as an alternative to Linux PAM in certain Linux distributions.");
}

Boolean SambaService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String SambaService::getElementName() const
{
	return String("AccountManagementService");
}

Boolean SambaService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime SambaService::getInstallDate() const
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

Boolean SambaService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String SambaService::getName() const
{
	return String ("Samba Service");
}

Boolean SambaService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> SambaService::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK	

	return as;

}

Boolean SambaService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> SambaService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean SambaService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String SambaService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean SambaService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 SambaService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean SambaService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 SambaService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean SambaService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 SambaService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean SambaService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 SambaService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean SambaService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 SambaService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean SambaService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 SambaService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean SambaService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String SambaService::getOtherEnabledState() const
{
	return String ("");
}

Boolean SambaService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 SambaService::getRequestedState() const
{
	return Uint16(0);
}

Boolean SambaService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 SambaService::getEnabledDefault() const
{
	return Uint16(2);
}

Boolean SambaService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime SambaService::getTimeOfLastStateChange() const
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

Boolean SambaService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> SambaService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean SambaService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 SambaService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean SambaService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String SambaService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean SambaService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String SambaService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean SambaService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String SambaService::getCreationClassName() const
{
	return String("SambaService");
}

Boolean SambaService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String SambaService::getPrimaryOwnerName() const
{
	return String ("root");
}

Boolean SambaService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String SambaService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean SambaService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String SambaService::getStartMode() const
{
	return String ("Automatic");
}

Boolean SambaService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean SambaService::getStarted() const
{
	return Boolean(true);
}

Boolean SambaService::initialize()
{
	return false;
}

Boolean SambaService::load(int &pIndex)
{
	if (pIndex == 0) return true;
	return false;
}

Boolean SambaService::finalize()
{
	return true;
}


Boolean SambaService::createAccount(
						CIMObjectPath accountTemplate,
						Array<CIMInstance> &accountIdenties,
						CIMInstance &account,
						CIMInstance computerSystem) const
{
	
	return true;
}