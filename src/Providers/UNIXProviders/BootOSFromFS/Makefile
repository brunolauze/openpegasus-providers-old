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

ROOT = ../../../../..


DIR = Providers/ManagedSystem/UNIXProviders/BootOSFromFS

include $(ROOT)/mak/config.mak

LIBRARY = UNIX_BootOSFromFSProvider

EXTRA_INCLUDES += -I/usr/local/include -I./..


SOURCES = \
	../CIMHelper.cpp \
	UNIX_BootOSFromFSMain.cpp \
	UNIX_BootOSFromFS.cpp \
	UNIX_BootOSFromFSProvider.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_BootOSFromFS_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_BootOSFromFS_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_BootOSFromFS_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_BootOSFromFS_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_BootOSFromFS_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_BootOSFromFS_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_BootOSFromFS_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_BootOSFromFS_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_BootOSFromFS_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_BootOSFromFS_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_BootOSFromFS_STUB.cpp
endif


SOURCES += \
	../OperatingSystem/UNIX_OperatingSystem.cpp \
	../OperatingSystem/UNIX_OperatingSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../OperatingSystem/UNIX_OperatingSystem_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCE += ../OperatingSystem/UNIX_OperatingSystem_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCE += ../OperatingSystem/UNIX_OperatingSystem_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCE += ../OperatingSystem/UNIX_OperatingSystem_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCE += ../OperatingSystem/UNIX_OperatingSystem_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCE += ../OperatingSystem/UNIX_OperatingSystem_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCE += ../OperatingSystem/UNIX_OperatingSystem_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCE += ../OperatingSystem/UNIX_OperatingSystem_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCE += ../OperatingSystem/UNIX_OperatingSystem_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCE += ../OperatingSystem/UNIX_OperatingSystem_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../OperatingSystem/UNIX_OperatingSystem_STUB.cpp
endif


SOURCES += \
	../LocalFileSystem/UNIX_LocalFileSystem.cpp \
	../LocalFileSystem/UNIX_LocalFileSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../LocalFileSystem/UNIX_LocalFileSystem_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCE += ../LocalFileSystem/UNIX_LocalFileSystem_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCE += ../LocalFileSystem/UNIX_LocalFileSystem_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCE += ../LocalFileSystem/UNIX_LocalFileSystem_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCE += ../LocalFileSystem/UNIX_LocalFileSystem_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCE += ../LocalFileSystem/UNIX_LocalFileSystem_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCE += ../LocalFileSystem/UNIX_LocalFileSystem_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCE += ../LocalFileSystem/UNIX_LocalFileSystem_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCE += ../LocalFileSystem/UNIX_LocalFileSystem_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCE += ../LocalFileSystem/UNIX_LocalFileSystem_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../LocalFileSystem/UNIX_LocalFileSystem_STUB.cpp
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
	-lkvm \
	-lcam

include $(ROOT)/mak/dynamic-library.mak


