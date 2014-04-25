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

#ifndef __UNIX_SSHSETTINGDATA_H
#define __UNIX_SSHSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_SSHSettingDataDeps.h"


#define PROPERTY_ENABLED_S_S_H_VERSIONS				"EnabledSSHVersions"
#define PROPERTY_OTHER_ENABLED_S_S_H_VERSION				"OtherEnabledSSHVersion"
#define PROPERTY_S_S_H_VERSION				"SSHVersion"
#define PROPERTY_OTHER_S_S_H_VERSION				"OtherSSHVersion"
#define PROPERTY_ENABLED_ENCRYPTION_ALGORITHMS				"EnabledEncryptionAlgorithms"
#define PROPERTY_OTHER_ENABLED_ENCRYPTION_ALGORITHM				"OtherEnabledEncryptionAlgorithm"
#define PROPERTY_ENCRYPTION_ALGORITHM				"EncryptionAlgorithm"
#define PROPERTY_OTHER_ENCRYPTION_ALGORITHM				"OtherEncryptionAlgorithm"
#define PROPERTY_IDLE_TIMEOUT				"IdleTimeout"
#define PROPERTY_KEEP_ALIVE				"KeepAlive"
#define PROPERTY_FORWARD_X_1_1				"ForwardX11"
#define PROPERTY_COMPRESSION				"Compression"


class UNIX_SSHSettingData :
	public CIM_SettingData
{
public:

	UNIX_SSHSettingData();
	~UNIX_SSHSettingData();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual Boolean getEnabledSSHVersions(CIMProperty&) const;
	virtual Array<Uint16> getEnabledSSHVersions() const;
	virtual Boolean getOtherEnabledSSHVersion(CIMProperty&) const;
	virtual String getOtherEnabledSSHVersion() const;
	virtual Boolean getSSHVersion(CIMProperty&) const;
	virtual Uint16 getSSHVersion() const;
	virtual Boolean getOtherSSHVersion(CIMProperty&) const;
	virtual Array<String> getOtherSSHVersion() const;
	virtual Boolean getEnabledEncryptionAlgorithms(CIMProperty&) const;
	virtual Array<Uint16> getEnabledEncryptionAlgorithms() const;
	virtual Boolean getOtherEnabledEncryptionAlgorithm(CIMProperty&) const;
	virtual Array<String> getOtherEnabledEncryptionAlgorithm() const;
	virtual Boolean getEncryptionAlgorithm(CIMProperty&) const;
	virtual Uint16 getEncryptionAlgorithm() const;
	virtual Boolean getOtherEncryptionAlgorithm(CIMProperty&) const;
	virtual String getOtherEncryptionAlgorithm() const;
	virtual Boolean getIdleTimeout(CIMProperty&) const;
	virtual Uint32 getIdleTimeout() const;
	virtual Boolean getKeepAlive(CIMProperty&) const;
	virtual Boolean getKeepAlive() const;
	virtual Boolean getForwardX11(CIMProperty&) const;
	virtual Boolean getForwardX11() const;
	virtual Boolean getCompression(CIMProperty&) const;
	virtual Boolean getCompression() const;

private:
	CIMName currentScope;

#	include "UNIX_SSHSettingDataPrivate.h"


};

#endif /* UNIX_SSHSETTINGDATA */
