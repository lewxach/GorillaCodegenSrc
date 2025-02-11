// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GrabObject
#include "GlobalNamespace/GrabObject.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GrabObject::GrabbedObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GrabObject::GrabbedObject*, "", "GrabObject/GrabbedObject");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: GrabObject/GrabbedObject
  // [TokenAttribute] Offset: FFFFFFFF
  class GrabObject::GrabbedObject : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x29310EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrabObject::GrabbedObject* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GrabObject::GrabbedObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrabObject::GrabbedObject*, creationType>(object, method)));
    }
    // public System.Void Invoke(OVRInput/Controller grabHand)
    // Offset: 0x2933318
    void Invoke(::GlobalNamespace::OVRInput::Controller grabHand);
    // public System.IAsyncResult BeginInvoke(OVRInput/Controller grabHand, System.AsyncCallback callback, System.Object object)
    // Offset: 0x293332C
    ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::OVRInput::Controller grabHand, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x29333B0
    void EndInvoke(::System::IAsyncResult* result);
  }; // GrabObject/GrabbedObject
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GrabObject::GrabbedObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GrabObject::GrabbedObject::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GrabObject::GrabbedObject::*)(::GlobalNamespace::OVRInput::Controller)>(&GlobalNamespace::GrabObject::GrabbedObject::Invoke)> {
  static const MethodInfo* get() {
    static auto* grabHand = &::il2cpp_utils::GetClassFromName("", "OVRInput/Controller")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GrabObject::GrabbedObject*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabHand});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GrabObject::GrabbedObject::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::GrabObject::GrabbedObject::*)(::GlobalNamespace::OVRInput::Controller, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::GrabObject::GrabbedObject::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* grabHand = &::il2cpp_utils::GetClassFromName("", "OVRInput/Controller")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GrabObject::GrabbedObject*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabHand, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GrabObject::GrabbedObject::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GrabObject::GrabbedObject::*)(::System::IAsyncResult*)>(&GlobalNamespace::GrabObject::GrabbedObject::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GrabObject::GrabbedObject*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
