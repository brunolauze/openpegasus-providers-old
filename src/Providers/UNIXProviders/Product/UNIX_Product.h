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

#ifndef __UNIX_PRODUCT_H
#define __UNIX_PRODUCT_H


#include "CIM_ManagedElement.h"

#include "UNIX_ProductDeps.h"


#define PROPERTY_NAME				"Name"
#define PROPERTY_IDENTIFYING_NUMBER				"IdentifyingNumber"
#define PROPERTY_VENDOR				"Vendor"
#define PROPERTY_VERSION				"Version"
#define PROPERTY_S_K_U_NUMBER				"SKUNumber"
#define PROPERTY_WARRANTY_START_DATE				"WarrantyStartDate"
#define PROPERTY_WARRANTY_DURATION				"WarrantyDuration"


class UNIX_Product :
	public CIM_ManagedElement
{
public:

	UNIX_Product();
	~UNIX_Product();

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
	virtual Boolean getIdentifyingNumber(CIMProperty&) const;
	virtual String getIdentifyingNumber() const;
	virtual Boolean getVendor(CIMProperty&) const;
	virtual String getVendor() const;
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual Boolean getSKUNumber(CIMProperty&) const;
	virtual String getSKUNumber() const;
	virtual Boolean getWarrantyStartDate(CIMProperty&) const;
	virtual CIMDateTime getWarrantyStartDate() const;
	virtual Boolean getWarrantyDuration(CIMProperty&) const;
	virtual Uint32 getWarrantyDuration() const;

private:
	CIMName currentScope;

#	include "UNIX_ProductPrivate.h"


};

#endif /* UNIX_PRODUCT */
