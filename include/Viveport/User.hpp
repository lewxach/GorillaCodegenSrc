// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Viveport::Internal
namespace Viveport::Internal {
  // Forward declaring type: StatusCallback
  class StatusCallback;
}
// Forward declaring namespace: Viveport
namespace Viveport {
  // Forward declaring type: StatusCallback
  class StatusCallback;
}
// Completed forward declares
// Type namespace: Viveport
namespace Viveport {
  // Forward declaring type: User
  class User;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::User);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::User*, "Viveport", "User");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.User
  // [TokenAttribute] Offset: FFFFFFFF
  class User : public ::Il2CppObject {
    public:
    // Get static field: static private Viveport.Internal.StatusCallback isReadyIl2cppCallback
    static ::Viveport::Internal::StatusCallback* _get_isReadyIl2cppCallback();
    // Set static field: static private Viveport.Internal.StatusCallback isReadyIl2cppCallback
    static void _set_isReadyIl2cppCallback(::Viveport::Internal::StatusCallback* value);
    // static private System.Void IsReadyIl2cppCallback(System.Int32 errorCode)
    // Offset: 0x27ABA48
    static void IsReadyIl2cppCallback(int errorCode);
    // static public System.Int32 IsReady(Viveport.StatusCallback callback)
    // Offset: 0x27ABAAC
    static int IsReady(::Viveport::StatusCallback* callback);
    // static public System.String GetUserId()
    // Offset: 0x27ABDEC
    static ::StringW GetUserId();
    // static public System.String GetUserName()
    // Offset: 0x27ABEF8
    static ::StringW GetUserName();
    // static public System.String GetUserAvatarUrl()
    // Offset: 0x27AC004
    static ::StringW GetUserAvatarUrl();
    // public System.Void .ctor()
    // Offset: 0x27AC110
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static User* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::User::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<User*, creationType>()));
    }
  }; // Viveport.User
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::User::IsReadyIl2cppCallback
// Il2CppName: IsReadyIl2cppCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&Viveport::User::IsReadyIl2cppCallback)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::User*), "IsReadyIl2cppCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode});
  }
};
// Writing MetadataGetter for method: Viveport::User::IsReady
// Il2CppName: IsReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Viveport::StatusCallback*)>(&Viveport::User::IsReady)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("Viveport", "StatusCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::User*), "IsReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: Viveport::User::GetUserId
// Il2CppName: GetUserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Viveport::User::GetUserId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::User*), "GetUserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::User::GetUserName
// Il2CppName: GetUserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Viveport::User::GetUserName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::User*), "GetUserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::User::GetUserAvatarUrl
// Il2CppName: GetUserAvatarUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Viveport::User::GetUserAvatarUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::User*), "GetUserAvatarUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::User::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
