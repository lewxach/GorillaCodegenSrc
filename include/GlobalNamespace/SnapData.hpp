// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: SnapBounds
#include "GlobalNamespace/SnapBounds.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SnapData
  struct SnapData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SnapData, "", "SnapData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: SnapData
  // [TokenAttribute] Offset: FFFFFFFF
  struct SnapData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 attachIndex
    // Size: 0x4
    // Offset: 0x0
    int attachIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public SnapBounds snapBounds
    // Size: 0x10
    // Offset: 0x4
    ::GlobalNamespace::SnapBounds snapBounds;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SnapBounds) == 0x10);
    public:
    // Creating value type constructor for type: SnapData
    constexpr SnapData(int attachIndex_ = {}, ::GlobalNamespace::SnapBounds snapBounds_ = {}) noexcept : attachIndex{attachIndex_}, snapBounds{snapBounds_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 attachIndex
    [[deprecated("Use field access instead!")]] int& dyn_attachIndex();
    // Get instance field reference: public SnapBounds snapBounds
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SnapBounds& dyn_snapBounds();
  }; // SnapData
  #pragma pack(pop)
  static check_size<sizeof(SnapData), 4 + sizeof(::GlobalNamespace::SnapBounds)> __GlobalNamespace_SnapDataSizeCheck;
  static_assert(sizeof(SnapData) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
