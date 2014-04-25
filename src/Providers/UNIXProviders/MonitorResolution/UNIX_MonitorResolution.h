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

#ifndef __UNIX_MONITORRESOLUTION_H
#define __UNIX_MONITORRESOLUTION_H


#include "CIM_Setting.h"

#include "UNIX_MonitorResolutionDeps.h"


#define PROPERTY_HORIZONTAL_RESOLUTION				"HorizontalResolution"
#define PROPERTY_VERTICAL_RESOLUTION				"VerticalResolution"
#define PROPERTY_REFRESH_RATE				"RefreshRate"
#define PROPERTY_MIN_REFRESH_RATE				"MinRefreshRate"
#define PROPERTY_MAX_REFRESH_RATE				"MaxRefreshRate"
#define PROPERTY_SCAN_MODE				"ScanMode"


class UNIX_MonitorResolution :
	public CIM_Setting
{
public:

	UNIX_MonitorResolution();
	~UNIX_MonitorResolution();

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
	virtual Boolean getSettingID(CIMProperty&) const;
	virtual String getSettingID() const;
	virtual Boolean getHorizontalResolution(CIMProperty&) const;
	virtual Uint32 getHorizontalResolution() const;
	virtual Boolean getVerticalResolution(CIMProperty&) const;
	virtual Uint32 getVerticalResolution() const;
	virtual Boolean getRefreshRate(CIMProperty&) const;
	virtual Uint32 getRefreshRate() const;
	virtual Boolean getMinRefreshRate(CIMProperty&) const;
	virtual Uint32 getMinRefreshRate() const;
	virtual Boolean getMaxRefreshRate(CIMProperty&) const;
	virtual Uint32 getMaxRefreshRate() const;
	virtual Boolean getScanMode(CIMProperty&) const;
	virtual Uint16 getScanMode() const;

private:
	CIMName currentScope;

#	include "UNIX_MonitorResolutionPrivate.h"


};

#endif /* UNIX_MONITORRESOLUTION */
