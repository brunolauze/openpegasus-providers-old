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

#include "UNIX_RoutingPolicy.h"

#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_RoutingPolicy_HPUX.hxx"
#	include "UNIX_RoutingPolicy_HPUX.hpp"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_RoutingPolicy_LINUX.hxx"
#	include "UNIX_RoutingPolicy_LINUX.hpp"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_RoutingPolicy_DARWIN.hxx"
#	include "UNIX_RoutingPolicy_DARWIN.hpp"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_RoutingPolicy_AIX.hxx"
#	include "UNIX_RoutingPolicy_AIX.hpp"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_RoutingPolicy_FREEBSD.hxx"
#	include "UNIX_RoutingPolicy_FREEBSD.hpp"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_RoutingPolicy_SOLARIS.hxx"
#	include "UNIX_RoutingPolicy_SOLARIS.hpp"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_RoutingPolicy_ZOS.hxx"
#	include "UNIX_RoutingPolicy_ZOS.hpp"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_RoutingPolicy_VMS.hxx"
#	include "UNIX_RoutingPolicy_VMS.hpp"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_RoutingPolicy_TRU64.hxx"
#	include "UNIX_RoutingPolicy_TRU64.hpp"
#else
#	include "UNIX_RoutingPolicy_STUB.hxx"
#	include "UNIX_RoutingPolicy_STUB.hpp"
#endif


Boolean UNIX_RoutingPolicy::validateKey(CIMKeyBinding &kb) const
{

	/* Keys  */
	//SystemCreationClassName
	//SystemName
	//CreationClassName
	//Name

	CIMName name = kb.getName();
	if (name.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME) ||
			name.equal(PROPERTY_SYSTEM_NAME) ||
			name.equal(PROPERTY_CREATION_CLASS_NAME) ||
			name.equal(PROPERTY_NAME)
		)
			return true;

	return false;
}

void UNIX_RoutingPolicy::setScope(CIMName scope)
{
	currentScope = scope;
}

