
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_CertificateAuthorityDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_CertificateAuthorityDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_CertificateAuthorityDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_CertificateAuthorityDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_CertificateAuthorityDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_CertificateAuthorityDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_CertificateAuthorityDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_CertificateAuthorityDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_CertificateAuthorityDeps_TRU64.h"
#else
#	include "UNIX_CertificateAuthorityDeps_STUB.h"
#endif
