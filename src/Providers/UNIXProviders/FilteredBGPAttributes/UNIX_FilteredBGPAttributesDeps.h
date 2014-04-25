
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FilteredBGPAttributesDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FilteredBGPAttributesDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FilteredBGPAttributesDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FilteredBGPAttributesDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FilteredBGPAttributesDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FilteredBGPAttributesDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FilteredBGPAttributesDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FilteredBGPAttributesDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FilteredBGPAttributesDeps_TRU64.h"
#else
#	include "UNIX_FilteredBGPAttributesDeps_STUB.h"
#endif
