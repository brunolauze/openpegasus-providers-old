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

#include <Pegasus/Common/Config.h>
#include <Pegasus/Common/String.h>
#include <Pegasus/Common/PegasusVersion.h>
#include <UNIX_Common.h>

PEGASUS_USING_PEGASUS;
PEGASUS_USING_STD;

//#include <AbstractIndicationSubscription/UNIX_AbstractIndicationSubscriptionProvider.h>
//#include <AcceptCredentialFrom/UNIX_AcceptCredentialFromProvider.h>
//#include <AccessControlInformation/UNIX_AccessControlInformationProvider.h>
//#include <AccessLabelReader/UNIX_AccessLabelReaderProvider.h>
#include <Account/UNIX_AccountProvider.h>
//#include <AccountAuthentication/UNIX_AccountAuthenticationProvider.h>
//#include <AccountIdentity/UNIX_AccountIdentityProvider.h>
//#include <AccountManagementCapabilities/UNIX_AccountManagementCapabilitiesProvider.h>
//#include <AccountManagementService/UNIX_AccountManagementServiceProvider.h>
//#include <AccountMapsToAccount/UNIX_AccountMapsToAccountProvider.h>
//#include <AccountOnSystem/UNIX_AccountOnSystemProvider.h>
//#include <AccountSettingData/UNIX_AccountSettingDataProvider.h>
//#include <ActionSequence/UNIX_ActionSequenceProvider.h>
//#include <ActiveConnection/UNIX_ActiveConnectionProvider.h>
//#include <ActsAsSpare/UNIX_ActsAsSpareProvider.h>
//#include <AdapterActiveConnection/UNIX_AdapterActiveConnectionProvider.h>
//#include <AdjacentSlots/UNIX_AdjacentSlotsProvider.h>
//#include <AdministrativeDistance/UNIX_AdministrativeDistanceProvider.h>
//#include <ADSLModem/UNIX_ADSLModemProvider.h>
//#include <AffectedJobElement/UNIX_AffectedJobElementProvider.h>
//#include <AFRelatedServices/UNIX_AFRelatedServicesProvider.h>
//#include <AFService/UNIX_AFServiceProvider.h>
//#include <AggregatePExtent/UNIX_AggregatePExtentProvider.h>
//#include <AggregatePSExtent/UNIX_AggregatePSExtentProvider.h>
//#include <AggregatePSExtentBasedOnAggregatePExtent/UNIX_AggregatePSExtentBasedOnAggregatePExtentProvider.h>
//#include <AggregatePSExtentBasedOnPExtent/UNIX_AggregatePSExtentBasedOnPExtentProvider.h>
//#include <AggregateRedundancyComponent/UNIX_AggregateRedundancyComponentProvider.h>
//#include <AggregationMetricDefinition/UNIX_AggregationMetricDefinitionProvider.h>
//#include <AggregationMetricValue/UNIX_AggregationMetricValueProvider.h>
//#include <AGPSoftwareFeature/UNIX_AGPSoftwareFeatureProvider.h>
//#include <AGPVideoController/UNIX_AGPVideoControllerProvider.h>
//#include <AHTransform/UNIX_AHTransformProvider.h>
//#include <AlarmDevice/UNIX_AlarmDeviceProvider.h>
//#include <AlarmDeviceCapabilities/UNIX_AlarmDeviceCapabilitiesProvider.h>
//#include <AlertInstIndication/UNIX_AlertInstIndicationProvider.h>
//#include <AllocatedDMA/UNIX_AllocatedDMAProvider.h>
//#include <AllocatedFromStoragePool/UNIX_AllocatedFromStoragePoolProvider.h>
//#include <AllocatedResource/UNIX_AllocatedResourceProvider.h>
//#include <AllocationCapabilities/UNIX_AllocationCapabilitiesProvider.h>
//#include <AllocationSchedulingElement/UNIX_AllocationSchedulingElementProvider.h>
//#include <ApplicationSystemDependency/UNIX_ApplicationSystemDependencyProvider.h>
//#include <ApplicationSystemDirectory/UNIX_ApplicationSystemDirectoryProvider.h>
//#include <ApplicationSystemHierarchy/UNIX_ApplicationSystemHierarchyProvider.h>
//#include <ApplicationSystemSoftwareFeature/UNIX_ApplicationSystemSoftwareFeatureProvider.h>
//#include <ArchitectureCheck/UNIX_ArchitectureCheckProvider.h>
//#include <AreaOfConfiguration/UNIX_AreaOfConfigurationProvider.h>
//#include <ASBGPEndpoints/UNIX_ASBGPEndpointsProvider.h>
//#include <AssignedIdentity/UNIX_AssignedIdentityProvider.h>
//#include <AssociatedAlarm/UNIX_AssociatedAlarmProvider.h>
//#include <AssociatedBattery/UNIX_AssociatedBatteryProvider.h>
//#include <AssociatedBlockStatisticsManifestCollection/UNIX_AssociatedBlockStatisticsManifestCollectionProvider.h>
//#include <AssociatedCacheMemory/UNIX_AssociatedCacheMemoryProvider.h>
//#include <AssociatedComponentExtent/UNIX_AssociatedComponentExtentProvider.h>
//#include <AssociatedCooling/UNIX_AssociatedCoolingProvider.h>
//#include <AssociatedDatabaseSystem/UNIX_AssociatedDatabaseSystemProvider.h>
//#include <AssociatedIndicatorLED/UNIX_AssociatedIndicatorLEDProvider.h>
//#include <AssociatedJobMethodResult/UNIX_AssociatedJobMethodResultProvider.h>
//#include <AssociatedNextHop/UNIX_AssociatedNextHopProvider.h>
//#include <AssociatedPrivilege/UNIX_AssociatedPrivilegeProvider.h>
//#include <AssociatedProcessorMemory/UNIX_AssociatedProcessorMemoryProvider.h>
//#include <AssociatedProtocolController/UNIX_AssociatedProtocolControllerProvider.h>
//#include <AssociatedRemainingExtent/UNIX_AssociatedRemainingExtentProvider.h>
//#include <AssociatedSupplyCurrentSensor/UNIX_AssociatedSupplyCurrentSensorProvider.h>
//#include <AssociatedSupplyVoltageSensor/UNIX_AssociatedSupplyVoltageSensorProvider.h>
//#include <AuthenticateForUse/UNIX_AuthenticateForUseProvider.h>
//#include <AuthenticationRequirement/UNIX_AuthenticationRequirementProvider.h>
//#include <AuthenticationRule/UNIX_AuthenticationRuleProvider.h>
//#include <AuthenticationTarget/UNIX_AuthenticationTargetProvider.h>
//#include <AuthorizationService/UNIX_AuthorizationServiceProvider.h>
//#include <AuthorizationSubject/UNIX_AuthorizationSubjectProvider.h>
//#include <AuthorizationTarget/UNIX_AuthorizationTargetProvider.h>
//#include <AuthorizedPrivilege/UNIX_AuthorizedPrivilegeProvider.h>
//#include <AuthorizedSubject/UNIX_AuthorizedSubjectProvider.h>
//#include <AuthorizedTarget/UNIX_AuthorizedTargetProvider.h>
//#include <AuthorizedUse/UNIX_AuthorizedUseProvider.h>
//#include <AutonomousSystem/UNIX_AutonomousSystemProvider.h>
//#include <AverageRateMeterService/UNIX_AverageRateMeterServiceProvider.h>
//#include <BaseMetricValue/UNIX_BaseMetricValueProvider.h>
//#include <Battery/UNIX_BatteryProvider.h>
//#include <BGPAdminDistance/UNIX_BGPAdminDistanceProvider.h>
//#include <BGPAttributes/UNIX_BGPAttributesProvider.h>
//#include <BGPAttributesForRoute/UNIX_BGPAttributesForRouteProvider.h>
//#include <BGPCluster/UNIX_BGPClusterProvider.h>
//#include <BGPClustersInAS/UNIX_BGPClustersInASProvider.h>
//#include <BGPEndpointStatistics/UNIX_BGPEndpointStatisticsProvider.h>
//#include <BGPIPRoute/UNIX_BGPIPRouteProvider.h>
//#include <BGPPathAttributes/UNIX_BGPPathAttributesProvider.h>
//#include <BGPPeerGroup/UNIX_BGPPeerGroupProvider.h>
//#include <BGPPeerGroupService/UNIX_BGPPeerGroupServiceProvider.h>
//#include <BGPPeerUsesRouteMap/UNIX_BGPPeerUsesRouteMapProvider.h>
//#include <BGPProtocolEndpoint/UNIX_BGPProtocolEndpointProvider.h>
//#include <BGPRouteMap/UNIX_BGPRouteMapProvider.h>
//#include <BGPRouteMapsInRoutingPolicy/UNIX_BGPRouteMapsInRoutingPolicyProvider.h>
//#include <BGPRoutingPolicy/UNIX_BGPRoutingPolicyProvider.h>
//#include <BGPService/UNIX_BGPServiceProvider.h>
//#include <BGPServiceAttributes/UNIX_BGPServiceAttributesProvider.h>
//#include <BGPServiceStatistics/UNIX_BGPServiceStatisticsProvider.h>
//#include <BGPStatistics/UNIX_BGPStatisticsProvider.h>
//#include <BinarySensor/UNIX_BinarySensorProvider.h>
//#include <BiometricAuthentication/UNIX_BiometricAuthenticationProvider.h>
//#include <BIOSElement/UNIX_BIOSElementProvider.h>
//#include <BIOSEnumeration/UNIX_BIOSEnumerationProvider.h>
//#include <BIOSFeature/UNIX_BIOSFeatureProvider.h>
//#include <BIOSFeatureBIOSElements/UNIX_BIOSFeatureBIOSElementsProvider.h>
//#include <BIOSInteger/UNIX_BIOSIntegerProvider.h>
//#include <BIOSLoadedInNV/UNIX_BIOSLoadedInNVProvider.h>
//#include <BIOSPassword/UNIX_BIOSPasswordProvider.h>
//#include <BIOSService/UNIX_BIOSServiceProvider.h>
//#include <BIOSServiceCapabilities/UNIX_BIOSServiceCapabilitiesProvider.h>
//#include <BIOSString/UNIX_BIOSStringProvider.h>
//#include <BlockStatisticsCapabilities/UNIX_BlockStatisticsCapabilitiesProvider.h>
//#include <BlockStatisticsManifest/UNIX_BlockStatisticsManifestProvider.h>
//#include <BlockStatisticsManifestCollection/UNIX_BlockStatisticsManifestCollectionProvider.h>
//#include <BlockStatisticsService/UNIX_BlockStatisticsServiceProvider.h>
//#include <BlockStorageStatisticalData/UNIX_BlockStorageStatisticalDataProvider.h>
//#include <BootConfigSetting/UNIX_BootConfigSettingProvider.h>
//#include <BootOSFromFS/UNIX_BootOSFromFSProvider.h>
//#include <BootSAP/UNIX_BootSAPProvider.h>
//#include <BootService/UNIX_BootServiceProvider.h>
//#include <BootServiceAccessBySAP/UNIX_BootServiceAccessBySAPProvider.h>
//#include <BootServiceCapabilities/UNIX_BootServiceCapabilitiesProvider.h>
//#include <BootSettingData/UNIX_BootSettingDataProvider.h>
//#include <BootSourceSetting/UNIX_BootSourceSettingProvider.h>
//#include <BoundedPrioritySchedulingElement/UNIX_BoundedPrioritySchedulingElementProvider.h>
//#include <BufferPool/UNIX_BufferPoolProvider.h>
//#include <CableModem/UNIX_CableModemProvider.h>
//#include <CacheMemory/UNIX_CacheMemoryProvider.h>
//#include <CAHasPublicCertificate/UNIX_CAHasPublicCertificateProvider.h>
//#include <CalculatedRoutes/UNIX_CalculatedRoutesProvider.h>
//#include <CalculatesAmong/UNIX_CalculatesAmongProvider.h>
//#include <CalculationBasedOnQueue/UNIX_CalculationBasedOnQueueProvider.h>
//#include <CalculationServiceForDropper/UNIX_CalculationServiceForDropperProvider.h>
//#include <Card/UNIX_CardProvider.h>
//#include <CardInSlot/UNIX_CardInSlotProvider.h>
//#include <CardOnCard/UNIX_CardOnCardProvider.h>
//#include <CASignsPublicKeyCertificate/UNIX_CASignsPublicKeyCertificateProvider.h>
//#include <CDROMDrive/UNIX_CDROMDriveProvider.h>
//#include <CertificateAuthority/UNIX_CertificateAuthorityProvider.h>
//#include <CertificateManagementCapabilities/UNIX_CertificateManagementCapabilitiesProvider.h>
//#include <CertificateManagementService/UNIX_CertificateManagementServiceProvider.h>
//#include <ChangerDevice/UNIX_ChangerDeviceProvider.h>
//#include <Chassis/UNIX_ChassisProvider.h>
//#include <ChassisInRack/UNIX_ChassisInRackProvider.h>
//#include <Chip/UNIX_ChipProvider.h>
//#include <CIMOMStatisticalData/UNIX_CIMOMStatisticalDataProvider.h>
//#include <CIMXMLCommunicationMechanism/UNIX_CIMXMLCommunicationMechanismProvider.h>
//#include <ClassCreation/UNIX_ClassCreationProvider.h>
//#include <ClassDeletion/UNIX_ClassDeletionProvider.h>
//#include <ClassifierElement/UNIX_ClassifierElementProvider.h>
//#include <ClassifierElementInClassifierService/UNIX_ClassifierElementInClassifierServiceProvider.h>
//#include <ClassifierElementUsesFilterList/UNIX_ClassifierElementUsesFilterListProvider.h>
//#include <ClassifierFilterSet/UNIX_ClassifierFilterSetProvider.h>
//#include <ClassifierService/UNIX_ClassifierServiceProvider.h>
//#include <ClassModification/UNIX_ClassModificationProvider.h>
//#include <CLPCapabilities/UNIX_CLPCapabilitiesProvider.h>
//#include <CLPProtocolEndpoint/UNIX_CLPProtocolEndpointProvider.h>
//#include <CLPSettingData/UNIX_CLPSettingDataProvider.h>
//#include <Cluster/UNIX_ClusterProvider.h>
//#include <ClusteringSAP/UNIX_ClusteringSAPProvider.h>
//#include <ClusteringService/UNIX_ClusteringServiceProvider.h>
//#include <ClusterServiceAccessBySAP/UNIX_ClusterServiceAccessBySAPProvider.h>
//#include <CollectedBufferPool/UNIX_CollectedBufferPoolProvider.h>
//#include <CollectedCollections/UNIX_CollectedCollectionsProvider.h>
//#include <CollectedSoftwareElements/UNIX_CollectedSoftwareElementsProvider.h>
//#include <CollectedSoftwareFeatures/UNIX_CollectedSoftwareFeaturesProvider.h>
//#include <CollectionConfiguration/UNIX_CollectionConfigurationProvider.h>
//#include <CollectionInOrganization/UNIX_CollectionInOrganizationProvider.h>
//#include <CollectionInSystem/UNIX_CollectionInSystemProvider.h>
//#include <CollectionOfSensors/UNIX_CollectionOfSensorsProvider.h>
//#include <CollectionSetting/UNIX_CollectionSettingProvider.h>
//#include <CommMechanismForAdapter/UNIX_CommMechanismForAdapterProvider.h>
//#include <CommMechanismForManager/UNIX_CommMechanismForManagerProvider.h>
//#include <CommMechanismForObjectManagerAdapter/UNIX_CommMechanismForObjectManagerAdapterProvider.h>
//#include <CommonDatabase/UNIX_CommonDatabaseProvider.h>
//#include <CommonDatabaseCapabilities/UNIX_CommonDatabaseCapabilitiesProvider.h>
//#include <CommonDatabaseSettingData/UNIX_CommonDatabaseSettingDataProvider.h>
//#include <CommonDatabaseStatistics/UNIX_CommonDatabaseStatisticsProvider.h>
//#include <CompatibleProduct/UNIX_CompatibleProductProvider.h>
//#include <ComponentCS/UNIX_ComponentCSProvider.h>
//#include <CompositeExtent/UNIX_CompositeExtentProvider.h>
//#include <CompositeExtentBasedOn/UNIX_CompositeExtentBasedOnProvider.h>
//#include <CompoundPolicyAction/UNIX_CompoundPolicyActionProvider.h>
//#include <CompoundPolicyCondition/UNIX_CompoundPolicyConditionProvider.h>
//#include <ComputerSystemDMA/UNIX_ComputerSystemDMAProvider.h>
//#include <ComputerSystemIRQ/UNIX_ComputerSystemIRQProvider.h>
//#include <ComputerSystemMappedIO/UNIX_ComputerSystemMappedIOProvider.h>
//#include <ComputerSystemMemory/UNIX_ComputerSystemMemoryProvider.h>
//#include <ComputerSystemNodeCapabilities/UNIX_ComputerSystemNodeCapabilitiesProvider.h>
//#include <ComputerSystemPackage/UNIX_ComputerSystemPackageProvider.h>
//#include <ComputerSystemProcessor/UNIX_ComputerSystemProcessorProvider.h>
//#include <ConcreteCollection/UNIX_ConcreteCollectionProvider.h>
//#include <ConcreteComponent/UNIX_ConcreteComponentProvider.h>
//#include <ConcreteDependency/UNIX_ConcreteDependencyProvider.h>
//#include <ConcreteIdentity/UNIX_ConcreteIdentityProvider.h>
//#include <ConcreteJob/UNIX_ConcreteJobProvider.h>
//#include <ConditioningServiceOnEndpoint/UNIX_ConditioningServiceOnEndpointProvider.h>
//#include <Confederation/UNIX_ConfederationProvider.h>
//#include <Configuration/UNIX_ConfigurationProvider.h>
//#include <ConfigurationCapacity/UNIX_ConfigurationCapacityProvider.h>
//#include <ConfigurationComponent/UNIX_ConfigurationComponentProvider.h>
//#include <ConfigurationForSystem/UNIX_ConfigurationForSystemProvider.h>
//#include <ConfigurationReportingService/UNIX_ConfigurationReportingServiceProvider.h>
//#include <ConnectedTo/UNIX_ConnectedToProvider.h>
//#include <ConnectivityMembershipSettingData/UNIX_ConnectivityMembershipSettingDataProvider.h>
//#include <ConnectorOnPackage/UNIX_ConnectorOnPackageProvider.h>
//#include <ContainedDomain/UNIX_ContainedDomainProvider.h>
//#include <ContainedLocation/UNIX_ContainedLocationProvider.h>
//#include <ContainedProposal/UNIX_ContainedProposalProvider.h>
//#include <ContainedTransform/UNIX_ContainedTransformProvider.h>
//#include <ControllerConfigurationService/UNIX_ControllerConfigurationServiceProvider.h>
//#include <CopyFileAction/UNIX_CopyFileActionProvider.h>
//#include <CorrespondingSettingDataRecord/UNIX_CorrespondingSettingDataRecordProvider.h>
//#include <CorrespondingSettingsRecord/UNIX_CorrespondingSettingsRecordProvider.h>
//#include <CreateDirectoryAction/UNIX_CreateDirectoryActionProvider.h>
//#include <CredentialContext/UNIX_CredentialContextProvider.h>
//#include <CredentialManagementCapabilities/UNIX_CredentialManagementCapabilitiesProvider.h>
//#include <CredentialManagementSAP/UNIX_CredentialManagementSAPProvider.h>
//#include <CredentialStore/UNIX_CredentialStoreProvider.h>
//#include <CurrentSensor/UNIX_CurrentSensorProvider.h>
//#include <CurrentTime/UNIX_CurrentTimeProvider.h>
//#include <DatabaseAdministrator/UNIX_DatabaseAdministratorProvider.h>
//#include <DatabaseControlFile/UNIX_DatabaseControlFileProvider.h>
//#include <DatabaseFile/UNIX_DatabaseFileProvider.h>
//#include <DatabaseParameter/UNIX_DatabaseParameterProvider.h>
//#include <DatabaseResourceStatistics/UNIX_DatabaseResourceStatisticsProvider.h>
//#include <DatabaseSegment/UNIX_DatabaseSegmentProvider.h>
//#include <DatabaseSegmentSettingData/UNIX_DatabaseSegmentSettingDataProvider.h>
//#include <DatabaseService/UNIX_DatabaseServiceProvider.h>
//#include <DatabaseServiceStatistics/UNIX_DatabaseServiceStatisticsProvider.h>
//#include <DatabaseStorage/UNIX_DatabaseStorageProvider.h>
//#include <DatabaseStorageArea/UNIX_DatabaseStorageAreaProvider.h>
//#include <DatabaseSystem/UNIX_DatabaseSystemProvider.h>
//#include <DataFile/UNIX_DataFileProvider.h>
//#include <DependencyContext/UNIX_DependencyContextProvider.h>
//#include <DesktopMonitor/UNIX_DesktopMonitorProvider.h>
//#include <DeviceAccessedByFile/UNIX_DeviceAccessedByFileProvider.h>
//#include <DeviceErrorCounts/UNIX_DeviceErrorCountsProvider.h>
//#include <DeviceErrorData/UNIX_DeviceErrorDataProvider.h>
//#include <DeviceFile/UNIX_DeviceFileProvider.h>
//#include <DeviceIdentity/UNIX_DeviceIdentityProvider.h>
//#include <DeviceSAPImplementation/UNIX_DeviceSAPImplementationProvider.h>
//#include <DeviceServicesLocation/UNIX_DeviceServicesLocationProvider.h>
//#include <DeviceSharingCapabilities/UNIX_DeviceSharingCapabilitiesProvider.h>
//#include <DeviceSoftware/UNIX_DeviceSoftwareProvider.h>
//#include <DeviceStatistics/UNIX_DeviceStatisticsProvider.h>
//#include <DHCPCapabilities/UNIX_DHCPCapabilitiesProvider.h>
//#include <DHCPProtocolEndpoint/UNIX_DHCPProtocolEndpointProvider.h>
//#include <DHCPSettingData/UNIX_DHCPSettingDataProvider.h>
//#include <DiagnosticCompletionRecord/UNIX_DiagnosticCompletionRecordProvider.h>
//#include <DiagnosticLog/UNIX_DiagnosticLogProvider.h>
//#include <DiagnosticResult/UNIX_DiagnosticResultProvider.h>
//#include <DiagnosticResultForMSE/UNIX_DiagnosticResultForMSEProvider.h>
//#include <DiagnosticResultForTest/UNIX_DiagnosticResultForTestProvider.h>
//#include <DiagnosticResultInPackage/UNIX_DiagnosticResultInPackageProvider.h>
//#include <DiagnosticService/UNIX_DiagnosticServiceProvider.h>
//#include <DiagnosticServiceCapabilities/UNIX_DiagnosticServiceCapabilitiesProvider.h>
//#include <DiagnosticServiceRecord/UNIX_DiagnosticServiceRecordProvider.h>
//#include <DiagnosticSetting/UNIX_DiagnosticSettingProvider.h>
//#include <DiagnosticSettingData/UNIX_DiagnosticSettingDataProvider.h>
//#include <DiagnosticSettingDataRecord/UNIX_DiagnosticSettingDataRecordProvider.h>
//#include <DiagnosticSettingRecord/UNIX_DiagnosticSettingRecordProvider.h>
//#include <DiagnosticsLog/UNIX_DiagnosticsLogProvider.h>
//#include <DiagnosticTest/UNIX_DiagnosticTestProvider.h>
//#include <DiagnosticTestForMSE/UNIX_DiagnosticTestForMSEProvider.h>
//#include <DiagnosticTestInPackage/UNIX_DiagnosticTestInPackageProvider.h>
//#include <DiagnosticTestSoftware/UNIX_DiagnosticTestSoftwareProvider.h>
//#include <Directory/UNIX_DirectoryProvider.h>
//#include <DirectoryContainsFile/UNIX_DirectoryContainsFileProvider.h>
//#include <DirectorySpecification/UNIX_DirectorySpecificationProvider.h>
//#include <DirectorySpecificationFile/UNIX_DirectorySpecificationFileProvider.h>
//#include <DiscreteSensor/UNIX_DiscreteSensorProvider.h>
//#include <DiskDrive/UNIX_DiskDriveProvider.h>
//#include <DisketteDrive/UNIX_DisketteDriveProvider.h>
//#include <DiskGroup/UNIX_DiskGroupProvider.h>
//#include <DiskPartition/UNIX_DiskPartitionProvider.h>
//#include <DiskPartitionBasedOnVolume/UNIX_DiskPartitionBasedOnVolumeProvider.h>
//#include <DiskSpaceCheck/UNIX_DiskSpaceCheckProvider.h>
//#include <DisplayController/UNIX_DisplayControllerProvider.h>
//#include <DMA/UNIX_DMAProvider.h>
//#include <DNSGeneralSettingData/UNIX_DNSGeneralSettingDataProvider.h>
//#include <DNSProtocolEndpoint/UNIX_DNSProtocolEndpointProvider.h>
//#include <DNSSettingData/UNIX_DNSSettingDataProvider.h>
//#include <Docked/UNIX_DockedProvider.h>
//#include <DocumentAuthentication/UNIX_DocumentAuthenticationProvider.h>
//#include <Door/UNIX_DoorProvider.h>
//#include <DoorAccessToDevice/UNIX_DoorAccessToDeviceProvider.h>
//#include <DoorAccessToPhysicalElement/UNIX_DoorAccessToPhysicalElementProvider.h>
//#include <DriveInDiskGroup/UNIX_DriveInDiskGroupProvider.h>
//#include <DropThresholdCalculationService/UNIX_DropThresholdCalculationServiceProvider.h>
//#include <DSCPMarkerService/UNIX_DSCPMarkerServiceProvider.h>
//#include <DVDDrive/UNIX_DVDDriveProvider.h>
//#include <DynamicForwardingEntry/UNIX_DynamicForwardingEntryProvider.h>
//#include <EFService/UNIX_EFServiceProvider.h>
//#include <EGPRouteCalcDependency/UNIX_EGPRouteCalcDependencyProvider.h>
//#include <EgressConditioningServiceOnEndpoint/UNIX_EgressConditioningServiceOnEndpointProvider.h>
//#include <ElementAllocatedFromPool/UNIX_ElementAllocatedFromPoolProvider.h>
//#include <ElementAsUser/UNIX_ElementAsUserProvider.h>
//#include <ElementCapabilities/UNIX_ElementCapabilitiesProvider.h>
//#include <ElementCapacity/UNIX_ElementCapacityProvider.h>
//#include <ElementConfiguration/UNIX_ElementConfigurationProvider.h>
//#include <ElementConformsToProfile/UNIX_ElementConformsToProfileProvider.h>
//#include <ElementInConnector/UNIX_ElementInConnectorProvider.h>
//#include <ElementInPolicyRoleCollection/UNIX_ElementInPolicyRoleCollectionProvider.h>
//#include <ElementInSchedulingService/UNIX_ElementInSchedulingServiceProvider.h>
//#include <ElementLocation/UNIX_ElementLocationProvider.h>
//#include <ElementProfile/UNIX_ElementProfileProvider.h>
//#include <ElementSecuritySensitivity/UNIX_ElementSecuritySensitivityProvider.h>
//#include <ElementSetting/UNIX_ElementSettingProvider.h>
//#include <ElementSettingData/UNIX_ElementSettingDataProvider.h>
//#include <ElementsLinked/UNIX_ElementsLinkedProvider.h>
//#include <ElementSoftwareIdentity/UNIX_ElementSoftwareIdentityProvider.h>
//#include <ElementStatisticalData/UNIX_ElementStatisticalDataProvider.h>
//#include <ElementView/UNIX_ElementViewProvider.h>
//#include <EndpointForIPNetworkConnection/UNIX_EndpointForIPNetworkConnectionProvider.h>
//#include <EndpointIdentity/UNIX_EndpointIdentityProvider.h>
//#include <EndpointInArea/UNIX_EndpointInAreaProvider.h>
//#include <EndpointInLink/UNIX_EndpointInLinkProvider.h>
//#include <EndpointOfNetworkPipe/UNIX_EndpointOfNetworkPipeProvider.h>
//#include <EntriesInFilterList/UNIX_EntriesInFilterListProvider.h>
//#include <Error/UNIX_ErrorProvider.h>
//#include <ErrorCountersForDevice/UNIX_ErrorCountersForDeviceProvider.h>
//#include <ESCONController/UNIX_ESCONControllerProvider.h>
//#include <ESPTransform/UNIX_ESPTransformProvider.h>
//#include <EthernetAdapter/UNIX_EthernetAdapterProvider.h>
//#include <EthernetPort/UNIX_EthernetPortProvider.h>
//#include <EthernetPortAllocationSettingData/UNIX_EthernetPortAllocationSettingDataProvider.h>
//#include <EthernetPortStatistics/UNIX_EthernetPortStatisticsProvider.h>
//#include <EWMAMeterService/UNIX_EWMAMeterServiceProvider.h>
//#include <ExecuteProgram/UNIX_ExecuteProgramProvider.h>
//#include <Export/UNIX_ExportProvider.h>
//#include <ExtendedStaticIPAssignmentSettingData/UNIX_ExtendedStaticIPAssignmentSettingDataProvider.h>
//#include <ExtentInDiskGroup/UNIX_ExtentInDiskGroupProvider.h>
//#include <ExtraCapacityGroup/UNIX_ExtraCapacityGroupProvider.h>
//#include <Fan/UNIX_FanProvider.h>
//#include <FCAdapterEventCounters/UNIX_FCAdapterEventCountersProvider.h>
//#include <FCPort/UNIX_FCPortProvider.h>
//#include <FCPortCapabilities/UNIX_FCPortCapabilitiesProvider.h>
//#include <FCPortRateStatistics/UNIX_FCPortRateStatisticsProvider.h>
//#include <FCPortStatistics/UNIX_FCPortStatisticsProvider.h>
//#include <FCSwitchCapabilities/UNIX_FCSwitchCapabilitiesProvider.h>
//#include <FCSwitchSettings/UNIX_FCSwitchSettingsProvider.h>
//#include <FibreChannelAdapter/UNIX_FibreChannelAdapterProvider.h>
//#include <FibrePort/UNIX_FibrePortProvider.h>
//#include <FibrePortActiveLogin/UNIX_FibrePortActiveLoginProvider.h>
//#include <FibrePortEventCounters/UNIX_FibrePortEventCountersProvider.h>
//#include <FibrePortOnFCAdapter/UNIX_FibrePortOnFCAdapterProvider.h>
//#include <FibreProtocolService/UNIX_FibreProtocolServiceProvider.h>
//#include <FIFOPipeFile/UNIX_FIFOPipeFileProvider.h>
//#include <FileIdentity/UNIX_FileIdentityProvider.h>
//#include <FileSpecification/UNIX_FileSpecificationProvider.h>
//#include <FileStorage/UNIX_FileStorageProvider.h>
//#include <FileSystemCapabilities/UNIX_FileSystemCapabilitiesProvider.h>
//#include <FileSystemSettingData/UNIX_FileSystemSettingDataProvider.h>
//#include <FilterCollection/UNIX_FilterCollectionProvider.h>
//#include <FilteredBGPAttributes/UNIX_FilteredBGPAttributesProvider.h>
//#include <FilterEntry/UNIX_FilterEntryProvider.h>
//#include <FilterEntryInSystem/UNIX_FilterEntryInSystemProvider.h>
//#include <FilterList/UNIX_FilterListProvider.h>
//#include <FilterListInSystem/UNIX_FilterListInSystemProvider.h>
//#include <FilterListsInBGPRouteMap/UNIX_FilterListsInBGPRouteMapProvider.h>
//#include <FilterOfPacketCondition/UNIX_FilterOfPacketConditionProvider.h>
//#include <FilterOfSecurityAssociation/UNIX_FilterOfSecurityAssociationProvider.h>
//#include <FlatPanel/UNIX_FlatPanelProvider.h>
//#include <FlowService/UNIX_FlowServiceProvider.h>
//#include <ForwardedRoutes/UNIX_ForwardedRoutesProvider.h>
//#include <ForwardsAmong/UNIX_ForwardsAmongProvider.h>
//#include <FromDirectoryAction/UNIX_FromDirectoryActionProvider.h>
//#include <FromDirectorySpecification/UNIX_FromDirectorySpecificationProvider.h>
//#include <FRU/UNIX_FRUProvider.h>
//#include <FRUIncludesProduct/UNIX_FRUIncludesProductProvider.h>
//#include <FRUIncludesSoftwareFeature/UNIX_FRUIncludesSoftwareFeatureProvider.h>
//#include <FRUPhysicalElements/UNIX_FRUPhysicalElementsProvider.h>
//#include <GatewayPathID/UNIX_GatewayPathIDProvider.h>
//#include <Group/UNIX_GroupProvider.h>
//#include <HardwareThread/UNIX_HardwareThreadProvider.h>
//#include <Hdr8021Filter/UNIX_Hdr8021FilterProvider.h>
//#include <Hdr8021PService/UNIX_Hdr8021PServiceProvider.h>
//#include <HDSLModem/UNIX_HDSLModemProvider.h>
//#include <HeadTailDropper/UNIX_HeadTailDropperProvider.h>
//#include <HeadTailDropQueueBinding/UNIX_HeadTailDropQueueBindingProvider.h>
//#include <HeatPipe/UNIX_HeatPipeProvider.h>
//#include <HelpService/UNIX_HelpServiceProvider.h>
//#include <HomeForMedia/UNIX_HomeForMediaProvider.h>
//#include <HostedACI/UNIX_HostedACIProvider.h>
//#include <HostedAdminDistance/UNIX_HostedAdminDistanceProvider.h>
//#include <HostedAuthenticationRequirement/UNIX_HostedAuthenticationRequirementProvider.h>
//#include <HostedBGPAttributes/UNIX_HostedBGPAttributesProvider.h>
//#include <HostedBGPPeerGroup/UNIX_HostedBGPPeerGroupProvider.h>
//#include <HostedBGPRouteMap/UNIX_HostedBGPRouteMapProvider.h>
//#include <HostedBootSAP/UNIX_HostedBootSAPProvider.h>
//#include <HostedBootService/UNIX_HostedBootServiceProvider.h>
//#include <HostedClusterSAP/UNIX_HostedClusterSAPProvider.h>
//#include <HostedClusterService/UNIX_HostedClusterServiceProvider.h>
//#include <HostedCollection/UNIX_HostedCollectionProvider.h>
//#include <HostedFileSystem/UNIX_HostedFileSystemProvider.h>
//#include <HostedFilterEntryBase/UNIX_HostedFilterEntryBaseProvider.h>
//#include <HostedFilterList/UNIX_HostedFilterListProvider.h>
//#include <HostedForwardingServices/UNIX_HostedForwardingServicesProvider.h>
//#include <HostedJobDestination/UNIX_HostedJobDestinationProvider.h>
//#include <HostedNetworkPipe/UNIX_HostedNetworkPipeProvider.h>
//#include <HostedResourcePool/UNIX_HostedResourcePoolProvider.h>
//#include <HostedRoute/UNIX_HostedRouteProvider.h>
//#include <HostedRoutingPolicy/UNIX_HostedRoutingPolicyProvider.h>
//#include <HostedRoutingServices/UNIX_HostedRoutingServicesProvider.h>
//#include <HostedStoragePool/UNIX_HostedStoragePoolProvider.h>
//#include <HostingCS/UNIX_HostingCSProvider.h>
//#include <IBSubnetManager/UNIX_IBSubnetManagerProvider.h>
//#include <IDEController/UNIX_IDEControllerProvider.h>
//#include <IdentificationOfManagedSystem/UNIX_IdentificationOfManagedSystemProvider.h>
//#include <IdentityContext/UNIX_IdentityContextProvider.h>
//#include <IdentityManagementService/UNIX_IdentityManagementServiceProvider.h>
//#include <IEEE8021xCapabilities/UNIX_IEEE8021xCapabilitiesProvider.h>
//#include <IEEE8021xSettings/UNIX_IEEE8021xSettingsProvider.h>
//#include <IKEAction/UNIX_IKEActionProvider.h>
//#include <IKEProposal/UNIX_IKEProposalProvider.h>
//#include <IKERule/UNIX_IKERuleProvider.h>
//#include <IKESAEndpoint/UNIX_IKESAEndpointProvider.h>
//#include <IKESecretIsNamed/UNIX_IKESecretIsNamedProvider.h>
//#include <InBGPPeerGroup/UNIX_InBGPPeerGroupProvider.h>
//#include <InboundVLAN/UNIX_InboundVLANProvider.h>
//#include <IndicationFilter/UNIX_IndicationFilterProvider.h>
//#include <IndicationHandlerCIMXML/UNIX_IndicationHandlerCIMXMLProvider.h>
//#include <IndicationService/UNIX_IndicationServiceProvider.h>
//#include <IndicationServiceCapabilities/UNIX_IndicationServiceCapabilitiesProvider.h>
//#include <IndicationServiceSettingData/UNIX_IndicationServiceSettingDataProvider.h>
//#include <IndicatorLED/UNIX_IndicatorLEDProvider.h>
//#include <IndicatorLEDCapabilities/UNIX_IndicatorLEDCapabilitiesProvider.h>
//#include <InfraredController/UNIX_InfraredControllerProvider.h>
//#include <IngressConditioningServiceOnEndpoint/UNIX_IngressConditioningServiceOnEndpointProvider.h>
//#include <InLogicalNetwork/UNIX_InLogicalNetworkProvider.h>
//#include <InSegment/UNIX_InSegmentProvider.h>
//#include <InstalledOS/UNIX_InstalledOSProvider.h>
//#include <InstalledProduct/UNIX_InstalledProductProvider.h>
//#include <InstalledProductImage/UNIX_InstalledProductImageProvider.h>
//#include <InstalledSoftwareElement/UNIX_InstalledSoftwareElementProvider.h>
//#include <InstalledSoftwareIdentity/UNIX_InstalledSoftwareIdentityProvider.h>
//#include <InstCreation/UNIX_InstCreationProvider.h>
//#include <InstDeletion/UNIX_InstDeletionProvider.h>
//#include <InstMethodCall/UNIX_InstMethodCallProvider.h>
//#include <InstModification/UNIX_InstModificationProvider.h>
//#include <InstRead/UNIX_InstReadProvider.h>
//#include <InterLibraryPort/UNIX_InterLibraryPortProvider.h>
//#include <IPAddressRange/UNIX_IPAddressRangeProvider.h>
//#include <IPCOMPTransform/UNIX_IPCOMPTransformProvider.h>
//#include <IPConfigurationService/UNIX_IPConfigurationServiceProvider.h>
//#include <IPConnectivitySubnet/UNIX_IPConnectivitySubnetProvider.h>
//#include <IPHeadersFilter/UNIX_IPHeadersFilterProvider.h>
//#include <IPNetworkConnection/UNIX_IPNetworkConnectionProvider.h>
//#include <IPNetworkIdentity/UNIX_IPNetworkIdentityProvider.h>
//#include <IPProtocolEndpoint/UNIX_IPProtocolEndpointProvider.h>
//#include <IPsecPolicyForEndpoint/UNIX_IPsecPolicyForEndpointProvider.h>
//#include <IPsecPolicyForSystem/UNIX_IPsecPolicyForSystemProvider.h>
//#include <IPsecProposal/UNIX_IPsecProposalProvider.h>
//#include <IPsecRule/UNIX_IPsecRuleProvider.h>
//#include <IPsecSAEndpoint/UNIX_IPsecSAEndpointProvider.h>
//#include <IPsecTransportAction/UNIX_IPsecTransportActionProvider.h>
//#include <IPsecTunnelAction/UNIX_IPsecTunnelActionProvider.h>
//#include <IPSOFilterEntry/UNIX_IPSOFilterEntryProvider.h>
//#include <IPSubnet/UNIX_IPSubnetProvider.h>
//#include <IPVersionSettingData/UNIX_IPVersionSettingDataProvider.h>
//#include <IPXConnectivityNetwork/UNIX_IPXConnectivityNetworkProvider.h>
//#include <IPXNetwork/UNIX_IPXNetworkProvider.h>
//#include <IPXProtocolEndpoint/UNIX_IPXProtocolEndpointProvider.h>
//#include <IRQ/UNIX_IRQProvider.h>
//#include <iSCSICapabilities/UNIX_iSCSICapabilitiesProvider.h>
//#include <iSCSIConnection/UNIX_iSCSIConnectionProvider.h>
//#include <iSCSIConnectionSettings/UNIX_iSCSIConnectionSettingsProvider.h>
//#include <iSCSILoginStatistics/UNIX_iSCSILoginStatisticsProvider.h>
//#include <iSCSIProtocolEndpoint/UNIX_iSCSIProtocolEndpointProvider.h>
//#include <iSCSISession/UNIX_iSCSISessionProvider.h>
//#include <iSCSISessionFailures/UNIX_iSCSISessionFailuresProvider.h>
//#include <iSCSISessionSettings/UNIX_iSCSISessionSettingsProvider.h>
//#include <ISDNModem/UNIX_ISDNModemProvider.h>
//#include <IsSpare/UNIX_IsSpareProvider.h>
//#include <JobDestinationJobs/UNIX_JobDestinationJobsProvider.h>
//#include <JobQueue/UNIX_JobQueueProvider.h>
//#include <JobSettingData/UNIX_JobSettingDataProvider.h>
//#include <KDCIssuesKerberosTicket/UNIX_KDCIssuesKerberosTicketProvider.h>
//#include <KerberosAuthentication/UNIX_KerberosAuthenticationProvider.h>
//#include <KerberosCredential/UNIX_KerberosCredentialProvider.h>
//#include <KerberosKeyDistributionCenter/UNIX_KerberosKeyDistributionCenterProvider.h>
//#include <KerberosTicket/UNIX_KerberosTicketProvider.h>
//#include <KeyBasedCredentialManagementService/UNIX_KeyBasedCredentialManagementServiceProvider.h>
//#include <Keyboard/UNIX_KeyboardProvider.h>
//#include <Keystore/UNIX_KeystoreProvider.h>
//#include <KVMRedirectionSAP/UNIX_KVMRedirectionSAPProvider.h>
//#include <LabelReader/UNIX_LabelReaderProvider.h>
//#include <LabelReaderStatData/UNIX_LabelReaderStatDataProvider.h>
//#include <LabelReaderStatInfo/UNIX_LabelReaderStatInfoProvider.h>
//#include <LANConnectivitySegment/UNIX_LANConnectivitySegmentProvider.h>
//#include <LANEndpoint/UNIX_LANEndpointProvider.h>
//#include <LANSegment/UNIX_LANSegmentProvider.h>
//#include <LastAppliedSnapshot/UNIX_LastAppliedSnapshotProvider.h>
//#include <LaunchInContextCapabilities/UNIX_LaunchInContextCapabilitiesProvider.h>
//#include <LaunchInContextSAP/UNIX_LaunchInContextSAPProvider.h>
//#include <LaunchInContextService/UNIX_LaunchInContextServiceProvider.h>
//#include <LibraryExchange/UNIX_LibraryExchangeProvider.h>
//#include <LibraryPackage/UNIX_LibraryPackageProvider.h>
//#include <LimitedAccessPort/UNIX_LimitedAccessPortProvider.h>
//#include <LinkHasConnector/UNIX_LinkHasConnectorProvider.h>
//#include <ListenerDestinationCIMXML/UNIX_ListenerDestinationCIMXMLProvider.h>
//#include <ListenerDestinationWSManagement/UNIX_ListenerDestinationWSManagementProvider.h>
//#include <ListsInRoutingPolicy/UNIX_ListsInRoutingPolicyProvider.h>
//#include <LLDPEthernetPort/UNIX_LLDPEthernetPortProvider.h>
//#include <LLDPEthernetPortStatistics/UNIX_LLDPEthernetPortStatisticsProvider.h>
//#include <LocalFileSystem/UNIX_LocalFileSystemProvider.h>
//#include <LocalizationCapabilities/UNIX_LocalizationCapabilitiesProvider.h>
//#include <LocallyManagedPublicKey/UNIX_LocallyManagedPublicKeyProvider.h>
//#include <Location/UNIX_LocationProvider.h>
//#include <LogEntry/UNIX_LogEntryProvider.h>
//#include <LogicalDisk/UNIX_LogicalDiskProvider.h>
//#include <LogicalDiskBasedOnPartition/UNIX_LogicalDiskBasedOnPartitionProvider.h>
//#include <LogicalDiskBasedOnVolume/UNIX_LogicalDiskBasedOnVolumeProvider.h>
//#include <LogicalDiskBasedOnVolumeSet/UNIX_LogicalDiskBasedOnVolumeSetProvider.h>
//#include <LogicalModule/UNIX_LogicalModuleProvider.h>
//#include <LogicalNetworkService/UNIX_LogicalNetworkServiceProvider.h>
//#include <LogicalPortGroup/UNIX_LogicalPortGroupProvider.h>
//#include <LogicalPortSettings/UNIX_LogicalPortSettingsProvider.h>
//#include <LogInDataFile/UNIX_LogInDataFileProvider.h>
//#include <LogInDeviceFile/UNIX_LogInDeviceFileProvider.h>
//#include <LogInStorage/UNIX_LogInStorageProvider.h>
//#include <LogManagesRecord/UNIX_LogManagesRecordProvider.h>
//#include <LogRecord/UNIX_LogRecordProvider.h>
//#include <Magazine/UNIX_MagazineProvider.h>
//#include <MagnetoOpticalDrive/UNIX_MagnetoOpticalDriveProvider.h>
//#include <ManagementController/UNIX_ManagementControllerProvider.h>
//#include <ManagesAccount/UNIX_ManagesAccountProvider.h>
//#include <ManagesAccountOnSystem/UNIX_ManagesAccountOnSystemProvider.h>
//#include <MediaAccessStatData/UNIX_MediaAccessStatDataProvider.h>
//#include <MediaAccessStatInfo/UNIX_MediaAccessStatInfoProvider.h>
//#include <MediaPhysicalStatData/UNIX_MediaPhysicalStatDataProvider.h>
//#include <MediaPhysicalStatInfo/UNIX_MediaPhysicalStatInfoProvider.h>
//#include <MediaPresent/UNIX_MediaPresentProvider.h>
//#include <MediaRedirectionCapabilities/UNIX_MediaRedirectionCapabilitiesProvider.h>
//#include <MediaRedirectionSAP/UNIX_MediaRedirectionSAPProvider.h>
//#include <MemberPrincipal/UNIX_MemberPrincipalProvider.h>
//#include <MemoryCapacity/UNIX_MemoryCapacityProvider.h>
//#include <MemoryCheck/UNIX_MemoryCheckProvider.h>
//#include <MemoryError/UNIX_MemoryErrorProvider.h>
//#include <MemoryOnCard/UNIX_MemoryOnCardProvider.h>
//#include <MemoryResource/UNIX_MemoryResourceProvider.h>
//#include <MemoryWithMedia/UNIX_MemoryWithMediaProvider.h>
//#include <MessageLog/UNIX_MessageLogProvider.h>
//#include <MethodAction/UNIX_MethodActionProvider.h>
//#include <MethodParameters/UNIX_MethodParametersProvider.h>
//#include <MethodResult/UNIX_MethodResultProvider.h>
//#include <MetricDefForME/UNIX_MetricDefForMEProvider.h>
//#include <MetricDefinition/UNIX_MetricDefinitionProvider.h>
//#include <MetricForME/UNIX_MetricForMEProvider.h>
//#include <MetricInstance/UNIX_MetricInstanceProvider.h>
//#include <MetricService/UNIX_MetricServiceProvider.h>
//#include <MetricServiceCapabilities/UNIX_MetricServiceCapabilitiesProvider.h>
//#include <ModifySettingAction/UNIX_ModifySettingActionProvider.h>
//#include <ModulePort/UNIX_ModulePortProvider.h>
//#include <MonitorResolution/UNIX_MonitorResolutionProvider.h>
//#include <MoreGroupInfo/UNIX_MoreGroupInfoProvider.h>
//#include <MoreOrganizationInfo/UNIX_MoreOrganizationInfoProvider.h>
//#include <MoreOrgUnitInfo/UNIX_MoreOrgUnitInfoProvider.h>
//#include <MorePersonInfo/UNIX_MorePersonInfoProvider.h>
//#include <MoreRoleInfo/UNIX_MoreRoleInfoProvider.h>
//#include <Mount/UNIX_MountProvider.h>
//#include <MultiStateSensor/UNIX_MultiStateSensorProvider.h>
//#include <NamedAddressCollection/UNIX_NamedAddressCollectionProvider.h>
//#include <NamedCredential/UNIX_NamedCredentialProvider.h>
//#include <NamedSharedIKESecret/UNIX_NamedSharedIKESecretProvider.h>
//#include <Namespace/UNIX_NamespaceProvider.h>
//#include <NamespaceInManager/UNIX_NamespaceInManagerProvider.h>
//#include <Network/UNIX_NetworkProvider.h>
//#include <NetworkAdapterRedundancyComponent/UNIX_NetworkAdapterRedundancyComponentProvider.h>
//#include <NetworkingIDAuthentication/UNIX_NetworkingIDAuthenticationProvider.h>
//#include <NetworkPacketAction/UNIX_NetworkPacketActionProvider.h>
//#include <NetworkPipeComposition/UNIX_NetworkPipeCompositionProvider.h>
//#include <NetworkPortCapabilities/UNIX_NetworkPortCapabilitiesProvider.h>
//#include <NetworkPortConfigurationService/UNIX_NetworkPortConfigurationServiceProvider.h>
//#include <NetworkServicesInAdminDomain/UNIX_NetworkServicesInAdminDomainProvider.h>
//#include <NetworksInAdminDomain/UNIX_NetworksInAdminDomainProvider.h>
//#include <NetworkVirtualAdapter/UNIX_NetworkVirtualAdapterProvider.h>
//#include <NetworkVLAN/UNIX_NetworkVLANProvider.h>
//#include <NextHopIPRoute/UNIX_NextHopIPRouteProvider.h>
//#include <NextHopRoute/UNIX_NextHopRouteProvider.h>
//#include <NextService/UNIX_NextServiceProvider.h>
//#include <NextServiceAfterMeter/UNIX_NextServiceAfterMeterProvider.h>
//#include <NFS/UNIX_NFSProvider.h>
//#include <NonVolatileStorage/UNIX_NonVolatileStorageProvider.h>
//#include <NonWorkConservingSchedulingService/UNIX_NonWorkConservingSchedulingServiceProvider.h>
//#include <Notary/UNIX_NotaryProvider.h>
//#include <NotaryVerifiesBiometric/UNIX_NotaryVerifiesBiometricProvider.h>
//#include <ObjectManager/UNIX_ObjectManagerProvider.h>
//#include <ObjectManagerAdapter/UNIX_ObjectManagerAdapterProvider.h>
//#include <ObjectManagerCommunicationMechanism/UNIX_ObjectManagerCommunicationMechanismProvider.h>
//#include <OOBAlertService/UNIX_OOBAlertServiceProvider.h>
//#include <OOBAlertServiceOnModem/UNIX_OOBAlertServiceOnModemProvider.h>
//#include <OOBAlertServiceOnNetworkAdapter/UNIX_OOBAlertServiceOnNetworkAdapterProvider.h>
//#include <OOBAlertServiceOnNetworkPort/UNIX_OOBAlertServiceOnNetworkPortProvider.h>
//#include <OpaqueManagementData/UNIX_OpaqueManagementDataProvider.h>
//#include <OpaqueManagementDataCapabilities/UNIX_OpaqueManagementDataCapabilitiesProvider.h>
//#include <OpaqueManagementDataService/UNIX_OpaqueManagementDataServiceProvider.h>
#include <OperatingSystem/UNIX_OperatingSystemProvider.h>
//#include <OperatingSystemCapabilities/UNIX_OperatingSystemCapabilitiesProvider.h>
//#include <OperatingSystemSoftwareFeature/UNIX_OperatingSystemSoftwareFeatureProvider.h>
//#include <OperationLog/UNIX_OperationLogProvider.h>
//#include <OrderedComponent/UNIX_OrderedComponentProvider.h>
//#include <OrderedDependency/UNIX_OrderedDependencyProvider.h>
//#include <OrderedMemberOfCollection/UNIX_OrderedMemberOfCollectionProvider.h>
//#include <Organization/UNIX_OrganizationProvider.h>
//#include <OrgStructure/UNIX_OrgStructureProvider.h>
//#include <OrgUnit/UNIX_OrgUnitProvider.h>
//#include <OSPFArea/UNIX_OSPFAreaProvider.h>
//#include <OSPFAreaConfiguration/UNIX_OSPFAreaConfigurationProvider.h>
//#include <OSPFLink/UNIX_OSPFLinkProvider.h>
//#include <OSPFProtocolEndpoint/UNIX_OSPFProtocolEndpointProvider.h>
//#include <OSPFService/UNIX_OSPFServiceProvider.h>
//#include <OSPFServiceCapabilities/UNIX_OSPFServiceCapabilitiesProvider.h>
//#include <OSPFServiceConfiguration/UNIX_OSPFServiceConfigurationProvider.h>
//#include <OSPFVirtualInterface/UNIX_OSPFVirtualInterfaceProvider.h>
//#include <OSProcess/UNIX_OSProcessProvider.h>
//#include <OSVersionCheck/UNIX_OSVersionCheckProvider.h>
//#include <OtherGroupInformation/UNIX_OtherGroupInformationProvider.h>
//#include <OtherOrganizationInformation/UNIX_OtherOrganizationInformationProvider.h>
//#include <OtherOrgUnitInformation/UNIX_OtherOrgUnitInformationProvider.h>
//#include <OtherPersonInformation/UNIX_OtherPersonInformationProvider.h>
//#include <OtherRoleInformation/UNIX_OtherRoleInformationProvider.h>
//#include <OutboundVLAN/UNIX_OutboundVLANProvider.h>
//#include <OwningCollectionElement/UNIX_OwningCollectionElementProvider.h>
//#include <OwningJobElement/UNIX_OwningJobElementProvider.h>
//#include <OwningPrintQueue/UNIX_OwningPrintQueueProvider.h>
//#include <PackageAlarm/UNIX_PackageAlarmProvider.h>
//#include <PackageCooling/UNIX_PackageCoolingProvider.h>
//#include <PackagedComponent/UNIX_PackagedComponentProvider.h>
//#include <PackageInChassis/UNIX_PackageInChassisProvider.h>
//#include <PackageInConnector/UNIX_PackageInConnectorProvider.h>
//#include <PackageInSlot/UNIX_PackageInSlotProvider.h>
//#include <PackageLocation/UNIX_PackageLocationProvider.h>
//#include <PackageTempSensor/UNIX_PackageTempSensorProvider.h>
//#include <PacketConditionInSARule/UNIX_PacketConditionInSARuleProvider.h>
//#include <PacketFilterCondition/UNIX_PacketFilterConditionProvider.h>
//#include <PacketSchedulingService/UNIX_PacketSchedulingServiceProvider.h>
//#include <ParallelController/UNIX_ParallelControllerProvider.h>
//#include <ParametersForMethod/UNIX_ParametersForMethodProvider.h>
//#include <ParameterValueSources/UNIX_ParameterValueSourcesProvider.h>
//#include <ParticipatesInSet/UNIX_ParticipatesInSetProvider.h>
//#include <ParticipatingCS/UNIX_ParticipatingCSProvider.h>
//#include <PassThroughModule/UNIX_PassThroughModuleProvider.h>
//#include <PCIBridge/UNIX_PCIBridgeProvider.h>
//#include <PCIeSwitch/UNIX_PCIeSwitchProvider.h>
//#include <PCIPort/UNIX_PCIPortProvider.h>
//#include <PCIPortGroup/UNIX_PCIPortGroupProvider.h>
//#include <PCMCIAController/UNIX_PCMCIAControllerProvider.h>
//#include <PCVideoController/UNIX_PCVideoControllerProvider.h>
//#include <PeerGatewayForPreconfiguredTunnel/UNIX_PeerGatewayForPreconfiguredTunnelProvider.h>
//#include <PeerGatewayForTunnel/UNIX_PeerGatewayForTunnelProvider.h>
//#include <PeerIDPayloadFilterEntry/UNIX_PeerIDPayloadFilterEntryProvider.h>
//#include <PeerOfSAEndpoint/UNIX_PeerOfSAEndpointProvider.h>
//#include <Person/UNIX_PersonProvider.h>
//#include <PExtentRedundancyComponent/UNIX_PExtentRedundancyComponentProvider.h>
//#include <Phase1SAUsedForPhase2/UNIX_Phase1SAUsedForPhase2Provider.h>
//#include <PhysicalAssetCapabilities/UNIX_PhysicalAssetCapabilitiesProvider.h>
//#include <PhysicalComputerSystemView/UNIX_PhysicalComputerSystemViewProvider.h>
//#include <PhysicalConnector/UNIX_PhysicalConnectorProvider.h>
//#include <PhysicalCredentialAuthentication/UNIX_PhysicalCredentialAuthenticationProvider.h>
//#include <PhysicalExtent/UNIX_PhysicalExtentProvider.h>
//#include <PhysicalLink/UNIX_PhysicalLinkProvider.h>
//#include <PhysicalMedia/UNIX_PhysicalMediaProvider.h>
//#include <PhysicalMediaInLocation/UNIX_PhysicalMediaInLocationProvider.h>
//#include <PhysicalMemory/UNIX_PhysicalMemoryProvider.h>
//#include <PhysicalStatisticalInformation/UNIX_PhysicalStatisticalInformationProvider.h>
//#include <PhysicalStatistics/UNIX_PhysicalStatisticsProvider.h>
//#include <PhysicalTape/UNIX_PhysicalTapeProvider.h>
//#include <PickerElement/UNIX_PickerElementProvider.h>
//#include <PickerForChanger/UNIX_PickerForChangerProvider.h>
//#include <PickerLabelReader/UNIX_PickerLabelReaderProvider.h>
//#include <PickerStatData/UNIX_PickerStatDataProvider.h>
//#include <PickerStatInfo/UNIX_PickerStatInfoProvider.h>
//#include <PlatformWatchdogService/UNIX_PlatformWatchdogServiceProvider.h>
//#include <PlatformWatchdogServiceCapabilities/UNIX_PlatformWatchdogServiceCapabilitiesProvider.h>
//#include <PointingDevice/UNIX_PointingDeviceProvider.h>
//#include <PolicyActionInPolicyAction/UNIX_PolicyActionInPolicyActionProvider.h>
//#include <PolicyActionInPolicyRepository/UNIX_PolicyActionInPolicyRepositoryProvider.h>
//#include <PolicyActionInPolicyRule/UNIX_PolicyActionInPolicyRuleProvider.h>
//#include <PolicyConditionInPolicyCondition/UNIX_PolicyConditionInPolicyConditionProvider.h>
//#include <PolicyConditionInPolicyRepository/UNIX_PolicyConditionInPolicyRepositoryProvider.h>
//#include <PolicyConditionInPolicyRule/UNIX_PolicyConditionInPolicyRuleProvider.h>
//#include <PolicyContainerInPolicyContainer/UNIX_PolicyContainerInPolicyContainerProvider.h>
//#include <PolicyGroup/UNIX_PolicyGroupProvider.h>
//#include <PolicyGroupInPolicyGroup/UNIX_PolicyGroupInPolicyGroupProvider.h>
//#include <PolicyGroupInSystem/UNIX_PolicyGroupInSystemProvider.h>
//#include <PolicyRepository/UNIX_PolicyRepositoryProvider.h>
//#include <PolicyRepositoryInPolicyRepository/UNIX_PolicyRepositoryInPolicyRepositoryProvider.h>
//#include <PolicyRoleCollection/UNIX_PolicyRoleCollectionProvider.h>
//#include <PolicyRoleCollectionInSystem/UNIX_PolicyRoleCollectionInSystemProvider.h>
//#include <PolicyRuleInPolicyGroup/UNIX_PolicyRuleInPolicyGroupProvider.h>
//#include <PolicyRuleInSystem/UNIX_PolicyRuleInSystemProvider.h>
//#include <PolicyRuleValidityPeriod/UNIX_PolicyRuleValidityPeriodProvider.h>
//#include <PolicySetAppliesToElement/UNIX_PolicySetAppliesToElementProvider.h>
//#include <PolicySetComponent/UNIX_PolicySetComponentProvider.h>
//#include <PolicySetInRoleCollection/UNIX_PolicySetInRoleCollectionProvider.h>
//#include <PolicySetValidityPeriod/UNIX_PolicySetValidityPeriodProvider.h>
//#include <PolicyTimePeriodCondition/UNIX_PolicyTimePeriodConditionProvider.h>
//#include <PortActiveConnection/UNIX_PortActiveConnectionProvider.h>
//#include <PortController/UNIX_PortControllerProvider.h>
//#include <PortImplementsEndpoint/UNIX_PortImplementsEndpointProvider.h>
//#include <PortResource/UNIX_PortResourceProvider.h>
//#include <POTSModem/UNIX_POTSModemProvider.h>
//#include <PowerAllocationSettingData/UNIX_PowerAllocationSettingDataProvider.h>
//#include <PowerManagementCapabilities/UNIX_PowerManagementCapabilitiesProvider.h>
//#include <PowerManagementService/UNIX_PowerManagementServiceProvider.h>
//#include <PowerSource/UNIX_PowerSourceProvider.h>
//#include <PowerSupply/UNIX_PowerSupplyProvider.h>
//#include <PowerUtilizationManagementCapabilities/UNIX_PowerUtilizationManagementCapabilitiesProvider.h>
//#include <PowerUtilizationManagementService/UNIX_PowerUtilizationManagementServiceProvider.h>
//#include <PreambleFilter/UNIX_PreambleFilterProvider.h>
//#include <PreambleMarkerService/UNIX_PreambleMarkerServiceProvider.h>
//#include <PrecedenceService/UNIX_PrecedenceServiceProvider.h>
//#include <PreconfiguredTransportAction/UNIX_PreconfiguredTransportActionProvider.h>
//#include <PreconfiguredTunnelAction/UNIX_PreconfiguredTunnelActionProvider.h>
//#include <Printer/UNIX_PrinterProvider.h>
//#include <PrinterServicingJob/UNIX_PrinterServicingJobProvider.h>
//#include <PrinterServicingQueue/UNIX_PrinterServicingQueueProvider.h>
//#include <PrintInputTray/UNIX_PrintInputTrayProvider.h>
//#include <PrintInterpreter/UNIX_PrintInterpreterProvider.h>
//#include <PrintJob/UNIX_PrintJobProvider.h>
//#include <PrintJobFile/UNIX_PrintJobFileProvider.h>
//#include <PrintMarker/UNIX_PrintMarkerProvider.h>
//#include <PrintQueue/UNIX_PrintQueueProvider.h>
//#include <PrintSAP/UNIX_PrintSAPProvider.h>
//#include <PrintService/UNIX_PrintServiceProvider.h>
//#include <PrintSupply/UNIX_PrintSupplyProvider.h>
//#include <Priority8021QMarkerService/UNIX_Priority8021QMarkerServiceProvider.h>
//#include <PrioritySchedulingElement/UNIX_PrioritySchedulingElementProvider.h>
//#include <Privilege/UNIX_PrivilegeProvider.h>
//#include <PrivilegeManagementCapabilities/UNIX_PrivilegeManagementCapabilitiesProvider.h>
//#include <PrivilegeManagementService/UNIX_PrivilegeManagementServiceProvider.h>
//#include <ProcessExecutable/UNIX_ProcessExecutableProvider.h>
//#include <ProcessOfJob/UNIX_ProcessOfJobProvider.h>
//#include <Processor/UNIX_ProcessorProvider.h>
//#include <ProcessorAllocationSettingData/UNIX_ProcessorAllocationSettingDataProvider.h>
//#include <ProcessorCapabilities/UNIX_ProcessorCapabilitiesProvider.h>
//#include <ProcessorCore/UNIX_ProcessorCoreProvider.h>
//#include <ProcessThread/UNIX_ProcessThreadProvider.h>
//#include <Product/UNIX_ProductProvider.h>
//#include <ProductComponent/UNIX_ProductComponentProvider.h>
//#include <ProductElementComponent/UNIX_ProductElementComponentProvider.h>
//#include <ProductFRU/UNIX_ProductFRUProvider.h>
//#include <ProductParentChild/UNIX_ProductParentChildProvider.h>
//#include <ProductPhysicalComponent/UNIX_ProductPhysicalComponentProvider.h>
//#include <ProductPhysicalElements/UNIX_ProductPhysicalElementsProvider.h>
//#include <ProductProductDependency/UNIX_ProductProductDependencyProvider.h>
//#include <ProductServiceComponent/UNIX_ProductServiceComponentProvider.h>
//#include <ProductSoftwareComponent/UNIX_ProductSoftwareComponentProvider.h>
//#include <ProductSoftwareFeatures/UNIX_ProductSoftwareFeaturesProvider.h>
//#include <ProductSupport/UNIX_ProductSupportProvider.h>
//#include <Profile/UNIX_ProfileProvider.h>
//#include <ProtectedExtentBasedOn/UNIX_ProtectedExtentBasedOnProvider.h>
//#include <ProtectedSpaceExtent/UNIX_ProtectedSpaceExtentProvider.h>
//#include <ProtocolAdapter/UNIX_ProtocolAdapterProvider.h>
//#include <ProtocolController/UNIX_ProtocolControllerProvider.h>
//#include <ProtocolControllerAccessesUnit/UNIX_ProtocolControllerAccessesUnitProvider.h>
//#include <ProtocolControllerForPort/UNIX_ProtocolControllerForPortProvider.h>
//#include <ProtocolControllerForUnit/UNIX_ProtocolControllerForUnitProvider.h>
//#include <ProtocolControllerMaskingCapabilities/UNIX_ProtocolControllerMaskingCapabilitiesProvider.h>
//#include <ProtocolService/UNIX_ProtocolServiceProvider.h>
//#include <ProvidesEndpoint/UNIX_ProvidesEndpointProvider.h>
//#include <PSExtentBasedOnPExtent/UNIX_PSExtentBasedOnPExtentProvider.h>
//#include <PublicKeyCertificate/UNIX_PublicKeyCertificateProvider.h>
//#include <PublicKeyManagementService/UNIX_PublicKeyManagementServiceProvider.h>
//#include <PublicPrivateKeyAuthentication/UNIX_PublicPrivateKeyAuthenticationProvider.h>
//#include <PublicPrivateKeyPair/UNIX_PublicPrivateKeyPairProvider.h>
//#include <QoSConditioningSubService/UNIX_QoSConditioningSubServiceProvider.h>
//#include <QoSSubService/UNIX_QoSSubServiceProvider.h>
//#include <QueryCapabilities/UNIX_QueryCapabilitiesProvider.h>
//#include <QueryCondition/UNIX_QueryConditionProvider.h>
//#include <QueueAllocation/UNIX_QueueAllocationProvider.h>
//#include <QueueForPrintService/UNIX_QueueForPrintServiceProvider.h>
//#include <QueueForwardsToPrintSAP/UNIX_QueueForwardsToPrintSAPProvider.h>
//#include <QueueHierarchy/UNIX_QueueHierarchyProvider.h>
//#include <QueueToSchedule/UNIX_QueueToScheduleProvider.h>
//#include <QueuingService/UNIX_QueuingServiceProvider.h>
//#include <Rack/UNIX_RackProvider.h>
//#include <RangeOfIPAddresses/UNIX_RangeOfIPAddressesProvider.h>
//#include <RangesOfConfiguration/UNIX_RangesOfConfigurationProvider.h>
//#include <RealizedOnSide/UNIX_RealizedOnSideProvider.h>
//#include <RealizesAggregatePExtent/UNIX_RealizesAggregatePExtentProvider.h>
//#include <RealizesDiskPartition/UNIX_RealizesDiskPartitionProvider.h>
//#include <RealizesPExtent/UNIX_RealizesPExtentProvider.h>
//#include <RealizesTapePartition/UNIX_RealizesTapePartitionProvider.h>
//#include <RebootAction/UNIX_RebootActionProvider.h>
//#include <RecordAppliesToElement/UNIX_RecordAppliesToElementProvider.h>
//#include <RecordInLog/UNIX_RecordInLogProvider.h>
//#include <RecordLogCapabilities/UNIX_RecordLogCapabilitiesProvider.h>
//#include <REDDropperService/UNIX_REDDropperServiceProvider.h>
//#include <RedundancySet/UNIX_RedundancySetProvider.h>
//#include <ReferencedProfile/UNIX_ReferencedProfileProvider.h>
//#include <ReflectorClientService/UNIX_ReflectorClientServiceProvider.h>
//#include <ReflectorNonClientService/UNIX_ReflectorNonClientServiceProvider.h>
//#include <ReflectorService/UNIX_ReflectorServiceProvider.h>
//#include <Refrigeration/UNIX_RefrigerationProvider.h>
//#include <RegisteredSubProfile/UNIX_RegisteredSubProfileProvider.h>
//#include <RejectConnectionAction/UNIX_RejectConnectionActionProvider.h>
//#include <RelatedSpanningTree/UNIX_RelatedSpanningTreeProvider.h>
//#include <RelatedStatisticalData/UNIX_RelatedStatisticalDataProvider.h>
//#include <RelatedStatistics/UNIX_RelatedStatisticsProvider.h>
//#include <RelatedTransparentBridgingService/UNIX_RelatedTransparentBridgingServiceProvider.h>
//#include <RemoteAccessAvailableToElement/UNIX_RemoteAccessAvailableToElementProvider.h>
//#include <RemoteFileSystem/UNIX_RemoteFileSystemProvider.h>
//#include <RemotePort/UNIX_RemotePortProvider.h>
//#include <RemoveDirectoryAction/UNIX_RemoveDirectoryActionProvider.h>
//#include <RemoveFileAction/UNIX_RemoveFileActionProvider.h>
//#include <ReplaceableProductFRU/UNIX_ReplaceableProductFRUProvider.h>
//#include <ReplacementSet/UNIX_ReplacementSetProvider.h>
//#include <RequireCredentialsFrom/UNIX_RequireCredentialsFromProvider.h>
//#include <ResidesOnExtent/UNIX_ResidesOnExtentProvider.h>
//#include <ResourceAllocationFromPool/UNIX_ResourceAllocationFromPoolProvider.h>
//#include <ResourcePool/UNIX_ResourcePoolProvider.h>
//#include <ResourcePoolConfigurationCapabilities/UNIX_ResourcePoolConfigurationCapabilitiesProvider.h>
//#include <ResourcePoolConfigurationService/UNIX_ResourcePoolConfigurationServiceProvider.h>
//#include <ReusablePolicy/UNIX_ReusablePolicyProvider.h>
//#include <ReusablePolicyContainer/UNIX_ReusablePolicyContainerProvider.h>
//#include <Role/UNIX_RoleProvider.h>
//#include <RoleBasedAuthorizationService/UNIX_RoleBasedAuthorizationServiceProvider.h>
//#include <RoleBasedManagementCapabilities/UNIX_RoleBasedManagementCapabilitiesProvider.h>
//#include <RoleLimitedToTarget/UNIX_RoleLimitedToTargetProvider.h>
//#include <RouteForwardedByService/UNIX_RouteForwardedByServiceProvider.h>
//#include <RoutersInAS/UNIX_RoutersInASProvider.h>
//#include <RoutersInBGPCluster/UNIX_RoutersInBGPClusterProvider.h>
//#include <RoutesBGP/UNIX_RoutesBGPProvider.h>
//#include <RouteUsesEndpoint/UNIX_RouteUsesEndpointProvider.h>
//#include <RoutingPolicy/UNIX_RoutingPolicyProvider.h>
//#include <RoutingProtocolDomain/UNIX_RoutingProtocolDomainProvider.h>
//#include <RoutingProtocolDomainInAS/UNIX_RoutingProtocolDomainInASProvider.h>
//#include <RuleThatGeneratedSA/UNIX_RuleThatGeneratedSAProvider.h>
//#include <RunningOS/UNIX_RunningOSProvider.h>
//#include <SAEndpointConnectionStatistics/UNIX_SAEndpointConnectionStatisticsProvider.h>
//#include <SAEndpointRefreshSettings/UNIX_SAEndpointRefreshSettingsProvider.h>
//#include <SAPAvailableForElement/UNIX_SAPAvailableForElementProvider.h>
//#include <SAPStatistics/UNIX_SAPStatisticsProvider.h>
//#include <Scanner/UNIX_ScannerProvider.h>
//#include <SchedulerUsed/UNIX_SchedulerUsedProvider.h>
//#include <SchedulingServiceToSchedule/UNIX_SchedulingServiceToScheduleProvider.h>
//#include <ScopedSetting/UNIX_ScopedSettingProvider.h>
//#include <SCSIController/UNIX_SCSIControllerProvider.h>
//#include <SCSIInitiatorTargetLogicalUnitPath/UNIX_SCSIInitiatorTargetLogicalUnitPathProvider.h>
//#include <SCSIInterface/UNIX_SCSIInterfaceProvider.h>
//#include <SCSIMultipathConfigurationCapabilities/UNIX_SCSIMultipathConfigurationCapabilitiesProvider.h>
//#include <SCSIMultipathSettings/UNIX_SCSIMultipathSettingsProvider.h>
//#include <SCSIPathConfigurationService/UNIX_SCSIPathConfigurationServiceProvider.h>
//#include <SCSIProtocolController/UNIX_SCSIProtocolControllerProvider.h>
//#include <SCSIProtocolEndpoint/UNIX_SCSIProtocolEndpointProvider.h>
//#include <SCSITargetPortGroup/UNIX_SCSITargetPortGroupProvider.h>
//#include <SDSLModem/UNIX_SDSLModemProvider.h>
//#include <SecuritySensitivity/UNIX_SecuritySensitivityProvider.h>
//#include <SecurityServiceForSystem/UNIX_SecurityServiceForSystemProvider.h>
//#include <SecurityServiceUsesAccount/UNIX_SecurityServiceUsesAccountProvider.h>
//#include <SerialController/UNIX_SerialControllerProvider.h>
//#include <SerialInterface/UNIX_SerialInterfaceProvider.h>
//#include <ServiceAccessURI/UNIX_ServiceAccessURIProvider.h>
//#include <ServiceAffectsElement/UNIX_ServiceAffectsElementProvider.h>
//#include <ServiceAvailableToElement/UNIX_ServiceAvailableToElementProvider.h>
//#include <ServiceProcess/UNIX_ServiceProcessProvider.h>
//#include <ServiceStatistics/UNIX_ServiceStatisticsProvider.h>
//#include <ServiceUsesSecurityService/UNIX_ServiceUsesSecurityServiceProvider.h>
//#include <SettingCheck/UNIX_SettingCheckProvider.h>
//#include <SettingContext/UNIX_SettingContextProvider.h>
//#include <SettingForSystem/UNIX_SettingForSystemProvider.h>
//#include <SettingsDefineCapabilities/UNIX_SettingsDefineCapabilitiesProvider.h>
//#include <SettingsDefineState/UNIX_SettingsDefineStateProvider.h>
//#include <SharedCredential/UNIX_SharedCredentialProvider.h>
//#include <SharedDeviceManagementService/UNIX_SharedDeviceManagementServiceProvider.h>
//#include <SharedSecret/UNIX_SharedSecretProvider.h>
//#include <SharedSecretAuthentication/UNIX_SharedSecretAuthenticationProvider.h>
//#include <SharedSecretIsShared/UNIX_SharedSecretIsSharedProvider.h>
//#include <SharedSecretService/UNIX_SharedSecretServiceProvider.h>
//#include <SharingDependency/UNIX_SharingDependencyProvider.h>
//#include <Slot/UNIX_SlotProvider.h>
//#include <SlotInSlot/UNIX_SlotInSlotProvider.h>
//#include <Snapshot/UNIX_SnapshotProvider.h>
//#include <SnapshotOfExtent/UNIX_SnapshotOfExtentProvider.h>
//#include <SnapshotOfVirtualSystem/UNIX_SnapshotOfVirtualSystemProvider.h>
//#include <SoftwareElementActions/UNIX_SoftwareElementActionsProvider.h>
//#include <SoftwareElementChecks/UNIX_SoftwareElementChecksProvider.h>
//#include <SoftwareElementComponent/UNIX_SoftwareElementComponentProvider.h>
//#include <SoftwareElementSAPImplementation/UNIX_SoftwareElementSAPImplementationProvider.h>
//#include <SoftwareElementServiceImplementation/UNIX_SoftwareElementServiceImplementationProvider.h>
//#include <SoftwareElementVersionCheck/UNIX_SoftwareElementVersionCheckProvider.h>
//#include <SoftwareFeatureComponent/UNIX_SoftwareFeatureComponentProvider.h>
//#include <SoftwareFeatureSAPImplementation/UNIX_SoftwareFeatureSAPImplementationProvider.h>
//#include <SoftwareFeatureServiceImplementation/UNIX_SoftwareFeatureServiceImplementationProvider.h>
//#include <SoftwareIdentity/UNIX_SoftwareIdentityProvider.h>
//#include <SoftwareInstallationService/UNIX_SoftwareInstallationServiceProvider.h>
//#include <SoftwareInstallationServiceCapabilities/UNIX_SoftwareInstallationServiceCapabilitiesProvider.h>
//#include <SourceRoutingService/UNIX_SourceRoutingServiceProvider.h>
//#include <SpanningTreeService/UNIX_SpanningTreeServiceProvider.h>
//#include <SpanningTreeStatistics/UNIX_SpanningTreeStatisticsProvider.h>
//#include <Spared/UNIX_SparedProvider.h>
//#include <SpareGroup/UNIX_SpareGroupProvider.h>
//#include <Specific802dot1QVLANService/UNIX_Specific802dot1QVLANServiceProvider.h>
//#include <SSAController/UNIX_SSAControllerProvider.h>
//#include <SSHCapabilities/UNIX_SSHCapabilitiesProvider.h>
//#include <SSHProtocolEndpoint/UNIX_SSHProtocolEndpointProvider.h>
//#include <SSHSettingData/UNIX_SSHSettingDataProvider.h>
//#include <StaticForwardingEntry/UNIX_StaticForwardingEntryProvider.h>
//#include <StaticIPAssignmentSettingData/UNIX_StaticIPAssignmentSettingDataProvider.h>
//#include <StatisticalRuntimeOverview/UNIX_StatisticalRuntimeOverviewProvider.h>
//#include <StatisticalSetting/UNIX_StatisticalSettingProvider.h>
//#include <StatisticsCapabilities/UNIX_StatisticsCapabilitiesProvider.h>
//#include <StatisticsCollection/UNIX_StatisticsCollectionProvider.h>
//#include <StatisticsService/UNIX_StatisticsServiceProvider.h>
//#include <StorageAllocationSettingData/UNIX_StorageAllocationSettingDataProvider.h>
//#include <StorageCapabilities/UNIX_StorageCapabilitiesProvider.h>
//#include <StorageClientSettingData/UNIX_StorageClientSettingDataProvider.h>
//#include <StorageConfigurationCapabilities/UNIX_StorageConfigurationCapabilitiesProvider.h>
//#include <StorageConfigurationService/UNIX_StorageConfigurationServiceProvider.h>
//#include <StorageDefect/UNIX_StorageDefectProvider.h>
//#include <StorageError/UNIX_StorageErrorProvider.h>
//#include <StorageHardwareID/UNIX_StorageHardwareIDProvider.h>
//#include <StorageHardwareIDManagementService/UNIX_StorageHardwareIDManagementServiceProvider.h>
//#include <StorageLibrary/UNIX_StorageLibraryProvider.h>
//#include <StorageMediaLocation/UNIX_StorageMediaLocationProvider.h>
//#include <StoragePool/UNIX_StoragePoolProvider.h>
//#include <StorageRedundancyGroup/UNIX_StorageRedundancyGroupProvider.h>
//#include <StorageRedundancySet/UNIX_StorageRedundancySetProvider.h>
//#include <StorageReplicationCapabilities/UNIX_StorageReplicationCapabilitiesProvider.h>
//#include <StorageSetting/UNIX_StorageSettingProvider.h>
//#include <StorageSettingsAssociatedToCapabilities/UNIX_StorageSettingsAssociatedToCapabilitiesProvider.h>
//#include <StorageSettingsGeneratedFromCapabilities/UNIX_StorageSettingsGeneratedFromCapabilitiesProvider.h>
//#include <StorageSettingWithHints/UNIX_StorageSettingWithHintsProvider.h>
//#include <StorageVolume/UNIX_StorageVolumeProvider.h>
//#include <SubProfileRequiresProfile/UNIX_SubProfileRequiresProfileProvider.h>
//#include <SuppliesPower/UNIX_SuppliesPowerProvider.h>
//#include <SupportAccess/UNIX_SupportAccessProvider.h>
//#include <SwapSpaceCheck/UNIX_SwapSpaceCheckProvider.h>
//#include <Switchable/UNIX_SwitchableProvider.h>
//#include <SwitchesAmong/UNIX_SwitchesAmongProvider.h>
//#include <SwitchPort/UNIX_SwitchPortProvider.h>
//#include <SwitchPortDynamicForwarding/UNIX_SwitchPortDynamicForwardingProvider.h>
//#include <SwitchPortPair/UNIX_SwitchPortPairProvider.h>
//#include <SwitchPortSourceRouting/UNIX_SwitchPortSourceRoutingProvider.h>
//#include <SwitchPortSourceRoutingStatistics/UNIX_SwitchPortSourceRoutingStatisticsProvider.h>
//#include <SwitchPortSpanningTree/UNIX_SwitchPortSpanningTreeProvider.h>
//#include <SwitchPortSpanningTreeStatistics/UNIX_SwitchPortSpanningTreeStatisticsProvider.h>
//#include <SwitchPortStaticForwarding/UNIX_SwitchPortStaticForwardingProvider.h>
//#include <SwitchPortStatistics/UNIX_SwitchPortStatisticsProvider.h>
//#include <SwitchPortTransparentBridgingStatistics/UNIX_SwitchPortTransparentBridgingStatisticsProvider.h>
//#include <SwitchService/UNIX_SwitchServiceProvider.h>
//#include <SwitchServiceSourceRouting/UNIX_SwitchServiceSourceRoutingProvider.h>
//#include <SwitchServiceSpanningTree/UNIX_SwitchServiceSpanningTreeProvider.h>
//#include <SwitchServiceTransparentBridging/UNIX_SwitchServiceTransparentBridgingProvider.h>
//#include <SwitchServiceVLAN/UNIX_SwitchServiceVLANProvider.h>
//#include <SymbolicLink/UNIX_SymbolicLinkProvider.h>
//#include <Synchronized/UNIX_SynchronizedProvider.h>
//#include <SystemAdministrator/UNIX_SystemAdministratorProvider.h>
//#include <SystemAdministratorGroup/UNIX_SystemAdministratorGroupProvider.h>
//#include <SystemAdministratorRole/UNIX_SystemAdministratorRoleProvider.h>
//#include <SystemBIOS/UNIX_SystemBIOSProvider.h>
//#include <SystemBusCard/UNIX_SystemBusCardProvider.h>
//#include <SystemConfiguration/UNIX_SystemConfigurationProvider.h>
//#include <SystemIdentification/UNIX_SystemIdentificationProvider.h>
//#include <SystemInNamespace/UNIX_SystemInNamespaceProvider.h>
//#include <SystemPartition/UNIX_SystemPartitionProvider.h>
//#include <SystemSetting/UNIX_SystemSettingProvider.h>
//#include <SystemSettingContext/UNIX_SystemSettingContextProvider.h>
//#include <SystemStatisticalInformation/UNIX_SystemStatisticalInformationProvider.h>
//#include <SystemStatistics/UNIX_SystemStatisticsProvider.h>
//#include <Tachometer/UNIX_TachometerProvider.h>
//#include <TapeDrive/UNIX_TapeDriveProvider.h>
//#include <TapePartition/UNIX_TapePartitionProvider.h>
//#include <TapePartitionOnSurface/UNIX_TapePartitionOnSurfaceProvider.h>
//#include <TCPProtocolEndpoint/UNIX_TCPProtocolEndpointProvider.h>
//#include <TemperatureSensor/UNIX_TemperatureSensorProvider.h>
//#include <TextRedirectionSAP/UNIX_TextRedirectionSAPProvider.h>
//#include <TextRedirectionService/UNIX_TextRedirectionServiceProvider.h>
//#include <ThresholdIndication/UNIX_ThresholdIndicationProvider.h>
//#include <TimeService/UNIX_TimeServiceProvider.h>
//#include <TimeZone/UNIX_TimeZoneProvider.h>
//#include <ToDirectoryAction/UNIX_ToDirectoryActionProvider.h>
//#include <ToDirectorySpecification/UNIX_ToDirectorySpecificationProvider.h>
//#include <TokenBucketMeterService/UNIX_TokenBucketMeterServiceProvider.h>
//#include <TokenRingAdapter/UNIX_TokenRingAdapterProvider.h>
//#include <TokenRingPort/UNIX_TokenRingPortProvider.h>
//#include <TokenRingPortStatistics/UNIX_TokenRingPortStatisticsProvider.h>
//#include <ToSMarkerService/UNIX_ToSMarkerServiceProvider.h>
//#include <TraceLevelType/UNIX_TraceLevelTypeProvider.h>
//#include <TransformOfPreconfiguredAction/UNIX_TransformOfPreconfiguredActionProvider.h>
//#include <TransformOfSecurityAssociation/UNIX_TransformOfSecurityAssociationProvider.h>
//#include <TransparentBridgingDynamicForwarding/UNIX_TransparentBridgingDynamicForwardingProvider.h>
//#include <TransparentBridgingService/UNIX_TransparentBridgingServiceProvider.h>
//#include <TransparentBridgingStaticForwarding/UNIX_TransparentBridgingStaticForwardingProvider.h>
//#include <TransparentBridgingStatistics/UNIX_TransparentBridgingStatisticsProvider.h>
//#include <TrustHierarchy/UNIX_TrustHierarchyProvider.h>
//#include <UDPProtocolEndpoint/UNIX_UDPProtocolEndpointProvider.h>
//#include <Unimodem/UNIX_UnimodemProvider.h>
//#include <UninterruptiblePowerSupply/UNIX_UninterruptiblePowerSupplyProvider.h>
#include <ComputerSystem/UNIX_ComputerSystemProvider.h>
//#include <DeviceFile/UNIX_DeviceFileProvider.h>
//#include <UnixDirectory/UNIX_UnixDirectoryProvider.h>
//#include <File/UNIX_FileProvider.h>
//#include <LocalFileSystem/UNIX_LocalFileSystemProvider.h>
#include <Process/UNIX_ProcessProvider.h>
//#include <ProcessStatisticalInformation/UNIX_ProcessStatisticalInformationProvider.h>
//#include <ProcessStatistics/UNIX_ProcessStatisticsProvider.h>
//#include <Thread/UNIX_ThreadProvider.h>
//#include <UnsignedCredential/UNIX_UnsignedCredentialProvider.h>
//#include <UnsignedPublicKey/UNIX_UnsignedPublicKeyProvider.h>
//#include <USBConnection/UNIX_USBConnectionProvider.h>
//#include <USBController/UNIX_USBControllerProvider.h>
//#include <USBControllerHasHub/UNIX_USBControllerHasHubProvider.h>
//#include <USBDevice/UNIX_USBDeviceProvider.h>
//#include <USBHub/UNIX_USBHubProvider.h>
//#include <USBPort/UNIX_USBPortProvider.h>
//#include <USBPortOnHub/UNIX_USBPortOnHubProvider.h>
//#include <USBRedirectionCapabilities/UNIX_USBRedirectionCapabilitiesProvider.h>
//#include <USBRedirectionSAP/UNIX_USBRedirectionSAPProvider.h>
//#include <USBRedirectionService/UNIX_USBRedirectionServiceProvider.h>
//#include <UseOfLog/UNIX_UseOfLogProvider.h>
//#include <UseOfMessageLog/UNIX_UseOfMessageLogProvider.h>
//#include <UserContact/UNIX_UserContactProvider.h>
//#include <UsersAccess/UNIX_UsersAccessProvider.h>
//#include <UsersAccount/UNIX_UsersAccountProvider.h>
//#include <UsersCredential/UNIX_UsersCredentialProvider.h>
//#include <VDSLModem/UNIX_VDSLModemProvider.h>
//#include <VendorPolicyAction/UNIX_VendorPolicyActionProvider.h>
//#include <VendorPolicyCondition/UNIX_VendorPolicyConditionProvider.h>
//#include <VerificationService/UNIX_VerificationServiceProvider.h>
//#include <VersionCompatibilityCheck/UNIX_VersionCompatibilityCheckProvider.h>
//#include <VideoBIOSElement/UNIX_VideoBIOSElementProvider.h>
//#include <VideoBIOSFeature/UNIX_VideoBIOSFeatureProvider.h>
//#include <VideoBIOSFeatureVideoBIOSElements/UNIX_VideoBIOSFeatureVideoBIOSElementsProvider.h>
//#include <VideoControllerResolution/UNIX_VideoControllerResolutionProvider.h>
//#include <VideoHead/UNIX_VideoHeadProvider.h>
//#include <VideoHeadResolution/UNIX_VideoHeadResolutionProvider.h>
//#include <View/UNIX_ViewProvider.h>
//#include <VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.h>
//#include <VirtualEthernetSwitchSettingData/UNIX_VirtualEthernetSwitchSettingDataProvider.h>
//#include <VirtualSystemManagementCapabilities/UNIX_VirtualSystemManagementCapabilitiesProvider.h>
//#include <VirtualSystemManagementService/UNIX_VirtualSystemManagementServiceProvider.h>
//#include <VirtualSystemMigrationSettingData/UNIX_VirtualSystemMigrationSettingDataProvider.h>
//#include <VirtualSystemSettingData/UNIX_VirtualSystemSettingDataProvider.h>
//#include <VirtualSystemSettingDataComponent/UNIX_VirtualSystemSettingDataComponentProvider.h>
//#include <VirtualSystemSnapshotCapabilities/UNIX_VirtualSystemSnapshotCapabilitiesProvider.h>
//#include <VirtualSystemSnapshotService/UNIX_VirtualSystemSnapshotServiceProvider.h>
//#include <VirtualSystemSnapshotServiceCapabilities/UNIX_VirtualSystemSnapshotServiceCapabilitiesProvider.h>
//#include <VLAN/UNIX_VLANProvider.h>
//#include <VLANEndpoint/UNIX_VLANEndpointProvider.h>
//#include <VLANEndpointCapabilities/UNIX_VLANEndpointCapabilitiesProvider.h>
//#include <VLANEndpointSettingData/UNIX_VLANEndpointSettingDataProvider.h>
//#include <VLANFor/UNIX_VLANForProvider.h>
//#include <VLANService/UNIX_VLANServiceProvider.h>
//#include <VolatileStorage/UNIX_VolatileStorageProvider.h>
//#include <VoltageSensor/UNIX_VoltageSensorProvider.h>
//#include <VolumeSet/UNIX_VolumeSetProvider.h>
//#include <VolumeSetBasedOnPSExtent/UNIX_VolumeSetBasedOnPSExtentProvider.h>
//#include <WakeUpService/UNIX_WakeUpServiceProvider.h>
//#include <WakeUpServiceOnModem/UNIX_WakeUpServiceOnModemProvider.h>
//#include <WakeUpServiceOnNetworkAdapter/UNIX_WakeUpServiceOnNetworkAdapterProvider.h>
//#include <WakeUpServiceOnNetworkPort/UNIX_WakeUpServiceOnNetworkPortProvider.h>
//#include <Watchdog/UNIX_WatchdogProvider.h>
//#include <WeightedREDDropperService/UNIX_WeightedREDDropperServiceProvider.h>
//#include <WiFiEndpoint/UNIX_WiFiEndpointProvider.h>
//#include <WiFiEndpointCapabilities/UNIX_WiFiEndpointCapabilitiesProvider.h>
//#include <WiFiEndpointSettings/UNIX_WiFiEndpointSettingsProvider.h>
//#include <WiFiNetworkDetectionSettings/UNIX_WiFiNetworkDetectionSettingsProvider.h>
//#include <WiFiPort/UNIX_WiFiPortProvider.h>
//#include <WiFiPortCapabilities/UNIX_WiFiPortCapabilitiesProvider.h>
//#include <WiFiPortConfigurationService/UNIX_WiFiPortConfigurationServiceProvider.h>
//#include <WiFiRadio/UNIX_WiFiRadioProvider.h>
//#include <WORMDrive/UNIX_WORMDriveProvider.h>
//#include <WRRSchedulingElement/UNIX_WRRSchedulingElementProvider.h>
//#include <X509Certificate/UNIX_X509CertificateProvider.h>
//#include <X509CredentialFilterEntry/UNIX_X509CredentialFilterEntryProvider.h>
//#include <X509CRL/UNIX_X509CRLProvider.h>
//#include <Zone/UNIX_ZoneProvider.h>
//#include <ZoneCapabilities/UNIX_ZoneCapabilitiesProvider.h>
//#include <ZoneMembershipSettingData/UNIX_ZoneMembershipSettingDataProvider.h>
//#include <ZoneService/UNIX_ZoneServiceProvider.h>
//#include <ZoneSet/UNIX_ZoneSetProvider.h>
//#include <ApplicationSystem/UNIX_ApplicationSystemProvider.h>
//#include <FileSystem/UNIX_FileSystemProvider.h>
//#include <SoftwareElement/UNIX_SoftwareElementProvider.h>
//#include <SoftwareFeature/UNIX_SoftwareFeatureProvider.h>



