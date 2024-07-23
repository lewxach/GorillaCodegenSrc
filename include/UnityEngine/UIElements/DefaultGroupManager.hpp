// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.IGroupManager
#include "UnityEngine/UIElements/IGroupManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IGroupBoxOption
  class IGroupBoxOption;
  // Forward declaring type: IGroupBox
  class IGroupBox;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: DefaultGroupManager
  class DefaultGroupManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::DefaultGroupManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultGroupManager*, "UnityEngine.UIElements", "DefaultGroupManager");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.DefaultGroupManager
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultGroupManager : public ::Il2CppObject/*, public ::UnityEngine::UIElements::IGroupManager*/ {
    public:
    public:
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.IGroupBoxOption> m_GroupOptions
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>* m_GroupOptions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*) == 0x8);
    // private UnityEngine.UIElements.IGroupBoxOption m_SelectedOption
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::IGroupBoxOption* m_SelectedOption;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::IGroupBoxOption*) == 0x8);
    // private UnityEngine.UIElements.IGroupBox m_GroupBox
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UIElements::IGroupBox* m_GroupBox;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::IGroupBox*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::IGroupManager
    operator ::UnityEngine::UIElements::IGroupManager() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::IGroupManager*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.IGroupBoxOption> m_GroupOptions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption*>*& dyn_m_GroupOptions();
    // Get instance field reference: private UnityEngine.UIElements.IGroupBoxOption m_SelectedOption
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::IGroupBoxOption*& dyn_m_SelectedOption();
    // Get instance field reference: private UnityEngine.UIElements.IGroupBox m_GroupBox
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::IGroupBox*& dyn_m_GroupBox();
    // public System.Void Init(UnityEngine.UIElements.IGroupBox groupBox)
    // Offset: 0x565FFEC
    void Init(::UnityEngine::UIElements::IGroupBox* groupBox);
    // public System.Void OnOptionSelectionChanged(UnityEngine.UIElements.IGroupBoxOption selectedOption)
    // Offset: 0x565FFF4
    void OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption* selectedOption);
    // public System.Void RegisterOption(UnityEngine.UIElements.IGroupBoxOption option)
    // Offset: 0x56601D4
    void RegisterOption(::UnityEngine::UIElements::IGroupBoxOption* option);
    // public System.Void UnregisterOption(UnityEngine.UIElements.IGroupBoxOption option)
    // Offset: 0x566032C
    void UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption* option);
    // public System.Void .ctor()
    // Offset: 0x565FB24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultGroupManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DefaultGroupManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultGroupManager*, creationType>()));
    }
  }; // UnityEngine.UIElements.DefaultGroupManager
  #pragma pack(pop)
  static check_size<sizeof(DefaultGroupManager), 32 + sizeof(::UnityEngine::UIElements::IGroupBox*)> __UnityEngine_UIElements_DefaultGroupManagerSizeCheck;
  static_assert(sizeof(DefaultGroupManager) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultGroupManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBox*)>(&UnityEngine::UIElements::DefaultGroupManager::Init)> {
  static const MethodInfo* get() {
    static auto* groupBox = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IGroupBox")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultGroupManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupBox});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultGroupManager::OnOptionSelectionChanged
// Il2CppName: OnOptionSelectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(&UnityEngine::UIElements::DefaultGroupManager::OnOptionSelectionChanged)> {
  static const MethodInfo* get() {
    static auto* selectedOption = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IGroupBoxOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultGroupManager*), "OnOptionSelectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectedOption});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultGroupManager::RegisterOption
// Il2CppName: RegisterOption
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(&UnityEngine::UIElements::DefaultGroupManager::RegisterOption)> {
  static const MethodInfo* get() {
    static auto* option = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IGroupBoxOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultGroupManager*), "RegisterOption", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{option});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultGroupManager::UnregisterOption
// Il2CppName: UnregisterOption
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DefaultGroupManager::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(&UnityEngine::UIElements::DefaultGroupManager::UnregisterOption)> {
  static const MethodInfo* get() {
    static auto* option = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IGroupBoxOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DefaultGroupManager*), "UnregisterOption", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{option});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DefaultGroupManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!