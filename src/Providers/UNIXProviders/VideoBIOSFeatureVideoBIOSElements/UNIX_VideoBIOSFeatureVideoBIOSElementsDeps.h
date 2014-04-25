
#if defined(PEGASUS_OS_HPUX)
#	include "UNIX_VideoBIOSFeatureVideoBIOSElementsDeps_HPUX.h"
#elif defined(PEGASUS_OS_LINUX)
#	include "UNIX_VideoBIOSFeatureVideoBIOSElementsDeps_LINUX.h"
#elif defined(PEGASUS_OS_DARWIN)
#	include "UNIX_VideoBIOSFeatureVideoBIOSElementsDeps_DARWIN.h"
#elif defined(PEGASUS_OS_AIX)
#	include "UNIX_VideoBIOSFeatureVideoBIOSElementsDeps_AIX.h"
#elif defined(PEGASUS_OS_FREEBSD)
#	include "UNIX_VideoBIOSFeatureVideoBIOSElementsDeps_FREEBSD.h"
#elif defined(PEGASUS_OS_SOLARIS)
#	include "UNIX_VideoBIOSFeatureVideoBIOSElementsDeps_SOLARIS.h"
#elif defined(PEGASUS_OS_ZOS)
#	include "UNIX_VideoBIOSFeatureVideoBIOSElementsDeps_ZOS.h"
#elif defined(PEGASUS_OS_VMS)
#	include "UNIX_VideoBIOSFeatureVideoBIOSElementsDeps_VMS.h"
#elif defined(PEGASUS_OS_TRU64)
#	include "UNIX_VideoBIOSFeatureVideoBIOSElementsDeps_TRU64.h"
#else
#	include "UNIX_VideoBIOSFeatureVideoBIOSElementsDeps_STUB.h"
#endif
