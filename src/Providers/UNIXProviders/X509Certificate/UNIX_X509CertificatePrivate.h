
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_X509CertificatePrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_X509CertificatePrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_X509CertificatePrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_X509CertificatePrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_X509CertificatePrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_X509CertificatePrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_X509CertificatePrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_X509CertificatePrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_X509CertificatePrivate_TRU64.h"
#else
#	include "UNIX_X509CertificatePrivate_STUB.h"
#endif
