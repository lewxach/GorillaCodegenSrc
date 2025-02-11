// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaPressableButton
#include "GlobalNamespace/GorillaPressableButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EarlyAccessButton
  class EarlyAccessButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EarlyAccessButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EarlyAccessButton*, "", "EarlyAccessButton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: EarlyAccessButton
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  class EarlyAccessButton : public ::GlobalNamespace::GorillaPressableButton {
    public:
    // Nested type: ::GlobalNamespace::EarlyAccessButton::$ButtonColorUpdate$d__4
    class $ButtonColorUpdate$d__4;
    // private System.Void Awake()
    // Offset: 0x26AB038
    void Awake();
    // public System.Void Update()
    // Offset: 0x26AB03C
    void Update();
    // public System.Void AlreadyOwn()
    // Offset: 0x26AB27C
    void AlreadyOwn();
    // private System.Collections.IEnumerator ButtonColorUpdate()
    // Offset: 0x26AB210
    ::System::Collections::IEnumerator* ButtonColorUpdate();
    // public override System.Void ButtonActivation()
    // Offset: 0x26AB18C
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::ButtonActivation()
    void ButtonActivation();
    // public System.Void .ctor()
    // Offset: 0x26AB354
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EarlyAccessButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EarlyAccessButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EarlyAccessButton*, creationType>()));
    }
  }; // EarlyAccessButton
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EarlyAccessButton::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EarlyAccessButton::*)()>(&GlobalNamespace::EarlyAccessButton::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EarlyAccessButton*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EarlyAccessButton::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EarlyAccessButton::*)()>(&GlobalNamespace::EarlyAccessButton::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EarlyAccessButton*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EarlyAccessButton::AlreadyOwn
// Il2CppName: AlreadyOwn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EarlyAccessButton::*)()>(&GlobalNamespace::EarlyAccessButton::AlreadyOwn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EarlyAccessButton*), "AlreadyOwn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EarlyAccessButton::ButtonColorUpdate
// Il2CppName: ButtonColorUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::EarlyAccessButton::*)()>(&GlobalNamespace::EarlyAccessButton::ButtonColorUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EarlyAccessButton*), "ButtonColorUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EarlyAccessButton::ButtonActivation
// Il2CppName: ButtonActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EarlyAccessButton::*)()>(&GlobalNamespace::EarlyAccessButton::ButtonActivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EarlyAccessButton*), "ButtonActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EarlyAccessButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
