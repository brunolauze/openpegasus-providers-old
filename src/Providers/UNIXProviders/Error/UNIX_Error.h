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

#ifndef __UNIX_ERROR_H
#define __UNIX_ERROR_H


#include "CIM_ClassBase.h"

#include "UNIX_ErrorDeps.h"


#define PROPERTY_ERROR_TYPE				"ErrorType"
#define PROPERTY_OTHER_ERROR_TYPE				"OtherErrorType"
#define PROPERTY_OWNING_ENTITY				"OwningEntity"
#define PROPERTY_MESSAGE_ID				"MessageID"
#define PROPERTY_MESSAGE				"Message"
#define PROPERTY_MESSAGE_ARGUMENTS				"MessageArguments"
#define PROPERTY_PERCEIVED_SEVERITY				"PerceivedSeverity"
#define PROPERTY_PROBABLE_CAUSE				"ProbableCause"
#define PROPERTY_PROBABLE_CAUSE_DESCRIPTION				"ProbableCauseDescription"
#define PROPERTY_RECOMMENDED_ACTIONS				"RecommendedActions"
#define PROPERTY_ERROR_SOURCE				"ErrorSource"
#define PROPERTY_ERROR_SOURCE_FORMAT				"ErrorSourceFormat"
#define PROPERTY_OTHER_ERROR_SOURCE_FORMAT				"OtherErrorSourceFormat"
#define PROPERTY_C_I_M_STATUS_CODE				"CIMStatusCode"
#define PROPERTY_C_I_M_STATUS_CODE_DESCRIPTION				"CIMStatusCodeDescription"


class UNIX_Error :
	public CIM_ClassBase
{
public:

	UNIX_Error();
	~UNIX_Error();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getErrorType(CIMProperty&) const;
	virtual Uint16 getErrorType() const;
	virtual Boolean getOtherErrorType(CIMProperty&) const;
	virtual String getOtherErrorType() const;
	virtual Boolean getOwningEntity(CIMProperty&) const;
	virtual String getOwningEntity() const;
	virtual Boolean getMessageID(CIMProperty&) const;
	virtual String getMessageID() const;
	virtual Boolean getMessage(CIMProperty&) const;
	virtual String getMessage() const;
	virtual Boolean getMessageArguments(CIMProperty&) const;
	virtual Array<String> getMessageArguments() const;
	virtual Boolean getPerceivedSeverity(CIMProperty&) const;
	virtual Uint16 getPerceivedSeverity() const;
	virtual Boolean getProbableCause(CIMProperty&) const;
	virtual Uint16 getProbableCause() const;
	virtual Boolean getProbableCauseDescription(CIMProperty&) const;
	virtual String getProbableCauseDescription() const;
	virtual Boolean getRecommendedActions(CIMProperty&) const;
	virtual Array<String> getRecommendedActions() const;
	virtual Boolean getErrorSource(CIMProperty&) const;
	virtual String getErrorSource() const;
	virtual Boolean getErrorSourceFormat(CIMProperty&) const;
	virtual Uint16 getErrorSourceFormat() const;
	virtual Boolean getOtherErrorSourceFormat(CIMProperty&) const;
	virtual String getOtherErrorSourceFormat() const;
	virtual Boolean getCIMStatusCode(CIMProperty&) const;
	virtual Uint32 getCIMStatusCode() const;
	virtual Boolean getCIMStatusCodeDescription(CIMProperty&) const;
	virtual String getCIMStatusCodeDescription() const;

private:
	CIMName currentScope;

#	include "UNIX_ErrorPrivate.h"


};

#endif /* UNIX_ERROR */
