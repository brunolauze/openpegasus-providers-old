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

#ifndef __CIM_PHYSICALPACKAGE_H
#define __CIM_PHYSICALPACKAGE_H


#include "CIM_PhysicalElement.h"


#define PROPERTY_REMOVAL_CONDITIONS				"RemovalConditions"
#define PROPERTY_REMOVABLE				"Removable"
#define PROPERTY_REPLACEABLE				"Replaceable"
#define PROPERTY_HOT_SWAPPABLE				"HotSwappable"
#define PROPERTY_HEIGHT				"Height"
#define PROPERTY_DEPTH				"Depth"
#define PROPERTY_WIDTH				"Width"
#define PROPERTY_WEIGHT				"Weight"
#define PROPERTY_PACKAGE_TYPE				"PackageType"
#define PROPERTY_OTHER_PACKAGE_TYPE				"OtherPackageType"
#define PROPERTY_VENDOR_COMPATIBILITY_STRINGS				"VendorCompatibilityStrings"


class CIM_PhysicalPackage :
	public CIM_PhysicalElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getRemovalConditions(CIMProperty&) const=0;
	virtual Uint16 getRemovalConditions() const=0;
	virtual Boolean getRemovable(CIMProperty&) const=0;
	virtual Boolean getRemovable() const=0;
	virtual Boolean getReplaceable(CIMProperty&) const=0;
	virtual Boolean getReplaceable() const=0;
	virtual Boolean getHotSwappable(CIMProperty&) const=0;
	virtual Boolean getHotSwappable() const=0;
	virtual Boolean getHeight(CIMProperty&) const=0;
	virtual Real32 getHeight() const=0;
	virtual Boolean getDepth(CIMProperty&) const=0;
	virtual Real32 getDepth() const=0;
	virtual Boolean getWidth(CIMProperty&) const=0;
	virtual Real32 getWidth() const=0;
	virtual Boolean getWeight(CIMProperty&) const=0;
	virtual Real32 getWeight() const=0;
	virtual Boolean getPackageType(CIMProperty&) const=0;
	virtual Uint16 getPackageType() const=0;
	virtual Boolean getOtherPackageType(CIMProperty&) const=0;
	virtual String getOtherPackageType() const=0;
	virtual Boolean getVendorCompatibilityStrings(CIMProperty&) const=0;
	virtual Array<String> getVendorCompatibilityStrings() const=0;

private:

};

#endif /* CIM_PHYSICALPACKAGE */
