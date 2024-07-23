// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal::Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // Forward declaring type: ColorGradingLutPass
  class ColorGradingLutPass;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: PostProcessPass
  class PostProcessPass;
  // Forward declaring type: PostProcessData
  class PostProcessData;
  // Forward declaring type: PostProcessParams
  struct PostProcessParams;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandle
  class RTHandle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: PostProcessPasses
  struct PostProcessPasses;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPasses, "UnityEngine.Rendering.Universal", "PostProcessPasses");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.PostProcessPasses
  // [TokenAttribute] Offset: FFFFFFFF
  struct PostProcessPasses/*, public ::System::ValueType, public ::System::IDisposable*/ {
    public:
    public:
    // private UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass m_ColorGradingLutPass
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* m_ColorGradingLutPass;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*) == 0x8);
    // private UnityEngine.Rendering.Universal.PostProcessPass m_PostProcessPass
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Rendering::Universal::PostProcessPass* m_PostProcessPass;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPass*) == 0x8);
    // private UnityEngine.Rendering.Universal.PostProcessPass m_FinalPostProcessPass
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::PostProcessPass* m_FinalPostProcessPass;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPass*) == 0x8);
    // UnityEngine.Rendering.RTHandle m_AfterPostProcessColor
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::RTHandle* m_AfterPostProcessColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    // UnityEngine.Rendering.RTHandle m_ColorGradingLut
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Rendering::RTHandle* m_ColorGradingLut;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    // private UnityEngine.Rendering.Universal.PostProcessData m_RendererPostProcessData
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Rendering::Universal::PostProcessData* m_RendererPostProcessData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessData*) == 0x8);
    // private UnityEngine.Rendering.Universal.PostProcessData m_CurrentPostProcessData
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Rendering::Universal::PostProcessData* m_CurrentPostProcessData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessData*) == 0x8);
    // private UnityEngine.Material m_BlitMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* m_BlitMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Creating value type constructor for type: PostProcessPasses
    constexpr PostProcessPasses(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* m_ColorGradingLutPass_ = {}, ::UnityEngine::Rendering::Universal::PostProcessPass* m_PostProcessPass_ = {}, ::UnityEngine::Rendering::Universal::PostProcessPass* m_FinalPostProcessPass_ = {}, ::UnityEngine::Rendering::RTHandle* m_AfterPostProcessColor_ = {}, ::UnityEngine::Rendering::RTHandle* m_ColorGradingLut_ = {}, ::UnityEngine::Rendering::Universal::PostProcessData* m_RendererPostProcessData_ = {}, ::UnityEngine::Rendering::Universal::PostProcessData* m_CurrentPostProcessData_ = {}, ::UnityEngine::Material* m_BlitMaterial_ = {}) noexcept : m_ColorGradingLutPass{m_ColorGradingLutPass_}, m_PostProcessPass{m_PostProcessPass_}, m_FinalPostProcessPass{m_FinalPostProcessPass_}, m_AfterPostProcessColor{m_AfterPostProcessColor_}, m_ColorGradingLut{m_ColorGradingLut_}, m_RendererPostProcessData{m_RendererPostProcessData_}, m_CurrentPostProcessData{m_CurrentPostProcessData_}, m_BlitMaterial{m_BlitMaterial_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass m_ColorGradingLutPass
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*& dyn_m_ColorGradingLutPass();
    // Get instance field reference: private UnityEngine.Rendering.Universal.PostProcessPass m_PostProcessPass
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::PostProcessPass*& dyn_m_PostProcessPass();
    // Get instance field reference: private UnityEngine.Rendering.Universal.PostProcessPass m_FinalPostProcessPass
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::PostProcessPass*& dyn_m_FinalPostProcessPass();
    // Get instance field reference: UnityEngine.Rendering.RTHandle m_AfterPostProcessColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_m_AfterPostProcessColor();
    // Get instance field reference: UnityEngine.Rendering.RTHandle m_ColorGradingLut
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_m_ColorGradingLut();
    // Get instance field reference: private UnityEngine.Rendering.Universal.PostProcessData m_RendererPostProcessData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::PostProcessData*& dyn_m_RendererPostProcessData();
    // Get instance field reference: private UnityEngine.Rendering.Universal.PostProcessData m_CurrentPostProcessData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::PostProcessData*& dyn_m_CurrentPostProcessData();
    // Get instance field reference: private UnityEngine.Material m_BlitMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_BlitMaterial();
    // public UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass get_colorGradingLutPass()
    // Offset: 0x52D0494
    ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* get_colorGradingLutPass();
    // public UnityEngine.Rendering.Universal.PostProcessPass get_postProcessPass()
    // Offset: 0x52D049C
    ::UnityEngine::Rendering::Universal::PostProcessPass* get_postProcessPass();
    // public UnityEngine.Rendering.Universal.PostProcessPass get_finalPostProcessPass()
    // Offset: 0x52D04A4
    ::UnityEngine::Rendering::Universal::PostProcessPass* get_finalPostProcessPass();
    // public UnityEngine.Rendering.RTHandle get_afterPostProcessColor()
    // Offset: 0x52D04AC
    ::UnityEngine::Rendering::RTHandle* get_afterPostProcessColor();
    // public UnityEngine.Rendering.RTHandle get_colorGradingLut()
    // Offset: 0x52D04B4
    ::UnityEngine::Rendering::RTHandle* get_colorGradingLut();
    // public System.Boolean get_isCreated()
    // Offset: 0x52D04BC
    bool get_isCreated();
    // public System.Void .ctor(UnityEngine.Rendering.Universal.PostProcessData rendererPostProcessData, ref UnityEngine.Rendering.Universal.PostProcessParams postProcessParams)
    // Offset: 0x52D051C
    PostProcessPasses(::UnityEngine::Rendering::Universal::PostProcessData* rendererPostProcessData, ByRef<::UnityEngine::Rendering::Universal::PostProcessParams> postProcessParams);
    // public System.Void Recreate(UnityEngine.Rendering.Universal.PostProcessData data, ref UnityEngine.Rendering.Universal.PostProcessParams ppParams)
    // Offset: 0x52D05C4
    void Recreate(::UnityEngine::Rendering::Universal::PostProcessData* data, ByRef<::UnityEngine::Rendering::Universal::PostProcessParams> ppParams);
    // public System.Void Dispose()
    // Offset: 0x52D0808
    void Dispose();
    // System.Void ReleaseRenderTargets()
    // Offset: 0x52D086C
    void ReleaseRenderTargets();
  }; // UnityEngine.Rendering.Universal.PostProcessPasses
  #pragma pack(pop)
  static check_size<sizeof(PostProcessPasses), 56 + sizeof(::UnityEngine::Material*)> __UnityEngine_Rendering_Universal_PostProcessPassesSizeCheck;
  static_assert(sizeof(PostProcessPasses) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessPasses::get_colorGradingLutPass
// Il2CppName: get_colorGradingLutPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* (UnityEngine::Rendering::Universal::PostProcessPasses::*)()>(&UnityEngine::Rendering::Universal::PostProcessPasses::get_colorGradingLutPass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PostProcessPasses), "get_colorGradingLutPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessPasses::get_postProcessPass
// Il2CppName: get_postProcessPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::PostProcessPass* (UnityEngine::Rendering::Universal::PostProcessPasses::*)()>(&UnityEngine::Rendering::Universal::PostProcessPasses::get_postProcessPass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PostProcessPasses), "get_postProcessPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessPasses::get_finalPostProcessPass
// Il2CppName: get_finalPostProcessPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::PostProcessPass* (UnityEngine::Rendering::Universal::PostProcessPasses::*)()>(&UnityEngine::Rendering::Universal::PostProcessPasses::get_finalPostProcessPass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PostProcessPasses), "get_finalPostProcessPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessPasses::get_afterPostProcessColor
// Il2CppName: get_afterPostProcessColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (UnityEngine::Rendering::Universal::PostProcessPasses::*)()>(&UnityEngine::Rendering::Universal::PostProcessPasses::get_afterPostProcessColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PostProcessPasses), "get_afterPostProcessColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessPasses::get_colorGradingLut
// Il2CppName: get_colorGradingLut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (UnityEngine::Rendering::Universal::PostProcessPasses::*)()>(&UnityEngine::Rendering::Universal::PostProcessPasses::get_colorGradingLut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PostProcessPasses), "get_colorGradingLut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessPasses::get_isCreated
// Il2CppName: get_isCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::PostProcessPasses::*)()>(&UnityEngine::Rendering::Universal::PostProcessPasses::get_isCreated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PostProcessPasses), "get_isCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessPasses::PostProcessPasses
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessPasses::Recreate
// Il2CppName: Recreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::PostProcessPasses::*)(::UnityEngine::Rendering::Universal::PostProcessData*, ByRef<::UnityEngine::Rendering::Universal::PostProcessParams>)>(&UnityEngine::Rendering::Universal::PostProcessPasses::Recreate)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "PostProcessData")->byval_arg;
    static auto* ppParams = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "PostProcessParams")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PostProcessPasses), "Recreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, ppParams});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessPasses::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::PostProcessPasses::*)()>(&UnityEngine::Rendering::Universal::PostProcessPasses::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PostProcessPasses), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::PostProcessPasses::ReleaseRenderTargets
// Il2CppName: ReleaseRenderTargets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::PostProcessPasses::*)()>(&UnityEngine::Rendering::Universal::PostProcessPasses::ReleaseRenderTargets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::PostProcessPasses), "ReleaseRenderTargets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};