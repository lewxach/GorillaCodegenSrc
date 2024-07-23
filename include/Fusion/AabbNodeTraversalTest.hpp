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
  // Forward declaring type: AabbNodeTraversalTest
  class AabbNodeTraversalTest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::AabbNodeTraversalTest);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::AabbNodeTraversalTest*, "Fusion", "AabbNodeTraversalTest");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.AabbNodeTraversalTest
  // [TokenAttribute] Offset: FFFFFFFF
  class AabbNodeTraversalTest : public ::Il2CppObject/*, public ::Fusion::IBoundsTraversalTest*/ {
    public:
    public:
    // private UnityEngine.Vector3 _min
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 min;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _max
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 max;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::Fusion::IBoundsTraversalTest
    operator ::Fusion::IBoundsTraversalTest() noexcept {
      return *reinterpret_cast<::Fusion::IBoundsTraversalTest*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3 _min
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__min();
    // Get instance field reference: private UnityEngine.Vector3 _max
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__max();
    // System.Void .ctor(UnityEngine.Vector3 center, UnityEngine.Vector3 extents)
    // Offset: 0x2B346C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AabbNodeTraversalTest* New_ctor(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 extents) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::AabbNodeTraversalTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AabbNodeTraversalTest*, creationType>(center, extents)));
    }
    // System.Void SetTestSettings(UnityEngine.Vector3 center, UnityEngine.Vector3 extents)
    // Offset: 0x2B34730
    void SetTestSettings(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 extents);
    // public System.Boolean Check(ref Fusion.BVHNode/CachedBounds bounds)
    // Offset: 0x2B34758
    bool Check(ByRef<::Fusion::BVHNode::CachedBounds> bounds);
  }; // Fusion.AabbNodeTraversalTest
  #pragma pack(pop)
  static check_size<sizeof(AabbNodeTraversalTest), 28 + sizeof(::UnityEngine::Vector3)> __Fusion_AabbNodeTraversalTestSizeCheck;
  static_assert(sizeof(AabbNodeTraversalTest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::AabbNodeTraversalTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::AabbNodeTraversalTest::SetTestSettings
// Il2CppName: SetTestSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::AabbNodeTraversalTest::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Fusion::AabbNodeTraversalTest::SetTestSettings)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* extents = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::AabbNodeTraversalTest*), "SetTestSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, extents});
  }
};
// Writing MetadataGetter for method: Fusion::AabbNodeTraversalTest::Check
// Il2CppName: Check
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::AabbNodeTraversalTest::*)(ByRef<::Fusion::BVHNode::CachedBounds>)>(&Fusion::AabbNodeTraversalTest::Check)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("Fusion", "BVHNode/CachedBounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::AabbNodeTraversalTest*), "Check", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds});
  }
};