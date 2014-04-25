
#include <UNIX_Common.h>

class MockMethodResultResponseHandler :
	public MethodResultResponseHandler
{
public:

	MockMethodResultResponseHandler();
	~MockMethodResultResponseHandler();

	/**
        Delivers extrinsic method output parameters to the CIM Server.
        This method may be called multiple times when more than one result
        needs to be delivered.  An Array form of this method is also
        available to deliver multiple results.
        @param outParamValue The output parameter to deliver to the CIM Server.
        @exception Exception May be thrown if the data that is delivered is
        not consistent with the corresponding request or associated schema.
    */
    virtual void deliverParamValue(const CIMParamValue & outParamValue);

    /**
        Delivers a set of output parameters to the CIM Server.  This method
        may be invoked multiple times, if necessary.
        @param outParamValues An Array of method output parameters to deliver
        to the CIM Server.
        @exception Exception May be thrown if the data that is delivered is
        not consistent with the corresponding request or associated schema.
    */
    virtual void deliverParamValue(
        const Array<CIMParamValue> & outParamValues);

    /**
        Delivers an extrinsic method return value to the CIM Server.
        @param returnValue The return value to deliver to the CIM Server.
        @exception Exception May be thrown if the data that is delivered is
        not consistent with the corresponding request or associated schema.
    */
    virtual void deliver(const CIMValue & returnValue);

    /**
        Informs the CIM Server that delivery of results will begin.
        This method must be called before deliver() is called.
    */   
	virtual void processing();

    /**
        Informs the CIM Server that delivery of results is complete.
        This method must be called when all the results have been delivered.
        The deliver() method must not be called after this method is called.
    */
    virtual void complete();

};
	
