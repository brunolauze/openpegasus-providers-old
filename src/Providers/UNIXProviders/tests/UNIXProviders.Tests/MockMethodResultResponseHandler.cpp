
#include "MockMethodResultResponseHandler.h"



MockMethodResultResponseHandler::MockMethodResultResponseHandler()
{

}

MockMethodResultResponseHandler::~MockMethodResultResponseHandler()
{

}

void MockMethodResultResponseHandler::processing()
{
	cout << "Method Result Response is processing..." << endl;
}

void MockMethodResultResponseHandler::complete()
{
	cout << "Method Result Response is processing..." << endl;
}

/**
    Delivers extrinsic method output parameters to the CIM Server.
    This method may be called multiple times when more than one result
    needs to be delivered.  An Array form of this method is also
    available to deliver multiple results.
    @param outParamValue The output parameter to deliver to the CIM Server.
    @exception Exception May be thrown if the data that is delivered is
    not consistent with the corresponding request or associated schema.
*/
void MockMethodResultResponseHandler::deliverParamValue(const CIMParamValue & outParamValue)
{

}

/**
    Delivers a set of output parameters to the CIM Server.  This method
    may be invoked multiple times, if necessary.
    @param outParamValues An Array of method output parameters to deliver
    to the CIM Server.
    @exception Exception May be thrown if the data that is delivered is
    not consistent with the corresponding request or associated schema.
*/
void MockMethodResultResponseHandler::deliverParamValue(
    const Array<CIMParamValue> & outParamValues)
{

}

/**
    Delivers an extrinsic method return value to the CIM Server.
    @param returnValue The return value to deliver to the CIM Server.
    @exception Exception May be thrown if the data that is delivered is
    not consistent with the corresponding request or associated schema.
*/
void MockMethodResultResponseHandler::deliver(const CIMValue & returnValue)
{
    cout << "Method Result Return Value: " << returnValue.toString() << endl;
}