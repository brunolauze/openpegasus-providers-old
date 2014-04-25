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

#include "UNIX_NextHopIPRoute.h"

#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NextHopIPRoute_HPUX.hxx"
#	include "UNIX_NextHopIPRoute_HPUX.hpp"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NextHopIPRoute_LINUX.hxx"
#	include "UNIX_NextHopIPRoute_LINUX.hpp"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NextHopIPRoute_DARWIN.hxx"
#	include "UNIX_NextHopIPRoute_DARWIN.hpp"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NextHopIPRoute_AIX.hxx"
#	include "UNIX_NextHopIPRoute_AIX.hpp"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NextHopIPRoute_FREEBSD.hxx"
#	include "UNIX_NextHopIPRoute_FREEBSD.hpp"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NextHopIPRoute_SOLARIS.hxx"
#	include "UNIX_NextHopIPRoute_SOLARIS.hpp"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NextHopIPRoute_ZOS.hxx"
#	include "UNIX_NextHopIPRoute_ZOS.hpp"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NextHopIPRoute_VMS.hxx"
#	include "UNIX_NextHopIPRoute_VMS.hpp"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NextHopIPRoute_TRU64.hxx"
#	include "UNIX_NextHopIPRoute_TRU64.hpp"
#else
#	include "UNIX_NextHopIPRoute_STUB.hxx"
#	include "UNIX_NextHopIPRoute_STUB.hpp"
#endif


Boolean UNIX_NextHopIPRoute::validateKey(CIMKeyBinding &kb) const
{

	/* Keys  */
	//InstanceID

	CIMName name = kb.getName();
	if (name.equal(PROPERTY_INSTANCE_ID)
		)
			return true;

	return false;
}

void UNIX_NextHopIPRoute::setScope(CIMName scope)
{
	currentScope = scope;
}

