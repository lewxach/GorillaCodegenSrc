// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputBindingComposite`1
#include "UnityEngine/InputSystem/InputBindingComposite_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Skipping declaration: InputBindingCompositeContext because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Composites
namespace UnityEngine::InputSystem::Composites {
  // Forward declaring type: Vector2Composite
  class Vector2Composite;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::Vector2Composite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::Vector2Composite*, "UnityEngine.InputSystem.Composites", "Vector2Composite");
// Type namespace: UnityEngine.InputSystem.Composites
namespace UnityEngine::InputSystem::Composites {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Composites.Vector2Composite
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayNameAttribute] Offset: FFFFFFFF
  // [DisplayStringFormatAttribute] Offset: FFFFFFFF
  class Vector2Composite : public ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector2> {
    public:
    // Nested type: ::UnityEngine::InputSystem::Composites::Vector2Composite::Mode
    struct Mode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.InputSystem.Composites.Vector2Composite/Mode
    // [TokenAttribute] Offset: FFFFFFFF
    struct Mode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.InputSystem.Composites.Vector2Composite/Mode Analog
      static constexpr const int Analog = 2;
      // Get static field: static public UnityEngine.InputSystem.Composites.Vector2Composite/Mode Analog
      static ::UnityEngine::InputSystem::Composites::Vector2Composite::Mode _get_Analog();
      // Set static field: static public UnityEngine.InputSystem.Composites.Vector2Composite/Mode Analog
      static void _set_Analog(::UnityEngine::InputSystem::Composites::Vector2Composite::Mode value);
      // static field const value: static public UnityEngine.InputSystem.Composites.Vector2Composite/Mode DigitalNormalized
      static constexpr const int DigitalNormalized = 0;
      // Get static field: static public UnityEngine.InputSystem.Composites.Vector2Composite/Mode DigitalNormalized
      static ::UnityEngine::InputSystem::Composites::Vector2Composite::Mode _get_DigitalNormalized();
      // Set static field: static public UnityEngine.InputSystem.Composites.Vector2Composite/Mode DigitalNormalized
      static void _set_DigitalNormalized(::UnityEngine::InputSystem::Composites::Vector2Composite::Mode value);
      // static field const value: static public UnityEngine.InputSystem.Composites.Vector2Composite/Mode Digital
      static constexpr const int Digital = 1;
      // Get static field: static public UnityEngine.InputSystem.Composites.Vector2Composite/Mode Digital
      static ::UnityEngine::InputSystem::Composites::Vector2Composite::Mode _get_Digital();
      // Set static field: static public UnityEngine.InputSystem.Composites.Vector2Composite/Mode Digital
      static void _set_Digital(::UnityEngine::InputSystem::Composites::Vector2Composite::Mode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.InputSystem.Composites.Vector2Composite/Mode
    #pragma pack(pop)
    static check_size<sizeof(Vector2Composite::Mode), 0 + sizeof(int)> __UnityEngine_InputSystem_Composites_Vector2Composite_ModeSizeCheck;
    static_assert(sizeof(Vector2Composite::Mode) == 0x4);
    public:
    // public System.Int32 up
    // Size: 0x4
    // Offset: 0x10
    int up;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 down
    // Size: 0x4
    // Offset: 0x14
    int down;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 left
    // Size: 0x4
    // Offset: 0x18
    int left;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 right
    // Size: 0x4
    // Offset: 0x1C
    int right;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean normalize
    // Size: 0x1
    // Offset: 0x20
    bool normalize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public UnityEngine.InputSystem.Composites.Vector2Composite/Mode mode
    // Size: 0x4
    // Offset: 0x24
    ::UnityEngine::InputSystem::Composites::Vector2Composite::Mode mode;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Composites::Vector2Composite::Mode) == 0x4);
    public:
    // Get instance field reference: public System.Int32 up
    [[deprecated("Use field access instead!")]] int& dyn_up();
    // Get instance field reference: public System.Int32 down
    [[deprecated("Use field access instead!")]] int& dyn_down();
    // Get instance field reference: public System.Int32 left
    [[deprecated("Use field access instead!")]] int& dyn_left();
    // Get instance field reference: public System.Int32 right
    [[deprecated("Use field access instead!")]] int& dyn_right();
    // Get instance field reference: public System.Boolean normalize
    [[deprecated("Use field access instead!")]] bool& dyn_normalize();
    // Get instance field reference: public UnityEngine.InputSystem.Composites.Vector2Composite/Mode mode
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Composites::Vector2Composite::Mode& dyn_mode();
    // public UnityEngine.Vector2 ReadValue(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    // Offset: 0x50B59B4
    ::UnityEngine::Vector2 ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);
    // public override System.Single EvaluateMagnitude(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    // Offset: 0x50B5B18
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Single InputBindingComposite::EvaluateMagnitude(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    float EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);
    // public System.Void .ctor()
    // Offset: 0x50B5B88
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite`1
    // Base method: System.Void InputBindingComposite_1::.ctor()
    // Base method: System.Void InputBindingComposite::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2Composite* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Composites::Vector2Composite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2Composite*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Composites.Vector2Composite
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::Vector2Composite::Mode, "UnityEngine.InputSystem.Composites", "Vector2Composite/Mode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Composites::Vector2Composite::ReadValue
// Il2CppName: ReadValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::InputSystem::Composites::Vector2Composite::*)(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::Vector2Composite::ReadValue)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBindingCompositeContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Composites::Vector2Composite*), "ReadValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Composites::Vector2Composite::EvaluateMagnitude
// Il2CppName: EvaluateMagnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Composites::Vector2Composite::*)(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::Vector2Composite::EvaluateMagnitude)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBindingCompositeContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Composites::Vector2Composite*), "EvaluateMagnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Composites::Vector2Composite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
