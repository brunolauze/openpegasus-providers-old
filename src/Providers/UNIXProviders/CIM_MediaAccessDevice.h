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

#ifndef __CIM_MEDIAACCESSDEVICE_H
#define __CIM_MEDIAACCESSDEVICE_H


#include "CIM_LogicalDevice.h"


#define PROPERTY_CAPABILITIES				"Capabilities"
#define PROPERTY_CAPABILITY_DESCRIPTIONS				"CapabilityDescriptions"
#define PROPERTY_ERROR_METHODOLOGY				"ErrorMethodology"
#define PROPERTY_COMPRESSION_METHOD				"CompressionMethod"
#define PROPERTY_NUMBER_OF_MEDIA_SUPPORTED				"NumberOfMediaSupported"
#define PROPERTY_MAX_MEDIA_SIZE				"MaxMediaSize"
#define PROPERTY_DEFAULT_BLOCK_SIZE				"DefaultBlockSize"
#define PROPERTY_MAX_BLOCK_SIZE				"MaxBlockSize"
#define PROPERTY_MIN_BLOCK_SIZE				"MinBlockSize"
#define PROPERTY_NEEDS_CLEANING				"NeedsCleaning"
#define PROPERTY_MEDIA_IS_LOCKED				"MediaIsLocked"
#define PROPERTY_SECURITY				"Security"
#define PROPERTY_LAST_CLEANED				"LastCleaned"
#define PROPERTY_MAX_ACCESS_TIME				"MaxAccessTime"
#define PROPERTY_UNCOMPRESSED_DATA_RATE				"UncompressedDataRate"
#define PROPERTY_LOAD_TIME				"LoadTime"
#define PROPERTY_UNLOAD_TIME				"UnloadTime"
#define PROPERTY_MOUNT_COUNT				"MountCount"
#define PROPERTY_TIME_OF_LAST_MOUNT				"TimeOfLastMount"
#define PROPERTY_TOTAL_MOUNT_TIME				"TotalMountTime"
#define PROPERTY_UNITS_DESCRIPTION				"UnitsDescription"
#define PROPERTY_MAX_UNITS_BEFORE_CLEANING				"MaxUnitsBeforeCleaning"
#define PROPERTY_UNITS_USED				"UnitsUsed"


class CIM_MediaAccessDevice :
	public CIM_LogicalDevice
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getCapabilities() const=0;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const=0;
	virtual Array<String> getCapabilityDescriptions() const=0;
	virtual Boolean getErrorMethodology(CIMProperty&) const=0;
	virtual String getErrorMethodology() const=0;
	virtual Boolean getCompressionMethod(CIMProperty&) const=0;
	virtual String getCompressionMethod() const=0;
	virtual Boolean getNumberOfMediaSupported(CIMProperty&) const=0;
	virtual Uint32 getNumberOfMediaSupported() const=0;
	virtual Boolean getMaxMediaSize(CIMProperty&) const=0;
	virtual Uint64 getMaxMediaSize() const=0;
	virtual Boolean getDefaultBlockSize(CIMProperty&) const=0;
	virtual Uint64 getDefaultBlockSize() const=0;
	virtual Boolean getMaxBlockSize(CIMProperty&) const=0;
	virtual Uint64 getMaxBlockSize() const=0;
	virtual Boolean getMinBlockSize(CIMProperty&) const=0;
	virtual Uint64 getMinBlockSize() const=0;
	virtual Boolean getNeedsCleaning(CIMProperty&) const=0;
	virtual Boolean getNeedsCleaning() const=0;
	virtual Boolean getMediaIsLocked(CIMProperty&) const=0;
	virtual Boolean getMediaIsLocked() const=0;
	virtual Boolean getSecurity(CIMProperty&) const=0;
	virtual Uint16 getSecurity() const=0;
	virtual Boolean getLastCleaned(CIMProperty&) const=0;
	virtual CIMDateTime getLastCleaned() const=0;
	virtual Boolean getMaxAccessTime(CIMProperty&) const=0;
	virtual Uint64 getMaxAccessTime() const=0;
	virtual Boolean getUncompressedDataRate(CIMProperty&) const=0;
	virtual Uint32 getUncompressedDataRate() const=0;
	virtual Boolean getLoadTime(CIMProperty&) const=0;
	virtual Uint64 getLoadTime() const=0;
	virtual Boolean getUnloadTime(CIMProperty&) const=0;
	virtual Uint64 getUnloadTime() const=0;
	virtual Boolean getMountCount(CIMProperty&) const=0;
	virtual Uint64 getMountCount() const=0;
	virtual Boolean getTimeOfLastMount(CIMProperty&) const=0;
	virtual CIMDateTime getTimeOfLastMount() const=0;
	virtual Boolean getTotalMountTime(CIMProperty&) const=0;
	virtual Uint64 getTotalMountTime() const=0;
	virtual Boolean getUnitsDescription(CIMProperty&) const=0;
	virtual String getUnitsDescription() const=0;
	virtual Boolean getMaxUnitsBeforeCleaning(CIMProperty&) const=0;
	virtual Uint64 getMaxUnitsBeforeCleaning() const=0;
	virtual Boolean getUnitsUsed(CIMProperty&) const=0;
	virtual Uint64 getUnitsUsed() const=0;

private:

};

#endif /* CIM_MEDIAACCESSDEVICE */
