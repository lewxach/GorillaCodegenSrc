// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.Initialization.CacheInitialization
#include "UnityEngine/AddressableAssets/Initialization/CacheInitialization.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
// Including type: UnityEngine.ResourceManagement.IUpdateReceiver
#include "UnityEngine/ResourceManagement/IUpdateReceiver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp*, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization/CacheInitOp");
// Type namespace: UnityEngine.AddressableAssets.Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.Initialization.CacheInitialization/CacheInitOp
  // [TokenAttribute] Offset: FFFFFFFF
  class CacheInitialization::CacheInitOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>/*, public ::UnityEngine::ResourceManagement::IUpdateReceiver*/ {
    public:
    public:
    // private System.Func`1<System.Boolean> m_Callback
    // Size: 0x8
    // Offset: 0x98
    ::System::Func_1<bool>* m_Callback;
    // Field size check
    static_assert(sizeof(::System::Func_1<bool>*) == 0x8);
    // private System.Boolean m_UpdateRequired
    // Size: 0x1
    // Offset: 0xA0
    bool m_UpdateRequired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ResourceManagement::IUpdateReceiver
    operator ::UnityEngine::ResourceManagement::IUpdateReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(this);
    }
    // Get instance field reference: private System.Func`1<System.Boolean> m_Callback
    [[deprecated("Use field access instead!")]] ::System::Func_1<bool>*& dyn_m_Callback();
    // Get instance field reference: private System.Boolean m_UpdateRequired
    [[deprecated("Use field access instead!")]] bool& dyn_m_UpdateRequired();
    // public System.Void Init(System.Func`1<System.Boolean> callback)
    // Offset: 0x5066540
    void Init(::System::Func_1<bool>* callback);
    // public System.Void Update(System.Single unscaledDeltaTime)
    // Offset: 0x50665DC
    void Update(float unscaledDeltaTime);
    // public System.Void .ctor()
    // Offset: 0x5066470
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CacheInitialization::CacheInitOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CacheInitialization::CacheInitOp*, creationType>()));
    }
    // protected override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x5066548
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Void Execute()
    // Offset: 0x5066698
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
  }; // UnityEngine.AddressableAssets.Initialization.CacheInitialization/CacheInitOp
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::*)(::System::Func_1<bool>*)>(&UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::Init)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::*)(float)>(&UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::Update)> {
  static const MethodInfo* get() {
    static auto* unscaledDeltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unscaledDeltaTime});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::*)()>(&UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::*)()>(&UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Initialization::CacheInitialization::CacheInitOp*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
