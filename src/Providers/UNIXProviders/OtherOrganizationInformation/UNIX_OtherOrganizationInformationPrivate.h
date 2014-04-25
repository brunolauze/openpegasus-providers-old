
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_OtherOrganizationInformationPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_OtherOrganizationInformationPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_OtherOrganizationInformationPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_OtherOrganizationInformationPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_OtherOrganizationInformationPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_OtherOrganizationInformationPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_OtherOrganizationInformationPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_OtherOrganizationInformationPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_OtherOrganizationInformationPrivate_TRU64.h"
#else
#	include "UNIX_OtherOrganizationInformationPrivate_STUB.h"
#endif
