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

#ifndef __CIM_CALLBASEDMODEM_H
#define __CIM_CALLBASEDMODEM_H


#include "CIM_Modem.h"


#define PROPERTY_FALLBACK_ENABLED				"FallbackEnabled"
#define PROPERTY_COMPRESSION_SUPPORTED				"CompressionSupported"
#define PROPERTY_OTHER_COMPRESSION_DESCRIPTION				"OtherCompressionDescription"
#define PROPERTY_COMPRESSION_INFO				"CompressionInfo"
#define PROPERTY_OTHER_COMPRESSION_INFO_DESCRIPTION				"OtherCompressionInfoDescription"
#define PROPERTY_MODULATION_SUPPORTED				"ModulationSupported"
#define PROPERTY_OTHER_MODULATION_DESCRIPTION				"OtherModulationDescription"
#define PROPERTY_MODULATION_SCHEME				"ModulationScheme"
#define PROPERTY_OTHER_SCHEME_DESCRIPTION				"OtherSchemeDescription"
#define PROPERTY_ERROR_CONTROL_SUPPORTED				"ErrorControlSupported"
#define PROPERTY_OTHER_ERROR_CONTROL_DESCRIPTION				"OtherErrorControlDescription"
#define PROPERTY_ERROR_CONTROL_INFO				"ErrorControlInfo"
#define PROPERTY_OTHER_ERROR_CONTROL_INFO_DESCRIPTION				"OtherErrorControlInfoDescription"
#define PROPERTY_TIME_OF_LAST_RESET				"TimeOfLastReset"
#define PROPERTY_CALL_SPEED				"CallSpeed"
#define PROPERTY_CALL_STATUS				"CallStatus"
#define PROPERTY_CHARS_SENT				"CharsSent"
#define PROPERTY_CHARS_RECEIVED				"CharsReceived"
#define PROPERTY_CHARS_LOST				"CharsLost"
#define PROPERTY_BLOCKS_SENT				"BlocksSent"
#define PROPERTY_BLOCKS_RESENT				"BlocksResent"
#define PROPERTY_BLOCKS_RECEIVED				"BlocksReceived"
#define PROPERTY_BLOCK_ERRORS				"BlockErrors"
#define PROPERTY_CALL_LENGTH				"CallLength"
#define PROPERTY_NUMBER_DIALED				"NumberDialed"


class CIM_CallBasedModem :
	public CIM_Modem
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getFallbackEnabled(CIMProperty&) const=0;
	virtual Boolean getFallbackEnabled() const=0;
	virtual Boolean getCompressionSupported(CIMProperty&) const=0;
	virtual Array<Uint16> getCompressionSupported() const=0;
	virtual Boolean getOtherCompressionDescription(CIMProperty&) const=0;
	virtual String getOtherCompressionDescription() const=0;
	virtual Boolean getCompressionInfo(CIMProperty&) const=0;
	virtual Uint16 getCompressionInfo() const=0;
	virtual Boolean getOtherCompressionInfoDescription(CIMProperty&) const=0;
	virtual String getOtherCompressionInfoDescription() const=0;
	virtual Boolean getModulationSupported(CIMProperty&) const=0;
	virtual Array<Uint16> getModulationSupported() const=0;
	virtual Boolean getOtherModulationDescription(CIMProperty&) const=0;
	virtual String getOtherModulationDescription() const=0;
	virtual Boolean getModulationScheme(CIMProperty&) const=0;
	virtual Uint16 getModulationScheme() const=0;
	virtual Boolean getOtherSchemeDescription(CIMProperty&) const=0;
	virtual String getOtherSchemeDescription() const=0;
	virtual Boolean getErrorControlSupported(CIMProperty&) const=0;
	virtual Array<Uint16> getErrorControlSupported() const=0;
	virtual Boolean getOtherErrorControlDescription(CIMProperty&) const=0;
	virtual String getOtherErrorControlDescription() const=0;
	virtual Boolean getErrorControlInfo(CIMProperty&) const=0;
	virtual Uint16 getErrorControlInfo() const=0;
	virtual Boolean getOtherErrorControlInfoDescription(CIMProperty&) const=0;
	virtual String getOtherErrorControlInfoDescription() const=0;
	virtual Boolean getTimeOfLastReset(CIMProperty&) const=0;
	virtual CIMDateTime getTimeOfLastReset() const=0;
	virtual Boolean getCallSpeed(CIMProperty&) const=0;
	virtual Uint32 getCallSpeed() const=0;
	virtual Boolean getCallStatus(CIMProperty&) const=0;
	virtual Uint16 getCallStatus() const=0;
	virtual Boolean getCharsSent(CIMProperty&) const=0;
	virtual Uint32 getCharsSent() const=0;
	virtual Boolean getCharsReceived(CIMProperty&) const=0;
	virtual Uint32 getCharsReceived() const=0;
	virtual Boolean getCharsLost(CIMProperty&) const=0;
	virtual Uint32 getCharsLost() const=0;
	virtual Boolean getBlocksSent(CIMProperty&) const=0;
	virtual Uint32 getBlocksSent() const=0;
	virtual Boolean getBlocksResent(CIMProperty&) const=0;
	virtual Uint32 getBlocksResent() const=0;
	virtual Boolean getBlocksReceived(CIMProperty&) const=0;
	virtual Uint32 getBlocksReceived() const=0;
	virtual Boolean getBlockErrors(CIMProperty&) const=0;
	virtual Uint32 getBlockErrors() const=0;
	virtual Boolean getCallLength(CIMProperty&) const=0;
	virtual CIMDateTime getCallLength() const=0;
	virtual Boolean getNumberDialed(CIMProperty&) const=0;
	virtual String getNumberDialed() const=0;

private:

};

#endif /* CIM_CALLBASEDMODEM */
