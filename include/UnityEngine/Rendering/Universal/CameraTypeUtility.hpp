// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: CameraRenderType
  struct CameraRenderType;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: CameraTypeUtility
  class CameraTypeUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::CameraTypeUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CameraTypeUtility*, "UnityEngine.Rendering.Universal", "CameraTypeUtility");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.CameraTypeUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class CameraTypeUtility : public ::Il2CppObject {
    public:
    // Get static field: static private System.String[] s_CameraTypeNames
    static ::ArrayW<::StringW> _get_s_CameraTypeNames();
    // Set static field: static private System.String[] s_CameraTypeNames
    static void _set_s_CameraTypeNames(::ArrayW<::StringW> value);
    // static public System.String GetName(UnityEngine.Rendering.Universal.CameraRenderType type)
    // Offset: 0x52E6B14
    static ::StringW GetName(::UnityEngine::Rendering::Universal::CameraRenderType type);
    // static private System.Void .cctor()
    // Offset: 0x52E6BC0
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.CameraTypeUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::CameraTypeUtility::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Rendering::Universal::CameraRenderType)>(&UnityEngine::Rendering::Universal::CameraTypeUtility::GetName)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "CameraRenderType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::CameraTypeUtility*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::CameraTypeUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::CameraTypeUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::CameraTypeUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
