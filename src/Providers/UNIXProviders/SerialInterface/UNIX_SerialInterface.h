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

#ifndef __UNIX_SERIALINTERFACE_H
#define __UNIX_SERIALINTERFACE_H


#include "CIM_ControlledBy.h"

#include "UNIX_SerialInterfaceDeps.h"


#define PROPERTY_NUMBER_OF_STOP_BITS				"NumberOfStopBits"
#define PROPERTY_PARITY_INFO				"ParityInfo"
#define PROPERTY_FLOW_CONTROL_INFO				"FlowControlInfo"


class UNIX_SerialInterface :
	public CIM_ControlledBy
{
public:

	UNIX_SerialInterface();
	~UNIX_SerialInterface();

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
	virtual Boolean getNegotiatedSpeed(CIMProperty&) const;
	virtual Uint64 getNegotiatedSpeed() const;
	virtual Boolean getNegotiatedDataWidth(CIMProperty&) const;
	virtual Uint32 getNegotiatedDataWidth() const;
	virtual Boolean getAccessState(CIMProperty&) const;
	virtual Uint16 getAccessState() const;
	virtual Boolean getTimeOfDeviceReset(CIMProperty&) const;
	virtual CIMDateTime getTimeOfDeviceReset() const;
	virtual Boolean getNumberOfHardResets(CIMProperty&) const;
	virtual Uint32 getNumberOfHardResets() const;
	virtual Boolean getNumberOfSoftResets(CIMProperty&) const;
	virtual Uint32 getNumberOfSoftResets() const;
	virtual Boolean getDeviceNumber(CIMProperty&) const;
	virtual String getDeviceNumber() const;
	virtual Boolean getAccessMode(CIMProperty&) const;
	virtual Uint16 getAccessMode() const;
	virtual Boolean getAccessPriority(CIMProperty&) const;
	virtual Uint16 getAccessPriority() const;
	virtual Boolean getNumberOfStopBits(CIMProperty&) const;
	virtual Uint16 getNumberOfStopBits() const;
	virtual Boolean getParityInfo(CIMProperty&) const;
	virtual Uint16 getParityInfo() const;
	virtual Boolean getFlowControlInfo(CIMProperty&) const;
	virtual Uint16 getFlowControlInfo() const;

private:
	CIMName currentScope;

#	include "UNIX_SerialInterfacePrivate.h"


};

#endif /* UNIX_SERIALINTERFACE */
