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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TasselPhysics
  class TasselPhysics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TasselPhysics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TasselPhysics*, "", "TasselPhysics");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: TasselPhysics
  // [TokenAttribute] Offset: FFFFFFFF
  class TasselPhysics : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.GameObject[] tasselInstances
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::GameObject*> tasselInstances;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private UnityEngine.Vector3 localCenterOfMass
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 localCenterOfMass;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single gravityStrength
    // Size: 0x4
    // Offset: 0x34
    float gravityStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single drag
    // Size: 0x4
    // Offset: 0x38
    float drag;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastCenterPos
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 lastCenterPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 velocity
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single centerOfMassLength
    // Size: 0x4
    // Offset: 0x54
    float centerOfMassLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.GameObject[] tasselInstances
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_tasselInstances();
    // Get instance field reference: private UnityEngine.Vector3 localCenterOfMass
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_localCenterOfMass();
    // Get instance field reference: private System.Single gravityStrength
    [[deprecated("Use field access instead!")]] float& dyn_gravityStrength();
    // Get instance field reference: private System.Single drag
    [[deprecated("Use field access instead!")]] float& dyn_drag();
    // Get instance field reference: private UnityEngine.Vector3 lastCenterPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastCenterPos();
    // Get instance field reference: private UnityEngine.Vector3 velocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_velocity();
    // Get instance field reference: private System.Single centerOfMassLength
    [[deprecated("Use field access instead!")]] float& dyn_centerOfMassLength();
    // private System.Void Awake()
    // Offset: 0x278BC20
    void Awake();
    // private System.Void Update()
    // Offset: 0x278BCA4
    void Update();
    // public System.Void .ctor()
    // Offset: 0x278BF2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TasselPhysics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TasselPhysics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TasselPhysics*, creationType>()));
    }
  }; // TasselPhysics
  #pragma pack(pop)
  static check_size<sizeof(TasselPhysics), 84 + sizeof(float)> __GlobalNamespace_TasselPhysicsSizeCheck;
  static_assert(sizeof(TasselPhysics) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TasselPhysics::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TasselPhysics::*)()>(&GlobalNamespace::TasselPhysics::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TasselPhysics*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TasselPhysics::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TasselPhysics::*)()>(&GlobalNamespace::TasselPhysics::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TasselPhysics*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TasselPhysics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
