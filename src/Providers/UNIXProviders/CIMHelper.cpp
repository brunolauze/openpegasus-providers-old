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


#include "UNIX_Common.h"

#include <sys/utsname.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sstream>

String CIMHelper::getHostName()
{
     char    hostName[PEGASUS_MAXHOSTNAMELEN + 1];
     if (gethostname(hostName, sizeof(hostName)) != 0)
     {
         return String("localhost"); /* WTF? */
     }
     hostName[sizeof(hostName)-1] = 0;
     // Now get the official hostname.  If this call fails then return
     // the value from gethostname().
     /*
     struct  hostent *he;
     if ((he=gethostbyname(hostName)))
     {
         csName.assign(he->h_name);
     }
     else
     {
         csName.assign(hostName);
     }
     */
     return String(hostName);
}


/*
================================================================================
NAME              : getOSName
DESCRIPTION       : Platform-specific method to get OSname.
ASSUMPTIONS       : None
PRE-CONDITIONS    :
POST-CONDITIONS   :
NOTES             :
================================================================================
*/
String CIMHelper::getOSName()
{
    struct utsname unameInfo;
    // Call uname and check for any errors.
    if (uname(&unameInfo) < 0)
    {
       return String("");
    }
    return String(unameInfo.sysname);
}

CIMDateTime CIMHelper::getInstallDate(String path)
{
	struct tm* clock;			// create a time structure
	struct stat attrib;			// create a file attribute structure
	stat(path.getCString(), &attrib);		// get the attributes mnt
	clock = gmtime(&(attrib.st_birthtime));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

CIMDateTime CIMHelper::getOSInstallDate()
{
	return getInstallDate(String("/mnt"));
}

CIMDateTime CIMHelper::getCurrentTime()
{
  time_t t = time(0);
  struct tm* clock;			// create a time structure
  clock = gmtime(&(t));	// Get the last modified time and put it into the time structure
  return CIMDateTime(
  	clock->tm_year + 1900, 
	clock->tm_mon + 1, 
	clock->tm_mday,
	clock->tm_hour,
	clock->tm_min,
	clock->tm_sec,
	0,0,
	clock->tm_gmtoff	
  );
}

String CIMHelper::getTimeAsString()
{
	return getCurrentTime().toString();
}

String CIMHelper::HostName(CIMHelper::getHostName());
String CIMHelper::OSName(CIMHelper::getOSName());
String CIMHelper::EmptyString(String::EMPTY);
CIMDateTime CIMHelper::NullDate(0, false);

char * CIMHelper::ltrim(char *s)
{
    while(*s == ' ') s++;
    return s;
}

char * CIMHelper::rtrim(char *s)
{
    char* back = s + strlen(s);
    while((*--back) == ' ' || (*--back) == '\n');
    *(back+1) = '\0';
    return s;
}

char * CIMHelper::trim(char *s)
{
    return rtrim(ltrim(s));
}

std::string CIMHelper::gethex( unsigned int c )
{
    std::ostringstream stm ;
    stm << '%' << std::hex << std::nouppercase << c ;
    return stm.str();
}

/* Encode string to UTF-8 : OpenPegasus doesn't support non UTF-8 Characters */
std::string CIMHelper::encode(std::string str)
{
	static std::string unreserved = " 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-_.,;:~+'`><}{|][!@#$%^&*()?\"/\\\t\n\r";
	std::string r;
	size_t neg = -1;
    for (size_t i = 0; i < str.length(); i++ )
    {
      	char c = str.at(i);
      	if (unreserved.find(c) != neg)
        	r+=c;
    	else
        	r+=gethex(c);
    }

	return r;
}


/** detecting whether base is starts with str
 */
bool CIMHelper::startsWith (char* base, char* str) {
    return (strstr(base, str) - base) == 0;
}
/** detecting whether base is ends with str
 */
bool CIMHelper::endsWith (char* base, char* str) {
    int blen = strlen(base);
    int slen = strlen(str);
    return (blen >= slen) && (0 == strcmp(base + blen - slen, str));
}
/** getting the first index of str in base
 */
int CIMHelper::indexOf (char* base, char* str) {
    return CIMHelper::indexOf(base, str, 0);
}
int CIMHelper::indexOf (char* base, char* str, int startIndex) {
    int result;
    size_t baselen = strlen(base);
    size_t sizeIndex = startIndex;
    // str should not longer than base
    if (strlen(str) > baselen || sizeIndex > baselen) {
        result = -1;
    } else {
        if (startIndex < 0 ) {
            startIndex = 0;
        }
        char* pos = strstr(base+sizeIndex, str);
        if (pos == NULL) {
            result = -1;
        } else {
            result = pos - base;
        }
    }
    return result;
}
/** use two index to search in two part to prevent the worst case
 * (assume search 'aaa' in 'aaaaaaaa', you cannot skip three char each time)
 */
int CIMHelper::lastIndexOf (char* base, char* str) {
    int result;
    // str should not longer than base
    if (strlen(str) > strlen(base)) {
        result = -1;
    } else {
        int start = 0;
        int endinit = strlen(base) - strlen(str);
        int end = endinit;
        int endtmp = endinit;
        while(start != end) {
            start = CIMHelper::indexOf(base, str, start);
            end = CIMHelper::indexOf(base, str, end);

            // not found from start
            if (start == -1) {
                end = -1; // then break;
            } else if (end == -1) {
                // found from start
                // but not found from end
                // move end to middle
                if (endtmp == (start+1)) {
                    end = start; // then break;
                } else {
                    end = endtmp - (endtmp - start) / 2;
                    if (end <= start) {
                        end = start+1;
                    }
                    endtmp = end;
                }
            } else {
                // found from both start and end
                // move start to end and
                // move end to base - strlen(str)
                start = end;
                end = endinit;
            }
        }
        result = start;
    }
    return result;
}

string CIMHelper::replace( string src, string const& target, string const& repl)
{
    // handle error situations/trivial cases

    if (target.length() == 0) {
        // searching for a match to the empty string will result in 
        //  an infinite loop
        //  it might make sense to throw an exception for this case
        return src;
    }

    if (src.length() == 0) {
        return src;  // nothing to match against
    }

    size_t idx = 0;

    for (;;) {
        idx = src.find( target, idx);
        if (idx == string::npos)  break;

        src.replace( idx, target.length(), repl);
        idx += repl.length();
    }

    return src;
}

String CIMHelper::extractStringParameter(const Array<CIMParamValue>& inParameters, String name)
{
    for(Uint32 i = 0; i < inParameters.size(); i++)
    {
    	CIMParamValue paramValue = inParameters[i];
    	CIMName paramName = paramValue.getParameterName();
    	if (paramName.equal(name))
    	{
    		String s;
    		paramValue.getValue().get(s);
    		return s;
    	}
    }
    return CIMHelper::EmptyString;
}

Uint32 CIMHelper::extractUint32Parameter(const Array<CIMParamValue>& inParameters, String name)
{
    for(Uint32 i = 0; i < inParameters.size(); i++)
    {
    	CIMParamValue paramValue = inParameters[i];
    	CIMName paramName = paramValue.getParameterName();
    	if (paramName.equal(name))
    	{
    		Uint32 value;
    		paramValue.getValue().get(value);
    		return value;
    	}
    }
    return Uint32(0);
}


CIMDateTime CIMHelper::extractDateTimeParameter(const Array<CIMParamValue>& inParameters, String name)
{
    for(Uint32 i = 0; i < inParameters.size(); i++)
    {
    	CIMParamValue paramValue = inParameters[i];
    	CIMName paramName = paramValue.getParameterName();
    	if (paramName.equal(name))
    	{
    		CIMDateTime value;
    		paramValue.getValue().get(value);
    		return value;
    	}
    }
    return CIMDateTime();
}


CIMInstance CIMHelper::extractInstanceParameter(const Array<CIMParamValue>& inParameters, String name)
{
    for(Uint32 i = 0; i < inParameters.size(); i++)
    {
    	CIMParamValue paramValue = inParameters[i];
    	CIMName paramName = paramValue.getParameterName();
    	if (paramName.equal(name))
    	{
    		CIMInstance value;
    		paramValue.getValue().get(value);
    		return value;
    	}
    }
    return CIMInstance();
}

CIMValue CIMHelper::getPropertyValue(const CIMInstance &instanceObject, String name)
{
    CIMName cname(name);
    Uint32 index = instanceObject.findProperty(cname);
    if (index == PEG_NOT_FOUND) return CIMValue();
    CIMConstProperty property = instanceObject.getProperty(index);
    return property.getValue();
}


String CIMHelper::getPropertyAsString(const CIMInstance &instanceObject, String name)
{
    CIMValue value = getPropertyValue(instanceObject, name);
    if (value.isNull()) return String("");
    String result;
    value.get(result);
    return result;
}

Array<String> CIMHelper::getPropertyAsStringArray(const CIMInstance &instanceObject, String name)
{
    CIMValue value = getPropertyValue(instanceObject, name);
    if (value.isNull()) return Array<String>();
    Array<String> result;
    value.get(result);
    return result;
}

Uint32 CIMHelper::getPropertyAsUint32(const CIMInstance &instanceObject, String name)
{
    CIMValue value = getPropertyValue(instanceObject, name);
    if (value.isNull()) return PEG_NOT_FOUND;
    Uint32 result;
    value.get(result);
    return result;
}

Uint64 CIMHelper::getPropertyAsUint64(const CIMInstance &instanceObject, String name)
{
    CIMValue value = getPropertyValue(instanceObject, name);
    if (value.isNull()) return PEG_NOT_FOUND;
    Uint64 result;
    value.get(result);
    return result;
}

std::vector<std::string> & CIMHelper::split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


std::vector<std::string> CIMHelper::split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}


#if defined(PEGASUS_OS_HPUX)

#elif defined(PEGASUS_OS_LINUX)

#elif defined(PEGASUS_OS_DARWIN)

#elif defined(PEGASUS_OS_AIX)

#elif defined(PEGASUS_OS_FREEBSD)
	kvm_t * CIMHelper::kd;
#elif defined(PEGASUS_OS_SOLARIS)

#elif defined(PEGASUS_OS_ZOS)

#elif defined(PEGASUS_OS_VMS)

#elif defined(PEGASUS_OS_TRU64)

#else

#endif
