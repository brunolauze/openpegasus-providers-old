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

#include <INIReader.h>
#include <unistd.h>

UNIX_CertificateAuthority::UNIX_CertificateAuthority(void)
{
}

UNIX_CertificateAuthority::~UNIX_CertificateAuthority(void)
{
}


Boolean UNIX_CertificateAuthority::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CertificateAuthority::getInstanceID() const
{
	return String ("openssl");
}

Boolean UNIX_CertificateAuthority::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CertificateAuthority::getCaption() const
{
	return String ("OpenSSL Certificate Authority");
}

Boolean UNIX_CertificateAuthority::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CertificateAuthority::getDescription() const
{
	return String ("");
}

Boolean UNIX_CertificateAuthority::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CertificateAuthority::getElementName() const
{
	return String("CertificateAuthority");
}

Boolean UNIX_CertificateAuthority::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CertificateAuthority::getGeneration() const
{
	return Uint64(0);
}

Boolean UNIX_CertificateAuthority::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_CertificateAuthority::getInstallDate() const
{
	return CIMHelper::getInstallDate(caCertificatePath);
}

Boolean UNIX_CertificateAuthority::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_CertificateAuthority::getName() const
{
	return getInstanceID();
}

Boolean UNIX_CertificateAuthority::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_CertificateAuthority::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK

	return as;

}

Boolean UNIX_CertificateAuthority::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_CertificateAuthority::getStatusDescriptions() const
{
	Array<String> as;
	as.append("OK");

	return as;

}

Boolean UNIX_CertificateAuthority::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_CertificateAuthority::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_CertificateAuthority::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_CertificateAuthority::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_CertificateAuthority::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_CertificateAuthority::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CertificateAuthority::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_CertificateAuthority::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CertificateAuthority::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_CertificateAuthority::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_CertificateAuthority::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_CertificateAuthority::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_CertificateAuthority::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_CertificateAuthority::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_CertificateAuthority::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_CertificateAuthority::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_CertificateAuthority::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_CertificateAuthority::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_CertificateAuthority::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_CertificateAuthority::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_CertificateAuthority::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_CertificateAuthority::getTimeOfLastStateChange() const
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

Boolean UNIX_CertificateAuthority::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_CertificateAuthority::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CertificateAuthority::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_CertificateAuthority::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_CertificateAuthority::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CertificateAuthority::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_CertificateAuthority::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CertificateAuthority::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_CertificateAuthority::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CertificateAuthority::getCreationClassName() const
{
	return String("UNIX_CertificateAuthority");
}

Boolean UNIX_CertificateAuthority::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_CertificateAuthority::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_CertificateAuthority::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_CertificateAuthority::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_CertificateAuthority::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_CertificateAuthority::getStartMode() const
{
	return String ("Automatic");
}

Boolean UNIX_CertificateAuthority::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_CertificateAuthority::getStarted() const
{
	return Boolean(true);
}

Boolean UNIX_CertificateAuthority::getCAPolicyStatement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_A_POLICY_STATEMENT, getCAPolicyStatement());
	return true;
}

String UNIX_CertificateAuthority::getCAPolicyStatement() const
{
	return policy;
}

Boolean UNIX_CertificateAuthority::getCRL(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_L, getCRL());
	return true;
}

Array<String> UNIX_CertificateAuthority::getCRL() const
{
	Array<String> as;


	return as;

}

Boolean UNIX_CertificateAuthority::getCRLDistributionPoint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_L_DISTRIBUTION_POINT, getCRLDistributionPoint());
	return true;
}

Array<String> UNIX_CertificateAuthority::getCRLDistributionPoint() const
{
	Array<String> as;
	

	return as;
}

Boolean UNIX_CertificateAuthority::getCADistinguishedName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_A_DISTINGUISHED_NAME, getCADistinguishedName());
	return true;
}

String UNIX_CertificateAuthority::getCADistinguishedName() const
{
	return subject;
}

Boolean UNIX_CertificateAuthority::getCRLRefreshFrequency(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_L_REFRESH_FREQUENCY, getCRLRefreshFrequency());
	return true;
}

Uint8 UNIX_CertificateAuthority::getCRLRefreshFrequency() const
{
	return crlhours;
}

Boolean UNIX_CertificateAuthority::getMaxChainLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CHAIN_LENGTH, getMaxChainLength());
	return true;
}

Uint8 UNIX_CertificateAuthority::getMaxChainLength() const
{
	return Uint8(2);
}

