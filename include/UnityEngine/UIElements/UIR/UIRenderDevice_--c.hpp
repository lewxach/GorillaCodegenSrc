// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UIR.UIRenderDevice
#include "UnityEngine/UIElements/UIR/UIRenderDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::UIElements::UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: MeshHandle
  class MeshHandle;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::UIRenderDevice::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRenderDevice::$$c*, "UnityEngine.UIElements.UIR", "UIRenderDevice/<>c");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIR.UIRenderDevice/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UIRenderDevice::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.UIR.UIRenderDevice/<>c <>9
    static ::UnityEngine::UIElements::UIR::UIRenderDevice::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.UIR.UIRenderDevice/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::UIR::UIRenderDevice::$$c* value);
    // Get static field: static public System.Func`1<UnityEngine.UIElements.UIR.MeshHandle> <>9__50_0
    static ::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* _get_$$9__50_0();
    // Set static field: static public System.Func`1<UnityEngine.UIElements.UIR.MeshHandle> <>9__50_0
    static void _set_$$9__50_0(::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);
    // Get static field: static public System.Action`1<UnityEngine.UIElements.UIR.MeshHandle> <>9__50_1
    static ::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* _get_$$9__50_1();
    // Set static field: static public System.Action`1<UnityEngine.UIElements.UIR.MeshHandle> <>9__50_1
    static void _set_$$9__50_1(::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);
    // static private System.Void .cctor()
    // Offset: 0x55DF78C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x55DF7F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIRenderDevice::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::UIRenderDevice::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIRenderDevice::$$c*, creationType>()));
    }
    // UnityEngine.UIElements.UIR.MeshHandle <.ctor>b__50_0()
    // Offset: 0x55DF7FC
    ::UnityEngine::UIElements::UIR::MeshHandle* $_ctor$b__50_0();
    // System.Void <.ctor>b__50_1(UnityEngine.UIElements.UIR.MeshHandle mh)
    // Offset: 0x55DF84C
    void $_ctor$b__50_1(::UnityEngine::UIElements::UIR::MeshHandle* mh);
  }; // UnityEngine.UIElements.UIR.UIRenderDevice/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::UIRenderDevice::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::UIRenderDevice::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::UIRenderDevice::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::UIRenderDevice::$$c::$_ctor$b__50_0
// Il2CppName: <.ctor>b__50_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::MeshHandle* (UnityEngine::UIElements::UIR::UIRenderDevice::$$c::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::$$c::$_ctor$b__50_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::UIRenderDevice::$$c*), "<.ctor>b__50_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::UIRenderDevice::$$c::$_ctor$b__50_1
// Il2CppName: <.ctor>b__50_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::$$c::*)(::UnityEngine::UIElements::UIR::MeshHandle*)>(&UnityEngine::UIElements::UIR::UIRenderDevice::$$c::$_ctor$b__50_1)> {
  static const MethodInfo* get() {
    static auto* mh = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.UIR", "MeshHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::UIRenderDevice::$$c*), "<.ctor>b__50_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mh});
  }
};