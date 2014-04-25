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

#ifndef __UNIX_NETWORKVLAN_H
#define __UNIX_NETWORKVLAN_H


#include "CIM_ConnectivityCollection.h"

#include "UNIX_NetworkVLANDeps.h"


#define PROPERTY_V_L_A_N_ID				"VLANId"
#define PROPERTY_S_A_IDENTIFIER				"SAIdentifier"
#define PROPERTY_TRANSMISSION_SIZE				"TransmissionSize"
#define PROPERTY_TYPE_OF_MEDIA				"TypeOfMedia"
#define PROPERTY_OTHER_TYPE_DESCRIPTION				"OtherTypeDescription"


class UNIX_NetworkVLAN :
	public CIM_ConnectivityCollection
{
public:

	UNIX_NetworkVLAN();
	~UNIX_NetworkVLAN();

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
	virtual Boolean getConnectivityStatus(CIMProperty&) const;
	virtual Uint16 getConnectivityStatus() const;
	virtual Boolean getVLANId(CIMProperty&) const;
	virtual Uint16 getVLANId() const;
	virtual Boolean getSAIdentifier(CIMProperty&) const;
	virtual Uint32 getSAIdentifier() const;
	virtual Boolean getTransmissionSize(CIMProperty&) const;
	virtual Sint32 getTransmissionSize() const;
	virtual Boolean getTypeOfMedia(CIMProperty&) const;
	virtual Uint16 getTypeOfMedia() const;
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;

private:
	CIMName currentScope;

#	include "UNIX_NetworkVLANPrivate.h"


};

#endif /* UNIX_NETWORKVLAN */
