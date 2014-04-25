
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_LLDPEthernetPortDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_LLDPEthernetPortDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_LLDPEthernetPortDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_LLDPEthernetPortDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_LLDPEthernetPortDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_LLDPEthernetPortDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_LLDPEthernetPortDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_LLDPEthernetPortDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_LLDPEthernetPortDeps_TRU64.h"
#else
#	include "UNIX_LLDPEthernetPortDeps_STUB.h"
#endif
