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


DIR = Providers/UNIXProviders/Mount

include $(ROOT)/mak/config.mak

LIBRARY = UNIX_MountProvider

EXTRA_INCLUDES += -I/usr/local/include -I./..


SOURCES = \
	../CIMHelper.cpp \
	UNIX_MountMain.cpp \
	UNIX_Mount.cpp \
	UNIX_MountProvider.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_Mount_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_Mount_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_Mount_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_Mount_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_Mount_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_Mount_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_Mount_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_Mount_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_Mount_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_Mount_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_Mount_STUB.cpp
endif


SOURCES += \
	../FileSystem/UNIX_FileSystem.cpp \
	../FileSystem/UNIX_FileSystemProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../FileSystem/UNIX_FileSystem_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCE += ../FileSystem/UNIX_FileSystem_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCE += ../FileSystem/UNIX_FileSystem_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCE += ../FileSystem/UNIX_FileSystem_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCE += ../FileSystem/UNIX_FileSystem_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCE += ../FileSystem/UNIX_FileSystem_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCE += ../FileSystem/UNIX_FileSystem_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCE += ../FileSystem/UNIX_FileSystem_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCE += ../FileSystem/UNIX_FileSystem_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCE += ../FileSystem/UNIX_FileSystem_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../FileSystem/UNIX_FileSystem_STUB.cpp
endif


SOURCES += \
	../Directory/UNIX_Directory.cpp \
	../Directory/UNIX_DirectoryProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../Directory/UNIX_Directory_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCE += ../Directory/UNIX_Directory_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCE += ../Directory/UNIX_Directory_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCE += ../Directory/UNIX_Directory_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCE += ../Directory/UNIX_Directory_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCE += ../Directory/UNIX_Directory_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCE += ../Directory/UNIX_Directory_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCE += ../Directory/UNIX_Directory_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCE += ../Directory/UNIX_Directory_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCE += ../Directory/UNIX_Directory_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../Directory/UNIX_Directory_STUB.cpp
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


