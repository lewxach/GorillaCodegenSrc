// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: ShaderTextureProperty
  class ShaderTextureProperty;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: TextureBlender
  class TextureBlender;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::TextureBlender);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::TextureBlender*, "DigitalOpus.MB.Core", "TextureBlender");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.TextureBlender
  // [TokenAttribute] Offset: FFFFFFFF
  class TextureBlender {
    public:
    // public System.Boolean DoesShaderNameMatch(System.String shaderName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool DoesShaderNameMatch(::StringW shaderName);
    // public System.Void OnBeforeTintTexture(UnityEngine.Material sourceMat, System.String shaderTexturePropertyName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::StringW shaderTexturePropertyName);
    // public UnityEngine.Color OnBlendTexturePixel(System.String shaderPropertyName, UnityEngine.Color pixelColor)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Color OnBlendTexturePixel(::StringW shaderPropertyName, ::UnityEngine::Color pixelColor);
    // public System.Boolean NonTexturePropertiesAreEqual(UnityEngine.Material a, UnityEngine.Material b)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b);
    // public System.Void SetNonTexturePropertyValuesOnResultMaterial(UnityEngine.Material resultMaterial)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial);
    // public UnityEngine.Color GetColorIfNoTexture(UnityEngine.Material m, DigitalOpus.MB.Core.ShaderTextureProperty texPropertyName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* m, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName);
  }; // DigitalOpus.MB.Core.TextureBlender
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlender::DoesShaderNameMatch
// Il2CppName: DoesShaderNameMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::TextureBlender::*)(::StringW)>(&DigitalOpus::MB::Core::TextureBlender::DoesShaderNameMatch)> {
  static const MethodInfo* get() {
    static auto* shaderName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlender*), "DoesShaderNameMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shaderName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlender::OnBeforeTintTexture
// Il2CppName: OnBeforeTintTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::TextureBlender::*)(::UnityEngine::Material*, ::StringW)>(&DigitalOpus::MB::Core::TextureBlender::OnBeforeTintTexture)> {
  static const MethodInfo* get() {
    static auto* sourceMat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* shaderTexturePropertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlender*), "OnBeforeTintTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceMat, shaderTexturePropertyName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlender::OnBlendTexturePixel
// Il2CppName: OnBlendTexturePixel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DigitalOpus::MB::Core::TextureBlender::*)(::StringW, ::UnityEngine::Color)>(&DigitalOpus::MB::Core::TextureBlender::OnBlendTexturePixel)> {
  static const MethodInfo* get() {
    static auto* shaderPropertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pixelColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlender*), "OnBlendTexturePixel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shaderPropertyName, pixelColor});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlender::NonTexturePropertiesAreEqual
// Il2CppName: NonTexturePropertiesAreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::TextureBlender::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&DigitalOpus::MB::Core::TextureBlender::NonTexturePropertiesAreEqual)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlender*), "NonTexturePropertiesAreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlender::SetNonTexturePropertyValuesOnResultMaterial
// Il2CppName: SetNonTexturePropertyValuesOnResultMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::TextureBlender::*)(::UnityEngine::Material*)>(&DigitalOpus::MB::Core::TextureBlender::SetNonTexturePropertyValuesOnResultMaterial)> {
  static const MethodInfo* get() {
    static auto* resultMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlender*), "SetNonTexturePropertyValuesOnResultMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultMaterial});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlender::GetColorIfNoTexture
// Il2CppName: GetColorIfNoTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DigitalOpus::MB::Core::TextureBlender::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&DigitalOpus::MB::Core::TextureBlender::GetColorIfNoTexture)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* texPropertyName = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlender*), "GetColorIfNoTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, texPropertyName});
  }
};
