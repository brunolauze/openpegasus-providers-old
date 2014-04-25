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


DIR = Providers/ManagedSystem/UNIXProviders/SystemAdministrator

include $(ROOT)/mak/config.mak

LIBRARY = UNIX_SystemAdministratorProvider

EXTRA_INCLUDES += -I/usr/local/include -I./..


SOURCES = \
	../CIMHelper.cpp \
	UNIX_SystemAdministratorMain.cpp \
	UNIX_SystemAdministrator.cpp \
	UNIX_SystemAdministratorProvider.cpp

ifeq ($(OS), aix)
	SOURCES += UNIX_SystemAdministrator_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += UNIX_SystemAdministrator_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += UNIX_SystemAdministrator_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += UNIX_SystemAdministrator_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += UNIX_SystemAdministrator_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += UNIX_SystemAdministrator_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_SystemAdministrator_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += UNIX_SystemAdministrator_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += UNIX_SystemAdministrator_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += UNIX_SystemAdministrator_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += UNIX_SystemAdministrator_STUB.cpp
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

SOURCES +=	\
	../UsersAccess/UNIX_UsersAccess.cpp \
	../UsersAccess/UNIX_UsersAccessProvider.cpp

ifeq ($(OS), aix)
	SOURCES += ../UsersAccess/UNIX_UsersAccess_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCES += ../UsersAccess/UNIX_UsersAccess_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCES += ../UsersAccess/UNIX_UsersAccess_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCES += ../UsersAccess/UNIX_UsersAccess_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCES += ../UsersAccess/UNIX_UsersAccess_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCES += ../UsersAccess/UNIX_UsersAccess_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCES += UNIX_UsersAccess_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCES += ../UsersAccess/UNIX_UsersAccess_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCES += ../UsersAccess/UNIX_UsersAccess_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCES += ../UsersAccess/UNIX_UsersAccess_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCES += ../UsersAccess/UNIX_UsersAccess_STUB.cpp
endif

SOURCES += \
	../Account/UNIX_Account.cpp \
	../Account/UNIX_AccountProvider.cpp

ifeq ($(OS), aix)
	SOURCE += ../Account/UNIX_Account_AIX.cpp
endif
ifeq ($(OS), darwin)
	SOURCE += ../Account/UNIX_Account_DARWIN.cpp
endif
ifeq ($(OS), freebsd)
	SOURCE += ../Account/UNIX_Account_FREEBSD.cpp
endif
ifeq ($(OS), hpux)
	SOURCE += ../Account/UNIX_Account_HPUX.cpp
endif
ifeq ($(OS), linux)
	SOURCE += ../Account/UNIX_Account_LINUX.cpp
endif
ifeq ($(OS), solaris)
	SOURCE += ../Account/UNIX_Account_SOLARIS.cpp
endif
ifeq ($(OS), tru64)
	SOURCE += ../Account/UNIX_Account_TRU64.cpp
endif
ifeq ($(OS), vms)
	SOURCE += ../Account/UNIX_Account_VMS.cpp
endif
ifeq ($(OS), win32)
	SOURCE += ../Account/UNIX_Account_WIN32.cpp
endif
ifeq ($(OS), zos)
	SOURCE += ../Account/UNIX_Account_ZOS.cpp
endif
ifeq (, $(filter aix,darwin,freebsd,hpux,linux,solaris,tru64,vms,win32,zos $(OS)))

else
	SOURCE += ../Account/UNIX_Account_STUB.cpp
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


