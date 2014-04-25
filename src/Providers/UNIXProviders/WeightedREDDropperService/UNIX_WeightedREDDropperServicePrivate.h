
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_WeightedREDDropperServicePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_WeightedREDDropperServicePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_WeightedREDDropperServicePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_WeightedREDDropperServicePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_WeightedREDDropperServicePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_WeightedREDDropperServicePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_WeightedREDDropperServicePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_WeightedREDDropperServicePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_WeightedREDDropperServicePrivate_TRU64.h"
#else
#	include "UNIX_WeightedREDDropperServicePrivate_STUB.h"
#endif
