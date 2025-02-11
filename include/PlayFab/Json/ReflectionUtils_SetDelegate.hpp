// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.Json.ReflectionUtils
#include "PlayFab/Json/ReflectionUtils.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
NEED_NO_BOX(::PlayFab::Json::ReflectionUtils::SetDelegate);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Json::ReflectionUtils::SetDelegate*, "PlayFab.Json", "ReflectionUtils/SetDelegate");
// Type namespace: PlayFab.Json
namespace PlayFab::Json {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Json.ReflectionUtils/SetDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectionUtils::SetDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4B6078C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionUtils::SetDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Json::ReflectionUtils::SetDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionUtils::SetDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object source, System.Object value)
    // Offset: 0x4B6095C
    void Invoke(::Il2CppObject* source, ::Il2CppObject* value);
    // public System.IAsyncResult BeginInvoke(System.Object source, System.Object value, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4B60970
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* source, ::Il2CppObject* value, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x4B60998
    void EndInvoke(::System::IAsyncResult* result);
  }; // PlayFab.Json.ReflectionUtils/SetDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::SetDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::SetDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Json::ReflectionUtils::SetDelegate::*)(::Il2CppObject*, ::Il2CppObject*)>(&PlayFab::Json::ReflectionUtils::SetDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils::SetDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, value});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::SetDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (PlayFab::Json::ReflectionUtils::SetDelegate::*)(::Il2CppObject*, ::Il2CppObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&PlayFab::Json::ReflectionUtils::SetDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils::SetDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, value, callback, object});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::SetDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Json::ReflectionUtils::SetDelegate::*)(::System::IAsyncResult*)>(&PlayFab::Json::ReflectionUtils::SetDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils::SetDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
