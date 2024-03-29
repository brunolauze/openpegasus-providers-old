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

#ifndef __CIM_CHECK_H
#define __CIM_CHECK_H


#include "CIM_ManagedElement.h"


#define PROPERTY_NAME				"Name"
#define PROPERTY_VERSION				"Version"
#define PROPERTY_SOFTWARE_ELEMENT_STATE				"SoftwareElementState"
#define PROPERTY_SOFTWARE_ELEMENT_ID				"SoftwareElementID"
#define PROPERTY_TARGET_OPERATING_SYSTEM				"TargetOperatingSystem"
#define PROPERTY_CHECK_ID				"CheckID"
#define PROPERTY_CHECK_MODE				"CheckMode"


class CIM_Check :
	public CIM_ManagedElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual Boolean getVersion(CIMProperty&) const=0;
	virtual String getVersion() const=0;
	virtual Boolean getSoftwareElementState(CIMProperty&) const=0;
	virtual Uint16 getSoftwareElementState() const=0;
	virtual Boolean getSoftwareElementID(CIMProperty&) const=0;
	virtual String getSoftwareElementID() const=0;
	virtual Boolean getTargetOperatingSystem(CIMProperty&) const=0;
	virtual Uint16 getTargetOperatingSystem() const=0;
	virtual Boolean getCheckID(CIMProperty&) const=0;
	virtual String getCheckID() const=0;
	virtual Boolean getCheckMode(CIMProperty&) const=0;
	virtual Boolean getCheckMode() const=0;

private:

};

#endif /* CIM_CHECK */
