
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PickerStatInfoPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PickerStatInfoPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PickerStatInfoPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PickerStatInfoPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PickerStatInfoPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PickerStatInfoPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PickerStatInfoPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PickerStatInfoPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PickerStatInfoPrivate_TRU64.h"
#else
#	include "UNIX_PickerStatInfoPrivate_STUB.h"
#endif
