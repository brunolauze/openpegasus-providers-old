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

#ifndef __CIM_PCICONTROLLER_H
#define __CIM_PCICONTROLLER_H


#include "CIM_Controller.h"


#define PROPERTY_COMMAND_REGISTER				"CommandRegister"
#define PROPERTY_CAPABILITIES				"Capabilities"
#define PROPERTY_CAPABILITY_DESCRIPTIONS				"CapabilityDescriptions"
#define PROPERTY_DEVICE_SELECT_TIMING				"DeviceSelectTiming"
#define PROPERTY_CLASS_CODE				"ClassCode"
#define PROPERTY_CACHE_LINE_SIZE				"CacheLineSize"
#define PROPERTY_LATENCY_TIMER				"LatencyTimer"
#define PROPERTY_INTERRUPT_PIN				"InterruptPin"
#define PROPERTY_EXPANSION_R_O_M_BASE_ADDRESS				"ExpansionROMBaseAddress"
#define PROPERTY_SELF_TEST_ENABLED				"SelfTestEnabled"


class CIM_PCIController :
	public CIM_Controller
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getCommandRegister(CIMProperty&) const=0;
	virtual Uint16 getCommandRegister() const=0;
	virtual Boolean getCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getCapabilities() const=0;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const=0;
	virtual Array<String> getCapabilityDescriptions() const=0;
	virtual Boolean getDeviceSelectTiming(CIMProperty&) const=0;
	virtual Uint16 getDeviceSelectTiming() const=0;
	virtual Boolean getClassCode(CIMProperty&) const=0;
	virtual Uint8 getClassCode() const=0;
	virtual Boolean getCacheLineSize(CIMProperty&) const=0;
	virtual Uint8 getCacheLineSize() const=0;
	virtual Boolean getLatencyTimer(CIMProperty&) const=0;
	virtual Uint8 getLatencyTimer() const=0;
	virtual Boolean getInterruptPin(CIMProperty&) const=0;
	virtual Uint16 getInterruptPin() const=0;
	virtual Boolean getExpansionROMBaseAddress(CIMProperty&) const=0;
	virtual Uint32 getExpansionROMBaseAddress() const=0;
	virtual Boolean getSelfTestEnabled(CIMProperty&) const=0;
	virtual Boolean getSelfTestEnabled() const=0;

private:

};

#endif /* CIM_PCICONTROLLER */
