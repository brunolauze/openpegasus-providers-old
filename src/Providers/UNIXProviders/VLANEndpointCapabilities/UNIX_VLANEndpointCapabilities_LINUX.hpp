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


UNIX_VLANEndpointCapabilities::UNIX_VLANEndpointCapabilities(void)
{
}

UNIX_VLANEndpointCapabilities::~UNIX_VLANEndpointCapabilities(void)
{
}


Boolean UNIX_VLANEndpointCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VLANEndpointCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_VLANEndpointCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VLANEndpointCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_VLANEndpointCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VLANEndpointCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_VLANEndpointCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VLANEndpointCapabilities::getElementName() const
{
	return String("VLANEndpointCapabilities");
}

Boolean UNIX_VLANEndpointCapabilities::getDot1QTagging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOT_1_Q_TAGGING, getDot1QTagging());
	return true;
}

Boolean UNIX_VLANEndpointCapabilities::getDot1QTagging() const
{
	return Boolean(false);
}

Boolean UNIX_VLANEndpointCapabilities::getDot1qAcceptableVLANFramesTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOT_1Q_ACCEPTABLE_V_L_A_N_FRAMES_TYPES, getDot1qAcceptableVLANFramesTypes());
	return true;
}

Uint16 UNIX_VLANEndpointCapabilities::getDot1qAcceptableVLANFramesTypes() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpointCapabilities::getDot1qIngressFiltering(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOT_1Q_INGRESS_FILTERING, getDot1qIngressFiltering());
	return true;
}

Boolean UNIX_VLANEndpointCapabilities::getDot1qIngressFiltering() const
{
	return Boolean(false);
}

Boolean UNIX_VLANEndpointCapabilities::getSupportsTrunkEncapsulationNegotiation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_TRUNK_ENCAPSULATION_NEGOTIATION, getSupportsTrunkEncapsulationNegotiation());
	return true;
}

Boolean UNIX_VLANEndpointCapabilities::getSupportsTrunkEncapsulationNegotiation() const
{
	return Boolean(false);
}



Boolean UNIX_VLANEndpointCapabilities::initialize()
{
	return false;
}

Boolean UNIX_VLANEndpointCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_VLANEndpointCapabilities::finalize()
{
	return false;
}

Boolean UNIX_VLANEndpointCapabilities::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
