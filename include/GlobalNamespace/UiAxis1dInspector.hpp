// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Slider
  class Slider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UiAxis1dInspector
  class UiAxis1dInspector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UiAxis1dInspector);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UiAxis1dInspector*, "", "UiAxis1dInspector");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UiAxis1dInspector
  // [TokenAttribute] Offset: FFFFFFFF
  class UiAxis1dInspector : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single m_minExtent
    // Size: 0x4
    // Offset: 0x20
    float m_minExtent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_maxExtent
    // Size: 0x4
    // Offset: 0x24
    float m_maxExtent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private TMPro.TextMeshProUGUI m_nameLabel
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshProUGUI* m_nameLabel;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI m_valueLabel
    // Size: 0x8
    // Offset: 0x30
    ::TMPro::TextMeshProUGUI* m_valueLabel;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Slider m_slider
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Slider* m_slider;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Slider*) == 0x8);
    public:
    // Get instance field reference: private System.Single m_minExtent
    [[deprecated("Use field access instead!")]] float& dyn_m_minExtent();
    // Get instance field reference: private System.Single m_maxExtent
    [[deprecated("Use field access instead!")]] float& dyn_m_maxExtent();
    // Get instance field reference: private TMPro.TextMeshProUGUI m_nameLabel
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn_m_nameLabel();
    // Get instance field reference: private TMPro.TextMeshProUGUI m_valueLabel
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn_m_valueLabel();
    // Get instance field reference: private UnityEngine.UI.Slider m_slider
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Slider*& dyn_m_slider();
    // public System.Void SetExtents(System.Single minExtent, System.Single maxExtent)
    // Offset: 0x294D6C4
    void SetExtents(float minExtent, float maxExtent);
    // public System.Void SetName(System.String name)
    // Offset: 0x294D6CC
    void SetName(::StringW name);
    // public System.Void SetValue(System.Single value)
    // Offset: 0x294D6F0
    void SetValue(float value);
    // public System.Void .ctor()
    // Offset: 0x294D7F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UiAxis1dInspector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UiAxis1dInspector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UiAxis1dInspector*, creationType>()));
    }
  }; // UiAxis1dInspector
  #pragma pack(pop)
  static check_size<sizeof(UiAxis1dInspector), 56 + sizeof(::UnityEngine::UI::Slider*)> __GlobalNamespace_UiAxis1dInspectorSizeCheck;
  static_assert(sizeof(UiAxis1dInspector) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UiAxis1dInspector::SetExtents
// Il2CppName: SetExtents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UiAxis1dInspector::*)(float, float)>(&GlobalNamespace::UiAxis1dInspector::SetExtents)> {
  static const MethodInfo* get() {
    static auto* minExtent = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxExtent = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UiAxis1dInspector*), "SetExtents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minExtent, maxExtent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UiAxis1dInspector::SetName
// Il2CppName: SetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UiAxis1dInspector::*)(::StringW)>(&GlobalNamespace::UiAxis1dInspector::SetName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UiAxis1dInspector*), "SetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UiAxis1dInspector::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UiAxis1dInspector::*)(float)>(&GlobalNamespace::UiAxis1dInspector::SetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UiAxis1dInspector*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UiAxis1dInspector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
