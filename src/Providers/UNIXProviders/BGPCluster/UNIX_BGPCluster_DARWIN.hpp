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


UNIX_BGPCluster::UNIX_BGPCluster(void)
{
}

UNIX_BGPCluster::~UNIX_BGPCluster(void)
{
}


Boolean UNIX_BGPCluster::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPCluster::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BGPCluster::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPCluster::getCaption() const
{
	return String ("");
}

Boolean UNIX_BGPCluster::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPCluster::getDescription() const
{
	return String ("");
}

Boolean UNIX_BGPCluster::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPCluster::getElementName() const
{
	return String("BGPCluster");
}

Boolean UNIX_BGPCluster::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_BGPCluster::getCollectionID() const
{
	return String ("");
}

Boolean UNIX_BGPCluster::getClusterID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLUSTER_ID, getClusterID());
	return true;
}

Uint32 UNIX_BGPCluster::getClusterID() const
{
	return Uint32(0);
}



Boolean UNIX_BGPCluster::initialize()
{
	return false;
}

Boolean UNIX_BGPCluster::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BGPCluster::finalize()
{
	return false;
}

Boolean UNIX_BGPCluster::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String clusterIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CLUSTER_ID)) clusterIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
