
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_PickerLabelReaderDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_PickerLabelReaderDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_PickerLabelReaderDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_PickerLabelReaderDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_PickerLabelReaderDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_PickerLabelReaderDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_PickerLabelReaderDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_PickerLabelReaderDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_PickerLabelReaderDeps_TRU64.h"
#else
#	include "UNIX_PickerLabelReaderDeps_STUB.h"
#endif
