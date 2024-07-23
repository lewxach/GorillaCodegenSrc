// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: XSceneRefTarget
  class XSceneRefTarget;
  // Forward declaring type: SceneIndex
  struct SceneIndex;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: XSceneRefGlobalHub
  class XSceneRefGlobalHub;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::XSceneRefGlobalHub);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XSceneRefGlobalHub*, "", "XSceneRefGlobalHub");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: XSceneRefGlobalHub
  // [TokenAttribute] Offset: FFFFFFFF
  class XSceneRefGlobalHub : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.Int32,XSceneRefTarget>> registry
    static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::XSceneRefTarget*>*>* _get_registry();
    // Set static field: static private System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.Int32,XSceneRefTarget>> registry
    static void _set_registry(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::XSceneRefTarget*>*>* value);
    // static public System.Void Register(System.Int32 ID, XSceneRefTarget obj)
    // Offset: 0x289C274
    static void Register(int _ID, ::GlobalNamespace::XSceneRefTarget* obj);
    // static public System.Void Unregister(System.Int32 ID, XSceneRefTarget obj)
    // Offset: 0x289C350
    static void Unregister(int _ID, ::GlobalNamespace::XSceneRefTarget* obj);
    // static public System.Boolean TryResolve(SceneIndex sceneIndex, System.Int32 ID, out XSceneRefTarget result)
    // Offset: 0x289C0D4
    static bool TryResolve(::GlobalNamespace::SceneIndex sceneIndex, int _ID, ByRef<::GlobalNamespace::XSceneRefTarget*> result);
    // static private System.Void .cctor()
    // Offset: 0x289C41C
    static void _cctor();
  }; // XSceneRefGlobalHub
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::XSceneRefGlobalHub::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::GlobalNamespace::XSceneRefTarget*)>(&GlobalNamespace::XSceneRefGlobalHub::Register)> {
  static const MethodInfo* get() {
    static auto* _ID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "XSceneRefTarget")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XSceneRefGlobalHub*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_ID, obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XSceneRefGlobalHub::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::GlobalNamespace::XSceneRefTarget*)>(&GlobalNamespace::XSceneRefGlobalHub::Unregister)> {
  static const MethodInfo* get() {
    static auto* _ID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "XSceneRefTarget")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XSceneRefGlobalHub*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_ID, obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XSceneRefGlobalHub::TryResolve
// Il2CppName: TryResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::SceneIndex, int, ByRef<::GlobalNamespace::XSceneRefTarget*>)>(&GlobalNamespace::XSceneRefGlobalHub::TryResolve)> {
  static const MethodInfo* get() {
    static auto* sceneIndex = &::il2cpp_utils::GetClassFromName("", "SceneIndex")->byval_arg;
    static auto* _ID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("", "XSceneRefTarget")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XSceneRefGlobalHub*), "TryResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneIndex, _ID, result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XSceneRefGlobalHub::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::XSceneRefGlobalHub::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XSceneRefGlobalHub*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};