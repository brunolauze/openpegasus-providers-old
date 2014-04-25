
#include "UNIX_Service.h"

UNIX_Service::UNIX_Service() { }
UNIX_Service::~UNIX_Service() { }

Boolean UNIX_Service::initialize()
{
	return true;
}

Boolean UNIX_Service::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Service::finalize()
{
	return true;
}

Boolean UNIX_Service::find(Array<CIMKeyBinding>&)
{
	return false;
}

Boolean UNIX_Service::validateKey(CIMKeyBinding&) const
{
	return false;
}

void UNIX_Service::setScope(CIMName scope)
{
	_scope = scope.getString();
}

Boolean UNIX_Service::getInstanceID(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Service::getInstanceID() const
{
	return _name;
}

Boolean UNIX_Service::getCaption(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Service::getCaption() const
{
	return _name;
}

Boolean UNIX_Service::getDescription(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Service::getDescription() const
{
	return String("");
}


Boolean UNIX_Service::getElementName(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Service::getElementName() const
{
	return String("Service");
}

Boolean UNIX_Service::getInstallDate(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Service::getInstallDate() const
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

Boolean UNIX_Service::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Service::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Service::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Service::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Service::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Service::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Service::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Service::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Service::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Service::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Service::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Service::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Service::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Service::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Service::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Service::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Service::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Service::getEnabledState() const
{
	return 0;
}

Boolean UNIX_Service::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Service::getOtherEnabledState() const
{
	return String("");
}

Boolean UNIX_Service::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Service::getRequestedState() const
{
	return 0;
}

Boolean UNIX_Service::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Service::getEnabledDefault() const
{
	return 0;
}

Boolean UNIX_Service::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Service::getTimeOfLastStateChange() const
{
	return CIMHelper::NullDate;
}

Boolean UNIX_Service::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Service::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	return as;
}

Boolean UNIX_Service::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Service::getTransitioningToState() const
{
	return 0;
}

Boolean UNIX_Service::getSystemCreationClassName(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Service::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Service::getSystemName(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Service::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Service::getCreationClassName(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Service::getCreationClassName() const
{
	return String("UNIX_Service");
}

Boolean UNIX_Service::getName(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Service::getName() const
{
	return _name;
}

Boolean UNIX_Service::getPrimaryOwnerName(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_Service::getPrimaryOwnerName() const
{
	return String("");
}

Boolean UNIX_Service::getPrimaryOwnerContact(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_Service::getPrimaryOwnerContact() const
{
	return String("");
}

Boolean UNIX_Service::getStartMode(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_Service::getStartMode() const
{
	return String("Automatic");
}

Boolean UNIX_Service::getStarted(CIMProperty &_p) const
{
	_p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_Service::getStarted() const
{
	return true;
}

void UNIX_Service::loadService(String name, Boolean started, String startMode)
{
	_name = name;
	_started = started;
	_startMode = startMode;
}

