// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnExitPlay_Attribute
#include "GlobalNamespace/OnExitPlay_Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OnExitPlay_SetNew
  class OnExitPlay_SetNew;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OnExitPlay_SetNew);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OnExitPlay_SetNew*, "", "OnExitPlay_SetNew");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OnExitPlay_SetNew
  // [TokenAttribute] Offset: FFFFFFFF
  class OnExitPlay_SetNew : public ::GlobalNamespace::OnExitPlay_Attribute {
    public:
    // public override System.Void OnEnterPlay(System.Reflection.FieldInfo field)
    // Offset: 0x2779C64
    // Implemented from: OnPlayChange_BaseAttribute
    // Base method: System.Void OnPlayChange_BaseAttribute::OnEnterPlay(System.Reflection.FieldInfo field)
    void OnEnterPlay(::System::Reflection::FieldInfo* field);
    // public System.Void .ctor()
    // Offset: 0x2779DD0
    // Implemented from: OnExitPlay_Attribute
    // Base method: System.Void OnExitPlay_Attribute::.ctor()
    // Base method: System.Void OnPlayChange_BaseAttribute::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnExitPlay_SetNew* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OnExitPlay_SetNew::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnExitPlay_SetNew*, creationType>()));
    }
  }; // OnExitPlay_SetNew
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OnExitPlay_SetNew::OnEnterPlay
// Il2CppName: OnEnterPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnExitPlay_SetNew::*)(::System::Reflection::FieldInfo*)>(&GlobalNamespace::OnExitPlay_SetNew::OnEnterPlay)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnExitPlay_SetNew*), "OnEnterPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OnExitPlay_SetNew::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!