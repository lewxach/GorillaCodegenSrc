// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OnEnterPlaySystem
  class OnEnterPlaySystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OnEnterPlaySystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OnEnterPlaySystem*, "", "OnEnterPlaySystem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OnEnterPlaySystem
  // [TokenAttribute] Offset: FFFFFFFF
  class OnEnterPlaySystem : public ::Il2CppObject {
    public:
    // static public System.Void AddCallback(System.Action callback)
    // Offset: 0x2779A54
    static void AddCallback(::System::Action* callback);
  }; // OnEnterPlaySystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OnEnterPlaySystem::AddCallback
// Il2CppName: AddCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&GlobalNamespace::OnEnterPlaySystem::AddCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnEnterPlaySystem*), "AddCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};