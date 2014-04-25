
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_SubProfileRequiresProfilePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_SubProfileRequiresProfilePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_SubProfileRequiresProfilePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_SubProfileRequiresProfilePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_SubProfileRequiresProfilePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_SubProfileRequiresProfilePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_SubProfileRequiresProfilePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_SubProfileRequiresProfilePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_SubProfileRequiresProfilePrivate_TRU64.h"
#else
#	include "UNIX_SubProfileRequiresProfilePrivate_STUB.h"
#endif
