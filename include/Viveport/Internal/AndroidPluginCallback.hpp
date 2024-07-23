// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AndroidJavaProxy
#include "UnityEngine/AndroidJavaProxy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Viveport::Internal
namespace Viveport::Internal {
  // Forward declaring type: IAPurchaseCallback
  class IAPurchaseCallback;
  // Forward declaring type: StatusCallback
  class StatusCallback;
  // Forward declaring type: StatusCallback2
  class StatusCallback2;
}
// Completed forward declares
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Forward declaring type: AndroidPluginCallback
  class AndroidPluginCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::Internal::AndroidPluginCallback);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Internal::AndroidPluginCallback*, "Viveport.Internal", "AndroidPluginCallback");
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.Internal.AndroidPluginCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidPluginCallback : public ::UnityEngine::AndroidJavaProxy {
    public:
    public:
    // private Viveport.Internal.IAPurchaseCallback callback
    // Size: 0x8
    // Offset: 0x20
    ::Viveport::Internal::IAPurchaseCallback* callback;
    // Field size check
    static_assert(sizeof(::Viveport::Internal::IAPurchaseCallback*) == 0x8);
    // private Viveport.Internal.StatusCallback statusCallback
    // Size: 0x8
    // Offset: 0x28
    ::Viveport::Internal::StatusCallback* statusCallback;
    // Field size check
    static_assert(sizeof(::Viveport::Internal::StatusCallback*) == 0x8);
    // private Viveport.Internal.StatusCallback2 statusCallback2
    // Size: 0x8
    // Offset: 0x30
    ::Viveport::Internal::StatusCallback2* statusCallback2;
    // Field size check
    static_assert(sizeof(::Viveport::Internal::StatusCallback2*) == 0x8);
    public:
    // Get instance field reference: private Viveport.Internal.IAPurchaseCallback callback
    [[deprecated("Use field access instead!")]] ::Viveport::Internal::IAPurchaseCallback*& dyn_callback();
    // Get instance field reference: private Viveport.Internal.StatusCallback statusCallback
    [[deprecated("Use field access instead!")]] ::Viveport::Internal::StatusCallback*& dyn_statusCallback();
    // Get instance field reference: private Viveport.Internal.StatusCallback2 statusCallback2
    [[deprecated("Use field access instead!")]] ::Viveport::Internal::StatusCallback2*& dyn_statusCallback2();
    // System.Void .ctor(Viveport.Internal.IAPurchaseCallback callback)
    // Offset: 0x27B714C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidPluginCallback* New_ctor(::Viveport::Internal::IAPurchaseCallback* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::Internal::AndroidPluginCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidPluginCallback*, creationType>(callback)));
    }
    // System.Void .ctor(Viveport.Internal.StatusCallback callback)
    // Offset: 0x27B8D04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidPluginCallback* New_ctor(::Viveport::Internal::StatusCallback* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::Internal::AndroidPluginCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidPluginCallback*, creationType>(callback)));
    }
    // System.Void .ctor(Viveport.Internal.StatusCallback2 callback)
    // Offset: 0x27B870C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidPluginCallback* New_ctor(::Viveport::Internal::StatusCallback2* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::Internal::AndroidPluginCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidPluginCallback*, creationType>(callback)));
    }
    // System.Void onResult(System.Int32 statusCode, System.String result)
    // Offset: 0x27B9440
    void onResult(int statusCode, ::StringW result);
  }; // Viveport.Internal.AndroidPluginCallback
  #pragma pack(pop)
  static check_size<sizeof(AndroidPluginCallback), 48 + sizeof(::Viveport::Internal::StatusCallback2*)> __Viveport_Internal_AndroidPluginCallbackSizeCheck;
  static_assert(sizeof(AndroidPluginCallback) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::Internal::AndroidPluginCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Viveport::Internal::AndroidPluginCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Viveport::Internal::AndroidPluginCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Viveport::Internal::AndroidPluginCallback::onResult
// Il2CppName: onResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::Internal::AndroidPluginCallback::*)(int, ::StringW)>(&Viveport::Internal::AndroidPluginCallback::onResult)> {
  static const MethodInfo* get() {
    static auto* statusCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::AndroidPluginCallback*), "onResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{statusCode, result});
  }
};