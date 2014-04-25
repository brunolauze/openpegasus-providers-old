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

#ifndef __UNIX_DIAGNOSTICSERVICECAPABILITIES_H
#define __UNIX_DIAGNOSTICSERVICECAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_DiagnosticServiceCapabilitiesDeps.h"


#define PROPERTY_SUPPORTED_SERVICE_MODES				"SupportedServiceModes"
#define PROPERTY_OTHER_SUPPORTED_SERVICE_MODES_DESCRIPTIONS				"OtherSupportedServiceModesDescriptions"
#define PROPERTY_SUPPORTED_LOOP_CONTROL				"SupportedLoopControl"
#define PROPERTY_OTHER_SUPPORTED_LOOP_CONTROL_DESCRIPTIONS				"OtherSupportedLoopControlDescriptions"
#define PROPERTY_SUPPORTED_LOG_OPTIONS				"SupportedLogOptions"
#define PROPERTY_OTHER_SUPPORTED_LOG_OPTIONS_DESCRIPTIONS				"OtherSupportedLogOptionsDescriptions"
#define PROPERTY_SUPPORTED_LOG_STORAGE				"SupportedLogStorage"
#define PROPERTY_OTHER_SUPPORTED_LOG_STORAGE_DESCRIPTIONS				"OtherSupportedLogStorageDescriptions"
#define PROPERTY_SUPPORTED_EXECUTION_CONTROLS				"SupportedExecutionControls"
#define PROPERTY_OTHER_SUPPORTED_EXECUTION_CONTROLS_DESCRIPTIONS				"OtherSupportedExecutionControlsDescriptions"
#define PROPERTY_SUPPORTED_TEST_WARNINGS				"SupportedTestWarnings"


class UNIX_DiagnosticServiceCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_DiagnosticServiceCapabilities();
	~UNIX_DiagnosticServiceCapabilities();

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
	virtual Boolean getSupportedServiceModes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedServiceModes() const;
	virtual Boolean getOtherSupportedServiceModesDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedServiceModesDescriptions() const;
	virtual Boolean getSupportedLoopControl(CIMProperty&) const;
	virtual Array<Uint16> getSupportedLoopControl() const;
	virtual Boolean getOtherSupportedLoopControlDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedLoopControlDescriptions() const;
	virtual Boolean getSupportedLogOptions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedLogOptions() const;
	virtual Boolean getOtherSupportedLogOptionsDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedLogOptionsDescriptions() const;
	virtual Boolean getSupportedLogStorage(CIMProperty&) const;
	virtual Array<Uint16> getSupportedLogStorage() const;
	virtual Boolean getOtherSupportedLogStorageDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedLogStorageDescriptions() const;
	virtual Boolean getSupportedExecutionControls(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExecutionControls() const;
	virtual Boolean getOtherSupportedExecutionControlsDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedExecutionControlsDescriptions() const;
	virtual Boolean getSupportedTestWarnings(CIMProperty&) const;
	virtual Uint16 getSupportedTestWarnings() const;

private:
	CIMName currentScope;

#	include "UNIX_DiagnosticServiceCapabilitiesPrivate.h"


};

#endif /* UNIX_DIAGNOSTICSERVICECAPABILITIES */
