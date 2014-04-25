#ifdef PEGASUS_OS_FREEBSD


#ifndef __UNIX_VIRTUALCOMPUTERSYSTEM_PRIVATE_H
#define __UNIX_VIRTUALCOMPUTERSYSTEM_PRIVATE_H

#include "UNIX_VirtualComputerSystem.h"

class UNIX_JailComputerSystem :
	public UNIX_VirtualComputerSystem
{
public:

	UNIX_JailComputerSystem();
	~UNIX_JailComputerSystem();

	Boolean initialize();
	Boolean load(int&);
	Boolean finalize();
	Boolean find(Array<CIMKeyBinding>&);
	Boolean validateKey(CIMKeyBinding&) const { return false; };
	void setScope(CIMName scope) { currentScope = scope; };

	Boolean getInstanceID(CIMProperty&) const;
	String getInstanceID() const;
	Boolean getCaption(CIMProperty&) const;
	String getCaption() const;
	Boolean getDescription(CIMProperty&) const;
	String getDescription() const;
	Boolean getElementName(CIMProperty&) const;
	String getElementName() const;
	Boolean getInstallDate(CIMProperty&) const;
	CIMDateTime getInstallDate() const;
	Boolean getName(CIMProperty&) const;
	String getName() const;
	Boolean getOperationalStatus(CIMProperty&) const;
	Array<Uint16> getOperationalStatus() const;
	Boolean getStatusDescriptions(CIMProperty&) const;
	Array<String> getStatusDescriptions() const;
	Boolean getStatus(CIMProperty&) const;
	String getStatus() const;
	Boolean getHealthState(CIMProperty&) const;
	Uint16 getHealthState() const;
	Boolean getCommunicationStatus(CIMProperty&) const;
	Uint16 getCommunicationStatus() const;
	Boolean getDetailedStatus(CIMProperty&) const;
	Uint16 getDetailedStatus() const;
	Boolean getOperatingStatus(CIMProperty&) const;
	Uint16 getOperatingStatus() const;
	Boolean getPrimaryStatus(CIMProperty&) const;
	Uint16 getPrimaryStatus() const;
	Boolean getEnabledState(CIMProperty&) const;
	Uint16 getEnabledState() const;
	Boolean getOtherEnabledState(CIMProperty&) const;
	String getOtherEnabledState() const;
	Boolean getRequestedState(CIMProperty&) const;
	Uint16 getRequestedState() const;
	Boolean getEnabledDefault(CIMProperty&) const;
	Uint16 getEnabledDefault() const;
	Boolean getTimeOfLastStateChange(CIMProperty&) const;
	CIMDateTime getTimeOfLastStateChange() const;
	Boolean getAvailableRequestedStates(CIMProperty&) const;
	Array<Uint16> getAvailableRequestedStates() const;
	Boolean getTransitioningToState(CIMProperty&) const;
	Uint16 getTransitioningToState() const;
	Boolean getCreationClassName(CIMProperty&) const;
	String getCreationClassName() const;
	Boolean getNameFormat(CIMProperty&) const;
	String getNameFormat() const;
	Boolean getPrimaryOwnerName(CIMProperty&) const;
	String getPrimaryOwnerName() const;
	Boolean getPrimaryOwnerContact(CIMProperty&) const;
	String getPrimaryOwnerContact() const;
	Boolean getRoles(CIMProperty&) const;
	Array<String> getRoles() const;
	Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	Array<String> getOtherIdentifyingInfo() const;
	Boolean getIdentifyingDescriptions(CIMProperty&) const;
	Array<String> getIdentifyingDescriptions() const;
	Boolean getDedicated(CIMProperty&) const;
	Array<Uint16> getDedicated() const;
	Boolean getOtherDedicatedDescriptions(CIMProperty&) const;
	Array<String> getOtherDedicatedDescriptions() const;
	Boolean getResetCapability(CIMProperty&) const;
	Uint16 getResetCapability() const;
	Boolean getPowerManagementCapabilities(CIMProperty&) const;
	Array<Uint16> getPowerManagementCapabilities() const;
	Boolean getVirtualSystem(CIMProperty&) const;
	String getVirtualSystem() const;

	/* Methods */
	void requestStateChange(Uint32 requestedState, CIMDateTime timeoutPeriod);
	void setPowerState(Uint32 powerState, CIMDateTime time);

private:
	CIMName currentScope;

	static int sort_param(const void *a, const void *b);
	static char *noname(const char *name);
	static char *nononame(const char *name);
	static void quoted_print(char *str);
	int add_param(const char *name, void *value, size_t valuelen, struct jailparam *source, unsigned flags);
	String _get_param_String(const char *name) const;
	Uint32 _get_param_Uint32(const char *name) const;
	int ip6_ok;
	int ip4_ok;
	struct jailparam *params;
	int *param_parent;
	int nparams;
	int lastjid;
	int print_jail(int pflags, int jflags);

};

