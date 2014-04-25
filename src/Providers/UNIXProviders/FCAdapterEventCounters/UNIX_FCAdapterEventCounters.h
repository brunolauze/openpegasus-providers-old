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

#ifndef __UNIX_FCADAPTEREVENTCOUNTERS_H
#define __UNIX_FCADAPTEREVENTCOUNTERS_H


#include "CIM_DeviceStatisticalInformation.h"

#include "UNIX_FCAdapterEventCountersDeps.h"


#define PROPERTY_A_B_T_S_FRAMES_RECEIVED				"ABTSFramesReceived"
#define PROPERTY_A_B_T_S_FRAMES_SENT				"ABTSFramesSent"
#define PROPERTY_F_B_S_YS_RECEIVED				"FBSYsReceived"
#define PROPERTY_P_B_S_YS_RECEIVED				"PBSYsReceived"
#define PROPERTY_P_B_S_YS_SENT				"PBSYsSent"
#define PROPERTY_F_R_J_TS_RECEIVED				"FRJTsReceived"
#define PROPERTY_P_R_J_TS_RECEIVED				"PRJTsReceived"
#define PROPERTY_P_R_J_TS_SENT				"PRJTsSent"
#define PROPERTY_P_R_L_IS_REJECTED				"PRLIsRejected"
#define PROPERTY_P_R_L_OS_REJECTED				"PRLOsRejected"
#define PROPERTY_A_B_T_S_FRAMES_REJECTED				"ABTSFramesRejected"


class UNIX_FCAdapterEventCounters :
	public CIM_DeviceStatisticalInformation
{
public:

	UNIX_FCAdapterEventCounters();
	~UNIX_FCAdapterEventCounters();

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
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getDeviceCreationClassName(CIMProperty&) const;
	virtual String getDeviceCreationClassName() const;
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getABTSFramesReceived(CIMProperty&) const;
	virtual Uint64 getABTSFramesReceived() const;
	virtual Boolean getABTSFramesSent(CIMProperty&) const;
	virtual Uint64 getABTSFramesSent() const;
	virtual Boolean getFBSYsReceived(CIMProperty&) const;
	virtual Uint64 getFBSYsReceived() const;
	virtual Boolean getPBSYsReceived(CIMProperty&) const;
	virtual Uint64 getPBSYsReceived() const;
	virtual Boolean getPBSYsSent(CIMProperty&) const;
	virtual Uint64 getPBSYsSent() const;
	virtual Boolean getFRJTsReceived(CIMProperty&) const;
	virtual Uint64 getFRJTsReceived() const;
	virtual Boolean getPRJTsReceived(CIMProperty&) const;
	virtual Uint64 getPRJTsReceived() const;
	virtual Boolean getPRJTsSent(CIMProperty&) const;
	virtual Uint64 getPRJTsSent() const;
	virtual Boolean getPRLIsRejected(CIMProperty&) const;
	virtual Uint64 getPRLIsRejected() const;
	virtual Boolean getPRLOsRejected(CIMProperty&) const;
	virtual Uint64 getPRLOsRejected() const;
	virtual Boolean getABTSFramesRejected(CIMProperty&) const;
	virtual Uint64 getABTSFramesRejected() const;

private:
	CIMName currentScope;

#	include "UNIX_FCAdapterEventCountersPrivate.h"


};

#endif /* UNIX_FCADAPTEREVENTCOUNTERS */
