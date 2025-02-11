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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaRunnable
  class AndroidJavaRunnable;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaRunnableProxy
  class AndroidJavaRunnableProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AndroidJavaRunnableProxy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaRunnableProxy*, "UnityEngine", "AndroidJavaRunnableProxy");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJavaRunnableProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidJavaRunnableProxy : public ::UnityEngine::AndroidJavaProxy {
    public:
    public:
    // private UnityEngine.AndroidJavaRunnable mRunnable
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AndroidJavaRunnable* mRunnable;
    // Field size check
    static_assert(sizeof(::UnityEngine::AndroidJavaRunnable*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::AndroidJavaRunnable*
    constexpr operator ::UnityEngine::AndroidJavaRunnable*() const noexcept {
      return mRunnable;
    }
    // Get instance field reference: private UnityEngine.AndroidJavaRunnable mRunnable
    [[deprecated("Use field access instead!")]] ::UnityEngine::AndroidJavaRunnable*& dyn_mRunnable();
    // public System.Void .ctor(UnityEngine.AndroidJavaRunnable runnable)
    // Offset: 0x545C23C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaRunnableProxy* New_ctor(::UnityEngine::AndroidJavaRunnable* runnable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AndroidJavaRunnableProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaRunnableProxy*, creationType>(runnable)));
    }
    // public System.Void run()
    // Offset: 0x545C34C
    void run();
    // public override System.IntPtr Invoke(System.String methodName, System.IntPtr javaArgs)
    // Offset: 0x545C370
    // Implemented from: UnityEngine.AndroidJavaProxy
    // Base method: System.IntPtr AndroidJavaProxy::Invoke(System.String methodName, System.IntPtr javaArgs)
    ::System::IntPtr Invoke(::StringW methodName, ::System::IntPtr javaArgs);
  }; // UnityEngine.AndroidJavaRunnableProxy
  #pragma pack(pop)
  static check_size<sizeof(AndroidJavaRunnableProxy), 32 + sizeof(::UnityEngine::AndroidJavaRunnable*)> __UnityEngine_AndroidJavaRunnableProxySizeCheck;
  static_assert(sizeof(AndroidJavaRunnableProxy) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AndroidJavaRunnableProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AndroidJavaRunnableProxy::run
// Il2CppName: run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AndroidJavaRunnableProxy::*)()>(&UnityEngine::AndroidJavaRunnableProxy::run)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaRunnableProxy*), "run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AndroidJavaRunnableProxy::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (UnityEngine::AndroidJavaRunnableProxy::*)(::StringW, ::System::IntPtr)>(&UnityEngine::AndroidJavaRunnableProxy::Invoke)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* javaArgs = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AndroidJavaRunnableProxy*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, javaArgs});
  }
};
