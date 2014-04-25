
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_NotaryVerifiesBiometricDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_NotaryVerifiesBiometricDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_NotaryVerifiesBiometricDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_NotaryVerifiesBiometricDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_NotaryVerifiesBiometricDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_NotaryVerifiesBiometricDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_NotaryVerifiesBiometricDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_NotaryVerifiesBiometricDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_NotaryVerifiesBiometricDeps_TRU64.h"
#else
#	include "UNIX_NotaryVerifiesBiometricDeps_STUB.h"
#endif
