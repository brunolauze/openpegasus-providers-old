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

#ifndef __CIM_VIDEOCONTROLLER_H
#define __CIM_VIDEOCONTROLLER_H


#include "CIM_Controller.h"


#define PROPERTY_VIDEO_PROCESSOR				"VideoProcessor"
#define PROPERTY_VIDEO_MEMORY_TYPE				"VideoMemoryType"
#define PROPERTY_NUMBER_OF_VIDEO_PAGES				"NumberOfVideoPages"
#define PROPERTY_MAX_MEMORY_SUPPORTED				"MaxMemorySupported"
#define PROPERTY_ACCELERATOR_CAPABILITIES				"AcceleratorCapabilities"
#define PROPERTY_CAPABILITY_DESCRIPTIONS				"CapabilityDescriptions"
#define PROPERTY_CURRENT_BITS_PER_PIXEL				"CurrentBitsPerPixel"
#define PROPERTY_CURRENT_HORIZONTAL_RESOLUTION				"CurrentHorizontalResolution"
#define PROPERTY_CURRENT_VERTICAL_RESOLUTION				"CurrentVerticalResolution"
#define PROPERTY_MAX_REFRESH_RATE				"MaxRefreshRate"
#define PROPERTY_MIN_REFRESH_RATE				"MinRefreshRate"
#define PROPERTY_CURRENT_REFRESH_RATE				"CurrentRefreshRate"
#define PROPERTY_CURRENT_SCAN_MODE				"CurrentScanMode"
#define PROPERTY_CURRENT_NUMBER_OF_ROWS				"CurrentNumberOfRows"
#define PROPERTY_CURRENT_NUMBER_OF_COLUMNS				"CurrentNumberOfColumns"
#define PROPERTY_CURRENT_NUMBER_OF_COLORS				"CurrentNumberOfColors"


class CIM_VideoController :
	public CIM_Controller
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getDescription(CIMProperty&) const=0;
	virtual String getDescription() const=0;
	virtual Boolean getVideoProcessor(CIMProperty&) const=0;
	virtual String getVideoProcessor() const=0;
	virtual Boolean getVideoMemoryType(CIMProperty&) const=0;
	virtual Uint16 getVideoMemoryType() const=0;
	virtual Boolean getNumberOfVideoPages(CIMProperty&) const=0;
	virtual Uint32 getNumberOfVideoPages() const=0;
	virtual Boolean getMaxMemorySupported(CIMProperty&) const=0;
	virtual Uint32 getMaxMemorySupported() const=0;
	virtual Boolean getAcceleratorCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getAcceleratorCapabilities() const=0;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const=0;
	virtual Array<String> getCapabilityDescriptions() const=0;
	virtual Boolean getCurrentBitsPerPixel(CIMProperty&) const=0;
	virtual Uint32 getCurrentBitsPerPixel() const=0;
	virtual Boolean getCurrentHorizontalResolution(CIMProperty&) const=0;
	virtual Uint32 getCurrentHorizontalResolution() const=0;
	virtual Boolean getCurrentVerticalResolution(CIMProperty&) const=0;
	virtual Uint32 getCurrentVerticalResolution() const=0;
	virtual Boolean getMaxRefreshRate(CIMProperty&) const=0;
	virtual Uint32 getMaxRefreshRate() const=0;
	virtual Boolean getMinRefreshRate(CIMProperty&) const=0;
	virtual Uint32 getMinRefreshRate() const=0;
	virtual Boolean getCurrentRefreshRate(CIMProperty&) const=0;
	virtual Uint32 getCurrentRefreshRate() const=0;
	virtual Boolean getCurrentScanMode(CIMProperty&) const=0;
	virtual Uint16 getCurrentScanMode() const=0;
	virtual Boolean getCurrentNumberOfRows(CIMProperty&) const=0;
	virtual Uint32 getCurrentNumberOfRows() const=0;
	virtual Boolean getCurrentNumberOfColumns(CIMProperty&) const=0;
	virtual Uint32 getCurrentNumberOfColumns() const=0;
	virtual Boolean getCurrentNumberOfColors(CIMProperty&) const=0;
	virtual Uint64 getCurrentNumberOfColors() const=0;

private:

};

#endif /* CIM_VIDEOCONTROLLER */
