// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: Shaders
  class Shaders;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Shaders);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Shaders*, "UnityEngine.UIElements.UIR", "Shaders");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIR.Shaders
  // [TokenAttribute] Offset: FFFFFFFF
  class Shaders : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.String k_AtlasBlit
    static ::StringW _get_k_AtlasBlit();
    // Set static field: static public readonly System.String k_AtlasBlit
    static void _set_k_AtlasBlit(::StringW value);
    // Get static field: static public readonly System.String k_Editor
    static ::StringW _get_k_Editor();
    // Set static field: static public readonly System.String k_Editor
    static void _set_k_Editor(::StringW value);
    // Get static field: static public readonly System.String k_Runtime
    static ::StringW _get_k_Runtime();
    // Set static field: static public readonly System.String k_Runtime
    static void _set_k_Runtime(::StringW value);
    // Get static field: static public readonly System.String k_RuntimeWorld
    static ::StringW _get_k_RuntimeWorld();
    // Set static field: static public readonly System.String k_RuntimeWorld
    static void _set_k_RuntimeWorld(::StringW value);
    // Get static field: static public readonly System.String k_GraphView
    static ::StringW _get_k_GraphView();
    // Set static field: static public readonly System.String k_GraphView
    static void _set_k_GraphView(::StringW value);
    // Get static field: static public readonly System.String k_ColorConversionBlit
    static ::StringW _get_k_ColorConversionBlit();
    // Set static field: static public readonly System.String k_ColorConversionBlit
    static void _set_k_ColorConversionBlit(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x55D3098
    static void _cctor();
  }; // UnityEngine.UIElements.UIR.Shaders
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Shaders::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIR::Shaders::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Shaders*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
