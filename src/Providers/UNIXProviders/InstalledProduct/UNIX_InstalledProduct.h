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

#ifndef __UNIX_INSTALLEDPRODUCT_H
#define __UNIX_INSTALLEDPRODUCT_H


#include "CIM_Collection.h"

#include "UNIX_InstalledProductDeps.h"


#define PROPERTY_PRODUCT_IDENTIFYING_NUMBER				"ProductIdentifyingNumber"
#define PROPERTY_PRODUCT_NAME				"ProductName"
#define PROPERTY_PRODUCT_VENDOR				"ProductVendor"
#define PROPERTY_PRODUCT_VERSION				"ProductVersion"
#define PROPERTY_SYSTEM_ID				"SystemID"
#define PROPERTY_COLLECTION_ID				"CollectionID"
#define PROPERTY_NAME				"Name"


class UNIX_InstalledProduct :
	public CIM_Collection
{
public:

	UNIX_InstalledProduct();
	~UNIX_InstalledProduct();

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
	virtual Boolean getProductIdentifyingNumber(CIMProperty&) const;
	virtual String getProductIdentifyingNumber() const;
	virtual Boolean getProductName(CIMProperty&) const;
	virtual String getProductName() const;
	virtual Boolean getProductVendor(CIMProperty&) const;
	virtual String getProductVendor() const;
	virtual Boolean getProductVersion(CIMProperty&) const;
	virtual String getProductVersion() const;
	virtual Boolean getSystemID(CIMProperty&) const;
	virtual String getSystemID() const;
	virtual Boolean getCollectionID(CIMProperty&) const;
	virtual String getCollectionID() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;

private:
	CIMName currentScope;

#	include "UNIX_InstalledProductPrivate.h"


};

#endif /* UNIX_INSTALLEDPRODUCT */
