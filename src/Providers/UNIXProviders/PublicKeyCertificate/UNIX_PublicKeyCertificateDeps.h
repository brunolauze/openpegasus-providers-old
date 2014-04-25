
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PublicKeyCertificateDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PublicKeyCertificateDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PublicKeyCertificateDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PublicKeyCertificateDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PublicKeyCertificateDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PublicKeyCertificateDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PublicKeyCertificateDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PublicKeyCertificateDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PublicKeyCertificateDeps_TRU64.h"
#else
#	include "UNIX_PublicKeyCertificateDeps_STUB.h"
#endif
