// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ITickSystemPost
  class ITickSystemPost;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ITickSystemPost);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ITickSystemPost*, "", "ITickSystemPost");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ITickSystemPost
  // [TokenAttribute] Offset: FFFFFFFF
  class ITickSystemPost {
    public:
    // public System.Boolean get_PostTickRunning()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_PostTickRunning();
    // public System.Void set_PostTickRunning(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_PostTickRunning(bool value);
    // public System.Void PostTick()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PostTick();
  }; // ITickSystemPost
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ITickSystemPost::get_PostTickRunning
// Il2CppName: get_PostTickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ITickSystemPost::*)()>(&GlobalNamespace::ITickSystemPost::get_PostTickRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ITickSystemPost*), "get_PostTickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ITickSystemPost::set_PostTickRunning
// Il2CppName: set_PostTickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ITickSystemPost::*)(bool)>(&GlobalNamespace::ITickSystemPost::set_PostTickRunning)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ITickSystemPost*), "set_PostTickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ITickSystemPost::PostTick
// Il2CppName: PostTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ITickSystemPost::*)()>(&GlobalNamespace::ITickSystemPost::PostTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ITickSystemPost*), "PostTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};