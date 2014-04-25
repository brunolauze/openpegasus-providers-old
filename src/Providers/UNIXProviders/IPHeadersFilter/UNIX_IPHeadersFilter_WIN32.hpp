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


UNIX_IPHeadersFilter::UNIX_IPHeadersFilter(void)
{
}

UNIX_IPHeadersFilter::~UNIX_IPHeadersFilter(void)
{
}


Boolean UNIX_IPHeadersFilter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPHeadersFilter::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IPHeadersFilter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPHeadersFilter::getCaption() const
{
	return String ("");
}

Boolean UNIX_IPHeadersFilter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPHeadersFilter::getDescription() const
{
	return String ("");
}

Boolean UNIX_IPHeadersFilter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPHeadersFilter::getElementName() const
{
	return String("IPHeadersFilter");
}

Boolean UNIX_IPHeadersFilter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IPHeadersFilter::getInstallDate() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_IPHeadersFilter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IPHeadersFilter::getName() const
{
	return String ("");
}

Boolean UNIX_IPHeadersFilter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IPHeadersFilter::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IPHeadersFilter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IPHeadersFilter::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IPHeadersFilter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IPHeadersFilter::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_IPHeadersFilter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_IPHeadersFilter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IPHeadersFilter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IPHeadersFilter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_IPHeadersFilter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_IPHeadersFilter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPHeadersFilter::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IPHeadersFilter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPHeadersFilter::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IPHeadersFilter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPHeadersFilter::getCreationClassName() const
{
	return String("UNIX_IPHeadersFilter");
}

Boolean UNIX_IPHeadersFilter::getIsNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEGATED, getIsNegated());
	return true;
}

Boolean UNIX_IPHeadersFilter::getIsNegated() const
{
	return Boolean(false);
}

Boolean UNIX_IPHeadersFilter::getHdrIPVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_I_P_VERSION, getHdrIPVersion());
	return true;
}

Uint8 UNIX_IPHeadersFilter::getHdrIPVersion() const
{
	return Uint8(0);
}

Boolean UNIX_IPHeadersFilter::getHdrSrcAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_ADDRESS, getHdrSrcAddress());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrSrcAddress() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_IPHeadersFilter::getHdrSrcAddressEndOfRange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_ADDRESS_END_OF_RANGE, getHdrSrcAddressEndOfRange());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrSrcAddressEndOfRange() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_IPHeadersFilter::getHdrSrcMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_MASK, getHdrSrcMask());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrSrcMask() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_IPHeadersFilter::getHdrDestAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_ADDRESS, getHdrDestAddress());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrDestAddress() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_IPHeadersFilter::getHdrDestAddressEndOfRange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_ADDRESS_END_OF_RANGE, getHdrDestAddressEndOfRange());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrDestAddressEndOfRange() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_IPHeadersFilter::getHdrDestMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_MASK, getHdrDestMask());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrDestMask() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_IPHeadersFilter::getHdrProtocolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_PROTOCOL_ID, getHdrProtocolID());
	return true;
}

Uint8 UNIX_IPHeadersFilter::getHdrProtocolID() const
{
	return Uint8(0);
}

Boolean UNIX_IPHeadersFilter::getHdrSrcPortStart(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_PORT_START, getHdrSrcPortStart());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getHdrSrcPortStart() const
{
	return Uint16(0);
}

Boolean UNIX_IPHeadersFilter::getHdrSrcPortEnd(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_SRC_PORT_END, getHdrSrcPortEnd());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getHdrSrcPortEnd() const
{
	return Uint16(0);
}

Boolean UNIX_IPHeadersFilter::getHdrDestPortStart(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_PORT_START, getHdrDestPortStart());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getHdrDestPortStart() const
{
	return Uint16(0);
}

Boolean UNIX_IPHeadersFilter::getHdrDestPortEnd(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_DEST_PORT_END, getHdrDestPortEnd());
	return true;
}

Uint16 UNIX_IPHeadersFilter::getHdrDestPortEnd() const
{
	return Uint16(0);
}

Boolean UNIX_IPHeadersFilter::getHdrDSCP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_D_S_C_P, getHdrDSCP());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrDSCP() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_IPHeadersFilter::getHdrFlowLabel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HDR_FLOW_LABEL, getHdrFlowLabel());
	return true;
}

Array<Uint8> UNIX_IPHeadersFilter::getHdrFlowLabel() const
{
	Array<Uint8> as;
	

	return as;

}



Boolean UNIX_IPHeadersFilter::initialize()
{
	return false;
}

Boolean UNIX_IPHeadersFilter::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IPHeadersFilter::finalize()
{
	return false;
}

Boolean UNIX_IPHeadersFilter::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
