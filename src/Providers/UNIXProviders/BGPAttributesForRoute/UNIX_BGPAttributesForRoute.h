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

#ifndef __UNIX_BGPATTRIBUTESFORROUTE_H
#define __UNIX_BGPATTRIBUTESFORROUTE_H


#include "CIM_Dependency.h"

#include "UNIX_BGPAttributesForRouteDeps.h"


#define PROPERTY_PATH_ATTR_PEER				"PathAttrPeer"
#define PROPERTY_PATH_ATTR_I_P_ADDR_PREFIX_LEN				"PathAttrIPAddrPrefixLen"
#define PROPERTY_PATH_ATTR_I_P_ADDR_PREFIX				"PathAttrIPAddrPrefix"


class UNIX_BGPAttributesForRoute :
	public CIM_Dependency
{
public:

	UNIX_BGPAttributesForRoute();
	~UNIX_BGPAttributesForRoute();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual Boolean getPathAttrPeer(CIMProperty&) const;
	virtual String getPathAttrPeer() const;
	virtual Boolean getPathAttrIPAddrPrefixLen(CIMProperty&) const;
	virtual Uint8 getPathAttrIPAddrPrefixLen() const;
	virtual Boolean getPathAttrIPAddrPrefix(CIMProperty&) const;
	virtual String getPathAttrIPAddrPrefix() const;

private:
	CIMName currentScope;

#	include "UNIX_BGPAttributesForRoutePrivate.h"


};

#endif /* UNIX_BGPATTRIBUTESFORROUTE */