extern "C"
PEGASUS_EXPORT CIMProvider* PegasusCreateProvider(const String& providerName)
{
	if (String::equalNoCase(providerName, CIMHelper::EmptyString)) return NULL;
	//else if (String::equalNoCase(providerName, "UNIX_AbstractIndicationSubscriptionProvider")) return new UNIX_AbstractIndicationSubscriptionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AcceptCredentialFromProvider")) return new UNIX_AcceptCredentialFromProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AccessControlInformationProvider")) return new UNIX_AccessControlInformationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AccessLabelReaderProvider")) return new UNIX_AccessLabelReaderProvider();
	else if (String::equalNoCase(providerName, "UNIX_AccountProvider")) return new UNIX_AccountProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AccountAuthenticationProvider")) return new UNIX_AccountAuthenticationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AccountIdentityProvider")) return new UNIX_AccountIdentityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AccountManagementCapabilitiesProvider")) return new UNIX_AccountManagementCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AccountManagementServiceProvider")) return new UNIX_AccountManagementServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AccountMapsToAccountProvider")) return new UNIX_AccountMapsToAccountProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AccountOnSystemProvider")) return new UNIX_AccountOnSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AccountSettingDataProvider")) return new UNIX_AccountSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ActionSequenceProvider")) return new UNIX_ActionSequenceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ActiveConnectionProvider")) return new UNIX_ActiveConnectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ActsAsSpareProvider")) return new UNIX_ActsAsSpareProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AdapterActiveConnectionProvider")) return new UNIX_AdapterActiveConnectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AdjacentSlotsProvider")) return new UNIX_AdjacentSlotsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AdministrativeDistanceProvider")) return new UNIX_AdministrativeDistanceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ADSLModemProvider")) return new UNIX_ADSLModemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AffectedJobElementProvider")) return new UNIX_AffectedJobElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AFRelatedServicesProvider")) return new UNIX_AFRelatedServicesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AFServiceProvider")) return new UNIX_AFServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AggregatePExtentProvider")) return new UNIX_AggregatePExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AggregatePSExtentProvider")) return new UNIX_AggregatePSExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AggregatePSExtentBasedOnAggregatePExtentProvider")) return new UNIX_AggregatePSExtentBasedOnAggregatePExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AggregatePSExtentBasedOnPExtentProvider")) return new UNIX_AggregatePSExtentBasedOnPExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AggregateRedundancyComponentProvider")) return new UNIX_AggregateRedundancyComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AggregationMetricDefinitionProvider")) return new UNIX_AggregationMetricDefinitionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AggregationMetricValueProvider")) return new UNIX_AggregationMetricValueProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AGPSoftwareFeatureProvider")) return new UNIX_AGPSoftwareFeatureProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AGPVideoControllerProvider")) return new UNIX_AGPVideoControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AHTransformProvider")) return new UNIX_AHTransformProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AlarmDeviceProvider")) return new UNIX_AlarmDeviceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AlarmDeviceCapabilitiesProvider")) return new UNIX_AlarmDeviceCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AlertInstIndicationProvider")) return new UNIX_AlertInstIndicationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AllocatedDMAProvider")) return new UNIX_AllocatedDMAProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AllocatedFromStoragePoolProvider")) return new UNIX_AllocatedFromStoragePoolProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AllocatedResourceProvider")) return new UNIX_AllocatedResourceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AllocationCapabilitiesProvider")) return new UNIX_AllocationCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AllocationSchedulingElementProvider")) return new UNIX_AllocationSchedulingElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ApplicationSystemDependencyProvider")) return new UNIX_ApplicationSystemDependencyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ApplicationSystemDirectoryProvider")) return new UNIX_ApplicationSystemDirectoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ApplicationSystemHierarchyProvider")) return new UNIX_ApplicationSystemHierarchyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ApplicationSystemSoftwareFeatureProvider")) return new UNIX_ApplicationSystemSoftwareFeatureProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ArchitectureCheckProvider")) return new UNIX_ArchitectureCheckProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AreaOfConfigurationProvider")) return new UNIX_AreaOfConfigurationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ASBGPEndpointsProvider")) return new UNIX_ASBGPEndpointsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssignedIdentityProvider")) return new UNIX_AssignedIdentityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedAlarmProvider")) return new UNIX_AssociatedAlarmProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedBatteryProvider")) return new UNIX_AssociatedBatteryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedBlockStatisticsManifestCollectionProvider")) return new UNIX_AssociatedBlockStatisticsManifestCollectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedCacheMemoryProvider")) return new UNIX_AssociatedCacheMemoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedComponentExtentProvider")) return new UNIX_AssociatedComponentExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedCoolingProvider")) return new UNIX_AssociatedCoolingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedDatabaseSystemProvider")) return new UNIX_AssociatedDatabaseSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedIndicatorLEDProvider")) return new UNIX_AssociatedIndicatorLEDProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedJobMethodResultProvider")) return new UNIX_AssociatedJobMethodResultProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedNextHopProvider")) return new UNIX_AssociatedNextHopProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedPrivilegeProvider")) return new UNIX_AssociatedPrivilegeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedProcessorMemoryProvider")) return new UNIX_AssociatedProcessorMemoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedProtocolControllerProvider")) return new UNIX_AssociatedProtocolControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedRemainingExtentProvider")) return new UNIX_AssociatedRemainingExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedSupplyCurrentSensorProvider")) return new UNIX_AssociatedSupplyCurrentSensorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AssociatedSupplyVoltageSensorProvider")) return new UNIX_AssociatedSupplyVoltageSensorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AuthenticateForUseProvider")) return new UNIX_AuthenticateForUseProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AuthenticationRequirementProvider")) return new UNIX_AuthenticationRequirementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AuthenticationRuleProvider")) return new UNIX_AuthenticationRuleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AuthenticationTargetProvider")) return new UNIX_AuthenticationTargetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AuthorizationServiceProvider")) return new UNIX_AuthorizationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AuthorizationSubjectProvider")) return new UNIX_AuthorizationSubjectProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AuthorizationTargetProvider")) return new UNIX_AuthorizationTargetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AuthorizedPrivilegeProvider")) return new UNIX_AuthorizedPrivilegeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AuthorizedSubjectProvider")) return new UNIX_AuthorizedSubjectProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AuthorizedTargetProvider")) return new UNIX_AuthorizedTargetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AuthorizedUseProvider")) return new UNIX_AuthorizedUseProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AutonomousSystemProvider")) return new UNIX_AutonomousSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_AverageRateMeterServiceProvider")) return new UNIX_AverageRateMeterServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BaseMetricValueProvider")) return new UNIX_BaseMetricValueProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BatteryProvider")) return new UNIX_BatteryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPAdminDistanceProvider")) return new UNIX_BGPAdminDistanceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPAttributesProvider")) return new UNIX_BGPAttributesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPAttributesForRouteProvider")) return new UNIX_BGPAttributesForRouteProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPClusterProvider")) return new UNIX_BGPClusterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPClustersInASProvider")) return new UNIX_BGPClustersInASProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPEndpointStatisticsProvider")) return new UNIX_BGPEndpointStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPIPRouteProvider")) return new UNIX_BGPIPRouteProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPPathAttributesProvider")) return new UNIX_BGPPathAttributesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPPeerGroupProvider")) return new UNIX_BGPPeerGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPPeerGroupServiceProvider")) return new UNIX_BGPPeerGroupServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPPeerUsesRouteMapProvider")) return new UNIX_BGPPeerUsesRouteMapProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPProtocolEndpointProvider")) return new UNIX_BGPProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPRouteMapProvider")) return new UNIX_BGPRouteMapProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPRouteMapsInRoutingPolicyProvider")) return new UNIX_BGPRouteMapsInRoutingPolicyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPRoutingPolicyProvider")) return new UNIX_BGPRoutingPolicyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPServiceProvider")) return new UNIX_BGPServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPServiceAttributesProvider")) return new UNIX_BGPServiceAttributesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPServiceStatisticsProvider")) return new UNIX_BGPServiceStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BGPStatisticsProvider")) return new UNIX_BGPStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BinarySensorProvider")) return new UNIX_BinarySensorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BiometricAuthenticationProvider")) return new UNIX_BiometricAuthenticationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BIOSElementProvider")) return new UNIX_BIOSElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BIOSEnumerationProvider")) return new UNIX_BIOSEnumerationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BIOSFeatureProvider")) return new UNIX_BIOSFeatureProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BIOSFeatureBIOSElementsProvider")) return new UNIX_BIOSFeatureBIOSElementsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BIOSIntegerProvider")) return new UNIX_BIOSIntegerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BIOSLoadedInNVProvider")) return new UNIX_BIOSLoadedInNVProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BIOSPasswordProvider")) return new UNIX_BIOSPasswordProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BIOSServiceProvider")) return new UNIX_BIOSServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BIOSServiceCapabilitiesProvider")) return new UNIX_BIOSServiceCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BIOSStringProvider")) return new UNIX_BIOSStringProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BlockStatisticsCapabilitiesProvider")) return new UNIX_BlockStatisticsCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BlockStatisticsManifestProvider")) return new UNIX_BlockStatisticsManifestProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BlockStatisticsManifestCollectionProvider")) return new UNIX_BlockStatisticsManifestCollectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BlockStatisticsServiceProvider")) return new UNIX_BlockStatisticsServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BlockStorageStatisticalDataProvider")) return new UNIX_BlockStorageStatisticalDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BootConfigSettingProvider")) return new UNIX_BootConfigSettingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BootOSFromFSProvider")) return new UNIX_BootOSFromFSProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BootSAPProvider")) return new UNIX_BootSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BootServiceProvider")) return new UNIX_BootServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BootServiceAccessBySAPProvider")) return new UNIX_BootServiceAccessBySAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BootServiceCapabilitiesProvider")) return new UNIX_BootServiceCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BootSettingDataProvider")) return new UNIX_BootSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BootSourceSettingProvider")) return new UNIX_BootSourceSettingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BoundedPrioritySchedulingElementProvider")) return new UNIX_BoundedPrioritySchedulingElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_BufferPoolProvider")) return new UNIX_BufferPoolProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CableModemProvider")) return new UNIX_CableModemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CacheMemoryProvider")) return new UNIX_CacheMemoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CAHasPublicCertificateProvider")) return new UNIX_CAHasPublicCertificateProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CalculatedRoutesProvider")) return new UNIX_CalculatedRoutesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CalculatesAmongProvider")) return new UNIX_CalculatesAmongProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CalculationBasedOnQueueProvider")) return new UNIX_CalculationBasedOnQueueProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CalculationServiceForDropperProvider")) return new UNIX_CalculationServiceForDropperProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CardProvider")) return new UNIX_CardProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CardInSlotProvider")) return new UNIX_CardInSlotProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CardOnCardProvider")) return new UNIX_CardOnCardProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CASignsPublicKeyCertificateProvider")) return new UNIX_CASignsPublicKeyCertificateProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CDROMDriveProvider")) return new UNIX_CDROMDriveProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CertificateAuthorityProvider")) return new UNIX_CertificateAuthorityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CertificateManagementCapabilitiesProvider")) return new UNIX_CertificateManagementCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CertificateManagementServiceProvider")) return new UNIX_CertificateManagementServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ChangerDeviceProvider")) return new UNIX_ChangerDeviceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ChassisProvider")) return new UNIX_ChassisProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ChassisInRackProvider")) return new UNIX_ChassisInRackProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ChipProvider")) return new UNIX_ChipProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CIMOMStatisticalDataProvider")) return new UNIX_CIMOMStatisticalDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CIMXMLCommunicationMechanismProvider")) return new UNIX_CIMXMLCommunicationMechanismProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClassCreationProvider")) return new UNIX_ClassCreationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClassDeletionProvider")) return new UNIX_ClassDeletionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClassifierElementProvider")) return new UNIX_ClassifierElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClassifierElementInClassifierServiceProvider")) return new UNIX_ClassifierElementInClassifierServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClassifierElementUsesFilterListProvider")) return new UNIX_ClassifierElementUsesFilterListProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClassifierFilterSetProvider")) return new UNIX_ClassifierFilterSetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClassifierServiceProvider")) return new UNIX_ClassifierServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClassModificationProvider")) return new UNIX_ClassModificationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CLPCapabilitiesProvider")) return new UNIX_CLPCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CLPProtocolEndpointProvider")) return new UNIX_CLPProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CLPSettingDataProvider")) return new UNIX_CLPSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClusterProvider")) return new UNIX_ClusterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClusteringSAPProvider")) return new UNIX_ClusteringSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClusteringServiceProvider")) return new UNIX_ClusteringServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ClusterServiceAccessBySAPProvider")) return new UNIX_ClusterServiceAccessBySAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CollectedBufferPoolProvider")) return new UNIX_CollectedBufferPoolProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CollectedCollectionsProvider")) return new UNIX_CollectedCollectionsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CollectedSoftwareElementsProvider")) return new UNIX_CollectedSoftwareElementsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CollectedSoftwareFeaturesProvider")) return new UNIX_CollectedSoftwareFeaturesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CollectionConfigurationProvider")) return new UNIX_CollectionConfigurationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CollectionInOrganizationProvider")) return new UNIX_CollectionInOrganizationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CollectionInSystemProvider")) return new UNIX_CollectionInSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CollectionOfSensorsProvider")) return new UNIX_CollectionOfSensorsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CollectionSettingProvider")) return new UNIX_CollectionSettingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CommMechanismForAdapterProvider")) return new UNIX_CommMechanismForAdapterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CommMechanismForManagerProvider")) return new UNIX_CommMechanismForManagerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CommMechanismForObjectManagerAdapterProvider")) return new UNIX_CommMechanismForObjectManagerAdapterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CommonDatabaseProvider")) return new UNIX_CommonDatabaseProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CommonDatabaseCapabilitiesProvider")) return new UNIX_CommonDatabaseCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CommonDatabaseSettingDataProvider")) return new UNIX_CommonDatabaseSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CommonDatabaseStatisticsProvider")) return new UNIX_CommonDatabaseStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CompatibleProductProvider")) return new UNIX_CompatibleProductProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ComponentCSProvider")) return new UNIX_ComponentCSProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CompositeExtentProvider")) return new UNIX_CompositeExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CompositeExtentBasedOnProvider")) return new UNIX_CompositeExtentBasedOnProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CompoundPolicyActionProvider")) return new UNIX_CompoundPolicyActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CompoundPolicyConditionProvider")) return new UNIX_CompoundPolicyConditionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ComputerSystemDMAProvider")) return new UNIX_ComputerSystemDMAProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ComputerSystemIRQProvider")) return new UNIX_ComputerSystemIRQProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ComputerSystemMappedIOProvider")) return new UNIX_ComputerSystemMappedIOProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ComputerSystemMemoryProvider")) return new UNIX_ComputerSystemMemoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ComputerSystemNodeCapabilitiesProvider")) return new UNIX_ComputerSystemNodeCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ComputerSystemPackageProvider")) return new UNIX_ComputerSystemPackageProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ComputerSystemProcessorProvider")) return new UNIX_ComputerSystemProcessorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConcreteCollectionProvider")) return new UNIX_ConcreteCollectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConcreteComponentProvider")) return new UNIX_ConcreteComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConcreteDependencyProvider")) return new UNIX_ConcreteDependencyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConcreteIdentityProvider")) return new UNIX_ConcreteIdentityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConcreteJobProvider")) return new UNIX_ConcreteJobProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConditioningServiceOnEndpointProvider")) return new UNIX_ConditioningServiceOnEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConfederationProvider")) return new UNIX_ConfederationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConfigurationProvider")) return new UNIX_ConfigurationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConfigurationCapacityProvider")) return new UNIX_ConfigurationCapacityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConfigurationComponentProvider")) return new UNIX_ConfigurationComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConfigurationForSystemProvider")) return new UNIX_ConfigurationForSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConfigurationReportingServiceProvider")) return new UNIX_ConfigurationReportingServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConnectedToProvider")) return new UNIX_ConnectedToProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConnectivityMembershipSettingDataProvider")) return new UNIX_ConnectivityMembershipSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ConnectorOnPackageProvider")) return new UNIX_ConnectorOnPackageProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ContainedDomainProvider")) return new UNIX_ContainedDomainProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ContainedLocationProvider")) return new UNIX_ContainedLocationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ContainedProposalProvider")) return new UNIX_ContainedProposalProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ContainedTransformProvider")) return new UNIX_ContainedTransformProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ControllerConfigurationServiceProvider")) return new UNIX_ControllerConfigurationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CopyFileActionProvider")) return new UNIX_CopyFileActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CorrespondingSettingDataRecordProvider")) return new UNIX_CorrespondingSettingDataRecordProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CorrespondingSettingsRecordProvider")) return new UNIX_CorrespondingSettingsRecordProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CreateDirectoryActionProvider")) return new UNIX_CreateDirectoryActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CredentialContextProvider")) return new UNIX_CredentialContextProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CredentialManagementCapabilitiesProvider")) return new UNIX_CredentialManagementCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CredentialManagementSAPProvider")) return new UNIX_CredentialManagementSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CredentialStoreProvider")) return new UNIX_CredentialStoreProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CurrentSensorProvider")) return new UNIX_CurrentSensorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_CurrentTimeProvider")) return new UNIX_CurrentTimeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseAdministratorProvider")) return new UNIX_DatabaseAdministratorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseControlFileProvider")) return new UNIX_DatabaseControlFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseFileProvider")) return new UNIX_DatabaseFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseParameterProvider")) return new UNIX_DatabaseParameterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseResourceStatisticsProvider")) return new UNIX_DatabaseResourceStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseSegmentProvider")) return new UNIX_DatabaseSegmentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseSegmentSettingDataProvider")) return new UNIX_DatabaseSegmentSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseServiceProvider")) return new UNIX_DatabaseServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseServiceStatisticsProvider")) return new UNIX_DatabaseServiceStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseStorageProvider")) return new UNIX_DatabaseStorageProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseStorageAreaProvider")) return new UNIX_DatabaseStorageAreaProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DatabaseSystemProvider")) return new UNIX_DatabaseSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DataFileProvider")) return new UNIX_DataFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DependencyContextProvider")) return new UNIX_DependencyContextProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DesktopMonitorProvider")) return new UNIX_DesktopMonitorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DeviceAccessedByFileProvider")) return new UNIX_DeviceAccessedByFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DeviceErrorCountsProvider")) return new UNIX_DeviceErrorCountsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DeviceErrorDataProvider")) return new UNIX_DeviceErrorDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DeviceFileProvider")) return new UNIX_DeviceFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DeviceIdentityProvider")) return new UNIX_DeviceIdentityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DeviceSAPImplementationProvider")) return new UNIX_DeviceSAPImplementationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DeviceServicesLocationProvider")) return new UNIX_DeviceServicesLocationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DeviceSharingCapabilitiesProvider")) return new UNIX_DeviceSharingCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DeviceSoftwareProvider")) return new UNIX_DeviceSoftwareProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DeviceStatisticsProvider")) return new UNIX_DeviceStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DHCPCapabilitiesProvider")) return new UNIX_DHCPCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DHCPProtocolEndpointProvider")) return new UNIX_DHCPProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DHCPSettingDataProvider")) return new UNIX_DHCPSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticCompletionRecordProvider")) return new UNIX_DiagnosticCompletionRecordProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticLogProvider")) return new UNIX_DiagnosticLogProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticResultProvider")) return new UNIX_DiagnosticResultProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticResultForMSEProvider")) return new UNIX_DiagnosticResultForMSEProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticResultForTestProvider")) return new UNIX_DiagnosticResultForTestProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticResultInPackageProvider")) return new UNIX_DiagnosticResultInPackageProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticServiceProvider")) return new UNIX_DiagnosticServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticServiceCapabilitiesProvider")) return new UNIX_DiagnosticServiceCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticServiceRecordProvider")) return new UNIX_DiagnosticServiceRecordProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticSettingProvider")) return new UNIX_DiagnosticSettingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticSettingDataProvider")) return new UNIX_DiagnosticSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticSettingDataRecordProvider")) return new UNIX_DiagnosticSettingDataRecordProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticSettingRecordProvider")) return new UNIX_DiagnosticSettingRecordProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticsLogProvider")) return new UNIX_DiagnosticsLogProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticTestProvider")) return new UNIX_DiagnosticTestProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticTestForMSEProvider")) return new UNIX_DiagnosticTestForMSEProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticTestInPackageProvider")) return new UNIX_DiagnosticTestInPackageProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiagnosticTestSoftwareProvider")) return new UNIX_DiagnosticTestSoftwareProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DirectoryProvider")) return new UNIX_DirectoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DirectoryContainsFileProvider")) return new UNIX_DirectoryContainsFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DirectorySpecificationProvider")) return new UNIX_DirectorySpecificationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DirectorySpecificationFileProvider")) return new UNIX_DirectorySpecificationFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiscreteSensorProvider")) return new UNIX_DiscreteSensorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiskDriveProvider")) return new UNIX_DiskDriveProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DisketteDriveProvider")) return new UNIX_DisketteDriveProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiskGroupProvider")) return new UNIX_DiskGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiskPartitionProvider")) return new UNIX_DiskPartitionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiskPartitionBasedOnVolumeProvider")) return new UNIX_DiskPartitionBasedOnVolumeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DiskSpaceCheckProvider")) return new UNIX_DiskSpaceCheckProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DisplayControllerProvider")) return new UNIX_DisplayControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DMAProvider")) return new UNIX_DMAProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DNSGeneralSettingDataProvider")) return new UNIX_DNSGeneralSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DNSProtocolEndpointProvider")) return new UNIX_DNSProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DNSSettingDataProvider")) return new UNIX_DNSSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DockedProvider")) return new UNIX_DockedProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DocumentAuthenticationProvider")) return new UNIX_DocumentAuthenticationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DoorProvider")) return new UNIX_DoorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DoorAccessToDeviceProvider")) return new UNIX_DoorAccessToDeviceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DoorAccessToPhysicalElementProvider")) return new UNIX_DoorAccessToPhysicalElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DriveInDiskGroupProvider")) return new UNIX_DriveInDiskGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DropThresholdCalculationServiceProvider")) return new UNIX_DropThresholdCalculationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DSCPMarkerServiceProvider")) return new UNIX_DSCPMarkerServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DVDDriveProvider")) return new UNIX_DVDDriveProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DynamicForwardingEntryProvider")) return new UNIX_DynamicForwardingEntryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EFServiceProvider")) return new UNIX_EFServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EGPRouteCalcDependencyProvider")) return new UNIX_EGPRouteCalcDependencyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EgressConditioningServiceOnEndpointProvider")) return new UNIX_EgressConditioningServiceOnEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementAllocatedFromPoolProvider")) return new UNIX_ElementAllocatedFromPoolProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementAsUserProvider")) return new UNIX_ElementAsUserProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementCapabilitiesProvider")) return new UNIX_ElementCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementCapacityProvider")) return new UNIX_ElementCapacityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementConfigurationProvider")) return new UNIX_ElementConfigurationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementConformsToProfileProvider")) return new UNIX_ElementConformsToProfileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementInConnectorProvider")) return new UNIX_ElementInConnectorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementInPolicyRoleCollectionProvider")) return new UNIX_ElementInPolicyRoleCollectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementInSchedulingServiceProvider")) return new UNIX_ElementInSchedulingServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementLocationProvider")) return new UNIX_ElementLocationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementProfileProvider")) return new UNIX_ElementProfileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementSecuritySensitivityProvider")) return new UNIX_ElementSecuritySensitivityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementSettingProvider")) return new UNIX_ElementSettingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementSettingDataProvider")) return new UNIX_ElementSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementsLinkedProvider")) return new UNIX_ElementsLinkedProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementSoftwareIdentityProvider")) return new UNIX_ElementSoftwareIdentityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementStatisticalDataProvider")) return new UNIX_ElementStatisticalDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ElementViewProvider")) return new UNIX_ElementViewProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EndpointForIPNetworkConnectionProvider")) return new UNIX_EndpointForIPNetworkConnectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EndpointIdentityProvider")) return new UNIX_EndpointIdentityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EndpointInAreaProvider")) return new UNIX_EndpointInAreaProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EndpointInLinkProvider")) return new UNIX_EndpointInLinkProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EndpointOfNetworkPipeProvider")) return new UNIX_EndpointOfNetworkPipeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EntriesInFilterListProvider")) return new UNIX_EntriesInFilterListProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ErrorProvider")) return new UNIX_ErrorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ErrorCountersForDeviceProvider")) return new UNIX_ErrorCountersForDeviceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ESCONControllerProvider")) return new UNIX_ESCONControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ESPTransformProvider")) return new UNIX_ESPTransformProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EthernetAdapterProvider")) return new UNIX_EthernetAdapterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EthernetPortProvider")) return new UNIX_EthernetPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EthernetPortAllocationSettingDataProvider")) return new UNIX_EthernetPortAllocationSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EthernetPortStatisticsProvider")) return new UNIX_EthernetPortStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_EWMAMeterServiceProvider")) return new UNIX_EWMAMeterServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ExecuteProgramProvider")) return new UNIX_ExecuteProgramProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ExportProvider")) return new UNIX_ExportProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ExtendedStaticIPAssignmentSettingDataProvider")) return new UNIX_ExtendedStaticIPAssignmentSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ExtentInDiskGroupProvider")) return new UNIX_ExtentInDiskGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ExtraCapacityGroupProvider")) return new UNIX_ExtraCapacityGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FanProvider")) return new UNIX_FanProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FCAdapterEventCountersProvider")) return new UNIX_FCAdapterEventCountersProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FCPortProvider")) return new UNIX_FCPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FCPortCapabilitiesProvider")) return new UNIX_FCPortCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FCPortRateStatisticsProvider")) return new UNIX_FCPortRateStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FCPortStatisticsProvider")) return new UNIX_FCPortStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FCSwitchCapabilitiesProvider")) return new UNIX_FCSwitchCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FCSwitchSettingsProvider")) return new UNIX_FCSwitchSettingsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FibreChannelAdapterProvider")) return new UNIX_FibreChannelAdapterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FibrePortProvider")) return new UNIX_FibrePortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FibrePortActiveLoginProvider")) return new UNIX_FibrePortActiveLoginProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FibrePortEventCountersProvider")) return new UNIX_FibrePortEventCountersProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FibrePortOnFCAdapterProvider")) return new UNIX_FibrePortOnFCAdapterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FibreProtocolServiceProvider")) return new UNIX_FibreProtocolServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FIFOPipeFileProvider")) return new UNIX_FIFOPipeFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FileIdentityProvider")) return new UNIX_FileIdentityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FileSpecificationProvider")) return new UNIX_FileSpecificationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FileStorageProvider")) return new UNIX_FileStorageProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FileSystemCapabilitiesProvider")) return new UNIX_FileSystemCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FileSystemSettingDataProvider")) return new UNIX_FileSystemSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FilterCollectionProvider")) return new UNIX_FilterCollectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FilteredBGPAttributesProvider")) return new UNIX_FilteredBGPAttributesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FilterEntryProvider")) return new UNIX_FilterEntryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FilterEntryInSystemProvider")) return new UNIX_FilterEntryInSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FilterListProvider")) return new UNIX_FilterListProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FilterListInSystemProvider")) return new UNIX_FilterListInSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FilterListsInBGPRouteMapProvider")) return new UNIX_FilterListsInBGPRouteMapProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FilterOfPacketConditionProvider")) return new UNIX_FilterOfPacketConditionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FilterOfSecurityAssociationProvider")) return new UNIX_FilterOfSecurityAssociationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FlatPanelProvider")) return new UNIX_FlatPanelProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FlowServiceProvider")) return new UNIX_FlowServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ForwardedRoutesProvider")) return new UNIX_ForwardedRoutesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ForwardsAmongProvider")) return new UNIX_ForwardsAmongProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FromDirectoryActionProvider")) return new UNIX_FromDirectoryActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FromDirectorySpecificationProvider")) return new UNIX_FromDirectorySpecificationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FRUProvider")) return new UNIX_FRUProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FRUIncludesProductProvider")) return new UNIX_FRUIncludesProductProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FRUIncludesSoftwareFeatureProvider")) return new UNIX_FRUIncludesSoftwareFeatureProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FRUPhysicalElementsProvider")) return new UNIX_FRUPhysicalElementsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_GatewayPathIDProvider")) return new UNIX_GatewayPathIDProvider();
	//else if (String::equalNoCase(providerName, "UNIX_GroupProvider")) return new UNIX_GroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HardwareThreadProvider")) return new UNIX_HardwareThreadProvider();
	//else if (String::equalNoCase(providerName, "UNIX_Hdr8021FilterProvider")) return new UNIX_Hdr8021FilterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_Hdr8021PServiceProvider")) return new UNIX_Hdr8021PServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HDSLModemProvider")) return new UNIX_HDSLModemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HeadTailDropperProvider")) return new UNIX_HeadTailDropperProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HeadTailDropQueueBindingProvider")) return new UNIX_HeadTailDropQueueBindingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HeatPipeProvider")) return new UNIX_HeatPipeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HelpServiceProvider")) return new UNIX_HelpServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HomeForMediaProvider")) return new UNIX_HomeForMediaProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedACIProvider")) return new UNIX_HostedACIProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedAdminDistanceProvider")) return new UNIX_HostedAdminDistanceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedAuthenticationRequirementProvider")) return new UNIX_HostedAuthenticationRequirementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedBGPAttributesProvider")) return new UNIX_HostedBGPAttributesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedBGPPeerGroupProvider")) return new UNIX_HostedBGPPeerGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedBGPRouteMapProvider")) return new UNIX_HostedBGPRouteMapProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedBootSAPProvider")) return new UNIX_HostedBootSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedBootServiceProvider")) return new UNIX_HostedBootServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedClusterSAPProvider")) return new UNIX_HostedClusterSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedClusterServiceProvider")) return new UNIX_HostedClusterServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedCollectionProvider")) return new UNIX_HostedCollectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedFileSystemProvider")) return new UNIX_HostedFileSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedFilterEntryBaseProvider")) return new UNIX_HostedFilterEntryBaseProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedFilterListProvider")) return new UNIX_HostedFilterListProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedForwardingServicesProvider")) return new UNIX_HostedForwardingServicesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedJobDestinationProvider")) return new UNIX_HostedJobDestinationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedNetworkPipeProvider")) return new UNIX_HostedNetworkPipeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedResourcePoolProvider")) return new UNIX_HostedResourcePoolProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedRouteProvider")) return new UNIX_HostedRouteProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedRoutingPolicyProvider")) return new UNIX_HostedRoutingPolicyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedRoutingServicesProvider")) return new UNIX_HostedRoutingServicesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostedStoragePoolProvider")) return new UNIX_HostedStoragePoolProvider();
	//else if (String::equalNoCase(providerName, "UNIX_HostingCSProvider")) return new UNIX_HostingCSProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IBSubnetManagerProvider")) return new UNIX_IBSubnetManagerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IDEControllerProvider")) return new UNIX_IDEControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IdentificationOfManagedSystemProvider")) return new UNIX_IdentificationOfManagedSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IdentityContextProvider")) return new UNIX_IdentityContextProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IdentityManagementServiceProvider")) return new UNIX_IdentityManagementServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IEEE8021xCapabilitiesProvider")) return new UNIX_IEEE8021xCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IEEE8021xSettingsProvider")) return new UNIX_IEEE8021xSettingsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IKEActionProvider")) return new UNIX_IKEActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IKEProposalProvider")) return new UNIX_IKEProposalProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IKERuleProvider")) return new UNIX_IKERuleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IKESAEndpointProvider")) return new UNIX_IKESAEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IKESecretIsNamedProvider")) return new UNIX_IKESecretIsNamedProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InBGPPeerGroupProvider")) return new UNIX_InBGPPeerGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InboundVLANProvider")) return new UNIX_InboundVLANProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IndicationFilterProvider")) return new UNIX_IndicationFilterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IndicationHandlerCIMXMLProvider")) return new UNIX_IndicationHandlerCIMXMLProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IndicationServiceProvider")) return new UNIX_IndicationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IndicationServiceCapabilitiesProvider")) return new UNIX_IndicationServiceCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IndicationServiceSettingDataProvider")) return new UNIX_IndicationServiceSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IndicatorLEDProvider")) return new UNIX_IndicatorLEDProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IndicatorLEDCapabilitiesProvider")) return new UNIX_IndicatorLEDCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InfraredControllerProvider")) return new UNIX_InfraredControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IngressConditioningServiceOnEndpointProvider")) return new UNIX_IngressConditioningServiceOnEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InLogicalNetworkProvider")) return new UNIX_InLogicalNetworkProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InSegmentProvider")) return new UNIX_InSegmentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InstalledOSProvider")) return new UNIX_InstalledOSProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InstalledProductProvider")) return new UNIX_InstalledProductProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InstalledProductImageProvider")) return new UNIX_InstalledProductImageProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InstalledSoftwareElementProvider")) return new UNIX_InstalledSoftwareElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InstalledSoftwareIdentityProvider")) return new UNIX_InstalledSoftwareIdentityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InstCreationProvider")) return new UNIX_InstCreationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InstDeletionProvider")) return new UNIX_InstDeletionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InstMethodCallProvider")) return new UNIX_InstMethodCallProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InstModificationProvider")) return new UNIX_InstModificationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InstReadProvider")) return new UNIX_InstReadProvider();
	//else if (String::equalNoCase(providerName, "UNIX_InterLibraryPortProvider")) return new UNIX_InterLibraryPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPAddressRangeProvider")) return new UNIX_IPAddressRangeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPCOMPTransformProvider")) return new UNIX_IPCOMPTransformProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPConfigurationServiceProvider")) return new UNIX_IPConfigurationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPConnectivitySubnetProvider")) return new UNIX_IPConnectivitySubnetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPHeadersFilterProvider")) return new UNIX_IPHeadersFilterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPNetworkConnectionProvider")) return new UNIX_IPNetworkConnectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPNetworkIdentityProvider")) return new UNIX_IPNetworkIdentityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPProtocolEndpointProvider")) return new UNIX_IPProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPsecPolicyForEndpointProvider")) return new UNIX_IPsecPolicyForEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPsecPolicyForSystemProvider")) return new UNIX_IPsecPolicyForSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPsecProposalProvider")) return new UNIX_IPsecProposalProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPsecRuleProvider")) return new UNIX_IPsecRuleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPsecSAEndpointProvider")) return new UNIX_IPsecSAEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPsecTransportActionProvider")) return new UNIX_IPsecTransportActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPsecTunnelActionProvider")) return new UNIX_IPsecTunnelActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPSOFilterEntryProvider")) return new UNIX_IPSOFilterEntryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPSubnetProvider")) return new UNIX_IPSubnetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPVersionSettingDataProvider")) return new UNIX_IPVersionSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPXConnectivityNetworkProvider")) return new UNIX_IPXConnectivityNetworkProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPXNetworkProvider")) return new UNIX_IPXNetworkProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IPXProtocolEndpointProvider")) return new UNIX_IPXProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IRQProvider")) return new UNIX_IRQProvider();
	//else if (String::equalNoCase(providerName, "UNIX_iSCSICapabilitiesProvider")) return new UNIX_iSCSICapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_iSCSIConnectionProvider")) return new UNIX_iSCSIConnectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_iSCSIConnectionSettingsProvider")) return new UNIX_iSCSIConnectionSettingsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_iSCSILoginStatisticsProvider")) return new UNIX_iSCSILoginStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_iSCSIProtocolEndpointProvider")) return new UNIX_iSCSIProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_iSCSISessionProvider")) return new UNIX_iSCSISessionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_iSCSISessionFailuresProvider")) return new UNIX_iSCSISessionFailuresProvider();
	//else if (String::equalNoCase(providerName, "UNIX_iSCSISessionSettingsProvider")) return new UNIX_iSCSISessionSettingsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ISDNModemProvider")) return new UNIX_ISDNModemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_IsSpareProvider")) return new UNIX_IsSpareProvider();
	//else if (String::equalNoCase(providerName, "UNIX_JobDestinationJobsProvider")) return new UNIX_JobDestinationJobsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_JobQueueProvider")) return new UNIX_JobQueueProvider();
	//else if (String::equalNoCase(providerName, "UNIX_JobSettingDataProvider")) return new UNIX_JobSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_KDCIssuesKerberosTicketProvider")) return new UNIX_KDCIssuesKerberosTicketProvider();
	//else if (String::equalNoCase(providerName, "UNIX_KerberosAuthenticationProvider")) return new UNIX_KerberosAuthenticationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_KerberosCredentialProvider")) return new UNIX_KerberosCredentialProvider();
	//else if (String::equalNoCase(providerName, "UNIX_KerberosKeyDistributionCenterProvider")) return new UNIX_KerberosKeyDistributionCenterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_KerberosTicketProvider")) return new UNIX_KerberosTicketProvider();
	//else if (String::equalNoCase(providerName, "UNIX_KeyBasedCredentialManagementServiceProvider")) return new UNIX_KeyBasedCredentialManagementServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_KeyboardProvider")) return new UNIX_KeyboardProvider();
	//else if (String::equalNoCase(providerName, "UNIX_KeystoreProvider")) return new UNIX_KeystoreProvider();
	//else if (String::equalNoCase(providerName, "UNIX_KVMRedirectionSAPProvider")) return new UNIX_KVMRedirectionSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LabelReaderProvider")) return new UNIX_LabelReaderProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LabelReaderStatDataProvider")) return new UNIX_LabelReaderStatDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LabelReaderStatInfoProvider")) return new UNIX_LabelReaderStatInfoProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LANConnectivitySegmentProvider")) return new UNIX_LANConnectivitySegmentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LANEndpointProvider")) return new UNIX_LANEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LANSegmentProvider")) return new UNIX_LANSegmentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LastAppliedSnapshotProvider")) return new UNIX_LastAppliedSnapshotProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LaunchInContextCapabilitiesProvider")) return new UNIX_LaunchInContextCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LaunchInContextSAPProvider")) return new UNIX_LaunchInContextSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LaunchInContextServiceProvider")) return new UNIX_LaunchInContextServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LibraryExchangeProvider")) return new UNIX_LibraryExchangeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LibraryPackageProvider")) return new UNIX_LibraryPackageProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LimitedAccessPortProvider")) return new UNIX_LimitedAccessPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LinkHasConnectorProvider")) return new UNIX_LinkHasConnectorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ListenerDestinationCIMXMLProvider")) return new UNIX_ListenerDestinationCIMXMLProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ListenerDestinationWSManagementProvider")) return new UNIX_ListenerDestinationWSManagementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ListsInRoutingPolicyProvider")) return new UNIX_ListsInRoutingPolicyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LLDPEthernetPortProvider")) return new UNIX_LLDPEthernetPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LLDPEthernetPortStatisticsProvider")) return new UNIX_LLDPEthernetPortStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LocalFileSystemProvider")) return new UNIX_LocalFileSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LocalizationCapabilitiesProvider")) return new UNIX_LocalizationCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LocallyManagedPublicKeyProvider")) return new UNIX_LocallyManagedPublicKeyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LocationProvider")) return new UNIX_LocationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogEntryProvider")) return new UNIX_LogEntryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogicalDiskProvider")) return new UNIX_LogicalDiskProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogicalDiskBasedOnPartitionProvider")) return new UNIX_LogicalDiskBasedOnPartitionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogicalDiskBasedOnVolumeProvider")) return new UNIX_LogicalDiskBasedOnVolumeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogicalDiskBasedOnVolumeSetProvider")) return new UNIX_LogicalDiskBasedOnVolumeSetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogicalModuleProvider")) return new UNIX_LogicalModuleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogicalNetworkServiceProvider")) return new UNIX_LogicalNetworkServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogicalPortGroupProvider")) return new UNIX_LogicalPortGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogicalPortSettingsProvider")) return new UNIX_LogicalPortSettingsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogInDataFileProvider")) return new UNIX_LogInDataFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogInDeviceFileProvider")) return new UNIX_LogInDeviceFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogInStorageProvider")) return new UNIX_LogInStorageProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogManagesRecordProvider")) return new UNIX_LogManagesRecordProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LogRecordProvider")) return new UNIX_LogRecordProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MagazineProvider")) return new UNIX_MagazineProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MagnetoOpticalDriveProvider")) return new UNIX_MagnetoOpticalDriveProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ManagementControllerProvider")) return new UNIX_ManagementControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ManagesAccountProvider")) return new UNIX_ManagesAccountProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ManagesAccountOnSystemProvider")) return new UNIX_ManagesAccountOnSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MediaAccessStatDataProvider")) return new UNIX_MediaAccessStatDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MediaAccessStatInfoProvider")) return new UNIX_MediaAccessStatInfoProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MediaPhysicalStatDataProvider")) return new UNIX_MediaPhysicalStatDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MediaPhysicalStatInfoProvider")) return new UNIX_MediaPhysicalStatInfoProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MediaPresentProvider")) return new UNIX_MediaPresentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MediaRedirectionCapabilitiesProvider")) return new UNIX_MediaRedirectionCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MediaRedirectionSAPProvider")) return new UNIX_MediaRedirectionSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MemberPrincipalProvider")) return new UNIX_MemberPrincipalProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MemoryCapacityProvider")) return new UNIX_MemoryCapacityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MemoryCheckProvider")) return new UNIX_MemoryCheckProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MemoryErrorProvider")) return new UNIX_MemoryErrorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MemoryOnCardProvider")) return new UNIX_MemoryOnCardProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MemoryResourceProvider")) return new UNIX_MemoryResourceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MemoryWithMediaProvider")) return new UNIX_MemoryWithMediaProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MessageLogProvider")) return new UNIX_MessageLogProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MethodActionProvider")) return new UNIX_MethodActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MethodParametersProvider")) return new UNIX_MethodParametersProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MethodResultProvider")) return new UNIX_MethodResultProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MetricDefForMEProvider")) return new UNIX_MetricDefForMEProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MetricDefinitionProvider")) return new UNIX_MetricDefinitionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MetricForMEProvider")) return new UNIX_MetricForMEProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MetricInstanceProvider")) return new UNIX_MetricInstanceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MetricServiceProvider")) return new UNIX_MetricServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MetricServiceCapabilitiesProvider")) return new UNIX_MetricServiceCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ModifySettingActionProvider")) return new UNIX_ModifySettingActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ModulePortProvider")) return new UNIX_ModulePortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MonitorResolutionProvider")) return new UNIX_MonitorResolutionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MoreGroupInfoProvider")) return new UNIX_MoreGroupInfoProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MoreOrganizationInfoProvider")) return new UNIX_MoreOrganizationInfoProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MoreOrgUnitInfoProvider")) return new UNIX_MoreOrgUnitInfoProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MorePersonInfoProvider")) return new UNIX_MorePersonInfoProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MoreRoleInfoProvider")) return new UNIX_MoreRoleInfoProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MountProvider")) return new UNIX_MountProvider();
	//else if (String::equalNoCase(providerName, "UNIX_MultiStateSensorProvider")) return new UNIX_MultiStateSensorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NamedAddressCollectionProvider")) return new UNIX_NamedAddressCollectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NamedCredentialProvider")) return new UNIX_NamedCredentialProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NamedSharedIKESecretProvider")) return new UNIX_NamedSharedIKESecretProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NamespaceProvider")) return new UNIX_NamespaceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NamespaceInManagerProvider")) return new UNIX_NamespaceInManagerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NetworkProvider")) return new UNIX_NetworkProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NetworkAdapterRedundancyComponentProvider")) return new UNIX_NetworkAdapterRedundancyComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NetworkingIDAuthenticationProvider")) return new UNIX_NetworkingIDAuthenticationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NetworkPacketActionProvider")) return new UNIX_NetworkPacketActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NetworkPipeCompositionProvider")) return new UNIX_NetworkPipeCompositionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NetworkPortCapabilitiesProvider")) return new UNIX_NetworkPortCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NetworkPortConfigurationServiceProvider")) return new UNIX_NetworkPortConfigurationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NetworkServicesInAdminDomainProvider")) return new UNIX_NetworkServicesInAdminDomainProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NetworksInAdminDomainProvider")) return new UNIX_NetworksInAdminDomainProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NetworkVirtualAdapterProvider")) return new UNIX_NetworkVirtualAdapterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NetworkVLANProvider")) return new UNIX_NetworkVLANProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NextHopIPRouteProvider")) return new UNIX_NextHopIPRouteProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NextHopRouteProvider")) return new UNIX_NextHopRouteProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NextServiceProvider")) return new UNIX_NextServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NextServiceAfterMeterProvider")) return new UNIX_NextServiceAfterMeterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NFSProvider")) return new UNIX_NFSProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NonVolatileStorageProvider")) return new UNIX_NonVolatileStorageProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NonWorkConservingSchedulingServiceProvider")) return new UNIX_NonWorkConservingSchedulingServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NotaryProvider")) return new UNIX_NotaryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_NotaryVerifiesBiometricProvider")) return new UNIX_NotaryVerifiesBiometricProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ObjectManagerProvider")) return new UNIX_ObjectManagerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ObjectManagerAdapterProvider")) return new UNIX_ObjectManagerAdapterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ObjectManagerCommunicationMechanismProvider")) return new UNIX_ObjectManagerCommunicationMechanismProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OOBAlertServiceProvider")) return new UNIX_OOBAlertServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OOBAlertServiceOnModemProvider")) return new UNIX_OOBAlertServiceOnModemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OOBAlertServiceOnNetworkAdapterProvider")) return new UNIX_OOBAlertServiceOnNetworkAdapterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OOBAlertServiceOnNetworkPortProvider")) return new UNIX_OOBAlertServiceOnNetworkPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OpaqueManagementDataProvider")) return new UNIX_OpaqueManagementDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OpaqueManagementDataCapabilitiesProvider")) return new UNIX_OpaqueManagementDataCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OpaqueManagementDataServiceProvider")) return new UNIX_OpaqueManagementDataServiceProvider();
	else if (String::equalNoCase(providerName, "UNIX_OperatingSystemProvider")) return new UNIX_OperatingSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OperatingSystemCapabilitiesProvider")) return new UNIX_OperatingSystemCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OperatingSystemSoftwareFeatureProvider")) return new UNIX_OperatingSystemSoftwareFeatureProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OperationLogProvider")) return new UNIX_OperationLogProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OrderedComponentProvider")) return new UNIX_OrderedComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OrderedDependencyProvider")) return new UNIX_OrderedDependencyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OrderedMemberOfCollectionProvider")) return new UNIX_OrderedMemberOfCollectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OrganizationProvider")) return new UNIX_OrganizationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OrgStructureProvider")) return new UNIX_OrgStructureProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OrgUnitProvider")) return new UNIX_OrgUnitProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OSPFAreaProvider")) return new UNIX_OSPFAreaProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OSPFAreaConfigurationProvider")) return new UNIX_OSPFAreaConfigurationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OSPFLinkProvider")) return new UNIX_OSPFLinkProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OSPFProtocolEndpointProvider")) return new UNIX_OSPFProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OSPFServiceProvider")) return new UNIX_OSPFServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OSPFServiceCapabilitiesProvider")) return new UNIX_OSPFServiceCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OSPFServiceConfigurationProvider")) return new UNIX_OSPFServiceConfigurationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OSPFVirtualInterfaceProvider")) return new UNIX_OSPFVirtualInterfaceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OSProcessProvider")) return new UNIX_OSProcessProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OSVersionCheckProvider")) return new UNIX_OSVersionCheckProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OtherGroupInformationProvider")) return new UNIX_OtherGroupInformationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OtherOrganizationInformationProvider")) return new UNIX_OtherOrganizationInformationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OtherOrgUnitInformationProvider")) return new UNIX_OtherOrgUnitInformationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OtherPersonInformationProvider")) return new UNIX_OtherPersonInformationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OtherRoleInformationProvider")) return new UNIX_OtherRoleInformationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OutboundVLANProvider")) return new UNIX_OutboundVLANProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OwningCollectionElementProvider")) return new UNIX_OwningCollectionElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OwningJobElementProvider")) return new UNIX_OwningJobElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_OwningPrintQueueProvider")) return new UNIX_OwningPrintQueueProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PackageAlarmProvider")) return new UNIX_PackageAlarmProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PackageCoolingProvider")) return new UNIX_PackageCoolingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PackagedComponentProvider")) return new UNIX_PackagedComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PackageInChassisProvider")) return new UNIX_PackageInChassisProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PackageInConnectorProvider")) return new UNIX_PackageInConnectorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PackageInSlotProvider")) return new UNIX_PackageInSlotProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PackageLocationProvider")) return new UNIX_PackageLocationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PackageTempSensorProvider")) return new UNIX_PackageTempSensorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PacketConditionInSARuleProvider")) return new UNIX_PacketConditionInSARuleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PacketFilterConditionProvider")) return new UNIX_PacketFilterConditionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PacketSchedulingServiceProvider")) return new UNIX_PacketSchedulingServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ParallelControllerProvider")) return new UNIX_ParallelControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ParametersForMethodProvider")) return new UNIX_ParametersForMethodProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ParameterValueSourcesProvider")) return new UNIX_ParameterValueSourcesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ParticipatesInSetProvider")) return new UNIX_ParticipatesInSetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ParticipatingCSProvider")) return new UNIX_ParticipatingCSProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PassThroughModuleProvider")) return new UNIX_PassThroughModuleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PCIBridgeProvider")) return new UNIX_PCIBridgeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PCIeSwitchProvider")) return new UNIX_PCIeSwitchProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PCIPortProvider")) return new UNIX_PCIPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PCIPortGroupProvider")) return new UNIX_PCIPortGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PCMCIAControllerProvider")) return new UNIX_PCMCIAControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PCVideoControllerProvider")) return new UNIX_PCVideoControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PeerGatewayForPreconfiguredTunnelProvider")) return new UNIX_PeerGatewayForPreconfiguredTunnelProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PeerGatewayForTunnelProvider")) return new UNIX_PeerGatewayForTunnelProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PeerIDPayloadFilterEntryProvider")) return new UNIX_PeerIDPayloadFilterEntryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PeerOfSAEndpointProvider")) return new UNIX_PeerOfSAEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PersonProvider")) return new UNIX_PersonProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PExtentRedundancyComponentProvider")) return new UNIX_PExtentRedundancyComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_Phase1SAUsedForPhase2Provider")) return new UNIX_Phase1SAUsedForPhase2Provider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalAssetCapabilitiesProvider")) return new UNIX_PhysicalAssetCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalComputerSystemViewProvider")) return new UNIX_PhysicalComputerSystemViewProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalConnectorProvider")) return new UNIX_PhysicalConnectorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalCredentialAuthenticationProvider")) return new UNIX_PhysicalCredentialAuthenticationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalExtentProvider")) return new UNIX_PhysicalExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalLinkProvider")) return new UNIX_PhysicalLinkProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalMediaProvider")) return new UNIX_PhysicalMediaProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalMediaInLocationProvider")) return new UNIX_PhysicalMediaInLocationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalMemoryProvider")) return new UNIX_PhysicalMemoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalStatisticalInformationProvider")) return new UNIX_PhysicalStatisticalInformationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalStatisticsProvider")) return new UNIX_PhysicalStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PhysicalTapeProvider")) return new UNIX_PhysicalTapeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PickerElementProvider")) return new UNIX_PickerElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PickerForChangerProvider")) return new UNIX_PickerForChangerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PickerLabelReaderProvider")) return new UNIX_PickerLabelReaderProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PickerStatDataProvider")) return new UNIX_PickerStatDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PickerStatInfoProvider")) return new UNIX_PickerStatInfoProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PlatformWatchdogServiceProvider")) return new UNIX_PlatformWatchdogServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PlatformWatchdogServiceCapabilitiesProvider")) return new UNIX_PlatformWatchdogServiceCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PointingDeviceProvider")) return new UNIX_PointingDeviceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyActionInPolicyActionProvider")) return new UNIX_PolicyActionInPolicyActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyActionInPolicyRepositoryProvider")) return new UNIX_PolicyActionInPolicyRepositoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyActionInPolicyRuleProvider")) return new UNIX_PolicyActionInPolicyRuleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyConditionInPolicyConditionProvider")) return new UNIX_PolicyConditionInPolicyConditionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyConditionInPolicyRepositoryProvider")) return new UNIX_PolicyConditionInPolicyRepositoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyConditionInPolicyRuleProvider")) return new UNIX_PolicyConditionInPolicyRuleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyContainerInPolicyContainerProvider")) return new UNIX_PolicyContainerInPolicyContainerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyGroupProvider")) return new UNIX_PolicyGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyGroupInPolicyGroupProvider")) return new UNIX_PolicyGroupInPolicyGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyGroupInSystemProvider")) return new UNIX_PolicyGroupInSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyRepositoryProvider")) return new UNIX_PolicyRepositoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyRepositoryInPolicyRepositoryProvider")) return new UNIX_PolicyRepositoryInPolicyRepositoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyRoleCollectionProvider")) return new UNIX_PolicyRoleCollectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyRoleCollectionInSystemProvider")) return new UNIX_PolicyRoleCollectionInSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyRuleInPolicyGroupProvider")) return new UNIX_PolicyRuleInPolicyGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyRuleInSystemProvider")) return new UNIX_PolicyRuleInSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyRuleValidityPeriodProvider")) return new UNIX_PolicyRuleValidityPeriodProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicySetAppliesToElementProvider")) return new UNIX_PolicySetAppliesToElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicySetComponentProvider")) return new UNIX_PolicySetComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicySetInRoleCollectionProvider")) return new UNIX_PolicySetInRoleCollectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicySetValidityPeriodProvider")) return new UNIX_PolicySetValidityPeriodProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PolicyTimePeriodConditionProvider")) return new UNIX_PolicyTimePeriodConditionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PortActiveConnectionProvider")) return new UNIX_PortActiveConnectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PortControllerProvider")) return new UNIX_PortControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PortImplementsEndpointProvider")) return new UNIX_PortImplementsEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PortResourceProvider")) return new UNIX_PortResourceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_POTSModemProvider")) return new UNIX_POTSModemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PowerAllocationSettingDataProvider")) return new UNIX_PowerAllocationSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PowerManagementCapabilitiesProvider")) return new UNIX_PowerManagementCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PowerManagementServiceProvider")) return new UNIX_PowerManagementServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PowerSourceProvider")) return new UNIX_PowerSourceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PowerSupplyProvider")) return new UNIX_PowerSupplyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PowerUtilizationManagementCapabilitiesProvider")) return new UNIX_PowerUtilizationManagementCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PowerUtilizationManagementServiceProvider")) return new UNIX_PowerUtilizationManagementServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PreambleFilterProvider")) return new UNIX_PreambleFilterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PreambleMarkerServiceProvider")) return new UNIX_PreambleMarkerServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrecedenceServiceProvider")) return new UNIX_PrecedenceServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PreconfiguredTransportActionProvider")) return new UNIX_PreconfiguredTransportActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PreconfiguredTunnelActionProvider")) return new UNIX_PreconfiguredTunnelActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrinterProvider")) return new UNIX_PrinterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrinterServicingJobProvider")) return new UNIX_PrinterServicingJobProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrinterServicingQueueProvider")) return new UNIX_PrinterServicingQueueProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrintInputTrayProvider")) return new UNIX_PrintInputTrayProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrintInterpreterProvider")) return new UNIX_PrintInterpreterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrintJobProvider")) return new UNIX_PrintJobProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrintJobFileProvider")) return new UNIX_PrintJobFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrintMarkerProvider")) return new UNIX_PrintMarkerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrintQueueProvider")) return new UNIX_PrintQueueProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrintSAPProvider")) return new UNIX_PrintSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrintServiceProvider")) return new UNIX_PrintServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrintSupplyProvider")) return new UNIX_PrintSupplyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_Priority8021QMarkerServiceProvider")) return new UNIX_Priority8021QMarkerServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrioritySchedulingElementProvider")) return new UNIX_PrioritySchedulingElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrivilegeProvider")) return new UNIX_PrivilegeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrivilegeManagementCapabilitiesProvider")) return new UNIX_PrivilegeManagementCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PrivilegeManagementServiceProvider")) return new UNIX_PrivilegeManagementServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProcessExecutableProvider")) return new UNIX_ProcessExecutableProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProcessOfJobProvider")) return new UNIX_ProcessOfJobProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProcessorProvider")) return new UNIX_ProcessorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProcessorAllocationSettingDataProvider")) return new UNIX_ProcessorAllocationSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProcessorCapabilitiesProvider")) return new UNIX_ProcessorCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProcessorCoreProvider")) return new UNIX_ProcessorCoreProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProcessThreadProvider")) return new UNIX_ProcessThreadProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductProvider")) return new UNIX_ProductProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductComponentProvider")) return new UNIX_ProductComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductElementComponentProvider")) return new UNIX_ProductElementComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductFRUProvider")) return new UNIX_ProductFRUProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductParentChildProvider")) return new UNIX_ProductParentChildProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductPhysicalComponentProvider")) return new UNIX_ProductPhysicalComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductPhysicalElementsProvider")) return new UNIX_ProductPhysicalElementsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductProductDependencyProvider")) return new UNIX_ProductProductDependencyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductServiceComponentProvider")) return new UNIX_ProductServiceComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductSoftwareComponentProvider")) return new UNIX_ProductSoftwareComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductSoftwareFeaturesProvider")) return new UNIX_ProductSoftwareFeaturesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProductSupportProvider")) return new UNIX_ProductSupportProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProfileProvider")) return new UNIX_ProfileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProtectedExtentBasedOnProvider")) return new UNIX_ProtectedExtentBasedOnProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProtectedSpaceExtentProvider")) return new UNIX_ProtectedSpaceExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProtocolAdapterProvider")) return new UNIX_ProtocolAdapterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProtocolControllerProvider")) return new UNIX_ProtocolControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProtocolControllerAccessesUnitProvider")) return new UNIX_ProtocolControllerAccessesUnitProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProtocolControllerForPortProvider")) return new UNIX_ProtocolControllerForPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProtocolControllerForUnitProvider")) return new UNIX_ProtocolControllerForUnitProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProtocolControllerMaskingCapabilitiesProvider")) return new UNIX_ProtocolControllerMaskingCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProtocolServiceProvider")) return new UNIX_ProtocolServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProvidesEndpointProvider")) return new UNIX_ProvidesEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PSExtentBasedOnPExtentProvider")) return new UNIX_PSExtentBasedOnPExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PublicKeyCertificateProvider")) return new UNIX_PublicKeyCertificateProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PublicKeyManagementServiceProvider")) return new UNIX_PublicKeyManagementServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PublicPrivateKeyAuthenticationProvider")) return new UNIX_PublicPrivateKeyAuthenticationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_PublicPrivateKeyPairProvider")) return new UNIX_PublicPrivateKeyPairProvider();
	//else if (String::equalNoCase(providerName, "UNIX_QoSConditioningSubServiceProvider")) return new UNIX_QoSConditioningSubServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_QoSSubServiceProvider")) return new UNIX_QoSSubServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_QueryCapabilitiesProvider")) return new UNIX_QueryCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_QueryConditionProvider")) return new UNIX_QueryConditionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_QueueAllocationProvider")) return new UNIX_QueueAllocationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_QueueForPrintServiceProvider")) return new UNIX_QueueForPrintServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_QueueForwardsToPrintSAPProvider")) return new UNIX_QueueForwardsToPrintSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_QueueHierarchyProvider")) return new UNIX_QueueHierarchyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_QueueToScheduleProvider")) return new UNIX_QueueToScheduleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_QueuingServiceProvider")) return new UNIX_QueuingServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RackProvider")) return new UNIX_RackProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RangeOfIPAddressesProvider")) return new UNIX_RangeOfIPAddressesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RangesOfConfigurationProvider")) return new UNIX_RangesOfConfigurationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RealizedOnSideProvider")) return new UNIX_RealizedOnSideProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RealizesAggregatePExtentProvider")) return new UNIX_RealizesAggregatePExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RealizesDiskPartitionProvider")) return new UNIX_RealizesDiskPartitionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RealizesPExtentProvider")) return new UNIX_RealizesPExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RealizesTapePartitionProvider")) return new UNIX_RealizesTapePartitionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RebootActionProvider")) return new UNIX_RebootActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RecordAppliesToElementProvider")) return new UNIX_RecordAppliesToElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RecordInLogProvider")) return new UNIX_RecordInLogProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RecordLogCapabilitiesProvider")) return new UNIX_RecordLogCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_REDDropperServiceProvider")) return new UNIX_REDDropperServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RedundancySetProvider")) return new UNIX_RedundancySetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ReferencedProfileProvider")) return new UNIX_ReferencedProfileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ReflectorClientServiceProvider")) return new UNIX_ReflectorClientServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ReflectorNonClientServiceProvider")) return new UNIX_ReflectorNonClientServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ReflectorServiceProvider")) return new UNIX_ReflectorServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RefrigerationProvider")) return new UNIX_RefrigerationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RegisteredSubProfileProvider")) return new UNIX_RegisteredSubProfileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RejectConnectionActionProvider")) return new UNIX_RejectConnectionActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RelatedSpanningTreeProvider")) return new UNIX_RelatedSpanningTreeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RelatedStatisticalDataProvider")) return new UNIX_RelatedStatisticalDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RelatedStatisticsProvider")) return new UNIX_RelatedStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RelatedTransparentBridgingServiceProvider")) return new UNIX_RelatedTransparentBridgingServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RemoteAccessAvailableToElementProvider")) return new UNIX_RemoteAccessAvailableToElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RemoteFileSystemProvider")) return new UNIX_RemoteFileSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RemotePortProvider")) return new UNIX_RemotePortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RemoveDirectoryActionProvider")) return new UNIX_RemoveDirectoryActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RemoveFileActionProvider")) return new UNIX_RemoveFileActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ReplaceableProductFRUProvider")) return new UNIX_ReplaceableProductFRUProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ReplacementSetProvider")) return new UNIX_ReplacementSetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RequireCredentialsFromProvider")) return new UNIX_RequireCredentialsFromProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ResidesOnExtentProvider")) return new UNIX_ResidesOnExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ResourceAllocationFromPoolProvider")) return new UNIX_ResourceAllocationFromPoolProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ResourcePoolProvider")) return new UNIX_ResourcePoolProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ResourcePoolConfigurationCapabilitiesProvider")) return new UNIX_ResourcePoolConfigurationCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ResourcePoolConfigurationServiceProvider")) return new UNIX_ResourcePoolConfigurationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ReusablePolicyProvider")) return new UNIX_ReusablePolicyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ReusablePolicyContainerProvider")) return new UNIX_ReusablePolicyContainerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RoleProvider")) return new UNIX_RoleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RoleBasedAuthorizationServiceProvider")) return new UNIX_RoleBasedAuthorizationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RoleBasedManagementCapabilitiesProvider")) return new UNIX_RoleBasedManagementCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RoleLimitedToTargetProvider")) return new UNIX_RoleLimitedToTargetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RouteForwardedByServiceProvider")) return new UNIX_RouteForwardedByServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RoutersInASProvider")) return new UNIX_RoutersInASProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RoutersInBGPClusterProvider")) return new UNIX_RoutersInBGPClusterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RoutesBGPProvider")) return new UNIX_RoutesBGPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RouteUsesEndpointProvider")) return new UNIX_RouteUsesEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RoutingPolicyProvider")) return new UNIX_RoutingPolicyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RoutingProtocolDomainProvider")) return new UNIX_RoutingProtocolDomainProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RoutingProtocolDomainInASProvider")) return new UNIX_RoutingProtocolDomainInASProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RuleThatGeneratedSAProvider")) return new UNIX_RuleThatGeneratedSAProvider();
	//else if (String::equalNoCase(providerName, "UNIX_RunningOSProvider")) return new UNIX_RunningOSProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SAEndpointConnectionStatisticsProvider")) return new UNIX_SAEndpointConnectionStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SAEndpointRefreshSettingsProvider")) return new UNIX_SAEndpointRefreshSettingsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SAPAvailableForElementProvider")) return new UNIX_SAPAvailableForElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SAPStatisticsProvider")) return new UNIX_SAPStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ScannerProvider")) return new UNIX_ScannerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SchedulerUsedProvider")) return new UNIX_SchedulerUsedProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SchedulingServiceToScheduleProvider")) return new UNIX_SchedulingServiceToScheduleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ScopedSettingProvider")) return new UNIX_ScopedSettingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SCSIControllerProvider")) return new UNIX_SCSIControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SCSIInitiatorTargetLogicalUnitPathProvider")) return new UNIX_SCSIInitiatorTargetLogicalUnitPathProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SCSIInterfaceProvider")) return new UNIX_SCSIInterfaceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SCSIMultipathConfigurationCapabilitiesProvider")) return new UNIX_SCSIMultipathConfigurationCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SCSIMultipathSettingsProvider")) return new UNIX_SCSIMultipathSettingsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SCSIPathConfigurationServiceProvider")) return new UNIX_SCSIPathConfigurationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SCSIProtocolControllerProvider")) return new UNIX_SCSIProtocolControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SCSIProtocolEndpointProvider")) return new UNIX_SCSIProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SCSITargetPortGroupProvider")) return new UNIX_SCSITargetPortGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SDSLModemProvider")) return new UNIX_SDSLModemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SecuritySensitivityProvider")) return new UNIX_SecuritySensitivityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SecurityServiceForSystemProvider")) return new UNIX_SecurityServiceForSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SecurityServiceUsesAccountProvider")) return new UNIX_SecurityServiceUsesAccountProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SerialControllerProvider")) return new UNIX_SerialControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SerialInterfaceProvider")) return new UNIX_SerialInterfaceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ServiceAccessURIProvider")) return new UNIX_ServiceAccessURIProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ServiceAffectsElementProvider")) return new UNIX_ServiceAffectsElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ServiceAvailableToElementProvider")) return new UNIX_ServiceAvailableToElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ServiceProcessProvider")) return new UNIX_ServiceProcessProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ServiceStatisticsProvider")) return new UNIX_ServiceStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ServiceUsesSecurityServiceProvider")) return new UNIX_ServiceUsesSecurityServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SettingCheckProvider")) return new UNIX_SettingCheckProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SettingContextProvider")) return new UNIX_SettingContextProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SettingForSystemProvider")) return new UNIX_SettingForSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SettingsDefineCapabilitiesProvider")) return new UNIX_SettingsDefineCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SettingsDefineStateProvider")) return new UNIX_SettingsDefineStateProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SharedCredentialProvider")) return new UNIX_SharedCredentialProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SharedDeviceManagementServiceProvider")) return new UNIX_SharedDeviceManagementServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SharedSecretProvider")) return new UNIX_SharedSecretProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SharedSecretAuthenticationProvider")) return new UNIX_SharedSecretAuthenticationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SharedSecretIsSharedProvider")) return new UNIX_SharedSecretIsSharedProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SharedSecretServiceProvider")) return new UNIX_SharedSecretServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SharingDependencyProvider")) return new UNIX_SharingDependencyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SlotProvider")) return new UNIX_SlotProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SlotInSlotProvider")) return new UNIX_SlotInSlotProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SnapshotProvider")) return new UNIX_SnapshotProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SnapshotOfExtentProvider")) return new UNIX_SnapshotOfExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SnapshotOfVirtualSystemProvider")) return new UNIX_SnapshotOfVirtualSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareElementActionsProvider")) return new UNIX_SoftwareElementActionsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareElementChecksProvider")) return new UNIX_SoftwareElementChecksProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareElementComponentProvider")) return new UNIX_SoftwareElementComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareElementSAPImplementationProvider")) return new UNIX_SoftwareElementSAPImplementationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareElementServiceImplementationProvider")) return new UNIX_SoftwareElementServiceImplementationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareElementVersionCheckProvider")) return new UNIX_SoftwareElementVersionCheckProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareFeatureComponentProvider")) return new UNIX_SoftwareFeatureComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareFeatureSAPImplementationProvider")) return new UNIX_SoftwareFeatureSAPImplementationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareFeatureServiceImplementationProvider")) return new UNIX_SoftwareFeatureServiceImplementationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareIdentityProvider")) return new UNIX_SoftwareIdentityProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareInstallationServiceProvider")) return new UNIX_SoftwareInstallationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareInstallationServiceCapabilitiesProvider")) return new UNIX_SoftwareInstallationServiceCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SourceRoutingServiceProvider")) return new UNIX_SourceRoutingServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SpanningTreeServiceProvider")) return new UNIX_SpanningTreeServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SpanningTreeStatisticsProvider")) return new UNIX_SpanningTreeStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SparedProvider")) return new UNIX_SparedProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SpareGroupProvider")) return new UNIX_SpareGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_Specific802dot1QVLANServiceProvider")) return new UNIX_Specific802dot1QVLANServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SSAControllerProvider")) return new UNIX_SSAControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SSHCapabilitiesProvider")) return new UNIX_SSHCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SSHProtocolEndpointProvider")) return new UNIX_SSHProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SSHSettingDataProvider")) return new UNIX_SSHSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StaticForwardingEntryProvider")) return new UNIX_StaticForwardingEntryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StaticIPAssignmentSettingDataProvider")) return new UNIX_StaticIPAssignmentSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StatisticalRuntimeOverviewProvider")) return new UNIX_StatisticalRuntimeOverviewProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StatisticalSettingProvider")) return new UNIX_StatisticalSettingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StatisticsCapabilitiesProvider")) return new UNIX_StatisticsCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StatisticsCollectionProvider")) return new UNIX_StatisticsCollectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StatisticsServiceProvider")) return new UNIX_StatisticsServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageAllocationSettingDataProvider")) return new UNIX_StorageAllocationSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageCapabilitiesProvider")) return new UNIX_StorageCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageClientSettingDataProvider")) return new UNIX_StorageClientSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageConfigurationCapabilitiesProvider")) return new UNIX_StorageConfigurationCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageConfigurationServiceProvider")) return new UNIX_StorageConfigurationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageDefectProvider")) return new UNIX_StorageDefectProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageErrorProvider")) return new UNIX_StorageErrorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageHardwareIDProvider")) return new UNIX_StorageHardwareIDProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageHardwareIDManagementServiceProvider")) return new UNIX_StorageHardwareIDManagementServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageLibraryProvider")) return new UNIX_StorageLibraryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageMediaLocationProvider")) return new UNIX_StorageMediaLocationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StoragePoolProvider")) return new UNIX_StoragePoolProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageRedundancyGroupProvider")) return new UNIX_StorageRedundancyGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageRedundancySetProvider")) return new UNIX_StorageRedundancySetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageReplicationCapabilitiesProvider")) return new UNIX_StorageReplicationCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageSettingProvider")) return new UNIX_StorageSettingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageSettingsAssociatedToCapabilitiesProvider")) return new UNIX_StorageSettingsAssociatedToCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageSettingsGeneratedFromCapabilitiesProvider")) return new UNIX_StorageSettingsGeneratedFromCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageSettingWithHintsProvider")) return new UNIX_StorageSettingWithHintsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_StorageVolumeProvider")) return new UNIX_StorageVolumeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SubProfileRequiresProfileProvider")) return new UNIX_SubProfileRequiresProfileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SuppliesPowerProvider")) return new UNIX_SuppliesPowerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SupportAccessProvider")) return new UNIX_SupportAccessProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwapSpaceCheckProvider")) return new UNIX_SwapSpaceCheckProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchableProvider")) return new UNIX_SwitchableProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchesAmongProvider")) return new UNIX_SwitchesAmongProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchPortProvider")) return new UNIX_SwitchPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchPortDynamicForwardingProvider")) return new UNIX_SwitchPortDynamicForwardingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchPortPairProvider")) return new UNIX_SwitchPortPairProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchPortSourceRoutingProvider")) return new UNIX_SwitchPortSourceRoutingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchPortSourceRoutingStatisticsProvider")) return new UNIX_SwitchPortSourceRoutingStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchPortSpanningTreeProvider")) return new UNIX_SwitchPortSpanningTreeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchPortSpanningTreeStatisticsProvider")) return new UNIX_SwitchPortSpanningTreeStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchPortStaticForwardingProvider")) return new UNIX_SwitchPortStaticForwardingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchPortStatisticsProvider")) return new UNIX_SwitchPortStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchPortTransparentBridgingStatisticsProvider")) return new UNIX_SwitchPortTransparentBridgingStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchServiceProvider")) return new UNIX_SwitchServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchServiceSourceRoutingProvider")) return new UNIX_SwitchServiceSourceRoutingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchServiceSpanningTreeProvider")) return new UNIX_SwitchServiceSpanningTreeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchServiceTransparentBridgingProvider")) return new UNIX_SwitchServiceTransparentBridgingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SwitchServiceVLANProvider")) return new UNIX_SwitchServiceVLANProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SymbolicLinkProvider")) return new UNIX_SymbolicLinkProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SynchronizedProvider")) return new UNIX_SynchronizedProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemAdministratorProvider")) return new UNIX_SystemAdministratorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemAdministratorGroupProvider")) return new UNIX_SystemAdministratorGroupProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemAdministratorRoleProvider")) return new UNIX_SystemAdministratorRoleProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemBIOSProvider")) return new UNIX_SystemBIOSProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemBusCardProvider")) return new UNIX_SystemBusCardProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemConfigurationProvider")) return new UNIX_SystemConfigurationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemIdentificationProvider")) return new UNIX_SystemIdentificationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemInNamespaceProvider")) return new UNIX_SystemInNamespaceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemPartitionProvider")) return new UNIX_SystemPartitionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemSettingProvider")) return new UNIX_SystemSettingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemSettingContextProvider")) return new UNIX_SystemSettingContextProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemStatisticalInformationProvider")) return new UNIX_SystemStatisticalInformationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SystemStatisticsProvider")) return new UNIX_SystemStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TachometerProvider")) return new UNIX_TachometerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TapeDriveProvider")) return new UNIX_TapeDriveProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TapePartitionProvider")) return new UNIX_TapePartitionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TapePartitionOnSurfaceProvider")) return new UNIX_TapePartitionOnSurfaceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TCPProtocolEndpointProvider")) return new UNIX_TCPProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TemperatureSensorProvider")) return new UNIX_TemperatureSensorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TextRedirectionSAPProvider")) return new UNIX_TextRedirectionSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TextRedirectionServiceProvider")) return new UNIX_TextRedirectionServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ThresholdIndicationProvider")) return new UNIX_ThresholdIndicationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TimeServiceProvider")) return new UNIX_TimeServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TimeZoneProvider")) return new UNIX_TimeZoneProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ToDirectoryActionProvider")) return new UNIX_ToDirectoryActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ToDirectorySpecificationProvider")) return new UNIX_ToDirectorySpecificationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TokenBucketMeterServiceProvider")) return new UNIX_TokenBucketMeterServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TokenRingAdapterProvider")) return new UNIX_TokenRingAdapterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TokenRingPortProvider")) return new UNIX_TokenRingPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TokenRingPortStatisticsProvider")) return new UNIX_TokenRingPortStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ToSMarkerServiceProvider")) return new UNIX_ToSMarkerServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TraceLevelTypeProvider")) return new UNIX_TraceLevelTypeProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TransformOfPreconfiguredActionProvider")) return new UNIX_TransformOfPreconfiguredActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TransformOfSecurityAssociationProvider")) return new UNIX_TransformOfSecurityAssociationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TransparentBridgingDynamicForwardingProvider")) return new UNIX_TransparentBridgingDynamicForwardingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TransparentBridgingServiceProvider")) return new UNIX_TransparentBridgingServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TransparentBridgingStaticForwardingProvider")) return new UNIX_TransparentBridgingStaticForwardingProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TransparentBridgingStatisticsProvider")) return new UNIX_TransparentBridgingStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_TrustHierarchyProvider")) return new UNIX_TrustHierarchyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UDPProtocolEndpointProvider")) return new UNIX_UDPProtocolEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UnimodemProvider")) return new UNIX_UnimodemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UninterruptiblePowerSupplyProvider")) return new UNIX_UninterruptiblePowerSupplyProvider();
	else if (String::equalNoCase(providerName, "UNIX_ComputerSystemProvider")) return new UNIX_ComputerSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_DeviceFileProvider")) return new UNIX_DeviceFileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UnixDirectoryProvider")) return new UNIX_UnixDirectoryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FileProvider")) return new UNIX_FileProvider();
	//else if (String::equalNoCase(providerName, "UNIX_LocalFileSystemProvider")) return new UNIX_LocalFileSystemProvider();
	else if (String::equalNoCase(providerName, "UNIX_ProcessProvider")) return new UNIX_ProcessProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProcessStatisticalInformationProvider")) return new UNIX_ProcessStatisticalInformationProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ProcessStatisticsProvider")) return new UNIX_ProcessStatisticsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ThreadProvider")) return new UNIX_ThreadProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UnsignedCredentialProvider")) return new UNIX_UnsignedCredentialProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UnsignedPublicKeyProvider")) return new UNIX_UnsignedPublicKeyProvider();
	//else if (String::equalNoCase(providerName, "UNIX_USBConnectionProvider")) return new UNIX_USBConnectionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_USBControllerProvider")) return new UNIX_USBControllerProvider();
	//else if (String::equalNoCase(providerName, "UNIX_USBControllerHasHubProvider")) return new UNIX_USBControllerHasHubProvider();
	//else if (String::equalNoCase(providerName, "UNIX_USBDeviceProvider")) return new UNIX_USBDeviceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_USBHubProvider")) return new UNIX_USBHubProvider();
	//else if (String::equalNoCase(providerName, "UNIX_USBPortProvider")) return new UNIX_USBPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_USBPortOnHubProvider")) return new UNIX_USBPortOnHubProvider();
	//else if (String::equalNoCase(providerName, "UNIX_USBRedirectionCapabilitiesProvider")) return new UNIX_USBRedirectionCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_USBRedirectionSAPProvider")) return new UNIX_USBRedirectionSAPProvider();
	//else if (String::equalNoCase(providerName, "UNIX_USBRedirectionServiceProvider")) return new UNIX_USBRedirectionServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UseOfLogProvider")) return new UNIX_UseOfLogProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UseOfMessageLogProvider")) return new UNIX_UseOfMessageLogProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UserContactProvider")) return new UNIX_UserContactProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UsersAccessProvider")) return new UNIX_UsersAccessProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UsersAccountProvider")) return new UNIX_UsersAccountProvider();
	//else if (String::equalNoCase(providerName, "UNIX_UsersCredentialProvider")) return new UNIX_UsersCredentialProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VDSLModemProvider")) return new UNIX_VDSLModemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VendorPolicyActionProvider")) return new UNIX_VendorPolicyActionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VendorPolicyConditionProvider")) return new UNIX_VendorPolicyConditionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VerificationServiceProvider")) return new UNIX_VerificationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VersionCompatibilityCheckProvider")) return new UNIX_VersionCompatibilityCheckProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VideoBIOSElementProvider")) return new UNIX_VideoBIOSElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VideoBIOSFeatureProvider")) return new UNIX_VideoBIOSFeatureProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VideoBIOSFeatureVideoBIOSElementsProvider")) return new UNIX_VideoBIOSFeatureVideoBIOSElementsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VideoControllerResolutionProvider")) return new UNIX_VideoControllerResolutionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VideoHeadProvider")) return new UNIX_VideoHeadProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VideoHeadResolutionProvider")) return new UNIX_VideoHeadResolutionProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ViewProvider")) return new UNIX_ViewProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VirtualComputerSystemProvider")) return new UNIX_VirtualComputerSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VirtualEthernetSwitchSettingDataProvider")) return new UNIX_VirtualEthernetSwitchSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VirtualSystemManagementCapabilitiesProvider")) return new UNIX_VirtualSystemManagementCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VirtualSystemManagementServiceProvider")) return new UNIX_VirtualSystemManagementServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VirtualSystemMigrationSettingDataProvider")) return new UNIX_VirtualSystemMigrationSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VirtualSystemSettingDataProvider")) return new UNIX_VirtualSystemSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VirtualSystemSettingDataComponentProvider")) return new UNIX_VirtualSystemSettingDataComponentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VirtualSystemSnapshotCapabilitiesProvider")) return new UNIX_VirtualSystemSnapshotCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VirtualSystemSnapshotServiceProvider")) return new UNIX_VirtualSystemSnapshotServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VirtualSystemSnapshotServiceCapabilitiesProvider")) return new UNIX_VirtualSystemSnapshotServiceCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VLANProvider")) return new UNIX_VLANProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VLANEndpointProvider")) return new UNIX_VLANEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VLANEndpointCapabilitiesProvider")) return new UNIX_VLANEndpointCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VLANEndpointSettingDataProvider")) return new UNIX_VLANEndpointSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VLANForProvider")) return new UNIX_VLANForProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VLANServiceProvider")) return new UNIX_VLANServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VolatileStorageProvider")) return new UNIX_VolatileStorageProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VoltageSensorProvider")) return new UNIX_VoltageSensorProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VolumeSetProvider")) return new UNIX_VolumeSetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_VolumeSetBasedOnPSExtentProvider")) return new UNIX_VolumeSetBasedOnPSExtentProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WakeUpServiceProvider")) return new UNIX_WakeUpServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WakeUpServiceOnModemProvider")) return new UNIX_WakeUpServiceOnModemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WakeUpServiceOnNetworkAdapterProvider")) return new UNIX_WakeUpServiceOnNetworkAdapterProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WakeUpServiceOnNetworkPortProvider")) return new UNIX_WakeUpServiceOnNetworkPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WatchdogProvider")) return new UNIX_WatchdogProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WeightedREDDropperServiceProvider")) return new UNIX_WeightedREDDropperServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WiFiEndpointProvider")) return new UNIX_WiFiEndpointProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WiFiEndpointCapabilitiesProvider")) return new UNIX_WiFiEndpointCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WiFiEndpointSettingsProvider")) return new UNIX_WiFiEndpointSettingsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WiFiNetworkDetectionSettingsProvider")) return new UNIX_WiFiNetworkDetectionSettingsProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WiFiPortProvider")) return new UNIX_WiFiPortProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WiFiPortCapabilitiesProvider")) return new UNIX_WiFiPortCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WiFiPortConfigurationServiceProvider")) return new UNIX_WiFiPortConfigurationServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WiFiRadioProvider")) return new UNIX_WiFiRadioProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WORMDriveProvider")) return new UNIX_WORMDriveProvider();
	//else if (String::equalNoCase(providerName, "UNIX_WRRSchedulingElementProvider")) return new UNIX_WRRSchedulingElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_X509CertificateProvider")) return new UNIX_X509CertificateProvider();
	//else if (String::equalNoCase(providerName, "UNIX_X509CredentialFilterEntryProvider")) return new UNIX_X509CredentialFilterEntryProvider();
	//else if (String::equalNoCase(providerName, "UNIX_X509CRLProvider")) return new UNIX_X509CRLProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ZoneProvider")) return new UNIX_ZoneProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ZoneCapabilitiesProvider")) return new UNIX_ZoneCapabilitiesProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ZoneMembershipSettingDataProvider")) return new UNIX_ZoneMembershipSettingDataProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ZoneServiceProvider")) return new UNIX_ZoneServiceProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ZoneSetProvider")) return new UNIX_ZoneSetProvider();
	//else if (String::equalNoCase(providerName, "UNIX_ApplicationSystemProvider")) return new UNIX_ApplicationSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_FileSystemProvider")) return new UNIX_FileSystemProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareElementProvider")) return new UNIX_SoftwareElementProvider();
	//else if (String::equalNoCase(providerName, "UNIX_SoftwareFeatureProvider")) return new UNIX_SoftwareFeatureProvider();
	return NULL;
}
