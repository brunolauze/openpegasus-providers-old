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

#ifndef __UNIX_IPHEADERSFILTER_H
#define __UNIX_IPHEADERSFILTER_H


#include "CIM_FilterEntryBase.h"

#include "UNIX_IPHeadersFilterDeps.h"


#define PROPERTY_HDR_I_P_VERSION				"HdrIPVersion"
#define PROPERTY_HDR_SRC_ADDRESS				"HdrSrcAddress"
#define PROPERTY_HDR_SRC_ADDRESS_END_OF_RANGE				"HdrSrcAddressEndOfRange"
#define PROPERTY_HDR_SRC_MASK				"HdrSrcMask"
#define PROPERTY_HDR_DEST_ADDRESS				"HdrDestAddress"
#define PROPERTY_HDR_DEST_ADDRESS_END_OF_RANGE				"HdrDestAddressEndOfRange"
#define PROPERTY_HDR_DEST_MASK				"HdrDestMask"
#define PROPERTY_HDR_PROTOCOL_ID				"HdrProtocolID"
#define PROPERTY_HDR_SRC_PORT_START				"HdrSrcPortStart"
#define PROPERTY_HDR_SRC_PORT_END				"HdrSrcPortEnd"
#define PROPERTY_HDR_DEST_PORT_START				"HdrDestPortStart"
#define PROPERTY_HDR_DEST_PORT_END				"HdrDestPortEnd"
#define PROPERTY_HDR_D_S_C_P				"HdrDSCP"
#define PROPERTY_HDR_FLOW_LABEL				"HdrFlowLabel"


class UNIX_IPHeadersFilter :
	public CIM_FilterEntryBase
{
public:

	UNIX_IPHeadersFilter();
	~UNIX_IPHeadersFilter();

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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getIsNegated(CIMProperty&) const;
	virtual Boolean getIsNegated() const;
	virtual Boolean getHdrIPVersion(CIMProperty&) const;
	virtual Uint8 getHdrIPVersion() const;
	virtual Boolean getHdrSrcAddress(CIMProperty&) const;
	virtual Array<Uint8> getHdrSrcAddress() const;
	virtual Boolean getHdrSrcAddressEndOfRange(CIMProperty&) const;
	virtual Array<Uint8> getHdrSrcAddressEndOfRange() const;
	virtual Boolean getHdrSrcMask(CIMProperty&) const;
	virtual Array<Uint8> getHdrSrcMask() const;
	virtual Boolean getHdrDestAddress(CIMProperty&) const;
	virtual Array<Uint8> getHdrDestAddress() const;
	virtual Boolean getHdrDestAddressEndOfRange(CIMProperty&) const;
	virtual Array<Uint8> getHdrDestAddressEndOfRange() const;
	virtual Boolean getHdrDestMask(CIMProperty&) const;
	virtual Array<Uint8> getHdrDestMask() const;
	virtual Boolean getHdrProtocolID(CIMProperty&) const;
	virtual Uint8 getHdrProtocolID() const;
	virtual Boolean getHdrSrcPortStart(CIMProperty&) const;
	virtual Uint16 getHdrSrcPortStart() const;
	virtual Boolean getHdrSrcPortEnd(CIMProperty&) const;
	virtual Uint16 getHdrSrcPortEnd() const;
	virtual Boolean getHdrDestPortStart(CIMProperty&) const;
	virtual Uint16 getHdrDestPortStart() const;
	virtual Boolean getHdrDestPortEnd(CIMProperty&) const;
	virtual Uint16 getHdrDestPortEnd() const;
	virtual Boolean getHdrDSCP(CIMProperty&) const;
	virtual Array<Uint8> getHdrDSCP() const;
	virtual Boolean getHdrFlowLabel(CIMProperty&) const;
	virtual Array<Uint8> getHdrFlowLabel() const;

private:
	CIMName currentScope;

#	include "UNIX_IPHeadersFilterPrivate.h"


};

#endif /* UNIX_IPHEADERSFILTER */
