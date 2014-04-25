
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_DiskPartitionBasedOnVolumeDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_DiskPartitionBasedOnVolumeDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_DiskPartitionBasedOnVolumeDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_DiskPartitionBasedOnVolumeDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_DiskPartitionBasedOnVolumeDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_DiskPartitionBasedOnVolumeDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_DiskPartitionBasedOnVolumeDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_DiskPartitionBasedOnVolumeDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_DiskPartitionBasedOnVolumeDeps_TRU64.h"
#else
#	include "UNIX_DiskPartitionBasedOnVolumeDeps_STUB.h"
#endif
