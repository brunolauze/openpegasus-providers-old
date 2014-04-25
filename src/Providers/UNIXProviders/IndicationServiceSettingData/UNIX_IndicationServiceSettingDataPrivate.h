
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_IndicationServiceSettingDataPrivate_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_IndicationServiceSettingDataPrivate_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_IndicationServiceSettingDataPrivate_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_IndicationServiceSettingDataPrivate_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_IndicationServiceSettingDataPrivate_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_IndicationServiceSettingDataPrivate_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_IndicationServiceSettingDataPrivate_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_IndicationServiceSettingDataPrivate_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_IndicationServiceSettingDataPrivate_TRU64.h"
#else
#	include "UNIX_IndicationServiceSettingDataPrivate_STUB.h"
#endif
