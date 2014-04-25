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

#ifndef __UNIX_DNSGENERALSETTINGDATA_H
#define __UNIX_DNSGENERALSETTINGDATA_H


#include "CIM_IPAssignmentSettingData.h"

#include "UNIX_DNSGeneralSettingDataDeps.h"


#define PROPERTY_APPEND_PRIMARY_SUFFIXES				"AppendPrimarySuffixes"
#define PROPERTY_APPEND_PARENT_SUFFIXES				"AppendParentSuffixes"
#define PROPERTY_D_N_S_SUFFIXES_TO_APPEND				"DNSSuffixesToAppend"


class UNIX_DNSGeneralSettingData :
	public CIM_IPAssignmentSettingData
{
public:

	UNIX_DNSGeneralSettingData();
	~UNIX_DNSGeneralSettingData();

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
	virtual Boolean getAddressOrigin(CIMProperty&) const;
	virtual Uint16 getAddressOrigin() const;
	virtual Boolean getProtocolIFType(CIMProperty&) const;
	virtual Uint16 getProtocolIFType() const;
	virtual Boolean getAppendPrimarySuffixes(CIMProperty&) const;
	virtual Boolean getAppendPrimarySuffixes() const;
	virtual Boolean getAppendParentSuffixes(CIMProperty&) const;
	virtual Boolean getAppendParentSuffixes() const;
	virtual Boolean getDNSSuffixesToAppend(CIMProperty&) const;
	virtual Array<String> getDNSSuffixesToAppend() const;

private:
	CIMName currentScope;

#	include "UNIX_DNSGeneralSettingDataPrivate.h"


};

#endif /* UNIX_DNSGENERALSETTINGDATA */