static string formatString(string val, string dir)
{
	if (val.find("./") == 0)
		return CIMHelper::replace(val, "./", "/etc/ssl/");
	return CIMHelper::replace(val, "$dir", dir);
}

Boolean UNIX_CertificateAuthority::initialize()
{
	present = false;
	INIReader reader("/etc/ssl/openssl.cnf");
	if (reader.ParseError() < 0) 
	{
		cout << "INI have errors: " << reader.ParseError() << endl;
		return false;
	}
	string tsa_policy1 = reader.Get("new_oids", "tsa_policy1", "");
	string tsa_policy2 = reader.Get("new_oids", "tsa_policy2", "");
	string tsa_policy3 = reader.Get("new_oids", "tsa_policy3", "");

	policy.assign(tsa_policy1.c_str());
	if (tsa_policy2.size() > 0)  
	{
		if (tsa_policy1.size() > 0) policy.append(";");
		policy.append(tsa_policy2.c_str());
	}
	if (tsa_policy3.size() > 0)  
	{
		if (tsa_policy2.size() > 0) policy.append(";");
		policy.append(tsa_policy3.c_str());
	}

	string casection = reader.Get("ca", "default_ca", "");
	if (casection.size() == 0) return false;
	cout << "CA Section: " << casection <<  endl;
	string directory = formatString(reader.Get(casection, "dir", "/etc/ssl"), "");
	string certsdir = formatString(reader.Get(casection, "certs", "/etc/ssl/certs"), directory);
	string crldir = formatString(reader.Get(casection, "crl_dir", "/etc/ssl/crl"), directory);
	string database = formatString(reader.Get(casection, "database", "/etc/ssl/index.txt"), directory);
	string newcertsdir = formatString(reader.Get(casection, "new_certs_dir", "/etc/ssl/newcerts"), directory);
	string cacert = formatString(reader.Get(casection, "certificate", "/etc/ssl/cacert.pem"), directory);
	string cakey = formatString(reader.Get(casection, "private_key", "/etc/ssl/cakey.pem"), directory);
	string serial = formatString(reader.Get(casection, "serial", "/etc/ssl/serial"), directory);
	string crlnumber = formatString(reader.Get(casection, "crlnumber", "/etc/ssl/crlnumber"), directory);
	string crlcert = formatString(reader.Get(casection, "crl", "/etc/ssl/crl.pem"), directory);
	string randomfile = formatString(reader.Get(casection, "RANDFILE", "/etc/ssl/private/.rand"), directory);
	string x509ext = formatString(reader.Get(casection, "x509_extensions", "usr_cert"), directory);
	string caname = formatString(reader.Get(casection, "name_opt", "ca_default"), directory);
	string certname = formatString(reader.Get(casection, "cert_opt", "ca_default"), directory);
	long days = reader.GetInteger(casection, "days", 365);
	long crldays = reader.GetInteger(casection, "crl_days", 30);

	cout <<  "Directory: " << directory << endl;
	cout <<  "Certs: " << certsdir << endl;
	cout <<  "CA Certificate Path: " << cacert << endl;
	cout <<  "CRL: " << crldir << endl;


	cout <<  "Days: " << days << endl;
	cout <<  "CRL Days: " << crldays << endl;

	crlhours = Uint8(crldays * 24);

	if (access(cacert.c_str(), R_OK) != -1)
	{
		String cmd("openssl x509 -noout -in ");
		cmd.append(cacert.c_str());
		cmd.append(" -subject");
		FILE* pipe = popen(cmd.getCString(), "r");
	    if (!pipe) return false;
	    char buffer[256];
	    if(!feof(pipe)) {
	    	if (fgets(buffer, 256, pipe) != NULL)
	    	{
	    		if (CIMHelper::startsWith(buffer, strdup("subject= ")))
	    		{
	    			String caname(buffer);
	    			subject = caname.subString(9, strlen(buffer) - 10);
	    			caCertificatePath.assign(cacert.c_str());
	    			present = true;
	    		}
	    	}
    	}
        fclose(pipe);
	}
	return true;
}

Boolean UNIX_CertificateAuthority::load(int &pIndex)
{
	if (pIndex == 0 && present) return true;
	return false;
}

Boolean UNIX_CertificateAuthority::finalize()
{
	return true;
}

Boolean UNIX_CertificateAuthority::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



	/* Execute find with extracted keys */

	return false;
}
