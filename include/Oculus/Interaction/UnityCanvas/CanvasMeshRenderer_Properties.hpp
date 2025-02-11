// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.UnityCanvas.CanvasMeshRenderer
#include "Oculus/Interaction/UnityCanvas/CanvasMeshRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::Properties);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::Properties*, "Oculus.Interaction.UnityCanvas", "CanvasMeshRenderer/Properties");
// Type namespace: Oculus.Interaction.UnityCanvas
namespace Oculus::Interaction::UnityCanvas {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.UnityCanvas.CanvasMeshRenderer/Properties
  // [TokenAttribute] Offset: FFFFFFFF
  class CanvasMeshRenderer::Properties : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.String RenderingMode
    static ::StringW _get_RenderingMode();
    // Set static field: static public readonly System.String RenderingMode
    static void _set_RenderingMode(::StringW value);
    // Get static field: static public readonly System.String UseAlphaToMask
    static ::StringW _get_UseAlphaToMask();
    // Set static field: static public readonly System.String UseAlphaToMask
    static void _set_UseAlphaToMask(::StringW value);
    // Get static field: static public readonly System.String AlphaCutoutThreshold
    static ::StringW _get_AlphaCutoutThreshold();
    // Set static field: static public readonly System.String AlphaCutoutThreshold
    static void _set_AlphaCutoutThreshold(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x47DF5C4
    static void _cctor();
  }; // Oculus.Interaction.UnityCanvas.CanvasMeshRenderer/Properties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::Properties::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::Properties::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasMeshRenderer::Properties*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
