// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: Triangle
  class Triangle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::Triangle);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::Triangle*, "Technie.PhysicsCreator", "Triangle");
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.Triangle
  // [TokenAttribute] Offset: FFFFFFFF
  class Triangle : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3 normal
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 normal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single area
    // Size: 0x4
    // Offset: 0x1C
    float area;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 center
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 center;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.Vector3 normal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_normal();
    // Get instance field reference: public System.Single area
    [[deprecated("Use field access instead!")]] float& dyn_area();
    // Get instance field reference: public UnityEngine.Vector3 center
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_center();
    // public System.Void .ctor(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, UnityEngine.Vector3 p2)
    // Offset: 0x5023A58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Triangle* New_ctor(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::Triangle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Triangle*, creationType>(p0, p1, p2)));
    }
  }; // Technie.PhysicsCreator.Triangle
  #pragma pack(pop)
  static check_size<sizeof(Triangle), 32 + sizeof(::UnityEngine::Vector3)> __Technie_PhysicsCreator_TriangleSizeCheck;
  static_assert(sizeof(Triangle) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::Triangle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!