
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IPsecProposalDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IPsecProposalDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IPsecProposalDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IPsecProposalDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IPsecProposalDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IPsecProposalDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IPsecProposalDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IPsecProposalDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IPsecProposalDeps_TRU64.h"
#else
#	include "UNIX_IPsecProposalDeps_STUB.h"
#endif
