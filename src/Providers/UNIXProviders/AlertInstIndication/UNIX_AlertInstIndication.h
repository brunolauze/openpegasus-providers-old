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

#ifndef __UNIX_ALERTINSTINDICATION_H
#define __UNIX_ALERTINSTINDICATION_H


#include "CIM_AlertIndication.h"

#include "UNIX_AlertInstIndicationDeps.h"


#define PROPERTY_IND_OBJECT				"IndObject"


class UNIX_AlertInstIndication :
	public CIM_AlertIndication
{
public:

	UNIX_AlertInstIndication();
	~UNIX_AlertInstIndication();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getIndicationIdentifier(CIMProperty&) const;
	virtual String getIndicationIdentifier() const;
	virtual Boolean getCorrelatedIndications(CIMProperty&) const;
	virtual Array<String> getCorrelatedIndications() const;
	virtual Boolean getIndicationTime(CIMProperty&) const;
	virtual CIMDateTime getIndicationTime() const;
	virtual Boolean getPerceivedSeverity(CIMProperty&) const;
	virtual Uint16 getPerceivedSeverity() const;
	virtual Boolean getOtherSeverity(CIMProperty&) const;
	virtual String getOtherSeverity() const;
	virtual Boolean getIndicationFilterName(CIMProperty&) const;
	virtual String getIndicationFilterName() const;
	virtual Boolean getSequenceContext(CIMProperty&) const;
	virtual String getSequenceContext() const;
	virtual Boolean getSequenceNumber(CIMProperty&) const;
	virtual Sint64 getSequenceNumber() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getAlertingManagedElement(CIMProperty&) const;
	virtual String getAlertingManagedElement() const;
	virtual Boolean getAlertingElementFormat(CIMProperty&) const;
	virtual Uint16 getAlertingElementFormat() const;
	virtual Boolean getOtherAlertingElementFormat(CIMProperty&) const;
	virtual String getOtherAlertingElementFormat() const;
	virtual Boolean getAlertType(CIMProperty&) const;
	virtual Uint16 getAlertType() const;
	virtual Boolean getOtherAlertType(CIMProperty&) const;
	virtual String getOtherAlertType() const;
	virtual Boolean getProbableCause(CIMProperty&) const;
	virtual Uint16 getProbableCause() const;
	virtual Boolean getProbableCauseDescription(CIMProperty&) const;
	virtual String getProbableCauseDescription() const;
	virtual Boolean getTrending(CIMProperty&) const;
	virtual Uint16 getTrending() const;
	virtual Boolean getRecommendedActions(CIMProperty&) const;
	virtual Array<String> getRecommendedActions() const;
	virtual Boolean getEventID(CIMProperty&) const;
	virtual String getEventID() const;
	virtual Boolean getEventTime(CIMProperty&) const;
	virtual CIMDateTime getEventTime() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getProviderName(CIMProperty&) const;
	virtual String getProviderName() const;
	virtual Boolean getMessage(CIMProperty&) const;
	virtual String getMessage() const;
	virtual Boolean getMessageArguments(CIMProperty&) const;
	virtual Array<String> getMessageArguments() const;
	virtual Boolean getMessageID(CIMProperty&) const;
	virtual String getMessageID() const;
	virtual Boolean getOwningEntity(CIMProperty&) const;
	virtual String getOwningEntity() const;
	virtual Boolean getIndObject(CIMProperty&) const;
	virtual String getIndObject() const;

private:
	CIMName currentScope;

#	include "UNIX_AlertInstIndicationPrivate.h"


};

#endif /* UNIX_ALERTINSTINDICATION */
