
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PickerStatDataDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PickerStatDataDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PickerStatDataDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PickerStatDataDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PickerStatDataDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PickerStatDataDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PickerStatDataDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PickerStatDataDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PickerStatDataDeps_TRU64.h"
#else
#	include "UNIX_PickerStatDataDeps_STUB.h"
#endif
