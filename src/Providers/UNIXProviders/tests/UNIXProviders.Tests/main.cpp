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

#include <UNIX_Common.h>

#include "Meta_ClassFixture.h"
//#include "UNIX_AbstractIndicationSubscriptionFixture.h"
//#include "UNIX_AcceptCredentialFromFixture.h"
//#include "UNIX_AccessControlInformationFixture.h"
//#include "UNIX_AccessLabelReaderFixture.h"
#include "UNIX_AccountFixture.h"
//#include "UNIX_AccountAuthenticationFixture.h"
//#include "UNIX_AccountIdentityFixture.h"
//#include "UNIX_AccountManagementCapabilitiesFixture.h"
#include "UNIX_AccountManagementServiceFixture.h"
//#include "UNIX_AccountMapsToAccountFixture.h"
#include "UNIX_AccountOnSystemFixture.h"
//#include "UNIX_AccountSettingDataFixture.h"
//#include "UNIX_ActionSequenceFixture.h"
#include "UNIX_ActiveConnectionFixture.h"
//#include "UNIX_ActsAsSpareFixture.h"
//#include "UNIX_AdapterActiveConnectionFixture.h"
//#include "UNIX_AdjacentSlotsFixture.h"
//#include "UNIX_AdministrativeDistanceFixture.h"
//#include "UNIX_ADSLModemFixture.h"
//#include "UNIX_AffectedJobElementFixture.h"
//#include "UNIX_AFRelatedServicesFixture.h"
//#include "UNIX_AFServiceFixture.h"
//#include "UNIX_AggregatePExtentFixture.h"
//#include "UNIX_AggregatePSExtentFixture.h"
//#include "UNIX_AggregatePSExtentBasedOnAggregatePExtentFixture.h"
//#include "UNIX_AggregatePSExtentBasedOnPExtentFixture.h"
//#include "UNIX_AggregateRedundancyComponentFixture.h"
//#include "UNIX_AggregationMetricDefinitionFixture.h"
//#include "UNIX_AggregationMetricValueFixture.h"
//#include "UNIX_AGPSoftwareFeatureFixture.h"
//#include "UNIX_AGPVideoControllerFixture.h"
//#include "UNIX_AHTransformFixture.h"
//#include "UNIX_AlarmDeviceFixture.h"
//#include "UNIX_AlarmDeviceCapabilitiesFixture.h"
//#include "UNIX_AlertInstIndicationFixture.h"
//#include "UNIX_AllocatedDMAFixture.h"
//#include "UNIX_AllocatedFromStoragePoolFixture.h"
//#include "UNIX_AllocatedResourceFixture.h"
//#include "UNIX_AllocationCapabilitiesFixture.h"
//#include "UNIX_AllocationSchedulingElementFixture.h"
//#include "UNIX_ApplicationSystemDependencyFixture.h"
//#include "UNIX_ApplicationSystemDirectoryFixture.h"
//#include "UNIX_ApplicationSystemHierarchyFixture.h"
//#include "UNIX_ApplicationSystemSoftwareFeatureFixture.h"
//#include "UNIX_ArchitectureCheckFixture.h"
//#include "UNIX_AreaOfConfigurationFixture.h"
//#include "UNIX_ASBGPEndpointsFixture.h"
//#include "UNIX_AssignedIdentityFixture.h"
//#include "UNIX_AssociatedAlarmFixture.h"
//#include "UNIX_AssociatedBatteryFixture.h"
//#include "UNIX_AssociatedBlockStatisticsManifestCollectionFixture.h"
//#include "UNIX_AssociatedCacheMemoryFixture.h"
//#include "UNIX_AssociatedComponentExtentFixture.h"
//#include "UNIX_AssociatedCoolingFixture.h"
//#include "UNIX_AssociatedDatabaseSystemFixture.h"
//#include "UNIX_AssociatedIndicatorLEDFixture.h"
//#include "UNIX_AssociatedJobMethodResultFixture.h"
//#include "UNIX_AssociatedNextHopFixture.h"
//#include "UNIX_AssociatedPrivilegeFixture.h"
//#include "UNIX_AssociatedProcessorMemoryFixture.h"
//#include "UNIX_AssociatedProtocolControllerFixture.h"
//#include "UNIX_AssociatedRemainingExtentFixture.h"
//#include "UNIX_AssociatedSupplyCurrentSensorFixture.h"
//#include "UNIX_AssociatedSupplyVoltageSensorFixture.h"
//#include "UNIX_AuthenticateForUseFixture.h"
//#include "UNIX_AuthenticationRequirementFixture.h"
//#include "UNIX_AuthenticationRuleFixture.h"
//#include "UNIX_AuthenticationTargetFixture.h"
//#include "UNIX_AuthorizationServiceFixture.h"
//#include "UNIX_AuthorizationSubjectFixture.h"
//#include "UNIX_AuthorizationTargetFixture.h"
//#include "UNIX_AuthorizedPrivilegeFixture.h"
//#include "UNIX_AuthorizedSubjectFixture.h"
//#include "UNIX_AuthorizedTargetFixture.h"
//#include "UNIX_AuthorizedUseFixture.h"
//#include "UNIX_AutonomousSystemFixture.h"
//#include "UNIX_AverageRateMeterServiceFixture.h"
//#include "UNIX_BaseMetricValueFixture.h"
//#include "UNIX_BatteryFixture.h"
//#include "UNIX_BGPAdminDistanceFixture.h"
//#include "UNIX_BGPAttributesFixture.h"
//#include "UNIX_BGPAttributesForRouteFixture.h"
//#include "UNIX_BGPClusterFixture.h"
//#include "UNIX_BGPClustersInASFixture.h"
//#include "UNIX_BGPEndpointStatisticsFixture.h"
//#include "UNIX_BGPIPRouteFixture.h"
//#include "UNIX_BGPPathAttributesFixture.h"
//#include "UNIX_BGPPeerGroupFixture.h"
//#include "UNIX_BGPPeerGroupServiceFixture.h"
//#include "UNIX_BGPPeerUsesRouteMapFixture.h"
//#include "UNIX_BGPProtocolEndpointFixture.h"
//#include "UNIX_BGPRouteMapFixture.h"
//#include "UNIX_BGPRouteMapsInRoutingPolicyFixture.h"
//#include "UNIX_BGPRoutingPolicyFixture.h"
//#include "UNIX_BGPServiceFixture.h"
//#include "UNIX_BGPServiceAttributesFixture.h"
//#include "UNIX_BGPServiceStatisticsFixture.h"
//#include "UNIX_BGPStatisticsFixture.h"
//#include "UNIX_BinarySensorFixture.h"
//#include "UNIX_BiometricAuthenticationFixture.h"
#include "UNIX_BIOSElementFixture.h"
//#include "UNIX_BIOSEnumerationFixture.h"
#include "UNIX_BIOSFeatureFixture.h"
//#include "UNIX_BIOSFeatureBIOSElementsFixture.h"
//#include "UNIX_BIOSIntegerFixture.h"
//#include "UNIX_BIOSLoadedInNVFixture.h"
//#include "UNIX_BIOSPasswordFixture.h"
//#include "UNIX_BIOSServiceFixture.h"
//#include "UNIX_BIOSServiceCapabilitiesFixture.h"
//#include "UNIX_BIOSStringFixture.h"
//#include "UNIX_BlockStatisticsCapabilitiesFixture.h"
//#include "UNIX_BlockStatisticsManifestFixture.h"
//#include "UNIX_BlockStatisticsManifestCollectionFixture.h"
//#include "UNIX_BlockStatisticsServiceFixture.h"
//#include "UNIX_BlockStorageStatisticalDataFixture.h"
//#include "UNIX_BootConfigSettingFixture.h"
//#include "UNIX_BootOSFromFSFixture.h"
//#include "UNIX_BootSAPFixture.h"
//#include "UNIX_BootServiceFixture.h"
//#include "UNIX_BootServiceAccessBySAPFixture.h"
//#include "UNIX_BootServiceCapabilitiesFixture.h"
//#include "UNIX_BootSettingDataFixture.h"
//#include "UNIX_BootSourceSettingFixture.h"
//#include "UNIX_BoundedPrioritySchedulingElementFixture.h"
//#include "UNIX_BufferPoolFixture.h"
//#include "UNIX_CableModemFixture.h"
//#include "UNIX_CacheMemoryFixture.h"
//#include "UNIX_CAHasPublicCertificateFixture.h"
//#include "UNIX_CalculatedRoutesFixture.h"
//#include "UNIX_CalculatesAmongFixture.h"
//#include "UNIX_CalculationBasedOnQueueFixture.h"
//#include "UNIX_CalculationServiceForDropperFixture.h"
//#include "UNIX_CardFixture.h"
//#include "UNIX_CardInSlotFixture.h"
//#include "UNIX_CardOnCardFixture.h"
//#include "UNIX_CASignsPublicKeyCertificateFixture.h"
//#include "UNIX_CDROMDriveFixture.h"
//#include "UNIX_CertificateAuthorityFixture.h"
//#include "UNIX_CertificateManagementCapabilitiesFixture.h"
//#include "UNIX_CertificateManagementServiceFixture.h"
//#include "UNIX_ChangerDeviceFixture.h"
//#include "UNIX_ChassisFixture.h"
//#include "UNIX_ChassisInRackFixture.h"
//#include "UNIX_ChipFixture.h"
//#include "UNIX_CIMOMStatisticalDataFixture.h"
//#include "UNIX_CIMXMLCommunicationMechanismFixture.h"
//#include "UNIX_ClassCreationFixture.h"
//#include "UNIX_ClassDeletionFixture.h"
//#include "UNIX_ClassifierElementFixture.h"
//#include "UNIX_ClassifierElementInClassifierServiceFixture.h"
//#include "UNIX_ClassifierElementUsesFilterListFixture.h"
//#include "UNIX_ClassifierFilterSetFixture.h"
//#include "UNIX_ClassifierServiceFixture.h"
//#include "UNIX_ClassModificationFixture.h"
//#include "UNIX_CLPCapabilitiesFixture.h"
//#include "UNIX_CLPProtocolEndpointFixture.h"
//#include "UNIX_CLPSettingDataFixture.h"
//#include "UNIX_ClusterFixture.h"
//#include "UNIX_ClusteringSAPFixture.h"
//#include "UNIX_ClusteringServiceFixture.h"
//#include "UNIX_ClusterServiceAccessBySAPFixture.h"
//#include "UNIX_CollectedBufferPoolFixture.h"
//#include "UNIX_CollectedCollectionsFixture.h"
//#include "UNIX_CollectedSoftwareElementsFixture.h"
//#include "UNIX_CollectedSoftwareFeaturesFixture.h"
//#include "UNIX_CollectionConfigurationFixture.h"
//#include "UNIX_CollectionInOrganizationFixture.h"
//#include "UNIX_CollectionInSystemFixture.h"
//#include "UNIX_CollectionOfSensorsFixture.h"
//#include "UNIX_CollectionSettingFixture.h"
//#include "UNIX_CommMechanismForAdapterFixture.h"
//#include "UNIX_CommMechanismForManagerFixture.h"
//#include "UNIX_CommMechanismForObjectManagerAdapterFixture.h"
//#include "UNIX_CommonDatabaseFixture.h"
//#include "UNIX_CommonDatabaseCapabilitiesFixture.h"
//#include "UNIX_CommonDatabaseSettingDataFixture.h"
//#include "UNIX_CommonDatabaseStatisticsFixture.h"
//#include "UNIX_CompatibleProductFixture.h"
//#include "UNIX_ComponentCSFixture.h"
//#include "UNIX_CompositeExtentFixture.h"
//#include "UNIX_CompositeExtentBasedOnFixture.h"
//#include "UNIX_CompoundPolicyActionFixture.h"
//#include "UNIX_CompoundPolicyConditionFixture.h"
//#include "UNIX_ComputerSystemDMAFixture.h"
//#include "UNIX_ComputerSystemIRQFixture.h"
//#include "UNIX_ComputerSystemMappedIOFixture.h"
//#include "UNIX_ComputerSystemMemoryFixture.h"
//#include "UNIX_ComputerSystemNodeCapabilitiesFixture.h"
//#include "UNIX_ComputerSystemPackageFixture.h"
//#include "UNIX_ComputerSystemProcessorFixture.h"
//#include "UNIX_ConcreteCollectionFixture.h"
//#include "UNIX_ConcreteComponentFixture.h"
//#include "UNIX_ConcreteDependencyFixture.h"
//#include "UNIX_ConcreteIdentityFixture.h"
//#include "UNIX_ConcreteJobFixture.h"
//#include "UNIX_ConditioningServiceOnEndpointFixture.h"
//#include "UNIX_ConfederationFixture.h"
//#include "UNIX_ConfigurationFixture.h"
//#include "UNIX_ConfigurationCapacityFixture.h"
//#include "UNIX_ConfigurationComponentFixture.h"
//#include "UNIX_ConfigurationForSystemFixture.h"
//#include "UNIX_ConfigurationReportingServiceFixture.h"
//#include "UNIX_ConnectedToFixture.h"
//#include "UNIX_ConnectivityMembershipSettingDataFixture.h"
//#include "UNIX_ConnectorOnPackageFixture.h"
//#include "UNIX_ContainedDomainFixture.h"
//#include "UNIX_ContainedLocationFixture.h"
//#include "UNIX_ContainedProposalFixture.h"
//#include "UNIX_ContainedTransformFixture.h"
//#include "UNIX_ControllerConfigurationServiceFixture.h"
//#include "UNIX_CopyFileActionFixture.h"
//#include "UNIX_CorrespondingSettingDataRecordFixture.h"
//#include "UNIX_CorrespondingSettingsRecordFixture.h"
//#include "UNIX_CreateDirectoryActionFixture.h"
//#include "UNIX_CredentialContextFixture.h"
//#include "UNIX_CredentialManagementCapabilitiesFixture.h"
//#include "UNIX_CredentialManagementSAPFixture.h"
//#include "UNIX_CredentialStoreFixture.h"
//#include "UNIX_CurrentSensorFixture.h"
//#include "UNIX_CurrentTimeFixture.h"
//#include "UNIX_DatabaseAdministratorFixture.h"
//#include "UNIX_DatabaseControlFileFixture.h"
//#include "UNIX_DatabaseFileFixture.h"
//#include "UNIX_DatabaseParameterFixture.h"
//#include "UNIX_DatabaseResourceStatisticsFixture.h"
//#include "UNIX_DatabaseSegmentFixture.h"
//#include "UNIX_DatabaseSegmentSettingDataFixture.h"
//#include "UNIX_DatabaseServiceFixture.h"
//#include "UNIX_DatabaseServiceStatisticsFixture.h"
//#include "UNIX_DatabaseStorageFixture.h"
//#include "UNIX_DatabaseStorageAreaFixture.h"
#include "UNIX_DatabaseSystemFixture.h"
//#include "UNIX_DataFileFixture.h"
//#include "UNIX_DependencyContextFixture.h"
//#include "UNIX_DesktopMonitorFixture.h"
//#include "UNIX_DeviceAccessedByFileFixture.h"
//#include "UNIX_DeviceErrorCountsFixture.h"
//#include "UNIX_DeviceErrorDataFixture.h"
//#include "UNIX_DeviceFileFixture.h"
//#include "UNIX_DeviceIdentityFixture.h"
//#include "UNIX_DeviceSAPImplementationFixture.h"
//#include "UNIX_DeviceServicesLocationFixture.h"
//#include "UNIX_DeviceSharingCapabilitiesFixture.h"
//#include "UNIX_DeviceSoftwareFixture.h"
//#include "UNIX_DeviceStatisticsFixture.h"
//#include "UNIX_DHCPCapabilitiesFixture.h"
//#include "UNIX_DHCPProtocolEndpointFixture.h"
//#include "UNIX_DHCPSettingDataFixture.h"
//#include "UNIX_DiagnosticCompletionRecordFixture.h"
//#include "UNIX_DiagnosticLogFixture.h"
//#include "UNIX_DiagnosticResultFixture.h"
//#include "UNIX_DiagnosticResultForMSEFixture.h"
//#include "UNIX_DiagnosticResultForTestFixture.h"
//#include "UNIX_DiagnosticResultInPackageFixture.h"
//#include "UNIX_DiagnosticServiceFixture.h"
//#include "UNIX_DiagnosticServiceCapabilitiesFixture.h"
//#include "UNIX_DiagnosticServiceRecordFixture.h"
//#include "UNIX_DiagnosticSettingFixture.h"
//#include "UNIX_DiagnosticSettingDataFixture.h"
//#include "UNIX_DiagnosticSettingDataRecordFixture.h"
//#include "UNIX_DiagnosticSettingRecordFixture.h"
//#include "UNIX_DiagnosticsLogFixture.h"
//#include "UNIX_DiagnosticTestFixture.h"
//#include "UNIX_DiagnosticTestForMSEFixture.h"
//#include "UNIX_DiagnosticTestInPackageFixture.h"
//#include "UNIX_DiagnosticTestSoftwareFixture.h"
#include "UNIX_DirectoryFixture.h"
//#include "UNIX_DirectoryContainsFileFixture.h"
//#include "UNIX_DirectorySpecificationFixture.h"
//#include "UNIX_DirectorySpecificationFileFixture.h"
//#include "UNIX_DiscreteSensorFixture.h"
#include "UNIX_DiskDriveFixture.h"
//#include "UNIX_DisketteDriveFixture.h"
//#include "UNIX_DiskGroupFixture.h"
#include "UNIX_DiskPartitionFixture.h"
//#include "UNIX_DiskPartitionBasedOnVolumeFixture.h"
//#include "UNIX_DiskSpaceCheckFixture.h"
//#include "UNIX_DisplayControllerFixture.h"
//#include "UNIX_DMAFixture.h"
//#include "UNIX_DNSGeneralSettingDataFixture.h"
//#include "UNIX_DNSProtocolEndpointFixture.h"
//#include "UNIX_DNSSettingDataFixture.h"
//#include "UNIX_DockedFixture.h"
//#include "UNIX_DocumentAuthenticationFixture.h"
//#include "UNIX_DoorFixture.h"
//#include "UNIX_DoorAccessToDeviceFixture.h"
//#include "UNIX_DoorAccessToPhysicalElementFixture.h"
//#include "UNIX_DriveInDiskGroupFixture.h"
//#include "UNIX_DropThresholdCalculationServiceFixture.h"
//#include "UNIX_DSCPMarkerServiceFixture.h"
//#include "UNIX_DVDDriveFixture.h"
//#include "UNIX_DynamicForwardingEntryFixture.h"
//#include "UNIX_EFServiceFixture.h"
//#include "UNIX_EGPRouteCalcDependencyFixture.h"
//#include "UNIX_EgressConditioningServiceOnEndpointFixture.h"
//#include "UNIX_ElementAllocatedFromPoolFixture.h"
//#include "UNIX_ElementAsUserFixture.h"
//#include "UNIX_ElementCapabilitiesFixture.h"
//#include "UNIX_ElementCapacityFixture.h"
//#include "UNIX_ElementConfigurationFixture.h"
//#include "UNIX_ElementConformsToProfileFixture.h"
//#include "UNIX_ElementInConnectorFixture.h"
//#include "UNIX_ElementInPolicyRoleCollectionFixture.h"
//#include "UNIX_ElementInSchedulingServiceFixture.h"
//#include "UNIX_ElementLocationFixture.h"
//#include "UNIX_ElementProfileFixture.h"
//#include "UNIX_ElementSecuritySensitivityFixture.h"
//#include "UNIX_ElementSettingFixture.h"
//#include "UNIX_ElementSettingDataFixture.h"
//#include "UNIX_ElementsLinkedFixture.h"
//#include "UNIX_ElementSoftwareIdentityFixture.h"
//#include "UNIX_ElementStatisticalDataFixture.h"
//#include "UNIX_ElementViewFixture.h"
//#include "UNIX_EndpointForIPNetworkConnectionFixture.h"
//#include "UNIX_EndpointIdentityFixture.h"
//#include "UNIX_EndpointInAreaFixture.h"
//#include "UNIX_EndpointInLinkFixture.h"
//#include "UNIX_EndpointOfNetworkPipeFixture.h"
//#include "UNIX_EntriesInFilterListFixture.h"
//#include "UNIX_ErrorFixture.h"
//#include "UNIX_ErrorCountersForDeviceFixture.h"
//#include "UNIX_ESCONControllerFixture.h"
//#include "UNIX_ESPTransformFixture.h"
//#include "UNIX_EthernetAdapterFixture.h"
#include "UNIX_EthernetPortFixture.h"
//#include "UNIX_EthernetPortAllocationSettingDataFixture.h"
//#include "UNIX_EthernetPortStatisticsFixture.h"
//#include "UNIX_EWMAMeterServiceFixture.h"
//#include "UNIX_ExecuteProgramFixture.h"
//#include "UNIX_ExportFixture.h"
//#include "UNIX_ExtendedStaticIPAssignmentSettingDataFixture.h"
//#include "UNIX_ExtentInDiskGroupFixture.h"
//#include "UNIX_ExtraCapacityGroupFixture.h"
//#include "UNIX_FanFixture.h"
//#include "UNIX_FCAdapterEventCountersFixture.h"
//#include "UNIX_FCPortFixture.h"
//#include "UNIX_FCPortCapabilitiesFixture.h"
//#include "UNIX_FCPortRateStatisticsFixture.h"
//#include "UNIX_FCPortStatisticsFixture.h"
//#include "UNIX_FCSwitchCapabilitiesFixture.h"
//#include "UNIX_FCSwitchSettingsFixture.h"
//#include "UNIX_FibreChannelAdapterFixture.h"
//#include "UNIX_FibrePortFixture.h"
//#include "UNIX_FibrePortActiveLoginFixture.h"
//#include "UNIX_FibrePortEventCountersFixture.h"
//#include "UNIX_FibrePortOnFCAdapterFixture.h"
//#include "UNIX_FibreProtocolServiceFixture.h"
//#include "UNIX_FIFOPipeFileFixture.h"
//#include "UNIX_FileIdentityFixture.h"
//#include "UNIX_FileSpecificationFixture.h"
//#include "UNIX_FileStorageFixture.h"
//#include "UNIX_FileSystemCapabilitiesFixture.h"
//#include "UNIX_FileSystemSettingDataFixture.h"
//#include "UNIX_FilterCollectionFixture.h"
//#include "UNIX_FilteredBGPAttributesFixture.h"
//#include "UNIX_FilterEntryFixture.h"
//#include "UNIX_FilterEntryInSystemFixture.h"
//#include "UNIX_FilterListFixture.h"
//#include "UNIX_FilterListInSystemFixture.h"
//#include "UNIX_FilterListsInBGPRouteMapFixture.h"
//#include "UNIX_FilterOfPacketConditionFixture.h"
//#include "UNIX_FilterOfSecurityAssociationFixture.h"
//#include "UNIX_FlatPanelFixture.h"
//#include "UNIX_FlowServiceFixture.h"
//#include "UNIX_ForwardedRoutesFixture.h"
//#include "UNIX_ForwardsAmongFixture.h"
//#include "UNIX_FromDirectoryActionFixture.h"
//#include "UNIX_FromDirectorySpecificationFixture.h"
//#include "UNIX_FRUFixture.h"
//#include "UNIX_FRUIncludesProductFixture.h"
//#include "UNIX_FRUIncludesSoftwareFeatureFixture.h"
//#include "UNIX_FRUPhysicalElementsFixture.h"
//#include "UNIX_GatewayPathIDFixture.h"
#include "UNIX_GroupFixture.h"
//#include "UNIX_HardwareThreadFixture.h"
//#include "UNIX_Hdr8021FilterFixture.h"
//#include "UNIX_Hdr8021PServiceFixture.h"
//#include "UNIX_HDSLModemFixture.h"
//#include "UNIX_HeadTailDropperFixture.h"
//#include "UNIX_HeadTailDropQueueBindingFixture.h"
//#include "UNIX_HeatPipeFixture.h"
//#include "UNIX_HelpServiceFixture.h"
//#include "UNIX_HomeForMediaFixture.h"
//#include "UNIX_HostedACIFixture.h"
//#include "UNIX_HostedAdminDistanceFixture.h"
//#include "UNIX_HostedAuthenticationRequirementFixture.h"
//#include "UNIX_HostedBGPAttributesFixture.h"
//#include "UNIX_HostedBGPPeerGroupFixture.h"
//#include "UNIX_HostedBGPRouteMapFixture.h"
//#include "UNIX_HostedBootSAPFixture.h"
//#include "UNIX_HostedBootServiceFixture.h"
//#include "UNIX_HostedClusterSAPFixture.h"
//#include "UNIX_HostedClusterServiceFixture.h"
//#include "UNIX_HostedCollectionFixture.h"
//#include "UNIX_HostedFileSystemFixture.h"
//#include "UNIX_HostedFilterEntryBaseFixture.h"
//#include "UNIX_HostedFilterListFixture.h"
//#include "UNIX_HostedForwardingServicesFixture.h"
//#include "UNIX_HostedJobDestinationFixture.h"
//#include "UNIX_HostedNetworkPipeFixture.h"
//#include "UNIX_HostedResourcePoolFixture.h"
//#include "UNIX_HostedRouteFixture.h"
//#include "UNIX_HostedRoutingPolicyFixture.h"
//#include "UNIX_HostedRoutingServicesFixture.h"
//#include "UNIX_HostedStoragePoolFixture.h"
//#include "UNIX_HostingCSFixture.h"
//#include "UNIX_IBSubnetManagerFixture.h"
//#include "UNIX_IDEControllerFixture.h"
//#include "UNIX_IdentificationOfManagedSystemFixture.h"
//#include "UNIX_IdentityContextFixture.h"
//#include "UNIX_IdentityManagementServiceFixture.h"
//#include "UNIX_IEEE8021xCapabilitiesFixture.h"
//#include "UNIX_IEEE8021xSettingsFixture.h"
//#include "UNIX_IKEActionFixture.h"
//#include "UNIX_IKEProposalFixture.h"
//#include "UNIX_IKERuleFixture.h"
//#include "UNIX_IKESAEndpointFixture.h"
//#include "UNIX_IKESecretIsNamedFixture.h"
//#include "UNIX_InBGPPeerGroupFixture.h"
//#include "UNIX_InboundVLANFixture.h"
//#include "UNIX_IndicationFilterFixture.h"
//#include "UNIX_IndicationHandlerCIMXMLFixture.h"
//#include "UNIX_IndicationServiceFixture.h"
//#include "UNIX_IndicationServiceCapabilitiesFixture.h"
//#include "UNIX_IndicationServiceSettingDataFixture.h"
//#include "UNIX_IndicatorLEDFixture.h"
//#include "UNIX_IndicatorLEDCapabilitiesFixture.h"
//#include "UNIX_InfraredControllerFixture.h"
//#include "UNIX_IngressConditioningServiceOnEndpointFixture.h"
//#include "UNIX_InLogicalNetworkFixture.h"
//#include "UNIX_InSegmentFixture.h"
#include "UNIX_InstalledOSFixture.h"
//#include "UNIX_InstalledProductFixture.h"
//#include "UNIX_InstalledProductImageFixture.h"
#include "UNIX_InstalledSoftwareElementFixture.h"
//#include "UNIX_InstalledSoftwareIdentityFixture.h"
//#include "UNIX_InstCreationFixture.h"
//#include "UNIX_InstDeletionFixture.h"
//#include "UNIX_InstMethodCallFixture.h"
//#include "UNIX_InstModificationFixture.h"
//#include "UNIX_InstReadFixture.h"
//#include "UNIX_InterLibraryPortFixture.h"
//#include "UNIX_IPAddressRangeFixture.h"
//#include "UNIX_IPCOMPTransformFixture.h"
//#include "UNIX_IPConfigurationServiceFixture.h"
//#include "UNIX_IPConnectivitySubnetFixture.h"
//#include "UNIX_IPHeadersFilterFixture.h"
//#include "UNIX_IPNetworkConnectionFixture.h"
//#include "UNIX_IPNetworkIdentityFixture.h"
//#include "UNIX_IPProtocolEndpointFixture.h"
//#include "UNIX_IPsecPolicyForEndpointFixture.h"
//#include "UNIX_IPsecPolicyForSystemFixture.h"
//#include "UNIX_IPsecProposalFixture.h"
//#include "UNIX_IPsecRuleFixture.h"
//#include "UNIX_IPsecSAEndpointFixture.h"
//#include "UNIX_IPsecTransportActionFixture.h"
//#include "UNIX_IPsecTunnelActionFixture.h"
//#include "UNIX_IPSOFilterEntryFixture.h"
//#include "UNIX_IPSubnetFixture.h"
//#include "UNIX_IPVersionSettingDataFixture.h"
//#include "UNIX_IPXConnectivityNetworkFixture.h"
//#include "UNIX_IPXNetworkFixture.h"
//#include "UNIX_IPXProtocolEndpointFixture.h"
//#include "UNIX_IRQFixture.h"
//#include "UNIX_iSCSICapabilitiesFixture.h"
//#include "UNIX_iSCSIConnectionFixture.h"
//#include "UNIX_iSCSIConnectionSettingsFixture.h"
//#include "UNIX_iSCSILoginStatisticsFixture.h"
//#include "UNIX_iSCSIProtocolEndpointFixture.h"
//#include "UNIX_iSCSISessionFixture.h"
//#include "UNIX_iSCSISessionFailuresFixture.h"
//#include "UNIX_iSCSISessionSettingsFixture.h"
//#include "UNIX_ISDNModemFixture.h"
//#include "UNIX_IsSpareFixture.h"
//#include "UNIX_JobDestinationJobsFixture.h"
//#include "UNIX_JobQueueFixture.h"
//#include "UNIX_JobSettingDataFixture.h"
//#include "UNIX_KDCIssuesKerberosTicketFixture.h"
//#include "UNIX_KerberosAuthenticationFixture.h"
//#include "UNIX_KerberosCredentialFixture.h"
//#include "UNIX_KerberosKeyDistributionCenterFixture.h"
//#include "UNIX_KerberosTicketFixture.h"
//#include "UNIX_KeyBasedCredentialManagementServiceFixture.h"
//#include "UNIX_KeyboardFixture.h"
//#include "UNIX_KeystoreFixture.h"
//#include "UNIX_KVMRedirectionSAPFixture.h"
//#include "UNIX_LabelReaderFixture.h"
//#include "UNIX_LabelReaderStatDataFixture.h"
//#include "UNIX_LabelReaderStatInfoFixture.h"
//#include "UNIX_LANConnectivitySegmentFixture.h"
//#include "UNIX_LANEndpointFixture.h"
//#include "UNIX_LANSegmentFixture.h"
//#include "UNIX_LastAppliedSnapshotFixture.h"
//#include "UNIX_LaunchInContextCapabilitiesFixture.h"
//#include "UNIX_LaunchInContextSAPFixture.h"
//#include "UNIX_LaunchInContextServiceFixture.h"
//#include "UNIX_LibraryExchangeFixture.h"
//#include "UNIX_LibraryPackageFixture.h"
//#include "UNIX_LimitedAccessPortFixture.h"
//#include "UNIX_LinkHasConnectorFixture.h"
//#include "UNIX_ListenerDestinationCIMXMLFixture.h"
//#include "UNIX_ListenerDestinationWSManagementFixture.h"
//#include "UNIX_ListsInRoutingPolicyFixture.h"
//#include "UNIX_LLDPEthernetPortFixture.h"
//#include "UNIX_LLDPEthernetPortStatisticsFixture.h"
#include "UNIX_LocalFileSystemFixture.h"
//#include "UNIX_LocalizationCapabilitiesFixture.h"
//#include "UNIX_LocallyManagedPublicKeyFixture.h"
//#include "UNIX_LocationFixture.h"
#include "UNIX_LogEntryFixture.h"
#include "UNIX_LogicalDiskFixture.h"
//#include "UNIX_LogicalDiskBasedOnPartitionFixture.h"
//#include "UNIX_LogicalDiskBasedOnVolumeFixture.h"
//#include "UNIX_LogicalDiskBasedOnVolumeSetFixture.h"
//#include "UNIX_LogicalModuleFixture.h"
//#include "UNIX_LogicalNetworkServiceFixture.h"
//#include "UNIX_LogicalPortGroupFixture.h"
//#include "UNIX_LogicalPortSettingsFixture.h"
//#include "UNIX_LogInDataFileFixture.h"
//#include "UNIX_LogInDeviceFileFixture.h"
//#include "UNIX_LogInStorageFixture.h"
//#include "UNIX_LogManagesRecordFixture.h"
//#include "UNIX_LogRecordFixture.h"
//#include "UNIX_MagazineFixture.h"
//#include "UNIX_MagnetoOpticalDriveFixture.h"
//#include "UNIX_ManagementControllerFixture.h"
//#include "UNIX_ManagesAccountFixture.h"
//#include "UNIX_ManagesAccountOnSystemFixture.h"
//#include "UNIX_MediaAccessStatDataFixture.h"
//#include "UNIX_MediaAccessStatInfoFixture.h"
//#include "UNIX_MediaPhysicalStatDataFixture.h"
//#include "UNIX_MediaPhysicalStatInfoFixture.h"
//#include "UNIX_MediaPresentFixture.h"
//#include "UNIX_MediaRedirectionCapabilitiesFixture.h"
//#include "UNIX_MediaRedirectionSAPFixture.h"
//#include "UNIX_MemberPrincipalFixture.h"
//#include "UNIX_MemoryCapacityFixture.h"
//#include "UNIX_MemoryCheckFixture.h"
//#include "UNIX_MemoryErrorFixture.h"
//#include "UNIX_MemoryOnCardFixture.h"
//#include "UNIX_MemoryResourceFixture.h"
//#include "UNIX_MemoryWithMediaFixture.h"
#include "UNIX_MessageLogFixture.h"
//#include "UNIX_MethodActionFixture.h"
//#include "UNIX_MethodParametersFixture.h"
//#include "UNIX_MethodResultFixture.h"
//#include "UNIX_MetricDefForMEFixture.h"
//#include "UNIX_MetricDefinitionFixture.h"
//#include "UNIX_MetricForMEFixture.h"
//#include "UNIX_MetricInstanceFixture.h"
//#include "UNIX_MetricServiceFixture.h"
//#include "UNIX_MetricServiceCapabilitiesFixture.h"
//#include "UNIX_ModifySettingActionFixture.h"
//#include "UNIX_ModulePortFixture.h"
//#include "UNIX_MonitorResolutionFixture.h"
//#include "UNIX_MoreGroupInfoFixture.h"
//#include "UNIX_MoreOrganizationInfoFixture.h"
//#include "UNIX_MoreOrgUnitInfoFixture.h"
//#include "UNIX_MorePersonInfoFixture.h"
//#include "UNIX_MoreRoleInfoFixture.h"
#include "UNIX_MountFixture.h"
//#include "UNIX_MultiStateSensorFixture.h"
//#include "UNIX_NamedAddressCollectionFixture.h"
//#include "UNIX_NamedCredentialFixture.h"
//#include "UNIX_NamedSharedIKESecretFixture.h"
//#include "UNIX_NamespaceFixture.h"
//#include "UNIX_NamespaceInManagerFixture.h"
//#include "UNIX_NetworkFixture.h"
//#include "UNIX_NetworkAdapterRedundancyComponentFixture.h"
//#include "UNIX_NetworkingIDAuthenticationFixture.h"
//#include "UNIX_NetworkPacketActionFixture.h"
//#include "UNIX_NetworkPipeCompositionFixture.h"
//#include "UNIX_NetworkPortCapabilitiesFixture.h"
//#include "UNIX_NetworkPortConfigurationServiceFixture.h"
//#include "UNIX_NetworkServicesInAdminDomainFixture.h"
//#include "UNIX_NetworksInAdminDomainFixture.h"
//#include "UNIX_NetworkVirtualAdapterFixture.h"
//#include "UNIX_NetworkVLANFixture.h"
//#include "UNIX_NextHopIPRouteFixture.h"
//#include "UNIX_NextHopRouteFixture.h"
//#include "UNIX_NextServiceFixture.h"
//#include "UNIX_NextServiceAfterMeterFixture.h"
#include "UNIX_NFSFixture.h"
//#include "UNIX_NonVolatileStorageFixture.h"
//#include "UNIX_NonWorkConservingSchedulingServiceFixture.h"
//#include "UNIX_NotaryFixture.h"
//#include "UNIX_NotaryVerifiesBiometricFixture.h"
//#include "UNIX_ObjectManagerFixture.h"
//#include "UNIX_ObjectManagerAdapterFixture.h"
//#include "UNIX_ObjectManagerCommunicationMechanismFixture.h"
//#include "UNIX_OOBAlertServiceFixture.h"
//#include "UNIX_OOBAlertServiceOnModemFixture.h"
//#include "UNIX_OOBAlertServiceOnNetworkAdapterFixture.h"
//#include "UNIX_OOBAlertServiceOnNetworkPortFixture.h"
//#include "UNIX_OpaqueManagementDataFixture.h"
//#include "UNIX_OpaqueManagementDataCapabilitiesFixture.h"
//#include "UNIX_OpaqueManagementDataServiceFixture.h"
#include "UNIX_OperatingSystemFixture.h"
//#include "UNIX_OperatingSystemCapabilitiesFixture.h"
//#include "UNIX_OperatingSystemSoftwareFeatureFixture.h"
//#include "UNIX_OperationLogFixture.h"
//#include "UNIX_OrderedComponentFixture.h"
//#include "UNIX_OrderedDependencyFixture.h"
//#include "UNIX_OrderedMemberOfCollectionFixture.h"
//#include "UNIX_OrganizationFixture.h"
//#include "UNIX_OrgStructureFixture.h"
//#include "UNIX_OrgUnitFixture.h"
//#include "UNIX_OSPFAreaFixture.h"
//#include "UNIX_OSPFAreaConfigurationFixture.h"
//#include "UNIX_OSPFLinkFixture.h"
//#include "UNIX_OSPFProtocolEndpointFixture.h"
//#include "UNIX_OSPFServiceFixture.h"
//#include "UNIX_OSPFServiceCapabilitiesFixture.h"
//#include "UNIX_OSPFServiceConfigurationFixture.h"
//#include "UNIX_OSPFVirtualInterfaceFixture.h"
#include "UNIX_OSProcessFixture.h"
//#include "UNIX_OSVersionCheckFixture.h"
//#include "UNIX_OtherGroupInformationFixture.h"
//#include "UNIX_OtherOrganizationInformationFixture.h"
//#include "UNIX_OtherOrgUnitInformationFixture.h"
//#include "UNIX_OtherPersonInformationFixture.h"
//#include "UNIX_OtherRoleInformationFixture.h"
//#include "UNIX_OutboundVLANFixture.h"
//#include "UNIX_OwningCollectionElementFixture.h"
//#include "UNIX_OwningJobElementFixture.h"
//#include "UNIX_OwningPrintQueueFixture.h"
//#include "UNIX_PackageAlarmFixture.h"
//#include "UNIX_PackageCoolingFixture.h"
//#include "UNIX_PackagedComponentFixture.h"
//#include "UNIX_PackageInChassisFixture.h"
//#include "UNIX_PackageInConnectorFixture.h"
//#include "UNIX_PackageInSlotFixture.h"
//#include "UNIX_PackageLocationFixture.h"
//#include "UNIX_PackageTempSensorFixture.h"
//#include "UNIX_PacketConditionInSARuleFixture.h"
//#include "UNIX_PacketFilterConditionFixture.h"
//#include "UNIX_PacketSchedulingServiceFixture.h"
//#include "UNIX_ParallelControllerFixture.h"
//#include "UNIX_ParametersForMethodFixture.h"
//#include "UNIX_ParameterValueSourcesFixture.h"
//#include "UNIX_ParticipatesInSetFixture.h"
//#include "UNIX_ParticipatingCSFixture.h"
//#include "UNIX_PassThroughModuleFixture.h"
//#include "UNIX_PCIBridgeFixture.h"
//#include "UNIX_PCIeSwitchFixture.h"
//#include "UNIX_PCIPortFixture.h"
//#include "UNIX_PCIPortGroupFixture.h"
//#include "UNIX_PCMCIAControllerFixture.h"
//#include "UNIX_PCVideoControllerFixture.h"
//#include "UNIX_PeerGatewayForPreconfiguredTunnelFixture.h"
//#include "UNIX_PeerGatewayForTunnelFixture.h"
//#include "UNIX_PeerIDPayloadFilterEntryFixture.h"
//#include "UNIX_PeerOfSAEndpointFixture.h"
//#include "UNIX_PersonFixture.h"
//#include "UNIX_PExtentRedundancyComponentFixture.h"
//#include "UNIX_Phase1SAUsedForPhase2Fixture.h"
//#include "UNIX_PhysicalAssetCapabilitiesFixture.h"
//#include "UNIX_PhysicalComputerSystemViewFixture.h"
//#include "UNIX_PhysicalConnectorFixture.h"
//#include "UNIX_PhysicalCredentialAuthenticationFixture.h"
//#include "UNIX_PhysicalExtentFixture.h"
//#include "UNIX_PhysicalLinkFixture.h"
//#include "UNIX_PhysicalMediaFixture.h"
//#include "UNIX_PhysicalMediaInLocationFixture.h"
#include "UNIX_PhysicalMemoryFixture.h"
//#include "UNIX_PhysicalStatisticalInformationFixture.h"
//#include "UNIX_PhysicalStatisticsFixture.h"
//#include "UNIX_PhysicalTapeFixture.h"
//#include "UNIX_PickerElementFixture.h"
//#include "UNIX_PickerForChangerFixture.h"
//#include "UNIX_PickerLabelReaderFixture.h"
//#include "UNIX_PickerStatDataFixture.h"
//#include "UNIX_PickerStatInfoFixture.h"
//#include "UNIX_PlatformWatchdogServiceFixture.h"
//#include "UNIX_PlatformWatchdogServiceCapabilitiesFixture.h"
//#include "UNIX_PointingDeviceFixture.h"
//#include "UNIX_PolicyActionInPolicyActionFixture.h"
//#include "UNIX_PolicyActionInPolicyRepositoryFixture.h"
//#include "UNIX_PolicyActionInPolicyRuleFixture.h"
//#include "UNIX_PolicyConditionInPolicyConditionFixture.h"
//#include "UNIX_PolicyConditionInPolicyRepositoryFixture.h"
//#include "UNIX_PolicyConditionInPolicyRuleFixture.h"
//#include "UNIX_PolicyContainerInPolicyContainerFixture.h"
//#include "UNIX_PolicyGroupFixture.h"
//#include "UNIX_PolicyGroupInPolicyGroupFixture.h"
//#include "UNIX_PolicyGroupInSystemFixture.h"
//#include "UNIX_PolicyRepositoryFixture.h"
//#include "UNIX_PolicyRepositoryInPolicyRepositoryFixture.h"
//#include "UNIX_PolicyRoleCollectionFixture.h"
//#include "UNIX_PolicyRoleCollectionInSystemFixture.h"
//#include "UNIX_PolicyRuleInPolicyGroupFixture.h"
//#include "UNIX_PolicyRuleInSystemFixture.h"
//#include "UNIX_PolicyRuleValidityPeriodFixture.h"
//#include "UNIX_PolicySetAppliesToElementFixture.h"
//#include "UNIX_PolicySetComponentFixture.h"
//#include "UNIX_PolicySetInRoleCollectionFixture.h"
//#include "UNIX_PolicySetValidityPeriodFixture.h"
//#include "UNIX_PolicyTimePeriodConditionFixture.h"
//#include "UNIX_PortActiveConnectionFixture.h"
//#include "UNIX_PortControllerFixture.h"
//#include "UNIX_PortImplementsEndpointFixture.h"
//#include "UNIX_PortResourceFixture.h"
//#include "UNIX_POTSModemFixture.h"
//#include "UNIX_PowerAllocationSettingDataFixture.h"
//#include "UNIX_PowerManagementCapabilitiesFixture.h"
//#include "UNIX_PowerManagementServiceFixture.h"
//#include "UNIX_PowerSourceFixture.h"
//#include "UNIX_PowerSupplyFixture.h"
//#include "UNIX_PowerUtilizationManagementCapabilitiesFixture.h"
//#include "UNIX_PowerUtilizationManagementServiceFixture.h"
//#include "UNIX_PreambleFilterFixture.h"
//#include "UNIX_PreambleMarkerServiceFixture.h"
//#include "UNIX_PrecedenceServiceFixture.h"
//#include "UNIX_PreconfiguredTransportActionFixture.h"
//#include "UNIX_PreconfiguredTunnelActionFixture.h"
//#include "UNIX_PrinterFixture.h"
//#include "UNIX_PrinterServicingJobFixture.h"
//#include "UNIX_PrinterServicingQueueFixture.h"
//#include "UNIX_PrintInputTrayFixture.h"
//#include "UNIX_PrintInterpreterFixture.h"
//#include "UNIX_PrintJobFixture.h"
//#include "UNIX_PrintJobFileFixture.h"
//#include "UNIX_PrintMarkerFixture.h"
//#include "UNIX_PrintQueueFixture.h"
//#include "UNIX_PrintSAPFixture.h"
//#include "UNIX_PrintServiceFixture.h"
//#include "UNIX_PrintSupplyFixture.h"
//#include "UNIX_Priority8021QMarkerServiceFixture.h"
//#include "UNIX_PrioritySchedulingElementFixture.h"
//#include "UNIX_PrivilegeFixture.h"
//#include "UNIX_PrivilegeManagementCapabilitiesFixture.h"
//#include "UNIX_PrivilegeManagementServiceFixture.h"
#include "UNIX_ProcessExecutableFixture.h"
//#include "UNIX_ProcessOfJobFixture.h"
#include "UNIX_ProcessorFixture.h"
//#include "UNIX_ProcessorAllocationSettingDataFixture.h"
//#include "UNIX_ProcessorCapabilitiesFixture.h"
//#include "UNIX_ProcessorCoreFixture.h"
//#include "UNIX_ProcessThreadFixture.h"
//#include "UNIX_ProductFixture.h"
//#include "UNIX_ProductComponentFixture.h"
//#include "UNIX_ProductElementComponentFixture.h"
//#include "UNIX_ProductFRUFixture.h"
//#include "UNIX_ProductParentChildFixture.h"
//#include "UNIX_ProductPhysicalComponentFixture.h"
//#include "UNIX_ProductPhysicalElementsFixture.h"
//#include "UNIX_ProductProductDependencyFixture.h"
//#include "UNIX_ProductServiceComponentFixture.h"
//#include "UNIX_ProductSoftwareComponentFixture.h"
//#include "UNIX_ProductSoftwareFeaturesFixture.h"
//#include "UNIX_ProductSupportFixture.h"
//#include "UNIX_ProfileFixture.h"
//#include "UNIX_ProtectedExtentBasedOnFixture.h"
//#include "UNIX_ProtectedSpaceExtentFixture.h"
//#include "UNIX_ProtocolAdapterFixture.h"
//#include "UNIX_ProtocolControllerFixture.h"
//#include "UNIX_ProtocolControllerAccessesUnitFixture.h"
//#include "UNIX_ProtocolControllerForPortFixture.h"
//#include "UNIX_ProtocolControllerForUnitFixture.h"
//#include "UNIX_ProtocolControllerMaskingCapabilitiesFixture.h"
//#include "UNIX_ProtocolServiceFixture.h"
//#include "UNIX_ProvidesEndpointFixture.h"
//#include "UNIX_PSExtentBasedOnPExtentFixture.h"
//#include "UNIX_PublicKeyCertificateFixture.h"
//#include "UNIX_PublicKeyManagementServiceFixture.h"
//#include "UNIX_PublicPrivateKeyAuthenticationFixture.h"
//#include "UNIX_PublicPrivateKeyPairFixture.h"
//#include "UNIX_QoSConditioningSubServiceFixture.h"
//#include "UNIX_QoSSubServiceFixture.h"
//#include "UNIX_QueryCapabilitiesFixture.h"
//#include "UNIX_QueryConditionFixture.h"
//#include "UNIX_QueueAllocationFixture.h"
//#include "UNIX_QueueForPrintServiceFixture.h"
//#include "UNIX_QueueForwardsToPrintSAPFixture.h"
//#include "UNIX_QueueHierarchyFixture.h"
//#include "UNIX_QueueToScheduleFixture.h"
//#include "UNIX_QueuingServiceFixture.h"
//#include "UNIX_RackFixture.h"
//#include "UNIX_RangeOfIPAddressesFixture.h"
//#include "UNIX_RangesOfConfigurationFixture.h"
//#include "UNIX_RealizedOnSideFixture.h"
//#include "UNIX_RealizesAggregatePExtentFixture.h"
//#include "UNIX_RealizesDiskPartitionFixture.h"
//#include "UNIX_RealizesPExtentFixture.h"
//#include "UNIX_RealizesTapePartitionFixture.h"
//#include "UNIX_RebootActionFixture.h"
//#include "UNIX_RecordAppliesToElementFixture.h"
//#include "UNIX_RecordInLogFixture.h"
//#include "UNIX_RecordLogCapabilitiesFixture.h"
//#include "UNIX_REDDropperServiceFixture.h"
//#include "UNIX_RedundancySetFixture.h"
//#include "UNIX_ReferencedProfileFixture.h"
//#include "UNIX_ReflectorClientServiceFixture.h"
//#include "UNIX_ReflectorNonClientServiceFixture.h"
//#include "UNIX_ReflectorServiceFixture.h"
//#include "UNIX_RefrigerationFixture.h"
//#include "UNIX_RegisteredSubProfileFixture.h"
//#include "UNIX_RejectConnectionActionFixture.h"
//#include "UNIX_RelatedSpanningTreeFixture.h"
//#include "UNIX_RelatedStatisticalDataFixture.h"
//#include "UNIX_RelatedStatisticsFixture.h"
//#include "UNIX_RelatedTransparentBridgingServiceFixture.h"
//#include "UNIX_RemoteAccessAvailableToElementFixture.h"
#include "UNIX_RemoteFileSystemFixture.h"
//#include "UNIX_RemotePortFixture.h"
//#include "UNIX_RemoveDirectoryActionFixture.h"
//#include "UNIX_RemoveFileActionFixture.h"
//#include "UNIX_ReplaceableProductFRUFixture.h"
//#include "UNIX_ReplacementSetFixture.h"
//#include "UNIX_RequireCredentialsFromFixture.h"
//#include "UNIX_ResidesOnExtentFixture.h"
//#include "UNIX_ResourceAllocationFromPoolFixture.h"
//#include "UNIX_ResourcePoolFixture.h"
//#include "UNIX_ResourcePoolConfigurationCapabilitiesFixture.h"
//#include "UNIX_ResourcePoolConfigurationServiceFixture.h"
//#include "UNIX_ReusablePolicyFixture.h"
//#include "UNIX_ReusablePolicyContainerFixture.h"
//#include "UNIX_RoleFixture.h"
//#include "UNIX_RoleBasedAuthorizationServiceFixture.h"
//#include "UNIX_RoleBasedManagementCapabilitiesFixture.h"
//#include "UNIX_RoleLimitedToTargetFixture.h"
//#include "UNIX_RouteForwardedByServiceFixture.h"
//#include "UNIX_RoutersInASFixture.h"
//#include "UNIX_RoutersInBGPClusterFixture.h"
//#include "UNIX_RoutesBGPFixture.h"
//#include "UNIX_RouteUsesEndpointFixture.h"
//#include "UNIX_RoutingPolicyFixture.h"
//#include "UNIX_RoutingProtocolDomainFixture.h"
//#include "UNIX_RoutingProtocolDomainInASFixture.h"
//#include "UNIX_RuleThatGeneratedSAFixture.h"
//#include "UNIX_RunningOSFixture.h"
//#include "UNIX_SAEndpointConnectionStatisticsFixture.h"
//#include "UNIX_SAEndpointRefreshSettingsFixture.h"
//#include "UNIX_SAPAvailableForElementFixture.h"
//#include "UNIX_SAPStatisticsFixture.h"
//#include "UNIX_ScannerFixture.h"
//#include "UNIX_SchedulerUsedFixture.h"
//#include "UNIX_SchedulingServiceToScheduleFixture.h"
//#include "UNIX_ScopedSettingFixture.h"
#include "UNIX_SCSIControllerFixture.h"
//#include "UNIX_SCSIInitiatorTargetLogicalUnitPathFixture.h"
//#include "UNIX_SCSIInterfaceFixture.h"
//#include "UNIX_SCSIMultipathConfigurationCapabilitiesFixture.h"
//#include "UNIX_SCSIMultipathSettingsFixture.h"
//#include "UNIX_SCSIPathConfigurationServiceFixture.h"
//#include "UNIX_SCSIProtocolControllerFixture.h"
//#include "UNIX_SCSIProtocolEndpointFixture.h"
//#include "UNIX_SCSITargetPortGroupFixture.h"
//#include "UNIX_SDSLModemFixture.h"
//#include "UNIX_SecuritySensitivityFixture.h"
//#include "UNIX_SecurityServiceForSystemFixture.h"
//#include "UNIX_SecurityServiceUsesAccountFixture.h"
//#include "UNIX_SerialControllerFixture.h"
//#include "UNIX_SerialInterfaceFixture.h"
//#include "UNIX_ServiceAccessURIFixture.h"
//#include "UNIX_ServiceAffectsElementFixture.h"
//#include "UNIX_ServiceAvailableToElementFixture.h"
#include "UNIX_ServiceProcessFixture.h"
//#include "UNIX_ServiceStatisticsFixture.h"
//#include "UNIX_ServiceUsesSecurityServiceFixture.h"
//#include "UNIX_SettingCheckFixture.h"
//#include "UNIX_SettingContextFixture.h"
//#include "UNIX_SettingForSystemFixture.h"
//#include "UNIX_SettingsDefineCapabilitiesFixture.h"
//#include "UNIX_SettingsDefineStateFixture.h"
//#include "UNIX_SharedCredentialFixture.h"
//#include "UNIX_SharedDeviceManagementServiceFixture.h"
//#include "UNIX_SharedSecretFixture.h"
//#include "UNIX_SharedSecretAuthenticationFixture.h"
//#include "UNIX_SharedSecretIsSharedFixture.h"
//#include "UNIX_SharedSecretServiceFixture.h"
//#include "UNIX_SharingDependencyFixture.h"
//#include "UNIX_SlotFixture.h"
//#include "UNIX_SlotInSlotFixture.h"
//#include "UNIX_SnapshotFixture.h"
//#include "UNIX_SnapshotOfExtentFixture.h"
//#include "UNIX_SnapshotOfVirtualSystemFixture.h"
//#include "UNIX_SoftwareElementActionsFixture.h"
//#include "UNIX_SoftwareElementChecksFixture.h"
//#include "UNIX_SoftwareElementComponentFixture.h"
//#include "UNIX_SoftwareElementSAPImplementationFixture.h"
//#include "UNIX_SoftwareElementServiceImplementationFixture.h"
//#include "UNIX_SoftwareElementVersionCheckFixture.h"
//#include "UNIX_SoftwareFeatureComponentFixture.h"
//#include "UNIX_SoftwareFeatureSAPImplementationFixture.h"
//#include "UNIX_SoftwareFeatureServiceImplementationFixture.h"
//#include "UNIX_SoftwareIdentityFixture.h"
//#include "UNIX_SoftwareInstallationServiceFixture.h"
//#include "UNIX_SoftwareInstallationServiceCapabilitiesFixture.h"
//#include "UNIX_SourceRoutingServiceFixture.h"
//#include "UNIX_SpanningTreeServiceFixture.h"
//#include "UNIX_SpanningTreeStatisticsFixture.h"
//#include "UNIX_SparedFixture.h"
//#include "UNIX_SpareGroupFixture.h"
//#include "UNIX_Specific802dot1QVLANServiceFixture.h"
//#include "UNIX_SSAControllerFixture.h"
//#include "UNIX_SSHCapabilitiesFixture.h"
//#include "UNIX_SSHProtocolEndpointFixture.h"
//#include "UNIX_SSHSettingDataFixture.h"
//#include "UNIX_StaticForwardingEntryFixture.h"
//#include "UNIX_StaticIPAssignmentSettingDataFixture.h"
//#include "UNIX_StatisticalRuntimeOverviewFixture.h"
//#include "UNIX_StatisticalSettingFixture.h"
//#include "UNIX_StatisticsCapabilitiesFixture.h"
//#include "UNIX_StatisticsCollectionFixture.h"
//#include "UNIX_StatisticsServiceFixture.h"
//#include "UNIX_StorageAllocationSettingDataFixture.h"
//#include "UNIX_StorageCapabilitiesFixture.h"
//#include "UNIX_StorageClientSettingDataFixture.h"
//#include "UNIX_StorageConfigurationCapabilitiesFixture.h"
//#include "UNIX_StorageConfigurationServiceFixture.h"
//#include "UNIX_StorageDefectFixture.h"
//#include "UNIX_StorageErrorFixture.h"
//#include "UNIX_StorageHardwareIDFixture.h"
//#include "UNIX_StorageHardwareIDManagementServiceFixture.h"
//#include "UNIX_StorageLibraryFixture.h"
//#include "UNIX_StorageMediaLocationFixture.h"
//#include "UNIX_StoragePoolFixture.h"
//#include "UNIX_StorageRedundancyGroupFixture.h"
//#include "UNIX_StorageRedundancySetFixture.h"
//#include "UNIX_StorageReplicationCapabilitiesFixture.h"
//#include "UNIX_StorageSettingFixture.h"
//#include "UNIX_StorageSettingsAssociatedToCapabilitiesFixture.h"
//#include "UNIX_StorageSettingsGeneratedFromCapabilitiesFixture.h"
//#include "UNIX_StorageSettingWithHintsFixture.h"
//#include "UNIX_StorageVolumeFixture.h"
//#include "UNIX_SubProfileRequiresProfileFixture.h"
//#include "UNIX_SuppliesPowerFixture.h"
//#include "UNIX_SupportAccessFixture.h"
//#include "UNIX_SwapSpaceCheckFixture.h"
//#include "UNIX_SwitchableFixture.h"
//#include "UNIX_SwitchesAmongFixture.h"
//#include "UNIX_SwitchPortFixture.h"
//#include "UNIX_SwitchPortDynamicForwardingFixture.h"
//#include "UNIX_SwitchPortPairFixture.h"
//#include "UNIX_SwitchPortSourceRoutingFixture.h"
//#include "UNIX_SwitchPortSourceRoutingStatisticsFixture.h"
//#include "UNIX_SwitchPortSpanningTreeFixture.h"
//#include "UNIX_SwitchPortSpanningTreeStatisticsFixture.h"
//#include "UNIX_SwitchPortStaticForwardingFixture.h"
//#include "UNIX_SwitchPortStatisticsFixture.h"
//#include "UNIX_SwitchPortTransparentBridgingStatisticsFixture.h"
//#include "UNIX_SwitchServiceFixture.h"
//#include "UNIX_SwitchServiceSourceRoutingFixture.h"
//#include "UNIX_SwitchServiceSpanningTreeFixture.h"
//#include "UNIX_SwitchServiceTransparentBridgingFixture.h"
//#include "UNIX_SwitchServiceVLANFixture.h"
//#include "UNIX_SymbolicLinkFixture.h"
//#include "UNIX_SynchronizedFixture.h"
#include "UNIX_SystemAdministratorFixture.h"
#include "UNIX_SystemAdministratorGroupFixture.h"
//#include "UNIX_SystemAdministratorRoleFixture.h"
#include "UNIX_SystemBIOSFixture.h"
//#include "UNIX_SystemBusCardFixture.h"
//#include "UNIX_SystemConfigurationFixture.h"
//#include "UNIX_SystemIdentificationFixture.h"
//#include "UNIX_SystemInNamespaceFixture.h"
//#include "UNIX_SystemPartitionFixture.h"
//#include "UNIX_SystemSettingFixture.h"
//#include "UNIX_SystemSettingContextFixture.h"
//#include "UNIX_SystemStatisticalInformationFixture.h"
//#include "UNIX_SystemStatisticsFixture.h"
//#include "UNIX_TachometerFixture.h"
//#include "UNIX_TapeDriveFixture.h"
//#include "UNIX_TapePartitionFixture.h"
//#include "UNIX_TapePartitionOnSurfaceFixture.h"
//#include "UNIX_TCPProtocolEndpointFixture.h"
//#include "UNIX_TemperatureSensorFixture.h"
//#include "UNIX_TextRedirectionSAPFixture.h"
//#include "UNIX_TextRedirectionServiceFixture.h"
//#include "UNIX_ThresholdIndicationFixture.h"
//#include "UNIX_TimeServiceFixture.h"
//#include "UNIX_TimeZoneFixture.h"
//#include "UNIX_ToDirectoryActionFixture.h"
//#include "UNIX_ToDirectorySpecificationFixture.h"
//#include "UNIX_TokenBucketMeterServiceFixture.h"
//#include "UNIX_TokenRingAdapterFixture.h"
//#include "UNIX_TokenRingPortFixture.h"
//#include "UNIX_TokenRingPortStatisticsFixture.h"
//#include "UNIX_ToSMarkerServiceFixture.h"
//#include "UNIX_TraceLevelTypeFixture.h"
//#include "UNIX_TransformOfPreconfiguredActionFixture.h"
//#include "UNIX_TransformOfSecurityAssociationFixture.h"
//#include "UNIX_TransparentBridgingDynamicForwardingFixture.h"
//#include "UNIX_TransparentBridgingServiceFixture.h"
//#include "UNIX_TransparentBridgingStaticForwardingFixture.h"
//#include "UNIX_TransparentBridgingStatisticsFixture.h"
//#include "UNIX_TrustHierarchyFixture.h"
//#include "UNIX_UDPProtocolEndpointFixture.h"
//#include "UNIX_UnimodemFixture.h"
//#include "UNIX_UninterruptiblePowerSupplyFixture.h"
#include "UNIX_ComputerSystemFixture.h"
#include "UNIX_DeviceFileFixture.h"
//#include "UNIX_UnixDirectoryFixture.h"
//#include "UNIX_FileFixture.h"
#include "UNIX_ProcessFixture.h"
//#include "UNIX_ProcessStatisticalInformationFixture.h"
//#include "UNIX_ProcessStatisticsFixture.h"
//#include "UNIX_ThreadFixture.h"
//#include "UNIX_UnsignedCredentialFixture.h"
//#include "UNIX_UnsignedPublicKeyFixture.h"
//#include "UNIX_USBConnectionFixture.h"
#include "UNIX_USBControllerFixture.h"
//#include "UNIX_USBControllerHasHubFixture.h"
//#include "UNIX_USBDeviceFixture.h"
//#include "UNIX_USBHubFixture.h"
//#include "UNIX_USBPortFixture.h"
//#include "UNIX_USBPortOnHubFixture.h"
//#include "UNIX_USBRedirectionCapabilitiesFixture.h"
//#include "UNIX_USBRedirectionSAPFixture.h"
//#include "UNIX_USBRedirectionServiceFixture.h"
//#include "UNIX_UseOfLogFixture.h"
//#include "UNIX_UseOfMessageLogFixture.h"
//#include "UNIX_UserContactFixture.h"
#include "UNIX_UsersAccessFixture.h"
#include "UNIX_UsersAccountFixture.h"
//#include "UNIX_UsersCredentialFixture.h"
//#include "UNIX_VDSLModemFixture.h"
//#include "UNIX_VendorPolicyActionFixture.h"
//#include "UNIX_VendorPolicyConditionFixture.h"
//#include "UNIX_VerificationServiceFixture.h"
//#include "UNIX_VersionCompatibilityCheckFixture.h"
//#include "UNIX_VideoBIOSElementFixture.h"
//#include "UNIX_VideoBIOSFeatureFixture.h"
//#include "UNIX_VideoBIOSFeatureVideoBIOSElementsFixture.h"
//#include "UNIX_VideoControllerResolutionFixture.h"
//#include "UNIX_VideoHeadFixture.h"
//#include "UNIX_VideoHeadResolutionFixture.h"
//#include "UNIX_ViewFixture.h"
#include "UNIX_VirtualComputerSystemFixture.h"
//#include "UNIX_VirtualEthernetSwitchSettingDataFixture.h"
//#include "UNIX_VirtualSystemManagementCapabilitiesFixture.h"
//#include "UNIX_VirtualSystemManagementServiceFixture.h"
//#include "UNIX_VirtualSystemMigrationSettingDataFixture.h"
//#include "UNIX_VirtualSystemSettingDataFixture.h"
//#include "UNIX_VirtualSystemSettingDataComponentFixture.h"
//#include "UNIX_VirtualSystemSnapshotCapabilitiesFixture.h"
//#include "UNIX_VirtualSystemSnapshotServiceFixture.h"
//#include "UNIX_VirtualSystemSnapshotServiceCapabilitiesFixture.h"
//#include "UNIX_VLANFixture.h"
//#include "UNIX_VLANEndpointFixture.h"
//#include "UNIX_VLANEndpointCapabilitiesFixture.h"
//#include "UNIX_VLANEndpointSettingDataFixture.h"
//#include "UNIX_VLANForFixture.h"
//#include "UNIX_VLANServiceFixture.h"
//#include "UNIX_VolatileStorageFixture.h"
//#include "UNIX_VoltageSensorFixture.h"
//#include "UNIX_VolumeSetFixture.h"
//#include "UNIX_VolumeSetBasedOnPSExtentFixture.h"
//#include "UNIX_WakeUpServiceFixture.h"
//#include "UNIX_WakeUpServiceOnModemFixture.h"
//#include "UNIX_WakeUpServiceOnNetworkAdapterFixture.h"
//#include "UNIX_WakeUpServiceOnNetworkPortFixture.h"
//#include "UNIX_WatchdogFixture.h"
//#include "UNIX_WeightedREDDropperServiceFixture.h"
//#include "UNIX_WiFiEndpointFixture.h"
//#include "UNIX_WiFiEndpointCapabilitiesFixture.h"
//#include "UNIX_WiFiEndpointSettingsFixture.h"
//#include "UNIX_WiFiNetworkDetectionSettingsFixture.h"
//#include "UNIX_WiFiPortFixture.h"
//#include "UNIX_WiFiPortCapabilitiesFixture.h"
//#include "UNIX_WiFiPortConfigurationServiceFixture.h"
//#include "UNIX_WiFiRadioFixture.h"
//#include "UNIX_WORMDriveFixture.h"
//#include "UNIX_WRRSchedulingElementFixture.h"
//#include "UNIX_X509CertificateFixture.h"
//#include "UNIX_X509CredentialFilterEntryFixture.h"
//#include "UNIX_X509CRLFixture.h"
//#include "UNIX_ZoneFixture.h"
//#include "UNIX_ZoneCapabilitiesFixture.h"
//#include "UNIX_ZoneMembershipSettingDataFixture.h"
//#include "UNIX_ZoneServiceFixture.h"
//#include "UNIX_ZoneSetFixture.h"
//#include "UNIX_ApplicationSystemFixture.h"
#include "UNIX_FileSystemFixture.h"
#include "UNIX_SoftwareElementFixture.h"
//#include "UNIX_SoftwareFeatureFixture.h"

