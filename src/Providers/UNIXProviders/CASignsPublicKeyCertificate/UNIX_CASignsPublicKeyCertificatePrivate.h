
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CASignsPublicKeyCertificatePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CASignsPublicKeyCertificatePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CASignsPublicKeyCertificatePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CASignsPublicKeyCertificatePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CASignsPublicKeyCertificatePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CASignsPublicKeyCertificatePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CASignsPublicKeyCertificatePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CASignsPublicKeyCertificatePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CASignsPublicKeyCertificatePrivate_TRU64.h"
#else
#	include "UNIX_CASignsPublicKeyCertificatePrivate_STUB.h"
#endif
