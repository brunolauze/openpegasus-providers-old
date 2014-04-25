
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CAHasPublicCertificateDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CAHasPublicCertificateDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CAHasPublicCertificateDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CAHasPublicCertificateDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CAHasPublicCertificateDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CAHasPublicCertificateDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CAHasPublicCertificateDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CAHasPublicCertificateDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CAHasPublicCertificateDeps_TRU64.h"
#else
#	include "UNIX_CAHasPublicCertificateDeps_STUB.h"
#endif
