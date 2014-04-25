
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_X509CertificateDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_X509CertificateDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_X509CertificateDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_X509CertificateDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_X509CertificateDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_X509CertificateDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_X509CertificateDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_X509CertificateDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_X509CertificateDeps_TRU64.h"
#else
#	include "UNIX_X509CertificateDeps_STUB.h"
#endif
