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

#include "UNIX_PolicyContainerInPolicyContainer.h"

#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PolicyContainerInPolicyContainer_HPUX.hxx"
#	include "UNIX_PolicyContainerInPolicyContainer_HPUX.hpp"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PolicyContainerInPolicyContainer_LINUX.hxx"
#	include "UNIX_PolicyContainerInPolicyContainer_LINUX.hpp"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PolicyContainerInPolicyContainer_DARWIN.hxx"
#	include "UNIX_PolicyContainerInPolicyContainer_DARWIN.hpp"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PolicyContainerInPolicyContainer_AIX.hxx"
#	include "UNIX_PolicyContainerInPolicyContainer_AIX.hpp"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PolicyContainerInPolicyContainer_FREEBSD.hxx"
#	include "UNIX_PolicyContainerInPolicyContainer_FREEBSD.hpp"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PolicyContainerInPolicyContainer_SOLARIS.hxx"
#	include "UNIX_PolicyContainerInPolicyContainer_SOLARIS.hpp"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PolicyContainerInPolicyContainer_ZOS.hxx"
#	include "UNIX_PolicyContainerInPolicyContainer_ZOS.hpp"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PolicyContainerInPolicyContainer_VMS.hxx"
#	include "UNIX_PolicyContainerInPolicyContainer_VMS.hpp"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PolicyContainerInPolicyContainer_TRU64.hxx"
#	include "UNIX_PolicyContainerInPolicyContainer_TRU64.hpp"
#else
#	include "UNIX_PolicyContainerInPolicyContainer_STUB.hxx"
#	include "UNIX_PolicyContainerInPolicyContainer_STUB.hpp"
#endif


Boolean UNIX_PolicyContainerInPolicyContainer::validateKey(CIMKeyBinding &kb) const
{

	/* Keys  */
	//GroupComponent
	//PartComponent

	CIMName name = kb.getName();
	if (name.equal(PROPERTY_GROUP_COMPONENT) ||
			name.equal(PROPERTY_PART_COMPONENT)
		)
			return true;

	return false;
}

void UNIX_PolicyContainerInPolicyContainer::setScope(CIMName scope)
{
	currentScope = scope;
}

