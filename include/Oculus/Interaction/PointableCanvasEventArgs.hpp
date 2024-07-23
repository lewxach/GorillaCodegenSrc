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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: PointableCanvasEventArgs
  class PointableCanvasEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PointableCanvasEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PointableCanvasEventArgs*, "Oculus.Interaction", "PointableCanvasEventArgs");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PointableCanvasEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class PointableCanvasEventArgs : public ::Il2CppObject {
    public:
    public:
    // public readonly UnityEngine.Canvas Canvas
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Canvas* Canvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::Canvas*) == 0x8);
    // public readonly UnityEngine.GameObject Hovered
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* Hovered;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public readonly System.Boolean Dragging
    // Size: 0x1
    // Offset: 0x20
    bool Dragging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly UnityEngine.Canvas Canvas
    [[deprecated("Use field access instead!")]] ::UnityEngine::Canvas*& dyn_Canvas();
    // Get instance field reference: public readonly UnityEngine.GameObject Hovered
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_Hovered();
    // Get instance field reference: public readonly System.Boolean Dragging
    [[deprecated("Use field access instead!")]] bool& dyn_Dragging();
    // public System.Void .ctor(UnityEngine.Canvas canvas, UnityEngine.GameObject hovered, System.Boolean dragging)
    // Offset: 0x47D6C5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointableCanvasEventArgs* New_ctor(::UnityEngine::Canvas* canvas, ::UnityEngine::GameObject* hovered, bool dragging) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PointableCanvasEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointableCanvasEventArgs*, creationType>(canvas, hovered, dragging)));
    }
  }; // Oculus.Interaction.PointableCanvasEventArgs
  #pragma pack(pop)
  static check_size<sizeof(PointableCanvasEventArgs), 32 + sizeof(bool)> __Oculus_Interaction_PointableCanvasEventArgsSizeCheck;
  static_assert(sizeof(PointableCanvasEventArgs) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvasEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!