
add_library(Qt5::QtVirtualKeyboardPinyinPlugin MODULE IMPORTED)

_populate_VirtualKeyboard_plugin_properties(QtVirtualKeyboardPinyinPlugin RELEASE "virtualkeyboard/libqtvirtualkeyboard_pinyin.so")

list(APPEND Qt5VirtualKeyboard_PLUGINS Qt5::QtVirtualKeyboardPinyinPlugin)
