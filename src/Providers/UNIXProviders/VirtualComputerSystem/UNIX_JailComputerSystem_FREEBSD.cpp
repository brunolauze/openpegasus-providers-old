#ifdef PEGASUS_OS_FREEBSD

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
#define INET
#define INET6

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: head/usr.sbin/jls/jls.c 250736 2013-05-17 08:48:16Z des $");

#include <sys/param.h>
#include <sys/jail.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/sysctl.h>

#include <arpa/inet.h>
#include <netinet/in.h>

#include <err.h>
#include <errno.h>
#include <jail.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define	JP_USER		0x01000000
#define	JP_OPT		0x02000000

#include "UNIX_VirtualComputerSystem_FREEBSD.hxx"

UNIX_JailComputerSystem::UNIX_JailComputerSystem(void)
{
}

UNIX_JailComputerSystem::~UNIX_JailComputerSystem(void)
{
}


Boolean UNIX_JailComputerSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_JailComputerSystem::getInstanceID() const
{
	String s("jail://");
	s.append(_get_param_String("path"));
	return s;
}

Boolean UNIX_JailComputerSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_JailComputerSystem::getCaption() const
{
	return _get_param_String("host.hostname");
}

Boolean UNIX_JailComputerSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_JailComputerSystem::getDescription() const
{
	String s("FreeBSD Jail ");
	s.append(getCaption());
	s.append(" mounted at ");
	s.append(_get_param_String("path"));
	return s;
}

Boolean UNIX_JailComputerSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_JailComputerSystem::getElementName() const
{
	return String("JailComputerSystem");
}

Boolean UNIX_JailComputerSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_JailComputerSystem::getInstallDate() const
{
	struct tm* clock;			// create a time structure
	struct stat attrib;			// create a file attribute structure
	stat(_get_param_String("path").getCString(), &attrib);		// get the attributes mnt
	clock = gmtime(&(attrib.st_birthtime));	// Get the last modified time and put it into the time structure
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

Boolean UNIX_JailComputerSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_JailComputerSystem::getName() const
{
	return _get_param_String("name");
}

Boolean UNIX_JailComputerSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_JailComputerSystem::getOperationalStatus() const
{
	Array<Uint16> as;
	Uint32 dying = _get_param_Uint32("dying");
	if (dying) 
		as.append(4); //Stopping
	else 
		as.append(2); //OK

	return as;

}

Boolean UNIX_JailComputerSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_JailComputerSystem::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_JailComputerSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_JailComputerSystem::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_JailComputerSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_JailComputerSystem::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_JailComputerSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_JailComputerSystem::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_JailComputerSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_JailComputerSystem::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_JailComputerSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_JailComputerSystem::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_JailComputerSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_JailComputerSystem::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_JailComputerSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_JailComputerSystem::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_JailComputerSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_JailComputerSystem::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_JailComputerSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_JailComputerSystem::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_JailComputerSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_JailComputerSystem::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_JailComputerSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_JailComputerSystem::getTimeOfLastStateChange() const
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

Boolean UNIX_JailComputerSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_JailComputerSystem::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_JailComputerSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_JailComputerSystem::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_JailComputerSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_JailComputerSystem::getCreationClassName() const
{
	return String("UNIX_JailComputerSystem");
}

Boolean UNIX_JailComputerSystem::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_JailComputerSystem::getNameFormat() const
{
	return String ("[NAME]");
}

Boolean UNIX_JailComputerSystem::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_JailComputerSystem::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_JailComputerSystem::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_JailComputerSystem::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_JailComputerSystem::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_JailComputerSystem::getRoles() const
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
    String cmd("jexec "); // JailMe ??
    char sjid[128];
    Uint32 jid = _get_param_Uint32("jid");
    if (jid == 0) return array;
    sprintf(sjid, "%d", jid);
    cmd.append(sjid);
    cmd.append(" /usr/sbin/sysrc sshd_enable ftpd_enable cimserver_enable samba_server_enable nfsd_enable nginx_enable apache22_enable dovecot2_enable postfix_enable dbus_enable");
    cmd.append(" 2>/dev/null");
    FILE* pipe = popen(cmd.getCString(), "r");
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

Boolean UNIX_JailComputerSystem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_JailComputerSystem::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_JailComputerSystem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_JailComputerSystem::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_JailComputerSystem::getDedicated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDICATED, getDedicated());
	return true;
}

Array<Uint16> UNIX_JailComputerSystem::getDedicated() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_JailComputerSystem::getOtherDedicatedDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DEDICATED_DESCRIPTIONS, getOtherDedicatedDescriptions());
	return true;
}

Array<String> UNIX_JailComputerSystem::getOtherDedicatedDescriptions() const
{
	Array<String> as;
	

	return as;
}

Boolean UNIX_JailComputerSystem::getResetCapability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESET_CAPABILITY, getResetCapability());
	return true;
}

Uint16 UNIX_JailComputerSystem::getResetCapability() const
{
	return Uint16(0);
}

