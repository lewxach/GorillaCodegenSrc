// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugUI
#include "UnityEngine/Rendering/DebugUI.hpp"
// Including type: UnityEngine.Rendering.DebugUI/Field`1
#include "UnityEngine/Rendering/DebugUI_Field_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI::ObjectListField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI::ObjectListField*, "UnityEngine.Rendering", "DebugUI/ObjectListField");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.DebugUI/ObjectListField
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugUI::ObjectListField : public ::UnityEngine::Rendering::DebugUI::Field_1<::ArrayW<::UnityEngine::Object*>> {
    public:
    public:
    // public System.Type type
    // Size: 0x8
    // Offset: 0x60
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return type;
    }
    // Get instance field reference: public System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // public System.Void .ctor()
    // Offset: 0x524ABCC
    // Implemented from: UnityEngine.Rendering.DebugUI/Field`1
    // Base method: System.Void Field_1::.ctor()
    // Base method: System.Void Widget::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugUI::ObjectListField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugUI::ObjectListField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugUI::ObjectListField*, creationType>()));
    }
  }; // UnityEngine.Rendering.DebugUI/ObjectListField
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::ObjectListField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
