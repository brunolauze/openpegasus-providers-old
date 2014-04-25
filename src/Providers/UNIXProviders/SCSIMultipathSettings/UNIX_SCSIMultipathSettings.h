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

#ifndef __UNIX_SCSIMULTIPATHSETTINGS_H
#define __UNIX_SCSIMULTIPATHSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_SCSIMultipathSettingsDeps.h"


#define PROPERTY_ASYMMETRIC				"Asymmetric"
#define PROPERTY_CURRENT_LOAD_BALANCE_TYPE				"CurrentLoadBalanceType"
#define PROPERTY_OTHER_CURRENT_LOAD_BALANCE_TYPE				"OtherCurrentLoadBalanceType"
#define PROPERTY_AUTO_FAILBACK_ENABLED				"AutoFailbackEnabled"
#define PROPERTY_POLLING_RATE_MAX				"PollingRateMax"
#define PROPERTY_CURRENT_POLLING_RATE				"CurrentPollingRate"


class UNIX_SCSIMultipathSettings :
	public CIM_SettingData
{
public:

	UNIX_SCSIMultipathSettings();
	~UNIX_SCSIMultipathSettings();

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
	virtual Boolean getAsymmetric(CIMProperty&) const;
	virtual Boolean getAsymmetric() const;
	virtual Boolean getCurrentLoadBalanceType(CIMProperty&) const;
	virtual Uint16 getCurrentLoadBalanceType() const;
	virtual Boolean getOtherCurrentLoadBalanceType(CIMProperty&) const;
	virtual String getOtherCurrentLoadBalanceType() const;
	virtual Boolean getAutoFailbackEnabled(CIMProperty&) const;
	virtual Uint16 getAutoFailbackEnabled() const;
	virtual Boolean getPollingRateMax(CIMProperty&) const;
	virtual Uint32 getPollingRateMax() const;
	virtual Boolean getCurrentPollingRate(CIMProperty&) const;
	virtual Uint32 getCurrentPollingRate() const;

private:
	CIMName currentScope;

#	include "UNIX_SCSIMultipathSettingsPrivate.h"


};

#endif /* UNIX_SCSIMULTIPATHSETTINGS */
