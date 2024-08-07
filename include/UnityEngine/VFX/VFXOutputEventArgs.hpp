// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VFXEventAttribute
  class VFXEventAttribute;
}
// Completed forward declares
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VFXOutputEventArgs
  struct VFXOutputEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXOutputEventArgs, "UnityEngine.VFX", "VFXOutputEventArgs");
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.VFX.VFXOutputEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  struct VFXOutputEventArgs/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly System.Int32 <nameId>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int nameId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: nameId and: eventAttribute
    char __padding0[0x4] = {};
    // private readonly UnityEngine.VFX.VFXEventAttribute <eventAttribute>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::VFX::VFXEventAttribute* eventAttribute;
    // Field size check
    static_assert(sizeof(::UnityEngine::VFX::VFXEventAttribute*) == 0x8);
    public:
    // Creating value type constructor for type: VFXOutputEventArgs
    constexpr VFXOutputEventArgs(int nameId_ = {}, ::UnityEngine::VFX::VFXEventAttribute* eventAttribute_ = {}) noexcept : nameId{nameId_}, eventAttribute{eventAttribute_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly System.Int32 <nameId>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$nameId$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.VFX.VFXEventAttribute <eventAttribute>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::VFX::VFXEventAttribute*& dyn_$eventAttribute$k__BackingField();
    // public System.Void .ctor(System.Int32 nameId, UnityEngine.VFX.VFXEventAttribute eventAttribute)
    // Offset: 0x5711000
    // ABORTED: conflicts with another method.  VFXOutputEventArgs(int nameId, ::UnityEngine::VFX::VFXEventAttribute* eventAttribute);
  }; // UnityEngine.VFX.VFXOutputEventArgs
  #pragma pack(pop)
  static check_size<sizeof(VFXOutputEventArgs), 8 + sizeof(::UnityEngine::VFX::VFXEventAttribute*)> __UnityEngine_VFX_VFXOutputEventArgsSizeCheck;
  static_assert(sizeof(VFXOutputEventArgs) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::VFX::VFXOutputEventArgs::VFXOutputEventArgs
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
