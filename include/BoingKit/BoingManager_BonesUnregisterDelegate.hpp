// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BoingKit.BoingManager
#include "BoingKit/BoingManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: BoingBones
  class BoingBones;
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
NEED_NO_BOX(::BoingKit::BoingManager::BonesUnregisterDelegate);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::BoingManager::BonesUnregisterDelegate*, "BoingKit", "BoingManager/BonesUnregisterDelegate");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.BoingManager/BonesUnregisterDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class BoingManager::BonesUnregisterDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x28F235C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoingManager::BonesUnregisterDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::BoingManager::BonesUnregisterDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoingManager::BonesUnregisterDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(BoingKit.BoingBones bones)
    // Offset: 0x28F2464
    void Invoke(::BoingKit::BoingBones* bones);
    // public System.IAsyncResult BeginInvoke(BoingKit.BoingBones bones, System.AsyncCallback callback, System.Object object)
    // Offset: 0x28F2478
    ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingBones* bones, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x28F2498
    void EndInvoke(::System::IAsyncResult* result);
  }; // BoingKit.BoingManager/BonesUnregisterDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::BoingManager::BonesUnregisterDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BoingKit::BoingManager::BonesUnregisterDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManager::BonesUnregisterDelegate::*)(::BoingKit::BoingBones*)>(&BoingKit::BoingManager::BonesUnregisterDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* bones = &::il2cpp_utils::GetClassFromName("BoingKit", "BoingBones")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::BonesUnregisterDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManager::BonesUnregisterDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (BoingKit::BoingManager::BonesUnregisterDelegate::*)(::BoingKit::BoingBones*, ::System::AsyncCallback*, ::Il2CppObject*)>(&BoingKit::BoingManager::BonesUnregisterDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* bones = &::il2cpp_utils::GetClassFromName("BoingKit", "BoingBones")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::BonesUnregisterDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bones, callback, object});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManager::BonesUnregisterDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManager::BonesUnregisterDelegate::*)(::System::IAsyncResult*)>(&BoingKit::BoingManager::BonesUnregisterDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::BonesUnregisterDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
