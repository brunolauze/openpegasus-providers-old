
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PickerStatInfoDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PickerStatInfoDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PickerStatInfoDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PickerStatInfoDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PickerStatInfoDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PickerStatInfoDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PickerStatInfoDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PickerStatInfoDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PickerStatInfoDeps_TRU64.h"
#else
#	include "UNIX_PickerStatInfoDeps_STUB.h"
#endif
