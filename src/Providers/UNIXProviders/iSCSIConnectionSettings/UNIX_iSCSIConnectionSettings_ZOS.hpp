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


UNIX_iSCSIConnectionSettings::UNIX_iSCSIConnectionSettings(void)
{
}

UNIX_iSCSIConnectionSettings::~UNIX_iSCSIConnectionSettings(void)
{
}


Boolean UNIX_iSCSIConnectionSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSIConnectionSettings::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnectionSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSIConnectionSettings::getCaption() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnectionSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSIConnectionSettings::getDescription() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnectionSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSIConnectionSettings::getElementName() const
{
	return String("iSCSIConnectionSettings");
}

Boolean UNIX_iSCSIConnectionSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnectionSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_iSCSIConnectionSettings::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnectionSettings::getMaxReceiveDataSegmentLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RECEIVE_DATA_SEGMENT_LENGTH, getMaxReceiveDataSegmentLength());
	return true;
}

Uint32 UNIX_iSCSIConnectionSettings::getMaxReceiveDataSegmentLength() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSIConnectionSettings::getPrimaryHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_HEADER_DIGEST_METHOD, getPrimaryHeaderDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getPrimaryHeaderDigestMethod() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnectionSettings::getOtherPrimaryHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PRIMARY_HEADER_DIGEST_METHOD, getOtherPrimaryHeaderDigestMethod());
	return true;
}

String UNIX_iSCSIConnectionSettings::getOtherPrimaryHeaderDigestMethod() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnectionSettings::getPrimaryDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_DATA_DIGEST_METHOD, getPrimaryDataDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getPrimaryDataDigestMethod() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnectionSettings::getOtherPrimaryDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PRIMARY_DATA_DIGEST_METHOD, getOtherPrimaryDataDigestMethod());
	return true;
}

String UNIX_iSCSIConnectionSettings::getOtherPrimaryDataDigestMethod() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnectionSettings::getSecondaryHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_HEADER_DIGEST_METHOD, getSecondaryHeaderDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getSecondaryHeaderDigestMethod() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnectionSettings::getOtherSecondaryHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SECONDARY_HEADER_DIGEST_METHOD, getOtherSecondaryHeaderDigestMethod());
	return true;
}

String UNIX_iSCSIConnectionSettings::getOtherSecondaryHeaderDigestMethod() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnectionSettings::getSecondaryDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_DATA_DIGEST_METHOD, getSecondaryDataDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getSecondaryDataDigestMethod() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnectionSettings::getOtherSecondaryDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SECONDARY_DATA_DIGEST_METHOD, getOtherSecondaryDataDigestMethod());
	return true;
}

String UNIX_iSCSIConnectionSettings::getOtherSecondaryDataDigestMethod() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnectionSettings::getRequestingMarkersOnReceive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTING_MARKERS_ON_RECEIVE, getRequestingMarkersOnReceive());
	return true;
}

Boolean UNIX_iSCSIConnectionSettings::getRequestingMarkersOnReceive() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSIConnectionSettings::getPrimaryAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_AUTHENTICATION_METHOD, getPrimaryAuthenticationMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getPrimaryAuthenticationMethod() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnectionSettings::getSecondaryAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_AUTHENTICATION_METHOD, getSecondaryAuthenticationMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getSecondaryAuthenticationMethod() const
{
	return Uint16(0);
}



Boolean UNIX_iSCSIConnectionSettings::initialize()
{
	return false;
}

Boolean UNIX_iSCSIConnectionSettings::load(int &pIndex)
{
	return false;
}

Boolean UNIX_iSCSIConnectionSettings::finalize()
{
	return false;
}

Boolean UNIX_iSCSIConnectionSettings::find(Array<CIMKeyBinding> &kbArray)
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
