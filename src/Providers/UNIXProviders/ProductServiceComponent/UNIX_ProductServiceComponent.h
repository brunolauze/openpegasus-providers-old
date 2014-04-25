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

#ifndef __UNIX_PRODUCTSERVICECOMPONENT_H
#define __UNIX_PRODUCTSERVICECOMPONENT_H


#include "CIM_Component.h"
#include <Product/UNIX_Product.h>
#include <ResourcePoolConfigurationService/UNIX_ResourcePoolConfigurationService.h>
#include <PrintService/UNIX_PrintService.h>
#include <ControllerConfigurationService/UNIX_ControllerConfigurationService.h>
#include <ZoneService/UNIX_ZoneService.h>
#include <ProtocolService/UNIX_ProtocolService.h>
#include <VirtualSystemManagementService/UNIX_VirtualSystemManagementService.h>
#include <LaunchInContextService/UNIX_LaunchInContextService.h>
#include <DropThresholdCalculationService/UNIX_DropThresholdCalculationService.h>
#include <IBSubnetManager/UNIX_IBSubnetManager.h>
#include <REDDropperService/UNIX_REDDropperService.h>
#include <WeightedREDDropperService/UNIX_WeightedREDDropperService.h>
#include <HeadTailDropper/UNIX_HeadTailDropper.h>
#include <QueuingService/UNIX_QueuingService.h>
#include <PacketSchedulingService/UNIX_PacketSchedulingService.h>
#include <NonWorkConservingSchedulingService/UNIX_NonWorkConservingSchedulingService.h>
#include <ToSMarkerService/UNIX_ToSMarkerService.h>
#include <Priority8021QMarkerService/UNIX_Priority8021QMarkerService.h>
#include <PreambleMarkerService/UNIX_PreambleMarkerService.h>
#include <DSCPMarkerService/UNIX_DSCPMarkerService.h>
#include <ClassifierService/UNIX_ClassifierService.h>
#include <ClassifierElement/UNIX_ClassifierElement.h>
#include <TokenBucketMeterService/UNIX_TokenBucketMeterService.h>
#include <EWMAMeterService/UNIX_EWMAMeterService.h>
#include <AverageRateMeterService/UNIX_AverageRateMeterService.h>
#include <PowerManagementService/UNIX_PowerManagementService.h>
#include <BIOSService/UNIX_BIOSService.h>
#include <EFService/UNIX_EFService.h>
#include <AFService/UNIX_AFService.h>
#include <FlowService/UNIX_FlowService.h>
#include <Hdr8021PService/UNIX_Hdr8021PService.h>
#include <PrecedenceService/UNIX_PrecedenceService.h>
#include <HelpService/UNIX_HelpService.h>
#include <SCSIPathConfigurationService/UNIX_SCSIPathConfigurationService.h>
#include <SourceRoutingService/UNIX_SourceRoutingService.h>
#include <SpanningTreeService/UNIX_SpanningTreeService.h>
#include <TransparentBridgingService/UNIX_TransparentBridgingService.h>
#include <SwitchService/UNIX_SwitchService.h>
#include <BGPService/UNIX_BGPService.h>
#include <OSPFService/UNIX_OSPFService.h>
#include <SharedDeviceManagementService/UNIX_SharedDeviceManagementService.h>
#include <VirtualSystemSnapshotService/UNIX_VirtualSystemSnapshotService.h>
#include <OOBAlertService/UNIX_OOBAlertService.h>
#include <USBRedirectionService/UNIX_USBRedirectionService.h>
#include <TextRedirectionService/UNIX_TextRedirectionService.h>
#include <ObjectManager/UNIX_ObjectManager.h>
#include <ProtocolAdapter/UNIX_ProtocolAdapter.h>
#include <ObjectManagerAdapter/UNIX_ObjectManagerAdapter.h>
#include <FibreProtocolService/UNIX_FibreProtocolService.h>
#include <AccountManagementService/UNIX_AccountManagementService.h>
#include <VerificationService/UNIX_VerificationService.h>
#include <IdentityManagementService/UNIX_IdentityManagementService.h>
#include <StorageHardwareIDManagementService/UNIX_StorageHardwareIDManagementService.h>
#include <CertificateAuthority/UNIX_CertificateAuthority.h>
#include <SharedSecretService/UNIX_SharedSecretService.h>
#include <PublicKeyManagementService/UNIX_PublicKeyManagementService.h>
#include <KeyBasedCredentialManagementService/UNIX_KeyBasedCredentialManagementService.h>
#include <CertificateManagementService/UNIX_CertificateManagementService.h>
#include <Notary/UNIX_Notary.h>
#include <KerberosKeyDistributionCenter/UNIX_KerberosKeyDistributionCenter.h>
#include <AuthorizationService/UNIX_AuthorizationService.h>
#include <PrivilegeManagementService/UNIX_PrivilegeManagementService.h>
#include <RoleBasedAuthorizationService/UNIX_RoleBasedAuthorizationService.h>
#include <PlatformWatchdogService/UNIX_PlatformWatchdogService.h>
#include <ClusteringService/UNIX_ClusteringService.h>
#include <MetricService/UNIX_MetricService.h>
#include <StorageConfigurationService/UNIX_StorageConfigurationService.h>
#include <ConfigurationReportingService/UNIX_ConfigurationReportingService.h>
#include <IPConfigurationService/UNIX_IPConfigurationService.h>
#include <IndicationService/UNIX_IndicationService.h>
#include <SoftwareInstallationService/UNIX_SoftwareInstallationService.h>
#include <DiagnosticService/UNIX_DiagnosticService.h>
#include <DiagnosticTest/UNIX_DiagnosticTest.h>
#include <TimeService/UNIX_TimeService.h>
#include <PowerUtilizationManagementService/UNIX_PowerUtilizationManagementService.h>
#include <StatisticsService/UNIX_StatisticsService.h>
#include <BlockStatisticsService/UNIX_BlockStatisticsService.h>
#include <VLANService/UNIX_VLANService.h>
#include <Specific802dot1QVLANService/UNIX_Specific802dot1QVLANService.h>
#include <WakeUpService/UNIX_WakeUpService.h>
#include <OpaqueManagementDataService/UNIX_OpaqueManagementDataService.h>
#include <DatabaseService/UNIX_DatabaseService.h>
#include <BootService/UNIX_BootService.h>
#include <NetworkPortConfigurationService/UNIX_NetworkPortConfigurationService.h>
#include <WiFiPortConfigurationService/UNIX_WiFiPortConfigurationService.h>

