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

#ifndef __UNIX_PICKERSTATINFO_H
#define __UNIX_PICKERSTATINFO_H


#include "CIM_DeviceStatisticalInformation.h"

#include "UNIX_PickerStatInfoDeps.h"


#define PROPERTY_PICK_SUCCESSES				"PickSuccesses"
#define PROPERTY_PICK_FAILURES				"PickFailures"
#define PROPERTY_PICK_RETRIES				"PickRetries"
#define PROPERTY_PUT_SUCCESSES				"PutSuccesses"
#define PROPERTY_PUT_FAILURES				"PutFailures"
#define PROPERTY_PUT_RETRIES				"PutRetries"


class UNIX_PickerStatInfo :
	public CIM_DeviceStatisticalInformation
{
public:

	UNIX_PickerStatInfo();
	~UNIX_PickerStatInfo();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getDeviceCreationClassName(CIMProperty&) const;
	virtual String getDeviceCreationClassName() const;
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getPickSuccesses(CIMProperty&) const;
	virtual Uint64 getPickSuccesses() const;
	virtual Boolean getPickFailures(CIMProperty&) const;
	virtual Uint64 getPickFailures() const;
	virtual Boolean getPickRetries(CIMProperty&) const;
	virtual Uint64 getPickRetries() const;
	virtual Boolean getPutSuccesses(CIMProperty&) const;
	virtual Uint64 getPutSuccesses() const;
	virtual Boolean getPutFailures(CIMProperty&) const;
	virtual Uint64 getPutFailures() const;
	virtual Boolean getPutRetries(CIMProperty&) const;
	virtual Uint64 getPutRetries() const;

private:
	CIMName currentScope;

#	include "UNIX_PickerStatInfoPrivate.h"


};

#endif /* UNIX_PICKERSTATINFO */
