
#include <sys/stat.h>

#include "UNIX_AccountManagementService_FREEBSD.hxx"

OpenLdapService::OpenLdapService(void)
{
}

OpenLdapService::~OpenLdapService(void)
{
}


Boolean OpenLdapService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String OpenLdapService::getInstanceID() const
{
	return String ("OpenLdap");
}

Boolean OpenLdapService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String OpenLdapService::getCaption() const
{
	return getName();
}

Boolean OpenLdapService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String OpenLdapService::getDescription() const
{
	return String ("OpenLdap is an implementation of PAM used by FreeBSD, NetBSD, DragonFly BSD and Mac OS X (starting with Snow Leopard), and offered as an alternative to Linux PAM in certain Linux distributions.");
}

Boolean OpenLdapService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String OpenLdapService::getElementName() const
{
	return String("AccountManagementService");
}

Boolean OpenLdapService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime OpenLdapService::getInstallDate() const
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

Boolean OpenLdapService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String OpenLdapService::getName() const
{
	return String ("OpenLdap Service");
}

Boolean OpenLdapService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> OpenLdapService::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK	

	return as;

}

Boolean OpenLdapService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> OpenLdapService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean OpenLdapService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String OpenLdapService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean OpenLdapService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 OpenLdapService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean OpenLdapService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 OpenLdapService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean OpenLdapService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 OpenLdapService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean OpenLdapService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 OpenLdapService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean OpenLdapService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 OpenLdapService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean OpenLdapService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 OpenLdapService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean OpenLdapService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String OpenLdapService::getOtherEnabledState() const
{
	return String ("");
}

Boolean OpenLdapService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 OpenLdapService::getRequestedState() const
{
	return Uint16(0);
}

Boolean OpenLdapService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 OpenLdapService::getEnabledDefault() const
{
	return Uint16(2);
}

Boolean OpenLdapService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime OpenLdapService::getTimeOfLastStateChange() const
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

Boolean OpenLdapService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> OpenLdapService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean OpenLdapService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 OpenLdapService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean OpenLdapService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String OpenLdapService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean OpenLdapService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String OpenLdapService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean OpenLdapService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String OpenLdapService::getCreationClassName() const
{
	return String("OpenLdapService");
}

Boolean OpenLdapService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String OpenLdapService::getPrimaryOwnerName() const
{
	return String ("root");
}

Boolean OpenLdapService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String OpenLdapService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean OpenLdapService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String OpenLdapService::getStartMode() const
{
	return String ("Automatic");
}

Boolean OpenLdapService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean OpenLdapService::getStarted() const
{
	return Boolean(true);
}

Boolean OpenLdapService::initialize()
{
	return false;
}

Boolean OpenLdapService::load(int &pIndex)
{
	if (pIndex == 0) return true;
	return false;
}

Boolean OpenLdapService::finalize()
{
	return true;
}

Boolean OpenLdapService::createAccount(
						CIMObjectPath accountTemplate,
						Array<CIMInstance> &accountIdenties,
						CIMInstance &account,
						CIMInstance computerSystem) const
{
	
	return true;
}
