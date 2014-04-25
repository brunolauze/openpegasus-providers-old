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

#ifndef CLASS_IMPLEMENTATION_CIM_NAME
#define CLASS_IMPLEMENTATION_CIM_NAME CIMName(CLASS_IMPLEMENTATION_NAME)
#endif

#ifndef BASE_CLASS_CIM_NAME
#define BASE_CLASS_CIM_NAME CIMName(BASE_CLASS_NAME)
#endif

#ifdef BASE_BASE_CLASS_NAME
#ifndef BASE_BASE_CLASS_CIM_NAME
#define BASE_BASE_CLASS_CIM_NAME CIMName(BASE_BASE_CLASS_NAME)
#endif
#endif

#ifndef __checkClass_H
/*
================================================================================
NAME              : _checkClass
DESCRIPTION       : tests the argument for valid classname,
                  : throws exception if not
ASSUMPTIONS       : None
PRE-CONDITIONS    :
POST-CONDITIONS   :
NOTES             :
================================================================================
*/
void UNIX_PROVIDER::_checkClass(CIMName& className)
{
  if (className.equal (CLASS_IMPLEMENTATION_CIM_NAME) ||
#ifdef EXTRA_CLASS_IMPLEMENTATION_STATEMENTS
  	  EXTRA_CLASS_IMPLEMENTATION_STATEMENTS
#endif
#ifdef BASE_BASE_CLASS_CIM_NAME
  	className.equal (BASE_BASE_CLASS_CIM_NAME) ||
#endif
      className.equal (BASE_CLASS_CIM_NAME))
      return;

    throw CIMNotSupportedException(className.getString() +
        ": Class not supported");
}
#endif

#ifndef __invokeMethod_H
/*
================================================================================
NAME              : invokeMethod
DESCRIPTION       : tests the argument for valid classname,
                  : throws exception if not
ASSUMPTIONS       : None
PRE-CONDITIONS    :
POST-CONDITIONS   :
NOTES             :
================================================================================
*/
void UNIX_PROVIDER::invokeMethod(
    const OperationContext& context,
    const CIMObjectPath& objectReference,
    const CIMName& methodName,
    const Array<CIMParamValue>& inParameters,
    MethodResultResponseHandler& handler)
{
    String message;
    message.append(CLASS_IMPLEMENTATION_NAME);
    message.append(" does not support invokeMethod");
    throw CIMNotSupportedException(message);
}
#endif

#ifndef __modifyInstance_H
/*
================================================================================
NAME              : modifyInstance
DESCRIPTION       : Modify a UnixProcess instance.
ASSUMPTIONS       : None
PRE-CONDITIONS    :
POST-CONDITIONS   :
NOTES             : Currently not supported.
PARAMETERS        :
================================================================================
*/
void UNIX_PROVIDER::modifyInstance(
    const OperationContext& context,
    const CIMObjectPath& ref,
    const CIMInstance& instanceObject,
    const Boolean includeQualifiers,
    const CIMPropertyList& propertyList,
    ResponseHandler& handler)
{

    String message;
    message.append(CLASS_IMPLEMENTATION_NAME);
    message.append(" does not support modifyInstance");
    throw CIMNotSupportedException(message);
}
#endif

#ifndef __createInstance_H
void UNIX_PROVIDER::createInstance(
    const OperationContext& context,
    const CIMObjectPath& ref,
    const CIMInstance& instanceObject,
    ObjectPathResponseHandler& handler )
{
    String message;
    message.append(CLASS_IMPLEMENTATION_NAME);
    message.append(" does not support createInstance");
    throw CIMNotSupportedException(message);
}
#endif

#ifndef __deleteInstance_H
// =============================================================================
// NAME              : createInstance
// DESCRIPTION       : Create a UnixProcess instance.
// ASSUMPTIONS       : None
// PRE-CONDITIONS    :
// POST-CONDITIONS   :
// NOTES             : Currently not supported.
// PARAMETERS        :
// =============================================================================
void UNIX_PROVIDER::deleteInstance(
    const OperationContext& context,
    const CIMObjectPath& ref,
    ResponseHandler& handler)
{
    String message;
    message.append(CLASS_IMPLEMENTATION_NAME);
    message.append(" does not support deleteInstance");
    throw CIMNotSupportedException(message);
}
#endif

#ifndef __initialize_H
#define __initialize_H
/*
================================================================================
NAME              : initialize
DESCRIPTION       : Initializes the provider.
ASSUMPTIONS       : None
PRE-CONDITIONS    :
POST-CONDITIONS   :
NOTES             :
PARAMETERS        :
================================================================================
*/
void UNIX_PROVIDER::initialize(CIMOMHandle &ch)
{
	_cimomHandle = ch;
}
#endif


#ifndef __terminate_H
#define __terminate_H
void UNIX_PROVIDER::terminate()
{
    delete this;
}
#endif