Boolean UNIX_JailComputerSystem::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_JailComputerSystem::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_JailComputerSystem::getVirtualSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM, getVirtualSystem());
	return true;
}

String UNIX_JailComputerSystem::getVirtualSystem() const
{
	return String ("Jail");
}


void UNIX_JailComputerSystem::requestStateChange(Uint32 requestedState, CIMDateTime timeoutPeriod)
{
	cout << "Executing in jail" << endl;
	String cmd;
	Uint32 dying = _get_param_Uint32("dying");
	if (!dying && (requestedState == 3 || 
		requestedState == 4 || 
		requestedState == 6))
	{
		//cmd.append("service jail stop ");
		cmd.append("ezjail-admin stop ");
		cmd.append(getName());
		system(cmd.getCString());
	}
	else if (requestedState == 1)
	{
		cmd.append("ezjail-admin start ");
		cmd.append(getName());
		system(cmd.getCString());
	}
	else if (!dying && (requestedState == 10 || 
		requestedState == 10))
	{
		//cmd.append("service jail restart ");
		cmd.append("ezjail-admin restart ");
		cmd.append(getName());
		system(cmd.getCString());
	}
}

void UNIX_JailComputerSystem::setPowerState(Uint32 powerState, CIMDateTime time)
{

}

Boolean UNIX_JailComputerSystem::initialize()
{
	nparams = 0;

#ifdef INET6
	ip6_ok = feature_present("inet6");
#endif
#ifdef INET
	ip4_ok = feature_present("inet");
#endif

	add_param("all", NULL, (size_t)0, NULL, JP_USER);
	add_param("lastjid", &lastjid, sizeof(lastjid), NULL, 0);
	lastjid = 0;
	return true;
}

Boolean UNIX_JailComputerSystem::load(int &pIndex)
{
	int jflags = 0;
	/* Normal Installed Jails */
	jflags |= JAIL_DYING;
	if ((lastjid = print_jail(0, jflags)) >= 0)
	{
		return true;
	}

	/* Check possible prepared places for jails */

	/* 
		The idea is to list possbile ComputerSystem
		suceptible to be used in a UNIX_InstalledOS
		creation process. 

		This VirtualComputerSystem could be used a 
		GroupComponent in UNIX_InstalledOS and 
		create the jail from there.

	*/

	return false;
}

Boolean UNIX_JailComputerSystem::finalize()
{
	return true;
}

Boolean UNIX_JailComputerSystem::find(Array<CIMKeyBinding> &kbArray)
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

	return false;
}




int UNIX_JailComputerSystem::sort_param(const void *a, const void *b)
{
	const struct jailparam *parama, *paramb;
	char *ap, *bp;

	/* Put top-level parameters first. */
	parama = reinterpret_cast<const struct jailparam *>(a);
	paramb = reinterpret_cast<const struct jailparam *>(b);
	ap = strchr(parama->jp_name, '.');
	bp = strchr(paramb->jp_name, '.');
	if (ap && !bp)
		return (1);
	if (bp && !ap)
		return (-1);
	return (strcmp(parama->jp_name, paramb->jp_name));
}

char * UNIX_JailComputerSystem::noname(const char *name)
{
	char *nname, *p;

	nname = (char*)malloc(strlen(name) + 3);
	if (nname == NULL)
		err(1, "malloc");
	p = strrchr(name, '.');
	if (p != NULL)
		sprintf(nname, "%.*s.no%s", (int)(p - name), name, p + 1);
	else
		sprintf(nname, "no%s", name);
	return nname;
}

char * UNIX_JailComputerSystem::nononame(const char *name)
{
	char *nname, *p;

	p = strrchr(name, '.');
	if (strncmp(p ? p + 1 : name, "no", 2))
		return NULL;
	nname = (char*)malloc(strlen(name) - 1);
	if (nname == NULL)
		err(1, "malloc");
	if (p != NULL)
		sprintf(nname, "%.*s.%s", (int)(p - name), name, p + 3);
	else
		strcpy(nname, name + 2);
	return nname;
}

void UNIX_JailComputerSystem::quoted_print(char *str)
{
	int c, qc;
	char *p = str;

	/* An empty string needs quoting. */
	if (!*p) {
		fputs("\"\"", stdout);
		return;
	}

	/*
	 * The value will be surrounded by quotes if it contains spaces
	 * or quotes.
	 */
	qc = strchr(p, '\'') ? '"'
	    : strchr(p, '"') ? '\''
	    : strchr(p, ' ') || strchr(p, '\t') ? '"'
	    : 0;
	if (qc)
		putchar(qc);
	while ((c = *p++)) {
		if (c == '\\' || c == qc)
			putchar('\\');
		putchar(c);
	}
	if (qc)
		putchar(qc);
}

int
UNIX_JailComputerSystem::add_param(const char *name, void *value, size_t valuelen,
    struct jailparam *source, unsigned flags)
{
	struct jailparam *param, *tparams;
	int i, tnparams;

	static int paramlistsize;

