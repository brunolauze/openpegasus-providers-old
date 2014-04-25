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

#ifndef __UNIX_USBREDIRECTIONCAPABILITIES_H
#define __UNIX_USBREDIRECTIONCAPABILITIES_H


#include "CIM_RedirectionServiceCapabilities.h"

#include "UNIX_USBRedirectionCapabilitiesDeps.h"


#define PROPERTY_CONNECTION_MODES_SUPPORTED				"ConnectionModesSupported"
#define PROPERTY_U_S_B_VERSIONS_SUPPORTED				"USBVersionsSupported"
#define PROPERTY_CLASSES_SUPPORTED				"ClassesSupported"
#define PROPERTY_SUB_CLASSES_SUPPORTED				"SubClassesSupported"
#define PROPERTY_MAX_DEVICES_SUPPORTED				"MaxDevicesSupported"
#define PROPERTY_MAX_DEVICES_PER_S_A_P				"MaxDevicesPerSAP"
#define PROPERTY_S_A_P_CAPABILITIES_SUPPORTED				"SAPCapabilitiesSupported"
#define PROPERTY_REQUESTED_STATES_SUPPORTED_FOR_CREATED_S_A_P				"RequestedStatesSupportedForCreatedSAP"
#define PROPERTY_INFO_FORMATS_SUPPORTED				"InfoFormatsSupported"
#define PROPERTY_SINGLE_CLASS_PER_S_A_P				"SingleClassPerSAP"


class UNIX_USBRedirectionCapabilities :
	public CIM_RedirectionServiceCapabilities
{
public:

	UNIX_USBRedirectionCapabilities();
	~UNIX_USBRedirectionCapabilities();

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
	virtual Boolean getElementNameEditSupported(CIMProperty&) const;
	virtual Boolean getElementNameEditSupported() const;
	virtual Boolean getMaxElementNameLen(CIMProperty&) const;
	virtual Uint16 getMaxElementNameLen() const;
	virtual Boolean getRequestedStatesSupported(CIMProperty&) const;
	virtual Array<Uint16> getRequestedStatesSupported() const;
	virtual Boolean getElementNameMask(CIMProperty&) const;
	virtual String getElementNameMask() const;
	virtual Boolean getSharingModeSupported(CIMProperty&) const;
	virtual Array<Uint16> getSharingModeSupported() const;
	virtual Boolean getConnectionModesSupported(CIMProperty&) const;
	virtual Array<Uint16> getConnectionModesSupported() const;
	virtual Boolean getUSBVersionsSupported(CIMProperty&) const;
	virtual Array<Uint16> getUSBVersionsSupported() const;
	virtual Boolean getClassesSupported(CIMProperty&) const;
	virtual Array<Uint8> getClassesSupported() const;
	virtual Boolean getSubClassesSupported(CIMProperty&) const;
	virtual Array<Uint8> getSubClassesSupported() const;
	virtual Boolean getMaxDevicesSupported(CIMProperty&) const;
	virtual Array<Uint16> getMaxDevicesSupported() const;
	virtual Boolean getMaxDevicesPerSAP(CIMProperty&) const;
	virtual Array<Uint16> getMaxDevicesPerSAP() const;
	virtual Boolean getSAPCapabilitiesSupported(CIMProperty&) const;
	virtual Array<Uint16> getSAPCapabilitiesSupported() const;
	virtual Boolean getRequestedStatesSupportedForCreatedSAP(CIMProperty&) const;
	virtual Array<Uint16> getRequestedStatesSupportedForCreatedSAP() const;
	virtual Boolean getInfoFormatsSupported(CIMProperty&) const;
	virtual Array<Uint16> getInfoFormatsSupported() const;
	virtual Boolean getSingleClassPerSAP(CIMProperty&) const;
	virtual Boolean getSingleClassPerSAP() const;

private:
	CIMName currentScope;

#	include "UNIX_USBRedirectionCapabilitiesPrivate.h"


};

#endif /* UNIX_USBREDIRECTIONCAPABILITIES */
