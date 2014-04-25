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


UNIX_Error::UNIX_Error(void)
{
}

UNIX_Error::~UNIX_Error(void)
{
}


Boolean UNIX_Error::getErrorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TYPE, getErrorType());
	return true;
}

Uint16 UNIX_Error::getErrorType() const
{
	return Uint16(0);
}

Boolean UNIX_Error::getOtherErrorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_TYPE, getOtherErrorType());
	return true;
}

String UNIX_Error::getOtherErrorType() const
{
	return String ("");
}

Boolean UNIX_Error::getOwningEntity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNING_ENTITY, getOwningEntity());
	return true;
}

String UNIX_Error::getOwningEntity() const
{
	return String ("");
}

Boolean UNIX_Error::getMessageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ID, getMessageID());
	return true;
}

String UNIX_Error::getMessageID() const
{
	return String ("");
}

Boolean UNIX_Error::getMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE, getMessage());
	return true;
}

String UNIX_Error::getMessage() const
{
	return String ("");
}

Boolean UNIX_Error::getMessageArguments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ARGUMENTS, getMessageArguments());
	return true;
}

Array<String> UNIX_Error::getMessageArguments() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Error::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_Error::getPerceivedSeverity() const
{
	return Uint16(0);
}

Boolean UNIX_Error::getProbableCause(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROBABLE_CAUSE, getProbableCause());
	return true;
}

Uint16 UNIX_Error::getProbableCause() const
{
	return Uint16(0);
}

Boolean UNIX_Error::getProbableCauseDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROBABLE_CAUSE_DESCRIPTION, getProbableCauseDescription());
	return true;
}

String UNIX_Error::getProbableCauseDescription() const
{
	return String ("");
}

Boolean UNIX_Error::getRecommendedActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOMMENDED_ACTIONS, getRecommendedActions());
	return true;
}

Array<String> UNIX_Error::getRecommendedActions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Error::getErrorSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_SOURCE, getErrorSource());
	return true;
}

String UNIX_Error::getErrorSource() const
{
	return String ("");
}

Boolean UNIX_Error::getErrorSourceFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_SOURCE_FORMAT, getErrorSourceFormat());
	return true;
}

Uint16 UNIX_Error::getErrorSourceFormat() const
{
	return Uint16(0);
}

Boolean UNIX_Error::getOtherErrorSourceFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_SOURCE_FORMAT, getOtherErrorSourceFormat());
	return true;
}

String UNIX_Error::getOtherErrorSourceFormat() const
{
	return String ("");
}

Boolean UNIX_Error::getCIMStatusCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_I_M_STATUS_CODE, getCIMStatusCode());
	return true;
}

Uint32 UNIX_Error::getCIMStatusCode() const
{
	return Uint32(0);
}

Boolean UNIX_Error::getCIMStatusCodeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_I_M_STATUS_CODE_DESCRIPTION, getCIMStatusCodeDescription());
	return true;
}

String UNIX_Error::getCIMStatusCodeDescription() const
{
	return String ("");
}



Boolean UNIX_Error::initialize()
{
	return false;
}

Boolean UNIX_Error::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Error::finalize()
{
	return false;
}

Boolean UNIX_Error::find(Array<CIMKeyBinding> &kbArray)
{
	return true;
}
