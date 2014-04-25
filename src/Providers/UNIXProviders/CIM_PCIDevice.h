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

#ifndef __CIM_PCIDEVICE_H
#define __CIM_PCIDEVICE_H


#include "CIM_PCIController.h"


#define PROPERTY_BASE_ADDRESS				"BaseAddress"
#define PROPERTY_SUBSYSTEM_ID				"SubsystemID"
#define PROPERTY_SUBSYSTEM_VENDOR_ID				"SubsystemVendorID"
#define PROPERTY_MIN_GRANT_TIME				"MinGrantTime"
#define PROPERTY_MAX_LATENCY				"MaxLatency"
#define PROPERTY_BUS_NUMBER				"BusNumber"
#define PROPERTY_DEVICE_NUMBER				"DeviceNumber"
#define PROPERTY_FUNCTION_NUMBER				"FunctionNumber"
#define PROPERTY_P_C_IDEVICE_ID				"PCIDeviceID"
#define PROPERTY_VENDOR_ID				"VendorID"
#define PROPERTY_REVISION_ID				"RevisionID"


class CIM_PCIDevice :
	public CIM_PCIController
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getBaseAddress(CIMProperty&) const=0;
	virtual Array<Uint32> getBaseAddress() const=0;
	virtual Boolean getSubsystemID(CIMProperty&) const=0;
	virtual Uint16 getSubsystemID() const=0;
	virtual Boolean getSubsystemVendorID(CIMProperty&) const=0;
	virtual Uint16 getSubsystemVendorID() const=0;
	virtual Boolean getMinGrantTime(CIMProperty&) const=0;
	virtual Uint8 getMinGrantTime() const=0;
	virtual Boolean getMaxLatency(CIMProperty&) const=0;
	virtual Uint8 getMaxLatency() const=0;
	virtual Boolean getBusNumber(CIMProperty&) const=0;
	virtual Uint8 getBusNumber() const=0;
	virtual Boolean getDeviceNumber(CIMProperty&) const=0;
	virtual Uint8 getDeviceNumber() const=0;
	virtual Boolean getFunctionNumber(CIMProperty&) const=0;
	virtual Uint8 getFunctionNumber() const=0;
	virtual Boolean getPCIDeviceID(CIMProperty&) const=0;
	virtual Uint16 getPCIDeviceID() const=0;
	virtual Boolean getVendorID(CIMProperty&) const=0;
	virtual Uint16 getVendorID() const=0;
	virtual Boolean getRevisionID(CIMProperty&) const=0;
	virtual Uint8 getRevisionID() const=0;

private:

};

#endif /* CIM_PCIDEVICE */
