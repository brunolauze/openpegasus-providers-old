
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_ContainedProposalPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_ContainedProposalPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_ContainedProposalPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_ContainedProposalPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_ContainedProposalPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_ContainedProposalPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_ContainedProposalPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_ContainedProposalPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_ContainedProposalPrivate_TRU64.h"
#else
#	include "UNIX_ContainedProposalPrivate_STUB.h"
#endif
