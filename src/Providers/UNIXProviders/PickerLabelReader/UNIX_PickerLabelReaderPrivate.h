
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PickerLabelReaderPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PickerLabelReaderPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PickerLabelReaderPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PickerLabelReaderPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PickerLabelReaderPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PickerLabelReaderPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PickerLabelReaderPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PickerLabelReaderPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PickerLabelReaderPrivate_TRU64.h"
#else
#	include "UNIX_PickerLabelReaderPrivate_STUB.h"
#endif
