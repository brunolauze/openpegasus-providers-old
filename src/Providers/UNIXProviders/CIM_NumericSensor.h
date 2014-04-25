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

#ifndef __CIM_NUMERICSENSOR_H
#define __CIM_NUMERICSENSOR_H


#include "CIM_Sensor.h"


#define PROPERTY_BASE_UNITS				"BaseUnits"
#define PROPERTY_UNIT_MODIFIER				"UnitModifier"
#define PROPERTY_RATE_UNITS				"RateUnits"
#define PROPERTY_CURRENT_READING				"CurrentReading"
#define PROPERTY_NOMINAL_READING				"NominalReading"
#define PROPERTY_NORMAL_MAX				"NormalMax"
#define PROPERTY_NORMAL_MIN				"NormalMin"
#define PROPERTY_MAX_READABLE				"MaxReadable"
#define PROPERTY_MIN_READABLE				"MinReadable"
#define PROPERTY_RESOLUTION				"Resolution"
#define PROPERTY_TOLERANCE				"Tolerance"
#define PROPERTY_ACCURACY				"Accuracy"
#define PROPERTY_IS_LINEAR				"IsLinear"
#define PROPERTY_HYSTERESIS				"Hysteresis"
#define PROPERTY_LOWER_THRESHOLD_NON_CRITICAL				"LowerThresholdNonCritical"
#define PROPERTY_UPPER_THRESHOLD_NON_CRITICAL				"UpperThresholdNonCritical"
#define PROPERTY_LOWER_THRESHOLD_CRITICAL				"LowerThresholdCritical"
#define PROPERTY_UPPER_THRESHOLD_CRITICAL				"UpperThresholdCritical"
#define PROPERTY_LOWER_THRESHOLD_FATAL				"LowerThresholdFatal"
#define PROPERTY_UPPER_THRESHOLD_FATAL				"UpperThresholdFatal"
#define PROPERTY_SUPPORTED_THRESHOLDS				"SupportedThresholds"
#define PROPERTY_ENABLED_THRESHOLDS				"EnabledThresholds"
#define PROPERTY_SETTABLE_THRESHOLDS				"SettableThresholds"


class CIM_NumericSensor :
	public CIM_Sensor
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getBaseUnits(CIMProperty&) const=0;
	virtual Uint16 getBaseUnits() const=0;
	virtual Boolean getUnitModifier(CIMProperty&) const=0;
	virtual Sint32 getUnitModifier() const=0;
	virtual Boolean getRateUnits(CIMProperty&) const=0;
	virtual Uint16 getRateUnits() const=0;
	virtual Boolean getCurrentReading(CIMProperty&) const=0;
	virtual Sint32 getCurrentReading() const=0;
	virtual Boolean getNominalReading(CIMProperty&) const=0;
	virtual Sint32 getNominalReading() const=0;
	virtual Boolean getNormalMax(CIMProperty&) const=0;
	virtual Sint32 getNormalMax() const=0;
	virtual Boolean getNormalMin(CIMProperty&) const=0;
	virtual Sint32 getNormalMin() const=0;
	virtual Boolean getMaxReadable(CIMProperty&) const=0;
	virtual Sint32 getMaxReadable() const=0;
	virtual Boolean getMinReadable(CIMProperty&) const=0;
	virtual Sint32 getMinReadable() const=0;
	virtual Boolean getResolution(CIMProperty&) const=0;
	virtual Uint32 getResolution() const=0;
	virtual Boolean getTolerance(CIMProperty&) const=0;
	virtual Sint32 getTolerance() const=0;
	virtual Boolean getAccuracy(CIMProperty&) const=0;
	virtual Sint32 getAccuracy() const=0;
	virtual Boolean getIsLinear(CIMProperty&) const=0;
	virtual Boolean getIsLinear() const=0;
	virtual Boolean getHysteresis(CIMProperty&) const=0;
	virtual Uint32 getHysteresis() const=0;
	virtual Boolean getLowerThresholdNonCritical(CIMProperty&) const=0;
	virtual Sint32 getLowerThresholdNonCritical() const=0;
	virtual Boolean getUpperThresholdNonCritical(CIMProperty&) const=0;
	virtual Sint32 getUpperThresholdNonCritical() const=0;
	virtual Boolean getLowerThresholdCritical(CIMProperty&) const=0;
	virtual Sint32 getLowerThresholdCritical() const=0;
	virtual Boolean getUpperThresholdCritical(CIMProperty&) const=0;
	virtual Sint32 getUpperThresholdCritical() const=0;
	virtual Boolean getLowerThresholdFatal(CIMProperty&) const=0;
	virtual Sint32 getLowerThresholdFatal() const=0;
	virtual Boolean getUpperThresholdFatal(CIMProperty&) const=0;
	virtual Sint32 getUpperThresholdFatal() const=0;
	virtual Boolean getSupportedThresholds(CIMProperty&) const=0;
	virtual Array<Uint16> getSupportedThresholds() const=0;
	virtual Boolean getEnabledThresholds(CIMProperty&) const=0;
	virtual Array<Uint16> getEnabledThresholds() const=0;
	virtual Boolean getSettableThresholds(CIMProperty&) const=0;
	virtual Array<Uint16> getSettableThresholds() const=0;

private:

};

#endif /* CIM_NUMERICSENSOR */