#include "UNIX_ProductServiceComponentDeps.h"




class UNIX_ProductServiceComponent :
	public CIM_Component
{
public:

	UNIX_ProductServiceComponent();
	~UNIX_ProductServiceComponent();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;

private:
	CIMName currentScope;

#	include "UNIX_ProductServiceComponentPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_Product group_UNIX_Product_Component;
	int group_UNIX_Product_Index;
	bool endOf_UNIX_Product_Group;
	UNIX_ResourcePoolConfigurationService part_UNIX_ResourcePoolConfigurationService_Component;
	int part_UNIX_ResourcePoolConfigurationService_Index;
	bool endOf_UNIX_ResourcePoolConfigurationService_Part;
	UNIX_PrintService part_UNIX_PrintService_Component;
	int part_UNIX_PrintService_Index;
	bool endOf_UNIX_PrintService_Part;
	UNIX_ControllerConfigurationService part_UNIX_ControllerConfigurationService_Component;
	int part_UNIX_ControllerConfigurationService_Index;
	bool endOf_UNIX_ControllerConfigurationService_Part;
	UNIX_ZoneService part_UNIX_ZoneService_Component;
	int part_UNIX_ZoneService_Index;
	bool endOf_UNIX_ZoneService_Part;
	UNIX_ProtocolService part_UNIX_ProtocolService_Component;
	int part_UNIX_ProtocolService_Index;
	bool endOf_UNIX_ProtocolService_Part;
	UNIX_VirtualSystemManagementService part_UNIX_VirtualSystemManagementService_Component;
	int part_UNIX_VirtualSystemManagementService_Index;
	bool endOf_UNIX_VirtualSystemManagementService_Part;
	UNIX_LaunchInContextService part_UNIX_LaunchInContextService_Component;
	int part_UNIX_LaunchInContextService_Index;
	bool endOf_UNIX_LaunchInContextService_Part;
	UNIX_DropThresholdCalculationService part_UNIX_DropThresholdCalculationService_Component;
	int part_UNIX_DropThresholdCalculationService_Index;
	bool endOf_UNIX_DropThresholdCalculationService_Part;
	UNIX_IBSubnetManager part_UNIX_IBSubnetManager_Component;
	int part_UNIX_IBSubnetManager_Index;
	bool endOf_UNIX_IBSubnetManager_Part;
	UNIX_REDDropperService part_UNIX_REDDropperService_Component;
	int part_UNIX_REDDropperService_Index;
	bool endOf_UNIX_REDDropperService_Part;
	UNIX_WeightedREDDropperService part_UNIX_WeightedREDDropperService_Component;
	int part_UNIX_WeightedREDDropperService_Index;
	bool endOf_UNIX_WeightedREDDropperService_Part;
	UNIX_HeadTailDropper part_UNIX_HeadTailDropper_Component;
	int part_UNIX_HeadTailDropper_Index;
	bool endOf_UNIX_HeadTailDropper_Part;
	UNIX_QueuingService part_UNIX_QueuingService_Component;
	int part_UNIX_QueuingService_Index;
	bool endOf_UNIX_QueuingService_Part;
	UNIX_PacketSchedulingService part_UNIX_PacketSchedulingService_Component;
	int part_UNIX_PacketSchedulingService_Index;
	bool endOf_UNIX_PacketSchedulingService_Part;
	UNIX_NonWorkConservingSchedulingService part_UNIX_NonWorkConservingSchedulingService_Component;
	int part_UNIX_NonWorkConservingSchedulingService_Index;
	bool endOf_UNIX_NonWorkConservingSchedulingService_Part;
	UNIX_ToSMarkerService part_UNIX_ToSMarkerService_Component;
	int part_UNIX_ToSMarkerService_Index;
	bool endOf_UNIX_ToSMarkerService_Part;
	UNIX_Priority8021QMarkerService part_UNIX_Priority8021QMarkerService_Component;
	int part_UNIX_Priority8021QMarkerService_Index;
	bool endOf_UNIX_Priority8021QMarkerService_Part;
	UNIX_PreambleMarkerService part_UNIX_PreambleMarkerService_Component;
	int part_UNIX_PreambleMarkerService_Index;
	bool endOf_UNIX_PreambleMarkerService_Part;
	UNIX_DSCPMarkerService part_UNIX_DSCPMarkerService_Component;
	int part_UNIX_DSCPMarkerService_Index;
	bool endOf_UNIX_DSCPMarkerService_Part;
	UNIX_ClassifierService part_UNIX_ClassifierService_Component;
	int part_UNIX_ClassifierService_Index;
	bool endOf_UNIX_ClassifierService_Part;
	UNIX_ClassifierElement part_UNIX_ClassifierElement_Component;
	int part_UNIX_ClassifierElement_Index;
	bool endOf_UNIX_ClassifierElement_Part;
	UNIX_TokenBucketMeterService part_UNIX_TokenBucketMeterService_Component;
	int part_UNIX_TokenBucketMeterService_Index;
	bool endOf_UNIX_TokenBucketMeterService_Part;
	UNIX_EWMAMeterService part_UNIX_EWMAMeterService_Component;
	int part_UNIX_EWMAMeterService_Index;
	bool endOf_UNIX_EWMAMeterService_Part;
	UNIX_AverageRateMeterService part_UNIX_AverageRateMeterService_Component;
	int part_UNIX_AverageRateMeterService_Index;
	bool endOf_UNIX_AverageRateMeterService_Part;
	UNIX_PowerManagementService part_UNIX_PowerManagementService_Component;
	int part_UNIX_PowerManagementService_Index;
	bool endOf_UNIX_PowerManagementService_Part;
	UNIX_BIOSService part_UNIX_BIOSService_Component;
	int part_UNIX_BIOSService_Index;
	bool endOf_UNIX_BIOSService_Part;
	UNIX_EFService part_UNIX_EFService_Component;
	int part_UNIX_EFService_Index;
	bool endOf_UNIX_EFService_Part;
	UNIX_AFService part_UNIX_AFService_Component;
	int part_UNIX_AFService_Index;
	bool endOf_UNIX_AFService_Part;
	UNIX_FlowService part_UNIX_FlowService_Component;
	int part_UNIX_FlowService_Index;
	bool endOf_UNIX_FlowService_Part;
	UNIX_Hdr8021PService part_UNIX_Hdr8021PService_Component;
	int part_UNIX_Hdr8021PService_Index;
	bool endOf_UNIX_Hdr8021PService_Part;
	UNIX_PrecedenceService part_UNIX_PrecedenceService_Component;
	int part_UNIX_PrecedenceService_Index;
	bool endOf_UNIX_PrecedenceService_Part;
	UNIX_HelpService part_UNIX_HelpService_Component;
	int part_UNIX_HelpService_Index;
	bool endOf_UNIX_HelpService_Part;
	UNIX_SCSIPathConfigurationService part_UNIX_SCSIPathConfigurationService_Component;
	int part_UNIX_SCSIPathConfigurationService_Index;
	bool endOf_UNIX_SCSIPathConfigurationService_Part;
	UNIX_SourceRoutingService part_UNIX_SourceRoutingService_Component;
	int part_UNIX_SourceRoutingService_Index;
	bool endOf_UNIX_SourceRoutingService_Part;
	UNIX_SpanningTreeService part_UNIX_SpanningTreeService_Component;
	int part_UNIX_SpanningTreeService_Index;
	bool endOf_UNIX_SpanningTreeService_Part;
	UNIX_TransparentBridgingService part_UNIX_TransparentBridgingService_Component;
	int part_UNIX_TransparentBridgingService_Index;
	bool endOf_UNIX_TransparentBridgingService_Part;
	UNIX_SwitchService part_UNIX_SwitchService_Component;
	int part_UNIX_SwitchService_Index;
	bool endOf_UNIX_SwitchService_Part;
	UNIX_BGPService part_UNIX_BGPService_Component;
	int part_UNIX_BGPService_Index;
	bool endOf_UNIX_BGPService_Part;
	UNIX_OSPFService part_UNIX_OSPFService_Component;
	int part_UNIX_OSPFService_Index;
	bool endOf_UNIX_OSPFService_Part;
	UNIX_SharedDeviceManagementService part_UNIX_SharedDeviceManagementService_Component;
	int part_UNIX_SharedDeviceManagementService_Index;
	bool endOf_UNIX_SharedDeviceManagementService_Part;
	UNIX_VirtualSystemSnapshotService part_UNIX_VirtualSystemSnapshotService_Component;
	int part_UNIX_VirtualSystemSnapshotService_Index;
	bool endOf_UNIX_VirtualSystemSnapshotService_Part;
	UNIX_OOBAlertService part_UNIX_OOBAlertService_Component;
	int part_UNIX_OOBAlertService_Index;
	bool endOf_UNIX_OOBAlertService_Part;
	UNIX_USBRedirectionService part_UNIX_USBRedirectionService_Component;
	int part_UNIX_USBRedirectionService_Index;
	bool endOf_UNIX_USBRedirectionService_Part;
	UNIX_TextRedirectionService part_UNIX_TextRedirectionService_Component;
	int part_UNIX_TextRedirectionService_Index;
	bool endOf_UNIX_TextRedirectionService_Part;
	UNIX_ObjectManager part_UNIX_ObjectManager_Component;
	int part_UNIX_ObjectManager_Index;
	bool endOf_UNIX_ObjectManager_Part;
	UNIX_ProtocolAdapter part_UNIX_ProtocolAdapter_Component;
	int part_UNIX_ProtocolAdapter_Index;
	bool endOf_UNIX_ProtocolAdapter_Part;
	UNIX_ObjectManagerAdapter part_UNIX_ObjectManagerAdapter_Component;
	int part_UNIX_ObjectManagerAdapter_Index;
	bool endOf_UNIX_ObjectManagerAdapter_Part;
	UNIX_FibreProtocolService part_UNIX_FibreProtocolService_Component;
	int part_UNIX_FibreProtocolService_Index;
	bool endOf_UNIX_FibreProtocolService_Part;
	UNIX_AccountManagementService part_UNIX_AccountManagementService_Component;
	int part_UNIX_AccountManagementService_Index;
	bool endOf_UNIX_AccountManagementService_Part;
	UNIX_VerificationService part_UNIX_VerificationService_Component;
	int part_UNIX_VerificationService_Index;
	bool endOf_UNIX_VerificationService_Part;
	UNIX_IdentityManagementService part_UNIX_IdentityManagementService_Component;
	int part_UNIX_IdentityManagementService_Index;
	bool endOf_UNIX_IdentityManagementService_Part;
	UNIX_StorageHardwareIDManagementService part_UNIX_StorageHardwareIDManagementService_Component;
	int part_UNIX_StorageHardwareIDManagementService_Index;
	bool endOf_UNIX_StorageHardwareIDManagementService_Part;
	UNIX_CertificateAuthority part_UNIX_CertificateAuthority_Component;
	int part_UNIX_CertificateAuthority_Index;
	bool endOf_UNIX_CertificateAuthority_Part;
	UNIX_SharedSecretService part_UNIX_SharedSecretService_Component;
	int part_UNIX_SharedSecretService_Index;
	bool endOf_UNIX_SharedSecretService_Part;
	UNIX_PublicKeyManagementService part_UNIX_PublicKeyManagementService_Component;
	int part_UNIX_PublicKeyManagementService_Index;
	bool endOf_UNIX_PublicKeyManagementService_Part;
	UNIX_KeyBasedCredentialManagementService part_UNIX_KeyBasedCredentialManagementService_Component;
	int part_UNIX_KeyBasedCredentialManagementService_Index;
	bool endOf_UNIX_KeyBasedCredentialManagementService_Part;
	UNIX_CertificateManagementService part_UNIX_CertificateManagementService_Component;
	int part_UNIX_CertificateManagementService_Index;
	bool endOf_UNIX_CertificateManagementService_Part;
	UNIX_Notary part_UNIX_Notary_Component;
	int part_UNIX_Notary_Index;
	bool endOf_UNIX_Notary_Part;
	UNIX_KerberosKeyDistributionCenter part_UNIX_KerberosKeyDistributionCenter_Component;
	int part_UNIX_KerberosKeyDistributionCenter_Index;
	bool endOf_UNIX_KerberosKeyDistributionCenter_Part;
	UNIX_AuthorizationService part_UNIX_AuthorizationService_Component;
	int part_UNIX_AuthorizationService_Index;
	bool endOf_UNIX_AuthorizationService_Part;
	UNIX_PrivilegeManagementService part_UNIX_PrivilegeManagementService_Component;
	int part_UNIX_PrivilegeManagementService_Index;
	bool endOf_UNIX_PrivilegeManagementService_Part;
	UNIX_RoleBasedAuthorizationService part_UNIX_RoleBasedAuthorizationService_Component;
	int part_UNIX_RoleBasedAuthorizationService_Index;
	bool endOf_UNIX_RoleBasedAuthorizationService_Part;
	UNIX_PlatformWatchdogService part_UNIX_PlatformWatchdogService_Component;
	int part_UNIX_PlatformWatchdogService_Index;
	bool endOf_UNIX_PlatformWatchdogService_Part;
	UNIX_ClusteringService part_UNIX_ClusteringService_Component;
	int part_UNIX_ClusteringService_Index;
	bool endOf_UNIX_ClusteringService_Part;
	UNIX_MetricService part_UNIX_MetricService_Component;
	int part_UNIX_MetricService_Index;
	bool endOf_UNIX_MetricService_Part;
	UNIX_StorageConfigurationService part_UNIX_StorageConfigurationService_Component;
	int part_UNIX_StorageConfigurationService_Index;
	bool endOf_UNIX_StorageConfigurationService_Part;
	UNIX_ConfigurationReportingService part_UNIX_ConfigurationReportingService_Component;
	int part_UNIX_ConfigurationReportingService_Index;
	bool endOf_UNIX_ConfigurationReportingService_Part;
	UNIX_IPConfigurationService part_UNIX_IPConfigurationService_Component;
	int part_UNIX_IPConfigurationService_Index;
	bool endOf_UNIX_IPConfigurationService_Part;
	UNIX_IndicationService part_UNIX_IndicationService_Component;
	int part_UNIX_IndicationService_Index;
	bool endOf_UNIX_IndicationService_Part;
	UNIX_SoftwareInstallationService part_UNIX_SoftwareInstallationService_Component;
	int part_UNIX_SoftwareInstallationService_Index;
	bool endOf_UNIX_SoftwareInstallationService_Part;
	UNIX_DiagnosticService part_UNIX_DiagnosticService_Component;
	int part_UNIX_DiagnosticService_Index;
	bool endOf_UNIX_DiagnosticService_Part;
	UNIX_DiagnosticTest part_UNIX_DiagnosticTest_Component;
	int part_UNIX_DiagnosticTest_Index;
	bool endOf_UNIX_DiagnosticTest_Part;
	UNIX_TimeService part_UNIX_TimeService_Component;
	int part_UNIX_TimeService_Index;
	bool endOf_UNIX_TimeService_Part;
	UNIX_PowerUtilizationManagementService part_UNIX_PowerUtilizationManagementService_Component;
	int part_UNIX_PowerUtilizationManagementService_Index;
	bool endOf_UNIX_PowerUtilizationManagementService_Part;
	UNIX_StatisticsService part_UNIX_StatisticsService_Component;
	int part_UNIX_StatisticsService_Index;
	bool endOf_UNIX_StatisticsService_Part;
	UNIX_BlockStatisticsService part_UNIX_BlockStatisticsService_Component;
	int part_UNIX_BlockStatisticsService_Index;
	bool endOf_UNIX_BlockStatisticsService_Part;
	UNIX_VLANService part_UNIX_VLANService_Component;
	int part_UNIX_VLANService_Index;
	bool endOf_UNIX_VLANService_Part;
	UNIX_Specific802dot1QVLANService part_UNIX_Specific802dot1QVLANService_Component;
	int part_UNIX_Specific802dot1QVLANService_Index;
	bool endOf_UNIX_Specific802dot1QVLANService_Part;
	UNIX_WakeUpService part_UNIX_WakeUpService_Component;
	int part_UNIX_WakeUpService_Index;
	bool endOf_UNIX_WakeUpService_Part;
	UNIX_OpaqueManagementDataService part_UNIX_OpaqueManagementDataService_Component;
	int part_UNIX_OpaqueManagementDataService_Index;
	bool endOf_UNIX_OpaqueManagementDataService_Part;
	UNIX_DatabaseService part_UNIX_DatabaseService_Component;
	int part_UNIX_DatabaseService_Index;
	bool endOf_UNIX_DatabaseService_Part;
	UNIX_BootService part_UNIX_BootService_Component;
	int part_UNIX_BootService_Index;
	bool endOf_UNIX_BootService_Part;
	UNIX_NetworkPortConfigurationService part_UNIX_NetworkPortConfigurationService_Component;
	int part_UNIX_NetworkPortConfigurationService_Index;
	bool endOf_UNIX_NetworkPortConfigurationService_Part;
	UNIX_WiFiPortConfigurationService part_UNIX_WiFiPortConfigurationService_Component;
	int part_UNIX_WiFiPortConfigurationService_Index;
	bool endOf_UNIX_WiFiPortConfigurationService_Part;


};

#endif /* UNIX_PRODUCTSERVICECOMPONENT */
