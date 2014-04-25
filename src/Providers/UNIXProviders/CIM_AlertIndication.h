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

#ifndef __CIM_ALERTINDICATION_H
#define __CIM_ALERTINDICATION_H


#include "CIM_ProcessIndication.h"


#define PROPERTY_DESCRIPTION				"Description"
#define PROPERTY_ALERTING_MANAGED_ELEMENT				"AlertingManagedElement"
#define PROPERTY_ALERTING_ELEMENT_FORMAT				"AlertingElementFormat"
#define PROPERTY_OTHER_ALERTING_ELEMENT_FORMAT				"OtherAlertingElementFormat"
#define PROPERTY_ALERT_TYPE				"AlertType"
#define PROPERTY_OTHER_ALERT_TYPE				"OtherAlertType"
#define PROPERTY_PROBABLE_CAUSE				"ProbableCause"
#define PROPERTY_PROBABLE_CAUSE_DESCRIPTION				"ProbableCauseDescription"
#define PROPERTY_TRENDING				"Trending"
#define PROPERTY_RECOMMENDED_ACTIONS				"RecommendedActions"
#define PROPERTY_EVENT_ID				"EventID"
#define PROPERTY_EVENT_TIME				"EventTime"
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME				"SystemCreationClassName"
#define PROPERTY_SYSTEM_NAME				"SystemName"
#define PROPERTY_PROVIDER_NAME				"ProviderName"
#define PROPERTY_MESSAGE				"Message"
#define PROPERTY_MESSAGE_ARGUMENTS				"MessageArguments"
#define PROPERTY_MESSAGE_ID				"MessageID"
#define PROPERTY_OWNING_ENTITY				"OwningEntity"


class CIM_AlertIndication :
	public CIM_ProcessIndication
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getDescription(CIMProperty&) const=0;
	virtual String getDescription() const=0;
	virtual Boolean getAlertingManagedElement(CIMProperty&) const=0;
	virtual String getAlertingManagedElement() const=0;
	virtual Boolean getAlertingElementFormat(CIMProperty&) const=0;
	virtual Uint16 getAlertingElementFormat() const=0;
	virtual Boolean getOtherAlertingElementFormat(CIMProperty&) const=0;
	virtual String getOtherAlertingElementFormat() const=0;
	virtual Boolean getAlertType(CIMProperty&) const=0;
	virtual Uint16 getAlertType() const=0;
	virtual Boolean getOtherAlertType(CIMProperty&) const=0;
	virtual String getOtherAlertType() const=0;
	virtual Boolean getPerceivedSeverity(CIMProperty&) const=0;
	virtual Uint16 getPerceivedSeverity() const=0;
	virtual Boolean getProbableCause(CIMProperty&) const=0;
	virtual Uint16 getProbableCause() const=0;
	virtual Boolean getProbableCauseDescription(CIMProperty&) const=0;
	virtual String getProbableCauseDescription() const=0;
	virtual Boolean getTrending(CIMProperty&) const=0;
	virtual Uint16 getTrending() const=0;
	virtual Boolean getRecommendedActions(CIMProperty&) const=0;
	virtual Array<String> getRecommendedActions() const=0;
	virtual Boolean getEventID(CIMProperty&) const=0;
	virtual String getEventID() const=0;
	virtual Boolean getEventTime(CIMProperty&) const=0;
	virtual CIMDateTime getEventTime() const=0;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const=0;
	virtual String getSystemCreationClassName() const=0;
	virtual Boolean getSystemName(CIMProperty&) const=0;
	virtual String getSystemName() const=0;
	virtual Boolean getProviderName(CIMProperty&) const=0;
	virtual String getProviderName() const=0;
	virtual Boolean getMessage(CIMProperty&) const=0;
	virtual String getMessage() const=0;
	virtual Boolean getMessageArguments(CIMProperty&) const=0;
	virtual Array<String> getMessageArguments() const=0;
	virtual Boolean getMessageID(CIMProperty&) const=0;
	virtual String getMessageID() const=0;
	virtual Boolean getOwningEntity(CIMProperty&) const=0;
	virtual String getOwningEntity() const=0;

private:

};

#endif /* CIM_ALERTINDICATION */
