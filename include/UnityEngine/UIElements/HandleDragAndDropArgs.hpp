// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.DragAndDropArgs
#include "UnityEngine/UIElements/DragAndDropArgs.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: HandleDragAndDropArgs
  struct HandleDragAndDropArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HandleDragAndDropArgs, "UnityEngine.UIElements", "HandleDragAndDropArgs");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.HandleDragAndDropArgs
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct HandleDragAndDropArgs/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly UnityEngine.UIElements.DragAndDropArgs m_DragAndDropArgs
    // Size: 0x20
    // Offset: 0x0
    ::UnityEngine::UIElements::DragAndDropArgs m_DragAndDropArgs;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::DragAndDropArgs) == 0x20);
    // private readonly UnityEngine.Vector2 <position>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Creating value type constructor for type: HandleDragAndDropArgs
    constexpr HandleDragAndDropArgs(::UnityEngine::UIElements::DragAndDropArgs m_DragAndDropArgs_ = {}, ::UnityEngine::Vector2 position_ = {}) noexcept : m_DragAndDropArgs{m_DragAndDropArgs_}, position{position_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.UIElements.DragAndDropArgs m_DragAndDropArgs
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::DragAndDropArgs& dyn_m_DragAndDropArgs();
    // Get instance field reference: private readonly UnityEngine.Vector2 <position>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$position$k__BackingField();
    // System.Void .ctor(UnityEngine.Vector2 position, UnityEngine.UIElements.DragAndDropArgs dragAndDropArgs)
    // Offset: 0x563CA54
    HandleDragAndDropArgs(::UnityEngine::Vector2 position, ::UnityEngine::UIElements::DragAndDropArgs dragAndDropArgs);
  }; // UnityEngine.UIElements.HandleDragAndDropArgs
  #pragma pack(pop)
  static check_size<sizeof(HandleDragAndDropArgs), 32 + sizeof(::UnityEngine::Vector2)> __UnityEngine_UIElements_HandleDragAndDropArgsSizeCheck;
  static_assert(sizeof(HandleDragAndDropArgs) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::HandleDragAndDropArgs::HandleDragAndDropArgs
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
