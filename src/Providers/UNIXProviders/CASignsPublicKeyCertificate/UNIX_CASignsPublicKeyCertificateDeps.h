
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CASignsPublicKeyCertificateDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CASignsPublicKeyCertificateDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CASignsPublicKeyCertificateDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CASignsPublicKeyCertificateDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CASignsPublicKeyCertificateDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CASignsPublicKeyCertificateDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CASignsPublicKeyCertificateDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CASignsPublicKeyCertificateDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CASignsPublicKeyCertificateDeps_TRU64.h"
#else
#	include "UNIX_CASignsPublicKeyCertificateDeps_STUB.h"
#endif
