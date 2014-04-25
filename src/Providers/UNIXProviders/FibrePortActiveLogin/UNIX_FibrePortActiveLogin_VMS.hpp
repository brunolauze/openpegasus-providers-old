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


UNIX_FibrePortActiveLogin::UNIX_FibrePortActiveLogin(void)
{
}

UNIX_FibrePortActiveLogin::~UNIX_FibrePortActiveLogin(void)
{
}


Boolean UNIX_FibrePortActiveLogin::getLoginOriginator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGIN_ORIGINATOR, getLoginOriginator());
	return true;
}

CIMInstance UNIX_FibrePortActiveLogin::getLoginOriginator() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_FibrePortActiveLogin::getLoginResponder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGIN_RESPONDER, getLoginResponder());
	return true;
}

CIMInstance UNIX_FibrePortActiveLogin::getLoginResponder() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_FibrePortActiveLogin::getNegotiatedCOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_C_OS, getNegotiatedCOS());
	return true;
}

Uint16 UNIX_FibrePortActiveLogin::getNegotiatedCOS() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePortActiveLogin::getNegotiatedFrameSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_FRAME_SIZE, getNegotiatedFrameSize());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getNegotiatedFrameSize() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortActiveLogin::getNegotiatedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_SPEED, getNegotiatedSpeed());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getNegotiatedSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortActiveLogin::getACKModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_C_K_MODEL, getACKModel());
	return true;
}

Uint16 UNIX_FibrePortActiveLogin::getACKModel() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePortActiveLogin::getBufferToBufferModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_TO_BUFFER_MODEL, getBufferToBufferModel());
	return true;
}

Uint16 UNIX_FibrePortActiveLogin::getBufferToBufferModel() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePortActiveLogin::getOriginatorBufferCredit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIGINATOR_BUFFER_CREDIT, getOriginatorBufferCredit());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getOriginatorBufferCredit() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortActiveLogin::getResponderBufferCredit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESPONDER_BUFFER_CREDIT, getResponderBufferCredit());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getResponderBufferCredit() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortActiveLogin::getOriginatorEndCredit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIGINATOR_END_CREDIT, getOriginatorEndCredit());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getOriginatorEndCredit() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortActiveLogin::getResponderEndCredit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESPONDER_END_CREDIT, getResponderEndCredit());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getResponderEndCredit() const
{
	return Uint64(0);
}



Boolean UNIX_FibrePortActiveLogin::initialize()
{
	return false;
}

Boolean UNIX_FibrePortActiveLogin::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FibrePortActiveLogin::finalize()
{
	return false;
}

Boolean UNIX_FibrePortActiveLogin::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String loginOriginatorKey;
	String loginResponderKey;
	String negotiatedCOSKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_LOGIN_ORIGINATOR)) loginOriginatorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOGIN_RESPONDER)) loginResponderKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NEGOTIATED_C_OS)) negotiatedCOSKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
