// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: UnityEngine::UIElements::Experimental
namespace UnityEngine::UIElements::Experimental {
  // Forward declaring type: StyleValues
  struct StyleValues;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.Experimental
namespace UnityEngine::UIElements::Experimental {
  // Forward declaring type: Lerp
  class Lerp;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::Lerp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::Lerp*, "UnityEngine.UIElements.Experimental", "Lerp");
// Type namespace: UnityEngine.UIElements.Experimental
namespace UnityEngine::UIElements::Experimental {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.Experimental.Lerp
  // [TokenAttribute] Offset: FFFFFFFF
  class Lerp : public ::Il2CppObject {
    public:
    // static public System.Single Interpolate(System.Single start, System.Single end, System.Single ratio)
    // Offset: 0x56064E8
    static float Interpolate(float start, float end, float ratio);
    // static public UnityEngine.Color Interpolate(UnityEngine.Color start, UnityEngine.Color end, System.Single ratio)
    // Offset: 0x56064F8
    static ::UnityEngine::Color Interpolate(::UnityEngine::Color start, ::UnityEngine::Color end, float ratio);
    // static UnityEngine.UIElements.Experimental.StyleValues Interpolate(UnityEngine.UIElements.Experimental.StyleValues start, UnityEngine.UIElements.Experimental.StyleValues end, System.Single ratio)
    // Offset: 0x5606530
    static ::UnityEngine::UIElements::Experimental::StyleValues Interpolate(::UnityEngine::UIElements::Experimental::StyleValues start, ::UnityEngine::UIElements::Experimental::StyleValues end, float ratio);
  }; // UnityEngine.UIElements.Experimental.Lerp
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Experimental::Lerp::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&UnityEngine::UIElements::Experimental::Lerp::Interpolate)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* ratio = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Experimental::Lerp*), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, ratio});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Experimental::Lerp::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, ::UnityEngine::Color, float)>(&UnityEngine::UIElements::Experimental::Lerp::Interpolate)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* ratio = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Experimental::Lerp*), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, ratio});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Experimental::Lerp::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Experimental::StyleValues (*)(::UnityEngine::UIElements::Experimental::StyleValues, ::UnityEngine::UIElements::Experimental::StyleValues, float)>(&UnityEngine::UIElements::Experimental::Lerp::Interpolate)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.Experimental", "StyleValues")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.Experimental", "StyleValues")->byval_arg;
    static auto* ratio = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Experimental::Lerp*), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, ratio});
  }
};
