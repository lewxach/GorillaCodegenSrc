// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRTriangleMesh
#include "GlobalNamespace/OVRTriangleMesh.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTriangleMesh::Triangle, "", "OVRTriangleMesh/Triangle");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRTriangleMesh/Triangle
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRTriangleMesh::Triangle/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 A
    // Size: 0x4
    // Offset: 0x0
    int A;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 B
    // Size: 0x4
    // Offset: 0x4
    int B;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 C
    // Size: 0x4
    // Offset: 0x8
    int C;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Triangle
    constexpr Triangle(int A_ = {}, int B_ = {}, int C_ = {}) noexcept : A{A_}, B{B_}, C{C_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 A
    [[deprecated("Use field access instead!")]] int& dyn_A();
    // Get instance field reference: public System.Int32 B
    [[deprecated("Use field access instead!")]] int& dyn_B();
    // Get instance field reference: public System.Int32 C
    [[deprecated("Use field access instead!")]] int& dyn_C();
  }; // OVRTriangleMesh/Triangle
  #pragma pack(pop)
  static check_size<sizeof(OVRTriangleMesh::Triangle), 8 + sizeof(int)> __GlobalNamespace_OVRTriangleMesh_TriangleSizeCheck;
  static_assert(sizeof(OVRTriangleMesh::Triangle) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"