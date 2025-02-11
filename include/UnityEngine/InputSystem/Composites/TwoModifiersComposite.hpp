// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputBindingComposite
#include "UnityEngine/InputSystem/InputBindingComposite.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputBindingCompositeContext
  struct InputBindingCompositeContext;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Composites
namespace UnityEngine::InputSystem::Composites {
  // Forward declaring type: TwoModifiersComposite
  class TwoModifiersComposite;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::TwoModifiersComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::TwoModifiersComposite*, "UnityEngine.InputSystem.Composites", "TwoModifiersComposite");
// Type namespace: UnityEngine.InputSystem.Composites
namespace UnityEngine::InputSystem::Composites {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Composites.TwoModifiersComposite
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayNameAttribute] Offset: FFFFFFFF
  // [DisplayStringFormatAttribute] Offset: FFFFFFFF
  class TwoModifiersComposite : public ::UnityEngine::InputSystem::InputBindingComposite {
    public:
    public:
    // public System.Int32 modifier1
    // Size: 0x4
    // Offset: 0x10
    int modifier1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 modifier2
    // Size: 0x4
    // Offset: 0x14
    int modifier2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 binding
    // Size: 0x4
    // Offset: 0x18
    int binding;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean overrideModifiersNeedToBePressedFirst
    // Size: 0x1
    // Offset: 0x1C
    bool overrideModifiersNeedToBePressedFirst;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideModifiersNeedToBePressedFirst and: m_ValueSizeInBytes
    char __padding3[0x3] = {};
    // private System.Int32 m_ValueSizeInBytes
    // Size: 0x4
    // Offset: 0x20
    int m_ValueSizeInBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_ValueSizeInBytes and: m_ValueType
    char __padding4[0x4] = {};
    // private System.Type m_ValueType
    // Size: 0x8
    // Offset: 0x28
    ::System::Type* m_ValueType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Boolean m_BindingIsButton
    // Size: 0x1
    // Offset: 0x30
    bool m_BindingIsButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Int32 modifier1
    [[deprecated("Use field access instead!")]] int& dyn_modifier1();
    // Get instance field reference: public System.Int32 modifier2
    [[deprecated("Use field access instead!")]] int& dyn_modifier2();
    // Get instance field reference: public System.Int32 binding
    [[deprecated("Use field access instead!")]] int& dyn_binding();
    // Get instance field reference: public System.Boolean overrideModifiersNeedToBePressedFirst
    [[deprecated("Use field access instead!")]] bool& dyn_overrideModifiersNeedToBePressedFirst();
    // Get instance field reference: private System.Int32 m_ValueSizeInBytes
    [[deprecated("Use field access instead!")]] int& dyn_m_ValueSizeInBytes();
    // Get instance field reference: private System.Type m_ValueType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_m_ValueType();
    // Get instance field reference: private System.Boolean m_BindingIsButton
    [[deprecated("Use field access instead!")]] bool& dyn_m_BindingIsButton();
    // private System.Boolean ModifiersArePressed(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    // Offset: 0x50B5798
    bool ModifiersArePressed(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);
    // public override System.Type get_valueType()
    // Offset: 0x50B5748
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Type InputBindingComposite::get_valueType()
    ::System::Type* get_valueType();
    // public override System.Int32 get_valueSizeInBytes()
    // Offset: 0x50B5750
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Int32 InputBindingComposite::get_valueSizeInBytes()
    int get_valueSizeInBytes();
    // public override System.Single EvaluateMagnitude(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    // Offset: 0x50B5758
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Single InputBindingComposite::EvaluateMagnitude(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    float EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);
    // public override System.Void ReadValue(ref UnityEngine.InputSystem.InputBindingCompositeContext context, System.Void* buffer, System.Int32 bufferSize)
    // Offset: 0x50B5854
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Void InputBindingComposite::ReadValue(ref UnityEngine.InputSystem.InputBindingCompositeContext context, System.Void* buffer, System.Int32 bufferSize)
    void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int bufferSize);
    // protected override System.Void FinishSetup(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    // Offset: 0x50B58B8
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Void InputBindingComposite::FinishSetup(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    void FinishSetup(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);
    // public override System.Object ReadValueAsObject(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    // Offset: 0x50B5948
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Object InputBindingComposite::ReadValueAsObject(ref UnityEngine.InputSystem.InputBindingCompositeContext context)
    ::Il2CppObject* ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);
    // public System.Void .ctor()
    // Offset: 0x50B59AC
    // Implemented from: UnityEngine.InputSystem.InputBindingComposite
    // Base method: System.Void InputBindingComposite::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TwoModifiersComposite* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Composites::TwoModifiersComposite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TwoModifiersComposite*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Composites.TwoModifiersComposite
  #pragma pack(pop)
  static check_size<sizeof(TwoModifiersComposite), 48 + sizeof(bool)> __UnityEngine_InputSystem_Composites_TwoModifiersCompositeSizeCheck;
  static_assert(sizeof(TwoModifiersComposite) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Composites::TwoModifiersComposite::ModifiersArePressed
// Il2CppName: ModifiersArePressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::TwoModifiersComposite::ModifiersArePressed)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBindingCompositeContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Composites::TwoModifiersComposite*), "ModifiersArePressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Composites::TwoModifiersComposite::get_valueType
// Il2CppName: get_valueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)()>(&UnityEngine::InputSystem::Composites::TwoModifiersComposite::get_valueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Composites::TwoModifiersComposite*), "get_valueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Composites::TwoModifiersComposite::get_valueSizeInBytes
// Il2CppName: get_valueSizeInBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)()>(&UnityEngine::InputSystem::Composites::TwoModifiersComposite::get_valueSizeInBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Composites::TwoModifiersComposite*), "get_valueSizeInBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Composites::TwoModifiersComposite::EvaluateMagnitude
// Il2CppName: EvaluateMagnitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::TwoModifiersComposite::EvaluateMagnitude)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBindingCompositeContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Composites::TwoModifiersComposite*), "EvaluateMagnitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Composites::TwoModifiersComposite::ReadValue
// Il2CppName: ReadValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>, void*, int)>(&UnityEngine::InputSystem::Composites::TwoModifiersComposite::ReadValue)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBindingCompositeContext")->this_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Composites::TwoModifiersComposite*), "ReadValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, buffer, bufferSize});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Composites::TwoModifiersComposite::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::TwoModifiersComposite::FinishSetup)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBindingCompositeContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Composites::TwoModifiersComposite*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Composites::TwoModifiersComposite::ReadValueAsObject
// Il2CppName: ReadValueAsObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&UnityEngine::InputSystem::Composites::TwoModifiersComposite::ReadValueAsObject)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputBindingCompositeContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Composites::TwoModifiersComposite*), "ReadValueAsObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Composites::TwoModifiersComposite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
