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

class UNIX_PROVIDER :
	public CIMInstanceQueryProvider,
	public CIMMethodProvider
{
public:
	UNIX_PROVIDER();
	~UNIX_PROVIDER();

		//-- CIMInstanceProvider methods
    /** Given a reference to an instance of the CIM class, fills in the data
     *  elements of the class with the details gleaned from the system. */
    void getInstance(
        const OperationContext& context,
        const CIMObjectPath& ref,
        const Boolean includeQualifiers,
        const Boolean includeClassOrigin,
        const CIMPropertyList& propertyList,
        InstanceResponseHandler& handler);

    /** Returns filled instances for all instances of the CIM class detected
     *  on the system. */
    void enumerateInstances(
        const OperationContext& context,
        const CIMObjectPath& ref,
        const Boolean includeQualifiers,
        const Boolean includeClassOrigin,
        const CIMPropertyList& propertyList,
        InstanceResponseHandler& handler);

    /** Produces a list of references to all instances of the CIM class
     *  detected on the system, but does not fill the instances
     *  themselves. */
    void enumerateInstanceNames(
        const OperationContext& context,
        const CIMObjectPath& ref,
        ObjectPathResponseHandler& handler);

    /** Currently unimplemented in the Pegasus source, this is a no-op
     *  here. */
    void modifyInstance(
        const OperationContext& context,
        const CIMObjectPath& ref,
        const CIMInstance& instanceObject,
        const Boolean includeQualifiers,
        const CIMPropertyList& propertyList,
        ResponseHandler& handler);

    /** Currently unimplemented in the Pegasus source, this is a no-op
     *  here. */
    void createInstance(
        const OperationContext& context,
        const CIMObjectPath& ref,
        const CIMInstance& instanceObject,
        ObjectPathResponseHandler& handler);

    /** Currently unimplemented in the Pegasus source, this is a no-op
     *  here. */
    void deleteInstance(
        const OperationContext& context,
        const CIMObjectPath& ref,
        ResponseHandler& handler);

    void initialize(CIMOMHandle& handle);
    void terminate();

    void invokeMethod(
        const OperationContext& context,
        const CIMObjectPath& objectReference,
        const CIMName& methodName,
        const Array<CIMParamValue>& inParameters,
        MethodResultResponseHandler& handler);
    
    void execQuery(
       const OperationContext& context,
       const CIMObjectPath& objectPath,
       const QueryExpression& query,
       InstanceResponseHandler& handler);

	// Used to add properties to an instance
    // first argument is the class of instance to be built
    // second argument is a Process instance that contains
    // process status information that has been fetched
    CIMInstance constructInstance(
        const CIMName &clnam,
        const CIMNamespaceName &nameSpace,
        const CLASS_IMPLEMENTATION &p) const;
        
	Array<CIMKeyBinding> constructKeyBindings(const CLASS_IMPLEMENTATION&) const;

#ifdef __PROVIDER_PREPARE
	virtual void __PROVIDER_PREPARE(
				    const OperationContext& context,
					const CIMName &className,
				    const CIMNamespaceName &ns,
				    const Boolean includeQualifiers,
                 	const Boolean includeClassOrigin,
				    CLASS_IMPLEMENTATION _p) const;
#endif

#ifdef EXTRA_PROVIDER_DEFINES
	EXTRA_PROVIDER_DEFINES
#endif

private:
	CLASS_IMPLEMENTATION _p;
	// private member to store handle passed by initialize()
    CIMOMHandle _cimomHandle;
    // checks the class passed by the cimom and throws
    // an exception if it's not supported by this provider
    void _checkClass(CIMName&);
    void __initialize(CIMOMHandle &ch);
};

#undef UNIX_PROVIDER
#undef CLASS_IMPLEMENTATION
#undef __PROVIDER_PREPARE
#undef EXTRA_PROVIDER_DEFINES