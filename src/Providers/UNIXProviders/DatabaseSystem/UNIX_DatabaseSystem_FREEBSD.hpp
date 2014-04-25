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


UNIX_DatabaseSystem::UNIX_DatabaseSystem(void)
{
}

UNIX_DatabaseSystem::~UNIX_DatabaseSystem(void)
{
}


Boolean UNIX_DatabaseSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DatabaseSystem::getInstanceID() const
{
	return caption;
}

Boolean UNIX_DatabaseSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DatabaseSystem::getCaption() const
{
	return getInstanceID();
}

Boolean UNIX_DatabaseSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DatabaseSystem::getDescription() const
{
	return desc;
}

Boolean UNIX_DatabaseSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DatabaseSystem::getElementName() const
{
	return String("DatabaseSystem");
}

Boolean UNIX_DatabaseSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DatabaseSystem::getInstallDate() const
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

Boolean UNIX_DatabaseSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DatabaseSystem::getName() const
{
	switch(currenttype)
	{
		case POSTGRESQL:
			return String("PostgreSQL Database System");
		case MYSQL:
			return String("MySQL Database System");
		case MARIADB:
			return String("MariaDB Database System");
		case SQLITE:
			return String("Sqlite Engine");
		case BDB:
			return String("Berklay Database Engine");
		case MONGODB:
			return String("MongoDB Database System");
		case MEMCACHED:
			return String("Memory Object Cache System");
	}

	return String ("");
}

Boolean UNIX_DatabaseSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DatabaseSystem::getOperationalStatus() const
{
	Array<Uint16> as;
	if (enabled) 
		as.append(2); //OK
	else
		as.append(1); //Not Available
	return as;

}

Boolean UNIX_DatabaseSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DatabaseSystem::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DatabaseSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DatabaseSystem::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DatabaseSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DatabaseSystem::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DatabaseSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DatabaseSystem::getCommunicationStatus() const
{
	return Uint16(DEFAULT_COMMUNICATION_STATUS);
}

Boolean UNIX_DatabaseSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DatabaseSystem::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DatabaseSystem::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DatabaseSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DatabaseSystem::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DatabaseSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DatabaseSystem::getEnabledState() const
{
	if (enabled)
		return Uint16(2);
	return Uint16(3); /* DISABLED */
}

Boolean UNIX_DatabaseSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DatabaseSystem::getOtherEnabledState() const
{
	if (enabled)
		return String ("");
	return String("sysrc reporting system disabled or not activated");
}

Boolean UNIX_DatabaseSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DatabaseSystem::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DatabaseSystem::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DatabaseSystem::getTimeOfLastStateChange() const
{
	if (enabled)
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
	return CIMHelper::NullDate;
}

Boolean UNIX_DatabaseSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DatabaseSystem::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DatabaseSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DatabaseSystem::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DatabaseSystem::getCreationClassName() const
{
	return String("UNIX_DatabaseSystem");
}

Boolean UNIX_DatabaseSystem::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_DatabaseSystem::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_DatabaseSystem::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_DatabaseSystem::getPrimaryOwnerName() const
{
	return owner;
}

Boolean UNIX_DatabaseSystem::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_DatabaseSystem::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_DatabaseSystem::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_DatabaseSystem::getRoles() const
{
	Array<String> as;
	if (currenttype == POSTGRESQL ||
		currenttype == MYSQL ||
		currenttype == MARIADB ||
		currenttype == MONGODB ||
		currenttype == MEMCACHED)
		as.append("Database System");

	return as;

}

Boolean UNIX_DatabaseSystem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DatabaseSystem::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DatabaseSystem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DatabaseSystem::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DatabaseSystem::getDistribution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISTRIBUTION, getDistribution());
	return true;
}

Uint16 UNIX_DatabaseSystem::getDistribution() const
{
	/* Check if we are a cluster */
	return Uint16(3);
}

Boolean UNIX_DatabaseSystem::getStartupTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_TIME, getStartupTime());
	return true;
}

CIMDateTime UNIX_DatabaseSystem::getStartupTime() const
{
	if (enabled)
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
	return CIMHelper::NullDate;
}

Boolean UNIX_DatabaseSystem::getServingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVING_STATUS, getServingStatus());
	return true;
}

Uint16 UNIX_DatabaseSystem::getServingStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseSystem::getLastServingStatusUpdate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_SERVING_STATUS_UPDATE, getLastServingStatusUpdate());
	return true;
}

CIMDateTime UNIX_DatabaseSystem::getLastServingStatusUpdate() const
{
	if (enabled)
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
	return CIMHelper::NullDate;
}

