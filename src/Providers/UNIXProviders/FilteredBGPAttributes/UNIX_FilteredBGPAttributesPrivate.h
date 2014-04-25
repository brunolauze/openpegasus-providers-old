
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_FilteredBGPAttributesPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_FilteredBGPAttributesPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_FilteredBGPAttributesPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_FilteredBGPAttributesPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_FilteredBGPAttributesPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_FilteredBGPAttributesPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_FilteredBGPAttributesPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_FilteredBGPAttributesPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_FilteredBGPAttributesPrivate_TRU64.h"
#else
#	include "UNIX_FilteredBGPAttributesPrivate_STUB.h"
#endif
