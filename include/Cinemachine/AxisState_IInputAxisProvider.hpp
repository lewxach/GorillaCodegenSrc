// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.AxisState
#include "Cinemachine/AxisState.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::AxisState::IInputAxisProvider);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::AxisState::IInputAxisProvider*, "Cinemachine", "AxisState/IInputAxisProvider");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.AxisState/IInputAxisProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class AxisState::IInputAxisProvider {
    public:
    // public System.Single GetAxisValue(System.Int32 axis)
    // Offset: 0xFFFFFFFFFFFFFFFF
    float GetAxisValue(int axis);
  }; // Cinemachine.AxisState/IInputAxisProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::AxisState::IInputAxisProvider::GetAxisValue
// Il2CppName: GetAxisValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::AxisState::IInputAxisProvider::*)(int)>(&Cinemachine::AxisState::IInputAxisProvider::GetAxisValue)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::AxisState::IInputAxisProvider*), "GetAxisValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};