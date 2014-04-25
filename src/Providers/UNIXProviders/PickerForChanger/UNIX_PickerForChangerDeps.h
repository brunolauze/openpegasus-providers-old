
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PickerForChangerDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PickerForChangerDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PickerForChangerDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PickerForChangerDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PickerForChangerDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PickerForChangerDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PickerForChangerDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PickerForChangerDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PickerForChangerDeps_TRU64.h"
#else
#	include "UNIX_PickerForChangerDeps_STUB.h"
#endif
