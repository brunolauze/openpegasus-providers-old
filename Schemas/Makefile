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
# Makefile builds a ManagedSystem Namespace
# Note: For best results, ensure that the ManagedSystem namespace does not
#       exist before calling this Makefile.

ROOT = ..
include $(ROOT)/mak/config.mak
include $(ROOT)/mak/configschema.mak

# The following two variables determine the version of the Schema to
# be loaded into the Managed System namespace.
# Update the following two environment variables to change the version.

PG_SCHEMA_VER=20
PG_SCHEMA_DIR=VER$(PG_SCHEMA_VER)
PG_MOF_PATH=$(ROOT)/Schemas
FILE_PREFIX=UNIX

# The following defines are used to determine the version of
# the platform specific schema to be loaded into Managed System namespace.

MANAGEDSYSTEM_NS_SUPPORTED = true

ifeq ($(OS), HPUX)
EXTENDED_MANAGEDSYSTEM_NS_SUPPORTED = true
FILE_PREFIX=HPUX
endif

ifeq ($(OS), VMS)
#EXTENDED_MANAGEDSYSTEM_NS_SUPPORTED = true
FILE_PREFIX=HPUX
endif

ifeq ($(OS), linux)
  ifndef PEGASUS_DISABLE_PROV_USERCTXT
    SET_USER_CONTEXT_TO_REQUESTOR = true
  endif
endif


all:
ifeq ($(MANAGEDSYSTEM_NS_SUPPORTED),true)
	@ $(ECHO) +++++ Loading UNIX_ManagedSystemSchema$(PG_SCHEMA_VER) into $(MANAGEDSYSTEMNS) namespace ...
	@ $(ECHO) Repository Name: $(REPOSITORY_NAME)
	@ $(ECHO) Repository Mode: $(REPOSITORY_MODE)
	@ $(ECHO) Mof Path:        $(PG_MOF_PATH)
	#@ $(CIMMOFCLI) "-R$(REPOSITORY_DIR)" "-N$(REPOSITORY_NAME)" "-M$(REPOSITORY_MODE)" "-I$(PG_MOF_PATH)" "-n$(MANAGEDSYSTEMNS)" "$(PG_MOF_PATH)/UNIX_ManagedSystemSchema$(PG_SCHEMA_VER).mof"
	#@ $(ECHO) +++++ Registering Providers for UNIX_ManagedSystemSchema$(PG_SCHEMA_VER) ...
	#@ $(CIMMOFCLI) "-R$(REPOSITORY_DIR)" "-N$(REPOSITORY_NAME)" "-M$(REPOSITORY_MODE)" "-I$(PG_MOF_PATH)" "-n$(INTEROPNS)" "$(PG_MOF_PATH)/UNIX_ManagedSystemSchema$(PG_SCHEMA_VER)R.mof"
	
endif
