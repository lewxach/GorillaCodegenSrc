// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Including type: UnityEngine.VFX.VFXOutputEventArgs
#include "UnityEngine/VFX/VFXOutputEventArgs.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VFXEventAttribute
  class VFXEventAttribute;
  // Forward declaring type: VisualEffectAsset
  class VisualEffectAsset;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VisualEffect
  class VisualEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::VFX::VisualEffect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VisualEffect*, "UnityEngine.VFX", "VisualEffect");
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.VFX.VisualEffect
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class VisualEffect : public ::UnityEngine::Behaviour {
    public:
    public:
    // private UnityEngine.VFX.VFXEventAttribute m_cachedEventAttribute
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::VFX::VFXEventAttribute* m_cachedEventAttribute;
    // Field size check
    static_assert(sizeof(::UnityEngine::VFX::VFXEventAttribute*) == 0x8);
    // public System.Action`1<UnityEngine.VFX.VFXOutputEventArgs> outputEventReceived
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>* outputEventReceived;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.VFX.VFXEventAttribute m_cachedEventAttribute
    [[deprecated("Use field access instead!")]] ::UnityEngine::VFX::VFXEventAttribute*& dyn_m_cachedEventAttribute();
    // Get instance field reference: public System.Action`1<UnityEngine.VFX.VFXOutputEventArgs> outputEventReceived
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>*& dyn_outputEventReceived();
    // public UnityEngine.VFX.VisualEffectAsset get_visualEffectAsset()
    // Offset: 0x5711010
    ::UnityEngine::VFX::VisualEffectAsset* get_visualEffectAsset();
    // public UnityEngine.VFX.VFXEventAttribute CreateVFXEventAttribute()
    // Offset: 0x571104C
    ::UnityEngine::VFX::VFXEventAttribute* CreateVFXEventAttribute();
    // static private UnityEngine.VFX.VFXEventAttribute InvokeGetCachedEventAttributeForOutputEvent_Internal(UnityEngine.VFX.VisualEffect source)
    // Offset: 0x5711114
    static ::UnityEngine::VFX::VFXEventAttribute* InvokeGetCachedEventAttributeForOutputEvent_Internal(::UnityEngine::VFX::VisualEffect* source);
    // static private System.Void InvokeOutputEventReceived_Internal(UnityEngine.VFX.VisualEffect source, System.Int32 eventNameId)
    // Offset: 0x571116C
    static void InvokeOutputEventReceived_Internal(::UnityEngine::VFX::VisualEffect* source, int eventNameId);
  }; // UnityEngine.VFX.VisualEffect
  #pragma pack(pop)
  static check_size<sizeof(VisualEffect), 32 + sizeof(::System::Action_1<::UnityEngine::VFX::VFXOutputEventArgs>*)> __UnityEngine_VFX_VisualEffectSizeCheck;
  static_assert(sizeof(VisualEffect) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::VFX::VisualEffect::get_visualEffectAsset
// Il2CppName: get_visualEffectAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::VFX::VisualEffectAsset* (UnityEngine::VFX::VisualEffect::*)()>(&UnityEngine::VFX::VisualEffect::get_visualEffectAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VisualEffect*), "get_visualEffectAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VisualEffect::CreateVFXEventAttribute
// Il2CppName: CreateVFXEventAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::VFX::VFXEventAttribute* (UnityEngine::VFX::VisualEffect::*)()>(&UnityEngine::VFX::VisualEffect::CreateVFXEventAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VisualEffect*), "CreateVFXEventAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VisualEffect::InvokeGetCachedEventAttributeForOutputEvent_Internal
// Il2CppName: InvokeGetCachedEventAttributeForOutputEvent_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::VFX::VFXEventAttribute* (*)(::UnityEngine::VFX::VisualEffect*)>(&UnityEngine::VFX::VisualEffect::InvokeGetCachedEventAttributeForOutputEvent_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VisualEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VisualEffect*), "InvokeGetCachedEventAttributeForOutputEvent_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VisualEffect::InvokeOutputEventReceived_Internal
// Il2CppName: InvokeOutputEventReceived_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::VFX::VisualEffect*, int)>(&UnityEngine::VFX::VisualEffect::InvokeOutputEventReceived_Internal)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine.VFX", "VisualEffect")->byval_arg;
    static auto* eventNameId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VisualEffect*), "InvokeOutputEventReceived_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, eventNameId});
  }
};