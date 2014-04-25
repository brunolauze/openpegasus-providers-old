
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IKESecretIsNamedPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IKESecretIsNamedPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IKESecretIsNamedPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IKESecretIsNamedPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IKESecretIsNamedPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IKESecretIsNamedPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IKESecretIsNamedPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IKESecretIsNamedPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IKESecretIsNamedPrivate_TRU64.h"
#else
#	include "UNIX_IKESecretIsNamedPrivate_STUB.h"
#endif
