// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.IBoundsTraversalTest
#include "Fusion/IBoundsTraversalTest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: RayNodeTraversalTest
  class RayNodeTraversalTest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::RayNodeTraversalTest);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::RayNodeTraversalTest*, "Fusion", "RayNodeTraversalTest");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.RayNodeTraversalTest
  // [TokenAttribute] Offset: FFFFFFFF
  class RayNodeTraversalTest : public ::Il2CppObject/*, public ::Fusion::IBoundsTraversalTest*/ {
    public:
    public:
    // private UnityEngine.Vector3 _origin
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 origin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _direction
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 direction;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _length
    // Size: 0x4
    // Offset: 0x28
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Fusion::IBoundsTraversalTest
    operator ::Fusion::IBoundsTraversalTest() noexcept {
      return *reinterpret_cast<::Fusion::IBoundsTraversalTest*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3 _origin
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__origin();
    // Get instance field reference: private UnityEngine.Vector3 _direction
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__direction();
    // Get instance field reference: private System.Single _length
    [[deprecated("Use field access instead!")]] float& dyn__length();
    // System.Void .ctor(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single length)
    // Offset: 0x2B34464
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RayNodeTraversalTest* New_ctor(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::RayNodeTraversalTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RayNodeTraversalTest*, creationType>(origin, direction, length)));
    }
    // System.Void SetTestSettings(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single length)
    // Offset: 0x2B344C8
    void SetTestSettings(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float length);
    // public System.Boolean Check(ref Fusion.BVHNode/CachedBounds bounds)
    // Offset: 0x2B344DC
    bool Check(ByRef<::Fusion::BVHNode::CachedBounds> bounds);
  }; // Fusion.RayNodeTraversalTest
  #pragma pack(pop)
  static check_size<sizeof(RayNodeTraversalTest), 40 + sizeof(float)> __Fusion_RayNodeTraversalTestSizeCheck;
  static_assert(sizeof(RayNodeTraversalTest) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::RayNodeTraversalTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::RayNodeTraversalTest::SetTestSettings
// Il2CppName: SetTestSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::RayNodeTraversalTest::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&Fusion::RayNodeTraversalTest::SetTestSettings)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::RayNodeTraversalTest*), "SetTestSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, length});
  }
};
// Writing MetadataGetter for method: Fusion::RayNodeTraversalTest::Check
// Il2CppName: Check
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::RayNodeTraversalTest::*)(ByRef<::Fusion::BVHNode::CachedBounds>)>(&Fusion::RayNodeTraversalTest::Check)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("Fusion", "BVHNode/CachedBounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::RayNodeTraversalTest*), "Check", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds});
  }
};
