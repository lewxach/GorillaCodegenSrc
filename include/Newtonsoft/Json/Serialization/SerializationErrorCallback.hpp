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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ErrorContext
  class ErrorContext;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: SerializationErrorCallback
  class SerializationErrorCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::SerializationErrorCallback);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::SerializationErrorCallback*, "Newtonsoft.Json.Serialization", "SerializationErrorCallback");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.SerializationErrorCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializationErrorCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4720FD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationErrorCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::SerializationErrorCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationErrorCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object o, System.Runtime.Serialization.StreamingContext context, Newtonsoft.Json.Serialization.ErrorContext errorContext)
    // Offset: 0x47210DC
    void Invoke(::Il2CppObject* o, ::System::Runtime::Serialization::StreamingContext context, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext);
  }; // Newtonsoft.Json.Serialization.SerializationErrorCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::SerializationErrorCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::SerializationErrorCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::SerializationErrorCallback::*)(::Il2CppObject*, ::System::Runtime::Serialization::StreamingContext, ::Newtonsoft::Json::Serialization::ErrorContext*)>(&Newtonsoft::Json::Serialization::SerializationErrorCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* errorContext = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "ErrorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::SerializationErrorCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, context, errorContext});
  }
};
