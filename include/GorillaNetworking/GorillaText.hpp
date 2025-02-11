// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent`1<T0>
  template<typename T0>
  class UnityEvent_1;
}
// Completed forward declares
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Forward declaring type: GorillaText
  class GorillaText;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::GorillaText);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::GorillaText*, "GorillaNetworking", "GorillaText");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.GorillaText
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaText : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.UI.Text text
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UI::Text* text;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private System.String failureText
    // Size: 0x8
    // Offset: 0x18
    ::StringW failureText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String originalText
    // Size: 0x8
    // Offset: 0x20
    ::StringW originalText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean failedState
    // Size: 0x1
    // Offset: 0x28
    bool failedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: failedState and: originalMaterials
    char __padding3[0x7] = {};
    // private UnityEngine.Material[] originalMaterials
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Material*> originalMaterials;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // private UnityEngine.Material failureMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* failureMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // UnityEngine.Material[] currentMaterials
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Material*> currentMaterials;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // private UnityEngine.Events.UnityEvent`1<System.String> updateTextCallback
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Events::UnityEvent_1<::StringW>* updateTextCallback;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent_1<::StringW>*) == 0x8);
    // private UnityEngine.Events.UnityEvent`1<UnityEngine.Material[]> updateMaterialCallback
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>* updateMaterialCallback;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Text text
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_text();
    // Get instance field reference: private System.String failureText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_failureText();
    // Get instance field reference: private System.String originalText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_originalText();
    // Get instance field reference: private System.Boolean failedState
    [[deprecated("Use field access instead!")]] bool& dyn_failedState();
    // Get instance field reference: private UnityEngine.Material[] originalMaterials
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_originalMaterials();
    // Get instance field reference: private UnityEngine.Material failureMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_failureMaterial();
    // Get instance field reference: UnityEngine.Material[] currentMaterials
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_currentMaterials();
    // Get instance field reference: private UnityEngine.Events.UnityEvent`1<System.String> updateTextCallback
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent_1<::StringW>*& dyn_updateTextCallback();
    // Get instance field reference: private UnityEngine.Events.UnityEvent`1<UnityEngine.Material[]> updateMaterialCallback
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>*& dyn_updateMaterialCallback();
    // public System.Void Initialize(UnityEngine.Material[] originalMaterials, UnityEngine.Material failureMaterial, UnityEngine.Events.UnityEvent`1<System.String> callback, UnityEngine.Events.UnityEvent`1<UnityEngine.Material[]> materialCallback)
    // Offset: 0x2849320
    void Initialize(::ArrayW<::UnityEngine::Material*> originalMaterials, ::UnityEngine::Material* failureMaterial, ::UnityEngine::Events::UnityEvent_1<::StringW>* callback, ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>* materialCallback);
    // public System.String get_Text()
    // Offset: 0x2853220
    ::StringW get_Text();
    // public System.Void set_Text(System.String value)
    // Offset: 0x284F1D8
    void set_Text(::StringW value);
    // public System.Void EnableFailedState(System.String failText)
    // Offset: 0x28508CC
    void EnableFailedState(::StringW failText);
    // public System.Void DisableFailedState()
    // Offset: 0x2850A58
    void DisableFailedState();
    // public System.Void .ctor()
    // Offset: 0x2853228
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaText* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::GorillaText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaText*, creationType>()));
    }
  }; // GorillaNetworking.GorillaText
  #pragma pack(pop)
  static check_size<sizeof(GorillaText), 80 + sizeof(::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>*)> __GorillaNetworking_GorillaTextSizeCheck;
  static_assert(sizeof(GorillaText) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::GorillaText::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaText::*)(::ArrayW<::UnityEngine::Material*>, ::UnityEngine::Material*, ::UnityEngine::Events::UnityEvent_1<::StringW>*, ::UnityEngine::Events::UnityEvent_1<::ArrayW<::UnityEngine::Material*>>*)>(&GorillaNetworking::GorillaText::Initialize)> {
  static const MethodInfo* get() {
    static auto* originalMaterials = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    static auto* failureMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityEvent`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* materialCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityEvent`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaText*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{originalMaterials, failureMaterial, callback, materialCallback});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaText::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GorillaNetworking::GorillaText::*)()>(&GorillaNetworking::GorillaText::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaText*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaText::set_Text
// Il2CppName: set_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaText::*)(::StringW)>(&GorillaNetworking::GorillaText::set_Text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaText*), "set_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaText::EnableFailedState
// Il2CppName: EnableFailedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaText::*)(::StringW)>(&GorillaNetworking::GorillaText::EnableFailedState)> {
  static const MethodInfo* get() {
    static auto* failText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaText*), "EnableFailedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failText});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaText::DisableFailedState
// Il2CppName: DisableFailedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::GorillaText::*)()>(&GorillaNetworking::GorillaText::DisableFailedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::GorillaText*), "DisableFailedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::GorillaText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
