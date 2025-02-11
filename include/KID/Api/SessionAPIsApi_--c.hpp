// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: KID.Api.SessionAPIsApi
#include "KID/Api/SessionAPIsApi.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: KID::Client
namespace KID::Client {
  // Forward declaring type: ExceptionFactory
  class ExceptionFactory;
  // Forward declaring type: IApiResponse
  class IApiResponse;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Api::SessionAPIsApi::$$c);
DEFINE_IL2CPP_ARG_TYPE(::KID::Api::SessionAPIsApi::$$c*, "KID.Api", "SessionAPIsApi/<>c");
// Type namespace: KID.Api
namespace KID::Api {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: KID.Api.SessionAPIsApi/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SessionAPIsApi::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly KID.Api.SessionAPIsApi/<>c <>9
    static ::KID::Api::SessionAPIsApi::$$c* _get_$$9();
    // Set static field: static public readonly KID.Api.SessionAPIsApi/<>c <>9
    static void _set_$$9(::KID::Api::SessionAPIsApi::$$c* value);
    // Get static field: static public KID.Client.ExceptionFactory <>9__2_0
    static ::KID::Client::ExceptionFactory* _get_$$9__2_0();
    // Set static field: static public KID.Client.ExceptionFactory <>9__2_0
    static void _set_$$9__2_0(::KID::Client::ExceptionFactory* value);
    // Get static field: static public KID.Client.ExceptionFactory <>9__3_0
    static ::KID::Client::ExceptionFactory* _get_$$9__3_0();
    // Set static field: static public KID.Client.ExceptionFactory <>9__3_0
    static void _set_$$9__3_0(::KID::Client::ExceptionFactory* value);
    // Get static field: static public KID.Client.ExceptionFactory <>9__4_0
    static ::KID::Client::ExceptionFactory* _get_$$9__4_0();
    // Set static field: static public KID.Client.ExceptionFactory <>9__4_0
    static void _set_$$9__4_0(::KID::Client::ExceptionFactory* value);
    // static private System.Void .cctor()
    // Offset: 0x4397638
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x43976A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionAPIsApi::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Api::SessionAPIsApi::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionAPIsApi::$$c*, creationType>()));
    }
    // System.Exception <.ctor>b__2_0(System.String name, KID.Client.IApiResponse response)
    // Offset: 0x43976A8
    ::System::Exception* $_ctor$b__2_0(::StringW name, ::KID::Client::IApiResponse* response);
    // System.Exception <.ctor>b__3_0(System.String name, KID.Client.IApiResponse response)
    // Offset: 0x43976B0
    ::System::Exception* $_ctor$b__3_0(::StringW name, ::KID::Client::IApiResponse* response);
    // System.Exception <.ctor>b__4_0(System.String name, KID.Client.IApiResponse response)
    // Offset: 0x43976B8
    ::System::Exception* $_ctor$b__4_0(::StringW name, ::KID::Client::IApiResponse* response);
  }; // KID.Api.SessionAPIsApi/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&KID::Api::SessionAPIsApi::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::$$c::$_ctor$b__2_0
// Il2CppName: <.ctor>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (KID::Api::SessionAPIsApi::$$c::*)(::StringW, ::KID::Client::IApiResponse*)>(&KID::Api::SessionAPIsApi::$$c::$_ctor$b__2_0)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("KID.Client", "IApiResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi::$$c*), "<.ctor>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, response});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::$$c::$_ctor$b__3_0
// Il2CppName: <.ctor>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (KID::Api::SessionAPIsApi::$$c::*)(::StringW, ::KID::Client::IApiResponse*)>(&KID::Api::SessionAPIsApi::$$c::$_ctor$b__3_0)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("KID.Client", "IApiResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi::$$c*), "<.ctor>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, response});
  }
};
// Writing MetadataGetter for method: KID::Api::SessionAPIsApi::$$c::$_ctor$b__4_0
// Il2CppName: <.ctor>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (KID::Api::SessionAPIsApi::$$c::*)(::StringW, ::KID::Client::IApiResponse*)>(&KID::Api::SessionAPIsApi::$$c::$_ctor$b__4_0)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("KID.Client", "IApiResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Api::SessionAPIsApi::$$c*), "<.ctor>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, response});
  }
};
