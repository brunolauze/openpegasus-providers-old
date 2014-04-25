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

#ifndef __UNIX_BIOSENUMERATION_H
#define __UNIX_BIOSENUMERATION_H


#include "CIM_BIOSAttribute.h"

#include "UNIX_BIOSEnumerationDeps.h"


#define PROPERTY_POSSIBLE_VALUES				"PossibleValues"
#define PROPERTY_POSSIBLE_VALUES_DESCRIPTION				"PossibleValuesDescription"


class UNIX_BIOSEnumeration :
	public CIM_BIOSAttribute
{
public:

	UNIX_BIOSEnumeration();
	~UNIX_BIOSEnumeration();

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
	virtual Boolean getAttributeName(CIMProperty&) const;
	virtual String getAttributeName() const;
	virtual Boolean getCurrentValue(CIMProperty&) const;
	virtual Array<String> getCurrentValue() const;
	virtual Boolean getDefaultValue(CIMProperty&) const;
	virtual Array<String> getDefaultValue() const;
	virtual Boolean getPendingValue(CIMProperty&) const;
	virtual Array<String> getPendingValue() const;
	virtual Boolean getIsOrderedList(CIMProperty&) const;
	virtual Boolean getIsOrderedList() const;
	virtual Boolean getIsReadOnly(CIMProperty&) const;
	virtual Boolean getIsReadOnly() const;
	virtual Boolean getPossibleValues(CIMProperty&) const;
	virtual Array<String> getPossibleValues() const;
	virtual Boolean getPossibleValuesDescription(CIMProperty&) const;
	virtual Array<String> getPossibleValuesDescription() const;

private:
	CIMName currentScope;

#	include "UNIX_BIOSEnumerationPrivate.h"


};

#endif /* UNIX_BIOSENUMERATION */
