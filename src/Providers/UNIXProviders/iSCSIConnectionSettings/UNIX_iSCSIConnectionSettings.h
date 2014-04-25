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

#ifndef __UNIX_ISCSICONNECTIONSETTINGS_H
#define __UNIX_ISCSICONNECTIONSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_iSCSIConnectionSettingsDeps.h"


#define PROPERTY_MAX_RECEIVE_DATA_SEGMENT_LENGTH				"MaxReceiveDataSegmentLength"
#define PROPERTY_PRIMARY_HEADER_DIGEST_METHOD				"PrimaryHeaderDigestMethod"
#define PROPERTY_OTHER_PRIMARY_HEADER_DIGEST_METHOD				"OtherPrimaryHeaderDigestMethod"
#define PROPERTY_PRIMARY_DATA_DIGEST_METHOD				"PrimaryDataDigestMethod"
#define PROPERTY_OTHER_PRIMARY_DATA_DIGEST_METHOD				"OtherPrimaryDataDigestMethod"
#define PROPERTY_SECONDARY_HEADER_DIGEST_METHOD				"SecondaryHeaderDigestMethod"
#define PROPERTY_OTHER_SECONDARY_HEADER_DIGEST_METHOD				"OtherSecondaryHeaderDigestMethod"
#define PROPERTY_SECONDARY_DATA_DIGEST_METHOD				"SecondaryDataDigestMethod"
#define PROPERTY_OTHER_SECONDARY_DATA_DIGEST_METHOD				"OtherSecondaryDataDigestMethod"
#define PROPERTY_REQUESTING_MARKERS_ON_RECEIVE				"RequestingMarkersOnReceive"
#define PROPERTY_PRIMARY_AUTHENTICATION_METHOD				"PrimaryAuthenticationMethod"
#define PROPERTY_SECONDARY_AUTHENTICATION_METHOD				"SecondaryAuthenticationMethod"


class UNIX_iSCSIConnectionSettings :
	public CIM_SettingData
{
public:

	UNIX_iSCSIConnectionSettings();
	~UNIX_iSCSIConnectionSettings();

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
	virtual Boolean getMaxReceiveDataSegmentLength(CIMProperty&) const;
	virtual Uint32 getMaxReceiveDataSegmentLength() const;
	virtual Boolean getPrimaryHeaderDigestMethod(CIMProperty&) const;
	virtual Uint16 getPrimaryHeaderDigestMethod() const;
	virtual Boolean getOtherPrimaryHeaderDigestMethod(CIMProperty&) const;
	virtual String getOtherPrimaryHeaderDigestMethod() const;
	virtual Boolean getPrimaryDataDigestMethod(CIMProperty&) const;
	virtual Uint16 getPrimaryDataDigestMethod() const;
	virtual Boolean getOtherPrimaryDataDigestMethod(CIMProperty&) const;
	virtual String getOtherPrimaryDataDigestMethod() const;
	virtual Boolean getSecondaryHeaderDigestMethod(CIMProperty&) const;
	virtual Uint16 getSecondaryHeaderDigestMethod() const;
	virtual Boolean getOtherSecondaryHeaderDigestMethod(CIMProperty&) const;
	virtual String getOtherSecondaryHeaderDigestMethod() const;
	virtual Boolean getSecondaryDataDigestMethod(CIMProperty&) const;
	virtual Uint16 getSecondaryDataDigestMethod() const;
	virtual Boolean getOtherSecondaryDataDigestMethod(CIMProperty&) const;
	virtual String getOtherSecondaryDataDigestMethod() const;
	virtual Boolean getRequestingMarkersOnReceive(CIMProperty&) const;
	virtual Boolean getRequestingMarkersOnReceive() const;
	virtual Boolean getPrimaryAuthenticationMethod(CIMProperty&) const;
	virtual Uint16 getPrimaryAuthenticationMethod() const;
	virtual Boolean getSecondaryAuthenticationMethod(CIMProperty&) const;
	virtual Uint16 getSecondaryAuthenticationMethod() const;

private:
	CIMName currentScope;

#	include "UNIX_iSCSIConnectionSettingsPrivate.h"


};

#endif /* UNIX_ISCSICONNECTIONSETTINGS */
