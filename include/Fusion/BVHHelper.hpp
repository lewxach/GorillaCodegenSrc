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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: RadialNodeTraversalTest
  class RadialNodeTraversalTest;
  // Forward declaring type: RayNodeTraversalTest
  class RayNodeTraversalTest;
  // Forward declaring type: AabbNodeTraversalTest
  class AabbNodeTraversalTest;
  // Forward declaring type: IBoundsTraversalTest
  class IBoundsTraversalTest;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: BVHHelper
  class BVHHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::BVHHelper);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BVHHelper*, "Fusion", "BVHHelper");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.BVHHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class BVHHelper : public ::Il2CppObject {
    public:
    public:
    // private Fusion.RadialNodeTraversalTest RadialNodeTest
    // Size: 0x8
    // Offset: 0x10
    ::Fusion::RadialNodeTraversalTest* RadialNodeTest;
    // Field size check
    static_assert(sizeof(::Fusion::RadialNodeTraversalTest*) == 0x8);
    // private Fusion.RayNodeTraversalTest RayNodeTest
    // Size: 0x8
    // Offset: 0x18
    ::Fusion::RayNodeTraversalTest* RayNodeTest;
    // Field size check
    static_assert(sizeof(::Fusion::RayNodeTraversalTest*) == 0x8);
    // private Fusion.AabbNodeTraversalTest AabbNodeTest
    // Size: 0x8
    // Offset: 0x20
    ::Fusion::AabbNodeTraversalTest* AabbNodeTest;
    // Field size check
    static_assert(sizeof(::Fusion::AabbNodeTraversalTest*) == 0x8);
    public:
    // Get instance field reference: private Fusion.RadialNodeTraversalTest RadialNodeTest
    [[deprecated("Use field access instead!")]] ::Fusion::RadialNodeTraversalTest*& dyn_RadialNodeTest();
    // Get instance field reference: private Fusion.RayNodeTraversalTest RayNodeTest
    [[deprecated("Use field access instead!")]] ::Fusion::RayNodeTraversalTest*& dyn_RayNodeTest();
    // Get instance field reference: private Fusion.AabbNodeTraversalTest AabbNodeTest
    [[deprecated("Use field access instead!")]] ::Fusion::AabbNodeTraversalTest*& dyn_AabbNodeTest();
    // Fusion.IBoundsTraversalTest RadialNodeTraversalTest(UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0x2B347C4
    ::Fusion::IBoundsTraversalTest* RadialNodeTraversalTest(::UnityEngine::Vector3 center, float radius);
    // Fusion.IBoundsTraversalTest RayNodeTraversalTest(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single length)
    // Offset: 0x2B347E8
    ::Fusion::IBoundsTraversalTest* RayNodeTraversalTest(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float length);
    // Fusion.IBoundsTraversalTest AabbNodeTraversalTest(UnityEngine.Vector3 center, UnityEngine.Vector3 extent)
    // Offset: 0x2B34814
    ::Fusion::IBoundsTraversalTest* AabbNodeTraversalTest(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 extent);
    // public System.Void .ctor()
    // Offset: 0x2B34850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BVHHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::BVHHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BVHHelper*, creationType>()));
    }
  }; // Fusion.BVHHelper
  #pragma pack(pop)
  static check_size<sizeof(BVHHelper), 32 + sizeof(::Fusion::AabbNodeTraversalTest*)> __Fusion_BVHHelperSizeCheck;
  static_assert(sizeof(BVHHelper) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::BVHHelper::RadialNodeTraversalTest
// Il2CppName: RadialNodeTraversalTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::IBoundsTraversalTest* (Fusion::BVHHelper::*)(::UnityEngine::Vector3, float)>(&Fusion::BVHHelper::RadialNodeTraversalTest)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BVHHelper*), "RadialNodeTraversalTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, radius});
  }
};
// Writing MetadataGetter for method: Fusion::BVHHelper::RayNodeTraversalTest
// Il2CppName: RayNodeTraversalTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::IBoundsTraversalTest* (Fusion::BVHHelper::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&Fusion::BVHHelper::RayNodeTraversalTest)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BVHHelper*), "RayNodeTraversalTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, length});
  }
};
// Writing MetadataGetter for method: Fusion::BVHHelper::AabbNodeTraversalTest
// Il2CppName: AabbNodeTraversalTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::IBoundsTraversalTest* (Fusion::BVHHelper::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Fusion::BVHHelper::AabbNodeTraversalTest)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* extent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BVHHelper*), "AabbNodeTraversalTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, extent});
  }
};
// Writing MetadataGetter for method: Fusion::BVHHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