	/* The pseudo-parameter "all" scans the list of available parameters. */
	if (!strcmp(name, "all")) {
		tnparams = jailparam_all(&tparams);
		if (tnparams < 0)
			errx(1, "%s", jail_errmsg);
		qsort(tparams, (size_t)tnparams, sizeof(struct jailparam),
		    sort_param);
		for (i = 0; i < tnparams; i++)
			add_param(tparams[i].jp_name, NULL, (size_t)0,
			    tparams + i, flags);
		free(tparams);
		return -1;
	}

	/* Check for repeat parameters. */
	for (i = 0; i < nparams; i++)
	{
		if (!strcmp(name, params[i].jp_name)) {
			if (value != NULL && jailparam_import_raw(params + i,
			    value, valuelen) < 0)
				errx(1, "%s", jail_errmsg);
			params[i].jp_flags |= flags;
			if (source != NULL)
				jailparam_free(source, 1);
			return i;
		}
	}

	/* Make sure there is room for the new param record. */
	if (!nparams) {
		paramlistsize = 32;
		params = (struct jailparam *)malloc(paramlistsize * sizeof(*params));
		param_parent = (int *)malloc(paramlistsize * sizeof(*param_parent));
		if (params == NULL || param_parent == NULL)
			err(1, "malloc");
	} else if (nparams >= paramlistsize) {
		paramlistsize *= 2;
		params = (struct jailparam *)realloc(params, paramlistsize * sizeof(*params));
		param_parent = (int *)realloc(param_parent,
		    paramlistsize * sizeof(*param_parent));
		if (params == NULL || param_parent == NULL)
			err(1, "realloc");
	}

	/* Look up the parameter. */
	param_parent[nparams] = -1;
	param = params + nparams++;
	if (source != NULL) {
		*param = *source;
		param->jp_flags |= flags;
		return param - params;
	}
	if (jailparam_init(param, name) < 0)
		errx(1, "%s", jail_errmsg);
	param->jp_flags = flags;
	if ((value != NULL ? jailparam_import_raw(param, value, valuelen)
	     : jailparam_import(param, reinterpret_cast<const char *>(value))) < 0) {
		if (flags & JP_OPT) {
			nparams--;
			return (-1);
		}
		errx(1, "%s", jail_errmsg);
	}
	return param - params;
}

int UNIX_JailComputerSystem::print_jail(int pflags, int jflags)
{
	int jid;

	//char *nname;
	//char **param_values;
	//int count, ai, n;
	//char ipbuf[INET6_ADDRSTRLEN];

	jid = jailparam_get(params, nparams, jflags);
	if (jid < 0)
		return jid;
	/*
	int i;
	for(i = 0; i < nparams; i++)
	{
		cout << "\t" << params[i].jp_name << " : " << (char *)params[i].jp_value << endl;
	}

	cout << "-----------------" << endl;
	cout << endl;
	printf("%6d  %-29.29s %.74s\n"
	       "%6s  %-29.29s %.74s\n"
	       "%6s  %-6d\n",
	    *(int *)params[0].jp_value,
	    (char *)params[1].jp_value,
	    (char *)params[2].jp_value,
	    "",
	    (char *)params[3].jp_value,
	    *(int *)params[4].jp_value ? "DYING" : "ACTIVE",
	    "",
	    *(int *)params[5].jp_value);
	*/
/*
	n = 6;
#ifdef INET
	if (ip4_ok && !strcmp(params[n].jp_name, "ip4.addr")) {
		count = params[n].jp_valuelen / sizeof(struct in_addr);
		for (ai = 0; ai < count; ai++)
			if (inet_ntop(AF_INET,
			    &((struct in_addr *)params[n].jp_value)[ai],
			    ipbuf, sizeof(ipbuf)) == NULL)
				err(1, "inet_ntop");
			else
				printf("%6s  %-15.15s\n", "", ipbuf);
		n++;
	}
#endif
#ifdef INET6
	if (ip6_ok && !strcmp(params[n].jp_name, "ip6.addr")) {
		count = params[n].jp_valuelen / sizeof(struct in6_addr);
		for (ai = 0; ai < count; ai++)
			if (inet_ntop(AF_INET6,
			    &((struct in6_addr *)
				params[n].jp_value)[ai],
			    ipbuf, sizeof(ipbuf)) == NULL)
				err(1, "inet_ntop");
			else
				printf("%6s  %s\n", "", ipbuf);
		n++;
	}
#endif
*/
	return (jid);
}


String UNIX_JailComputerSystem::_get_param_String(const char *name) const
{
	int i;
	for(i = 0; i < nparams; i++)
	{
		if (!strcmp(params[i].jp_name, name))
		{
			return String((char *)params[i].jp_value);
		}
	}
	return CIMHelper::EmptyString;
}

Uint32 UNIX_JailComputerSystem::_get_param_Uint32(const char *name) const
{
	int i;
	for(i = 0; i < nparams; i++)
	{
		if (!strcmp(params[i].jp_name, name))
		{
			return *(int *)params[i].jp_value;
		}
	}
	return 0;
}

#endif
