
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CAHasPublicCertificatePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CAHasPublicCertificatePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CAHasPublicCertificatePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CAHasPublicCertificatePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CAHasPublicCertificatePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CAHasPublicCertificatePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CAHasPublicCertificatePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CAHasPublicCertificatePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CAHasPublicCertificatePrivate_TRU64.h"
#else
#	include "UNIX_CAHasPublicCertificatePrivate_STUB.h"
#endif
