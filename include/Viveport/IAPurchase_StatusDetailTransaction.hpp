// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Viveport.IAPurchase
#include "Viveport/IAPurchase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::IAPurchase::StatusDetailTransaction);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::IAPurchase::StatusDetailTransaction*, "Viveport", "IAPurchase/StatusDetailTransaction");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.IAPurchase/StatusDetailTransaction
  // [TokenAttribute] Offset: FFFFFFFF
  class IAPurchase::StatusDetailTransaction : public ::Il2CppObject {
    public:
    public:
    // private System.Int64 <create_time>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    int64_t create_time;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.String <payment_method>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW payment_method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <status>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW status;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Int64 <create_time>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$create_time$k__BackingField();
    // Get instance field reference: private System.String <payment_method>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$payment_method$k__BackingField();
    // Get instance field reference: private System.String <status>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$status$k__BackingField();
    // public System.Int64 get_create_time()
    // Offset: 0x27B4A3C
    int64_t get_create_time();
    // public System.Void set_create_time(System.Int64 value)
    // Offset: 0x27B4A44
    void set_create_time(int64_t value);
    // public System.String get_payment_method()
    // Offset: 0x27B4A4C
    ::StringW get_payment_method();
    // public System.Void set_payment_method(System.String value)
    // Offset: 0x27B4A54
    void set_payment_method(::StringW value);
    // public System.String get_status()
    // Offset: 0x27B4A5C
    ::StringW get_status();
    // public System.Void set_status(System.String value)
    // Offset: 0x27B4A64
    void set_status(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x27B4A6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IAPurchase::StatusDetailTransaction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::IAPurchase::StatusDetailTransaction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IAPurchase::StatusDetailTransaction*, creationType>()));
    }
  }; // Viveport.IAPurchase/StatusDetailTransaction
  #pragma pack(pop)
  static check_size<sizeof(IAPurchase::StatusDetailTransaction), 32 + sizeof(::StringW)> __Viveport_IAPurchase_StatusDetailTransactionSizeCheck;
  static_assert(sizeof(IAPurchase::StatusDetailTransaction) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetailTransaction::get_create_time
// Il2CppName: get_create_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Viveport::IAPurchase::StatusDetailTransaction::*)()>(&Viveport::IAPurchase::StatusDetailTransaction::get_create_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetailTransaction*), "get_create_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetailTransaction::set_create_time
// Il2CppName: set_create_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::StatusDetailTransaction::*)(int64_t)>(&Viveport::IAPurchase::StatusDetailTransaction::set_create_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetailTransaction*), "set_create_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetailTransaction::get_payment_method
// Il2CppName: get_payment_method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::StatusDetailTransaction::*)()>(&Viveport::IAPurchase::StatusDetailTransaction::get_payment_method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetailTransaction*), "get_payment_method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetailTransaction::set_payment_method
// Il2CppName: set_payment_method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::StatusDetailTransaction::*)(::StringW)>(&Viveport::IAPurchase::StatusDetailTransaction::set_payment_method)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetailTransaction*), "set_payment_method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetailTransaction::get_status
// Il2CppName: get_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::StatusDetailTransaction::*)()>(&Viveport::IAPurchase::StatusDetailTransaction::get_status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetailTransaction*), "get_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetailTransaction::set_status
// Il2CppName: set_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::StatusDetailTransaction::*)(::StringW)>(&Viveport::IAPurchase::StatusDetailTransaction::set_status)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetailTransaction*), "set_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetailTransaction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