String UNIX_DatabaseSystem::getIdentificationCode() const
{
	if (currenttype == POSTGRESQL) return String("POSTGRESQL");
	else if (currenttype == MYSQL) return String("MYSQL");
	else if (currenttype == MARIADB) return String("MARIADB");
	else if (currenttype == SQLITE) return String("SQLITE");
	else if (currenttype == BDB) return String("BDB");
	else if (currenttype == MONGODB) return String("MONGODB");
	else if (currenttype == MEMCACHED) return String("MEMCACHED");
	return String("");
}

Boolean UNIX_DatabaseSystem::initialize()
{
	return true;
}

Boolean UNIX_DatabaseSystem::isEnabled(DBTYPE type)
{
	const char *val;
	val = NULL;

	if (type == POSTGRESQL)
		val = "postgresql_enable";
	else if (type == MYSQL)
		val = "mysql_enable";
	else if (type == MARIADB)
		val = "mariadb_enable";
	else if (type == MONGODB)
		val = "mongodb_enable";
	else if (type == MEMCACHED)
		val = "memcached_enable";
	else 
		val = NULL;

	if (val == NULL) return Boolean(true); // All engine are "enabled" or kind of

	char cmd[256];
	char ret[256];
	sprintf(cmd, "%s %s", "/usr/sbin/sysrc -i", val);
	sprintf(ret, "%s: YES", val);
	cout << "TESTING: " << cmd << endl;
	FILE* pipe = popen(cmd, "r");
    if (!pipe) return false;
    char buffer[256];
    bool isenabled = false;
    while(!feof(pipe)) {
    	if (fgets(buffer, 128, pipe) != NULL)
    	{
    		if (strstr(buffer, ret) != NULL)
    		{
    			isenabled = true;
    		}
    	}
    	break;
	}
    pclose(pipe);
   	return Boolean(isenabled);
}

Boolean UNIX_DatabaseSystem::load(int &pIndex)
{
	UNIX_SoftwareElement softwareElement;

	// check if postgresql is installed
	if (pIndex == 0)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("postgresql*-server")))
		{
			caption = name = softwareElement.getInstanceID();
			name = softwareElement.getName();
			desc = softwareElement.getDescription();
			owner = softwareElement.getPrimaryOwnerName();
			currenttype = POSTGRESQL;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	// check if mysql is installed
	if (pIndex == 1)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("mysql*-server")))
		{
			caption = name = softwareElement.getInstanceID();
			name = softwareElement.getName();
			desc = softwareElement.getDescription();
			owner = softwareElement.getPrimaryOwnerName();
			currenttype = MYSQL;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	// check if mariadb is installed
	if (pIndex == 2)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("mariadb*-server")))
		{
			caption = name = softwareElement.getInstanceID();
			name = softwareElement.getName();
			desc = softwareElement.getDescription();
			owner = softwareElement.getPrimaryOwnerName();
			currenttype = MARIADB;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	//check for sqlite
	if (pIndex == 3)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("sqlite")))
		{
			caption = name = softwareElement.getInstanceID();
			name = softwareElement.getName();
			desc = softwareElement.getDescription();
			owner = softwareElement.getPrimaryOwnerName();
			currenttype = SQLITE;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	//check for berkley db
	if (pIndex == 4)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("db[0-9]")))
		{
			caption = name = softwareElement.getInstanceID();
			name = softwareElement.getName();
			desc = softwareElement.getDescription();
			owner = softwareElement.getPrimaryOwnerName();
			currenttype = BDB;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	//check for mongo db NoSQL
	if (pIndex == 5)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("mongodb")))
		{
			caption = name = softwareElement.getInstanceID();
			name = softwareElement.getName();
			desc = softwareElement.getDescription();
			owner = softwareElement.getPrimaryOwnerName();
			currenttype = MONGODB;
			enabled = isEnabled(currenttype);
			return true;
		}
		pIndex++;
	}

	//check for memcached
	if (pIndex == 6)
	{
		softwareElement.initialize();
		if (softwareElement.get(String("memcached")))
		{
			caption = name = softwareElement.getInstanceID();
			name = softwareElement.getName();
			desc = softwareElement.getDescription();
			currenttype = MEMCACHED;
			enabled = isEnabled(currenttype);
			return true;
		}
	}
	return false;
}

Boolean UNIX_DatabaseSystem::finalize()
{
	return true;
}

Boolean UNIX_DatabaseSystem::find(Array<CIMKeyBinding> &kbArray)
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

	/* Execute find with extracted keys */
	bool found = false;
	for(int i = 0; load(i); i++)
	{
		if (String::equalNoCase(getName(),nameKey))
		{
			found = true;
			break;
		}
	}

	return found;
}
