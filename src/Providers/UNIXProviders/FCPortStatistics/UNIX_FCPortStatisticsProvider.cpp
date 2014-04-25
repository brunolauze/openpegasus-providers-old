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


#include "UNIX_FCPortStatisticsProvider.h"

UNIX_FCPortStatisticsProvider::UNIX_FCPortStatisticsProvider()
{
}

UNIX_FCPortStatisticsProvider::~UNIX_FCPortStatisticsProvider()
{
}

CIMInstance UNIX_FCPortStatisticsProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_FCPortStatistics &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_FCPortStatistics"),
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

	//CIM_FCPortStatistics Properties
	if (_p.getLIPCount(p)) inst.addProperty(p);
	if (_p.getNOSCount(p)) inst.addProperty(p);
	if (_p.getErrorFrames(p)) inst.addProperty(p);
	if (_p.getDumpedFrames(p)) inst.addProperty(p);
	if (_p.getLinkFailures(p)) inst.addProperty(p);
	if (_p.getLossOfSignalCounter(p)) inst.addProperty(p);
	if (_p.getLossOfSyncCounter(p)) inst.addProperty(p);
	if (_p.getPrimitiveSeqProtocolErrCount(p)) inst.addProperty(p);
	if (_p.getCRCErrors(p)) inst.addProperty(p);
	if (_p.getInvalidTransmissionWords(p)) inst.addProperty(p);
	if (_p.getFramesTooShort(p)) inst.addProperty(p);
	if (_p.getFramesTooLong(p)) inst.addProperty(p);
	if (_p.getAddressErrors(p)) inst.addProperty(p);
	if (_p.getBufferCreditNotProvided(p)) inst.addProperty(p);
	if (_p.getBufferCreditNotReceived(p)) inst.addProperty(p);
	if (_p.getDelimiterErrors(p)) inst.addProperty(p);
	if (_p.getEncodingDisparityErrors(p)) inst.addProperty(p);
	if (_p.getLinkResetsReceived(p)) inst.addProperty(p);
	if (_p.getLinkResetsTransmitted(p)) inst.addProperty(p);
	if (_p.getMulticastFramesReceived(p)) inst.addProperty(p);
	if (_p.getMulticastFramesTransmitted(p)) inst.addProperty(p);
	if (_p.getFBSYFrames(p)) inst.addProperty(p);
	if (_p.getPBSYFrames(p)) inst.addProperty(p);
	if (_p.getFRJTFrames(p)) inst.addProperty(p);
	if (_p.getPRJTFrames(p)) inst.addProperty(p);
	if (_p.getRXClass1Frames(p)) inst.addProperty(p);
	if (_p.getTXClass1Frames(p)) inst.addProperty(p);
	if (_p.getClass1FBSY(p)) inst.addProperty(p);
	if (_p.getClass1PBSY(p)) inst.addProperty(p);
	if (_p.getClass1FRJT(p)) inst.addProperty(p);
	if (_p.getClass1PRJT(p)) inst.addProperty(p);
	if (_p.getRXClass2Frames(p)) inst.addProperty(p);
	if (_p.getTXClass2Frames(p)) inst.addProperty(p);
	if (_p.getClass2FBSY(p)) inst.addProperty(p);
	if (_p.getClass2PBSY(p)) inst.addProperty(p);
	if (_p.getClass2FRJT(p)) inst.addProperty(p);
	if (_p.getClass2PRJT(p)) inst.addProperty(p);
	if (_p.getRXClass3Frames(p)) inst.addProperty(p);
	if (_p.getTXClass3Frames(p)) inst.addProperty(p);
	if (_p.getClass3FramesDiscarded(p)) inst.addProperty(p);
	if (_p.getRXBroadcastFrames(p)) inst.addProperty(p);
	if (_p.getTXBroadcastFrames(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_FCPortStatisticsProvider::constructKeyBindings(const UNIX_FCPortStatistics& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_FCPortStatisticsProvider
#define UNIX_PROVIDER_NAME "UNIX_FCPortStatisticsProvider"
#define CLASS_IMPLEMENTATION UNIX_FCPortStatistics
#define CLASS_IMPLEMENTATION_NAME "UNIX_FCPortStatistics"
#define BASE_CLASS_NAME "CIM_FCPortStatistics"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

