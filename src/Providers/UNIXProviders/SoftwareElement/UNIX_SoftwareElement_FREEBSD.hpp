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

/* These are the fields of the Full output, in order */
#define INFO_NAME               (1LL<<0)
#define INFO_VERSION            (1LL<<1)
#define INFO_ORIGIN             (1LL<<2)
#define INFO_ARCH               (1LL<<3)
#define INFO_PREFIX             (1LL<<4)
#define INFO_REPOSITORY         (1LL<<5)
#define INFO_CATEGORIES         (1LL<<6)
#define INFO_LICENSES           (1LL<<7)
#define INFO_MAINTAINER         (1LL<<8)
#define INFO_WWW                (1LL<<9)
#define INFO_COMMENT            (1LL<<10)
#define INFO_OPTIONS            (1LL<<11)
#define INFO_SHLIBS_REQUIRED    (1LL<<12)
#define INFO_SHLIBS_PROVIDED    (1LL<<13)
#define INFO_ANNOTATIONS        (1LL<<14)
#define INFO_FLATSIZE           (1LL<<15)
#define INFO_PKGSIZE            (1LL<<16)
#define INFO_DESCR              (1LL<<17)

/* Other fields not part of the Full output */
#define INFO_MESSAGE            (1LL<<18)
#define INFO_DEPS               (1LL<<19)
#define INFO_RDEPS              (1LL<<20)
#define INFO_FILES              (1LL<<21)
#define INFO_DIRS               (1LL<<22)
#define INFO_USERS              (1LL<<23)
#define INFO_GROUPS             (1LL<<24)
#define INFO_REPOURL            (1LL<<25)
#define INFO_LOCKED             (1LL<<26)
#define INFO_OPTION_DEFAULTS    (1LL<<27)
#define INFO_OPTION_DESCRIPTIONS (1LL<<28)

#define INFO_LASTFIELD  INFO_LOCKED
#define INFO_ALL        (((INFO_LASTFIELD) << 1) - 1)

/* Identifying tags */
#define INFO_TAG_NAME           (1LL<<60)
#define INFO_TAG_ORIGIN         (1LL<<61)
#define INFO_TAG_NAMEVER        (1LL<<62)

/* Output YAML format */
#define INFO_RAW        (-1LL<<63)

/* Everything in the 'full' package output */
#define INFO_FULL       (INFO_NAME|INFO_VERSION|INFO_ORIGIN|INFO_ARCH|INFO_PREFIX| \
                         INFO_REPOSITORY|INFO_CATEGORIES|INFO_LICENSES|  \
                         INFO_MAINTAINER|INFO_WWW|INFO_COMMENT|          \
                         INFO_OPTIONS|INFO_SHLIBS_REQUIRED|              \
                         INFO_SHLIBS_PROVIDED|INFO_ANNOTATIONS|          \
                         INFO_FLATSIZE|INFO_PKGSIZE|INFO_DESCR)

/* Everything that can take more than one line to print */
#define INFO_MULTILINE  (INFO_OPTIONS|INFO_SHLIBS_REQUIRED|            \
                         INFO_SHLIBS_PROVIDED|INFO_ANNOTATIONS|        \
                         INFO_DESCR|INFO_MESSAGE|INFO_DEPS|INFO_RDEPS| \
                         INFO_FILES|INFO_DIRS)


/**
 * Fetch repository calalogues.
 */
static int
pkgcli_update(bool force) {
        int retcode = EPKG_FATAL;
        struct pkg_repo *r = NULL;

        /* Only auto update if the user has write access. */
        if (pkgdb_access(PKGDB_MODE_READ|PKGDB_MODE_WRITE|PKGDB_MODE_CREATE,
            PKGDB_DB_REPO) == EPKG_ENOACCESS)
                return (EPKG_OK);

        //if (!quiet)
                //printf("Updating repository catalogue\n");

        while (pkg_repos(&r) == EPKG_OK) {
                if (!pkg_repo_enabled(r))
                        continue;
                retcode = pkg_update(r, force);
                if (retcode == EPKG_UPTODATE) {
                        //if (!quiet)
                        //        printf("%s repository catalogue is "
                        //             "up-to-date, no need to fetch "
                        //             "fresh copy\n", pkg_repo_ident(r));
                                retcode = EPKG_OK;
                }
                if (retcode != EPKG_OK)
                        break;
        }

        return (retcode);
}


