// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.Rendering.IAdditionalData
#include "UnityEngine/Rendering/IAdditionalData.hpp"
// Including type: UnityEngine.Rendering.Universal.LightLayerEnum
#include "UnityEngine/Rendering/Universal/LightLayerEnum.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Rendering.Universal.SoftShadowQuality
#include "UnityEngine/Rendering/Universal/SoftShadowQuality.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: UniversalAdditionalLightData
  class UniversalAdditionalLightData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, "UnityEngine.Rendering.Universal", "UniversalAdditionalLightData");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.UniversalAdditionalLightData
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class UniversalAdditionalLightData : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::ISerializationCallbackReceiver, public ::UnityEngine::Rendering::IAdditionalData*/ {
    public:
    public:
    // private System.Int32 m_Version
    // Size: 0x4
    // Offset: 0x20
    int m_Version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_UsePipelineSettings
    // Size: 0x1
    // Offset: 0x24
    bool m_UsePipelineSettings;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UsePipelineSettings and: m_AdditionalLightsShadowResolutionTier
    char __padding1[0x3] = {};
    // private System.Int32 m_AdditionalLightsShadowResolutionTier
    // Size: 0x4
    // Offset: 0x28
    int m_AdditionalLightsShadowResolutionTier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Rendering.Universal.LightLayerEnum m_LightLayerMask
    // Size: 0x4
    // Offset: 0x2C
    ::UnityEngine::Rendering::Universal::LightLayerEnum m_LightLayerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::LightLayerEnum) == 0x4);
    // private System.UInt32 m_RenderingLayers
    // Size: 0x4
    // Offset: 0x30
    uint m_RenderingLayers;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Boolean m_CustomShadowLayers
    // Size: 0x1
    // Offset: 0x34
    bool m_CustomShadowLayers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_CustomShadowLayers and: m_ShadowLayerMask
    char __padding5[0x3] = {};
    // private UnityEngine.Rendering.Universal.LightLayerEnum m_ShadowLayerMask
    // Size: 0x4
    // Offset: 0x38
    ::UnityEngine::Rendering::Universal::LightLayerEnum m_ShadowLayerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::LightLayerEnum) == 0x4);
    // private System.UInt32 m_ShadowRenderingLayers
    // Size: 0x4
    // Offset: 0x3C
    uint m_ShadowRenderingLayers;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private UnityEngine.Vector2 m_LightCookieSize
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Vector2 m_LightCookieSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 m_LightCookieOffset
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Vector2 m_LightCookieOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Rendering.Universal.SoftShadowQuality m_SoftShadowQuality
    // Size: 0x4
    // Offset: 0x50
    ::UnityEngine::Rendering::Universal::SoftShadowQuality m_SoftShadowQuality;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::SoftShadowQuality) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Rendering::IAdditionalData
    operator ::UnityEngine::Rendering::IAdditionalData() noexcept {
      return *reinterpret_cast<::UnityEngine::Rendering::IAdditionalData*>(this);
    }
    // Get static field: static public readonly System.Int32 AdditionalLightsShadowResolutionTierCustom
    static int _get_AdditionalLightsShadowResolutionTierCustom();
    // Set static field: static public readonly System.Int32 AdditionalLightsShadowResolutionTierCustom
    static void _set_AdditionalLightsShadowResolutionTierCustom(int value);
    // Get static field: static public readonly System.Int32 AdditionalLightsShadowResolutionTierLow
    static int _get_AdditionalLightsShadowResolutionTierLow();
    // Set static field: static public readonly System.Int32 AdditionalLightsShadowResolutionTierLow
    static void _set_AdditionalLightsShadowResolutionTierLow(int value);
    // Get static field: static public readonly System.Int32 AdditionalLightsShadowResolutionTierMedium
    static int _get_AdditionalLightsShadowResolutionTierMedium();
    // Set static field: static public readonly System.Int32 AdditionalLightsShadowResolutionTierMedium
    static void _set_AdditionalLightsShadowResolutionTierMedium(int value);
    // Get static field: static public readonly System.Int32 AdditionalLightsShadowResolutionTierHigh
    static int _get_AdditionalLightsShadowResolutionTierHigh();
    // Set static field: static public readonly System.Int32 AdditionalLightsShadowResolutionTierHigh
    static void _set_AdditionalLightsShadowResolutionTierHigh(int value);
    // Get static field: static public readonly System.Int32 AdditionalLightsShadowDefaultResolutionTier
    static int _get_AdditionalLightsShadowDefaultResolutionTier();
    // Set static field: static public readonly System.Int32 AdditionalLightsShadowDefaultResolutionTier
    static void _set_AdditionalLightsShadowDefaultResolutionTier(int value);
    // Get static field: static public readonly System.Int32 AdditionalLightsShadowDefaultCustomResolution
    static int _get_AdditionalLightsShadowDefaultCustomResolution();
    // Set static field: static public readonly System.Int32 AdditionalLightsShadowDefaultCustomResolution
    static void _set_AdditionalLightsShadowDefaultCustomResolution(int value);
    // Get static field: static public readonly System.Int32 AdditionalLightsShadowMinimumResolution
    static int _get_AdditionalLightsShadowMinimumResolution();
    // Set static field: static public readonly System.Int32 AdditionalLightsShadowMinimumResolution
    static void _set_AdditionalLightsShadowMinimumResolution(int value);
    // Get instance field reference: private System.Int32 m_Version
    [[deprecated("Use field access instead!")]] int& dyn_m_Version();
    // Get instance field reference: private System.Boolean m_UsePipelineSettings
    [[deprecated("Use field access instead!")]] bool& dyn_m_UsePipelineSettings();
    // Get instance field reference: private System.Int32 m_AdditionalLightsShadowResolutionTier
    [[deprecated("Use field access instead!")]] int& dyn_m_AdditionalLightsShadowResolutionTier();
    // Get instance field reference: private UnityEngine.Rendering.Universal.LightLayerEnum m_LightLayerMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::LightLayerEnum& dyn_m_LightLayerMask();
    // Get instance field reference: private System.UInt32 m_RenderingLayers
    [[deprecated("Use field access instead!")]] uint& dyn_m_RenderingLayers();
    // Get instance field reference: private System.Boolean m_CustomShadowLayers
    [[deprecated("Use field access instead!")]] bool& dyn_m_CustomShadowLayers();
    // Get instance field reference: private UnityEngine.Rendering.Universal.LightLayerEnum m_ShadowLayerMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::LightLayerEnum& dyn_m_ShadowLayerMask();
    // Get instance field reference: private System.UInt32 m_ShadowRenderingLayers
    [[deprecated("Use field access instead!")]] uint& dyn_m_ShadowRenderingLayers();
    // Get instance field reference: private UnityEngine.Vector2 m_LightCookieSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_LightCookieSize();
    // Get instance field reference: private UnityEngine.Vector2 m_LightCookieOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_LightCookieOffset();
    // Get instance field reference: private UnityEngine.Rendering.Universal.SoftShadowQuality m_SoftShadowQuality
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::SoftShadowQuality& dyn_m_SoftShadowQuality();
    // System.Int32 get_version()
    // Offset: 0x52E7D18
    int get_version();
    // public System.Boolean get_usePipelineSettings()
    // Offset: 0x52E7D20
    bool get_usePipelineSettings();
    // public System.Void set_usePipelineSettings(System.Boolean value)
    // Offset: 0x52E7D28
    void set_usePipelineSettings(bool value);
    // public System.Int32 get_additionalLightsShadowResolutionTier()
    // Offset: 0x52E7D34
    int get_additionalLightsShadowResolutionTier();
    // public UnityEngine.Rendering.Universal.LightLayerEnum get_lightLayerMask()
    // Offset: 0x52E7D3C
    ::UnityEngine::Rendering::Universal::LightLayerEnum get_lightLayerMask();
    // public System.Void set_lightLayerMask(UnityEngine.Rendering.Universal.LightLayerEnum value)
    // Offset: 0x52E7D44
    void set_lightLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value);
    // public System.UInt32 get_renderingLayers()
    // Offset: 0x52E7D4C
    uint get_renderingLayers();
    // public System.Void set_renderingLayers(System.UInt32 value)
    // Offset: 0x52E7D54
    void set_renderingLayers(uint value);
    // public System.Boolean get_customShadowLayers()
    // Offset: 0x52E7D5C
    bool get_customShadowLayers();
    // public System.Void set_customShadowLayers(System.Boolean value)
    // Offset: 0x52E7D64
    void set_customShadowLayers(bool value);
    // public UnityEngine.Rendering.Universal.LightLayerEnum get_shadowLayerMask()
    // Offset: 0x52E7D70
    ::UnityEngine::Rendering::Universal::LightLayerEnum get_shadowLayerMask();
    // public System.Void set_shadowLayerMask(UnityEngine.Rendering.Universal.LightLayerEnum value)
    // Offset: 0x52E7D78
    void set_shadowLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value);
    // public System.UInt32 get_shadowRenderingLayers()
    // Offset: 0x52E7D80
    uint get_shadowRenderingLayers();
    // public System.Void set_shadowRenderingLayers(System.UInt32 value)
    // Offset: 0x52E7D88
    void set_shadowRenderingLayers(uint value);
    // public UnityEngine.Vector2 get_lightCookieSize()
    // Offset: 0x52E7D90
    ::UnityEngine::Vector2 get_lightCookieSize();
    // public System.Void set_lightCookieSize(UnityEngine.Vector2 value)
    // Offset: 0x52E7D98
    void set_lightCookieSize(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_lightCookieOffset()
    // Offset: 0x52E7DA0
    ::UnityEngine::Vector2 get_lightCookieOffset();
    // public System.Void set_lightCookieOffset(UnityEngine.Vector2 value)
    // Offset: 0x52E7DA8
    void set_lightCookieOffset(::UnityEngine::Vector2 value);
    // public UnityEngine.Rendering.Universal.SoftShadowQuality get_softShadowQuality()
    // Offset: 0x52E7DB0
    ::UnityEngine::Rendering::Universal::SoftShadowQuality get_softShadowQuality();
    // public System.Void set_softShadowQuality(UnityEngine.Rendering.Universal.SoftShadowQuality value)
    // Offset: 0x52E7DB8
    void set_softShadowQuality(::UnityEngine::Rendering::Universal::SoftShadowQuality value);
    // public System.Void OnBeforeSerialize()
    // Offset: 0x52E7DC0
    void OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x52E7DC4
    void OnAfterDeserialize();
    // public System.Void .ctor()
    // Offset: 0x52E7E90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniversalAdditionalLightData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniversalAdditionalLightData*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x52E7F78
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.UniversalAdditionalLightData
  #pragma pack(pop)
  static check_size<sizeof(UniversalAdditionalLightData), 80 + sizeof(::UnityEngine::Rendering::Universal::SoftShadowQuality)> __UnityEngine_Rendering_Universal_UniversalAdditionalLightDataSizeCheck;
  static_assert(sizeof(UniversalAdditionalLightData) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_usePipelineSettings
// Il2CppName: get_usePipelineSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_usePipelineSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "get_usePipelineSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_usePipelineSettings
// Il2CppName: set_usePipelineSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(bool)>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_usePipelineSettings)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "set_usePipelineSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_additionalLightsShadowResolutionTier
// Il2CppName: get_additionalLightsShadowResolutionTier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_additionalLightsShadowResolutionTier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "get_additionalLightsShadowResolutionTier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightLayerMask
// Il2CppName: get_lightLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LightLayerEnum (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightLayerMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "get_lightLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightLayerMask
// Il2CppName: set_lightLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::Rendering::Universal::LightLayerEnum)>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightLayerMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "LightLayerEnum")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "set_lightLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_renderingLayers
// Il2CppName: get_renderingLayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_renderingLayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "get_renderingLayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_renderingLayers
// Il2CppName: set_renderingLayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(uint)>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_renderingLayers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "set_renderingLayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_customShadowLayers
// Il2CppName: get_customShadowLayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_customShadowLayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "get_customShadowLayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_customShadowLayers
// Il2CppName: set_customShadowLayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(bool)>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_customShadowLayers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "set_customShadowLayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_shadowLayerMask
// Il2CppName: get_shadowLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LightLayerEnum (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_shadowLayerMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "get_shadowLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_shadowLayerMask
// Il2CppName: set_shadowLayerMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::Rendering::Universal::LightLayerEnum)>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_shadowLayerMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "LightLayerEnum")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "set_shadowLayerMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_shadowRenderingLayers
// Il2CppName: get_shadowRenderingLayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_shadowRenderingLayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "get_shadowRenderingLayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_shadowRenderingLayers
// Il2CppName: set_shadowRenderingLayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(uint)>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_shadowRenderingLayers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "set_shadowRenderingLayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightCookieSize
// Il2CppName: get_lightCookieSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightCookieSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "get_lightCookieSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightCookieSize
// Il2CppName: set_lightCookieSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::Vector2)>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightCookieSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "set_lightCookieSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightCookieOffset
// Il2CppName: get_lightCookieOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightCookieOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "get_lightCookieOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightCookieOffset
// Il2CppName: set_lightCookieOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::Vector2)>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightCookieOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "set_lightCookieOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_softShadowQuality
// Il2CppName: get_softShadowQuality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::SoftShadowQuality (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_softShadowQuality)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "get_softShadowQuality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_softShadowQuality
// Il2CppName: set_softShadowQuality
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::Rendering::Universal::SoftShadowQuality)>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_softShadowQuality)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "SoftShadowQuality")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "set_softShadowQuality", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalAdditionalLightData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::UniversalAdditionalLightData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalAdditionalLightData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
