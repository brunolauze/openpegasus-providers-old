
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_AcceptCredentialFromPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_AcceptCredentialFromPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_AcceptCredentialFromPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_AcceptCredentialFromPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_AcceptCredentialFromPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_AcceptCredentialFromPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_AcceptCredentialFromPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_AcceptCredentialFromPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_AcceptCredentialFromPrivate_TRU64.h"
#else
#	include "UNIX_AcceptCredentialFromPrivate_STUB.h"
#endif
