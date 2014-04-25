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


UNIX_SSHSettingData::UNIX_SSHSettingData(void)
{
}

UNIX_SSHSettingData::~UNIX_SSHSettingData(void)
{
}


Boolean UNIX_SSHSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SSHSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SSHSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SSHSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_SSHSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SSHSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_SSHSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SSHSettingData::getElementName() const
{
	return String("SSHSettingData");
}

Boolean UNIX_SSHSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_SSHSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_SSHSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_SSHSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_SSHSettingData::getEnabledSSHVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_S_S_H_VERSIONS, getEnabledSSHVersions());
	return true;
}

Array<Uint16> UNIX_SSHSettingData::getEnabledSSHVersions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SSHSettingData::getOtherEnabledSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_S_S_H_VERSION, getOtherEnabledSSHVersion());
	return true;
}

String UNIX_SSHSettingData::getOtherEnabledSSHVersion() const
{
	return String ("");
}

Boolean UNIX_SSHSettingData::getSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_H_VERSION, getSSHVersion());
	return true;
}

Uint16 UNIX_SSHSettingData::getSSHVersion() const
{
	return Uint16(0);
}

Boolean UNIX_SSHSettingData::getOtherSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_S_S_H_VERSION, getOtherSSHVersion());
	return true;
}

Array<String> UNIX_SSHSettingData::getOtherSSHVersion() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SSHSettingData::getEnabledEncryptionAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_ENCRYPTION_ALGORITHMS, getEnabledEncryptionAlgorithms());
	return true;
}

Array<Uint16> UNIX_SSHSettingData::getEnabledEncryptionAlgorithms() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SSHSettingData::getOtherEnabledEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_ENCRYPTION_ALGORITHM, getOtherEnabledEncryptionAlgorithm());
	return true;
}

Array<String> UNIX_SSHSettingData::getOtherEnabledEncryptionAlgorithm() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SSHSettingData::getEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_ALGORITHM, getEncryptionAlgorithm());
	return true;
}

Uint16 UNIX_SSHSettingData::getEncryptionAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_SSHSettingData::getOtherEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENCRYPTION_ALGORITHM, getOtherEncryptionAlgorithm());
	return true;
}

String UNIX_SSHSettingData::getOtherEncryptionAlgorithm() const
{
	return String ("");
}

Boolean UNIX_SSHSettingData::getIdleTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_TIMEOUT, getIdleTimeout());
	return true;
}

Uint32 UNIX_SSHSettingData::getIdleTimeout() const
{
	return Uint32(0);
}

Boolean UNIX_SSHSettingData::getKeepAlive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_ALIVE, getKeepAlive());
	return true;
}

Boolean UNIX_SSHSettingData::getKeepAlive() const
{
	return Boolean(false);
}

Boolean UNIX_SSHSettingData::getForwardX11(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORWARD_X_1_1, getForwardX11());
	return true;
}

Boolean UNIX_SSHSettingData::getForwardX11() const
{
	return Boolean(false);
}

Boolean UNIX_SSHSettingData::getCompression(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION, getCompression());
	return true;
}

Boolean UNIX_SSHSettingData::getCompression() const
{
	return Boolean(false);
}



Boolean UNIX_SSHSettingData::initialize()
{
	return false;
}

Boolean UNIX_SSHSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SSHSettingData::finalize()
{
	return false;
}

Boolean UNIX_SSHSettingData::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
