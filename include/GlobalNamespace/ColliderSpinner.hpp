// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BoingKit.Vector3Spring
#include "BoingKit/Vector3Spring.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColliderSpinner
  class ColliderSpinner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColliderSpinner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColliderSpinner*, "", "ColliderSpinner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: ColliderSpinner
  // [TokenAttribute] Offset: FFFFFFFF
  class ColliderSpinner : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform Target
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* Target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 m_targetOffset
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 m_targetOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private BoingKit.Vector3Spring m_spring
    // Size: 0x20
    // Offset: 0x34
    ::BoingKit::Vector3Spring m_spring;
    // Field size check
    static_assert(sizeof(::BoingKit::Vector3Spring) == 0x20);
    public:
    // Get instance field reference: public UnityEngine.Transform Target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_Target();
    // Get instance field reference: private UnityEngine.Vector3 m_targetOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_targetOffset();
    // Get instance field reference: private BoingKit.Vector3Spring m_spring
    [[deprecated("Use field access instead!")]] ::BoingKit::Vector3Spring& dyn_m_spring();
    // private System.Void Start()
    // Offset: 0x2681E94
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x2681FB8
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x2682054
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColliderSpinner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColliderSpinner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColliderSpinner*, creationType>()));
    }
  }; // ColliderSpinner
  #pragma pack(pop)
  static check_size<sizeof(ColliderSpinner), 52 + sizeof(::BoingKit::Vector3Spring)> __GlobalNamespace_ColliderSpinnerSizeCheck;
  static_assert(sizeof(ColliderSpinner) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColliderSpinner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColliderSpinner::*)()>(&GlobalNamespace::ColliderSpinner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColliderSpinner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColliderSpinner::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColliderSpinner::*)()>(&GlobalNamespace::ColliderSpinner::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColliderSpinner*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColliderSpinner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!