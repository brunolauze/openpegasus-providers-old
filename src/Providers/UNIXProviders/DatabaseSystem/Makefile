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


DIR = Providers/ManagedSystem/UNIXProviders/DatabaseSystem

include $(ROOT)/mak/config.mak

LIBRARY = UNIX_DatabaseSystemProvider

EXTRA_INCLUDES += -I/usr/local/include -I./..


SOURCES = \
	../CIMHelper.cpp \
	UNIX_DatabaseSystemMain.cpp \
	UNIX_DatabaseSystem.cpp \
	UNIX_DatabaseSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_DatabaseSystem_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_DatabaseSystem_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_DatabaseSystem_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_DatabaseSystem_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_DatabaseSystem_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_DatabaseSystem_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_DatabaseSystem_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_DatabaseSystem_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_DatabaseSystem_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_DatabaseSystem_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_DatabaseSystem_STUB.cpp
endif


SOURCES += \
	../ApplicationSystem/UNIX_ApplicationSystem.cpp \
	../ApplicationSystem/UNIX_ApplicationSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../ApplicationSystem/UNIX_ApplicationSystem_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCE += ../ApplicationSystem/UNIX_ApplicationSystem_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCE += ../ApplicationSystem/UNIX_ApplicationSystem_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCE += ../ApplicationSystem/UNIX_ApplicationSystem_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCE += ../ApplicationSystem/UNIX_ApplicationSystem_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCE += ../ApplicationSystem/UNIX_ApplicationSystem_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCE += ../ApplicationSystem/UNIX_ApplicationSystem_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCE += ../ApplicationSystem/UNIX_ApplicationSystem_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCE += ../ApplicationSystem/UNIX_ApplicationSystem_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCE += ../ApplicationSystem/UNIX_ApplicationSystem_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../ApplicationSystem/UNIX_ApplicationSystem_STUB.cpp
endif


SOURCES += \
	../SoftwareElement/UNIX_SoftwareElement.cpp \
	../SoftwareElement/UNIX_SoftwareElementProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../SoftwareElement/UNIX_SoftwareElement_STUB.cpp
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
	-L/usr/local/lib -lpkg \
	-lkvm \
	-lcam

include $(ROOT)/mak/dynamic-library.mak


