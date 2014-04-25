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


#include "UNIX_EthernetPortStatisticsProvider.h"

UNIX_EthernetPortStatisticsProvider::UNIX_EthernetPortStatisticsProvider()
{
}

UNIX_EthernetPortStatisticsProvider::~UNIX_EthernetPortStatisticsProvider()
{
}

CIMInstance UNIX_EthernetPortStatisticsProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_EthernetPortStatistics &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_EthernetPortStatistics"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_StatisticalData Properties
	if (_p.getStartStatisticTime(p)) inst.addProperty(p);
	if (_p.getStatisticTime(p)) inst.addProperty(p);
	if (_p.getSampleInterval(p)) inst.addProperty(p);

	//CIM_NetworkPortStatistics Properties
	if (_p.getBytesTransmitted(p)) inst.addProperty(p);
	if (_p.getBytesReceived(p)) inst.addProperty(p);
	if (_p.getPacketsTransmitted(p)) inst.addProperty(p);
	if (_p.getPacketsReceived(p)) inst.addProperty(p);

	//CIM_EthernetPortStatistics Properties
	if (_p.getSymbolErrors(p)) inst.addProperty(p);
	if (_p.getAlignmentErrors(p)) inst.addProperty(p);
	if (_p.getFCSErrors(p)) inst.addProperty(p);
	if (_p.getSingleCollisionFrames(p)) inst.addProperty(p);
	if (_p.getMultipleCollisionFrames(p)) inst.addProperty(p);
	if (_p.getSQETestErrors(p)) inst.addProperty(p);
	if (_p.getDeferredTransmissions(p)) inst.addProperty(p);
	if (_p.getLateCollisions(p)) inst.addProperty(p);
	if (_p.getExcessiveCollisions(p)) inst.addProperty(p);
	if (_p.getInternalMACTransmitErrors(p)) inst.addProperty(p);
	if (_p.getInternalMACReceiveErrors(p)) inst.addProperty(p);
	if (_p.getCarrierSenseErrors(p)) inst.addProperty(p);
	if (_p.getFrameTooLongs(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_EthernetPortStatisticsProvider::constructKeyBindings(const UNIX_EthernetPortStatistics& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_EthernetPortStatisticsProvider
#define UNIX_PROVIDER_NAME "UNIX_EthernetPortStatisticsProvider"
#define CLASS_IMPLEMENTATION UNIX_EthernetPortStatistics
#define CLASS_IMPLEMENTATION_NAME "UNIX_EthernetPortStatistics"
#define BASE_CLASS_NAME "CIM_EthernetPortStatistics"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

