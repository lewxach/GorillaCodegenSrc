// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections::LowLevel::Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Forward declaring type: UnsafeList`1<T>
  template<typename T>
  struct UnsafeList_1;
  // Forward declaring type: UnsafeText
  struct UnsafeText;
}
// Completed forward declares
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Forward declaring type: UnsafeTextExtensions
  class UnsafeTextExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*, "Unity.Collections.LowLevel.Unsafe", "UnsafeTextExtensions");
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.UnsafeTextExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class UnsafeTextExtensions : public ::Il2CppObject {
    public:
    // static public Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Byte> AsUnsafeListOfBytes(ref Unity.Collections.LowLevel.Unsafe.UnsafeText text)
    // Offset: 0x508B110
    static ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> AsUnsafeListOfBytes(ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeText> text);
    // static public Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Byte> AsUnsafeListOfBytesRO(Unity.Collections.LowLevel.Unsafe.UnsafeText text)
    // Offset: 0x508B158
    static ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> AsUnsafeListOfBytesRO(::Unity::Collections::LowLevel::Unsafe::UnsafeText text);
  }; // Unity.Collections.LowLevel.Unsafe.UnsafeTextExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytes
// Il2CppName: AsUnsafeListOfBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> (*)(ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeText>)>(&Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytes)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("Unity.Collections.LowLevel.Unsafe", "UnsafeText")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*), "AsUnsafeListOfBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytesRO
// Il2CppName: AsUnsafeListOfBytesRO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeText)>(&Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions::AsUnsafeListOfBytesRO)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("Unity.Collections.LowLevel.Unsafe", "UnsafeText")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::LowLevel::Unsafe::UnsafeTextExtensions*), "AsUnsafeListOfBytesRO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
