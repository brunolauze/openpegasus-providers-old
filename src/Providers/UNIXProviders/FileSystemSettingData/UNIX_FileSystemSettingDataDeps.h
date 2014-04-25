
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FileSystemSettingDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FileSystemSettingDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FileSystemSettingDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FileSystemSettingDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FileSystemSettingDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FileSystemSettingDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FileSystemSettingDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FileSystemSettingDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FileSystemSettingDataDeps_TRU64.h"
#else
#	include "UNIX_FileSystemSettingDataDeps_STUB.h"
#endif
