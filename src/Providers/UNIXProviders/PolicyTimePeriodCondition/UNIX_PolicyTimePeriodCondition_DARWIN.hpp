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


UNIX_PolicyTimePeriodCondition::UNIX_PolicyTimePeriodCondition(void)
{
}

UNIX_PolicyTimePeriodCondition::~UNIX_PolicyTimePeriodCondition(void)
{
}


Boolean UNIX_PolicyTimePeriodCondition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PolicyTimePeriodCondition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getCaption() const
{
	return String ("");
}

Boolean UNIX_PolicyTimePeriodCondition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getDescription() const
{
	return String ("");
}

Boolean UNIX_PolicyTimePeriodCondition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getElementName() const
{
	return String("PolicyTimePeriodCondition");
}

Boolean UNIX_PolicyTimePeriodCondition::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getCommonName() const
{
	return String ("");
}

Boolean UNIX_PolicyTimePeriodCondition::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_PolicyTimePeriodCondition::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PolicyTimePeriodCondition::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PolicyTimePeriodCondition::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PolicyTimePeriodCondition::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getPolicyRuleCreationClassName() const
{
	return String ("");
}

Boolean UNIX_PolicyTimePeriodCondition::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getPolicyRuleName() const
{
	return String ("");
}

Boolean UNIX_PolicyTimePeriodCondition::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getCreationClassName() const
{
	return String("UNIX_PolicyTimePeriodCondition");
}

Boolean UNIX_PolicyTimePeriodCondition::getPolicyConditionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_CONDITION_NAME, getPolicyConditionName());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getPolicyConditionName() const
{
	return String ("");
}

Boolean UNIX_PolicyTimePeriodCondition::getTimePeriod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_PERIOD, getTimePeriod());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getTimePeriod() const
{
	return String ("");
}

Boolean UNIX_PolicyTimePeriodCondition::getMonthOfYearMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONTH_OF_YEAR_MASK, getMonthOfYearMask());
	return true;
}

Array<Uint8> UNIX_PolicyTimePeriodCondition::getMonthOfYearMask() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_PolicyTimePeriodCondition::getDayOfMonthMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAY_OF_MONTH_MASK, getDayOfMonthMask());
	return true;
}

Array<Uint8> UNIX_PolicyTimePeriodCondition::getDayOfMonthMask() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_PolicyTimePeriodCondition::getDayOfWeekMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAY_OF_WEEK_MASK, getDayOfWeekMask());
	return true;
}

Array<Uint8> UNIX_PolicyTimePeriodCondition::getDayOfWeekMask() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_PolicyTimePeriodCondition::getTimeOfDayMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_DAY_MASK, getTimeOfDayMask());
	return true;
}

String UNIX_PolicyTimePeriodCondition::getTimeOfDayMask() const
{
	return String ("");
}

Boolean UNIX_PolicyTimePeriodCondition::getLocalOrUtcTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_OR_UTC_TIME, getLocalOrUtcTime());
	return true;
}

Uint16 UNIX_PolicyTimePeriodCondition::getLocalOrUtcTime() const
{
	return Uint16(0);
}



Boolean UNIX_PolicyTimePeriodCondition::initialize()
{
	return false;
}

Boolean UNIX_PolicyTimePeriodCondition::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PolicyTimePeriodCondition::finalize()
{
	return false;
}

Boolean UNIX_PolicyTimePeriodCondition::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String policyRuleCreationClassNameKey;
	String policyRuleNameKey;
	String creationClassNameKey;
	String policyConditionNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME)) policyRuleCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_NAME)) policyRuleNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_CONDITION_NAME)) policyConditionNameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
