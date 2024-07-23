// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cysharp.Text.Utf16FormatSegment
#include "Cysharp/Text/Utf16FormatSegment.hpp"
// Including type: Cysharp.Text.Utf8FormatSegment
#include "Cysharp/Text/Utf8FormatSegment.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Forward declaring type: PreparedFormatHelper
  class PreparedFormatHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cysharp::Text::PreparedFormatHelper);
DEFINE_IL2CPP_ARG_TYPE(::Cysharp::Text::PreparedFormatHelper*, "Cysharp.Text", "PreparedFormatHelper");
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Cysharp.Text.PreparedFormatHelper
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  class PreparedFormatHelper : public ::Il2CppObject {
    public:
    // static Cysharp.Text.Utf16FormatSegment[] Utf16Parse(System.String format)
    // Offset: 0x5760CC8
    static ::ArrayW<::Cysharp::Text::Utf16FormatSegment> Utf16Parse(::StringW format);
    // static Cysharp.Text.Utf8FormatSegment[] Utf8Parse(System.String format, out System.Byte[] utf8buffer)
    // Offset: 0x5760FD0
    static ::ArrayW<::Cysharp::Text::Utf8FormatSegment> Utf8Parse(::StringW format, ByRef<::ArrayW<uint8_t>> utf8buffer);
  }; // Cysharp.Text.PreparedFormatHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cysharp::Text::PreparedFormatHelper::Utf16Parse
// Il2CppName: Utf16Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Cysharp::Text::Utf16FormatSegment> (*)(::StringW)>(&Cysharp::Text::PreparedFormatHelper::Utf16Parse)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::PreparedFormatHelper*), "Utf16Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::PreparedFormatHelper::Utf8Parse
// Il2CppName: Utf8Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Cysharp::Text::Utf8FormatSegment> (*)(::StringW, ByRef<::ArrayW<uint8_t>>)>(&Cysharp::Text::PreparedFormatHelper::Utf8Parse)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* utf8buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::PreparedFormatHelper*), "Utf8Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, utf8buffer});
  }
};