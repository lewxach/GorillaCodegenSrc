// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal::LibTessDotNet
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
  // Forward declaring type: Vec3
  struct Vec3;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal.LibTessDotNet
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
  // Forward declaring type: CombineCallback
  class CombineCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*, "UnityEngine.Rendering.Universal.LibTessDotNet", "CombineCallback");
// Type namespace: UnityEngine.Rendering.Universal.LibTessDotNet
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.LibTessDotNet.CombineCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class CombineCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x530067C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CombineCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CombineCallback*, creationType>(object, method)));
    }
    // public System.Object Invoke(UnityEngine.Rendering.Universal.LibTessDotNet.Vec3 position, System.Object[] data, System.Single[] weights)
    // Offset: 0x530071C
    ::Il2CppObject* Invoke(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 position, ::ArrayW<::Il2CppObject*> data, ::ArrayW<float> weights);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Rendering.Universal.LibTessDotNet.Vec3 position, System.Object[] data, System.Single[] weights, System.AsyncCallback callback, System.Object object)
    // Offset: 0x5300730
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 position, ::ArrayW<::Il2CppObject*> data, ::ArrayW<float> weights, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0x53007D0
    ::Il2CppObject* EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Rendering.Universal.LibTessDotNet.CombineCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback::*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3, ::ArrayW<::Il2CppObject*>, ::ArrayW<float>)>(&UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "Vec3")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* weights = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, data, weights});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback::*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3, ::ArrayW<::Il2CppObject*>, ::ArrayW<float>, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.LibTessDotNet", "Vec3")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* weights = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, data, weights, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback::*)(::System::IAsyncResult*)>(&UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
