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


DIR = Providers/ManagedSystem/UNIXProviders/SystemAdministratorGroup

include $(ROOT)/mak/config.mak

LIBRARY = UNIX_SystemAdministratorGroupProvider

EXTRA_INCLUDES += -I/usr/local/include -I./..


SOURCES = \
	../CIMHelper.cpp \
	UNIX_SystemAdministratorGroupMain.cpp \
	UNIX_SystemAdministratorGroup.cpp \
	UNIX_SystemAdministratorGroupProvider.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_SystemAdministratorGroup_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_SystemAdministratorGroup_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_SystemAdministratorGroup_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_SystemAdministratorGroup_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_SystemAdministratorGroup_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_SystemAdministratorGroup_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_SystemAdministratorGroup_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_SystemAdministratorGroup_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_SystemAdministratorGroup_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_SystemAdministratorGroup_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_SystemAdministratorGroup_STUB.cpp
endif

SOURCES += 	\
	../ComputerSystem/UNIX_ComputerSystem.cpp \
	../ComputerSystem/UNIX_ComputerSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCES += ../ComputerSystem/UNIX_ComputerSystem_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += ../ComputerSystem/UNIX_ComputerSystem_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += ../ComputerSystem/UNIX_ComputerSystem_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += ../ComputerSystem/UNIX_ComputerSystem_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += ../ComputerSystem/UNIX_ComputerSystem_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += ../ComputerSystem/UNIX_ComputerSystem_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += ../ComputerSystem/UNIX_ComputerSystem_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += ../ComputerSystem/UNIX_ComputerSystem_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += ../ComputerSystem/UNIX_ComputerSystem_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += ../ComputerSystem/UNIX_ComputerSystem_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += ../ComputerSystem/UNIX_ComputerSystem_STUB.cpp
endif


SOURCES+= \
	../Group/UNIX_Group.cpp \
	../Group/UNIX_GroupProvider.cpp

ifeq ($(OS), aix)
	SOURCES += ../Group/UNIX_Group_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += ../Group/UNIX_Group_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += ../Group/UNIX_Group_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += ../Group/UNIX_Group_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += ../Group/UNIX_Group_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += ../Group/UNIX_Group_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += ../Group/UNIX_Group_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += ../Group/UNIX_Group_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += ../Group/UNIX_Group_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += ../Group/UNIX_Group_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += ../Group/UNIX_Group_STUB.cpp
endif

LIBRARIES = \
	pegprovider \
	pegclient \
	pegcommon \
	pegquerycommon \
	pegqueryexpression \
	pegcql \
	pegwql

EXTRA_LIBRARIES = \
	-pthread \
	-lutil \
	-lgeom \
	-lkvm \
	-lcam

include $(ROOT)/mak/dynamic-library.mak


