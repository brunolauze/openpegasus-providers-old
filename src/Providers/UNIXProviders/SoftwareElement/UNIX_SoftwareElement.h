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

#ifndef __UNIX_SOFTWAREELEMENT_H
#define __UNIX_SOFTWAREELEMENT_H


#include "CIM_LogicalElement.h"

#include "UNIX_SoftwareElementDeps.h"


#define PROPERTY_VERSION				"Version"
#define PROPERTY_SOFTWARE_ELEMENT_STATE				"SoftwareElementState"
#define PROPERTY_SOFTWARE_ELEMENT_ID				"SoftwareElementID"
#define PROPERTY_TARGET_OPERATING_SYSTEM				"TargetOperatingSystem"
#define PROPERTY_OTHER_TARGET_OS				"OtherTargetOS"
#define PROPERTY_MANUFACTURER				"Manufacturer"
#define PROPERTY_BUILD_NUMBER				"BuildNumber"
#define PROPERTY_SERIAL_NUMBER				"SerialNumber"
#define PROPERTY_CODE_SET				"CodeSet"
#define PROPERTY_IDENTIFICATION_CODE				"IdentificationCode"
#define PROPERTY_LANGUAGE_EDITION				"LanguageEdition"


class UNIX_SoftwareElement :
	public CIM_LogicalElement
{
public:

	UNIX_SoftwareElement();
	~UNIX_SoftwareElement();

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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual Boolean getSoftwareElementState(CIMProperty&) const;
	virtual Uint16 getSoftwareElementState() const;
	virtual Boolean getSoftwareElementID(CIMProperty&) const;
	virtual String getSoftwareElementID() const;
	virtual Boolean getTargetOperatingSystem(CIMProperty&) const;
	virtual Uint16 getTargetOperatingSystem() const;
	virtual Boolean getOtherTargetOS(CIMProperty&) const;
	virtual String getOtherTargetOS() const;
	virtual Boolean getManufacturer(CIMProperty&) const;
	virtual String getManufacturer() const;
	virtual Boolean getBuildNumber(CIMProperty&) const;
	virtual String getBuildNumber() const;
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual Boolean getCodeSet(CIMProperty&) const;
	virtual String getCodeSet() const;
	virtual Boolean getIdentificationCode(CIMProperty&) const;
	virtual String getIdentificationCode() const;
	virtual Boolean getLanguageEdition(CIMProperty&) const;
	virtual String getLanguageEdition() const;

	virtual Boolean get(String packageName);

#if defined(PEGASUS_OS_HPUX)

#elif defined(PEGASUS_OS_LINUX)

#elif defined(PEGASUS_OS_DARWIN)

#elif defined(PEGASUS_OS_AIX)

#elif defined(PEGASUS_OS_FREEBSD)
	virtual String getPrimaryOwnerName() const;
#elif defined(PEGASUS_OS_SOLARIS)

#elif defined(PEGASUS_OS_ZOS)

#elif defined(PEGASUS_OS_VMS)

#elif defined(PEGASUS_OS_TRU64)

#else

#endif



private:
	CIMName currentScope;

#	include "UNIX_SoftwareElementPrivate.h"


};

#endif /* UNIX_SOFTWAREELEMENT */
