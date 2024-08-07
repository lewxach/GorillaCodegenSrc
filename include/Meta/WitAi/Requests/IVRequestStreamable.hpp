// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: IVRequestStreamable
  class IVRequestStreamable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::IVRequestStreamable);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::IVRequestStreamable*, "Meta.WitAi.Requests", "IVRequestStreamable");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.IVRequestStreamable
  // [TokenAttribute] Offset: FFFFFFFF
  class IVRequestStreamable {
    public:
    // public System.Boolean get_IsStreamReady()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsStreamReady();
    // public System.Boolean get_IsStreamComplete()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsStreamComplete();
  }; // Meta.WitAi.Requests.IVRequestStreamable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::IVRequestStreamable::get_IsStreamReady
// Il2CppName: get_IsStreamReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Requests::IVRequestStreamable::*)()>(&Meta::WitAi::Requests::IVRequestStreamable::get_IsStreamReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::IVRequestStreamable*), "get_IsStreamReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::IVRequestStreamable::get_IsStreamComplete
// Il2CppName: get_IsStreamComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Requests::IVRequestStreamable::*)()>(&Meta::WitAi::Requests::IVRequestStreamable::get_IsStreamComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::IVRequestStreamable*), "get_IsStreamComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
