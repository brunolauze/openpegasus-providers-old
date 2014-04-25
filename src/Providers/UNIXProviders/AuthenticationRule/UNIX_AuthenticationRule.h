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

#ifndef __UNIX_AUTHENTICATIONRULE_H
#define __UNIX_AUTHENTICATIONRULE_H


#include "CIM_PolicyRule.h"

#include "UNIX_AuthenticationRuleDeps.h"




class UNIX_AuthenticationRule :
	public CIM_PolicyRule
{
public:

	UNIX_AuthenticationRule();
	~UNIX_AuthenticationRule();

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
	virtual Boolean getPolicyDecisionStrategy(CIMProperty&) const;
	virtual Uint16 getPolicyDecisionStrategy() const;
	virtual Boolean getPolicyRoles(CIMProperty&) const;
	virtual Array<String> getPolicyRoles() const;
	virtual Boolean getEnabled(CIMProperty&) const;
	virtual Uint16 getEnabled() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getPolicyRuleName(CIMProperty&) const;
	virtual String getPolicyRuleName() const;
	virtual Boolean getConditionListType(CIMProperty&) const;
	virtual Uint16 getConditionListType() const;
	virtual Boolean getRuleUsage(CIMProperty&) const;
	virtual String getRuleUsage() const;
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint16 getPriority() const;
	virtual Boolean getMandatory(CIMProperty&) const;
	virtual Boolean getMandatory() const;
	virtual Boolean getSequencedActions(CIMProperty&) const;
	virtual Uint16 getSequencedActions() const;
	virtual Boolean getExecutionStrategy(CIMProperty&) const;
	virtual Uint16 getExecutionStrategy() const;

private:
	CIMName currentScope;

#	include "UNIX_AuthenticationRulePrivate.h"


};

#endif /* UNIX_AUTHENTICATIONRULE */