/* what the pkg needs to load in order to display the requested info */
int UNIX_SoftwareElement::getPkgFlag(uint64_t opt, bool remote)
{
        int flags = PKG_LOAD_BASIC;

        if (opt & INFO_CATEGORIES)
                flags |= PKG_LOAD_CATEGORIES;
        if (opt & INFO_LICENSES)
                flags |= PKG_LOAD_LICENSES;
        if (opt & (INFO_OPTIONS|INFO_OPTION_DEFAULTS|INFO_OPTION_DESCRIPTIONS))
                flags |= PKG_LOAD_OPTIONS;
        if (opt & INFO_SHLIBS_REQUIRED)
                flags |= PKG_LOAD_SHLIBS_REQUIRED;
        if (opt & INFO_SHLIBS_PROVIDED)
                flags |= PKG_LOAD_SHLIBS_PROVIDED;
        if (opt & INFO_ANNOTATIONS)
                flags |= PKG_LOAD_ANNOTATIONS;
        if (opt & INFO_DEPS)
                flags |= PKG_LOAD_DEPS;
        if (opt & INFO_RDEPS)
                flags |= PKG_LOAD_RDEPS;
        if (opt & INFO_FILES)
                flags |= PKG_LOAD_FILES;
        if (opt & INFO_DIRS)
                flags |= PKG_LOAD_DIRS;
        if (opt & INFO_USERS)
                flags |= PKG_LOAD_USERS;
        if (opt & INFO_GROUPS)
                flags |= PKG_LOAD_GROUPS;
        if (opt & INFO_RAW) {
                flags |= PKG_LOAD_CATEGORIES      |
                         PKG_LOAD_LICENSES        |
                         PKG_LOAD_OPTIONS         |
                         PKG_LOAD_SHLIBS_REQUIRED |
                         PKG_LOAD_SHLIBS_PROVIDED |
                         PKG_LOAD_ANNOTATIONS     |
                        PKG_LOAD_DEPS;
                if (!remote) {
                        flags |= PKG_LOAD_FILES  |
                                PKG_LOAD_DIRS    |
                                PKG_LOAD_USERS   |
                                PKG_LOAD_GROUPS  |
                                PKG_LOAD_SCRIPTS;
                }
        }

        return flags;
}

String UNIX_SoftwareElement::getPackageProperty(const char * name, ...) const
{
    int              count;
    struct sbuf     *sbuf;
    String val;
    sbuf  = sbuf_new_auto();
    if (sbuf)
            sbuf = pkg_sbuf_printf(sbuf, name, pkg);
    if (sbuf && sbuf_len(sbuf) >= 0) {
            sbuf_finish(sbuf);
            if (strcmp(name, "%e") == 0)
            {
            	std::string tmp = CIMHelper::encode(sbuf_data(sbuf));
            	val.assign(tmp.c_str());
        	}
            else 
            {
				val.assign(sbuf_data(sbuf));
			}
			/*
            try 
			{
        		val.assign(value);
        	}
        	catch(Exception &e)
        	{
        		cout << e.getMessage() << endl;
        		exit(0);
        	}
        	*/
    } else {
            count = -1;
            val.assign("");
    }
	if (sbuf)
		sbuf_delete(sbuf);
	return val;
}

UNIX_SoftwareElement::UNIX_SoftwareElement(void)
{
}

UNIX_SoftwareElement::~UNIX_SoftwareElement(void)
{
}

String UNIX_SoftwareElement::getPrimaryOwnerName() const
{
	String s = getPackageProperty("%U");
	if (s.size() == 0) return String("");
	return s.subString(0, s.size() - 1);
}

Boolean UNIX_SoftwareElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareElement::getInstanceID() const
{
	String s(getPackageProperty("%n"));
	s.append("-");
	s.append(getPackageProperty("%v"));
	return s;
}

Boolean UNIX_SoftwareElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareElement::getCaption() const
{
	return getInstanceID();
}

Boolean UNIX_SoftwareElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareElement::getDescription() const
{
	//if (remote) return String(""); //CRASHING...
	return getPackageProperty ("%e");
}

Boolean UNIX_SoftwareElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareElement::getElementName() const
{
	return String("SoftwareElement");
}

Boolean UNIX_SoftwareElement::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SoftwareElement::getInstallDate() const
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

Boolean UNIX_SoftwareElement::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SoftwareElement::getName() const
{
	return getPackageProperty ("%n");
}

Boolean UNIX_SoftwareElement::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SoftwareElement::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;
}

Boolean UNIX_SoftwareElement::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SoftwareElement::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareElement::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SoftwareElement::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_SoftwareElement::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SoftwareElement::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_SoftwareElement::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareElement::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareElement::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_SoftwareElement::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_SoftwareElement::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_SoftwareElement::getVersion() const
{
	return getPackageProperty("%v");
}

Boolean UNIX_SoftwareElement::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_SoftwareElement::getSoftwareElementState() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareElement::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_SoftwareElement::getSoftwareElementID() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_SoftwareElement::getTargetOperatingSystem() const
{
	return Uint16(42);
}

Boolean UNIX_SoftwareElement::getOtherTargetOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TARGET_OS, getOtherTargetOS());
	return true;
}

String UNIX_SoftwareElement::getOtherTargetOS() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_SoftwareElement::getManufacturer() const
{
	return getPackageProperty ("%m");
}

Boolean UNIX_SoftwareElement::getBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUILD_NUMBER, getBuildNumber());
	return true;
}

