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
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ISpanFormattable
  class ISpanFormattable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ISpanFormattable);
DEFINE_IL2CPP_ARG_TYPE(::System::ISpanFormattable*, "System", "ISpanFormattable");
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ISpanFormattable
  // [TokenAttribute] Offset: FFFFFFFF
  class ISpanFormattable {
    public:
    // public System.Boolean TryFormat(System.Span`1<System.Char> destination, out System.Int32 charsWritten, System.ReadOnlySpan`1<System.Char> format, System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryFormat(::System::Span_1<::Il2CppChar> destination, ByRef<int> charsWritten, ::System::ReadOnlySpan_1<::Il2CppChar> format, ::System::IFormatProvider* provider);
  }; // System.ISpanFormattable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ISpanFormattable::TryFormat
// Il2CppName: TryFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ISpanFormattable::*)(::System::Span_1<::Il2CppChar>, ByRef<int>, ::System::ReadOnlySpan_1<::Il2CppChar>, ::System::IFormatProvider*)>(&System::ISpanFormattable::TryFormat)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* charsWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* format = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ISpanFormattable*), "TryFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, charsWritten, format, provider});
  }
};