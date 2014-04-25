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

#ifndef __UNIX_POLICYTIMEPERIODCONDITION_H
#define __UNIX_POLICYTIMEPERIODCONDITION_H


#include "CIM_PolicyCondition.h"

#include "UNIX_PolicyTimePeriodConditionDeps.h"


#define PROPERTY_TIME_PERIOD				"TimePeriod"
#define PROPERTY_MONTH_OF_YEAR_MASK				"MonthOfYearMask"
#define PROPERTY_DAY_OF_MONTH_MASK				"DayOfMonthMask"
#define PROPERTY_DAY_OF_WEEK_MASK				"DayOfWeekMask"
#define PROPERTY_TIME_OF_DAY_MASK				"TimeOfDayMask"
#define PROPERTY_LOCAL_OR_UTC_TIME				"LocalOrUtcTime"


class UNIX_PolicyTimePeriodCondition :
	public CIM_PolicyCondition
{
public:

	UNIX_PolicyTimePeriodCondition();
	~UNIX_PolicyTimePeriodCondition();

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
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual String getCommonName() const;
	virtual Boolean getPolicyKeywords(CIMProperty&) const;
	virtual Array<String> getPolicyKeywords() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getPolicyRuleCreationClassName(CIMProperty&) const;
	virtual String getPolicyRuleCreationClassName() const;
	virtual Boolean getPolicyRuleName(CIMProperty&) const;
	virtual String getPolicyRuleName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getPolicyConditionName(CIMProperty&) const;
	virtual String getPolicyConditionName() const;
	virtual Boolean getTimePeriod(CIMProperty&) const;
	virtual String getTimePeriod() const;
	virtual Boolean getMonthOfYearMask(CIMProperty&) const;
	virtual Array<Uint8> getMonthOfYearMask() const;
	virtual Boolean getDayOfMonthMask(CIMProperty&) const;
	virtual Array<Uint8> getDayOfMonthMask() const;
	virtual Boolean getDayOfWeekMask(CIMProperty&) const;
	virtual Array<Uint8> getDayOfWeekMask() const;
	virtual Boolean getTimeOfDayMask(CIMProperty&) const;
	virtual String getTimeOfDayMask() const;
	virtual Boolean getLocalOrUtcTime(CIMProperty&) const;
	virtual Uint16 getLocalOrUtcTime() const;

private:
	CIMName currentScope;

#	include "UNIX_PolicyTimePeriodConditionPrivate.h"


};

#endif /* UNIX_POLICYTIMEPERIODCONDITION */
