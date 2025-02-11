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
NEED_NO_BOX(::Viveport::IAPurchase::QueryResponse2);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::IAPurchase::QueryResponse2*, "Viveport", "IAPurchase/QueryResponse2");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.IAPurchase/QueryResponse2
  // [TokenAttribute] Offset: FFFFFFFF
  class IAPurchase::QueryResponse2 : public ::Il2CppObject {
    public:
    public:
    // private System.String <order_id>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW order_id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <app_id>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW app_id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <purchase_id>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW purchase_id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <user_data>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW user_data;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <price>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::StringW price;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <currency>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::StringW currency;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int64 <paid_timestamp>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    int64_t paid_timestamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Get instance field reference: private System.String <order_id>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$order_id$k__BackingField();
    // Get instance field reference: private System.String <app_id>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$app_id$k__BackingField();
    // Get instance field reference: private System.String <purchase_id>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$purchase_id$k__BackingField();
    // Get instance field reference: private System.String <user_data>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$user_data$k__BackingField();
    // Get instance field reference: private System.String <price>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$price$k__BackingField();
    // Get instance field reference: private System.String <currency>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$currency$k__BackingField();
    // Get instance field reference: private System.Int64 <paid_timestamp>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$paid_timestamp$k__BackingField();
    // public System.String get_order_id()
    // Offset: 0x27B499C
    ::StringW get_order_id();
    // public System.Void set_order_id(System.String value)
    // Offset: 0x27B49A4
    void set_order_id(::StringW value);
    // public System.String get_app_id()
    // Offset: 0x27B49AC
    ::StringW get_app_id();
    // public System.Void set_app_id(System.String value)
    // Offset: 0x27B49B4
    void set_app_id(::StringW value);
    // public System.String get_purchase_id()
    // Offset: 0x27B49BC
    ::StringW get_purchase_id();
    // public System.Void set_purchase_id(System.String value)
    // Offset: 0x27B49C4
    void set_purchase_id(::StringW value);
    // public System.String get_user_data()
    // Offset: 0x27B49CC
    ::StringW get_user_data();
    // public System.Void set_user_data(System.String value)
    // Offset: 0x27B49D4
    void set_user_data(::StringW value);
    // public System.String get_price()
    // Offset: 0x27B49DC
    ::StringW get_price();
    // public System.Void set_price(System.String value)
    // Offset: 0x27B49E4
    void set_price(::StringW value);
    // public System.String get_currency()
    // Offset: 0x27B49EC
    ::StringW get_currency();
    // public System.Void set_currency(System.String value)
    // Offset: 0x27B49F4
    void set_currency(::StringW value);
    // public System.Int64 get_paid_timestamp()
    // Offset: 0x27B49FC
    int64_t get_paid_timestamp();
    // public System.Void set_paid_timestamp(System.Int64 value)
    // Offset: 0x27B4A04
    void set_paid_timestamp(int64_t value);
    // public System.Void .ctor()
    // Offset: 0x27B2780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IAPurchase::QueryResponse2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::IAPurchase::QueryResponse2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IAPurchase::QueryResponse2*, creationType>()));
    }
  }; // Viveport.IAPurchase/QueryResponse2
  #pragma pack(pop)
  static check_size<sizeof(IAPurchase::QueryResponse2), 64 + sizeof(int64_t)> __Viveport_IAPurchase_QueryResponse2SizeCheck;
  static_assert(sizeof(IAPurchase::QueryResponse2) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::get_order_id
// Il2CppName: get_order_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::QueryResponse2::*)()>(&Viveport::IAPurchase::QueryResponse2::get_order_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "get_order_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::set_order_id
// Il2CppName: set_order_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::QueryResponse2::*)(::StringW)>(&Viveport::IAPurchase::QueryResponse2::set_order_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "set_order_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::get_app_id
// Il2CppName: get_app_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::QueryResponse2::*)()>(&Viveport::IAPurchase::QueryResponse2::get_app_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "get_app_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::set_app_id
// Il2CppName: set_app_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::QueryResponse2::*)(::StringW)>(&Viveport::IAPurchase::QueryResponse2::set_app_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "set_app_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::get_purchase_id
// Il2CppName: get_purchase_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::QueryResponse2::*)()>(&Viveport::IAPurchase::QueryResponse2::get_purchase_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "get_purchase_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::set_purchase_id
// Il2CppName: set_purchase_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::QueryResponse2::*)(::StringW)>(&Viveport::IAPurchase::QueryResponse2::set_purchase_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "set_purchase_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::get_user_data
// Il2CppName: get_user_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::QueryResponse2::*)()>(&Viveport::IAPurchase::QueryResponse2::get_user_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "get_user_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::set_user_data
// Il2CppName: set_user_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::QueryResponse2::*)(::StringW)>(&Viveport::IAPurchase::QueryResponse2::set_user_data)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "set_user_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::get_price
// Il2CppName: get_price
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::QueryResponse2::*)()>(&Viveport::IAPurchase::QueryResponse2::get_price)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "get_price", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::set_price
// Il2CppName: set_price
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::QueryResponse2::*)(::StringW)>(&Viveport::IAPurchase::QueryResponse2::set_price)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "set_price", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::get_currency
// Il2CppName: get_currency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::QueryResponse2::*)()>(&Viveport::IAPurchase::QueryResponse2::get_currency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "get_currency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::set_currency
// Il2CppName: set_currency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::QueryResponse2::*)(::StringW)>(&Viveport::IAPurchase::QueryResponse2::set_currency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "set_currency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::get_paid_timestamp
// Il2CppName: get_paid_timestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Viveport::IAPurchase::QueryResponse2::*)()>(&Viveport::IAPurchase::QueryResponse2::get_paid_timestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "get_paid_timestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::set_paid_timestamp
// Il2CppName: set_paid_timestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::QueryResponse2::*)(int64_t)>(&Viveport::IAPurchase::QueryResponse2::set_paid_timestamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryResponse2*), "set_paid_timestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryResponse2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
