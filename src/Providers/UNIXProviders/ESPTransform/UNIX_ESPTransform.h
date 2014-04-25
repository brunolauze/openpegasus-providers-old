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

#ifndef __UNIX_ESPTRANSFORM_H
#define __UNIX_ESPTRANSFORM_H


#include "CIM_SATransform.h"

#include "UNIX_ESPTransformDeps.h"


#define PROPERTY_INTEGRITY_TRANSFORM_ID				"IntegrityTransformId"
#define PROPERTY_OTHER_INTEGRITY_TRANSFORM_ID				"OtherIntegrityTransformId"
#define PROPERTY_CIPHER_TRANSFORM_ID				"CipherTransformId"
#define PROPERTY_OTHER_CIPHER_TRANSFORM_ID				"OtherCipherTransformId"
#define PROPERTY_CIPHER_KEY_LENGTH				"CipherKeyLength"
#define PROPERTY_CIPHER_KEY_ROUNDS				"CipherKeyRounds"
#define PROPERTY_USE_REPLAY_PREVENTION				"UseReplayPrevention"
#define PROPERTY_REPLAY_PREVENTION_WINDOW_SIZE				"ReplayPreventionWindowSize"


class UNIX_ESPTransform :
	public CIM_SATransform
{
public:

	UNIX_ESPTransform();
	~UNIX_ESPTransform();

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
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual Boolean getMaxLifetimeSeconds(CIMProperty&) const;
	virtual Uint64 getMaxLifetimeSeconds() const;
	virtual Boolean getMaxLifetimeKilobytes(CIMProperty&) const;
	virtual Uint64 getMaxLifetimeKilobytes() const;
	virtual Boolean getVendorID(CIMProperty&) const;
	virtual String getVendorID() const;
	virtual Boolean getIntegrityTransformId(CIMProperty&) const;
	virtual Uint16 getIntegrityTransformId() const;
	virtual Boolean getOtherIntegrityTransformId(CIMProperty&) const;
	virtual String getOtherIntegrityTransformId() const;
	virtual Boolean getCipherTransformId(CIMProperty&) const;
	virtual Uint16 getCipherTransformId() const;
	virtual Boolean getOtherCipherTransformId(CIMProperty&) const;
	virtual String getOtherCipherTransformId() const;
	virtual Boolean getCipherKeyLength(CIMProperty&) const;
	virtual Uint16 getCipherKeyLength() const;
	virtual Boolean getCipherKeyRounds(CIMProperty&) const;
	virtual Uint16 getCipherKeyRounds() const;
	virtual Boolean getUseReplayPrevention(CIMProperty&) const;
	virtual Boolean getUseReplayPrevention() const;
	virtual Boolean getReplayPreventionWindowSize(CIMProperty&) const;
	virtual Uint32 getReplayPreventionWindowSize() const;

private:
	CIMName currentScope;

#	include "UNIX_ESPTransformPrivate.h"


};

#endif /* UNIX_ESPTRANSFORM */
