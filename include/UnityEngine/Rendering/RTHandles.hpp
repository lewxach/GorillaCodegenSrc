// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandleSystem
  class RTHandleSystem;
  // Forward declaring type: RTHandleProperties
  struct RTHandleProperties;
  // Forward declaring type: RTHandle
  class RTHandle;
  // Forward declaring type: DepthBits
  struct DepthBits;
  // Forward declaring type: TextureDimension
  struct TextureDimension;
  // Forward declaring type: MSAASamples
  struct MSAASamples;
  // Forward declaring type: ScaleFunc
  class ScaleFunc;
  // Forward declaring type: RenderTargetIdentifier
  struct RenderTargetIdentifier;
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormat
  struct GraphicsFormat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: FilterMode
  struct FilterMode;
  // Forward declaring type: TextureWrapMode
  struct TextureWrapMode;
  // Forward declaring type: RenderTextureMemoryless
  struct RenderTextureMemoryless;
  // Forward declaring type: VRTextureUsage
  struct VRTextureUsage;
  // Forward declaring type: RenderTextureDescriptor
  struct RenderTextureDescriptor;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandles
  class RTHandles;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::RTHandles);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RTHandles*, "UnityEngine.Rendering", "RTHandles");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RTHandles
  // [TokenAttribute] Offset: FFFFFFFF
  class RTHandles : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.Rendering.RTHandleSystem s_DefaultInstance
    static ::UnityEngine::Rendering::RTHandleSystem* _get_s_DefaultInstance();
    // Set static field: static private UnityEngine.Rendering.RTHandleSystem s_DefaultInstance
    static void _set_s_DefaultInstance(::UnityEngine::Rendering::RTHandleSystem* value);
    // static public UnityEngine.Rendering.RTHandleProperties get_rtHandleProperties()
    // Offset: 0x5253954
    static ::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties();
    // static public UnityEngine.Rendering.RTHandle Alloc(System.Int32 width, System.Int32 height, System.Int32 slices, UnityEngine.Rendering.DepthBits depthBufferBits, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, UnityEngine.FilterMode filterMode, UnityEngine.TextureWrapMode wrapMode, UnityEngine.Rendering.TextureDimension dimension, System.Boolean enableRandomWrite, System.Boolean useMipMap, System.Boolean autoGenerateMips, System.Boolean isShadowMap, System.Int32 anisoLevel, System.Single mipMapBias, UnityEngine.Rendering.MSAASamples msaaSamples, System.Boolean bindTextureMS, System.Boolean useDynamicScale, UnityEngine.RenderTextureMemoryless memoryless, UnityEngine.VRTextureUsage vrUsage, System.String name)
    // Offset: 0x524C7E0
    static ::UnityEngine::Rendering::RTHandle* Alloc(int width, int height, int slices, ::UnityEngine::Rendering::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int anisoLevel, float mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);
    // static public UnityEngine.Rendering.RTHandle Alloc(in UnityEngine.RenderTextureDescriptor descriptor, UnityEngine.FilterMode filterMode, UnityEngine.TextureWrapMode wrapMode, System.Boolean isShadowMap, System.Int32 anisoLevel, System.Single mipMapBias, System.String name)
    // Offset: 0x5253A84
    static ::UnityEngine::Rendering::RTHandle* Alloc(ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int anisoLevel, float mipMapBias, ::StringW name);
    // static public UnityEngine.Rendering.RTHandle Alloc(UnityEngine.Vector2 scaleFactor, System.Int32 slices, UnityEngine.Rendering.DepthBits depthBufferBits, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, UnityEngine.FilterMode filterMode, UnityEngine.TextureWrapMode wrapMode, UnityEngine.Rendering.TextureDimension dimension, System.Boolean enableRandomWrite, System.Boolean useMipMap, System.Boolean autoGenerateMips, System.Boolean isShadowMap, System.Int32 anisoLevel, System.Single mipMapBias, UnityEngine.Rendering.MSAASamples msaaSamples, System.Boolean bindTextureMS, System.Boolean useDynamicScale, UnityEngine.RenderTextureMemoryless memoryless, UnityEngine.VRTextureUsage vrUsage, System.String name)
    // Offset: 0x5253D04
    static ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2 scaleFactor, int slices, ::UnityEngine::Rendering::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int anisoLevel, float mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);
    // static public UnityEngine.Rendering.RTHandle Alloc(UnityEngine.Vector2 scaleFactor, in UnityEngine.RenderTextureDescriptor descriptor, UnityEngine.FilterMode filterMode, UnityEngine.TextureWrapMode wrapMode, System.Boolean isShadowMap, System.Int32 anisoLevel, System.Single mipMapBias, System.String name)
    // Offset: 0x5254124
    static ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2 scaleFactor, ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int anisoLevel, float mipMapBias, ::StringW name);
    // static public UnityEngine.Rendering.RTHandle Alloc(UnityEngine.Rendering.ScaleFunc scaleFunc, System.Int32 slices, UnityEngine.Rendering.DepthBits depthBufferBits, UnityEngine.Experimental.Rendering.GraphicsFormat colorFormat, UnityEngine.FilterMode filterMode, UnityEngine.TextureWrapMode wrapMode, UnityEngine.Rendering.TextureDimension dimension, System.Boolean enableRandomWrite, System.Boolean useMipMap, System.Boolean autoGenerateMips, System.Boolean isShadowMap, System.Int32 anisoLevel, System.Single mipMapBias, UnityEngine.Rendering.MSAASamples msaaSamples, System.Boolean bindTextureMS, System.Boolean useDynamicScale, UnityEngine.RenderTextureMemoryless memoryless, UnityEngine.VRTextureUsage vrUsage, System.String name)
    // Offset: 0x5254398
    static ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, int slices, ::UnityEngine::Rendering::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int anisoLevel, float mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);
    // static public UnityEngine.Rendering.RTHandle Alloc(UnityEngine.Rendering.ScaleFunc scaleFunc, in UnityEngine.RenderTextureDescriptor descriptor, UnityEngine.FilterMode filterMode, UnityEngine.TextureWrapMode wrapMode, System.Boolean isShadowMap, System.Int32 anisoLevel, System.Single mipMapBias, System.String name)
    // Offset: 0x5254630
    static ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int anisoLevel, float mipMapBias, ::StringW name);
    // static public UnityEngine.Rendering.RTHandle Alloc(UnityEngine.Texture tex)
    // Offset: 0x525489C
    static ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Texture* tex);
    // static public UnityEngine.Rendering.RTHandle Alloc(UnityEngine.Rendering.RenderTargetIdentifier tex)
    // Offset: 0x52549B4
    static ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier tex);
    // static public UnityEngine.Rendering.RTHandle Alloc(UnityEngine.Rendering.RenderTargetIdentifier tex, System.String name)
    // Offset: 0x5254ABC
    static ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier tex, ::StringW name);
    // static public System.Void Initialize(System.Int32 width, System.Int32 height)
    // Offset: 0x5254C40
    static void Initialize(int width, int height);
    // static public System.Void Release(UnityEngine.Rendering.RTHandle rth)
    // Offset: 0x524CA08
    static void Release(::UnityEngine::Rendering::RTHandle* rth);
    // static public System.Void SetReferenceSize(System.Int32 width, System.Int32 height)
    // Offset: 0x5254F74
    static void SetReferenceSize(int width, int height);
    // static private System.Void .cctor()
    // Offset: 0x5254FF8
    static void _cctor();
  }; // UnityEngine.Rendering.RTHandles
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::get_rtHandleProperties
// Il2CppName: get_rtHandleProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandleProperties (*)()>(&UnityEngine::Rendering::RTHandles::get_rtHandleProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "get_rtHandleProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(int, int, int, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int, float, ::UnityEngine::Rendering::MSAASamples, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&UnityEngine::Rendering::RTHandles::Alloc)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* slices = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* depthBufferBits = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DepthBits")->byval_arg;
    static auto* colorFormat = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* filterMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    static auto* wrapMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureWrapMode")->byval_arg;
    static auto* dimension = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "TextureDimension")->byval_arg;
    static auto* enableRandomWrite = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useMipMap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* autoGenerateMips = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isShadowMap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* anisoLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipMapBias = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* msaaSamples = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "MSAASamples")->byval_arg;
    static auto* bindTextureMS = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useDynamicScale = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* memoryless = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureMemoryless")->byval_arg;
    static auto* vrUsage = &::il2cpp_utils::GetClassFromName("UnityEngine", "VRTextureUsage")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale, memoryless, vrUsage, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(ByRef<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int, float, ::StringW)>(&UnityEngine::Rendering::RTHandles::Alloc)> {
  static const MethodInfo* get() {
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->this_arg;
    static auto* filterMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    static auto* wrapMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureWrapMode")->byval_arg;
    static auto* isShadowMap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* anisoLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipMapBias = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Vector2, int, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int, float, ::UnityEngine::Rendering::MSAASamples, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&UnityEngine::Rendering::RTHandles::Alloc)> {
  static const MethodInfo* get() {
    static auto* scaleFactor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* slices = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* depthBufferBits = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DepthBits")->byval_arg;
    static auto* colorFormat = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* filterMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    static auto* wrapMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureWrapMode")->byval_arg;
    static auto* dimension = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "TextureDimension")->byval_arg;
    static auto* enableRandomWrite = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useMipMap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* autoGenerateMips = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isShadowMap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* anisoLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipMapBias = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* msaaSamples = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "MSAASamples")->byval_arg;
    static auto* bindTextureMS = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useDynamicScale = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* memoryless = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureMemoryless")->byval_arg;
    static auto* vrUsage = &::il2cpp_utils::GetClassFromName("UnityEngine", "VRTextureUsage")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleFactor, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale, memoryless, vrUsage, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Vector2, ByRef<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int, float, ::StringW)>(&UnityEngine::Rendering::RTHandles::Alloc)> {
  static const MethodInfo* get() {
    static auto* scaleFactor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->this_arg;
    static auto* filterMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    static auto* wrapMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureWrapMode")->byval_arg;
    static auto* isShadowMap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* anisoLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipMapBias = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleFactor, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::ScaleFunc*, int, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, bool, bool, bool, bool, int, float, ::UnityEngine::Rendering::MSAASamples, bool, bool, ::UnityEngine::RenderTextureMemoryless, ::UnityEngine::VRTextureUsage, ::StringW)>(&UnityEngine::Rendering::RTHandles::Alloc)> {
  static const MethodInfo* get() {
    static auto* scaleFunc = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScaleFunc")->byval_arg;
    static auto* slices = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* depthBufferBits = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DepthBits")->byval_arg;
    static auto* colorFormat = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* filterMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    static auto* wrapMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureWrapMode")->byval_arg;
    static auto* dimension = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "TextureDimension")->byval_arg;
    static auto* enableRandomWrite = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useMipMap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* autoGenerateMips = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isShadowMap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* anisoLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipMapBias = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* msaaSamples = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "MSAASamples")->byval_arg;
    static auto* bindTextureMS = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useDynamicScale = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* memoryless = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureMemoryless")->byval_arg;
    static auto* vrUsage = &::il2cpp_utils::GetClassFromName("UnityEngine", "VRTextureUsage")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleFunc, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale, memoryless, vrUsage, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::ScaleFunc*, ByRef<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int, float, ::StringW)>(&UnityEngine::Rendering::RTHandles::Alloc)> {
  static const MethodInfo* get() {
    static auto* scaleFunc = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScaleFunc")->byval_arg;
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->this_arg;
    static auto* filterMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    static auto* wrapMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureWrapMode")->byval_arg;
    static auto* isShadowMap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* anisoLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipMapBias = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleFunc, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Texture*)>(&UnityEngine::Rendering::RTHandles::Alloc)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(&UnityEngine::Rendering::RTHandles::Alloc)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::Alloc
// Il2CppName: Alloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::StringW)>(&UnityEngine::Rendering::RTHandles::Alloc)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "Alloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int)>(&UnityEngine::Rendering::RTHandles::Initialize)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RTHandle*)>(&UnityEngine::Rendering::RTHandles::Release)> {
  static const MethodInfo* get() {
    static auto* rth = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RTHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rth});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::SetReferenceSize
// Il2CppName: SetReferenceSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int)>(&UnityEngine::Rendering::RTHandles::SetReferenceSize)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), "SetReferenceSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandles::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::RTHandles::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandles*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};