#ifndef __getInstance_H
#define __getInstance_H
void UNIX_PROVIDER::getInstance(const OperationContext &ctx,
                 const CIMObjectPath           &instanceName,
                 const Boolean                 includeQualifiers,
                 const Boolean                 includeClassOrigin,
                 const CIMPropertyList        &propertyList,
                 InstanceResponseHandler &handler)
{
  CIMKeyBinding kb;
  CIMName className = instanceName.getClassName();
  CIMNamespaceName nameSpace = instanceName.getNameSpace();
  String handle;
  int i;
  int keysFound = 0; // this will be used as a bit array

  // Validate the classname
  _checkClass(className);

  // Extract the key values
  Array<CIMKeyBinding> kbArray = instanceName.getKeyBindings();

  // Leave immediately if wrong number of keys
  if ( kbArray.size() != NUMKEYS_CLASS_IMPLEMENTATION )
    throw CIMInvalidParameterException("Wrong number of keys");

  // Validate the keys.
  // Each loop iteration will set a bit in keysFound when a valid
  // key is found. If the expected bits aren't all set when
  // the loop finishes, it's a problem
  for(i=0, keysFound=0; i<NUMKEYS_CLASS_IMPLEMENTATION; i++)
  {
    kb = kbArray[i];
    if (_p.validateKey(kb))
    {
    	keysFound++;
	}
    // Key name was not recognized by any of the above tests
    else throw CIMInvalidParameterException(kb.getName().getString() +
        ": Unrecognized key");

  } // for

  // We could get here if we didn't get all the keys, which
  // could happen if the right number of keys were supplied,
  // and they all had valid names and values, but there were
  // any duplicates (e.g., two Handles, no OSName)
  if(keysFound != NUMKEYS_CLASS_IMPLEMENTATION)
    throw CIMInvalidParameterException("Bad object name");
  
  /* Find the instance.  First convert the instance id which is the */
  /* process handle to an integer.  This is necessary because the   */
  /* handle is the process id on HP-UX which must be passed to      */
  /* pstat_getproc() as an integer.                                 */
  bool found = false;
#ifdef __PROVIDER_PREPARE
    __PROVIDER_PREPARE(ctx, className, nameSpace, includeQualifiers, includeClassOrigin, _p);
#endif

  if (_p.initialize())
  {
	  /* Get the process information. */
	  if (_p.find(kbArray))
	  {
	    /* Notify processing is starting. */
	    handler.processing();
	    found = true;
	    /* Return the instance. */
	    handler.deliver(constructInstance(className,
	                                       nameSpace,
	                                       _p));

	    
	  }
  }
  _p.finalize();
  /* Notify processing is complete. */
  if (found)
  {
	  handler.complete();
	  return;
  }

  String msg;
  msg.append(handle);
  msg.append(": No such ");
  msg.append("instance"); //_p.getElementName());
  throw CIMObjectNotFoundException(msg);
  return; // can never execute, but required to keep compiler happy
}
#endif

#ifndef __enumerateInstances_H
#define __enumerateInstances_H
void UNIX_PROVIDER::enumerateInstances(
    const OperationContext& context,
    const CIMObjectPath& ref,
    const Boolean includeQualifiers,
    const Boolean includeClassOrigin,
    const CIMPropertyList& propertyList,
    InstanceResponseHandler& handler)
{
    CIMName className;
    CIMInstance instance;
    CIMObjectPath newref;
    className = ref.getClassName();
    CIMNamespaceName nameSpace = ref.getNameSpace();
    int pIndex;
    // only return instances when enumerate on our subclass, CIMOM
    // will call us as natural part of recursing through subtree on
    // enumerate - if we return instances on enumerate of our superclass,
    // there would be dups

    if (className.equal (BASE_CLASS_CIM_NAME) ||
#ifdef EXTRA_CLASS_IMPLEMENTATION_STATEMENTS
  	  EXTRA_CLASS_IMPLEMENTATION_STATEMENTS
#endif
#ifdef BASE_BASE_CLASS_CIM_NAME
    	className.equal(BASE_BASE_CLASS_CIM_NAME) ||
#endif
    	className.equal(CLASS_IMPLEMENTATION_CIM_NAME))
    {
        handler.processing();
#ifdef __PROVIDER_PREPARE
        __PROVIDER_PREPARE(
        context, className, nameSpace, includeQualifiers, includeClassOrigin, _p);
#endif    
        if (_p.initialize())
        {
	        for (pIndex = 0; _p.load(pIndex); pIndex++)
	        handler.deliver(constructInstance(className,
	                                           nameSpace,
	                                           _p));

		}
		_p.finalize();
        handler.complete();
    }
    else
    {
        throw CIMNotSupportedException(CLASS_IMPLEMENTATION_NAME  
                "does not support class " + className.getString());
    }
    return;
}
#endif

