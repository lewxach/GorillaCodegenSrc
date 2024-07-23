// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTriggerBox
#include "GlobalNamespace/GorillaTriggerBox.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaQuitBox
  class GorillaQuitBox;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaQuitBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaQuitBox*, "", "GorillaQuitBox");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: GorillaQuitBox
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaQuitBox : public ::GlobalNamespace::GorillaTriggerBox {
    public:
    // private System.Void Start()
    // Offset: 0x26DEDB4
    void Start();
    // public override System.Void OnBoxTriggered()
    // Offset: 0x26DEDB8
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::OnBoxTriggered()
    void OnBoxTriggered();
    // public System.Void .ctor()
    // Offset: 0x26DEE08
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaQuitBox* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaQuitBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaQuitBox*, creationType>()));
    }
  }; // GorillaQuitBox
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaQuitBox::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaQuitBox::*)()>(&GlobalNamespace::GorillaQuitBox::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaQuitBox*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaQuitBox::OnBoxTriggered
// Il2CppName: OnBoxTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaQuitBox::*)()>(&GlobalNamespace::GorillaQuitBox::OnBoxTriggered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaQuitBox*), "OnBoxTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaQuitBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!