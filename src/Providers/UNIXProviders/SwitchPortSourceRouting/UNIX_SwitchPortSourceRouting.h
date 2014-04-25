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

#ifndef __UNIX_SWITCHPORTSOURCEROUTING_H
#define __UNIX_SWITCHPORTSOURCEROUTING_H


#include "CIM_ServiceSAPDependency.h"

#include "UNIX_SwitchPortSourceRoutingDeps.h"


#define PROPERTY_HOP_COUNT				"HopCount"
#define PROPERTY_LOCAL_SEGMENT				"LocalSegment"
#define PROPERTY_BRIDGE_NUM				"BridgeNum"
#define PROPERTY_TARGET_SEGMENT				"TargetSegment"
#define PROPERTY_S_T_E_SPAN_MODE				"STESpanMode"


class UNIX_SwitchPortSourceRouting :
	public CIM_ServiceSAPDependency
{
public:

	UNIX_SwitchPortSourceRouting();
	~UNIX_SwitchPortSourceRouting();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual Boolean getHopCount(CIMProperty&) const;
	virtual Uint16 getHopCount() const;
	virtual Boolean getLocalSegment(CIMProperty&) const;
	virtual Uint16 getLocalSegment() const;
	virtual Boolean getBridgeNum(CIMProperty&) const;
	virtual Uint16 getBridgeNum() const;
	virtual Boolean getTargetSegment(CIMProperty&) const;
	virtual Uint16 getTargetSegment() const;
	virtual Boolean getSTESpanMode(CIMProperty&) const;
	virtual Uint16 getSTESpanMode() const;

private:
	CIMName currentScope;

#	include "UNIX_SwitchPortSourceRoutingPrivate.h"


};

#endif /* UNIX_SWITCHPORTSOURCEROUTING */
