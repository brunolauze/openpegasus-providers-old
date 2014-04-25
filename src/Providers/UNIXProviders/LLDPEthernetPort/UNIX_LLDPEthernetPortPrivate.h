
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LLDPEthernetPortPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LLDPEthernetPortPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LLDPEthernetPortPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LLDPEthernetPortPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LLDPEthernetPortPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LLDPEthernetPortPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LLDPEthernetPortPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LLDPEthernetPortPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LLDPEthernetPortPrivate_TRU64.h"
#else
#	include "UNIX_LLDPEthernetPortPrivate_STUB.h"
#endif
