host_build {
    QT_CPU_FEATURES.x86_64 = mmx sse sse2
} else {
    QT_CPU_FEATURES.arm64 = neon
}
QT.global_private.enabled_features = private_tests android-style-assets alloca_h alloca gui network posix_fallocate reduce_exports sql system-zlib testlib widgets xml
QT.global_private.disabled_features = sse2 alloca_malloc_h avx2 dbus dbus-linked gc_binaries libudev reduce_relocations release_tools stack-protector-strong
QT_COORD_TYPE = double
QMAKE_LIBS_ZLIB = /home/dsr/Android/Sdk/ndk-bundle/platforms/android-21/arch-arm64/usr/lib/libz.so
CONFIG -= precompile_header
CONFIG += cross_compile compile_examples headersclean neon
QT_BUILD_PARTS += libs
