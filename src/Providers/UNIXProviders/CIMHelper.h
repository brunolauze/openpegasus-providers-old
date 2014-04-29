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
//%////////////////////////////////////////////////////////////////////////////

#ifndef __CIM_HELPER_H
#define __CIM_HELPER_H
#include "UNIX_Common.h"
#include <vector>
#include <iterator>
#if defined(PEGASUS_OS_HPUX)

#elif defined(PEGASUS_OS_LINUX)

#elif defined(PEGASUS_OS_DARWIN)

#elif defined(PEGASUS_OS_AIX)

#elif defined(PEGASUS_OS_FREEBSD)
#	include <kvm.h>
#elif defined(PEGASUS_OS_SOLARIS)

#elif defined(PEGASUS_OS_ZOS)

#elif defined(PEGASUS_OS_VMS)

#elif defined(PEGASUS_OS_TRU64)

#else

#endif
class CIMHelper
{
public:
	static String getTimeAsString();
	static CIMDateTime getCurrentTime();
	static CIMDateTime getInstallDate(String path);
	static CIMDateTime getOSInstallDate();
	static char * ltrim(char *s);
	static char * rtrim(char *s);
	static char * trim(char *s);
	static bool startsWith (char* base, char* str);
	static bool endsWith (char* base, char* str);
	static int indexOf (char* base, char* str);
	static int indexOf (char* base, char* str, int startIndex);
	static int lastIndexOf (char* base, char* str);
	static std::string encode(std::string str);
	static std::string replace( std::string src, std::string const& target, std::string const& repl);
	static String extractStringParameter(const Array<CIMParamValue>&, String);
	static Uint32 extractUint32Parameter(const Array<CIMParamValue>& inParameters, String);
	static CIMDateTime extractDateTimeParameter(const Array<CIMParamValue>& inParameters, String);
	static CIMInstance extractInstanceParameter(const Array<CIMParamValue>& inParameters, String);
	static CIMValue getPropertyValue(const CIMInstance&, String name);
    static String getPropertyAsString(const CIMInstance&, String name);
    static Array<String> getPropertyAsStringArray(const CIMInstance&, String name);
    static Uint32 getPropertyAsUint32(const CIMInstance&, String name);
    static Uint64 getPropertyAsUint64(const CIMInstance&, String name);

    static std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems);
    static std::vector<std::string> split(const std::string &s, char delim);

	static String getHostName();
	static String getOSName();
	static String HostName;
	static String OSName;
	static String EmptyString;
	static CIMDateTime NullDate;

#if defined(PEGASUS_OS_HPUX)

#elif defined(PEGASUS_OS_LINUX)

#elif defined(PEGASUS_OS_DARWIN)

#elif defined(PEGASUS_OS_AIX)

#elif defined(PEGASUS_OS_FREEBSD)
	static kvm_t *kd;
#elif defined(PEGASUS_OS_SOLARIS)

#elif defined(PEGASUS_OS_ZOS)

#elif defined(PEGASUS_OS_VMS)

#elif defined(PEGASUS_OS_TRU64)

#else

#endif


private:
	static std::string gethex( unsigned int c );
};

#endif
