// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.UnityCanvas.CanvasRenderTexture
#include "Oculus/Interaction/UnityCanvas/CanvasRenderTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture::Properties);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture::Properties*, "Oculus.Interaction.UnityCanvas", "CanvasRenderTexture/Properties");
// Type namespace: Oculus.Interaction.UnityCanvas
namespace Oculus::Interaction::UnityCanvas {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.UnityCanvas.CanvasRenderTexture/Properties
  // [TokenAttribute] Offset: FFFFFFFF
  class CanvasRenderTexture::Properties : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.String DimensionDriveMode
    static ::StringW _get_DimensionDriveMode();
    // Set static field: static public readonly System.String DimensionDriveMode
    static void _set_DimensionDriveMode(::StringW value);
    // Get static field: static public readonly System.String Resolution
    static ::StringW _get_Resolution();
    // Set static field: static public readonly System.String Resolution
    static void _set_Resolution(::StringW value);
    // Get static field: static public readonly System.String RenderScale
    static ::StringW _get_RenderScale();
    // Set static field: static public readonly System.String RenderScale
    static void _set_RenderScale(::StringW value);
    // Get static field: static public readonly System.String PixelsPerUnit
    static ::StringW _get_PixelsPerUnit();
    // Set static field: static public readonly System.String PixelsPerUnit
    static void _set_PixelsPerUnit(::StringW value);
    // Get static field: static public readonly System.String RenderLayers
    static ::StringW _get_RenderLayers();
    // Set static field: static public readonly System.String RenderLayers
    static void _set_RenderLayers(::StringW value);
    // Get static field: static public readonly System.String GenerateMipMaps
    static ::StringW _get_GenerateMipMaps();
    // Set static field: static public readonly System.String GenerateMipMaps
    static void _set_GenerateMipMaps(::StringW value);
    // Get static field: static public readonly System.String Canvas
    static ::StringW _get_Canvas();
    // Set static field: static public readonly System.String Canvas
    static void _set_Canvas(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x47E1380
    static void _cctor();
  }; // Oculus.Interaction.UnityCanvas.CanvasRenderTexture/Properties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasRenderTexture::Properties::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::UnityCanvas::CanvasRenderTexture::Properties::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasRenderTexture::Properties*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};