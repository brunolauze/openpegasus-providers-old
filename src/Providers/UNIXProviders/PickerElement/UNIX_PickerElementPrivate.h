
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PickerElementPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PickerElementPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PickerElementPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PickerElementPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PickerElementPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PickerElementPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PickerElementPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PickerElementPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PickerElementPrivate_TRU64.h"
#else
#	include "UNIX_PickerElementPrivate_STUB.h"
#endif
