// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Input.OneEuroFilterPropertyBlock
#include "Oculus/Interaction/Input/OneEuroFilterPropertyBlock.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IOneEuroFilter`1<TData>
  template<typename TData>
  class IOneEuroFilter_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Utils
namespace Oculus::Interaction::Utils {
  // Forward declaring type: FilteredTransform
  class FilteredTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Utils::FilteredTransform);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Utils::FilteredTransform*, "Oculus.Interaction.Utils", "FilteredTransform");
// Type namespace: Oculus.Interaction.Utils
namespace Oculus::Interaction::Utils {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Utils.FilteredTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class FilteredTransform : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Transform _sourceTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* sourceTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean _filterPosition
    // Size: 0x1
    // Offset: 0x28
    bool filterPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: filterPosition and: positionFilterProperties
    char __padding1[0x3] = {};
    // private Oculus.Interaction.Input.OneEuroFilterPropertyBlock _positionFilterProperties
    // Size: 0xC
    // Offset: 0x2C
    ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock positionFilterProperties;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock) == 0xC);
    // private System.Boolean _filterRotation
    // Size: 0x1
    // Offset: 0x38
    bool filterRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: filterRotation and: rotationFilterProperties
    char __padding3[0x3] = {};
    // private Oculus.Interaction.Input.OneEuroFilterPropertyBlock _rotationFilterProperties
    // Size: 0xC
    // Offset: 0x3C
    ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock rotationFilterProperties;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock) == 0xC);
    // private Oculus.Interaction.Input.IOneEuroFilter`1<UnityEngine.Vector3> _positionFilter
    // Size: 0x8
    // Offset: 0x48
    ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>* positionFilter;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*) == 0x8);
    // private Oculus.Interaction.Input.IOneEuroFilter`1<UnityEngine.Quaternion> _rotationFilter
    // Size: 0x8
    // Offset: 0x50
    ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>* rotationFilter;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Transform _sourceTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__sourceTransform();
    // Get instance field reference: private System.Boolean _filterPosition
    [[deprecated("Use field access instead!")]] bool& dyn__filterPosition();
    // Get instance field reference: private Oculus.Interaction.Input.OneEuroFilterPropertyBlock _positionFilterProperties
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& dyn__positionFilterProperties();
    // Get instance field reference: private System.Boolean _filterRotation
    [[deprecated("Use field access instead!")]] bool& dyn__filterRotation();
    // Get instance field reference: private Oculus.Interaction.Input.OneEuroFilterPropertyBlock _rotationFilterProperties
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& dyn__rotationFilterProperties();
    // Get instance field reference: private Oculus.Interaction.Input.IOneEuroFilter`1<UnityEngine.Vector3> _positionFilter
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*& dyn__positionFilter();
    // Get instance field reference: private Oculus.Interaction.Input.IOneEuroFilter`1<UnityEngine.Quaternion> _rotationFilter
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*& dyn__rotationFilter();
    // protected System.Void Start()
    // Offset: 0x4811E2C
    void Start();
    // protected System.Void Update()
    // Offset: 0x48121D0
    void Update();
    // public System.Void InjectAllFilteredTransform(UnityEngine.Transform sourceTransform)
    // Offset: 0x481251C
    void InjectAllFilteredTransform(::UnityEngine::Transform* sourceTransform);
    // public System.Void InjectSourceTransform(UnityEngine.Transform sourceTransform)
    // Offset: 0x4812524
    void InjectSourceTransform(::UnityEngine::Transform* sourceTransform);
    // public System.Void .ctor()
    // Offset: 0x481252C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FilteredTransform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Utils::FilteredTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FilteredTransform*, creationType>()));
    }
  }; // Oculus.Interaction.Utils.FilteredTransform
  #pragma pack(pop)
  static check_size<sizeof(FilteredTransform), 80 + sizeof(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*)> __Oculus_Interaction_Utils_FilteredTransformSizeCheck;
  static_assert(sizeof(FilteredTransform) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Utils::FilteredTransform::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Utils::FilteredTransform::*)()>(&Oculus::Interaction::Utils::FilteredTransform::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Utils::FilteredTransform*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Utils::FilteredTransform::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Utils::FilteredTransform::*)()>(&Oculus::Interaction::Utils::FilteredTransform::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Utils::FilteredTransform*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Utils::FilteredTransform::InjectAllFilteredTransform
// Il2CppName: InjectAllFilteredTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Utils::FilteredTransform::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::Utils::FilteredTransform::InjectAllFilteredTransform)> {
  static const MethodInfo* get() {
    static auto* sourceTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Utils::FilteredTransform*), "InjectAllFilteredTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceTransform});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Utils::FilteredTransform::InjectSourceTransform
// Il2CppName: InjectSourceTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Utils::FilteredTransform::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::Utils::FilteredTransform::InjectSourceTransform)> {
  static const MethodInfo* get() {
    static auto* sourceTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Utils::FilteredTransform*), "InjectSourceTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceTransform});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Utils::FilteredTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!