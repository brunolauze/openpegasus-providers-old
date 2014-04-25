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


UNIX_IndicationFilter::UNIX_IndicationFilter(void)
{
}

UNIX_IndicationFilter::~UNIX_IndicationFilter(void)
{
}


Boolean UNIX_IndicationFilter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IndicationFilter::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IndicationFilter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IndicationFilter::getCaption() const
{
	return String ("");
}

Boolean UNIX_IndicationFilter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IndicationFilter::getDescription() const
{
	return String ("");
}

Boolean UNIX_IndicationFilter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IndicationFilter::getElementName() const
{
	return String("IndicationFilter");
}

Boolean UNIX_IndicationFilter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IndicationFilter::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IndicationFilter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IndicationFilter::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IndicationFilter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IndicationFilter::getCreationClassName() const
{
	return String("UNIX_IndicationFilter");
}

Boolean UNIX_IndicationFilter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IndicationFilter::getName() const
{
	return String ("");
}

Boolean UNIX_IndicationFilter::getSourceNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_NAMESPACE, getSourceNamespace());
	return true;
}

String UNIX_IndicationFilter::getSourceNamespace() const
{
	return String ("");
}

Boolean UNIX_IndicationFilter::getSourceNamespaces(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_NAMESPACES, getSourceNamespaces());
	return true;
}

Array<String> UNIX_IndicationFilter::getSourceNamespaces() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IndicationFilter::getIndividualSubscriptionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDIVIDUAL_SUBSCRIPTION_SUPPORTED, getIndividualSubscriptionSupported());
	return true;
}

Boolean UNIX_IndicationFilter::getIndividualSubscriptionSupported() const
{
	return Boolean(false);
}

Boolean UNIX_IndicationFilter::getQuery(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY, getQuery());
	return true;
}

String UNIX_IndicationFilter::getQuery() const
{
	return String ("");
}

Boolean UNIX_IndicationFilter::getQueryLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY_LANGUAGE, getQueryLanguage());
	return true;
}

String UNIX_IndicationFilter::getQueryLanguage() const
{
	return String ("");
}

Boolean UNIX_IndicationFilter::getTemplateVariable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEMPLATE_VARIABLE, getTemplateVariable());
	return true;
}

Array<String> UNIX_IndicationFilter::getTemplateVariable() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_IndicationFilter::initialize()
{
	return false;
}

Boolean UNIX_IndicationFilter::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IndicationFilter::finalize()
{
	return false;
}

Boolean UNIX_IndicationFilter::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
