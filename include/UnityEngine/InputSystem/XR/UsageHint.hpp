// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Forward declaring type: UsageHint
  struct UsageHint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::UsageHint, "UnityEngine.InputSystem.XR", "UsageHint");
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.XR.UsageHint
  // [TokenAttribute] Offset: FFFFFFFF
  struct UsageHint/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String content
    // Size: 0x8
    // Offset: 0x0
    ::StringW content;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: UsageHint
    constexpr UsageHint(::StringW content_ = {}) noexcept : content{content_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return content;
    }
    // Get instance field reference: public System.String content
    [[deprecated("Use field access instead!")]] ::StringW& dyn_content();
  }; // UnityEngine.InputSystem.XR.UsageHint
  #pragma pack(pop)
  static check_size<sizeof(UsageHint), 0 + sizeof(::StringW)> __UnityEngine_InputSystem_XR_UsageHintSizeCheck;
  static_assert(sizeof(UsageHint) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"