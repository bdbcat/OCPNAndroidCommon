QT.core.enabled_features = properties animation textcodec big_codecs codecs commandlineparser textdate datestring filesystemiterator filesystemwatcher gestures itemmodel proxymodel identityproxymodel library mimetype processenvironment process statemachine qeventtransition regularexpression settings sharedmemory sortfilterproxymodel std-atomic64 stringlistmodel systemsemaphore temporaryfile timezone topleveldomain translation xmlstream xmlstreamreader xmlstreamwriter
QT.core.disabled_features = cxx11_future
QT.core.QT_CONFIG = properties animation textcodec big_codecs clock-monotonic codecs textdate datestring doubleconversion eventfd filesystemiterator filesystemwatcher gestures itemmodel proxymodel identityproxymodel inotify library mimetype process statemachine regularexpression settings sharedmemory sortfilterproxymodel stringlistmodel systemsemaphore temporaryfile translation xmlstream xmlstreamreader xmlstreamwriter
QT.core.exports = 
QT.core_private.enabled_features = clock-gettime datetimeparser dlopen doubleconversion futimens getauxval inotify poll_poll sha3-fast
QT.core_private.disabled_features = etw futimes getentropy glib gnu-libiconv icu posix-libiconv iconv journald linkat lttng poll_ppoll poll_pollts poll_select renameat2 slog2 statx syslog system-doubleconversion system-pcre2
QT.core_private.libraries = librt libdl libatomic
QMAKE_LIBS_LIBRT = 
QMAKE_LIBS_LIBDL = 
QMAKE_LIBS_LIBATOMIC = 
CONFIG += pcre2