class UNIX_BhyveComputerSystem :
	public UNIX_VirtualComputerSystem
{
public:

	UNIX_BhyveComputerSystem();
	~UNIX_BhyveComputerSystem();

	Boolean initialize();
	Boolean load(int&);
	Boolean finalize();
	Boolean find(Array<CIMKeyBinding>&);
	Boolean validateKey(CIMKeyBinding&) const { return false; };
	void setScope(CIMName scope) { currentScope = scope; };

	Boolean getInstanceID(CIMProperty&) const;
	String getInstanceID() const;
	Boolean getCaption(CIMProperty&) const;
	String getCaption() const;
	Boolean getDescription(CIMProperty&) const;
	String getDescription() const;
	Boolean getElementName(CIMProperty&) const;
	String getElementName() const;
	Boolean getInstallDate(CIMProperty&) const;
	CIMDateTime getInstallDate() const;
	Boolean getName(CIMProperty&) const;
	String getName() const;
	Boolean getOperationalStatus(CIMProperty&) const;
	Array<Uint16> getOperationalStatus() const;
	Boolean getStatusDescriptions(CIMProperty&) const;
	Array<String> getStatusDescriptions() const;
	Boolean getStatus(CIMProperty&) const;
	String getStatus() const;
	Boolean getHealthState(CIMProperty&) const;
	Uint16 getHealthState() const;
	Boolean getCommunicationStatus(CIMProperty&) const;
	Uint16 getCommunicationStatus() const;
	Boolean getDetailedStatus(CIMProperty&) const;
	Uint16 getDetailedStatus() const;
	Boolean getOperatingStatus(CIMProperty&) const;
	Uint16 getOperatingStatus() const;
	Boolean getPrimaryStatus(CIMProperty&) const;
	Uint16 getPrimaryStatus() const;
	Boolean getEnabledState(CIMProperty&) const;
	Uint16 getEnabledState() const;
	Boolean getOtherEnabledState(CIMProperty&) const;
	String getOtherEnabledState() const;
	Boolean getRequestedState(CIMProperty&) const;
	Uint16 getRequestedState() const;
	Boolean getEnabledDefault(CIMProperty&) const;
	Uint16 getEnabledDefault() const;
	Boolean getTimeOfLastStateChange(CIMProperty&) const;
	CIMDateTime getTimeOfLastStateChange() const;
	Boolean getAvailableRequestedStates(CIMProperty&) const;
	Array<Uint16> getAvailableRequestedStates() const;
	Boolean getTransitioningToState(CIMProperty&) const;
	Uint16 getTransitioningToState() const;
	Boolean getCreationClassName(CIMProperty&) const;
	String getCreationClassName() const;
	Boolean getNameFormat(CIMProperty&) const;
	String getNameFormat() const;
	Boolean getPrimaryOwnerName(CIMProperty&) const;
	String getPrimaryOwnerName() const;
	Boolean getPrimaryOwnerContact(CIMProperty&) const;
	String getPrimaryOwnerContact() const;
	Boolean getRoles(CIMProperty&) const;
	Array<String> getRoles() const;
	Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	Array<String> getOtherIdentifyingInfo() const;
	Boolean getIdentifyingDescriptions(CIMProperty&) const;
	Array<String> getIdentifyingDescriptions() const;
	Boolean getDedicated(CIMProperty&) const;
	Array<Uint16> getDedicated() const;
	Boolean getOtherDedicatedDescriptions(CIMProperty&) const;
	Array<String> getOtherDedicatedDescriptions() const;
	Boolean getResetCapability(CIMProperty&) const;
	Uint16 getResetCapability() const;
	Boolean getPowerManagementCapabilities(CIMProperty&) const;
	Array<Uint16> getPowerManagementCapabilities() const;
	Boolean getVirtualSystem(CIMProperty&) const;
	String getVirtualSystem() const;

	/* Methods */
	void requestStateChange(Uint32 requestedState, CIMDateTime timeoutPeriod);
	void setPowerState(Uint32 powerState, CIMDateTime time);

private:
	CIMName currentScope;


};

#endif


#endif
