
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PickerElementDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PickerElementDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PickerElementDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PickerElementDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PickerElementDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PickerElementDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PickerElementDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PickerElementDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PickerElementDeps_TRU64.h"
#else
#	include "UNIX_PickerElementDeps_STUB.h"
#endif
