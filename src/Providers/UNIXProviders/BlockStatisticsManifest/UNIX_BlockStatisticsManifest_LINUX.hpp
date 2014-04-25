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


UNIX_BlockStatisticsManifest::UNIX_BlockStatisticsManifest(void)
{
}

UNIX_BlockStatisticsManifest::~UNIX_BlockStatisticsManifest(void)
{
}


Boolean UNIX_BlockStatisticsManifest::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BlockStatisticsManifest::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BlockStatisticsManifest::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BlockStatisticsManifest::getCaption() const
{
	return String ("");
}

Boolean UNIX_BlockStatisticsManifest::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BlockStatisticsManifest::getDescription() const
{
	return String ("");
}

Boolean UNIX_BlockStatisticsManifest::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BlockStatisticsManifest::getElementName() const
{
	return String("BlockStatisticsManifest");
}

Boolean UNIX_BlockStatisticsManifest::getElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_TYPE, getElementType());
	return true;
}

Uint16 UNIX_BlockStatisticsManifest::getElementType() const
{
	return Uint16(0);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_START_STATISTIC_TIME, getIncludeStartStatisticTime());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeStartStatisticTime() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_STATISTIC_TIME, getIncludeStatisticTime());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeStatisticTime() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeTotalIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_TOTAL_I_OS, getIncludeTotalIOs());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeTotalIOs() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesTransferred(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_K_BYTES_TRANSFERRED, getIncludeKBytesTransferred());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesTransferred() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_I_O_TIME_COUNTER, getIncludeIOTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeIOTimeCounter() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_I_OS, getIncludeReadIOs());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadIOs() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadHitIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_HIT_I_OS, getIncludeReadHitIOs());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadHitIOs() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_I_O_TIME_COUNTER, getIncludeReadIOTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadIOTimeCounter() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadHitIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_READ_HIT_I_O_TIME_COUNTER, getIncludeReadHitIOTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeReadHitIOTimeCounter() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesRead(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_K_BYTES_READ, getIncludeKBytesRead());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesRead() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_I_OS, getIncludeWriteIOs());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteIOs() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteHitIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_HIT_I_OS, getIncludeWriteHitIOs());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteHitIOs() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_I_O_TIME_COUNTER, getIncludeWriteIOTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteIOTimeCounter() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteHitIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_WRITE_HIT_I_O_TIME_COUNTER, getIncludeWriteHitIOTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeWriteHitIOTimeCounter() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesWritten(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_K_BYTES_WRITTEN, getIncludeKBytesWritten());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeKBytesWritten() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeIdleTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_IDLE_TIME_COUNTER, getIncludeIdleTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeIdleTimeCounter() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeMaintOp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_MAINT_OP, getIncludeMaintOp());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeMaintOp() const
{
	return Boolean(false);
}

Boolean UNIX_BlockStatisticsManifest::getIncludeMaintTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCLUDE_MAINT_TIME_COUNTER, getIncludeMaintTimeCounter());
	return true;
}

Boolean UNIX_BlockStatisticsManifest::getIncludeMaintTimeCounter() const
{
	return Boolean(false);
}



Boolean UNIX_BlockStatisticsManifest::initialize()
{
	return false;
}

Boolean UNIX_BlockStatisticsManifest::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BlockStatisticsManifest::finalize()
{
	return false;
}

Boolean UNIX_BlockStatisticsManifest::find(Array<CIMKeyBinding> &kbArray)
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
