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

#ifndef __UNIX_SOFTWAREELEMENTVERSIONCHECK_H
#define __UNIX_SOFTWAREELEMENTVERSIONCHECK_H


#include "CIM_Check.h"

#include "UNIX_SoftwareElementVersionCheckDeps.h"


#define PROPERTY_SOFTWARE_ELEMENT_NAME				"SoftwareElementName"
#define PROPERTY_LOWER_SOFTWARE_ELEMENT_VERSION				"LowerSoftwareElementVersion"
#define PROPERTY_UPPER_SOFTWARE_ELEMENT_VERSION				"UpperSoftwareElementVersion"
#define PROPERTY_SOFTWARE_ELEMENT_STATE_DESIRED				"SoftwareElementStateDesired"
#define PROPERTY_TARGET_OPERATING_SYSTEM_DESIRED				"TargetOperatingSystemDesired"


class UNIX_SoftwareElementVersionCheck :
	public CIM_Check
{
public:

	UNIX_SoftwareElementVersionCheck();
	~UNIX_SoftwareElementVersionCheck();

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
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual Boolean getSoftwareElementState(CIMProperty&) const;
	virtual Uint16 getSoftwareElementState() const;
	virtual Boolean getSoftwareElementID(CIMProperty&) const;
	virtual String getSoftwareElementID() const;
	virtual Boolean getTargetOperatingSystem(CIMProperty&) const;
	virtual Uint16 getTargetOperatingSystem() const;
	virtual Boolean getCheckID(CIMProperty&) const;
	virtual String getCheckID() const;
	virtual Boolean getCheckMode(CIMProperty&) const;
	virtual Boolean getCheckMode() const;
	virtual Boolean getSoftwareElementName(CIMProperty&) const;
	virtual String getSoftwareElementName() const;
	virtual Boolean getLowerSoftwareElementVersion(CIMProperty&) const;
	virtual String getLowerSoftwareElementVersion() const;
	virtual Boolean getUpperSoftwareElementVersion(CIMProperty&) const;
	virtual String getUpperSoftwareElementVersion() const;
	virtual Boolean getSoftwareElementStateDesired(CIMProperty&) const;
	virtual Uint16 getSoftwareElementStateDesired() const;
	virtual Boolean getTargetOperatingSystemDesired(CIMProperty&) const;
	virtual Uint16 getTargetOperatingSystemDesired() const;

private:
	CIMName currentScope;

#	include "UNIX_SoftwareElementVersionCheckPrivate.h"


};

#endif /* UNIX_SOFTWAREELEMENTVERSIONCHECK */
