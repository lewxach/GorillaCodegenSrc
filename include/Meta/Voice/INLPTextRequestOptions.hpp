// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.INLPRequestOptions
#include "Meta/Voice/INLPRequestOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Forward declaring type: INLPTextRequestOptions
  class INLPTextRequestOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::INLPTextRequestOptions);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::INLPTextRequestOptions*, "Meta.Voice", "INLPTextRequestOptions");
// Type namespace: Meta.Voice
namespace Meta::Voice {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.INLPTextRequestOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class INLPTextRequestOptions/*, public ::Meta::Voice::INLPRequestOptions*/ {
    public:
    // Creating interface conversion operator: operator ::Meta::Voice::INLPRequestOptions
    operator ::Meta::Voice::INLPRequestOptions() noexcept {
      return *reinterpret_cast<::Meta::Voice::INLPRequestOptions*>(this);
    }
    // public System.String get_Text()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Text();
    // public System.Void set_Text(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Text(::StringW value);
  }; // Meta.Voice.INLPTextRequestOptions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::INLPTextRequestOptions::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::Voice::INLPTextRequestOptions::*)()>(&Meta::Voice::INLPTextRequestOptions::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::INLPTextRequestOptions*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::INLPTextRequestOptions::set_Text
// Il2CppName: set_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::INLPTextRequestOptions::*)(::StringW)>(&Meta::Voice::INLPTextRequestOptions::set_Text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::INLPTextRequestOptions*), "set_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
