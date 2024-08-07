// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: ExternalException
  class ExternalException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::ExternalException);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ExternalException*, "System.Runtime.InteropServices", "ExternalException");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.ExternalException
  // [TokenAttribute] Offset: FFFFFFFF
  class ExternalException : public ::System::SystemException {
    public:
    // public System.Void .ctor(System.String message, System.Int32 errorCode)
    // Offset: 0x4572818
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExternalException* New_ctor(::StringW message, int errorCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::ExternalException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExternalException*, creationType>(message, errorCode)));
    }
    // public System.Int32 get_ErrorCode()
    // Offset: 0x4572848
    int get_ErrorCode();
    // public System.Void .ctor()
    // Offset: 0x4572774
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExternalException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::ExternalException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExternalException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x45727D0
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExternalException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::ExternalException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExternalException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception inner)
    // Offset: 0x45727F4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception inner)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception inner)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExternalException* New_ctor(::StringW message, ::System::Exception* inner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::ExternalException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExternalException*, creationType>(message, inner)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4572840
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExternalException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::ExternalException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExternalException*, creationType>(info, context)));
    }
    // public override System.String ToString()
    // Offset: 0x4572850
    // Implemented from: System.Exception
    // Base method: System.String Exception::ToString()
    ::StringW ToString();
  }; // System.Runtime.InteropServices.ExternalException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::ExternalException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::ExternalException::get_ErrorCode
// Il2CppName: get_ErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::InteropServices::ExternalException::*)()>(&System::Runtime::InteropServices::ExternalException::get_ErrorCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::ExternalException*), "get_ErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::ExternalException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::ExternalException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::ExternalException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::ExternalException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::ExternalException::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::InteropServices::ExternalException::*)()>(&System::Runtime::InteropServices::ExternalException::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::ExternalException*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
