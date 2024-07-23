// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineFreeLook
#include "Cinemachine/CinemachineFreeLook.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineVirtualCamera
  class CinemachineVirtualCamera;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineFreeLook::CreateRigDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineFreeLook::CreateRigDelegate*, "Cinemachine", "CinemachineFreeLook/CreateRigDelegate");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineFreeLook/CreateRigDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class CinemachineFreeLook::CreateRigDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2A90F40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineFreeLook::CreateRigDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineFreeLook::CreateRigDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineFreeLook::CreateRigDelegate*, creationType>(object, method)));
    }
    // public Cinemachine.CinemachineVirtualCamera Invoke(Cinemachine.CinemachineFreeLook vcam, System.String name, Cinemachine.CinemachineVirtualCamera copyFrom)
    // Offset: 0x2A9104C
    ::Cinemachine::CinemachineVirtualCamera* Invoke(::Cinemachine::CinemachineFreeLook* vcam, ::StringW name, ::Cinemachine::CinemachineVirtualCamera* copyFrom);
    // public System.IAsyncResult BeginInvoke(Cinemachine.CinemachineFreeLook vcam, System.String name, Cinemachine.CinemachineVirtualCamera copyFrom, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2A91060
    ::System::IAsyncResult* BeginInvoke(::Cinemachine::CinemachineFreeLook* vcam, ::StringW name, ::Cinemachine::CinemachineVirtualCamera* copyFrom, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Cinemachine.CinemachineVirtualCamera EndInvoke(System.IAsyncResult result)
    // Offset: 0x2A9108C
    ::Cinemachine::CinemachineVirtualCamera* EndInvoke(::System::IAsyncResult* result);
  }; // Cinemachine.CinemachineFreeLook/CreateRigDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineFreeLook::CreateRigDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::CinemachineFreeLook::CreateRigDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::CinemachineVirtualCamera* (Cinemachine::CinemachineFreeLook::CreateRigDelegate::*)(::Cinemachine::CinemachineFreeLook*, ::StringW, ::Cinemachine::CinemachineVirtualCamera*)>(&Cinemachine::CinemachineFreeLook::CreateRigDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineFreeLook")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* copyFrom = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineVirtualCamera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineFreeLook::CreateRigDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, name, copyFrom});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineFreeLook::CreateRigDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Cinemachine::CinemachineFreeLook::CreateRigDelegate::*)(::Cinemachine::CinemachineFreeLook*, ::StringW, ::Cinemachine::CinemachineVirtualCamera*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Cinemachine::CinemachineFreeLook::CreateRigDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineFreeLook")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* copyFrom = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineVirtualCamera")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineFreeLook::CreateRigDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, name, copyFrom, callback, object});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineFreeLook::CreateRigDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::CinemachineVirtualCamera* (Cinemachine::CinemachineFreeLook::CreateRigDelegate::*)(::System::IAsyncResult*)>(&Cinemachine::CinemachineFreeLook::CreateRigDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineFreeLook::CreateRigDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};