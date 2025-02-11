// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Span`1<T>
  template<typename T>
  struct Span_1;
}
// Completed forward declares
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Forward declaring type: FastNumberWriter
  class FastNumberWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cysharp::Text::FastNumberWriter);
DEFINE_IL2CPP_ARG_TYPE(::Cysharp::Text::FastNumberWriter*, "Cysharp.Text", "FastNumberWriter");
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Cysharp.Text.FastNumberWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class FastNumberWriter : public ::Il2CppObject {
    public:
    // static public System.Boolean TryWriteInt64(System.Span`1<System.Char> buffer, out System.Int32 charsWritten, System.Int64 value)
    // Offset: 0x575F82C
    static bool TryWriteInt64(::System::Span_1<::Il2CppChar> buffer, ByRef<int> charsWritten, int64_t value);
    // static public System.Boolean TryWriteUInt64(System.Span`1<System.Char> buffer, out System.Int32 charsWritten, System.UInt64 value)
    // Offset: 0x575FE10
    static bool TryWriteUInt64(::System::Span_1<::Il2CppChar> buffer, ByRef<int> charsWritten, uint64_t value);
  }; // Cysharp.Text.FastNumberWriter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cysharp::Text::FastNumberWriter::TryWriteInt64
// Il2CppName: TryWriteInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Span_1<::Il2CppChar>, ByRef<int>, int64_t)>(&Cysharp::Text::FastNumberWriter::TryWriteInt64)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* charsWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::FastNumberWriter*), "TryWriteInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, charsWritten, value});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::FastNumberWriter::TryWriteUInt64
// Il2CppName: TryWriteUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Span_1<::Il2CppChar>, ByRef<int>, uint64_t)>(&Cysharp::Text::FastNumberWriter::TryWriteUInt64)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* charsWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::FastNumberWriter*), "TryWriteUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, charsWritten, value});
  }
};