#ifndef __execQuery_H
#define __execQuery_H
void UNIX_PROVIDER::execQuery(
       const OperationContext& context,
       const CIMObjectPath& objectPath,
       const QueryExpression& query,
       InstanceResponseHandler& handler)
{
	CIMName className;
    className = objectPath.getClassName();
    CIMNamespaceName nameSpace = objectPath.getNameSpace();
    int pIndex;

    // only return instances when enumerate on our subclass, CIMOM
    // will call us as natural part of recursing through subtree on
    // enumerate - if we return instances on enumerate of our superclass,
    // there would be dups
    if (className.equal (CLASS_IMPLEMENTATION_CIM_NAME) ||
#ifdef EXTRA_CLASS_IMPLEMENTATION_STATEMENTS
  	  EXTRA_CLASS_IMPLEMENTATION_STATEMENTS
#endif
#ifdef BASE_BASE_CLASS_CIM_NAME
		className.equal (BASE_BASE_CLASS_CIM_NAME) ||
#endif
    	className.equal(BASE_CLASS_CIM_NAME))
    {
        handler.processing();
        #ifdef __PROVIDER_PREPARE
        __PROVIDER_PREPARE(
        context, className, nameSpace, true, true, _p);

		#endif       
        if (_p.initialize())
        {
	        for (pIndex = 0; _p.load(pIndex); pIndex++)
	        {
	        	CIMInstance ci = constructInstance(className,
	                                           nameSpace,
	                                           _p);
	        	if (query.evaluate(ci))
		        {
		        	handler.deliver(ci);
		        }
			}
		}
		_p.finalize();
        handler.complete();
    }
    else
    {
        throw CIMNotSupportedException(UNIX_PROVIDER_NAME
                "does not support class " + className.getString());
    }
    return;
}
#endif 

#ifndef __enumerateInstanceNames_H
#define __enumerateInstanceNames_H
// =============================================================================
// NAME              : enumerateInstanceNames
// DESCRIPTION       : Enumerates all of the UnixProcess instance names.
//                     An array of instance references is returned.
// ASSUMPTIONS       : None
// PRE-CONDITIONS    :
// POST-CONDITIONS   :
// NOTES             : Localization is not supported by this provider.
// PARAMETERS        :
// =============================================================================

void UNIX_PROVIDER::enumerateInstanceNames(const OperationContext &ctx,
                            const CIMObjectPath &ref,
                            ObjectPathResponseHandler &handler)
{
    int pIndex;
    CIMName className = ref.getClassName();
    CIMNamespaceName nameSpace = ref.getNameSpace();

    // Validate the classname
    _checkClass(className);

    // Notify processing is starting
    handler.processing();
    // We are only going to respond to enumeration requests on
    // CLASS_IMPLEMENTATION_CIM_NAME or BASE_CLASS_CIM_NAME
    if (className.equal (BASE_CLASS_CIM_NAME) ||
#ifdef EXTRA_CLASS_IMPLEMENTATION_STATEMENTS
  	  EXTRA_CLASS_IMPLEMENTATION_STATEMENTS
#endif
#ifdef BASE_BASE_CLASS_CIM_NAME
     className.equal (BASE_BASE_CLASS_CIM_NAME) ||
#endif
    className.equal(CLASS_IMPLEMENTATION_CIM_NAME))
    {

    #ifdef __PROVIDER_PREPARE
        __PROVIDER_PREPARE(
        ctx, className, nameSpace, true, true, _p);
	#endif  
      // Get the process information and deliver an ObjectPath for
      // each process
      // Note that loadProcessInfo modifies pIndex to point to the
      // next process structure before the loop increments it!
      if (_p.initialize())
      {
	      for (pIndex = 0; _p.load(pIndex); pIndex++)
	      {
	        // Deliver the names
	        handler.deliver(CIMObjectPath(String(""), // hostname
	                                      nameSpace,
	                                      className,
	                                      constructKeyBindings(_p)));

	      }
	  }
	  _p.finalize();
    }

    // Notify processing is complete
    handler.complete();
    return;

}  // enumerateInstanceNames
#endif


/* Undefine everything */
#undef UNIX_PROVIDER
#undef UNIX_PROVIDER_NAME
#undef NUMKEYS_CLASS_IMPLEMENTATION
#undef CLASS_IMPLEMENTATION
#undef CLASS_IMPLEMENTATION_NAME
#undef CLASS_IMPLEMENTATION_CIM_NAME
#undef BASE_CLASS_NAME
#undef BASE_BASE_CLASS_NAME
#undef BASE_CLASS_CIM_NAME

#undef __checkClass_H
#undef __invokeMethod_H
#undef __modifyInstance_H
#undef __createInstance_H
#undef __deleteInstance_H
#undef __initialize_H
#undef __terminate_H

#undef __getInstance_H
#undef __enumerateInstances_H
#undef __execQuery_H
#undef __enumerateInstanceNames_H

#undef __PROVIDER_PREPARE
