
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IKEProposalDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IKEProposalDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IKEProposalDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IKEProposalDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IKEProposalDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IKEProposalDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IKEProposalDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IKEProposalDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IKEProposalDeps_TRU64.h"
#else
#	include "UNIX_IKEProposalDeps_STUB.h"
#endif
