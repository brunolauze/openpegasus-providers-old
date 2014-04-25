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

#ifndef __CIM_REDIRECTIONSERVICE_H
#define __CIM_REDIRECTIONSERVICE_H


#include "CIM_Service.h"


#define PROPERTY_REDIRECTION_SERVICE_TYPE				"RedirectionServiceType"
#define PROPERTY_OTHER_REDIRECTION_SERVICE_TYPE				"OtherRedirectionServiceType"
#define PROPERTY_MAX_CURRENT_ENABLED_S_A_PS				"MaxCurrentEnabledSAPs"
#define PROPERTY_SHARING_MODE				"SharingMode"


class CIM_RedirectionService :
	public CIM_Service
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getRedirectionServiceType(CIMProperty&) const=0;
	virtual Array<Uint16> getRedirectionServiceType() const=0;
	virtual Boolean getOtherRedirectionServiceType(CIMProperty&) const=0;
	virtual String getOtherRedirectionServiceType() const=0;
	virtual Boolean getMaxCurrentEnabledSAPs(CIMProperty&) const=0;
	virtual Uint16 getMaxCurrentEnabledSAPs() const=0;
	virtual Boolean getSharingMode(CIMProperty&) const=0;
	virtual Uint16 getSharingMode() const=0;

private:

};

#endif /* CIM_REDIRECTIONSERVICE */
