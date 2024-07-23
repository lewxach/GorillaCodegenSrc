// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ScriptableRendererFeature
  class ScriptableRendererFeature;
  // Forward declaring type: ScriptableRenderer
  class ScriptableRenderer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ScriptableRendererData
  class ScriptableRendererData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRendererData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRendererData*, "UnityEngine.Rendering.Universal", "ScriptableRendererData");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ScriptableRendererData
  // [TokenAttribute] Offset: FFFFFFFF
  class ScriptableRendererData : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::ScriptableRendererData::DebugShaderResources
    class DebugShaderResources;
    public:
    // private System.Boolean <isInvalidated>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool isInvalidated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInvalidated and: debugShaders
    char __padding0[0x7] = {};
    // public UnityEngine.Rendering.Universal.ScriptableRendererData/DebugShaderResources debugShaders
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Rendering::Universal::ScriptableRendererData::DebugShaderResources* debugShaders;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRendererData::DebugShaderResources*) == 0x8);
    // System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature> m_RendererFeatures
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>* m_RendererFeatures;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>*) == 0x8);
    // System.Collections.Generic.List`1<System.Int64> m_RendererFeatureMap
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<int64_t>* m_RendererFeatureMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int64_t>*) == 0x8);
    // private System.Boolean m_UseNativeRenderPass
    // Size: 0x1
    // Offset: 0x38
    bool m_UseNativeRenderPass;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean <isInvalidated>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isInvalidated$k__BackingField();
    // Get instance field reference: public UnityEngine.Rendering.Universal.ScriptableRendererData/DebugShaderResources debugShaders
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::ScriptableRendererData::DebugShaderResources*& dyn_debugShaders();
    // Get instance field reference: System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature> m_RendererFeatures
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>*& dyn_m_RendererFeatures();
    // Get instance field reference: System.Collections.Generic.List`1<System.Int64> m_RendererFeatureMap
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int64_t>*& dyn_m_RendererFeatureMap();
    // Get instance field reference: private System.Boolean m_UseNativeRenderPass
    [[deprecated("Use field access instead!")]] bool& dyn_m_UseNativeRenderPass();
    // System.Boolean get_isInvalidated()
    // Offset: 0x52DC318
    bool get_isInvalidated();
    // System.Void set_isInvalidated(System.Boolean value)
    // Offset: 0x52DC320
    void set_isInvalidated(bool value);
    // protected UnityEngine.Rendering.Universal.ScriptableRenderer Create()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Rendering::Universal::ScriptableRenderer* Create();
    // public System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature> get_rendererFeatures()
    // Offset: 0x52DC32C
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>* get_rendererFeatures();
    // public System.Void SetDirty()
    // Offset: 0x52DC334
    void SetDirty();
    // UnityEngine.Rendering.Universal.ScriptableRenderer InternalCreateRenderer()
    // Offset: 0x52DC340
    ::UnityEngine::Rendering::Universal::ScriptableRenderer* InternalCreateRenderer();
    // protected System.Void OnValidate()
    // Offset: 0x52DC350
    void OnValidate();
    // protected System.Void OnEnable()
    // Offset: 0x52DC35C
    void OnEnable();
    // public System.Boolean get_useNativeRenderPass()
    // Offset: 0x52DC368
    bool get_useNativeRenderPass();
    // public System.Void set_useNativeRenderPass(System.Boolean value)
    // Offset: 0x52DC370
    void set_useNativeRenderPass(bool value);
    // System.Boolean TryGetRendererFeature(out T rendererFeature)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool TryGetRendererFeature(ByRef<T> rendererFeature) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ScriptableRendererData::TryGetRendererFeature");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetRendererFeature", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, byref(rendererFeature));
    }
    // protected System.Void .ctor()
    // Offset: 0x52DC384
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableRendererData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ScriptableRendererData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableRendererData*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.ScriptableRendererData
  #pragma pack(pop)
  static check_size<sizeof(ScriptableRendererData), 56 + sizeof(bool)> __UnityEngine_Rendering_Universal_ScriptableRendererDataSizeCheck;
  static_assert(sizeof(ScriptableRendererData) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::get_isInvalidated
// Il2CppName: get_isInvalidated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(&UnityEngine::Rendering::Universal::ScriptableRendererData::get_isInvalidated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRendererData*), "get_isInvalidated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::set_isInvalidated
// Il2CppName: set_isInvalidated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScriptableRendererData::*)(bool)>(&UnityEngine::Rendering::Universal::ScriptableRendererData::set_isInvalidated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRendererData*), "set_isInvalidated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(&UnityEngine::Rendering::Universal::ScriptableRendererData::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRendererData*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::get_rendererFeatures
// Il2CppName: get_rendererFeatures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRendererFeature*>* (UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(&UnityEngine::Rendering::Universal::ScriptableRendererData::get_rendererFeatures)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRendererData*), "get_rendererFeatures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::SetDirty
// Il2CppName: SetDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(&UnityEngine::Rendering::Universal::ScriptableRendererData::SetDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRendererData*), "SetDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::InternalCreateRenderer
// Il2CppName: InternalCreateRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(&UnityEngine::Rendering::Universal::ScriptableRendererData::InternalCreateRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRendererData*), "InternalCreateRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(&UnityEngine::Rendering::Universal::ScriptableRendererData::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRendererData*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(&UnityEngine::Rendering::Universal::ScriptableRendererData::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRendererData*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::get_useNativeRenderPass
// Il2CppName: get_useNativeRenderPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::ScriptableRendererData::*)()>(&UnityEngine::Rendering::Universal::ScriptableRendererData::get_useNativeRenderPass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRendererData*), "get_useNativeRenderPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::set_useNativeRenderPass
// Il2CppName: set_useNativeRenderPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ScriptableRendererData::*)(bool)>(&UnityEngine::Rendering::Universal::ScriptableRendererData::set_useNativeRenderPass)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ScriptableRendererData*), "set_useNativeRenderPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::TryGetRendererFeature
// Il2CppName: TryGetRendererFeature
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ScriptableRendererData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!