// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.LightCookieManager
#include "UnityEngine/Rendering/Universal/LightCookieManager.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LightCookieManager::ShaderProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieManager::ShaderProperty*, "UnityEngine.Rendering.Universal", "LightCookieManager/ShaderProperty");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.LightCookieManager/ShaderProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class LightCookieManager::ShaderProperty : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int32 mainLightTexture
    static int _get_mainLightTexture();
    // Set static field: static public readonly System.Int32 mainLightTexture
    static void _set_mainLightTexture(int value);
    // Get static field: static public readonly System.Int32 mainLightWorldToLight
    static int _get_mainLightWorldToLight();
    // Set static field: static public readonly System.Int32 mainLightWorldToLight
    static void _set_mainLightWorldToLight(int value);
    // Get static field: static public readonly System.Int32 mainLightCookieTextureFormat
    static int _get_mainLightCookieTextureFormat();
    // Set static field: static public readonly System.Int32 mainLightCookieTextureFormat
    static void _set_mainLightCookieTextureFormat(int value);
    // Get static field: static public readonly System.Int32 additionalLightsCookieAtlasTexture
    static int _get_additionalLightsCookieAtlasTexture();
    // Set static field: static public readonly System.Int32 additionalLightsCookieAtlasTexture
    static void _set_additionalLightsCookieAtlasTexture(int value);
    // Get static field: static public readonly System.Int32 additionalLightsCookieAtlasTextureFormat
    static int _get_additionalLightsCookieAtlasTextureFormat();
    // Set static field: static public readonly System.Int32 additionalLightsCookieAtlasTextureFormat
    static void _set_additionalLightsCookieAtlasTextureFormat(int value);
    // Get static field: static public readonly System.Int32 additionalLightsCookieEnableBits
    static int _get_additionalLightsCookieEnableBits();
    // Set static field: static public readonly System.Int32 additionalLightsCookieEnableBits
    static void _set_additionalLightsCookieEnableBits(int value);
    // Get static field: static public readonly System.Int32 additionalLightsCookieAtlasUVRectBuffer
    static int _get_additionalLightsCookieAtlasUVRectBuffer();
    // Set static field: static public readonly System.Int32 additionalLightsCookieAtlasUVRectBuffer
    static void _set_additionalLightsCookieAtlasUVRectBuffer(int value);
    // Get static field: static public readonly System.Int32 additionalLightsCookieAtlasUVRects
    static int _get_additionalLightsCookieAtlasUVRects();
    // Set static field: static public readonly System.Int32 additionalLightsCookieAtlasUVRects
    static void _set_additionalLightsCookieAtlasUVRects(int value);
    // Get static field: static public readonly System.Int32 additionalLightsWorldToLightBuffer
    static int _get_additionalLightsWorldToLightBuffer();
    // Set static field: static public readonly System.Int32 additionalLightsWorldToLightBuffer
    static void _set_additionalLightsWorldToLightBuffer(int value);
    // Get static field: static public readonly System.Int32 additionalLightsLightTypeBuffer
    static int _get_additionalLightsLightTypeBuffer();
    // Set static field: static public readonly System.Int32 additionalLightsLightTypeBuffer
    static void _set_additionalLightsLightTypeBuffer(int value);
    // Get static field: static public readonly System.Int32 additionalLightsWorldToLights
    static int _get_additionalLightsWorldToLights();
    // Set static field: static public readonly System.Int32 additionalLightsWorldToLights
    static void _set_additionalLightsWorldToLights(int value);
    // Get static field: static public readonly System.Int32 additionalLightsLightTypes
    static int _get_additionalLightsLightTypes();
    // Set static field: static public readonly System.Int32 additionalLightsLightTypes
    static void _set_additionalLightsLightTypes(int value);
    // static private System.Void .cctor()
    // Offset: 0x52BEFB4
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.LightCookieManager/ShaderProperty
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LightCookieManager::ShaderProperty::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::LightCookieManager::ShaderProperty::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LightCookieManager::ShaderProperty*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