#include <iostream>

Boolean IsTarget(String s, String target)
{
	if (String::equal(s, CIMHelper::EmptyString) ||
		String::equalNoCase(s, target))
			return Boolean(true);
	return Boolean(false);
}

int main (int argc, char *argv[])
{
	std::cout << "Starting Pegasus Providers Testing Framework..." << std::endl;

	String s;
	if (argc <= 1)
		s.assign(CIMHelper::EmptyString);
	else
		s.assign(argv[1]);


	if (IsTarget(s, "Meta_Class")) { Meta_ClassFixture meta_Class; meta_Class.Run(); }

	//if (IsTarget(s, "UNIX_AbstractIndicationSubscription")) { UNIX_AbstractIndicationSubscriptionFixture abstractIndicationSubscription; abstractIndicationSubscription.Run(); }
	//if (IsTarget(s, "UNIX_AcceptCredentialFrom")) { UNIX_AcceptCredentialFromFixture acceptCredentialFrom; acceptCredentialFrom.Run(); }
	//if (IsTarget(s, "UNIX_AccessControlInformation")) { UNIX_AccessControlInformationFixture accessControlInformation; accessControlInformation.Run(); }
	//if (IsTarget(s, "UNIX_AccessLabelReader")) { UNIX_AccessLabelReaderFixture accessLabelReader; accessLabelReader.Run(); }
	if (IsTarget(s, "UNIX_Account")) { UNIX_AccountFixture account; account.Run(); }
	//if (IsTarget(s, "UNIX_AccountAuthentication")) { UNIX_AccountAuthenticationFixture accountAuthentication; accountAuthentication.Run(); }
	//if (IsTarget(s, "UNIX_AccountIdentity")) { UNIX_AccountIdentityFixture accountIdentity; accountIdentity.Run(); }
	//if (IsTarget(s, "UNIX_AccountManagementCapabilities")) { UNIX_AccountManagementCapabilitiesFixture accountManagementCapabilities; accountManagementCapabilities.Run(); }
	if (IsTarget(s, "UNIX_AccountManagementService")) { UNIX_AccountManagementServiceFixture accountManagementService; accountManagementService.Run(); }
	//if (IsTarget(s, "UNIX_AccountMapsToAccount")) { UNIX_AccountMapsToAccountFixture accountMapsToAccount; accountMapsToAccount.Run(); }
	if (IsTarget(s, "UNIX_AccountOnSystem")) { UNIX_AccountOnSystemFixture accountOnSystem; accountOnSystem.Run(); }
	//if (IsTarget(s, "UNIX_AccountSettingData")) { UNIX_AccountSettingDataFixture accountSettingData; accountSettingData.Run(); }
	//if (IsTarget(s, "UNIX_ActionSequence")) { UNIX_ActionSequenceFixture actionSequence; actionSequence.Run(); }
	if (IsTarget(s, "UNIX_ActiveConnection")) { UNIX_ActiveConnectionFixture activeConnection; activeConnection.Run(); }
	//if (IsTarget(s, "UNIX_ActsAsSpare")) { UNIX_ActsAsSpareFixture actsAsSpare; actsAsSpare.Run(); }
	//if (IsTarget(s, "UNIX_AdapterActiveConnection")) { UNIX_AdapterActiveConnectionFixture adapterActiveConnection; adapterActiveConnection.Run(); }
	//if (IsTarget(s, "UNIX_AdjacentSlots")) { UNIX_AdjacentSlotsFixture adjacentSlots; adjacentSlots.Run(); }
	//if (IsTarget(s, "UNIX_AdministrativeDistance")) { UNIX_AdministrativeDistanceFixture administrativeDistance; administrativeDistance.Run(); }
	//if (IsTarget(s, "UNIX_ADSLModem")) { UNIX_ADSLModemFixture aDSLModem; aDSLModem.Run(); }
	//if (IsTarget(s, "UNIX_AffectedJobElement")) { UNIX_AffectedJobElementFixture affectedJobElement; affectedJobElement.Run(); }
	//if (IsTarget(s, "UNIX_AFRelatedServices")) { UNIX_AFRelatedServicesFixture aFRelatedServices; aFRelatedServices.Run(); }
	//if (IsTarget(s, "UNIX_AFService")) { UNIX_AFServiceFixture aFService; aFService.Run(); }
	//if (IsTarget(s, "UNIX_AggregatePExtent")) { UNIX_AggregatePExtentFixture aggregatePExtent; aggregatePExtent.Run(); }
	//if (IsTarget(s, "UNIX_AggregatePSExtent")) { UNIX_AggregatePSExtentFixture aggregatePSExtent; aggregatePSExtent.Run(); }
	//if (IsTarget(s, "UNIX_AggregatePSExtentBasedOnAggregatePExtent")) { UNIX_AggregatePSExtentBasedOnAggregatePExtentFixture aggregatePSExtentBasedOnAggregatePExtent; aggregatePSExtentBasedOnAggregatePExtent.Run(); }
	//if (IsTarget(s, "UNIX_AggregatePSExtentBasedOnPExtent")) { UNIX_AggregatePSExtentBasedOnPExtentFixture aggregatePSExtentBasedOnPExtent; aggregatePSExtentBasedOnPExtent.Run(); }
	//if (IsTarget(s, "UNIX_AggregateRedundancyComponent")) { UNIX_AggregateRedundancyComponentFixture aggregateRedundancyComponent; aggregateRedundancyComponent.Run(); }
	//if (IsTarget(s, "UNIX_AggregationMetricDefinition")) { UNIX_AggregationMetricDefinitionFixture aggregationMetricDefinition; aggregationMetricDefinition.Run(); }
	//if (IsTarget(s, "UNIX_AggregationMetricValue")) { UNIX_AggregationMetricValueFixture aggregationMetricValue; aggregationMetricValue.Run(); }
	//if (IsTarget(s, "UNIX_AGPSoftwareFeature")) { UNIX_AGPSoftwareFeatureFixture aGPSoftwareFeature; aGPSoftwareFeature.Run(); }
	//if (IsTarget(s, "UNIX_AGPVideoController")) { UNIX_AGPVideoControllerFixture aGPVideoController; aGPVideoController.Run(); }
	//if (IsTarget(s, "UNIX_AHTransform")) { UNIX_AHTransformFixture aHTransform; aHTransform.Run(); }
	//if (IsTarget(s, "UNIX_AlarmDevice")) { UNIX_AlarmDeviceFixture alarmDevice; alarmDevice.Run(); }
	//if (IsTarget(s, "UNIX_AlarmDeviceCapabilities")) { UNIX_AlarmDeviceCapabilitiesFixture alarmDeviceCapabilities; alarmDeviceCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_AlertInstIndication")) { UNIX_AlertInstIndicationFixture alertInstIndication; alertInstIndication.Run(); }
	//if (IsTarget(s, "UNIX_AllocatedDMA")) { UNIX_AllocatedDMAFixture allocatedDMA; allocatedDMA.Run(); }
	//if (IsTarget(s, "UNIX_AllocatedFromStoragePool")) { UNIX_AllocatedFromStoragePoolFixture allocatedFromStoragePool; allocatedFromStoragePool.Run(); }
	//if (IsTarget(s, "UNIX_AllocatedResource")) { UNIX_AllocatedResourceFixture allocatedResource; allocatedResource.Run(); }
	//if (IsTarget(s, "UNIX_AllocationCapabilities")) { UNIX_AllocationCapabilitiesFixture allocationCapabilities; allocationCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_AllocationSchedulingElement")) { UNIX_AllocationSchedulingElementFixture allocationSchedulingElement; allocationSchedulingElement.Run(); }
	//if (IsTarget(s, "UNIX_ApplicationSystemDependency")) { UNIX_ApplicationSystemDependencyFixture applicationSystemDependency; applicationSystemDependency.Run(); }
	//if (IsTarget(s, "UNIX_ApplicationSystemDirectory")) { UNIX_ApplicationSystemDirectoryFixture applicationSystemDirectory; applicationSystemDirectory.Run(); }
	//if (IsTarget(s, "UNIX_ApplicationSystemHierarchy")) { UNIX_ApplicationSystemHierarchyFixture applicationSystemHierarchy; applicationSystemHierarchy.Run(); }
	//if (IsTarget(s, "UNIX_ApplicationSystemSoftwareFeature")) { UNIX_ApplicationSystemSoftwareFeatureFixture applicationSystemSoftwareFeature; applicationSystemSoftwareFeature.Run(); }
	//if (IsTarget(s, "UNIX_ArchitectureCheck")) { UNIX_ArchitectureCheckFixture architectureCheck; architectureCheck.Run(); }
	//if (IsTarget(s, "UNIX_AreaOfConfiguration")) { UNIX_AreaOfConfigurationFixture areaOfConfiguration; areaOfConfiguration.Run(); }
	//if (IsTarget(s, "UNIX_ASBGPEndpoints")) { UNIX_ASBGPEndpointsFixture aSBGPEndpoints; aSBGPEndpoints.Run(); }
	//if (IsTarget(s, "UNIX_AssignedIdentity")) { UNIX_AssignedIdentityFixture assignedIdentity; assignedIdentity.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedAlarm")) { UNIX_AssociatedAlarmFixture associatedAlarm; associatedAlarm.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedBattery")) { UNIX_AssociatedBatteryFixture associatedBattery; associatedBattery.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedBlockStatisticsManifestCollection")) { UNIX_AssociatedBlockStatisticsManifestCollectionFixture associatedBlockStatisticsManifestCollection; associatedBlockStatisticsManifestCollection.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedCacheMemory")) { UNIX_AssociatedCacheMemoryFixture associatedCacheMemory; associatedCacheMemory.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedComponentExtent")) { UNIX_AssociatedComponentExtentFixture associatedComponentExtent; associatedComponentExtent.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedCooling")) { UNIX_AssociatedCoolingFixture associatedCooling; associatedCooling.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedDatabaseSystem")) { UNIX_AssociatedDatabaseSystemFixture associatedDatabaseSystem; associatedDatabaseSystem.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedIndicatorLED")) { UNIX_AssociatedIndicatorLEDFixture associatedIndicatorLED; associatedIndicatorLED.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedJobMethodResult")) { UNIX_AssociatedJobMethodResultFixture associatedJobMethodResult; associatedJobMethodResult.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedNextHop")) { UNIX_AssociatedNextHopFixture associatedNextHop; associatedNextHop.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedPrivilege")) { UNIX_AssociatedPrivilegeFixture associatedPrivilege; associatedPrivilege.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedProcessorMemory")) { UNIX_AssociatedProcessorMemoryFixture associatedProcessorMemory; associatedProcessorMemory.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedProtocolController")) { UNIX_AssociatedProtocolControllerFixture associatedProtocolController; associatedProtocolController.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedRemainingExtent")) { UNIX_AssociatedRemainingExtentFixture associatedRemainingExtent; associatedRemainingExtent.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedSupplyCurrentSensor")) { UNIX_AssociatedSupplyCurrentSensorFixture associatedSupplyCurrentSensor; associatedSupplyCurrentSensor.Run(); }
	//if (IsTarget(s, "UNIX_AssociatedSupplyVoltageSensor")) { UNIX_AssociatedSupplyVoltageSensorFixture associatedSupplyVoltageSensor; associatedSupplyVoltageSensor.Run(); }
	//if (IsTarget(s, "UNIX_AuthenticateForUse")) { UNIX_AuthenticateForUseFixture authenticateForUse; authenticateForUse.Run(); }
	//if (IsTarget(s, "UNIX_AuthenticationRequirement")) { UNIX_AuthenticationRequirementFixture authenticationRequirement; authenticationRequirement.Run(); }
	//if (IsTarget(s, "UNIX_AuthenticationRule")) { UNIX_AuthenticationRuleFixture authenticationRule; authenticationRule.Run(); }
	//if (IsTarget(s, "UNIX_AuthenticationTarget")) { UNIX_AuthenticationTargetFixture authenticationTarget; authenticationTarget.Run(); }
	//if (IsTarget(s, "UNIX_AuthorizationService")) { UNIX_AuthorizationServiceFixture authorizationService; authorizationService.Run(); }
	//if (IsTarget(s, "UNIX_AuthorizationSubject")) { UNIX_AuthorizationSubjectFixture authorizationSubject; authorizationSubject.Run(); }
	//if (IsTarget(s, "UNIX_AuthorizationTarget")) { UNIX_AuthorizationTargetFixture authorizationTarget; authorizationTarget.Run(); }
	//if (IsTarget(s, "UNIX_AuthorizedPrivilege")) { UNIX_AuthorizedPrivilegeFixture authorizedPrivilege; authorizedPrivilege.Run(); }
	//if (IsTarget(s, "UNIX_AuthorizedSubject")) { UNIX_AuthorizedSubjectFixture authorizedSubject; authorizedSubject.Run(); }
	//if (IsTarget(s, "UNIX_AuthorizedTarget")) { UNIX_AuthorizedTargetFixture authorizedTarget; authorizedTarget.Run(); }
	//if (IsTarget(s, "UNIX_AuthorizedUse")) { UNIX_AuthorizedUseFixture authorizedUse; authorizedUse.Run(); }
	//if (IsTarget(s, "UNIX_AutonomousSystem")) { UNIX_AutonomousSystemFixture autonomousSystem; autonomousSystem.Run(); }
	//if (IsTarget(s, "UNIX_AverageRateMeterService")) { UNIX_AverageRateMeterServiceFixture averageRateMeterService; averageRateMeterService.Run(); }
	//if (IsTarget(s, "UNIX_BaseMetricValue")) { UNIX_BaseMetricValueFixture baseMetricValue; baseMetricValue.Run(); }
	//if (IsTarget(s, "UNIX_Battery")) { UNIX_BatteryFixture battery; battery.Run(); }
	//if (IsTarget(s, "UNIX_BGPAdminDistance")) { UNIX_BGPAdminDistanceFixture bGPAdminDistance; bGPAdminDistance.Run(); }
	//if (IsTarget(s, "UNIX_BGPAttributes")) { UNIX_BGPAttributesFixture bGPAttributes; bGPAttributes.Run(); }
	//if (IsTarget(s, "UNIX_BGPAttributesForRoute")) { UNIX_BGPAttributesForRouteFixture bGPAttributesForRoute; bGPAttributesForRoute.Run(); }
	//if (IsTarget(s, "UNIX_BGPCluster")) { UNIX_BGPClusterFixture bGPCluster; bGPCluster.Run(); }
	//if (IsTarget(s, "UNIX_BGPClustersInAS")) { UNIX_BGPClustersInASFixture bGPClustersInAS; bGPClustersInAS.Run(); }
	//if (IsTarget(s, "UNIX_BGPEndpointStatistics")) { UNIX_BGPEndpointStatisticsFixture bGPEndpointStatistics; bGPEndpointStatistics.Run(); }
	//if (IsTarget(s, "UNIX_BGPIPRoute")) { UNIX_BGPIPRouteFixture bGPIPRoute; bGPIPRoute.Run(); }
	//if (IsTarget(s, "UNIX_BGPPathAttributes")) { UNIX_BGPPathAttributesFixture bGPPathAttributes; bGPPathAttributes.Run(); }
	//if (IsTarget(s, "UNIX_BGPPeerGroup")) { UNIX_BGPPeerGroupFixture bGPPeerGroup; bGPPeerGroup.Run(); }
	//if (IsTarget(s, "UNIX_BGPPeerGroupService")) { UNIX_BGPPeerGroupServiceFixture bGPPeerGroupService; bGPPeerGroupService.Run(); }
	//if (IsTarget(s, "UNIX_BGPPeerUsesRouteMap")) { UNIX_BGPPeerUsesRouteMapFixture bGPPeerUsesRouteMap; bGPPeerUsesRouteMap.Run(); }
	//if (IsTarget(s, "UNIX_BGPProtocolEndpoint")) { UNIX_BGPProtocolEndpointFixture bGPProtocolEndpoint; bGPProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_BGPRouteMap")) { UNIX_BGPRouteMapFixture bGPRouteMap; bGPRouteMap.Run(); }
	//if (IsTarget(s, "UNIX_BGPRouteMapsInRoutingPolicy")) { UNIX_BGPRouteMapsInRoutingPolicyFixture bGPRouteMapsInRoutingPolicy; bGPRouteMapsInRoutingPolicy.Run(); }
	//if (IsTarget(s, "UNIX_BGPRoutingPolicy")) { UNIX_BGPRoutingPolicyFixture bGPRoutingPolicy; bGPRoutingPolicy.Run(); }
	//if (IsTarget(s, "UNIX_BGPService")) { UNIX_BGPServiceFixture bGPService; bGPService.Run(); }
	//if (IsTarget(s, "UNIX_BGPServiceAttributes")) { UNIX_BGPServiceAttributesFixture bGPServiceAttributes; bGPServiceAttributes.Run(); }
	//if (IsTarget(s, "UNIX_BGPServiceStatistics")) { UNIX_BGPServiceStatisticsFixture bGPServiceStatistics; bGPServiceStatistics.Run(); }
	//if (IsTarget(s, "UNIX_BGPStatistics")) { UNIX_BGPStatisticsFixture bGPStatistics; bGPStatistics.Run(); }
	//if (IsTarget(s, "UNIX_BinarySensor")) { UNIX_BinarySensorFixture binarySensor; binarySensor.Run(); }
	//if (IsTarget(s, "UNIX_BiometricAuthentication")) { UNIX_BiometricAuthenticationFixture biometricAuthentication; biometricAuthentication.Run(); }
	if (IsTarget(s, "UNIX_BIOSElement")) { UNIX_BIOSElementFixture bIOSElement; bIOSElement.Run(); }
	//if (IsTarget(s, "UNIX_BIOSEnumeration")) { UNIX_BIOSEnumerationFixture bIOSEnumeration; bIOSEnumeration.Run(); }
	if (IsTarget(s, "UNIX_BIOSFeature")) { UNIX_BIOSFeatureFixture bIOSFeature; bIOSFeature.Run(); }
	//if (IsTarget(s, "UNIX_BIOSFeatureBIOSElements")) { UNIX_BIOSFeatureBIOSElementsFixture bIOSFeatureBIOSElements; bIOSFeatureBIOSElements.Run(); }
	//if (IsTarget(s, "UNIX_BIOSInteger")) { UNIX_BIOSIntegerFixture bIOSInteger; bIOSInteger.Run(); }
	//if (IsTarget(s, "UNIX_BIOSLoadedInNV")) { UNIX_BIOSLoadedInNVFixture bIOSLoadedInNV; bIOSLoadedInNV.Run(); }
	//if (IsTarget(s, "UNIX_BIOSPassword")) { UNIX_BIOSPasswordFixture bIOSPassword; bIOSPassword.Run(); }
	//if (IsTarget(s, "UNIX_BIOSService")) { UNIX_BIOSServiceFixture bIOSService; bIOSService.Run(); }
	//if (IsTarget(s, "UNIX_BIOSServiceCapabilities")) { UNIX_BIOSServiceCapabilitiesFixture bIOSServiceCapabilities; bIOSServiceCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_BIOSString")) { UNIX_BIOSStringFixture bIOSString; bIOSString.Run(); }
	//if (IsTarget(s, "UNIX_BlockStatisticsCapabilities")) { UNIX_BlockStatisticsCapabilitiesFixture blockStatisticsCapabilities; blockStatisticsCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_BlockStatisticsManifest")) { UNIX_BlockStatisticsManifestFixture blockStatisticsManifest; blockStatisticsManifest.Run(); }
	//if (IsTarget(s, "UNIX_BlockStatisticsManifestCollection")) { UNIX_BlockStatisticsManifestCollectionFixture blockStatisticsManifestCollection; blockStatisticsManifestCollection.Run(); }
	//if (IsTarget(s, "UNIX_BlockStatisticsService")) { UNIX_BlockStatisticsServiceFixture blockStatisticsService; blockStatisticsService.Run(); }
	//if (IsTarget(s, "UNIX_BlockStorageStatisticalData")) { UNIX_BlockStorageStatisticalDataFixture blockStorageStatisticalData; blockStorageStatisticalData.Run(); }
	//if (IsTarget(s, "UNIX_BootConfigSetting")) { UNIX_BootConfigSettingFixture bootConfigSetting; bootConfigSetting.Run(); }
	//if (IsTarget(s, "UNIX_BootOSFromFS")) { UNIX_BootOSFromFSFixture bootOSFromFS; bootOSFromFS.Run(); }
	//if (IsTarget(s, "UNIX_BootSAP")) { UNIX_BootSAPFixture bootSAP; bootSAP.Run(); }
	//if (IsTarget(s, "UNIX_BootService")) { UNIX_BootServiceFixture bootService; bootService.Run(); }
	//if (IsTarget(s, "UNIX_BootServiceAccessBySAP")) { UNIX_BootServiceAccessBySAPFixture bootServiceAccessBySAP; bootServiceAccessBySAP.Run(); }
	//if (IsTarget(s, "UNIX_BootServiceCapabilities")) { UNIX_BootServiceCapabilitiesFixture bootServiceCapabilities; bootServiceCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_BootSettingData")) { UNIX_BootSettingDataFixture bootSettingData; bootSettingData.Run(); }
	//if (IsTarget(s, "UNIX_BootSourceSetting")) { UNIX_BootSourceSettingFixture bootSourceSetting; bootSourceSetting.Run(); }
	//if (IsTarget(s, "UNIX_BoundedPrioritySchedulingElement")) { UNIX_BoundedPrioritySchedulingElementFixture boundedPrioritySchedulingElement; boundedPrioritySchedulingElement.Run(); }
	//if (IsTarget(s, "UNIX_BufferPool")) { UNIX_BufferPoolFixture bufferPool; bufferPool.Run(); }
	//if (IsTarget(s, "UNIX_CableModem")) { UNIX_CableModemFixture cableModem; cableModem.Run(); }
	//if (IsTarget(s, "UNIX_CacheMemory")) { UNIX_CacheMemoryFixture cacheMemory; cacheMemory.Run(); }
	//if (IsTarget(s, "UNIX_CAHasPublicCertificate")) { UNIX_CAHasPublicCertificateFixture cAHasPublicCertificate; cAHasPublicCertificate.Run(); }
	//if (IsTarget(s, "UNIX_CalculatedRoutes")) { UNIX_CalculatedRoutesFixture calculatedRoutes; calculatedRoutes.Run(); }
	//if (IsTarget(s, "UNIX_CalculatesAmong")) { UNIX_CalculatesAmongFixture calculatesAmong; calculatesAmong.Run(); }
	//if (IsTarget(s, "UNIX_CalculationBasedOnQueue")) { UNIX_CalculationBasedOnQueueFixture calculationBasedOnQueue; calculationBasedOnQueue.Run(); }
	//if (IsTarget(s, "UNIX_CalculationServiceForDropper")) { UNIX_CalculationServiceForDropperFixture calculationServiceForDropper; calculationServiceForDropper.Run(); }
	//if (IsTarget(s, "UNIX_Card")) { UNIX_CardFixture card; card.Run(); }
	//if (IsTarget(s, "UNIX_CardInSlot")) { UNIX_CardInSlotFixture cardInSlot; cardInSlot.Run(); }
	//if (IsTarget(s, "UNIX_CardOnCard")) { UNIX_CardOnCardFixture cardOnCard; cardOnCard.Run(); }
	//if (IsTarget(s, "UNIX_CASignsPublicKeyCertificate")) { UNIX_CASignsPublicKeyCertificateFixture cASignsPublicKeyCertificate; cASignsPublicKeyCertificate.Run(); }
	//if (IsTarget(s, "UNIX_CDROMDrive")) { UNIX_CDROMDriveFixture cDROMDrive; cDROMDrive.Run(); }
	//if (IsTarget(s, "UNIX_CertificateAuthority")) { UNIX_CertificateAuthorityFixture certificateAuthority; certificateAuthority.Run(); }
	//if (IsTarget(s, "UNIX_CertificateManagementCapabilities")) { UNIX_CertificateManagementCapabilitiesFixture certificateManagementCapabilities; certificateManagementCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_CertificateManagementService")) { UNIX_CertificateManagementServiceFixture certificateManagementService; certificateManagementService.Run(); }
	//if (IsTarget(s, "UNIX_ChangerDevice")) { UNIX_ChangerDeviceFixture changerDevice; changerDevice.Run(); }
	//if (IsTarget(s, "UNIX_Chassis")) { UNIX_ChassisFixture chassis; chassis.Run(); }
	//if (IsTarget(s, "UNIX_ChassisInRack")) { UNIX_ChassisInRackFixture chassisInRack; chassisInRack.Run(); }
	//if (IsTarget(s, "UNIX_Chip")) { UNIX_ChipFixture chip; chip.Run(); }
	//if (IsTarget(s, "UNIX_CIMOMStatisticalData")) { UNIX_CIMOMStatisticalDataFixture cIMOMStatisticalData; cIMOMStatisticalData.Run(); }
	//if (IsTarget(s, "UNIX_CIMXMLCommunicationMechanism")) { UNIX_CIMXMLCommunicationMechanismFixture cIMXMLCommunicationMechanism; cIMXMLCommunicationMechanism.Run(); }
	//if (IsTarget(s, "UNIX_ClassCreation")) { UNIX_ClassCreationFixture classCreation; classCreation.Run(); }
	//if (IsTarget(s, "UNIX_ClassDeletion")) { UNIX_ClassDeletionFixture classDeletion; classDeletion.Run(); }
	//if (IsTarget(s, "UNIX_ClassifierElement")) { UNIX_ClassifierElementFixture classifierElement; classifierElement.Run(); }
	//if (IsTarget(s, "UNIX_ClassifierElementInClassifierService")) { UNIX_ClassifierElementInClassifierServiceFixture classifierElementInClassifierService; classifierElementInClassifierService.Run(); }
	//if (IsTarget(s, "UNIX_ClassifierElementUsesFilterList")) { UNIX_ClassifierElementUsesFilterListFixture classifierElementUsesFilterList; classifierElementUsesFilterList.Run(); }
	//if (IsTarget(s, "UNIX_ClassifierFilterSet")) { UNIX_ClassifierFilterSetFixture classifierFilterSet; classifierFilterSet.Run(); }
	//if (IsTarget(s, "UNIX_ClassifierService")) { UNIX_ClassifierServiceFixture classifierService; classifierService.Run(); }
	//if (IsTarget(s, "UNIX_ClassModification")) { UNIX_ClassModificationFixture classModification; classModification.Run(); }
	//if (IsTarget(s, "UNIX_CLPCapabilities")) { UNIX_CLPCapabilitiesFixture cLPCapabilities; cLPCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_CLPProtocolEndpoint")) { UNIX_CLPProtocolEndpointFixture cLPProtocolEndpoint; cLPProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_CLPSettingData")) { UNIX_CLPSettingDataFixture cLPSettingData; cLPSettingData.Run(); }
	//if (IsTarget(s, "UNIX_Cluster")) { UNIX_ClusterFixture cluster; cluster.Run(); }
	//if (IsTarget(s, "UNIX_ClusteringSAP")) { UNIX_ClusteringSAPFixture clusteringSAP; clusteringSAP.Run(); }
	//if (IsTarget(s, "UNIX_ClusteringService")) { UNIX_ClusteringServiceFixture clusteringService; clusteringService.Run(); }
	//if (IsTarget(s, "UNIX_ClusterServiceAccessBySAP")) { UNIX_ClusterServiceAccessBySAPFixture clusterServiceAccessBySAP; clusterServiceAccessBySAP.Run(); }
	//if (IsTarget(s, "UNIX_CollectedBufferPool")) { UNIX_CollectedBufferPoolFixture collectedBufferPool; collectedBufferPool.Run(); }
	//if (IsTarget(s, "UNIX_CollectedCollections")) { UNIX_CollectedCollectionsFixture collectedCollections; collectedCollections.Run(); }
	//if (IsTarget(s, "UNIX_CollectedSoftwareElements")) { UNIX_CollectedSoftwareElementsFixture collectedSoftwareElements; collectedSoftwareElements.Run(); }
	//if (IsTarget(s, "UNIX_CollectedSoftwareFeatures")) { UNIX_CollectedSoftwareFeaturesFixture collectedSoftwareFeatures; collectedSoftwareFeatures.Run(); }
	//if (IsTarget(s, "UNIX_CollectionConfiguration")) { UNIX_CollectionConfigurationFixture collectionConfiguration; collectionConfiguration.Run(); }
	//if (IsTarget(s, "UNIX_CollectionInOrganization")) { UNIX_CollectionInOrganizationFixture collectionInOrganization; collectionInOrganization.Run(); }
	//if (IsTarget(s, "UNIX_CollectionInSystem")) { UNIX_CollectionInSystemFixture collectionInSystem; collectionInSystem.Run(); }
	//if (IsTarget(s, "UNIX_CollectionOfSensors")) { UNIX_CollectionOfSensorsFixture collectionOfSensors; collectionOfSensors.Run(); }
	//if (IsTarget(s, "UNIX_CollectionSetting")) { UNIX_CollectionSettingFixture collectionSetting; collectionSetting.Run(); }
	//if (IsTarget(s, "UNIX_CommMechanismForAdapter")) { UNIX_CommMechanismForAdapterFixture commMechanismForAdapter; commMechanismForAdapter.Run(); }
	//if (IsTarget(s, "UNIX_CommMechanismForManager")) { UNIX_CommMechanismForManagerFixture commMechanismForManager; commMechanismForManager.Run(); }
	//if (IsTarget(s, "UNIX_CommMechanismForObjectManagerAdapter")) { UNIX_CommMechanismForObjectManagerAdapterFixture commMechanismForObjectManagerAdapter; commMechanismForObjectManagerAdapter.Run(); }
	//if (IsTarget(s, "UNIX_CommonDatabase")) { UNIX_CommonDatabaseFixture commonDatabase; commonDatabase.Run(); }
	//if (IsTarget(s, "UNIX_CommonDatabaseCapabilities")) { UNIX_CommonDatabaseCapabilitiesFixture commonDatabaseCapabilities; commonDatabaseCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_CommonDatabaseSettingData")) { UNIX_CommonDatabaseSettingDataFixture commonDatabaseSettingData; commonDatabaseSettingData.Run(); }
	//if (IsTarget(s, "UNIX_CommonDatabaseStatistics")) { UNIX_CommonDatabaseStatisticsFixture commonDatabaseStatistics; commonDatabaseStatistics.Run(); }
	//if (IsTarget(s, "UNIX_CompatibleProduct")) { UNIX_CompatibleProductFixture compatibleProduct; compatibleProduct.Run(); }
	//if (IsTarget(s, "UNIX_ComponentCS")) { UNIX_ComponentCSFixture componentCS; componentCS.Run(); }
	//if (IsTarget(s, "UNIX_CompositeExtent")) { UNIX_CompositeExtentFixture compositeExtent; compositeExtent.Run(); }
	//if (IsTarget(s, "UNIX_CompositeExtentBasedOn")) { UNIX_CompositeExtentBasedOnFixture compositeExtentBasedOn; compositeExtentBasedOn.Run(); }
	//if (IsTarget(s, "UNIX_CompoundPolicyAction")) { UNIX_CompoundPolicyActionFixture compoundPolicyAction; compoundPolicyAction.Run(); }
	//if (IsTarget(s, "UNIX_CompoundPolicyCondition")) { UNIX_CompoundPolicyConditionFixture compoundPolicyCondition; compoundPolicyCondition.Run(); }
	//if (IsTarget(s, "UNIX_ComputerSystemDMA")) { UNIX_ComputerSystemDMAFixture computerSystemDMA; computerSystemDMA.Run(); }
	//if (IsTarget(s, "UNIX_ComputerSystemIRQ")) { UNIX_ComputerSystemIRQFixture computerSystemIRQ; computerSystemIRQ.Run(); }
	//if (IsTarget(s, "UNIX_ComputerSystemMappedIO")) { UNIX_ComputerSystemMappedIOFixture computerSystemMappedIO; computerSystemMappedIO.Run(); }
	//if (IsTarget(s, "UNIX_ComputerSystemMemory")) { UNIX_ComputerSystemMemoryFixture computerSystemMemory; computerSystemMemory.Run(); }
	//if (IsTarget(s, "UNIX_ComputerSystemNodeCapabilities")) { UNIX_ComputerSystemNodeCapabilitiesFixture computerSystemNodeCapabilities; computerSystemNodeCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_ComputerSystemPackage")) { UNIX_ComputerSystemPackageFixture computerSystemPackage; computerSystemPackage.Run(); }
	//if (IsTarget(s, "UNIX_ComputerSystemProcessor")) { UNIX_ComputerSystemProcessorFixture computerSystemProcessor; computerSystemProcessor.Run(); }
	//if (IsTarget(s, "UNIX_ConcreteCollection")) { UNIX_ConcreteCollectionFixture concreteCollection; concreteCollection.Run(); }
	//if (IsTarget(s, "UNIX_ConcreteComponent")) { UNIX_ConcreteComponentFixture concreteComponent; concreteComponent.Run(); }
	//if (IsTarget(s, "UNIX_ConcreteDependency")) { UNIX_ConcreteDependencyFixture concreteDependency; concreteDependency.Run(); }
	//if (IsTarget(s, "UNIX_ConcreteIdentity")) { UNIX_ConcreteIdentityFixture concreteIdentity; concreteIdentity.Run(); }
	//if (IsTarget(s, "UNIX_ConcreteJob")) { UNIX_ConcreteJobFixture concreteJob; concreteJob.Run(); }
	//if (IsTarget(s, "UNIX_ConditioningServiceOnEndpoint")) { UNIX_ConditioningServiceOnEndpointFixture conditioningServiceOnEndpoint; conditioningServiceOnEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_Confederation")) { UNIX_ConfederationFixture confederation; confederation.Run(); }
	//if (IsTarget(s, "UNIX_Configuration")) { UNIX_ConfigurationFixture configuration; configuration.Run(); }
	//if (IsTarget(s, "UNIX_ConfigurationCapacity")) { UNIX_ConfigurationCapacityFixture configurationCapacity; configurationCapacity.Run(); }
	//if (IsTarget(s, "UNIX_ConfigurationComponent")) { UNIX_ConfigurationComponentFixture configurationComponent; configurationComponent.Run(); }
	//if (IsTarget(s, "UNIX_ConfigurationForSystem")) { UNIX_ConfigurationForSystemFixture configurationForSystem; configurationForSystem.Run(); }
	//if (IsTarget(s, "UNIX_ConfigurationReportingService")) { UNIX_ConfigurationReportingServiceFixture configurationReportingService; configurationReportingService.Run(); }
	//if (IsTarget(s, "UNIX_ConnectedTo")) { UNIX_ConnectedToFixture connectedTo; connectedTo.Run(); }
	//if (IsTarget(s, "UNIX_ConnectivityMembershipSettingData")) { UNIX_ConnectivityMembershipSettingDataFixture connectivityMembershipSettingData; connectivityMembershipSettingData.Run(); }
	//if (IsTarget(s, "UNIX_ConnectorOnPackage")) { UNIX_ConnectorOnPackageFixture connectorOnPackage; connectorOnPackage.Run(); }
	//if (IsTarget(s, "UNIX_ContainedDomain")) { UNIX_ContainedDomainFixture containedDomain; containedDomain.Run(); }
	//if (IsTarget(s, "UNIX_ContainedLocation")) { UNIX_ContainedLocationFixture containedLocation; containedLocation.Run(); }
	//if (IsTarget(s, "UNIX_ContainedProposal")) { UNIX_ContainedProposalFixture containedProposal; containedProposal.Run(); }
	//if (IsTarget(s, "UNIX_ContainedTransform")) { UNIX_ContainedTransformFixture containedTransform; containedTransform.Run(); }
	//if (IsTarget(s, "UNIX_ControllerConfigurationService")) { UNIX_ControllerConfigurationServiceFixture controllerConfigurationService; controllerConfigurationService.Run(); }
	//if (IsTarget(s, "UNIX_CopyFileAction")) { UNIX_CopyFileActionFixture copyFileAction; copyFileAction.Run(); }
	//if (IsTarget(s, "UNIX_CorrespondingSettingDataRecord")) { UNIX_CorrespondingSettingDataRecordFixture correspondingSettingDataRecord; correspondingSettingDataRecord.Run(); }
	//if (IsTarget(s, "UNIX_CorrespondingSettingsRecord")) { UNIX_CorrespondingSettingsRecordFixture correspondingSettingsRecord; correspondingSettingsRecord.Run(); }
	//if (IsTarget(s, "UNIX_CreateDirectoryAction")) { UNIX_CreateDirectoryActionFixture createDirectoryAction; createDirectoryAction.Run(); }
	//if (IsTarget(s, "UNIX_CredentialContext")) { UNIX_CredentialContextFixture credentialContext; credentialContext.Run(); }
	//if (IsTarget(s, "UNIX_CredentialManagementCapabilities")) { UNIX_CredentialManagementCapabilitiesFixture credentialManagementCapabilities; credentialManagementCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_CredentialManagementSAP")) { UNIX_CredentialManagementSAPFixture credentialManagementSAP; credentialManagementSAP.Run(); }
	//if (IsTarget(s, "UNIX_CredentialStore")) { UNIX_CredentialStoreFixture credentialStore; credentialStore.Run(); }
	//if (IsTarget(s, "UNIX_CurrentSensor")) { UNIX_CurrentSensorFixture currentSensor; currentSensor.Run(); }
	//if (IsTarget(s, "UNIX_CurrentTime")) { UNIX_CurrentTimeFixture currentTime; currentTime.Run(); }
	//if (IsTarget(s, "UNIX_DatabaseAdministrator")) { UNIX_DatabaseAdministratorFixture databaseAdministrator; databaseAdministrator.Run(); }
	//if (IsTarget(s, "UNIX_DatabaseControlFile")) { UNIX_DatabaseControlFileFixture databaseControlFile; databaseControlFile.Run(); }
	//if (IsTarget(s, "UNIX_DatabaseFile")) { UNIX_DatabaseFileFixture databaseFile; databaseFile.Run(); }
	//if (IsTarget(s, "UNIX_DatabaseParameter")) { UNIX_DatabaseParameterFixture databaseParameter; databaseParameter.Run(); }
	//if (IsTarget(s, "UNIX_DatabaseResourceStatistics")) { UNIX_DatabaseResourceStatisticsFixture databaseResourceStatistics; databaseResourceStatistics.Run(); }
	//if (IsTarget(s, "UNIX_DatabaseSegment")) { UNIX_DatabaseSegmentFixture databaseSegment; databaseSegment.Run(); }
	//if (IsTarget(s, "UNIX_DatabaseSegmentSettingData")) { UNIX_DatabaseSegmentSettingDataFixture databaseSegmentSettingData; databaseSegmentSettingData.Run(); }
	//if (IsTarget(s, "UNIX_DatabaseService")) { UNIX_DatabaseServiceFixture databaseService; databaseService.Run(); }
	//if (IsTarget(s, "UNIX_DatabaseServiceStatistics")) { UNIX_DatabaseServiceStatisticsFixture databaseServiceStatistics; databaseServiceStatistics.Run(); }
	//if (IsTarget(s, "UNIX_DatabaseStorage")) { UNIX_DatabaseStorageFixture databaseStorage; databaseStorage.Run(); }
	//if (IsTarget(s, "UNIX_DatabaseStorageArea")) { UNIX_DatabaseStorageAreaFixture databaseStorageArea; databaseStorageArea.Run(); }
	if (IsTarget(s, "UNIX_DatabaseSystem")) { UNIX_DatabaseSystemFixture databaseSystem; databaseSystem.Run(); }
	//if (IsTarget(s, "UNIX_DataFile")) { UNIX_DataFileFixture dataFile; dataFile.Run(); }
	//if (IsTarget(s, "UNIX_DependencyContext")) { UNIX_DependencyContextFixture dependencyContext; dependencyContext.Run(); }
	//if (IsTarget(s, "UNIX_DesktopMonitor")) { UNIX_DesktopMonitorFixture desktopMonitor; desktopMonitor.Run(); }
	//if (IsTarget(s, "UNIX_DeviceAccessedByFile")) { UNIX_DeviceAccessedByFileFixture deviceAccessedByFile; deviceAccessedByFile.Run(); }
	//if (IsTarget(s, "UNIX_DeviceErrorCounts")) { UNIX_DeviceErrorCountsFixture deviceErrorCounts; deviceErrorCounts.Run(); }
	//if (IsTarget(s, "UNIX_DeviceErrorData")) { UNIX_DeviceErrorDataFixture deviceErrorData; deviceErrorData.Run(); }
	if (IsTarget(s, "UNIX_DeviceFile")) { UNIX_DeviceFileFixture deviceFile; deviceFile.Run(); }
	//if (IsTarget(s, "UNIX_DeviceIdentity")) { UNIX_DeviceIdentityFixture deviceIdentity; deviceIdentity.Run(); }
	//if (IsTarget(s, "UNIX_DeviceSAPImplementation")) { UNIX_DeviceSAPImplementationFixture deviceSAPImplementation; deviceSAPImplementation.Run(); }
	//if (IsTarget(s, "UNIX_DeviceServicesLocation")) { UNIX_DeviceServicesLocationFixture deviceServicesLocation; deviceServicesLocation.Run(); }
	//if (IsTarget(s, "UNIX_DeviceSharingCapabilities")) { UNIX_DeviceSharingCapabilitiesFixture deviceSharingCapabilities; deviceSharingCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_DeviceSoftware")) { UNIX_DeviceSoftwareFixture deviceSoftware; deviceSoftware.Run(); }
	//if (IsTarget(s, "UNIX_DeviceStatistics")) { UNIX_DeviceStatisticsFixture deviceStatistics; deviceStatistics.Run(); }
	//if (IsTarget(s, "UNIX_DHCPCapabilities")) { UNIX_DHCPCapabilitiesFixture dHCPCapabilities; dHCPCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_DHCPProtocolEndpoint")) { UNIX_DHCPProtocolEndpointFixture dHCPProtocolEndpoint; dHCPProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_DHCPSettingData")) { UNIX_DHCPSettingDataFixture dHCPSettingData; dHCPSettingData.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticCompletionRecord")) { UNIX_DiagnosticCompletionRecordFixture diagnosticCompletionRecord; diagnosticCompletionRecord.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticLog")) { UNIX_DiagnosticLogFixture diagnosticLog; diagnosticLog.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticResult")) { UNIX_DiagnosticResultFixture diagnosticResult; diagnosticResult.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticResultForMSE")) { UNIX_DiagnosticResultForMSEFixture diagnosticResultForMSE; diagnosticResultForMSE.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticResultForTest")) { UNIX_DiagnosticResultForTestFixture diagnosticResultForTest; diagnosticResultForTest.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticResultInPackage")) { UNIX_DiagnosticResultInPackageFixture diagnosticResultInPackage; diagnosticResultInPackage.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticService")) { UNIX_DiagnosticServiceFixture diagnosticService; diagnosticService.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticServiceCapabilities")) { UNIX_DiagnosticServiceCapabilitiesFixture diagnosticServiceCapabilities; diagnosticServiceCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticServiceRecord")) { UNIX_DiagnosticServiceRecordFixture diagnosticServiceRecord; diagnosticServiceRecord.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticSetting")) { UNIX_DiagnosticSettingFixture diagnosticSetting; diagnosticSetting.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticSettingData")) { UNIX_DiagnosticSettingDataFixture diagnosticSettingData; diagnosticSettingData.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticSettingDataRecord")) { UNIX_DiagnosticSettingDataRecordFixture diagnosticSettingDataRecord; diagnosticSettingDataRecord.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticSettingRecord")) { UNIX_DiagnosticSettingRecordFixture diagnosticSettingRecord; diagnosticSettingRecord.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticsLog")) { UNIX_DiagnosticsLogFixture diagnosticsLog; diagnosticsLog.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticTest")) { UNIX_DiagnosticTestFixture diagnosticTest; diagnosticTest.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticTestForMSE")) { UNIX_DiagnosticTestForMSEFixture diagnosticTestForMSE; diagnosticTestForMSE.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticTestInPackage")) { UNIX_DiagnosticTestInPackageFixture diagnosticTestInPackage; diagnosticTestInPackage.Run(); }
	//if (IsTarget(s, "UNIX_DiagnosticTestSoftware")) { UNIX_DiagnosticTestSoftwareFixture diagnosticTestSoftware; diagnosticTestSoftware.Run(); }
	if (IsTarget(s, "UNIX_Directory")) { UNIX_DirectoryFixture directory; directory.Run(); }
	//if (IsTarget(s, "UNIX_DirectoryContainsFile")) { UNIX_DirectoryContainsFileFixture directoryContainsFile; directoryContainsFile.Run(); }
	//if (IsTarget(s, "UNIX_DirectorySpecification")) { UNIX_DirectorySpecificationFixture directorySpecification; directorySpecification.Run(); }
	//if (IsTarget(s, "UNIX_DirectorySpecificationFile")) { UNIX_DirectorySpecificationFileFixture directorySpecificationFile; directorySpecificationFile.Run(); }
	//if (IsTarget(s, "UNIX_DiscreteSensor")) { UNIX_DiscreteSensorFixture discreteSensor; discreteSensor.Run(); }
	if (IsTarget(s, "UNIX_DiskDrive")) { UNIX_DiskDriveFixture diskDrive; diskDrive.Run(); }
	//if (IsTarget(s, "UNIX_DisketteDrive")) { UNIX_DisketteDriveFixture disketteDrive; disketteDrive.Run(); }
	//if (IsTarget(s, "UNIX_DiskGroup")) { UNIX_DiskGroupFixture diskGroup; diskGroup.Run(); }
	if (IsTarget(s, "UNIX_DiskPartition")) { UNIX_DiskPartitionFixture diskPartition; diskPartition.Run(); }
	//if (IsTarget(s, "UNIX_DiskPartitionBasedOnVolume")) { UNIX_DiskPartitionBasedOnVolumeFixture diskPartitionBasedOnVolume; diskPartitionBasedOnVolume.Run(); }
	//if (IsTarget(s, "UNIX_DiskSpaceCheck")) { UNIX_DiskSpaceCheckFixture diskSpaceCheck; diskSpaceCheck.Run(); }
	//if (IsTarget(s, "UNIX_DisplayController")) { UNIX_DisplayControllerFixture displayController; displayController.Run(); }
	//if (IsTarget(s, "UNIX_DMA")) { UNIX_DMAFixture dMA; dMA.Run(); }
	//if (IsTarget(s, "UNIX_DNSGeneralSettingData")) { UNIX_DNSGeneralSettingDataFixture dNSGeneralSettingData; dNSGeneralSettingData.Run(); }
	//if (IsTarget(s, "UNIX_DNSProtocolEndpoint")) { UNIX_DNSProtocolEndpointFixture dNSProtocolEndpoint; dNSProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_DNSSettingData")) { UNIX_DNSSettingDataFixture dNSSettingData; dNSSettingData.Run(); }
	//if (IsTarget(s, "UNIX_Docked")) { UNIX_DockedFixture docked; docked.Run(); }
	//if (IsTarget(s, "UNIX_DocumentAuthentication")) { UNIX_DocumentAuthenticationFixture documentAuthentication; documentAuthentication.Run(); }
	//if (IsTarget(s, "UNIX_Door")) { UNIX_DoorFixture door; door.Run(); }
	//if (IsTarget(s, "UNIX_DoorAccessToDevice")) { UNIX_DoorAccessToDeviceFixture doorAccessToDevice; doorAccessToDevice.Run(); }
	//if (IsTarget(s, "UNIX_DoorAccessToPhysicalElement")) { UNIX_DoorAccessToPhysicalElementFixture doorAccessToPhysicalElement; doorAccessToPhysicalElement.Run(); }
	//if (IsTarget(s, "UNIX_DriveInDiskGroup")) { UNIX_DriveInDiskGroupFixture driveInDiskGroup; driveInDiskGroup.Run(); }
	//if (IsTarget(s, "UNIX_DropThresholdCalculationService")) { UNIX_DropThresholdCalculationServiceFixture dropThresholdCalculationService; dropThresholdCalculationService.Run(); }
	//if (IsTarget(s, "UNIX_DSCPMarkerService")) { UNIX_DSCPMarkerServiceFixture dSCPMarkerService; dSCPMarkerService.Run(); }
	//if (IsTarget(s, "UNIX_DVDDrive")) { UNIX_DVDDriveFixture dVDDrive; dVDDrive.Run(); }
	//if (IsTarget(s, "UNIX_DynamicForwardingEntry")) { UNIX_DynamicForwardingEntryFixture dynamicForwardingEntry; dynamicForwardingEntry.Run(); }
	//if (IsTarget(s, "UNIX_EFService")) { UNIX_EFServiceFixture eFService; eFService.Run(); }
	//if (IsTarget(s, "UNIX_EGPRouteCalcDependency")) { UNIX_EGPRouteCalcDependencyFixture eGPRouteCalcDependency; eGPRouteCalcDependency.Run(); }
	//if (IsTarget(s, "UNIX_EgressConditioningServiceOnEndpoint")) { UNIX_EgressConditioningServiceOnEndpointFixture egressConditioningServiceOnEndpoint; egressConditioningServiceOnEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_ElementAllocatedFromPool")) { UNIX_ElementAllocatedFromPoolFixture elementAllocatedFromPool; elementAllocatedFromPool.Run(); }
	//if (IsTarget(s, "UNIX_ElementAsUser")) { UNIX_ElementAsUserFixture elementAsUser; elementAsUser.Run(); }
	//if (IsTarget(s, "UNIX_ElementCapabilities")) { UNIX_ElementCapabilitiesFixture elementCapabilities; elementCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_ElementCapacity")) { UNIX_ElementCapacityFixture elementCapacity; elementCapacity.Run(); }
	//if (IsTarget(s, "UNIX_ElementConfiguration")) { UNIX_ElementConfigurationFixture elementConfiguration; elementConfiguration.Run(); }
	//if (IsTarget(s, "UNIX_ElementConformsToProfile")) { UNIX_ElementConformsToProfileFixture elementConformsToProfile; elementConformsToProfile.Run(); }
	//if (IsTarget(s, "UNIX_ElementInConnector")) { UNIX_ElementInConnectorFixture elementInConnector; elementInConnector.Run(); }
	//if (IsTarget(s, "UNIX_ElementInPolicyRoleCollection")) { UNIX_ElementInPolicyRoleCollectionFixture elementInPolicyRoleCollection; elementInPolicyRoleCollection.Run(); }
	//if (IsTarget(s, "UNIX_ElementInSchedulingService")) { UNIX_ElementInSchedulingServiceFixture elementInSchedulingService; elementInSchedulingService.Run(); }
	//if (IsTarget(s, "UNIX_ElementLocation")) { UNIX_ElementLocationFixture elementLocation; elementLocation.Run(); }
	//if (IsTarget(s, "UNIX_ElementProfile")) { UNIX_ElementProfileFixture elementProfile; elementProfile.Run(); }
	//if (IsTarget(s, "UNIX_ElementSecuritySensitivity")) { UNIX_ElementSecuritySensitivityFixture elementSecuritySensitivity; elementSecuritySensitivity.Run(); }
	//if (IsTarget(s, "UNIX_ElementSetting")) { UNIX_ElementSettingFixture elementSetting; elementSetting.Run(); }
	//if (IsTarget(s, "UNIX_ElementSettingData")) { UNIX_ElementSettingDataFixture elementSettingData; elementSettingData.Run(); }
	//if (IsTarget(s, "UNIX_ElementsLinked")) { UNIX_ElementsLinkedFixture elementsLinked; elementsLinked.Run(); }
	//if (IsTarget(s, "UNIX_ElementSoftwareIdentity")) { UNIX_ElementSoftwareIdentityFixture elementSoftwareIdentity; elementSoftwareIdentity.Run(); }
	//if (IsTarget(s, "UNIX_ElementStatisticalData")) { UNIX_ElementStatisticalDataFixture elementStatisticalData; elementStatisticalData.Run(); }
	//if (IsTarget(s, "UNIX_ElementView")) { UNIX_ElementViewFixture elementView; elementView.Run(); }
	//if (IsTarget(s, "UNIX_EndpointForIPNetworkConnection")) { UNIX_EndpointForIPNetworkConnectionFixture endpointForIPNetworkConnection; endpointForIPNetworkConnection.Run(); }
	//if (IsTarget(s, "UNIX_EndpointIdentity")) { UNIX_EndpointIdentityFixture endpointIdentity; endpointIdentity.Run(); }
	//if (IsTarget(s, "UNIX_EndpointInArea")) { UNIX_EndpointInAreaFixture endpointInArea; endpointInArea.Run(); }
	//if (IsTarget(s, "UNIX_EndpointInLink")) { UNIX_EndpointInLinkFixture endpointInLink; endpointInLink.Run(); }
	//if (IsTarget(s, "UNIX_EndpointOfNetworkPipe")) { UNIX_EndpointOfNetworkPipeFixture endpointOfNetworkPipe; endpointOfNetworkPipe.Run(); }
	//if (IsTarget(s, "UNIX_EntriesInFilterList")) { UNIX_EntriesInFilterListFixture entriesInFilterList; entriesInFilterList.Run(); }
	//if (IsTarget(s, "UNIX_Error")) { UNIX_ErrorFixture error; error.Run(); }
	//if (IsTarget(s, "UNIX_ErrorCountersForDevice")) { UNIX_ErrorCountersForDeviceFixture errorCountersForDevice; errorCountersForDevice.Run(); }
	//if (IsTarget(s, "UNIX_ESCONController")) { UNIX_ESCONControllerFixture eSCONController; eSCONController.Run(); }
	//if (IsTarget(s, "UNIX_ESPTransform")) { UNIX_ESPTransformFixture eSPTransform; eSPTransform.Run(); }
	//if (IsTarget(s, "UNIX_EthernetAdapter")) { UNIX_EthernetAdapterFixture ethernetAdapter; ethernetAdapter.Run(); }
	if (IsTarget(s, "UNIX_EthernetPort")) { UNIX_EthernetPortFixture ethernetPort; ethernetPort.Run(); }
	//if (IsTarget(s, "UNIX_EthernetPortAllocationSettingData")) { UNIX_EthernetPortAllocationSettingDataFixture ethernetPortAllocationSettingData; ethernetPortAllocationSettingData.Run(); }
	//if (IsTarget(s, "UNIX_EthernetPortStatistics")) { UNIX_EthernetPortStatisticsFixture ethernetPortStatistics; ethernetPortStatistics.Run(); }
	//if (IsTarget(s, "UNIX_EWMAMeterService")) { UNIX_EWMAMeterServiceFixture eWMAMeterService; eWMAMeterService.Run(); }
	//if (IsTarget(s, "UNIX_ExecuteProgram")) { UNIX_ExecuteProgramFixture executeProgram; executeProgram.Run(); }
	//if (IsTarget(s, "UNIX_Export")) { UNIX_ExportFixture export; export.Run(); }
	//if (IsTarget(s, "UNIX_ExtendedStaticIPAssignmentSettingData")) { UNIX_ExtendedStaticIPAssignmentSettingDataFixture extendedStaticIPAssignmentSettingData; extendedStaticIPAssignmentSettingData.Run(); }
	//if (IsTarget(s, "UNIX_ExtentInDiskGroup")) { UNIX_ExtentInDiskGroupFixture extentInDiskGroup; extentInDiskGroup.Run(); }
	//if (IsTarget(s, "UNIX_ExtraCapacityGroup")) { UNIX_ExtraCapacityGroupFixture extraCapacityGroup; extraCapacityGroup.Run(); }
	//if (IsTarget(s, "UNIX_Fan")) { UNIX_FanFixture fan; fan.Run(); }
	//if (IsTarget(s, "UNIX_FCAdapterEventCounters")) { UNIX_FCAdapterEventCountersFixture fCAdapterEventCounters; fCAdapterEventCounters.Run(); }
	//if (IsTarget(s, "UNIX_FCPort")) { UNIX_FCPortFixture fCPort; fCPort.Run(); }
	//if (IsTarget(s, "UNIX_FCPortCapabilities")) { UNIX_FCPortCapabilitiesFixture fCPortCapabilities; fCPortCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_FCPortRateStatistics")) { UNIX_FCPortRateStatisticsFixture fCPortRateStatistics; fCPortRateStatistics.Run(); }
	//if (IsTarget(s, "UNIX_FCPortStatistics")) { UNIX_FCPortStatisticsFixture fCPortStatistics; fCPortStatistics.Run(); }
	//if (IsTarget(s, "UNIX_FCSwitchCapabilities")) { UNIX_FCSwitchCapabilitiesFixture fCSwitchCapabilities; fCSwitchCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_FCSwitchSettings")) { UNIX_FCSwitchSettingsFixture fCSwitchSettings; fCSwitchSettings.Run(); }
	//if (IsTarget(s, "UNIX_FibreChannelAdapter")) { UNIX_FibreChannelAdapterFixture fibreChannelAdapter; fibreChannelAdapter.Run(); }
	//if (IsTarget(s, "UNIX_FibrePort")) { UNIX_FibrePortFixture fibrePort; fibrePort.Run(); }
	//if (IsTarget(s, "UNIX_FibrePortActiveLogin")) { UNIX_FibrePortActiveLoginFixture fibrePortActiveLogin; fibrePortActiveLogin.Run(); }
	//if (IsTarget(s, "UNIX_FibrePortEventCounters")) { UNIX_FibrePortEventCountersFixture fibrePortEventCounters; fibrePortEventCounters.Run(); }
	//if (IsTarget(s, "UNIX_FibrePortOnFCAdapter")) { UNIX_FibrePortOnFCAdapterFixture fibrePortOnFCAdapter; fibrePortOnFCAdapter.Run(); }
	//if (IsTarget(s, "UNIX_FibreProtocolService")) { UNIX_FibreProtocolServiceFixture fibreProtocolService; fibreProtocolService.Run(); }
	//if (IsTarget(s, "UNIX_FIFOPipeFile")) { UNIX_FIFOPipeFileFixture fIFOPipeFile; fIFOPipeFile.Run(); }
	//if (IsTarget(s, "UNIX_FileIdentity")) { UNIX_FileIdentityFixture fileIdentity; fileIdentity.Run(); }
	//if (IsTarget(s, "UNIX_FileSpecification")) { UNIX_FileSpecificationFixture fileSpecification; fileSpecification.Run(); }
	//if (IsTarget(s, "UNIX_FileStorage")) { UNIX_FileStorageFixture fileStorage; fileStorage.Run(); }
	//if (IsTarget(s, "UNIX_FileSystemCapabilities")) { UNIX_FileSystemCapabilitiesFixture fileSystemCapabilities; fileSystemCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_FileSystemSettingData")) { UNIX_FileSystemSettingDataFixture fileSystemSettingData; fileSystemSettingData.Run(); }
	//if (IsTarget(s, "UNIX_FilterCollection")) { UNIX_FilterCollectionFixture filterCollection; filterCollection.Run(); }
	//if (IsTarget(s, "UNIX_FilteredBGPAttributes")) { UNIX_FilteredBGPAttributesFixture filteredBGPAttributes; filteredBGPAttributes.Run(); }
	//if (IsTarget(s, "UNIX_FilterEntry")) { UNIX_FilterEntryFixture filterEntry; filterEntry.Run(); }
	//if (IsTarget(s, "UNIX_FilterEntryInSystem")) { UNIX_FilterEntryInSystemFixture filterEntryInSystem; filterEntryInSystem.Run(); }
	//if (IsTarget(s, "UNIX_FilterList")) { UNIX_FilterListFixture filterList; filterList.Run(); }
	//if (IsTarget(s, "UNIX_FilterListInSystem")) { UNIX_FilterListInSystemFixture filterListInSystem; filterListInSystem.Run(); }
	//if (IsTarget(s, "UNIX_FilterListsInBGPRouteMap")) { UNIX_FilterListsInBGPRouteMapFixture filterListsInBGPRouteMap; filterListsInBGPRouteMap.Run(); }
	//if (IsTarget(s, "UNIX_FilterOfPacketCondition")) { UNIX_FilterOfPacketConditionFixture filterOfPacketCondition; filterOfPacketCondition.Run(); }
	//if (IsTarget(s, "UNIX_FilterOfSecurityAssociation")) { UNIX_FilterOfSecurityAssociationFixture filterOfSecurityAssociation; filterOfSecurityAssociation.Run(); }
	//if (IsTarget(s, "UNIX_FlatPanel")) { UNIX_FlatPanelFixture flatPanel; flatPanel.Run(); }
	//if (IsTarget(s, "UNIX_FlowService")) { UNIX_FlowServiceFixture flowService; flowService.Run(); }
	//if (IsTarget(s, "UNIX_ForwardedRoutes")) { UNIX_ForwardedRoutesFixture forwardedRoutes; forwardedRoutes.Run(); }
	//if (IsTarget(s, "UNIX_ForwardsAmong")) { UNIX_ForwardsAmongFixture forwardsAmong; forwardsAmong.Run(); }
	//if (IsTarget(s, "UNIX_FromDirectoryAction")) { UNIX_FromDirectoryActionFixture fromDirectoryAction; fromDirectoryAction.Run(); }
	//if (IsTarget(s, "UNIX_FromDirectorySpecification")) { UNIX_FromDirectorySpecificationFixture fromDirectorySpecification; fromDirectorySpecification.Run(); }
	//if (IsTarget(s, "UNIX_FRU")) { UNIX_FRUFixture fRU; fRU.Run(); }
	//if (IsTarget(s, "UNIX_FRUIncludesProduct")) { UNIX_FRUIncludesProductFixture fRUIncludesProduct; fRUIncludesProduct.Run(); }
	//if (IsTarget(s, "UNIX_FRUIncludesSoftwareFeature")) { UNIX_FRUIncludesSoftwareFeatureFixture fRUIncludesSoftwareFeature; fRUIncludesSoftwareFeature.Run(); }
	//if (IsTarget(s, "UNIX_FRUPhysicalElements")) { UNIX_FRUPhysicalElementsFixture fRUPhysicalElements; fRUPhysicalElements.Run(); }
	//if (IsTarget(s, "UNIX_GatewayPathID")) { UNIX_GatewayPathIDFixture gatewayPathID; gatewayPathID.Run(); }
	if (IsTarget(s, "UNIX_Group")) { UNIX_GroupFixture group; group.Run(); }
	//if (IsTarget(s, "UNIX_HardwareThread")) { UNIX_HardwareThreadFixture hardwareThread; hardwareThread.Run(); }
	//if (IsTarget(s, "UNIX_Hdr8021Filter")) { UNIX_Hdr8021FilterFixture hdr8021Filter; hdr8021Filter.Run(); }
	//if (IsTarget(s, "UNIX_Hdr8021PService")) { UNIX_Hdr8021PServiceFixture hdr8021PService; hdr8021PService.Run(); }
	//if (IsTarget(s, "UNIX_HDSLModem")) { UNIX_HDSLModemFixture hDSLModem; hDSLModem.Run(); }
	//if (IsTarget(s, "UNIX_HeadTailDropper")) { UNIX_HeadTailDropperFixture headTailDropper; headTailDropper.Run(); }
	//if (IsTarget(s, "UNIX_HeadTailDropQueueBinding")) { UNIX_HeadTailDropQueueBindingFixture headTailDropQueueBinding; headTailDropQueueBinding.Run(); }
	//if (IsTarget(s, "UNIX_HeatPipe")) { UNIX_HeatPipeFixture heatPipe; heatPipe.Run(); }
	//if (IsTarget(s, "UNIX_HelpService")) { UNIX_HelpServiceFixture helpService; helpService.Run(); }
	//if (IsTarget(s, "UNIX_HomeForMedia")) { UNIX_HomeForMediaFixture homeForMedia; homeForMedia.Run(); }
	//if (IsTarget(s, "UNIX_HostedACI")) { UNIX_HostedACIFixture hostedACI; hostedACI.Run(); }
	//if (IsTarget(s, "UNIX_HostedAdminDistance")) { UNIX_HostedAdminDistanceFixture hostedAdminDistance; hostedAdminDistance.Run(); }
	//if (IsTarget(s, "UNIX_HostedAuthenticationRequirement")) { UNIX_HostedAuthenticationRequirementFixture hostedAuthenticationRequirement; hostedAuthenticationRequirement.Run(); }
	//if (IsTarget(s, "UNIX_HostedBGPAttributes")) { UNIX_HostedBGPAttributesFixture hostedBGPAttributes; hostedBGPAttributes.Run(); }
	//if (IsTarget(s, "UNIX_HostedBGPPeerGroup")) { UNIX_HostedBGPPeerGroupFixture hostedBGPPeerGroup; hostedBGPPeerGroup.Run(); }
	//if (IsTarget(s, "UNIX_HostedBGPRouteMap")) { UNIX_HostedBGPRouteMapFixture hostedBGPRouteMap; hostedBGPRouteMap.Run(); }
	//if (IsTarget(s, "UNIX_HostedBootSAP")) { UNIX_HostedBootSAPFixture hostedBootSAP; hostedBootSAP.Run(); }
	//if (IsTarget(s, "UNIX_HostedBootService")) { UNIX_HostedBootServiceFixture hostedBootService; hostedBootService.Run(); }
	//if (IsTarget(s, "UNIX_HostedClusterSAP")) { UNIX_HostedClusterSAPFixture hostedClusterSAP; hostedClusterSAP.Run(); }
	//if (IsTarget(s, "UNIX_HostedClusterService")) { UNIX_HostedClusterServiceFixture hostedClusterService; hostedClusterService.Run(); }
	//if (IsTarget(s, "UNIX_HostedCollection")) { UNIX_HostedCollectionFixture hostedCollection; hostedCollection.Run(); }
	//if (IsTarget(s, "UNIX_HostedFileSystem")) { UNIX_HostedFileSystemFixture hostedFileSystem; hostedFileSystem.Run(); }
	//if (IsTarget(s, "UNIX_HostedFilterEntryBase")) { UNIX_HostedFilterEntryBaseFixture hostedFilterEntryBase; hostedFilterEntryBase.Run(); }
	//if (IsTarget(s, "UNIX_HostedFilterList")) { UNIX_HostedFilterListFixture hostedFilterList; hostedFilterList.Run(); }
	//if (IsTarget(s, "UNIX_HostedForwardingServices")) { UNIX_HostedForwardingServicesFixture hostedForwardingServices; hostedForwardingServices.Run(); }
	//if (IsTarget(s, "UNIX_HostedJobDestination")) { UNIX_HostedJobDestinationFixture hostedJobDestination; hostedJobDestination.Run(); }
	//if (IsTarget(s, "UNIX_HostedNetworkPipe")) { UNIX_HostedNetworkPipeFixture hostedNetworkPipe; hostedNetworkPipe.Run(); }
	//if (IsTarget(s, "UNIX_HostedResourcePool")) { UNIX_HostedResourcePoolFixture hostedResourcePool; hostedResourcePool.Run(); }
	//if (IsTarget(s, "UNIX_HostedRoute")) { UNIX_HostedRouteFixture hostedRoute; hostedRoute.Run(); }
	//if (IsTarget(s, "UNIX_HostedRoutingPolicy")) { UNIX_HostedRoutingPolicyFixture hostedRoutingPolicy; hostedRoutingPolicy.Run(); }
	//if (IsTarget(s, "UNIX_HostedRoutingServices")) { UNIX_HostedRoutingServicesFixture hostedRoutingServices; hostedRoutingServices.Run(); }
	//if (IsTarget(s, "UNIX_HostedStoragePool")) { UNIX_HostedStoragePoolFixture hostedStoragePool; hostedStoragePool.Run(); }
	//if (IsTarget(s, "UNIX_HostingCS")) { UNIX_HostingCSFixture hostingCS; hostingCS.Run(); }
	//if (IsTarget(s, "UNIX_IBSubnetManager")) { UNIX_IBSubnetManagerFixture iBSubnetManager; iBSubnetManager.Run(); }
	//if (IsTarget(s, "UNIX_IDEController")) { UNIX_IDEControllerFixture iDEController; iDEController.Run(); }
	//if (IsTarget(s, "UNIX_IdentificationOfManagedSystem")) { UNIX_IdentificationOfManagedSystemFixture identificationOfManagedSystem; identificationOfManagedSystem.Run(); }
	//if (IsTarget(s, "UNIX_IdentityContext")) { UNIX_IdentityContextFixture identityContext; identityContext.Run(); }
	//if (IsTarget(s, "UNIX_IdentityManagementService")) { UNIX_IdentityManagementServiceFixture identityManagementService; identityManagementService.Run(); }
	//if (IsTarget(s, "UNIX_IEEE8021xCapabilities")) { UNIX_IEEE8021xCapabilitiesFixture iEEE8021xCapabilities; iEEE8021xCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_IEEE8021xSettings")) { UNIX_IEEE8021xSettingsFixture iEEE8021xSettings; iEEE8021xSettings.Run(); }
	//if (IsTarget(s, "UNIX_IKEAction")) { UNIX_IKEActionFixture iKEAction; iKEAction.Run(); }
	//if (IsTarget(s, "UNIX_IKEProposal")) { UNIX_IKEProposalFixture iKEProposal; iKEProposal.Run(); }
	//if (IsTarget(s, "UNIX_IKERule")) { UNIX_IKERuleFixture iKERule; iKERule.Run(); }
	//if (IsTarget(s, "UNIX_IKESAEndpoint")) { UNIX_IKESAEndpointFixture iKESAEndpoint; iKESAEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_IKESecretIsNamed")) { UNIX_IKESecretIsNamedFixture iKESecretIsNamed; iKESecretIsNamed.Run(); }
	//if (IsTarget(s, "UNIX_InBGPPeerGroup")) { UNIX_InBGPPeerGroupFixture inBGPPeerGroup; inBGPPeerGroup.Run(); }
	//if (IsTarget(s, "UNIX_InboundVLAN")) { UNIX_InboundVLANFixture inboundVLAN; inboundVLAN.Run(); }
	//if (IsTarget(s, "UNIX_IndicationFilter")) { UNIX_IndicationFilterFixture indicationFilter; indicationFilter.Run(); }
	//if (IsTarget(s, "UNIX_IndicationHandlerCIMXML")) { UNIX_IndicationHandlerCIMXMLFixture indicationHandlerCIMXML; indicationHandlerCIMXML.Run(); }
	//if (IsTarget(s, "UNIX_IndicationService")) { UNIX_IndicationServiceFixture indicationService; indicationService.Run(); }
	//if (IsTarget(s, "UNIX_IndicationServiceCapabilities")) { UNIX_IndicationServiceCapabilitiesFixture indicationServiceCapabilities; indicationServiceCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_IndicationServiceSettingData")) { UNIX_IndicationServiceSettingDataFixture indicationServiceSettingData; indicationServiceSettingData.Run(); }
	//if (IsTarget(s, "UNIX_IndicatorLED")) { UNIX_IndicatorLEDFixture indicatorLED; indicatorLED.Run(); }
	//if (IsTarget(s, "UNIX_IndicatorLEDCapabilities")) { UNIX_IndicatorLEDCapabilitiesFixture indicatorLEDCapabilities; indicatorLEDCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_InfraredController")) { UNIX_InfraredControllerFixture infraredController; infraredController.Run(); }
	//if (IsTarget(s, "UNIX_IngressConditioningServiceOnEndpoint")) { UNIX_IngressConditioningServiceOnEndpointFixture ingressConditioningServiceOnEndpoint; ingressConditioningServiceOnEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_InLogicalNetwork")) { UNIX_InLogicalNetworkFixture inLogicalNetwork; inLogicalNetwork.Run(); }
	//if (IsTarget(s, "UNIX_InSegment")) { UNIX_InSegmentFixture inSegment; inSegment.Run(); }
	if (IsTarget(s, "UNIX_InstalledOS")) { UNIX_InstalledOSFixture installedOS; installedOS.Run(); }
	//if (IsTarget(s, "UNIX_InstalledProduct")) { UNIX_InstalledProductFixture installedProduct; installedProduct.Run(); }
	//if (IsTarget(s, "UNIX_InstalledProductImage")) { UNIX_InstalledProductImageFixture installedProductImage; installedProductImage.Run(); }
	if (IsTarget(s, "UNIX_InstalledSoftwareElement")) { UNIX_InstalledSoftwareElementFixture installedSoftwareElement; installedSoftwareElement.Run(); }
	//if (IsTarget(s, "UNIX_InstalledSoftwareIdentity")) { UNIX_InstalledSoftwareIdentityFixture installedSoftwareIdentity; installedSoftwareIdentity.Run(); }
	//if (IsTarget(s, "UNIX_InstCreation")) { UNIX_InstCreationFixture instCreation; instCreation.Run(); }
	//if (IsTarget(s, "UNIX_InstDeletion")) { UNIX_InstDeletionFixture instDeletion; instDeletion.Run(); }
	//if (IsTarget(s, "UNIX_InstMethodCall")) { UNIX_InstMethodCallFixture instMethodCall; instMethodCall.Run(); }
	//if (IsTarget(s, "UNIX_InstModification")) { UNIX_InstModificationFixture instModification; instModification.Run(); }
	//if (IsTarget(s, "UNIX_InstRead")) { UNIX_InstReadFixture instRead; instRead.Run(); }
	//if (IsTarget(s, "UNIX_InterLibraryPort")) { UNIX_InterLibraryPortFixture interLibraryPort; interLibraryPort.Run(); }
	//if (IsTarget(s, "UNIX_IPAddressRange")) { UNIX_IPAddressRangeFixture iPAddressRange; iPAddressRange.Run(); }
	//if (IsTarget(s, "UNIX_IPCOMPTransform")) { UNIX_IPCOMPTransformFixture iPCOMPTransform; iPCOMPTransform.Run(); }
	//if (IsTarget(s, "UNIX_IPConfigurationService")) { UNIX_IPConfigurationServiceFixture iPConfigurationService; iPConfigurationService.Run(); }
	//if (IsTarget(s, "UNIX_IPConnectivitySubnet")) { UNIX_IPConnectivitySubnetFixture iPConnectivitySubnet; iPConnectivitySubnet.Run(); }
	//if (IsTarget(s, "UNIX_IPHeadersFilter")) { UNIX_IPHeadersFilterFixture iPHeadersFilter; iPHeadersFilter.Run(); }
	//if (IsTarget(s, "UNIX_IPNetworkConnection")) { UNIX_IPNetworkConnectionFixture iPNetworkConnection; iPNetworkConnection.Run(); }
	//if (IsTarget(s, "UNIX_IPNetworkIdentity")) { UNIX_IPNetworkIdentityFixture iPNetworkIdentity; iPNetworkIdentity.Run(); }
	//if (IsTarget(s, "UNIX_IPProtocolEndpoint")) { UNIX_IPProtocolEndpointFixture iPProtocolEndpoint; iPProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_IPsecPolicyForEndpoint")) { UNIX_IPsecPolicyForEndpointFixture iPsecPolicyForEndpoint; iPsecPolicyForEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_IPsecPolicyForSystem")) { UNIX_IPsecPolicyForSystemFixture iPsecPolicyForSystem; iPsecPolicyForSystem.Run(); }
	//if (IsTarget(s, "UNIX_IPsecProposal")) { UNIX_IPsecProposalFixture iPsecProposal; iPsecProposal.Run(); }
	//if (IsTarget(s, "UNIX_IPsecRule")) { UNIX_IPsecRuleFixture iPsecRule; iPsecRule.Run(); }
	//if (IsTarget(s, "UNIX_IPsecSAEndpoint")) { UNIX_IPsecSAEndpointFixture iPsecSAEndpoint; iPsecSAEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_IPsecTransportAction")) { UNIX_IPsecTransportActionFixture iPsecTransportAction; iPsecTransportAction.Run(); }
	//if (IsTarget(s, "UNIX_IPsecTunnelAction")) { UNIX_IPsecTunnelActionFixture iPsecTunnelAction; iPsecTunnelAction.Run(); }
	//if (IsTarget(s, "UNIX_IPSOFilterEntry")) { UNIX_IPSOFilterEntryFixture iPSOFilterEntry; iPSOFilterEntry.Run(); }
	//if (IsTarget(s, "UNIX_IPSubnet")) { UNIX_IPSubnetFixture iPSubnet; iPSubnet.Run(); }
	//if (IsTarget(s, "UNIX_IPVersionSettingData")) { UNIX_IPVersionSettingDataFixture iPVersionSettingData; iPVersionSettingData.Run(); }
	//if (IsTarget(s, "UNIX_IPXConnectivityNetwork")) { UNIX_IPXConnectivityNetworkFixture iPXConnectivityNetwork; iPXConnectivityNetwork.Run(); }
	//if (IsTarget(s, "UNIX_IPXNetwork")) { UNIX_IPXNetworkFixture iPXNetwork; iPXNetwork.Run(); }
	//if (IsTarget(s, "UNIX_IPXProtocolEndpoint")) { UNIX_IPXProtocolEndpointFixture iPXProtocolEndpoint; iPXProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_IRQ")) { UNIX_IRQFixture iRQ; iRQ.Run(); }
	//if (IsTarget(s, "UNIX_iSCSICapabilities")) { UNIX_iSCSICapabilitiesFixture iSCSICapabilities; iSCSICapabilities.Run(); }
	//if (IsTarget(s, "UNIX_iSCSIConnection")) { UNIX_iSCSIConnectionFixture iSCSIConnection; iSCSIConnection.Run(); }
	//if (IsTarget(s, "UNIX_iSCSIConnectionSettings")) { UNIX_iSCSIConnectionSettingsFixture iSCSIConnectionSettings; iSCSIConnectionSettings.Run(); }
	//if (IsTarget(s, "UNIX_iSCSILoginStatistics")) { UNIX_iSCSILoginStatisticsFixture iSCSILoginStatistics; iSCSILoginStatistics.Run(); }
	//if (IsTarget(s, "UNIX_iSCSIProtocolEndpoint")) { UNIX_iSCSIProtocolEndpointFixture iSCSIProtocolEndpoint; iSCSIProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_iSCSISession")) { UNIX_iSCSISessionFixture iSCSISession; iSCSISession.Run(); }
	//if (IsTarget(s, "UNIX_iSCSISessionFailures")) { UNIX_iSCSISessionFailuresFixture iSCSISessionFailures; iSCSISessionFailures.Run(); }
	//if (IsTarget(s, "UNIX_iSCSISessionSettings")) { UNIX_iSCSISessionSettingsFixture iSCSISessionSettings; iSCSISessionSettings.Run(); }
	//if (IsTarget(s, "UNIX_ISDNModem")) { UNIX_ISDNModemFixture iSDNModem; iSDNModem.Run(); }
	//if (IsTarget(s, "UNIX_IsSpare")) { UNIX_IsSpareFixture isSpare; isSpare.Run(); }
	//if (IsTarget(s, "UNIX_JobDestinationJobs")) { UNIX_JobDestinationJobsFixture jobDestinationJobs; jobDestinationJobs.Run(); }
	//if (IsTarget(s, "UNIX_JobQueue")) { UNIX_JobQueueFixture jobQueue; jobQueue.Run(); }
	//if (IsTarget(s, "UNIX_JobSettingData")) { UNIX_JobSettingDataFixture jobSettingData; jobSettingData.Run(); }
	//if (IsTarget(s, "UNIX_KDCIssuesKerberosTicket")) { UNIX_KDCIssuesKerberosTicketFixture kDCIssuesKerberosTicket; kDCIssuesKerberosTicket.Run(); }
	//if (IsTarget(s, "UNIX_KerberosAuthentication")) { UNIX_KerberosAuthenticationFixture kerberosAuthentication; kerberosAuthentication.Run(); }
	//if (IsTarget(s, "UNIX_KerberosCredential")) { UNIX_KerberosCredentialFixture kerberosCredential; kerberosCredential.Run(); }
	//if (IsTarget(s, "UNIX_KerberosKeyDistributionCenter")) { UNIX_KerberosKeyDistributionCenterFixture kerberosKeyDistributionCenter; kerberosKeyDistributionCenter.Run(); }
	//if (IsTarget(s, "UNIX_KerberosTicket")) { UNIX_KerberosTicketFixture kerberosTicket; kerberosTicket.Run(); }
	//if (IsTarget(s, "UNIX_KeyBasedCredentialManagementService")) { UNIX_KeyBasedCredentialManagementServiceFixture keyBasedCredentialManagementService; keyBasedCredentialManagementService.Run(); }
	//if (IsTarget(s, "UNIX_Keyboard")) { UNIX_KeyboardFixture keyboard; keyboard.Run(); }
	//if (IsTarget(s, "UNIX_Keystore")) { UNIX_KeystoreFixture keystore; keystore.Run(); }
	//if (IsTarget(s, "UNIX_KVMRedirectionSAP")) { UNIX_KVMRedirectionSAPFixture kVMRedirectionSAP; kVMRedirectionSAP.Run(); }
	//if (IsTarget(s, "UNIX_LabelReader")) { UNIX_LabelReaderFixture labelReader; labelReader.Run(); }
	//if (IsTarget(s, "UNIX_LabelReaderStatData")) { UNIX_LabelReaderStatDataFixture labelReaderStatData; labelReaderStatData.Run(); }
	//if (IsTarget(s, "UNIX_LabelReaderStatInfo")) { UNIX_LabelReaderStatInfoFixture labelReaderStatInfo; labelReaderStatInfo.Run(); }
	//if (IsTarget(s, "UNIX_LANConnectivitySegment")) { UNIX_LANConnectivitySegmentFixture lANConnectivitySegment; lANConnectivitySegment.Run(); }
	//if (IsTarget(s, "UNIX_LANEndpoint")) { UNIX_LANEndpointFixture lANEndpoint; lANEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_LANSegment")) { UNIX_LANSegmentFixture lANSegment; lANSegment.Run(); }
	//if (IsTarget(s, "UNIX_LastAppliedSnapshot")) { UNIX_LastAppliedSnapshotFixture lastAppliedSnapshot; lastAppliedSnapshot.Run(); }
	//if (IsTarget(s, "UNIX_LaunchInContextCapabilities")) { UNIX_LaunchInContextCapabilitiesFixture launchInContextCapabilities; launchInContextCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_LaunchInContextSAP")) { UNIX_LaunchInContextSAPFixture launchInContextSAP; launchInContextSAP.Run(); }
	//if (IsTarget(s, "UNIX_LaunchInContextService")) { UNIX_LaunchInContextServiceFixture launchInContextService; launchInContextService.Run(); }
	//if (IsTarget(s, "UNIX_LibraryExchange")) { UNIX_LibraryExchangeFixture libraryExchange; libraryExchange.Run(); }
	//if (IsTarget(s, "UNIX_LibraryPackage")) { UNIX_LibraryPackageFixture libraryPackage; libraryPackage.Run(); }
	//if (IsTarget(s, "UNIX_LimitedAccessPort")) { UNIX_LimitedAccessPortFixture limitedAccessPort; limitedAccessPort.Run(); }
	//if (IsTarget(s, "UNIX_LinkHasConnector")) { UNIX_LinkHasConnectorFixture linkHasConnector; linkHasConnector.Run(); }
	//if (IsTarget(s, "UNIX_ListenerDestinationCIMXML")) { UNIX_ListenerDestinationCIMXMLFixture listenerDestinationCIMXML; listenerDestinationCIMXML.Run(); }
	//if (IsTarget(s, "UNIX_ListenerDestinationWSManagement")) { UNIX_ListenerDestinationWSManagementFixture listenerDestinationWSManagement; listenerDestinationWSManagement.Run(); }
	//if (IsTarget(s, "UNIX_ListsInRoutingPolicy")) { UNIX_ListsInRoutingPolicyFixture listsInRoutingPolicy; listsInRoutingPolicy.Run(); }
	//if (IsTarget(s, "UNIX_LLDPEthernetPort")) { UNIX_LLDPEthernetPortFixture lLDPEthernetPort; lLDPEthernetPort.Run(); }
	//if (IsTarget(s, "UNIX_LLDPEthernetPortStatistics")) { UNIX_LLDPEthernetPortStatisticsFixture lLDPEthernetPortStatistics; lLDPEthernetPortStatistics.Run(); }
	if (IsTarget(s, "UNIX_LocalFileSystem")) { UNIX_LocalFileSystemFixture localFileSystem; localFileSystem.Run(); }
	//if (IsTarget(s, "UNIX_LocalizationCapabilities")) { UNIX_LocalizationCapabilitiesFixture localizationCapabilities; localizationCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_LocallyManagedPublicKey")) { UNIX_LocallyManagedPublicKeyFixture locallyManagedPublicKey; locallyManagedPublicKey.Run(); }
	//if (IsTarget(s, "UNIX_Location")) { UNIX_LocationFixture location; location.Run(); }
	if (IsTarget(s, "UNIX_LogEntry")) { UNIX_LogEntryFixture logEntry; logEntry.Run(); }
	if (IsTarget(s, "UNIX_LogicalDisk")) { UNIX_LogicalDiskFixture logicalDisk; logicalDisk.Run(); }
	//if (IsTarget(s, "UNIX_LogicalDiskBasedOnPartition")) { UNIX_LogicalDiskBasedOnPartitionFixture logicalDiskBasedOnPartition; logicalDiskBasedOnPartition.Run(); }
	//if (IsTarget(s, "UNIX_LogicalDiskBasedOnVolume")) { UNIX_LogicalDiskBasedOnVolumeFixture logicalDiskBasedOnVolume; logicalDiskBasedOnVolume.Run(); }
	//if (IsTarget(s, "UNIX_LogicalDiskBasedOnVolumeSet")) { UNIX_LogicalDiskBasedOnVolumeSetFixture logicalDiskBasedOnVolumeSet; logicalDiskBasedOnVolumeSet.Run(); }
	//if (IsTarget(s, "UNIX_LogicalModule")) { UNIX_LogicalModuleFixture logicalModule; logicalModule.Run(); }
	//if (IsTarget(s, "UNIX_LogicalNetworkService")) { UNIX_LogicalNetworkServiceFixture logicalNetworkService; logicalNetworkService.Run(); }
	//if (IsTarget(s, "UNIX_LogicalPortGroup")) { UNIX_LogicalPortGroupFixture logicalPortGroup; logicalPortGroup.Run(); }
	//if (IsTarget(s, "UNIX_LogicalPortSettings")) { UNIX_LogicalPortSettingsFixture logicalPortSettings; logicalPortSettings.Run(); }
	//if (IsTarget(s, "UNIX_LogInDataFile")) { UNIX_LogInDataFileFixture logInDataFile; logInDataFile.Run(); }
	//if (IsTarget(s, "UNIX_LogInDeviceFile")) { UNIX_LogInDeviceFileFixture logInDeviceFile; logInDeviceFile.Run(); }
	//if (IsTarget(s, "UNIX_LogInStorage")) { UNIX_LogInStorageFixture logInStorage; logInStorage.Run(); }
	//if (IsTarget(s, "UNIX_LogManagesRecord")) { UNIX_LogManagesRecordFixture logManagesRecord; logManagesRecord.Run(); }
	//if (IsTarget(s, "UNIX_LogRecord")) { UNIX_LogRecordFixture logRecord; logRecord.Run(); }
	//if (IsTarget(s, "UNIX_Magazine")) { UNIX_MagazineFixture magazine; magazine.Run(); }
	//if (IsTarget(s, "UNIX_MagnetoOpticalDrive")) { UNIX_MagnetoOpticalDriveFixture magnetoOpticalDrive; magnetoOpticalDrive.Run(); }
	//if (IsTarget(s, "UNIX_ManagementController")) { UNIX_ManagementControllerFixture managementController; managementController.Run(); }
	//if (IsTarget(s, "UNIX_ManagesAccount")) { UNIX_ManagesAccountFixture managesAccount; managesAccount.Run(); }
	//if (IsTarget(s, "UNIX_ManagesAccountOnSystem")) { UNIX_ManagesAccountOnSystemFixture managesAccountOnSystem; managesAccountOnSystem.Run(); }
	//if (IsTarget(s, "UNIX_MediaAccessStatData")) { UNIX_MediaAccessStatDataFixture mediaAccessStatData; mediaAccessStatData.Run(); }
	//if (IsTarget(s, "UNIX_MediaAccessStatInfo")) { UNIX_MediaAccessStatInfoFixture mediaAccessStatInfo; mediaAccessStatInfo.Run(); }
	//if (IsTarget(s, "UNIX_MediaPhysicalStatData")) { UNIX_MediaPhysicalStatDataFixture mediaPhysicalStatData; mediaPhysicalStatData.Run(); }
	//if (IsTarget(s, "UNIX_MediaPhysicalStatInfo")) { UNIX_MediaPhysicalStatInfoFixture mediaPhysicalStatInfo; mediaPhysicalStatInfo.Run(); }
	//if (IsTarget(s, "UNIX_MediaPresent")) { UNIX_MediaPresentFixture mediaPresent; mediaPresent.Run(); }
	//if (IsTarget(s, "UNIX_MediaRedirectionCapabilities")) { UNIX_MediaRedirectionCapabilitiesFixture mediaRedirectionCapabilities; mediaRedirectionCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_MediaRedirectionSAP")) { UNIX_MediaRedirectionSAPFixture mediaRedirectionSAP; mediaRedirectionSAP.Run(); }
	//if (IsTarget(s, "UNIX_MemberPrincipal")) { UNIX_MemberPrincipalFixture memberPrincipal; memberPrincipal.Run(); }
	//if (IsTarget(s, "UNIX_MemoryCapacity")) { UNIX_MemoryCapacityFixture memoryCapacity; memoryCapacity.Run(); }
	//if (IsTarget(s, "UNIX_MemoryCheck")) { UNIX_MemoryCheckFixture memoryCheck; memoryCheck.Run(); }
	//if (IsTarget(s, "UNIX_MemoryError")) { UNIX_MemoryErrorFixture memoryError; memoryError.Run(); }
	//if (IsTarget(s, "UNIX_MemoryOnCard")) { UNIX_MemoryOnCardFixture memoryOnCard; memoryOnCard.Run(); }
	//if (IsTarget(s, "UNIX_MemoryResource")) { UNIX_MemoryResourceFixture memoryResource; memoryResource.Run(); }
	//if (IsTarget(s, "UNIX_MemoryWithMedia")) { UNIX_MemoryWithMediaFixture memoryWithMedia; memoryWithMedia.Run(); }
	if (IsTarget(s, "UNIX_MessageLog")) { UNIX_MessageLogFixture messageLog; messageLog.Run(); }
	//if (IsTarget(s, "UNIX_MethodAction")) { UNIX_MethodActionFixture methodAction; methodAction.Run(); }
	//if (IsTarget(s, "UNIX_MethodParameters")) { UNIX_MethodParametersFixture methodParameters; methodParameters.Run(); }
	//if (IsTarget(s, "UNIX_MethodResult")) { UNIX_MethodResultFixture methodResult; methodResult.Run(); }
	//if (IsTarget(s, "UNIX_MetricDefForME")) { UNIX_MetricDefForMEFixture metricDefForME; metricDefForME.Run(); }
	//if (IsTarget(s, "UNIX_MetricDefinition")) { UNIX_MetricDefinitionFixture metricDefinition; metricDefinition.Run(); }
	//if (IsTarget(s, "UNIX_MetricForME")) { UNIX_MetricForMEFixture metricForME; metricForME.Run(); }
	//if (IsTarget(s, "UNIX_MetricInstance")) { UNIX_MetricInstanceFixture metricInstance; metricInstance.Run(); }
	//if (IsTarget(s, "UNIX_MetricService")) { UNIX_MetricServiceFixture metricService; metricService.Run(); }
	//if (IsTarget(s, "UNIX_MetricServiceCapabilities")) { UNIX_MetricServiceCapabilitiesFixture metricServiceCapabilities; metricServiceCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_ModifySettingAction")) { UNIX_ModifySettingActionFixture modifySettingAction; modifySettingAction.Run(); }
	//if (IsTarget(s, "UNIX_ModulePort")) { UNIX_ModulePortFixture modulePort; modulePort.Run(); }
	//if (IsTarget(s, "UNIX_MonitorResolution")) { UNIX_MonitorResolutionFixture monitorResolution; monitorResolution.Run(); }
	//if (IsTarget(s, "UNIX_MoreGroupInfo")) { UNIX_MoreGroupInfoFixture moreGroupInfo; moreGroupInfo.Run(); }
	//if (IsTarget(s, "UNIX_MoreOrganizationInfo")) { UNIX_MoreOrganizationInfoFixture moreOrganizationInfo; moreOrganizationInfo.Run(); }
	//if (IsTarget(s, "UNIX_MoreOrgUnitInfo")) { UNIX_MoreOrgUnitInfoFixture moreOrgUnitInfo; moreOrgUnitInfo.Run(); }
	//if (IsTarget(s, "UNIX_MorePersonInfo")) { UNIX_MorePersonInfoFixture morePersonInfo; morePersonInfo.Run(); }
	//if (IsTarget(s, "UNIX_MoreRoleInfo")) { UNIX_MoreRoleInfoFixture moreRoleInfo; moreRoleInfo.Run(); }
	if (IsTarget(s, "UNIX_Mount")) { UNIX_MountFixture mount; mount.Run(); }
	//if (IsTarget(s, "UNIX_MultiStateSensor")) { UNIX_MultiStateSensorFixture multiStateSensor; multiStateSensor.Run(); }
	//if (IsTarget(s, "UNIX_NamedAddressCollection")) { UNIX_NamedAddressCollectionFixture namedAddressCollection; namedAddressCollection.Run(); }
	//if (IsTarget(s, "UNIX_NamedCredential")) { UNIX_NamedCredentialFixture namedCredential; namedCredential.Run(); }
	//if (IsTarget(s, "UNIX_NamedSharedIKESecret")) { UNIX_NamedSharedIKESecretFixture namedSharedIKESecret; namedSharedIKESecret.Run(); }
	//if (IsTarget(s, "UNIX_Namespace")) { UNIX_NamespaceFixture namespace; namespace.Run(); }
	//if (IsTarget(s, "UNIX_NamespaceInManager")) { UNIX_NamespaceInManagerFixture namespaceInManager; namespaceInManager.Run(); }
	//if (IsTarget(s, "UNIX_Network")) { UNIX_NetworkFixture network; network.Run(); }
	//if (IsTarget(s, "UNIX_NetworkAdapterRedundancyComponent")) { UNIX_NetworkAdapterRedundancyComponentFixture networkAdapterRedundancyComponent; networkAdapterRedundancyComponent.Run(); }
	//if (IsTarget(s, "UNIX_NetworkingIDAuthentication")) { UNIX_NetworkingIDAuthenticationFixture networkingIDAuthentication; networkingIDAuthentication.Run(); }
	//if (IsTarget(s, "UNIX_NetworkPacketAction")) { UNIX_NetworkPacketActionFixture networkPacketAction; networkPacketAction.Run(); }
	//if (IsTarget(s, "UNIX_NetworkPipeComposition")) { UNIX_NetworkPipeCompositionFixture networkPipeComposition; networkPipeComposition.Run(); }
	//if (IsTarget(s, "UNIX_NetworkPortCapabilities")) { UNIX_NetworkPortCapabilitiesFixture networkPortCapabilities; networkPortCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_NetworkPortConfigurationService")) { UNIX_NetworkPortConfigurationServiceFixture networkPortConfigurationService; networkPortConfigurationService.Run(); }
	//if (IsTarget(s, "UNIX_NetworkServicesInAdminDomain")) { UNIX_NetworkServicesInAdminDomainFixture networkServicesInAdminDomain; networkServicesInAdminDomain.Run(); }
	//if (IsTarget(s, "UNIX_NetworksInAdminDomain")) { UNIX_NetworksInAdminDomainFixture networksInAdminDomain; networksInAdminDomain.Run(); }
	//if (IsTarget(s, "UNIX_NetworkVirtualAdapter")) { UNIX_NetworkVirtualAdapterFixture networkVirtualAdapter; networkVirtualAdapter.Run(); }
	//if (IsTarget(s, "UNIX_NetworkVLAN")) { UNIX_NetworkVLANFixture networkVLAN; networkVLAN.Run(); }
	//if (IsTarget(s, "UNIX_NextHopIPRoute")) { UNIX_NextHopIPRouteFixture nextHopIPRoute; nextHopIPRoute.Run(); }
	//if (IsTarget(s, "UNIX_NextHopRoute")) { UNIX_NextHopRouteFixture nextHopRoute; nextHopRoute.Run(); }
	//if (IsTarget(s, "UNIX_NextService")) { UNIX_NextServiceFixture nextService; nextService.Run(); }
	//if (IsTarget(s, "UNIX_NextServiceAfterMeter")) { UNIX_NextServiceAfterMeterFixture nextServiceAfterMeter; nextServiceAfterMeter.Run(); }
	if (IsTarget(s, "UNIX_NFS")) { UNIX_NFSFixture nFS; nFS.Run(); }
	//if (IsTarget(s, "UNIX_NonVolatileStorage")) { UNIX_NonVolatileStorageFixture nonVolatileStorage; nonVolatileStorage.Run(); }
	//if (IsTarget(s, "UNIX_NonWorkConservingSchedulingService")) { UNIX_NonWorkConservingSchedulingServiceFixture nonWorkConservingSchedulingService; nonWorkConservingSchedulingService.Run(); }
	//if (IsTarget(s, "UNIX_Notary")) { UNIX_NotaryFixture notary; notary.Run(); }
	//if (IsTarget(s, "UNIX_NotaryVerifiesBiometric")) { UNIX_NotaryVerifiesBiometricFixture notaryVerifiesBiometric; notaryVerifiesBiometric.Run(); }
	//if (IsTarget(s, "UNIX_ObjectManager")) { UNIX_ObjectManagerFixture objectManager; objectManager.Run(); }
	//if (IsTarget(s, "UNIX_ObjectManagerAdapter")) { UNIX_ObjectManagerAdapterFixture objectManagerAdapter; objectManagerAdapter.Run(); }
	//if (IsTarget(s, "UNIX_ObjectManagerCommunicationMechanism")) { UNIX_ObjectManagerCommunicationMechanismFixture objectManagerCommunicationMechanism; objectManagerCommunicationMechanism.Run(); }
	//if (IsTarget(s, "UNIX_OOBAlertService")) { UNIX_OOBAlertServiceFixture oOBAlertService; oOBAlertService.Run(); }
	//if (IsTarget(s, "UNIX_OOBAlertServiceOnModem")) { UNIX_OOBAlertServiceOnModemFixture oOBAlertServiceOnModem; oOBAlertServiceOnModem.Run(); }
	//if (IsTarget(s, "UNIX_OOBAlertServiceOnNetworkAdapter")) { UNIX_OOBAlertServiceOnNetworkAdapterFixture oOBAlertServiceOnNetworkAdapter; oOBAlertServiceOnNetworkAdapter.Run(); }
	//if (IsTarget(s, "UNIX_OOBAlertServiceOnNetworkPort")) { UNIX_OOBAlertServiceOnNetworkPortFixture oOBAlertServiceOnNetworkPort; oOBAlertServiceOnNetworkPort.Run(); }
	//if (IsTarget(s, "UNIX_OpaqueManagementData")) { UNIX_OpaqueManagementDataFixture opaqueManagementData; opaqueManagementData.Run(); }
	//if (IsTarget(s, "UNIX_OpaqueManagementDataCapabilities")) { UNIX_OpaqueManagementDataCapabilitiesFixture opaqueManagementDataCapabilities; opaqueManagementDataCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_OpaqueManagementDataService")) { UNIX_OpaqueManagementDataServiceFixture opaqueManagementDataService; opaqueManagementDataService.Run(); }
	if (IsTarget(s, "UNIX_OperatingSystem")) { UNIX_OperatingSystemFixture operatingSystem; operatingSystem.Run(); }
	//if (IsTarget(s, "UNIX_OperatingSystemCapabilities")) { UNIX_OperatingSystemCapabilitiesFixture operatingSystemCapabilities; operatingSystemCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_OperatingSystemSoftwareFeature")) { UNIX_OperatingSystemSoftwareFeatureFixture operatingSystemSoftwareFeature; operatingSystemSoftwareFeature.Run(); }
	//if (IsTarget(s, "UNIX_OperationLog")) { UNIX_OperationLogFixture operationLog; operationLog.Run(); }
	//if (IsTarget(s, "UNIX_OrderedComponent")) { UNIX_OrderedComponentFixture orderedComponent; orderedComponent.Run(); }
	//if (IsTarget(s, "UNIX_OrderedDependency")) { UNIX_OrderedDependencyFixture orderedDependency; orderedDependency.Run(); }
	//if (IsTarget(s, "UNIX_OrderedMemberOfCollection")) { UNIX_OrderedMemberOfCollectionFixture orderedMemberOfCollection; orderedMemberOfCollection.Run(); }
	//if (IsTarget(s, "UNIX_Organization")) { UNIX_OrganizationFixture organization; organization.Run(); }
	//if (IsTarget(s, "UNIX_OrgStructure")) { UNIX_OrgStructureFixture orgStructure; orgStructure.Run(); }
	//if (IsTarget(s, "UNIX_OrgUnit")) { UNIX_OrgUnitFixture orgUnit; orgUnit.Run(); }
	//if (IsTarget(s, "UNIX_OSPFArea")) { UNIX_OSPFAreaFixture oSPFArea; oSPFArea.Run(); }
	//if (IsTarget(s, "UNIX_OSPFAreaConfiguration")) { UNIX_OSPFAreaConfigurationFixture oSPFAreaConfiguration; oSPFAreaConfiguration.Run(); }
	//if (IsTarget(s, "UNIX_OSPFLink")) { UNIX_OSPFLinkFixture oSPFLink; oSPFLink.Run(); }
	//if (IsTarget(s, "UNIX_OSPFProtocolEndpoint")) { UNIX_OSPFProtocolEndpointFixture oSPFProtocolEndpoint; oSPFProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_OSPFService")) { UNIX_OSPFServiceFixture oSPFService; oSPFService.Run(); }
	//if (IsTarget(s, "UNIX_OSPFServiceCapabilities")) { UNIX_OSPFServiceCapabilitiesFixture oSPFServiceCapabilities; oSPFServiceCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_OSPFServiceConfiguration")) { UNIX_OSPFServiceConfigurationFixture oSPFServiceConfiguration; oSPFServiceConfiguration.Run(); }
	//if (IsTarget(s, "UNIX_OSPFVirtualInterface")) { UNIX_OSPFVirtualInterfaceFixture oSPFVirtualInterface; oSPFVirtualInterface.Run(); }
	if (IsTarget(s, "UNIX_OSProcess")) { UNIX_OSProcessFixture oSProcess; oSProcess.Run(); }
	//if (IsTarget(s, "UNIX_OSVersionCheck")) { UNIX_OSVersionCheckFixture oSVersionCheck; oSVersionCheck.Run(); }
	//if (IsTarget(s, "UNIX_OtherGroupInformation")) { UNIX_OtherGroupInformationFixture otherGroupInformation; otherGroupInformation.Run(); }
	//if (IsTarget(s, "UNIX_OtherOrganizationInformation")) { UNIX_OtherOrganizationInformationFixture otherOrganizationInformation; otherOrganizationInformation.Run(); }
	//if (IsTarget(s, "UNIX_OtherOrgUnitInformation")) { UNIX_OtherOrgUnitInformationFixture otherOrgUnitInformation; otherOrgUnitInformation.Run(); }
	//if (IsTarget(s, "UNIX_OtherPersonInformation")) { UNIX_OtherPersonInformationFixture otherPersonInformation; otherPersonInformation.Run(); }
	//if (IsTarget(s, "UNIX_OtherRoleInformation")) { UNIX_OtherRoleInformationFixture otherRoleInformation; otherRoleInformation.Run(); }
	//if (IsTarget(s, "UNIX_OutboundVLAN")) { UNIX_OutboundVLANFixture outboundVLAN; outboundVLAN.Run(); }
	//if (IsTarget(s, "UNIX_OwningCollectionElement")) { UNIX_OwningCollectionElementFixture owningCollectionElement; owningCollectionElement.Run(); }
	//if (IsTarget(s, "UNIX_OwningJobElement")) { UNIX_OwningJobElementFixture owningJobElement; owningJobElement.Run(); }
	//if (IsTarget(s, "UNIX_OwningPrintQueue")) { UNIX_OwningPrintQueueFixture owningPrintQueue; owningPrintQueue.Run(); }
	//if (IsTarget(s, "UNIX_PackageAlarm")) { UNIX_PackageAlarmFixture packageAlarm; packageAlarm.Run(); }
	//if (IsTarget(s, "UNIX_PackageCooling")) { UNIX_PackageCoolingFixture packageCooling; packageCooling.Run(); }
	//if (IsTarget(s, "UNIX_PackagedComponent")) { UNIX_PackagedComponentFixture packagedComponent; packagedComponent.Run(); }
	//if (IsTarget(s, "UNIX_PackageInChassis")) { UNIX_PackageInChassisFixture packageInChassis; packageInChassis.Run(); }
	//if (IsTarget(s, "UNIX_PackageInConnector")) { UNIX_PackageInConnectorFixture packageInConnector; packageInConnector.Run(); }
	//if (IsTarget(s, "UNIX_PackageInSlot")) { UNIX_PackageInSlotFixture packageInSlot; packageInSlot.Run(); }
	//if (IsTarget(s, "UNIX_PackageLocation")) { UNIX_PackageLocationFixture packageLocation; packageLocation.Run(); }
	//if (IsTarget(s, "UNIX_PackageTempSensor")) { UNIX_PackageTempSensorFixture packageTempSensor; packageTempSensor.Run(); }
	//if (IsTarget(s, "UNIX_PacketConditionInSARule")) { UNIX_PacketConditionInSARuleFixture packetConditionInSARule; packetConditionInSARule.Run(); }
	//if (IsTarget(s, "UNIX_PacketFilterCondition")) { UNIX_PacketFilterConditionFixture packetFilterCondition; packetFilterCondition.Run(); }
	//if (IsTarget(s, "UNIX_PacketSchedulingService")) { UNIX_PacketSchedulingServiceFixture packetSchedulingService; packetSchedulingService.Run(); }
	//if (IsTarget(s, "UNIX_ParallelController")) { UNIX_ParallelControllerFixture parallelController; parallelController.Run(); }
	//if (IsTarget(s, "UNIX_ParametersForMethod")) { UNIX_ParametersForMethodFixture parametersForMethod; parametersForMethod.Run(); }
	//if (IsTarget(s, "UNIX_ParameterValueSources")) { UNIX_ParameterValueSourcesFixture parameterValueSources; parameterValueSources.Run(); }
	//if (IsTarget(s, "UNIX_ParticipatesInSet")) { UNIX_ParticipatesInSetFixture participatesInSet; participatesInSet.Run(); }
	//if (IsTarget(s, "UNIX_ParticipatingCS")) { UNIX_ParticipatingCSFixture participatingCS; participatingCS.Run(); }
	//if (IsTarget(s, "UNIX_PassThroughModule")) { UNIX_PassThroughModuleFixture passThroughModule; passThroughModule.Run(); }
	//if (IsTarget(s, "UNIX_PCIBridge")) { UNIX_PCIBridgeFixture pCIBridge; pCIBridge.Run(); }
	//if (IsTarget(s, "UNIX_PCIeSwitch")) { UNIX_PCIeSwitchFixture pCIeSwitch; pCIeSwitch.Run(); }
	//if (IsTarget(s, "UNIX_PCIPort")) { UNIX_PCIPortFixture pCIPort; pCIPort.Run(); }
	//if (IsTarget(s, "UNIX_PCIPortGroup")) { UNIX_PCIPortGroupFixture pCIPortGroup; pCIPortGroup.Run(); }
	//if (IsTarget(s, "UNIX_PCMCIAController")) { UNIX_PCMCIAControllerFixture pCMCIAController; pCMCIAController.Run(); }
	//if (IsTarget(s, "UNIX_PCVideoController")) { UNIX_PCVideoControllerFixture pCVideoController; pCVideoController.Run(); }
	//if (IsTarget(s, "UNIX_PeerGatewayForPreconfiguredTunnel")) { UNIX_PeerGatewayForPreconfiguredTunnelFixture peerGatewayForPreconfiguredTunnel; peerGatewayForPreconfiguredTunnel.Run(); }
	//if (IsTarget(s, "UNIX_PeerGatewayForTunnel")) { UNIX_PeerGatewayForTunnelFixture peerGatewayForTunnel; peerGatewayForTunnel.Run(); }
	//if (IsTarget(s, "UNIX_PeerIDPayloadFilterEntry")) { UNIX_PeerIDPayloadFilterEntryFixture peerIDPayloadFilterEntry; peerIDPayloadFilterEntry.Run(); }
	//if (IsTarget(s, "UNIX_PeerOfSAEndpoint")) { UNIX_PeerOfSAEndpointFixture peerOfSAEndpoint; peerOfSAEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_Person")) { UNIX_PersonFixture person; person.Run(); }
	//if (IsTarget(s, "UNIX_PExtentRedundancyComponent")) { UNIX_PExtentRedundancyComponentFixture pExtentRedundancyComponent; pExtentRedundancyComponent.Run(); }
	//if (IsTarget(s, "UNIX_Phase1SAUsedForPhase2")) { UNIX_Phase1SAUsedForPhase2Fixture phase1SAUsedForPhase2; phase1SAUsedForPhase2.Run(); }
	//if (IsTarget(s, "UNIX_PhysicalAssetCapabilities")) { UNIX_PhysicalAssetCapabilitiesFixture physicalAssetCapabilities; physicalAssetCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_PhysicalComputerSystemView")) { UNIX_PhysicalComputerSystemViewFixture physicalComputerSystemView; physicalComputerSystemView.Run(); }
	//if (IsTarget(s, "UNIX_PhysicalConnector")) { UNIX_PhysicalConnectorFixture physicalConnector; physicalConnector.Run(); }
	//if (IsTarget(s, "UNIX_PhysicalCredentialAuthentication")) { UNIX_PhysicalCredentialAuthenticationFixture physicalCredentialAuthentication; physicalCredentialAuthentication.Run(); }
	//if (IsTarget(s, "UNIX_PhysicalExtent")) { UNIX_PhysicalExtentFixture physicalExtent; physicalExtent.Run(); }
	//if (IsTarget(s, "UNIX_PhysicalLink")) { UNIX_PhysicalLinkFixture physicalLink; physicalLink.Run(); }
	//if (IsTarget(s, "UNIX_PhysicalMedia")) { UNIX_PhysicalMediaFixture physicalMedia; physicalMedia.Run(); }
	//if (IsTarget(s, "UNIX_PhysicalMediaInLocation")) { UNIX_PhysicalMediaInLocationFixture physicalMediaInLocation; physicalMediaInLocation.Run(); }
	if (IsTarget(s, "UNIX_PhysicalMemory")) { UNIX_PhysicalMemoryFixture physicalMemory; physicalMemory.Run(); }
	//if (IsTarget(s, "UNIX_PhysicalStatisticalInformation")) { UNIX_PhysicalStatisticalInformationFixture physicalStatisticalInformation; physicalStatisticalInformation.Run(); }
	//if (IsTarget(s, "UNIX_PhysicalStatistics")) { UNIX_PhysicalStatisticsFixture physicalStatistics; physicalStatistics.Run(); }
	//if (IsTarget(s, "UNIX_PhysicalTape")) { UNIX_PhysicalTapeFixture physicalTape; physicalTape.Run(); }
	//if (IsTarget(s, "UNIX_PickerElement")) { UNIX_PickerElementFixture pickerElement; pickerElement.Run(); }
	//if (IsTarget(s, "UNIX_PickerForChanger")) { UNIX_PickerForChangerFixture pickerForChanger; pickerForChanger.Run(); }
	//if (IsTarget(s, "UNIX_PickerLabelReader")) { UNIX_PickerLabelReaderFixture pickerLabelReader; pickerLabelReader.Run(); }
	//if (IsTarget(s, "UNIX_PickerStatData")) { UNIX_PickerStatDataFixture pickerStatData; pickerStatData.Run(); }
	//if (IsTarget(s, "UNIX_PickerStatInfo")) { UNIX_PickerStatInfoFixture pickerStatInfo; pickerStatInfo.Run(); }
	//if (IsTarget(s, "UNIX_PlatformWatchdogService")) { UNIX_PlatformWatchdogServiceFixture platformWatchdogService; platformWatchdogService.Run(); }
	//if (IsTarget(s, "UNIX_PlatformWatchdogServiceCapabilities")) { UNIX_PlatformWatchdogServiceCapabilitiesFixture platformWatchdogServiceCapabilities; platformWatchdogServiceCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_PointingDevice")) { UNIX_PointingDeviceFixture pointingDevice; pointingDevice.Run(); }
	//if (IsTarget(s, "UNIX_PolicyActionInPolicyAction")) { UNIX_PolicyActionInPolicyActionFixture policyActionInPolicyAction; policyActionInPolicyAction.Run(); }
	//if (IsTarget(s, "UNIX_PolicyActionInPolicyRepository")) { UNIX_PolicyActionInPolicyRepositoryFixture policyActionInPolicyRepository; policyActionInPolicyRepository.Run(); }
	//if (IsTarget(s, "UNIX_PolicyActionInPolicyRule")) { UNIX_PolicyActionInPolicyRuleFixture policyActionInPolicyRule; policyActionInPolicyRule.Run(); }
	//if (IsTarget(s, "UNIX_PolicyConditionInPolicyCondition")) { UNIX_PolicyConditionInPolicyConditionFixture policyConditionInPolicyCondition; policyConditionInPolicyCondition.Run(); }
	//if (IsTarget(s, "UNIX_PolicyConditionInPolicyRepository")) { UNIX_PolicyConditionInPolicyRepositoryFixture policyConditionInPolicyRepository; policyConditionInPolicyRepository.Run(); }
	//if (IsTarget(s, "UNIX_PolicyConditionInPolicyRule")) { UNIX_PolicyConditionInPolicyRuleFixture policyConditionInPolicyRule; policyConditionInPolicyRule.Run(); }
	//if (IsTarget(s, "UNIX_PolicyContainerInPolicyContainer")) { UNIX_PolicyContainerInPolicyContainerFixture policyContainerInPolicyContainer; policyContainerInPolicyContainer.Run(); }
	//if (IsTarget(s, "UNIX_PolicyGroup")) { UNIX_PolicyGroupFixture policyGroup; policyGroup.Run(); }
	//if (IsTarget(s, "UNIX_PolicyGroupInPolicyGroup")) { UNIX_PolicyGroupInPolicyGroupFixture policyGroupInPolicyGroup; policyGroupInPolicyGroup.Run(); }
	//if (IsTarget(s, "UNIX_PolicyGroupInSystem")) { UNIX_PolicyGroupInSystemFixture policyGroupInSystem; policyGroupInSystem.Run(); }
	//if (IsTarget(s, "UNIX_PolicyRepository")) { UNIX_PolicyRepositoryFixture policyRepository; policyRepository.Run(); }
	//if (IsTarget(s, "UNIX_PolicyRepositoryInPolicyRepository")) { UNIX_PolicyRepositoryInPolicyRepositoryFixture policyRepositoryInPolicyRepository; policyRepositoryInPolicyRepository.Run(); }
	//if (IsTarget(s, "UNIX_PolicyRoleCollection")) { UNIX_PolicyRoleCollectionFixture policyRoleCollection; policyRoleCollection.Run(); }
	//if (IsTarget(s, "UNIX_PolicyRoleCollectionInSystem")) { UNIX_PolicyRoleCollectionInSystemFixture policyRoleCollectionInSystem; policyRoleCollectionInSystem.Run(); }
	//if (IsTarget(s, "UNIX_PolicyRuleInPolicyGroup")) { UNIX_PolicyRuleInPolicyGroupFixture policyRuleInPolicyGroup; policyRuleInPolicyGroup.Run(); }
	//if (IsTarget(s, "UNIX_PolicyRuleInSystem")) { UNIX_PolicyRuleInSystemFixture policyRuleInSystem; policyRuleInSystem.Run(); }
	//if (IsTarget(s, "UNIX_PolicyRuleValidityPeriod")) { UNIX_PolicyRuleValidityPeriodFixture policyRuleValidityPeriod; policyRuleValidityPeriod.Run(); }
	//if (IsTarget(s, "UNIX_PolicySetAppliesToElement")) { UNIX_PolicySetAppliesToElementFixture policySetAppliesToElement; policySetAppliesToElement.Run(); }
	//if (IsTarget(s, "UNIX_PolicySetComponent")) { UNIX_PolicySetComponentFixture policySetComponent; policySetComponent.Run(); }
	//if (IsTarget(s, "UNIX_PolicySetInRoleCollection")) { UNIX_PolicySetInRoleCollectionFixture policySetInRoleCollection; policySetInRoleCollection.Run(); }
	//if (IsTarget(s, "UNIX_PolicySetValidityPeriod")) { UNIX_PolicySetValidityPeriodFixture policySetValidityPeriod; policySetValidityPeriod.Run(); }
	//if (IsTarget(s, "UNIX_PolicyTimePeriodCondition")) { UNIX_PolicyTimePeriodConditionFixture policyTimePeriodCondition; policyTimePeriodCondition.Run(); }
	//if (IsTarget(s, "UNIX_PortActiveConnection")) { UNIX_PortActiveConnectionFixture portActiveConnection; portActiveConnection.Run(); }
	//if (IsTarget(s, "UNIX_PortController")) { UNIX_PortControllerFixture portController; portController.Run(); }
	//if (IsTarget(s, "UNIX_PortImplementsEndpoint")) { UNIX_PortImplementsEndpointFixture portImplementsEndpoint; portImplementsEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_PortResource")) { UNIX_PortResourceFixture portResource; portResource.Run(); }
	//if (IsTarget(s, "UNIX_POTSModem")) { UNIX_POTSModemFixture pOTSModem; pOTSModem.Run(); }
	//if (IsTarget(s, "UNIX_PowerAllocationSettingData")) { UNIX_PowerAllocationSettingDataFixture powerAllocationSettingData; powerAllocationSettingData.Run(); }
	//if (IsTarget(s, "UNIX_PowerManagementCapabilities")) { UNIX_PowerManagementCapabilitiesFixture powerManagementCapabilities; powerManagementCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_PowerManagementService")) { UNIX_PowerManagementServiceFixture powerManagementService; powerManagementService.Run(); }
	//if (IsTarget(s, "UNIX_PowerSource")) { UNIX_PowerSourceFixture powerSource; powerSource.Run(); }
	//if (IsTarget(s, "UNIX_PowerSupply")) { UNIX_PowerSupplyFixture powerSupply; powerSupply.Run(); }
	//if (IsTarget(s, "UNIX_PowerUtilizationManagementCapabilities")) { UNIX_PowerUtilizationManagementCapabilitiesFixture powerUtilizationManagementCapabilities; powerUtilizationManagementCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_PowerUtilizationManagementService")) { UNIX_PowerUtilizationManagementServiceFixture powerUtilizationManagementService; powerUtilizationManagementService.Run(); }
	//if (IsTarget(s, "UNIX_PreambleFilter")) { UNIX_PreambleFilterFixture preambleFilter; preambleFilter.Run(); }
	//if (IsTarget(s, "UNIX_PreambleMarkerService")) { UNIX_PreambleMarkerServiceFixture preambleMarkerService; preambleMarkerService.Run(); }
	//if (IsTarget(s, "UNIX_PrecedenceService")) { UNIX_PrecedenceServiceFixture precedenceService; precedenceService.Run(); }
	//if (IsTarget(s, "UNIX_PreconfiguredTransportAction")) { UNIX_PreconfiguredTransportActionFixture preconfiguredTransportAction; preconfiguredTransportAction.Run(); }
	//if (IsTarget(s, "UNIX_PreconfiguredTunnelAction")) { UNIX_PreconfiguredTunnelActionFixture preconfiguredTunnelAction; preconfiguredTunnelAction.Run(); }
	//if (IsTarget(s, "UNIX_Printer")) { UNIX_PrinterFixture printer; printer.Run(); }
	//if (IsTarget(s, "UNIX_PrinterServicingJob")) { UNIX_PrinterServicingJobFixture printerServicingJob; printerServicingJob.Run(); }
	//if (IsTarget(s, "UNIX_PrinterServicingQueue")) { UNIX_PrinterServicingQueueFixture printerServicingQueue; printerServicingQueue.Run(); }
	//if (IsTarget(s, "UNIX_PrintInputTray")) { UNIX_PrintInputTrayFixture printInputTray; printInputTray.Run(); }
	//if (IsTarget(s, "UNIX_PrintInterpreter")) { UNIX_PrintInterpreterFixture printInterpreter; printInterpreter.Run(); }
	//if (IsTarget(s, "UNIX_PrintJob")) { UNIX_PrintJobFixture printJob; printJob.Run(); }
	//if (IsTarget(s, "UNIX_PrintJobFile")) { UNIX_PrintJobFileFixture printJobFile; printJobFile.Run(); }
	//if (IsTarget(s, "UNIX_PrintMarker")) { UNIX_PrintMarkerFixture printMarker; printMarker.Run(); }
	//if (IsTarget(s, "UNIX_PrintQueue")) { UNIX_PrintQueueFixture printQueue; printQueue.Run(); }
	//if (IsTarget(s, "UNIX_PrintSAP")) { UNIX_PrintSAPFixture printSAP; printSAP.Run(); }
	//if (IsTarget(s, "UNIX_PrintService")) { UNIX_PrintServiceFixture printService; printService.Run(); }
	//if (IsTarget(s, "UNIX_PrintSupply")) { UNIX_PrintSupplyFixture printSupply; printSupply.Run(); }
	//if (IsTarget(s, "UNIX_Priority8021QMarkerService")) { UNIX_Priority8021QMarkerServiceFixture priority8021QMarkerService; priority8021QMarkerService.Run(); }
	//if (IsTarget(s, "UNIX_PrioritySchedulingElement")) { UNIX_PrioritySchedulingElementFixture prioritySchedulingElement; prioritySchedulingElement.Run(); }
	//if (IsTarget(s, "UNIX_Privilege")) { UNIX_PrivilegeFixture privilege; privilege.Run(); }
	//if (IsTarget(s, "UNIX_PrivilegeManagementCapabilities")) { UNIX_PrivilegeManagementCapabilitiesFixture privilegeManagementCapabilities; privilegeManagementCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_PrivilegeManagementService")) { UNIX_PrivilegeManagementServiceFixture privilegeManagementService; privilegeManagementService.Run(); }
	if (IsTarget(s, "UNIX_ProcessExecutable")) { UNIX_ProcessExecutableFixture processExecutable; processExecutable.Run(); }
	//if (IsTarget(s, "UNIX_ProcessOfJob")) { UNIX_ProcessOfJobFixture processOfJob; processOfJob.Run(); }
	if (IsTarget(s, "UNIX_Processor")) { UNIX_ProcessorFixture processor; processor.Run(); }
	//if (IsTarget(s, "UNIX_ProcessorAllocationSettingData")) { UNIX_ProcessorAllocationSettingDataFixture processorAllocationSettingData; processorAllocationSettingData.Run(); }
	//if (IsTarget(s, "UNIX_ProcessorCapabilities")) { UNIX_ProcessorCapabilitiesFixture processorCapabilities; processorCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_ProcessorCore")) { UNIX_ProcessorCoreFixture processorCore; processorCore.Run(); }
	//if (IsTarget(s, "UNIX_ProcessThread")) { UNIX_ProcessThreadFixture processThread; processThread.Run(); }
	//if (IsTarget(s, "UNIX_Product")) { UNIX_ProductFixture product; product.Run(); }
	//if (IsTarget(s, "UNIX_ProductComponent")) { UNIX_ProductComponentFixture productComponent; productComponent.Run(); }
	//if (IsTarget(s, "UNIX_ProductElementComponent")) { UNIX_ProductElementComponentFixture productElementComponent; productElementComponent.Run(); }
	//if (IsTarget(s, "UNIX_ProductFRU")) { UNIX_ProductFRUFixture productFRU; productFRU.Run(); }
	//if (IsTarget(s, "UNIX_ProductParentChild")) { UNIX_ProductParentChildFixture productParentChild; productParentChild.Run(); }
	//if (IsTarget(s, "UNIX_ProductPhysicalComponent")) { UNIX_ProductPhysicalComponentFixture productPhysicalComponent; productPhysicalComponent.Run(); }
	//if (IsTarget(s, "UNIX_ProductPhysicalElements")) { UNIX_ProductPhysicalElementsFixture productPhysicalElements; productPhysicalElements.Run(); }
	//if (IsTarget(s, "UNIX_ProductProductDependency")) { UNIX_ProductProductDependencyFixture productProductDependency; productProductDependency.Run(); }
	//if (IsTarget(s, "UNIX_ProductServiceComponent")) { UNIX_ProductServiceComponentFixture productServiceComponent; productServiceComponent.Run(); }
	//if (IsTarget(s, "UNIX_ProductSoftwareComponent")) { UNIX_ProductSoftwareComponentFixture productSoftwareComponent; productSoftwareComponent.Run(); }
	//if (IsTarget(s, "UNIX_ProductSoftwareFeatures")) { UNIX_ProductSoftwareFeaturesFixture productSoftwareFeatures; productSoftwareFeatures.Run(); }
	//if (IsTarget(s, "UNIX_ProductSupport")) { UNIX_ProductSupportFixture productSupport; productSupport.Run(); }
	//if (IsTarget(s, "UNIX_Profile")) { UNIX_ProfileFixture profile; profile.Run(); }
	//if (IsTarget(s, "UNIX_ProtectedExtentBasedOn")) { UNIX_ProtectedExtentBasedOnFixture protectedExtentBasedOn; protectedExtentBasedOn.Run(); }
	//if (IsTarget(s, "UNIX_ProtectedSpaceExtent")) { UNIX_ProtectedSpaceExtentFixture protectedSpaceExtent; protectedSpaceExtent.Run(); }
	//if (IsTarget(s, "UNIX_ProtocolAdapter")) { UNIX_ProtocolAdapterFixture protocolAdapter; protocolAdapter.Run(); }
	//if (IsTarget(s, "UNIX_ProtocolController")) { UNIX_ProtocolControllerFixture protocolController; protocolController.Run(); }
	//if (IsTarget(s, "UNIX_ProtocolControllerAccessesUnit")) { UNIX_ProtocolControllerAccessesUnitFixture protocolControllerAccessesUnit; protocolControllerAccessesUnit.Run(); }
	//if (IsTarget(s, "UNIX_ProtocolControllerForPort")) { UNIX_ProtocolControllerForPortFixture protocolControllerForPort; protocolControllerForPort.Run(); }
	//if (IsTarget(s, "UNIX_ProtocolControllerForUnit")) { UNIX_ProtocolControllerForUnitFixture protocolControllerForUnit; protocolControllerForUnit.Run(); }
	//if (IsTarget(s, "UNIX_ProtocolControllerMaskingCapabilities")) { UNIX_ProtocolControllerMaskingCapabilitiesFixture protocolControllerMaskingCapabilities; protocolControllerMaskingCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_ProtocolService")) { UNIX_ProtocolServiceFixture protocolService; protocolService.Run(); }
	//if (IsTarget(s, "UNIX_ProvidesEndpoint")) { UNIX_ProvidesEndpointFixture providesEndpoint; providesEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_PSExtentBasedOnPExtent")) { UNIX_PSExtentBasedOnPExtentFixture pSExtentBasedOnPExtent; pSExtentBasedOnPExtent.Run(); }
	//if (IsTarget(s, "UNIX_PublicKeyCertificate")) { UNIX_PublicKeyCertificateFixture publicKeyCertificate; publicKeyCertificate.Run(); }
	//if (IsTarget(s, "UNIX_PublicKeyManagementService")) { UNIX_PublicKeyManagementServiceFixture publicKeyManagementService; publicKeyManagementService.Run(); }
	//if (IsTarget(s, "UNIX_PublicPrivateKeyAuthentication")) { UNIX_PublicPrivateKeyAuthenticationFixture publicPrivateKeyAuthentication; publicPrivateKeyAuthentication.Run(); }
	//if (IsTarget(s, "UNIX_PublicPrivateKeyPair")) { UNIX_PublicPrivateKeyPairFixture publicPrivateKeyPair; publicPrivateKeyPair.Run(); }
	//if (IsTarget(s, "UNIX_QoSConditioningSubService")) { UNIX_QoSConditioningSubServiceFixture qoSConditioningSubService; qoSConditioningSubService.Run(); }
	//if (IsTarget(s, "UNIX_QoSSubService")) { UNIX_QoSSubServiceFixture qoSSubService; qoSSubService.Run(); }
	//if (IsTarget(s, "UNIX_QueryCapabilities")) { UNIX_QueryCapabilitiesFixture queryCapabilities; queryCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_QueryCondition")) { UNIX_QueryConditionFixture queryCondition; queryCondition.Run(); }
	//if (IsTarget(s, "UNIX_QueueAllocation")) { UNIX_QueueAllocationFixture queueAllocation; queueAllocation.Run(); }
	//if (IsTarget(s, "UNIX_QueueForPrintService")) { UNIX_QueueForPrintServiceFixture queueForPrintService; queueForPrintService.Run(); }
	//if (IsTarget(s, "UNIX_QueueForwardsToPrintSAP")) { UNIX_QueueForwardsToPrintSAPFixture queueForwardsToPrintSAP; queueForwardsToPrintSAP.Run(); }
	//if (IsTarget(s, "UNIX_QueueHierarchy")) { UNIX_QueueHierarchyFixture queueHierarchy; queueHierarchy.Run(); }
	//if (IsTarget(s, "UNIX_QueueToSchedule")) { UNIX_QueueToScheduleFixture queueToSchedule; queueToSchedule.Run(); }
	//if (IsTarget(s, "UNIX_QueuingService")) { UNIX_QueuingServiceFixture queuingService; queuingService.Run(); }
	//if (IsTarget(s, "UNIX_Rack")) { UNIX_RackFixture rack; rack.Run(); }
	//if (IsTarget(s, "UNIX_RangeOfIPAddresses")) { UNIX_RangeOfIPAddressesFixture rangeOfIPAddresses; rangeOfIPAddresses.Run(); }
	//if (IsTarget(s, "UNIX_RangesOfConfiguration")) { UNIX_RangesOfConfigurationFixture rangesOfConfiguration; rangesOfConfiguration.Run(); }
	//if (IsTarget(s, "UNIX_RealizedOnSide")) { UNIX_RealizedOnSideFixture realizedOnSide; realizedOnSide.Run(); }
	//if (IsTarget(s, "UNIX_RealizesAggregatePExtent")) { UNIX_RealizesAggregatePExtentFixture realizesAggregatePExtent; realizesAggregatePExtent.Run(); }
	//if (IsTarget(s, "UNIX_RealizesDiskPartition")) { UNIX_RealizesDiskPartitionFixture realizesDiskPartition; realizesDiskPartition.Run(); }
	//if (IsTarget(s, "UNIX_RealizesPExtent")) { UNIX_RealizesPExtentFixture realizesPExtent; realizesPExtent.Run(); }
	//if (IsTarget(s, "UNIX_RealizesTapePartition")) { UNIX_RealizesTapePartitionFixture realizesTapePartition; realizesTapePartition.Run(); }
	//if (IsTarget(s, "UNIX_RebootAction")) { UNIX_RebootActionFixture rebootAction; rebootAction.Run(); }
	//if (IsTarget(s, "UNIX_RecordAppliesToElement")) { UNIX_RecordAppliesToElementFixture recordAppliesToElement; recordAppliesToElement.Run(); }
	//if (IsTarget(s, "UNIX_RecordInLog")) { UNIX_RecordInLogFixture recordInLog; recordInLog.Run(); }
	//if (IsTarget(s, "UNIX_RecordLogCapabilities")) { UNIX_RecordLogCapabilitiesFixture recordLogCapabilities; recordLogCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_REDDropperService")) { UNIX_REDDropperServiceFixture rEDDropperService; rEDDropperService.Run(); }
	//if (IsTarget(s, "UNIX_RedundancySet")) { UNIX_RedundancySetFixture redundancySet; redundancySet.Run(); }
	//if (IsTarget(s, "UNIX_ReferencedProfile")) { UNIX_ReferencedProfileFixture referencedProfile; referencedProfile.Run(); }
	//if (IsTarget(s, "UNIX_ReflectorClientService")) { UNIX_ReflectorClientServiceFixture reflectorClientService; reflectorClientService.Run(); }
	//if (IsTarget(s, "UNIX_ReflectorNonClientService")) { UNIX_ReflectorNonClientServiceFixture reflectorNonClientService; reflectorNonClientService.Run(); }
	//if (IsTarget(s, "UNIX_ReflectorService")) { UNIX_ReflectorServiceFixture reflectorService; reflectorService.Run(); }
	//if (IsTarget(s, "UNIX_Refrigeration")) { UNIX_RefrigerationFixture refrigeration; refrigeration.Run(); }
	//if (IsTarget(s, "UNIX_RegisteredSubProfile")) { UNIX_RegisteredSubProfileFixture registeredSubProfile; registeredSubProfile.Run(); }
	//if (IsTarget(s, "UNIX_RejectConnectionAction")) { UNIX_RejectConnectionActionFixture rejectConnectionAction; rejectConnectionAction.Run(); }
	//if (IsTarget(s, "UNIX_RelatedSpanningTree")) { UNIX_RelatedSpanningTreeFixture relatedSpanningTree; relatedSpanningTree.Run(); }
	//if (IsTarget(s, "UNIX_RelatedStatisticalData")) { UNIX_RelatedStatisticalDataFixture relatedStatisticalData; relatedStatisticalData.Run(); }
	//if (IsTarget(s, "UNIX_RelatedStatistics")) { UNIX_RelatedStatisticsFixture relatedStatistics; relatedStatistics.Run(); }
	//if (IsTarget(s, "UNIX_RelatedTransparentBridgingService")) { UNIX_RelatedTransparentBridgingServiceFixture relatedTransparentBridgingService; relatedTransparentBridgingService.Run(); }
	//if (IsTarget(s, "UNIX_RemoteAccessAvailableToElement")) { UNIX_RemoteAccessAvailableToElementFixture remoteAccessAvailableToElement; remoteAccessAvailableToElement.Run(); }
	if (IsTarget(s, "UNIX_RemoteFileSystem")) { UNIX_RemoteFileSystemFixture remoteFileSystem; remoteFileSystem.Run(); }
	//if (IsTarget(s, "UNIX_RemotePort")) { UNIX_RemotePortFixture remotePort; remotePort.Run(); }
	//if (IsTarget(s, "UNIX_RemoveDirectoryAction")) { UNIX_RemoveDirectoryActionFixture removeDirectoryAction; removeDirectoryAction.Run(); }
	//if (IsTarget(s, "UNIX_RemoveFileAction")) { UNIX_RemoveFileActionFixture removeFileAction; removeFileAction.Run(); }
	//if (IsTarget(s, "UNIX_ReplaceableProductFRU")) { UNIX_ReplaceableProductFRUFixture replaceableProductFRU; replaceableProductFRU.Run(); }
	//if (IsTarget(s, "UNIX_ReplacementSet")) { UNIX_ReplacementSetFixture replacementSet; replacementSet.Run(); }
	//if (IsTarget(s, "UNIX_RequireCredentialsFrom")) { UNIX_RequireCredentialsFromFixture requireCredentialsFrom; requireCredentialsFrom.Run(); }
	//if (IsTarget(s, "UNIX_ResidesOnExtent")) { UNIX_ResidesOnExtentFixture residesOnExtent; residesOnExtent.Run(); }
	//if (IsTarget(s, "UNIX_ResourceAllocationFromPool")) { UNIX_ResourceAllocationFromPoolFixture resourceAllocationFromPool; resourceAllocationFromPool.Run(); }
	//if (IsTarget(s, "UNIX_ResourcePool")) { UNIX_ResourcePoolFixture resourcePool; resourcePool.Run(); }
	//if (IsTarget(s, "UNIX_ResourcePoolConfigurationCapabilities")) { UNIX_ResourcePoolConfigurationCapabilitiesFixture resourcePoolConfigurationCapabilities; resourcePoolConfigurationCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_ResourcePoolConfigurationService")) { UNIX_ResourcePoolConfigurationServiceFixture resourcePoolConfigurationService; resourcePoolConfigurationService.Run(); }
	//if (IsTarget(s, "UNIX_ReusablePolicy")) { UNIX_ReusablePolicyFixture reusablePolicy; reusablePolicy.Run(); }
	//if (IsTarget(s, "UNIX_ReusablePolicyContainer")) { UNIX_ReusablePolicyContainerFixture reusablePolicyContainer; reusablePolicyContainer.Run(); }
	//if (IsTarget(s, "UNIX_Role")) { UNIX_RoleFixture role; role.Run(); }
	//if (IsTarget(s, "UNIX_RoleBasedAuthorizationService")) { UNIX_RoleBasedAuthorizationServiceFixture roleBasedAuthorizationService; roleBasedAuthorizationService.Run(); }
	//if (IsTarget(s, "UNIX_RoleBasedManagementCapabilities")) { UNIX_RoleBasedManagementCapabilitiesFixture roleBasedManagementCapabilities; roleBasedManagementCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_RoleLimitedToTarget")) { UNIX_RoleLimitedToTargetFixture roleLimitedToTarget; roleLimitedToTarget.Run(); }
	//if (IsTarget(s, "UNIX_RouteForwardedByService")) { UNIX_RouteForwardedByServiceFixture routeForwardedByService; routeForwardedByService.Run(); }
	//if (IsTarget(s, "UNIX_RoutersInAS")) { UNIX_RoutersInASFixture routersInAS; routersInAS.Run(); }
	//if (IsTarget(s, "UNIX_RoutersInBGPCluster")) { UNIX_RoutersInBGPClusterFixture routersInBGPCluster; routersInBGPCluster.Run(); }
	//if (IsTarget(s, "UNIX_RoutesBGP")) { UNIX_RoutesBGPFixture routesBGP; routesBGP.Run(); }
	//if (IsTarget(s, "UNIX_RouteUsesEndpoint")) { UNIX_RouteUsesEndpointFixture routeUsesEndpoint; routeUsesEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_RoutingPolicy")) { UNIX_RoutingPolicyFixture routingPolicy; routingPolicy.Run(); }
	//if (IsTarget(s, "UNIX_RoutingProtocolDomain")) { UNIX_RoutingProtocolDomainFixture routingProtocolDomain; routingProtocolDomain.Run(); }
	//if (IsTarget(s, "UNIX_RoutingProtocolDomainInAS")) { UNIX_RoutingProtocolDomainInASFixture routingProtocolDomainInAS; routingProtocolDomainInAS.Run(); }
	//if (IsTarget(s, "UNIX_RuleThatGeneratedSA")) { UNIX_RuleThatGeneratedSAFixture ruleThatGeneratedSA; ruleThatGeneratedSA.Run(); }
	//if (IsTarget(s, "UNIX_RunningOS")) { UNIX_RunningOSFixture runningOS; runningOS.Run(); }
	//if (IsTarget(s, "UNIX_SAEndpointConnectionStatistics")) { UNIX_SAEndpointConnectionStatisticsFixture sAEndpointConnectionStatistics; sAEndpointConnectionStatistics.Run(); }
	//if (IsTarget(s, "UNIX_SAEndpointRefreshSettings")) { UNIX_SAEndpointRefreshSettingsFixture sAEndpointRefreshSettings; sAEndpointRefreshSettings.Run(); }
	//if (IsTarget(s, "UNIX_SAPAvailableForElement")) { UNIX_SAPAvailableForElementFixture sAPAvailableForElement; sAPAvailableForElement.Run(); }
	//if (IsTarget(s, "UNIX_SAPStatistics")) { UNIX_SAPStatisticsFixture sAPStatistics; sAPStatistics.Run(); }
	//if (IsTarget(s, "UNIX_Scanner")) { UNIX_ScannerFixture scanner; scanner.Run(); }
	//if (IsTarget(s, "UNIX_SchedulerUsed")) { UNIX_SchedulerUsedFixture schedulerUsed; schedulerUsed.Run(); }
	//if (IsTarget(s, "UNIX_SchedulingServiceToSchedule")) { UNIX_SchedulingServiceToScheduleFixture schedulingServiceToSchedule; schedulingServiceToSchedule.Run(); }
	//if (IsTarget(s, "UNIX_ScopedSetting")) { UNIX_ScopedSettingFixture scopedSetting; scopedSetting.Run(); }
	if (IsTarget(s, "UNIX_SCSIController")) { UNIX_SCSIControllerFixture sCSIController; sCSIController.Run(); }
	//if (IsTarget(s, "UNIX_SCSIInitiatorTargetLogicalUnitPath")) { UNIX_SCSIInitiatorTargetLogicalUnitPathFixture sCSIInitiatorTargetLogicalUnitPath; sCSIInitiatorTargetLogicalUnitPath.Run(); }
	//if (IsTarget(s, "UNIX_SCSIInterface")) { UNIX_SCSIInterfaceFixture sCSIInterface; sCSIInterface.Run(); }
	//if (IsTarget(s, "UNIX_SCSIMultipathConfigurationCapabilities")) { UNIX_SCSIMultipathConfigurationCapabilitiesFixture sCSIMultipathConfigurationCapabilities; sCSIMultipathConfigurationCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_SCSIMultipathSettings")) { UNIX_SCSIMultipathSettingsFixture sCSIMultipathSettings; sCSIMultipathSettings.Run(); }
	//if (IsTarget(s, "UNIX_SCSIPathConfigurationService")) { UNIX_SCSIPathConfigurationServiceFixture sCSIPathConfigurationService; sCSIPathConfigurationService.Run(); }
	//if (IsTarget(s, "UNIX_SCSIProtocolController")) { UNIX_SCSIProtocolControllerFixture sCSIProtocolController; sCSIProtocolController.Run(); }
	//if (IsTarget(s, "UNIX_SCSIProtocolEndpoint")) { UNIX_SCSIProtocolEndpointFixture sCSIProtocolEndpoint; sCSIProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_SCSITargetPortGroup")) { UNIX_SCSITargetPortGroupFixture sCSITargetPortGroup; sCSITargetPortGroup.Run(); }
	//if (IsTarget(s, "UNIX_SDSLModem")) { UNIX_SDSLModemFixture sDSLModem; sDSLModem.Run(); }
	//if (IsTarget(s, "UNIX_SecuritySensitivity")) { UNIX_SecuritySensitivityFixture securitySensitivity; securitySensitivity.Run(); }
	//if (IsTarget(s, "UNIX_SecurityServiceForSystem")) { UNIX_SecurityServiceForSystemFixture securityServiceForSystem; securityServiceForSystem.Run(); }
	//if (IsTarget(s, "UNIX_SecurityServiceUsesAccount")) { UNIX_SecurityServiceUsesAccountFixture securityServiceUsesAccount; securityServiceUsesAccount.Run(); }
	//if (IsTarget(s, "UNIX_SerialController")) { UNIX_SerialControllerFixture serialController; serialController.Run(); }
	//if (IsTarget(s, "UNIX_SerialInterface")) { UNIX_SerialInterfaceFixture serialInterface; serialInterface.Run(); }
	//if (IsTarget(s, "UNIX_ServiceAccessURI")) { UNIX_ServiceAccessURIFixture serviceAccessURI; serviceAccessURI.Run(); }
	//if (IsTarget(s, "UNIX_ServiceAffectsElement")) { UNIX_ServiceAffectsElementFixture serviceAffectsElement; serviceAffectsElement.Run(); }
	//if (IsTarget(s, "UNIX_ServiceAvailableToElement")) { UNIX_ServiceAvailableToElementFixture serviceAvailableToElement; serviceAvailableToElement.Run(); }
	if (IsTarget(s, "UNIX_ServiceProcess")) { UNIX_ServiceProcessFixture serviceProcess; serviceProcess.Run(); }
	//if (IsTarget(s, "UNIX_ServiceStatistics")) { UNIX_ServiceStatisticsFixture serviceStatistics; serviceStatistics.Run(); }
	//if (IsTarget(s, "UNIX_ServiceUsesSecurityService")) { UNIX_ServiceUsesSecurityServiceFixture serviceUsesSecurityService; serviceUsesSecurityService.Run(); }
	//if (IsTarget(s, "UNIX_SettingCheck")) { UNIX_SettingCheckFixture settingCheck; settingCheck.Run(); }
	//if (IsTarget(s, "UNIX_SettingContext")) { UNIX_SettingContextFixture settingContext; settingContext.Run(); }
	//if (IsTarget(s, "UNIX_SettingForSystem")) { UNIX_SettingForSystemFixture settingForSystem; settingForSystem.Run(); }
	//if (IsTarget(s, "UNIX_SettingsDefineCapabilities")) { UNIX_SettingsDefineCapabilitiesFixture settingsDefineCapabilities; settingsDefineCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_SettingsDefineState")) { UNIX_SettingsDefineStateFixture settingsDefineState; settingsDefineState.Run(); }
	//if (IsTarget(s, "UNIX_SharedCredential")) { UNIX_SharedCredentialFixture sharedCredential; sharedCredential.Run(); }
	//if (IsTarget(s, "UNIX_SharedDeviceManagementService")) { UNIX_SharedDeviceManagementServiceFixture sharedDeviceManagementService; sharedDeviceManagementService.Run(); }
	//if (IsTarget(s, "UNIX_SharedSecret")) { UNIX_SharedSecretFixture sharedSecret; sharedSecret.Run(); }
	//if (IsTarget(s, "UNIX_SharedSecretAuthentication")) { UNIX_SharedSecretAuthenticationFixture sharedSecretAuthentication; sharedSecretAuthentication.Run(); }
	//if (IsTarget(s, "UNIX_SharedSecretIsShared")) { UNIX_SharedSecretIsSharedFixture sharedSecretIsShared; sharedSecretIsShared.Run(); }
	//if (IsTarget(s, "UNIX_SharedSecretService")) { UNIX_SharedSecretServiceFixture sharedSecretService; sharedSecretService.Run(); }
	//if (IsTarget(s, "UNIX_SharingDependency")) { UNIX_SharingDependencyFixture sharingDependency; sharingDependency.Run(); }
	//if (IsTarget(s, "UNIX_Slot")) { UNIX_SlotFixture slot; slot.Run(); }
	//if (IsTarget(s, "UNIX_SlotInSlot")) { UNIX_SlotInSlotFixture slotInSlot; slotInSlot.Run(); }
	//if (IsTarget(s, "UNIX_Snapshot")) { UNIX_SnapshotFixture snapshot; snapshot.Run(); }
	//if (IsTarget(s, "UNIX_SnapshotOfExtent")) { UNIX_SnapshotOfExtentFixture snapshotOfExtent; snapshotOfExtent.Run(); }
	//if (IsTarget(s, "UNIX_SnapshotOfVirtualSystem")) { UNIX_SnapshotOfVirtualSystemFixture snapshotOfVirtualSystem; snapshotOfVirtualSystem.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareElementActions")) { UNIX_SoftwareElementActionsFixture softwareElementActions; softwareElementActions.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareElementChecks")) { UNIX_SoftwareElementChecksFixture softwareElementChecks; softwareElementChecks.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareElementComponent")) { UNIX_SoftwareElementComponentFixture softwareElementComponent; softwareElementComponent.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareElementSAPImplementation")) { UNIX_SoftwareElementSAPImplementationFixture softwareElementSAPImplementation; softwareElementSAPImplementation.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareElementServiceImplementation")) { UNIX_SoftwareElementServiceImplementationFixture softwareElementServiceImplementation; softwareElementServiceImplementation.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareElementVersionCheck")) { UNIX_SoftwareElementVersionCheckFixture softwareElementVersionCheck; softwareElementVersionCheck.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareFeatureComponent")) { UNIX_SoftwareFeatureComponentFixture softwareFeatureComponent; softwareFeatureComponent.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareFeatureSAPImplementation")) { UNIX_SoftwareFeatureSAPImplementationFixture softwareFeatureSAPImplementation; softwareFeatureSAPImplementation.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareFeatureServiceImplementation")) { UNIX_SoftwareFeatureServiceImplementationFixture softwareFeatureServiceImplementation; softwareFeatureServiceImplementation.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareIdentity")) { UNIX_SoftwareIdentityFixture softwareIdentity; softwareIdentity.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareInstallationService")) { UNIX_SoftwareInstallationServiceFixture softwareInstallationService; softwareInstallationService.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareInstallationServiceCapabilities")) { UNIX_SoftwareInstallationServiceCapabilitiesFixture softwareInstallationServiceCapabilities; softwareInstallationServiceCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_SourceRoutingService")) { UNIX_SourceRoutingServiceFixture sourceRoutingService; sourceRoutingService.Run(); }
	//if (IsTarget(s, "UNIX_SpanningTreeService")) { UNIX_SpanningTreeServiceFixture spanningTreeService; spanningTreeService.Run(); }
	//if (IsTarget(s, "UNIX_SpanningTreeStatistics")) { UNIX_SpanningTreeStatisticsFixture spanningTreeStatistics; spanningTreeStatistics.Run(); }
	//if (IsTarget(s, "UNIX_Spared")) { UNIX_SparedFixture spared; spared.Run(); }
	//if (IsTarget(s, "UNIX_SpareGroup")) { UNIX_SpareGroupFixture spareGroup; spareGroup.Run(); }
	//if (IsTarget(s, "UNIX_Specific802dot1QVLANService")) { UNIX_Specific802dot1QVLANServiceFixture specific802dot1QVLANService; specific802dot1QVLANService.Run(); }
	//if (IsTarget(s, "UNIX_SSAController")) { UNIX_SSAControllerFixture sSAController; sSAController.Run(); }
	//if (IsTarget(s, "UNIX_SSHCapabilities")) { UNIX_SSHCapabilitiesFixture sSHCapabilities; sSHCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_SSHProtocolEndpoint")) { UNIX_SSHProtocolEndpointFixture sSHProtocolEndpoint; sSHProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_SSHSettingData")) { UNIX_SSHSettingDataFixture sSHSettingData; sSHSettingData.Run(); }
	//if (IsTarget(s, "UNIX_StaticForwardingEntry")) { UNIX_StaticForwardingEntryFixture staticForwardingEntry; staticForwardingEntry.Run(); }
	//if (IsTarget(s, "UNIX_StaticIPAssignmentSettingData")) { UNIX_StaticIPAssignmentSettingDataFixture staticIPAssignmentSettingData; staticIPAssignmentSettingData.Run(); }
	//if (IsTarget(s, "UNIX_StatisticalRuntimeOverview")) { UNIX_StatisticalRuntimeOverviewFixture statisticalRuntimeOverview; statisticalRuntimeOverview.Run(); }
	//if (IsTarget(s, "UNIX_StatisticalSetting")) { UNIX_StatisticalSettingFixture statisticalSetting; statisticalSetting.Run(); }
	//if (IsTarget(s, "UNIX_StatisticsCapabilities")) { UNIX_StatisticsCapabilitiesFixture statisticsCapabilities; statisticsCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_StatisticsCollection")) { UNIX_StatisticsCollectionFixture statisticsCollection; statisticsCollection.Run(); }
	//if (IsTarget(s, "UNIX_StatisticsService")) { UNIX_StatisticsServiceFixture statisticsService; statisticsService.Run(); }
	//if (IsTarget(s, "UNIX_StorageAllocationSettingData")) { UNIX_StorageAllocationSettingDataFixture storageAllocationSettingData; storageAllocationSettingData.Run(); }
	//if (IsTarget(s, "UNIX_StorageCapabilities")) { UNIX_StorageCapabilitiesFixture storageCapabilities; storageCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_StorageClientSettingData")) { UNIX_StorageClientSettingDataFixture storageClientSettingData; storageClientSettingData.Run(); }
	//if (IsTarget(s, "UNIX_StorageConfigurationCapabilities")) { UNIX_StorageConfigurationCapabilitiesFixture storageConfigurationCapabilities; storageConfigurationCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_StorageConfigurationService")) { UNIX_StorageConfigurationServiceFixture storageConfigurationService; storageConfigurationService.Run(); }
	//if (IsTarget(s, "UNIX_StorageDefect")) { UNIX_StorageDefectFixture storageDefect; storageDefect.Run(); }
	//if (IsTarget(s, "UNIX_StorageError")) { UNIX_StorageErrorFixture storageError; storageError.Run(); }
	//if (IsTarget(s, "UNIX_StorageHardwareID")) { UNIX_StorageHardwareIDFixture storageHardwareID; storageHardwareID.Run(); }
	//if (IsTarget(s, "UNIX_StorageHardwareIDManagementService")) { UNIX_StorageHardwareIDManagementServiceFixture storageHardwareIDManagementService; storageHardwareIDManagementService.Run(); }
	//if (IsTarget(s, "UNIX_StorageLibrary")) { UNIX_StorageLibraryFixture storageLibrary; storageLibrary.Run(); }
	//if (IsTarget(s, "UNIX_StorageMediaLocation")) { UNIX_StorageMediaLocationFixture storageMediaLocation; storageMediaLocation.Run(); }
	//if (IsTarget(s, "UNIX_StoragePool")) { UNIX_StoragePoolFixture storagePool; storagePool.Run(); }
	//if (IsTarget(s, "UNIX_StorageRedundancyGroup")) { UNIX_StorageRedundancyGroupFixture storageRedundancyGroup; storageRedundancyGroup.Run(); }
	//if (IsTarget(s, "UNIX_StorageRedundancySet")) { UNIX_StorageRedundancySetFixture storageRedundancySet; storageRedundancySet.Run(); }
	//if (IsTarget(s, "UNIX_StorageReplicationCapabilities")) { UNIX_StorageReplicationCapabilitiesFixture storageReplicationCapabilities; storageReplicationCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_StorageSetting")) { UNIX_StorageSettingFixture storageSetting; storageSetting.Run(); }
	//if (IsTarget(s, "UNIX_StorageSettingsAssociatedToCapabilities")) { UNIX_StorageSettingsAssociatedToCapabilitiesFixture storageSettingsAssociatedToCapabilities; storageSettingsAssociatedToCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_StorageSettingsGeneratedFromCapabilities")) { UNIX_StorageSettingsGeneratedFromCapabilitiesFixture storageSettingsGeneratedFromCapabilities; storageSettingsGeneratedFromCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_StorageSettingWithHints")) { UNIX_StorageSettingWithHintsFixture storageSettingWithHints; storageSettingWithHints.Run(); }
	//if (IsTarget(s, "UNIX_StorageVolume")) { UNIX_StorageVolumeFixture storageVolume; storageVolume.Run(); }
	//if (IsTarget(s, "UNIX_SubProfileRequiresProfile")) { UNIX_SubProfileRequiresProfileFixture subProfileRequiresProfile; subProfileRequiresProfile.Run(); }
	//if (IsTarget(s, "UNIX_SuppliesPower")) { UNIX_SuppliesPowerFixture suppliesPower; suppliesPower.Run(); }
	//if (IsTarget(s, "UNIX_SupportAccess")) { UNIX_SupportAccessFixture supportAccess; supportAccess.Run(); }
	//if (IsTarget(s, "UNIX_SwapSpaceCheck")) { UNIX_SwapSpaceCheckFixture swapSpaceCheck; swapSpaceCheck.Run(); }
	//if (IsTarget(s, "UNIX_Switchable")) { UNIX_SwitchableFixture switchable; switchable.Run(); }
	//if (IsTarget(s, "UNIX_SwitchesAmong")) { UNIX_SwitchesAmongFixture switchesAmong; switchesAmong.Run(); }
	//if (IsTarget(s, "UNIX_SwitchPort")) { UNIX_SwitchPortFixture switchPort; switchPort.Run(); }
	//if (IsTarget(s, "UNIX_SwitchPortDynamicForwarding")) { UNIX_SwitchPortDynamicForwardingFixture switchPortDynamicForwarding; switchPortDynamicForwarding.Run(); }
	//if (IsTarget(s, "UNIX_SwitchPortPair")) { UNIX_SwitchPortPairFixture switchPortPair; switchPortPair.Run(); }
	//if (IsTarget(s, "UNIX_SwitchPortSourceRouting")) { UNIX_SwitchPortSourceRoutingFixture switchPortSourceRouting; switchPortSourceRouting.Run(); }
	//if (IsTarget(s, "UNIX_SwitchPortSourceRoutingStatistics")) { UNIX_SwitchPortSourceRoutingStatisticsFixture switchPortSourceRoutingStatistics; switchPortSourceRoutingStatistics.Run(); }
	//if (IsTarget(s, "UNIX_SwitchPortSpanningTree")) { UNIX_SwitchPortSpanningTreeFixture switchPortSpanningTree; switchPortSpanningTree.Run(); }
	//if (IsTarget(s, "UNIX_SwitchPortSpanningTreeStatistics")) { UNIX_SwitchPortSpanningTreeStatisticsFixture switchPortSpanningTreeStatistics; switchPortSpanningTreeStatistics.Run(); }
	//if (IsTarget(s, "UNIX_SwitchPortStaticForwarding")) { UNIX_SwitchPortStaticForwardingFixture switchPortStaticForwarding; switchPortStaticForwarding.Run(); }
	//if (IsTarget(s, "UNIX_SwitchPortStatistics")) { UNIX_SwitchPortStatisticsFixture switchPortStatistics; switchPortStatistics.Run(); }
	//if (IsTarget(s, "UNIX_SwitchPortTransparentBridgingStatistics")) { UNIX_SwitchPortTransparentBridgingStatisticsFixture switchPortTransparentBridgingStatistics; switchPortTransparentBridgingStatistics.Run(); }
	//if (IsTarget(s, "UNIX_SwitchService")) { UNIX_SwitchServiceFixture switchService; switchService.Run(); }
	//if (IsTarget(s, "UNIX_SwitchServiceSourceRouting")) { UNIX_SwitchServiceSourceRoutingFixture switchServiceSourceRouting; switchServiceSourceRouting.Run(); }
	//if (IsTarget(s, "UNIX_SwitchServiceSpanningTree")) { UNIX_SwitchServiceSpanningTreeFixture switchServiceSpanningTree; switchServiceSpanningTree.Run(); }
	//if (IsTarget(s, "UNIX_SwitchServiceTransparentBridging")) { UNIX_SwitchServiceTransparentBridgingFixture switchServiceTransparentBridging; switchServiceTransparentBridging.Run(); }
	//if (IsTarget(s, "UNIX_SwitchServiceVLAN")) { UNIX_SwitchServiceVLANFixture switchServiceVLAN; switchServiceVLAN.Run(); }
	//if (IsTarget(s, "UNIX_SymbolicLink")) { UNIX_SymbolicLinkFixture symbolicLink; symbolicLink.Run(); }
	//if (IsTarget(s, "UNIX_Synchronized")) { UNIX_SynchronizedFixture synchronized; synchronized.Run(); }
	if (IsTarget(s, "UNIX_SystemAdministrator")) { UNIX_SystemAdministratorFixture systemAdministrator; systemAdministrator.Run(); }
	if (IsTarget(s, "UNIX_SystemAdministratorGroup")) { UNIX_SystemAdministratorGroupFixture systemAdministratorGroup; systemAdministratorGroup.Run(); }
	//if (IsTarget(s, "UNIX_SystemAdministratorRole")) { UNIX_SystemAdministratorRoleFixture systemAdministratorRole; systemAdministratorRole.Run(); }
	if (IsTarget(s, "UNIX_SystemBIOS")) { UNIX_SystemBIOSFixture systemBIOS; systemBIOS.Run(); }
	//if (IsTarget(s, "UNIX_SystemBusCard")) { UNIX_SystemBusCardFixture systemBusCard; systemBusCard.Run(); }
	//if (IsTarget(s, "UNIX_SystemConfiguration")) { UNIX_SystemConfigurationFixture systemConfiguration; systemConfiguration.Run(); }
	//if (IsTarget(s, "UNIX_SystemIdentification")) { UNIX_SystemIdentificationFixture systemIdentification; systemIdentification.Run(); }
	//if (IsTarget(s, "UNIX_SystemInNamespace")) { UNIX_SystemInNamespaceFixture systemInNamespace; systemInNamespace.Run(); }
	//if (IsTarget(s, "UNIX_SystemPartition")) { UNIX_SystemPartitionFixture systemPartition; systemPartition.Run(); }
	//if (IsTarget(s, "UNIX_SystemSetting")) { UNIX_SystemSettingFixture systemSetting; systemSetting.Run(); }
	//if (IsTarget(s, "UNIX_SystemSettingContext")) { UNIX_SystemSettingContextFixture systemSettingContext; systemSettingContext.Run(); }
	//if (IsTarget(s, "UNIX_SystemStatisticalInformation")) { UNIX_SystemStatisticalInformationFixture systemStatisticalInformation; systemStatisticalInformation.Run(); }
	//if (IsTarget(s, "UNIX_SystemStatistics")) { UNIX_SystemStatisticsFixture systemStatistics; systemStatistics.Run(); }
	//if (IsTarget(s, "UNIX_Tachometer")) { UNIX_TachometerFixture tachometer; tachometer.Run(); }
	//if (IsTarget(s, "UNIX_TapeDrive")) { UNIX_TapeDriveFixture tapeDrive; tapeDrive.Run(); }
	//if (IsTarget(s, "UNIX_TapePartition")) { UNIX_TapePartitionFixture tapePartition; tapePartition.Run(); }
	//if (IsTarget(s, "UNIX_TapePartitionOnSurface")) { UNIX_TapePartitionOnSurfaceFixture tapePartitionOnSurface; tapePartitionOnSurface.Run(); }
	//if (IsTarget(s, "UNIX_TCPProtocolEndpoint")) { UNIX_TCPProtocolEndpointFixture tCPProtocolEndpoint; tCPProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_TemperatureSensor")) { UNIX_TemperatureSensorFixture temperatureSensor; temperatureSensor.Run(); }
	//if (IsTarget(s, "UNIX_TextRedirectionSAP")) { UNIX_TextRedirectionSAPFixture textRedirectionSAP; textRedirectionSAP.Run(); }
	//if (IsTarget(s, "UNIX_TextRedirectionService")) { UNIX_TextRedirectionServiceFixture textRedirectionService; textRedirectionService.Run(); }
	//if (IsTarget(s, "UNIX_ThresholdIndication")) { UNIX_ThresholdIndicationFixture thresholdIndication; thresholdIndication.Run(); }
	//if (IsTarget(s, "UNIX_TimeService")) { UNIX_TimeServiceFixture timeService; timeService.Run(); }
	//if (IsTarget(s, "UNIX_TimeZone")) { UNIX_TimeZoneFixture timeZone; timeZone.Run(); }
	//if (IsTarget(s, "UNIX_ToDirectoryAction")) { UNIX_ToDirectoryActionFixture toDirectoryAction; toDirectoryAction.Run(); }
	//if (IsTarget(s, "UNIX_ToDirectorySpecification")) { UNIX_ToDirectorySpecificationFixture toDirectorySpecification; toDirectorySpecification.Run(); }
	//if (IsTarget(s, "UNIX_TokenBucketMeterService")) { UNIX_TokenBucketMeterServiceFixture tokenBucketMeterService; tokenBucketMeterService.Run(); }
	//if (IsTarget(s, "UNIX_TokenRingAdapter")) { UNIX_TokenRingAdapterFixture tokenRingAdapter; tokenRingAdapter.Run(); }
	//if (IsTarget(s, "UNIX_TokenRingPort")) { UNIX_TokenRingPortFixture tokenRingPort; tokenRingPort.Run(); }
	//if (IsTarget(s, "UNIX_TokenRingPortStatistics")) { UNIX_TokenRingPortStatisticsFixture tokenRingPortStatistics; tokenRingPortStatistics.Run(); }
	//if (IsTarget(s, "UNIX_ToSMarkerService")) { UNIX_ToSMarkerServiceFixture toSMarkerService; toSMarkerService.Run(); }
	//if (IsTarget(s, "UNIX_TraceLevelType")) { UNIX_TraceLevelTypeFixture traceLevelType; traceLevelType.Run(); }
	//if (IsTarget(s, "UNIX_TransformOfPreconfiguredAction")) { UNIX_TransformOfPreconfiguredActionFixture transformOfPreconfiguredAction; transformOfPreconfiguredAction.Run(); }
	//if (IsTarget(s, "UNIX_TransformOfSecurityAssociation")) { UNIX_TransformOfSecurityAssociationFixture transformOfSecurityAssociation; transformOfSecurityAssociation.Run(); }
	//if (IsTarget(s, "UNIX_TransparentBridgingDynamicForwarding")) { UNIX_TransparentBridgingDynamicForwardingFixture transparentBridgingDynamicForwarding; transparentBridgingDynamicForwarding.Run(); }
	//if (IsTarget(s, "UNIX_TransparentBridgingService")) { UNIX_TransparentBridgingServiceFixture transparentBridgingService; transparentBridgingService.Run(); }
	//if (IsTarget(s, "UNIX_TransparentBridgingStaticForwarding")) { UNIX_TransparentBridgingStaticForwardingFixture transparentBridgingStaticForwarding; transparentBridgingStaticForwarding.Run(); }
	//if (IsTarget(s, "UNIX_TransparentBridgingStatistics")) { UNIX_TransparentBridgingStatisticsFixture transparentBridgingStatistics; transparentBridgingStatistics.Run(); }
	//if (IsTarget(s, "UNIX_TrustHierarchy")) { UNIX_TrustHierarchyFixture trustHierarchy; trustHierarchy.Run(); }
	//if (IsTarget(s, "UNIX_UDPProtocolEndpoint")) { UNIX_UDPProtocolEndpointFixture uDPProtocolEndpoint; uDPProtocolEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_Unimodem")) { UNIX_UnimodemFixture unimodem; unimodem.Run(); }
	//if (IsTarget(s, "UNIX_UninterruptiblePowerSupply")) { UNIX_UninterruptiblePowerSupplyFixture uninterruptiblePowerSupply; uninterruptiblePowerSupply.Run(); }
	if (IsTarget(s, "UNIX_ComputerSystem")) { UNIX_ComputerSystemFixture computerSystem; computerSystem.Run(); }
	//if (IsTarget(s, "UNIX_DeviceFile")) { UNIX_DeviceFileFixture deviceFile; deviceFile.Run(); }
	//if (IsTarget(s, "UNIX_UnixDirectory")) { UNIX_UnixDirectoryFixture unixDirectory; unixDirectory.Run(); }
	//if (IsTarget(s, "UNIX_File")) { UNIX_FileFixture file; file.Run(); }
	if (IsTarget(s, "UNIX_Process")) { UNIX_ProcessFixture process; process.Run(); }
	//if (IsTarget(s, "UNIX_ProcessStatisticalInformation")) { UNIX_ProcessStatisticalInformationFixture processStatisticalInformation; processStatisticalInformation.Run(); }
	//if (IsTarget(s, "UNIX_ProcessStatistics")) { UNIX_ProcessStatisticsFixture processStatistics; processStatistics.Run(); }
	//if (IsTarget(s, "UNIX_Thread")) { UNIX_ThreadFixture thread; thread.Run(); }
	//if (IsTarget(s, "UNIX_UnsignedCredential")) { UNIX_UnsignedCredentialFixture unsignedCredential; unsignedCredential.Run(); }
	//if (IsTarget(s, "UNIX_UnsignedPublicKey")) { UNIX_UnsignedPublicKeyFixture unsignedPublicKey; unsignedPublicKey.Run(); }
	//if (IsTarget(s, "UNIX_USBConnection")) { UNIX_USBConnectionFixture uSBConnection; uSBConnection.Run(); }
	if (IsTarget(s, "UNIX_USBController")) { UNIX_USBControllerFixture uSBController; uSBController.Run(); }
	//if (IsTarget(s, "UNIX_USBControllerHasHub")) { UNIX_USBControllerHasHubFixture uSBControllerHasHub; uSBControllerHasHub.Run(); }
	//if (IsTarget(s, "UNIX_USBDevice")) { UNIX_USBDeviceFixture uSBDevice; uSBDevice.Run(); }
	//if (IsTarget(s, "UNIX_USBHub")) { UNIX_USBHubFixture uSBHub; uSBHub.Run(); }
	//if (IsTarget(s, "UNIX_USBPort")) { UNIX_USBPortFixture uSBPort; uSBPort.Run(); }
	//if (IsTarget(s, "UNIX_USBPortOnHub")) { UNIX_USBPortOnHubFixture uSBPortOnHub; uSBPortOnHub.Run(); }
	//if (IsTarget(s, "UNIX_USBRedirectionCapabilities")) { UNIX_USBRedirectionCapabilitiesFixture uSBRedirectionCapabilities; uSBRedirectionCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_USBRedirectionSAP")) { UNIX_USBRedirectionSAPFixture uSBRedirectionSAP; uSBRedirectionSAP.Run(); }
	//if (IsTarget(s, "UNIX_USBRedirectionService")) { UNIX_USBRedirectionServiceFixture uSBRedirectionService; uSBRedirectionService.Run(); }
	//if (IsTarget(s, "UNIX_UseOfLog")) { UNIX_UseOfLogFixture useOfLog; useOfLog.Run(); }
	//if (IsTarget(s, "UNIX_UseOfMessageLog")) { UNIX_UseOfMessageLogFixture useOfMessageLog; useOfMessageLog.Run(); }
	//if (IsTarget(s, "UNIX_UserContact")) { UNIX_UserContactFixture userContact; userContact.Run(); }
	if (IsTarget(s, "UNIX_UsersAccess")) { UNIX_UsersAccessFixture usersAccess; usersAccess.Run(); }
	if (IsTarget(s, "UNIX_UsersAccount")) { UNIX_UsersAccountFixture usersAccount; usersAccount.Run(); }
	//if (IsTarget(s, "UNIX_UsersCredential")) { UNIX_UsersCredentialFixture usersCredential; usersCredential.Run(); }
	//if (IsTarget(s, "UNIX_VDSLModem")) { UNIX_VDSLModemFixture vDSLModem; vDSLModem.Run(); }
	//if (IsTarget(s, "UNIX_VendorPolicyAction")) { UNIX_VendorPolicyActionFixture vendorPolicyAction; vendorPolicyAction.Run(); }
	//if (IsTarget(s, "UNIX_VendorPolicyCondition")) { UNIX_VendorPolicyConditionFixture vendorPolicyCondition; vendorPolicyCondition.Run(); }
	//if (IsTarget(s, "UNIX_VerificationService")) { UNIX_VerificationServiceFixture verificationService; verificationService.Run(); }
	//if (IsTarget(s, "UNIX_VersionCompatibilityCheck")) { UNIX_VersionCompatibilityCheckFixture versionCompatibilityCheck; versionCompatibilityCheck.Run(); }
	//if (IsTarget(s, "UNIX_VideoBIOSElement")) { UNIX_VideoBIOSElementFixture videoBIOSElement; videoBIOSElement.Run(); }
	//if (IsTarget(s, "UNIX_VideoBIOSFeature")) { UNIX_VideoBIOSFeatureFixture videoBIOSFeature; videoBIOSFeature.Run(); }
	//if (IsTarget(s, "UNIX_VideoBIOSFeatureVideoBIOSElements")) { UNIX_VideoBIOSFeatureVideoBIOSElementsFixture videoBIOSFeatureVideoBIOSElements; videoBIOSFeatureVideoBIOSElements.Run(); }
	//if (IsTarget(s, "UNIX_VideoControllerResolution")) { UNIX_VideoControllerResolutionFixture videoControllerResolution; videoControllerResolution.Run(); }
	//if (IsTarget(s, "UNIX_VideoHead")) { UNIX_VideoHeadFixture videoHead; videoHead.Run(); }
	//if (IsTarget(s, "UNIX_VideoHeadResolution")) { UNIX_VideoHeadResolutionFixture videoHeadResolution; videoHeadResolution.Run(); }
	//if (IsTarget(s, "UNIX_View")) { UNIX_ViewFixture view; view.Run(); }
	if (IsTarget(s, "UNIX_VirtualComputerSystem")) { UNIX_VirtualComputerSystemFixture virtualComputerSystem("UNIX_VirtualComputerSystem"); virtualComputerSystem.Run(); }
	if (IsTarget(s, "UNIX_JailComputerSystem")) { UNIX_VirtualComputerSystemFixture virtualComputerSystem("UNIX_JailComputerSystem"); virtualComputerSystem.Run(); }
	if (IsTarget(s, "UNIX_BhyveComputerSystem")) { UNIX_VirtualComputerSystemFixture virtualComputerSystem("UNIX_BhyveComputerSystem"); virtualComputerSystem.Run(); }
	//if (IsTarget(s, "UNIX_VirtualEthernetSwitchSettingData")) { UNIX_VirtualEthernetSwitchSettingDataFixture virtualEthernetSwitchSettingData; virtualEthernetSwitchSettingData.Run(); }
	//if (IsTarget(s, "UNIX_VirtualSystemManagementCapabilities")) { UNIX_VirtualSystemManagementCapabilitiesFixture virtualSystemManagementCapabilities; virtualSystemManagementCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_VirtualSystemManagementService")) { UNIX_VirtualSystemManagementServiceFixture virtualSystemManagementService; virtualSystemManagementService.Run(); }
	//if (IsTarget(s, "UNIX_VirtualSystemMigrationSettingData")) { UNIX_VirtualSystemMigrationSettingDataFixture virtualSystemMigrationSettingData; virtualSystemMigrationSettingData.Run(); }
	//if (IsTarget(s, "UNIX_VirtualSystemSettingData")) { UNIX_VirtualSystemSettingDataFixture virtualSystemSettingData; virtualSystemSettingData.Run(); }
	//if (IsTarget(s, "UNIX_VirtualSystemSettingDataComponent")) { UNIX_VirtualSystemSettingDataComponentFixture virtualSystemSettingDataComponent; virtualSystemSettingDataComponent.Run(); }
	//if (IsTarget(s, "UNIX_VirtualSystemSnapshotCapabilities")) { UNIX_VirtualSystemSnapshotCapabilitiesFixture virtualSystemSnapshotCapabilities; virtualSystemSnapshotCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_VirtualSystemSnapshotService")) { UNIX_VirtualSystemSnapshotServiceFixture virtualSystemSnapshotService; virtualSystemSnapshotService.Run(); }
	//if (IsTarget(s, "UNIX_VirtualSystemSnapshotServiceCapabilities")) { UNIX_VirtualSystemSnapshotServiceCapabilitiesFixture virtualSystemSnapshotServiceCapabilities; virtualSystemSnapshotServiceCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_VLAN")) { UNIX_VLANFixture vLAN; vLAN.Run(); }
	//if (IsTarget(s, "UNIX_VLANEndpoint")) { UNIX_VLANEndpointFixture vLANEndpoint; vLANEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_VLANEndpointCapabilities")) { UNIX_VLANEndpointCapabilitiesFixture vLANEndpointCapabilities; vLANEndpointCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_VLANEndpointSettingData")) { UNIX_VLANEndpointSettingDataFixture vLANEndpointSettingData; vLANEndpointSettingData.Run(); }
	//if (IsTarget(s, "UNIX_VLANFor")) { UNIX_VLANForFixture vLANFor; vLANFor.Run(); }
	//if (IsTarget(s, "UNIX_VLANService")) { UNIX_VLANServiceFixture vLANService; vLANService.Run(); }
	//if (IsTarget(s, "UNIX_VolatileStorage")) { UNIX_VolatileStorageFixture volatileStorage; volatileStorage.Run(); }
	//if (IsTarget(s, "UNIX_VoltageSensor")) { UNIX_VoltageSensorFixture voltageSensor; voltageSensor.Run(); }
	//if (IsTarget(s, "UNIX_VolumeSet")) { UNIX_VolumeSetFixture volumeSet; volumeSet.Run(); }
	//if (IsTarget(s, "UNIX_VolumeSetBasedOnPSExtent")) { UNIX_VolumeSetBasedOnPSExtentFixture volumeSetBasedOnPSExtent; volumeSetBasedOnPSExtent.Run(); }
	//if (IsTarget(s, "UNIX_WakeUpService")) { UNIX_WakeUpServiceFixture wakeUpService; wakeUpService.Run(); }
	//if (IsTarget(s, "UNIX_WakeUpServiceOnModem")) { UNIX_WakeUpServiceOnModemFixture wakeUpServiceOnModem; wakeUpServiceOnModem.Run(); }
	//if (IsTarget(s, "UNIX_WakeUpServiceOnNetworkAdapter")) { UNIX_WakeUpServiceOnNetworkAdapterFixture wakeUpServiceOnNetworkAdapter; wakeUpServiceOnNetworkAdapter.Run(); }
	//if (IsTarget(s, "UNIX_WakeUpServiceOnNetworkPort")) { UNIX_WakeUpServiceOnNetworkPortFixture wakeUpServiceOnNetworkPort; wakeUpServiceOnNetworkPort.Run(); }
	//if (IsTarget(s, "UNIX_Watchdog")) { UNIX_WatchdogFixture watchdog; watchdog.Run(); }
	//if (IsTarget(s, "UNIX_WeightedREDDropperService")) { UNIX_WeightedREDDropperServiceFixture weightedREDDropperService; weightedREDDropperService.Run(); }
	//if (IsTarget(s, "UNIX_WiFiEndpoint")) { UNIX_WiFiEndpointFixture wiFiEndpoint; wiFiEndpoint.Run(); }
	//if (IsTarget(s, "UNIX_WiFiEndpointCapabilities")) { UNIX_WiFiEndpointCapabilitiesFixture wiFiEndpointCapabilities; wiFiEndpointCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_WiFiEndpointSettings")) { UNIX_WiFiEndpointSettingsFixture wiFiEndpointSettings; wiFiEndpointSettings.Run(); }
	//if (IsTarget(s, "UNIX_WiFiNetworkDetectionSettings")) { UNIX_WiFiNetworkDetectionSettingsFixture wiFiNetworkDetectionSettings; wiFiNetworkDetectionSettings.Run(); }
	//if (IsTarget(s, "UNIX_WiFiPort")) { UNIX_WiFiPortFixture wiFiPort; wiFiPort.Run(); }
	//if (IsTarget(s, "UNIX_WiFiPortCapabilities")) { UNIX_WiFiPortCapabilitiesFixture wiFiPortCapabilities; wiFiPortCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_WiFiPortConfigurationService")) { UNIX_WiFiPortConfigurationServiceFixture wiFiPortConfigurationService; wiFiPortConfigurationService.Run(); }
	//if (IsTarget(s, "UNIX_WiFiRadio")) { UNIX_WiFiRadioFixture wiFiRadio; wiFiRadio.Run(); }
	//if (IsTarget(s, "UNIX_WORMDrive")) { UNIX_WORMDriveFixture wORMDrive; wORMDrive.Run(); }
	//if (IsTarget(s, "UNIX_WRRSchedulingElement")) { UNIX_WRRSchedulingElementFixture wRRSchedulingElement; wRRSchedulingElement.Run(); }
	//if (IsTarget(s, "UNIX_X509Certificate")) { UNIX_X509CertificateFixture x509Certificate; x509Certificate.Run(); }
	//if (IsTarget(s, "UNIX_X509CredentialFilterEntry")) { UNIX_X509CredentialFilterEntryFixture x509CredentialFilterEntry; x509CredentialFilterEntry.Run(); }
	//if (IsTarget(s, "UNIX_X509CRL")) { UNIX_X509CRLFixture x509CRL; x509CRL.Run(); }
	//if (IsTarget(s, "UNIX_Zone")) { UNIX_ZoneFixture zone; zone.Run(); }
	//if (IsTarget(s, "UNIX_ZoneCapabilities")) { UNIX_ZoneCapabilitiesFixture zoneCapabilities; zoneCapabilities.Run(); }
	//if (IsTarget(s, "UNIX_ZoneMembershipSettingData")) { UNIX_ZoneMembershipSettingDataFixture zoneMembershipSettingData; zoneMembershipSettingData.Run(); }
	//if (IsTarget(s, "UNIX_ZoneService")) { UNIX_ZoneServiceFixture zoneService; zoneService.Run(); }
	//if (IsTarget(s, "UNIX_ZoneSet")) { UNIX_ZoneSetFixture zoneSet; zoneSet.Run(); }
	//if (IsTarget(s, "UNIX_ApplicationSystem")) { UNIX_ApplicationSystemFixture applicationSystem; applicationSystem.Run(); }
	if (IsTarget(s, "UNIX_FileSystem")) { UNIX_FileSystemFixture fileSystem; fileSystem.Run(); }
	if (IsTarget(s, "UNIX_SoftwareElement")) { UNIX_SoftwareElementFixture softwareElement; softwareElement.Run(); }
	//if (IsTarget(s, "UNIX_SoftwareFeature")) { UNIX_SoftwareFeatureFixture softwareFeature; softwareFeature.Run(); }

}

