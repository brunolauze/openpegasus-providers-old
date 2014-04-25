
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ContainedProposalDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ContainedProposalDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ContainedProposalDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ContainedProposalDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ContainedProposalDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ContainedProposalDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ContainedProposalDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ContainedProposalDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ContainedProposalDeps_TRU64.h"
#else
#	include "UNIX_ContainedProposalDeps_STUB.h"
#endif
