// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer
#include "Oculus/Interaction/UnityCanvas/OVRCanvasMeshRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::Properties);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::Properties*, "Oculus.Interaction.UnityCanvas", "OVRCanvasMeshRenderer/Properties");
// Type namespace: Oculus.Interaction.UnityCanvas
namespace Oculus::Interaction::UnityCanvas {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer/Properties
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRCanvasMeshRenderer::Properties : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.String CanvasRenderTexture
    static ::StringW _get_CanvasRenderTexture();
    // Set static field: static public readonly System.String CanvasRenderTexture
    static void _set_CanvasRenderTexture(::StringW value);
    // Get static field: static public readonly System.String CanvasMesh
    static ::StringW _get_CanvasMesh();
    // Set static field: static public readonly System.String CanvasMesh
    static void _set_CanvasMesh(::StringW value);
    // Get static field: static public readonly System.String EnableSuperSampling
    static ::StringW _get_EnableSuperSampling();
    // Set static field: static public readonly System.String EnableSuperSampling
    static void _set_EnableSuperSampling(::StringW value);
    // Get static field: static public readonly System.String EmulateWhileInEditor
    static ::StringW _get_EmulateWhileInEditor();
    // Set static field: static public readonly System.String EmulateWhileInEditor
    static void _set_EmulateWhileInEditor(::StringW value);
    // Get static field: static public readonly System.String DoUnderlayAntiAliasing
    static ::StringW _get_DoUnderlayAntiAliasing();
    // Set static field: static public readonly System.String DoUnderlayAntiAliasing
    static void _set_DoUnderlayAntiAliasing(::StringW value);
    // Get static field: static public readonly System.String RuntimeOffset
    static ::StringW _get_RuntimeOffset();
    // Set static field: static public readonly System.String RuntimeOffset
    static void _set_RuntimeOffset(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x478E670
    static void _cctor();
  }; // Oculus.Interaction.UnityCanvas.OVRCanvasMeshRenderer/Properties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::Properties::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::Properties::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::OVRCanvasMeshRenderer::Properties*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};