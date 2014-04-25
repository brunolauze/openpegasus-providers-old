#//%LICENSE////////////////////////////////////////////////////////////////
#//
#// Licensed to The Open Group (TOG) under one or more contributor license
#// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
#// this work for additional information regarding copyright ownership.
#// Each contributor licenses this file to you under the OpenPegasus Open
#// Source License; you may not use this file except in compliance with the
#// License.
#//
#// Permission is hereby granted, free of charge, to any person obtaining a
#// copy of this software and associated documentation files (the "Software"),
#// to deal in the Software without restriction, including without limitation
#// the rights to use, copy, modify, merge, publish, distribute, sublicense,
#// and/or sell copies of the Software, and to permit persons to whom the
#// Software is furnished to do so, subject to the following conditions:
#//
#// The above copyright notice and this permission notice shall be included
#// in all copies or substantial portions of the Software.
#//
#// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
#// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
#// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
#// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
#// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
#// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
#// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#//
#//////////////////////////////////////////////////////////////////////////
#//
#//%/////////////////////////////////////////////////////////////////////////

ROOT = ../../../..


DIR = Providers/UNIXProviders/SystemBIOS

include $(ROOT)/mak/config.mak

LIBRARY = UNIX_SystemBIOSProvider

EXTRA_INCLUDES += -I/usr/local/include -I./..


SOURCES = \
	../CIMHelper.cpp \
	../smbios.cpp \
	UNIX_SystemBIOSMain.cpp \
	UNIX_SystemBIOS.cpp \
	UNIX_SystemBIOSProvider.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_SystemBIOS_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_SystemBIOS_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_SystemBIOS_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_SystemBIOS_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_SystemBIOS_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_SystemBIOS_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_SystemBIOS_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_SystemBIOS_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_SystemBIOS_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_SystemBIOS_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_SystemBIOS_STUB.cpp
endif


SOURCES += \
	../VirtualComputerSystem/UNIX_VirtualComputerSystem.cpp \
	../VirtualComputerSystem/UNIX_VirtualComputerSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../VirtualComputerSystem/UNIX_VirtualComputerSystem_STUB.cpp
endif


SOURCES += \
	../ComputerSystem/UNIX_ComputerSystem.cpp \
	../ComputerSystem/UNIX_ComputerSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../ComputerSystem/UNIX_ComputerSystem_STUB.cpp
endif


SOURCES += \
	../Cluster/UNIX_Cluster.cpp \
	../Cluster/UNIX_ClusterProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../Cluster/UNIX_Cluster_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCE += ../Cluster/UNIX_Cluster_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCE += ../Cluster/UNIX_Cluster_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCE += ../Cluster/UNIX_Cluster_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCE += ../Cluster/UNIX_Cluster_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCE += ../Cluster/UNIX_Cluster_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCE += ../Cluster/UNIX_Cluster_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCE += ../Cluster/UNIX_Cluster_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCE += ../Cluster/UNIX_Cluster_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCE += ../Cluster/UNIX_Cluster_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../Cluster/UNIX_Cluster_STUB.cpp
endif


SOURCES += \
	../BIOSElement/UNIX_BIOSElement.cpp \
	../BIOSElement/UNIX_BIOSElementProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../BIOSElement/UNIX_BIOSElement_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCE += ../BIOSElement/UNIX_BIOSElement_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCE += ../BIOSElement/UNIX_BIOSElement_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCE += ../BIOSElement/UNIX_BIOSElement_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCE += ../BIOSElement/UNIX_BIOSElement_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCE += ../BIOSElement/UNIX_BIOSElement_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCE += ../BIOSElement/UNIX_BIOSElement_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCE += ../BIOSElement/UNIX_BIOSElement_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCE += ../BIOSElement/UNIX_BIOSElement_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCE += ../BIOSElement/UNIX_BIOSElement_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../BIOSElement/UNIX_BIOSElement_STUB.cpp
endif


EXTRA_LIBRARIES = \
	-lpegprovider \
	-lpegclient \
	-lpegcommon \
	-lpegquerycommon \
	-lpegqueryexpression \
	-lpegcql \
	-lpegwql

EXTRA_LIBRARIES += \
	-pthread \
	-lutil \
	-lgeom \
	-ljail \
	-lkvm \
	-lcam

include $(ROOT)/mak/dynamic-library.mak


