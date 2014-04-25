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

#ifndef __CIM_IPROUTE_H
#define __CIM_IPROUTE_H


#include "CIM_NextHopRouting.h"


#define PROPERTY_SYSTEM_CREATION_CLASS_NAME				"SystemCreationClassName"
#define PROPERTY_SYSTEM_NAME				"SystemName"
#define PROPERTY_SERVICE_CREATION_CLASS_NAME				"ServiceCreationClassName"
#define PROPERTY_SERVICE_NAME				"ServiceName"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_I_P_DESTINATION_ADDRESS				"IPDestinationAddress"
#define PROPERTY_I_P_DESTINATION_MASK				"IPDestinationMask"
#define PROPERTY_ADDRESS_TYPE				"AddressType"


class CIM_IPRoute :
	public CIM_NextHopRouting
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getSystemCreationClassName(CIMProperty&) const=0;
	virtual String getSystemCreationClassName() const=0;
	virtual Boolean getSystemName(CIMProperty&) const=0;
	virtual String getSystemName() const=0;
	virtual Boolean getServiceCreationClassName(CIMProperty&) const=0;
	virtual String getServiceCreationClassName() const=0;
	virtual Boolean getServiceName(CIMProperty&) const=0;
	virtual String getServiceName() const=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual Boolean getIPDestinationAddress(CIMProperty&) const=0;
	virtual String getIPDestinationAddress() const=0;
	virtual Boolean getIPDestinationMask(CIMProperty&) const=0;
	virtual String getIPDestinationMask() const=0;
	virtual Boolean getAddressType(CIMProperty&) const=0;
	virtual Uint16 getAddressType() const=0;
	virtual Boolean getDestinationAddress(CIMProperty&) const=0;
	virtual String getDestinationAddress() const=0;
	virtual Boolean getDestinationMask(CIMProperty&) const=0;
	virtual String getDestinationMask() const=0;

private:

};

#endif /* CIM_IPROUTE */
