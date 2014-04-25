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

#ifndef __UNIX_VLANENDPOINTSETTINGDATA_H
#define __UNIX_VLANENDPOINTSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_VLANEndpointSettingDataDeps.h"


#define PROPERTY_PRUNE_ELIGIBLE_V_L_A_N_LIST				"PruneEligibleVLANList"
#define PROPERTY_NATIVE_V_L_A_N				"NativeVLAN"
#define PROPERTY_DEFAULT_V_L_A_N				"DefaultVLAN"
#define PROPERTY_TRUNKED_V_L_A_N_LIST				"TrunkedVLANList"
#define PROPERTY_ACCESS_V_L_A_N				"AccessVLAN"


class UNIX_VLANEndpointSettingData :
	public CIM_SettingData
{
public:

	UNIX_VLANEndpointSettingData();
	~UNIX_VLANEndpointSettingData();

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
	virtual Boolean getPruneEligibleVLANList(CIMProperty&) const;
	virtual Array<Uint16> getPruneEligibleVLANList() const;
	virtual Boolean getNativeVLAN(CIMProperty&) const;
	virtual Uint16 getNativeVLAN() const;
	virtual Boolean getDefaultVLAN(CIMProperty&) const;
	virtual Uint16 getDefaultVLAN() const;
	virtual Boolean getTrunkedVLANList(CIMProperty&) const;
	virtual Array<Uint16> getTrunkedVLANList() const;
	virtual Boolean getAccessVLAN(CIMProperty&) const;
	virtual Uint16 getAccessVLAN() const;

private:
	CIMName currentScope;

#	include "UNIX_VLANEndpointSettingDataPrivate.h"


};

#endif /* UNIX_VLANENDPOINTSETTINGDATA */
