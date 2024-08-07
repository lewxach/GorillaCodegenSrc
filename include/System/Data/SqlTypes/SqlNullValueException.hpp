// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.SqlTypes.SqlTypeException
#include "System/Data/SqlTypes/SqlTypeException.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlNullValueException
  class SqlNullValueException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::SqlTypes::SqlNullValueException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlNullValueException*, "System.Data.SqlTypes", "SqlNullValueException");
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.SqlTypes.SqlNullValueException
  // [TokenAttribute] Offset: FFFFFFFF
  class SqlNullValueException : public ::System::Data::SqlTypes::SqlTypeException {
    public:
    // static private System.Runtime.Serialization.SerializationInfo SqlNullValueExceptionSerialization(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc)
    // Offset: 0x4CBFB48
    static ::System::Runtime::Serialization::SerializationInfo* SqlNullValueExceptionSerialization(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc);
    // public System.Void .ctor()
    // Offset: 0x4CACBF8
    // Implemented from: System.Data.SqlTypes.SqlTypeException
    // Base method: System.Void SqlTypeException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SqlNullValueException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::SqlTypes::SqlNullValueException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SqlNullValueException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x4CBFAC0
    // Implemented from: System.Data.SqlTypes.SqlTypeException
    // Base method: System.Void SqlTypeException::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SqlNullValueException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::SqlTypes::SqlNullValueException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SqlNullValueException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception e)
    // Offset: 0x4CBFA9C
    // Implemented from: System.Data.SqlTypes.SqlTypeException
    // Base method: System.Void SqlTypeException::.ctor(System.String message, System.Exception e)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SqlNullValueException* New_ctor(::StringW message, ::System::Exception* e) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::SqlTypes::SqlNullValueException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SqlNullValueException*, creationType>(message, e)));
    }
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc)
    // Offset: 0x4CBFAE8
    // Implemented from: System.Data.SqlTypes.SqlTypeException
    // Base method: System.Void SqlTypeException::.ctor(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SqlNullValueException* New_ctor(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::SqlTypes::SqlNullValueException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SqlNullValueException*, creationType>(si, sc)));
    }
  }; // System.Data.SqlTypes.SqlNullValueException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlNullValueException::SqlNullValueExceptionSerialization
// Il2CppName: SqlNullValueExceptionSerialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationInfo* (*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Data::SqlTypes::SqlNullValueException::SqlNullValueExceptionSerialization)> {
  static const MethodInfo* get() {
    static auto* si = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* sc = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlNullValueException*), "SqlNullValueExceptionSerialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{si, sc});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlNullValueException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlNullValueException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlNullValueException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlNullValueException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