String UNIX_SoftwareElement::getBuildNumber() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_SoftwareElement::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

String UNIX_SoftwareElement::getCodeSet() const
{
	return String ("UTF-8");
}

Boolean UNIX_SoftwareElement::getIdentificationCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION_CODE, getIdentificationCode());
	return true;
}

String UNIX_SoftwareElement::getIdentificationCode() const
{
	return getInstanceID();
}

Boolean UNIX_SoftwareElement::getLanguageEdition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGE_EDITION, getLanguageEdition());
	return true;
}

String UNIX_SoftwareElement::getLanguageEdition() const
{
	return String ("Multilanguage");
}

Boolean UNIX_SoftwareElement::get(String packageName)
{
	String pkgName(packageName);
	pkgName.append("*");
	int ret;
	if (db != NULL)
	{
		pkg_free(pkg);
    	pkgdb_close(db);
	}

	ret = pkgdb_open(&db, PKGDB_DEFAULT);
    if (ret != EPKG_OK)
    	return false;
	if ((it = pkgdb_query(db, pkgName.getCString(), MATCH_GLOB)) == NULL) {
	        return false; //(EX_IOERR);
	}
	query_flags = getPkgFlag(INFO_ALL, false);
	if ((ret = pkgdb_it_next(it, &pkg, query_flags)) == EPKG_OK) {
		return true;
	}
	return false;
}

Boolean UNIX_SoftwareElement::initialize()
{
	db = NULL;
    it = NULL;
    pkg = NULL;
    int ret;
    if (!pkg_initialized())
		if (pkg_init(NULL, NULL) != EPKG_OK)
			throw new CIMException(CIM_ERR_FAILED, "Cannot init software manager");
		
	if (currentScope.equal(String("UNIX_ComputerSystem")))
	{
		remote = false;
		ret = pkgdb_access(PKGDB_MODE_READ, PKGDB_DB_LOCAL);
	}
	else {
		remote = true;
		ret = pkgdb_access(PKGDB_MODE_READ, PKGDB_DB_REPO);
	}
	if (ret == EPKG_ENOACCESS) {
	        //warnx("Insufficient privileges to query the package database");
	        throw new CIMException(CIM_ERR_FAILED, "Insufficient privileges to query the package database");
	        //return false; /* (EX_NOPERM); */
	} else if (ret == EPKG_ENODB) {
	        //if (match == MATCH_ALL)
	        //        return false; /* (EX_OK); */
	        //if (origin_search)
	        //        return false; /* (EX_OK); */
	        throw new CIMException(CIM_ERR_FAILED, "Sofware database not present");
	        //return false; /* (EX_UNAVAILABLE); */
	} else if (ret != EPKG_OK)
	        throw new CIMException(CIM_ERR_FAILED, "Sofware database is corrupted");
	        //return false; /* (EX_IOERR); */
    
	return true;
}

Boolean UNIX_SoftwareElement::load(int &pIndex)
{
	int ret;
	char *pkgname;
	const char *reponame = NULL;
	pkgname = NULL;
	if (db == NULL)
	{
		if (!remote)
		{
			ret = pkgdb_open(&db, PKGDB_DEFAULT);
			if (ret != EPKG_OK)
	    	return false;
			if ((it = pkgdb_query(db, pkgname, MATCH_ALL)) == NULL) {
			        throw new CIMException(CIM_ERR_FAILED, "Software Manager query failed");
			        //return false; //(EX_IOERR);
			}
			query_flags = PKG_LOAD_BASIC; //getPkgFlag(INFO_ALL, false);
		}
		else {
			bool auto_update = true; // TODO: Review
			if (auto_update && (ret = pkgcli_update(false)) != EPKG_OK)
                return false;
			ret = pkgdb_open(&db, PKGDB_REMOTE);	
			if (ret != EPKG_OK)
	    		throw new CIMException(CIM_ERR_FAILED, "Cannot open software database");
			if ((it = pkgdb_rquery(db, pkgname, MATCH_ALL, reponame)) == NULL) {
			    throw new CIMException(CIM_ERR_FAILED, "Software Manager remote query failed");
			    //return false; //(EX_IOERR);
			}
			query_flags = PKG_LOAD_BASIC; //getPkgFlag(INFO_ALL, true);
		}
	}
	if ((ret = pkgdb_it_next(it, &pkg, query_flags)) == EPKG_OK) {
		return true;
	}
	return false;
}

Boolean UNIX_SoftwareElement::finalize()
{
	pkgdb_it_free(it);
	pkg_free(pkg);
    pkgdb_close(db);
    pkg = NULL;
	db = NULL;
    it = NULL;
	return true;
}

Boolean UNIX_SoftwareElement::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String versionKey;
	String softwareElementStateKey;
	String softwareElementIDKey;
	String targetOperatingSystemKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_STATE)) softwareElementStateKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_ID)) softwareElementIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET_OPERATING_SYSTEM)) targetOperatingSystemKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
