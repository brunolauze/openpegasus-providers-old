
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NamedAddressCollectionDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NamedAddressCollectionDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NamedAddressCollectionDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NamedAddressCollectionDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NamedAddressCollectionDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NamedAddressCollectionDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NamedAddressCollectionDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NamedAddressCollectionDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NamedAddressCollectionDeps_TRU64.h"
#else
#	include "UNIX_NamedAddressCollectionDeps_STUB.h"
#endif
