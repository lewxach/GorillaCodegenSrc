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
NEED_NO_BOX(::Viveport::IAPurchase::Subscription);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::IAPurchase::Subscription*, "Viveport", "IAPurchase/Subscription");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.IAPurchase/Subscription
  // [TokenAttribute] Offset: FFFFFFFF
  class IAPurchase::Subscription : public ::Il2CppObject {
    public:
    public:
    // private System.String <app_id>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW app_id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <order_id>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW order_id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <subscription_id>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW subscription_id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <price>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW price;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <currency>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::StringW currency;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int64 <subscribed_timestamp>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    int64_t subscribed_timestamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private Viveport.IAPurchase/TimePeriod <free_trial_period>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::Viveport::IAPurchase::TimePeriod* free_trial_period;
    // Field size check
    static_assert(sizeof(::Viveport::IAPurchase::TimePeriod*) == 0x8);
    // private Viveport.IAPurchase/TimePeriod <charge_period>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::Viveport::IAPurchase::TimePeriod* charge_period;
    // Field size check
    static_assert(sizeof(::Viveport::IAPurchase::TimePeriod*) == 0x8);
    // private System.Int32 <number_of_charge_period>k__BackingField
    // Size: 0x4
    // Offset: 0x50
    int number_of_charge_period;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: number_of_charge_period and: plan_id
    char __padding8[0x4] = {};
    // private System.String <plan_id>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::StringW plan_id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <plan_name>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::StringW plan_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <status>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    ::StringW status;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Viveport.IAPurchase/StatusDetail <status_detail>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    ::Viveport::IAPurchase::StatusDetail* status_detail;
    // Field size check
    static_assert(sizeof(::Viveport::IAPurchase::StatusDetail*) == 0x8);
    public:
    // Get instance field reference: private System.String <app_id>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$app_id$k__BackingField();
    // Get instance field reference: private System.String <order_id>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$order_id$k__BackingField();
    // Get instance field reference: private System.String <subscription_id>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$subscription_id$k__BackingField();
    // Get instance field reference: private System.String <price>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$price$k__BackingField();
    // Get instance field reference: private System.String <currency>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$currency$k__BackingField();
    // Get instance field reference: private System.Int64 <subscribed_timestamp>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$subscribed_timestamp$k__BackingField();
    // Get instance field reference: private Viveport.IAPurchase/TimePeriod <free_trial_period>k__BackingField
    [[deprecated("Use field access instead!")]] ::Viveport::IAPurchase::TimePeriod*& dyn_$free_trial_period$k__BackingField();
    // Get instance field reference: private Viveport.IAPurchase/TimePeriod <charge_period>k__BackingField
    [[deprecated("Use field access instead!")]] ::Viveport::IAPurchase::TimePeriod*& dyn_$charge_period$k__BackingField();
    // Get instance field reference: private System.Int32 <number_of_charge_period>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$number_of_charge_period$k__BackingField();
    // Get instance field reference: private System.String <plan_id>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$plan_id$k__BackingField();
    // Get instance field reference: private System.String <plan_name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$plan_name$k__BackingField();
    // Get instance field reference: private System.String <status>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$status$k__BackingField();
    // Get instance field reference: private Viveport.IAPurchase/StatusDetail <status_detail>k__BackingField
    [[deprecated("Use field access instead!")]] ::Viveport::IAPurchase::StatusDetail*& dyn_$status_detail$k__BackingField();
    // public System.String get_app_id()
    // Offset: 0x27B4AD4
    ::StringW get_app_id();
    // public System.Void set_app_id(System.String value)
    // Offset: 0x27B4ADC
    void set_app_id(::StringW value);
    // public System.String get_order_id()
    // Offset: 0x27B4AE4
    ::StringW get_order_id();
    // public System.Void set_order_id(System.String value)
    // Offset: 0x27B4AEC
    void set_order_id(::StringW value);
    // public System.String get_subscription_id()
    // Offset: 0x27B4AF4
    ::StringW get_subscription_id();
    // public System.Void set_subscription_id(System.String value)
    // Offset: 0x27B4AFC
    void set_subscription_id(::StringW value);
    // public System.String get_price()
    // Offset: 0x27B4B04
    ::StringW get_price();
    // public System.Void set_price(System.String value)
    // Offset: 0x27B4B0C
    void set_price(::StringW value);
    // public System.String get_currency()
    // Offset: 0x27B4B14
    ::StringW get_currency();
    // public System.Void set_currency(System.String value)
    // Offset: 0x27B4B1C
    void set_currency(::StringW value);
    // public System.Int64 get_subscribed_timestamp()
    // Offset: 0x27B4B24
    int64_t get_subscribed_timestamp();
    // public System.Void set_subscribed_timestamp(System.Int64 value)
    // Offset: 0x27B4B2C
    void set_subscribed_timestamp(int64_t value);
    // public Viveport.IAPurchase/TimePeriod get_free_trial_period()
    // Offset: 0x27B4B34
    ::Viveport::IAPurchase::TimePeriod* get_free_trial_period();
    // public System.Void set_free_trial_period(Viveport.IAPurchase/TimePeriod value)
    // Offset: 0x27B4B3C
    void set_free_trial_period(::Viveport::IAPurchase::TimePeriod* value);
    // public Viveport.IAPurchase/TimePeriod get_charge_period()
    // Offset: 0x27B4B44
    ::Viveport::IAPurchase::TimePeriod* get_charge_period();
    // public System.Void set_charge_period(Viveport.IAPurchase/TimePeriod value)
    // Offset: 0x27B4B4C
    void set_charge_period(::Viveport::IAPurchase::TimePeriod* value);
    // public System.Int32 get_number_of_charge_period()
    // Offset: 0x27B4B54
    int get_number_of_charge_period();
    // public System.Void set_number_of_charge_period(System.Int32 value)
    // Offset: 0x27B4B5C
    void set_number_of_charge_period(int value);
    // public System.String get_plan_id()
    // Offset: 0x27B4B64
    ::StringW get_plan_id();
    // public System.Void set_plan_id(System.String value)
    // Offset: 0x27B4B6C
    void set_plan_id(::StringW value);
    // public System.String get_plan_name()
    // Offset: 0x27B4B74
    ::StringW get_plan_name();
    // public System.Void set_plan_name(System.String value)
    // Offset: 0x27B4B7C
    void set_plan_name(::StringW value);
    // public System.String get_status()
    // Offset: 0x27B4B84
    ::StringW get_status();
    // public System.Void set_status(System.String value)
    // Offset: 0x27B4B8C
    void set_status(::StringW value);
    // public Viveport.IAPurchase/StatusDetail get_status_detail()
    // Offset: 0x27B4B94
    ::Viveport::IAPurchase::StatusDetail* get_status_detail();
    // public System.Void set_status_detail(Viveport.IAPurchase/StatusDetail value)
    // Offset: 0x27B4B9C
    void set_status_detail(::Viveport::IAPurchase::StatusDetail* value);
    // public System.Void .ctor()
    // Offset: 0x27B4BA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IAPurchase::Subscription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::IAPurchase::Subscription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IAPurchase::Subscription*, creationType>()));
    }
  }; // Viveport.IAPurchase/Subscription
  #pragma pack(pop)
  static check_size<sizeof(IAPurchase::Subscription), 112 + sizeof(::Viveport::IAPurchase::StatusDetail*)> __Viveport_IAPurchase_SubscriptionSizeCheck;
  static_assert(sizeof(IAPurchase::Subscription) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_app_id
// Il2CppName: get_app_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_app_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_app_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_app_id
// Il2CppName: set_app_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(::StringW)>(&Viveport::IAPurchase::Subscription::set_app_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_app_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_order_id
// Il2CppName: get_order_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_order_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_order_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_order_id
// Il2CppName: set_order_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(::StringW)>(&Viveport::IAPurchase::Subscription::set_order_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_order_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_subscription_id
// Il2CppName: get_subscription_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_subscription_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_subscription_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_subscription_id
// Il2CppName: set_subscription_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(::StringW)>(&Viveport::IAPurchase::Subscription::set_subscription_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_subscription_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_price
// Il2CppName: get_price
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_price)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_price", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_price
// Il2CppName: set_price
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(::StringW)>(&Viveport::IAPurchase::Subscription::set_price)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_price", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_currency
// Il2CppName: get_currency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_currency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_currency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_currency
// Il2CppName: set_currency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(::StringW)>(&Viveport::IAPurchase::Subscription::set_currency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_currency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_subscribed_timestamp
// Il2CppName: get_subscribed_timestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_subscribed_timestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_subscribed_timestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_subscribed_timestamp
// Il2CppName: set_subscribed_timestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(int64_t)>(&Viveport::IAPurchase::Subscription::set_subscribed_timestamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_subscribed_timestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_free_trial_period
// Il2CppName: get_free_trial_period
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::IAPurchase::TimePeriod* (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_free_trial_period)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_free_trial_period", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_free_trial_period
// Il2CppName: set_free_trial_period
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(::Viveport::IAPurchase::TimePeriod*)>(&Viveport::IAPurchase::Subscription::set_free_trial_period)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Viveport", "IAPurchase/TimePeriod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_free_trial_period", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_charge_period
// Il2CppName: get_charge_period
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::IAPurchase::TimePeriod* (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_charge_period)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_charge_period", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_charge_period
// Il2CppName: set_charge_period
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(::Viveport::IAPurchase::TimePeriod*)>(&Viveport::IAPurchase::Subscription::set_charge_period)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Viveport", "IAPurchase/TimePeriod")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_charge_period", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_number_of_charge_period
// Il2CppName: get_number_of_charge_period
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_number_of_charge_period)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_number_of_charge_period", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_number_of_charge_period
// Il2CppName: set_number_of_charge_period
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(int)>(&Viveport::IAPurchase::Subscription::set_number_of_charge_period)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_number_of_charge_period", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_plan_id
// Il2CppName: get_plan_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_plan_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_plan_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_plan_id
// Il2CppName: set_plan_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(::StringW)>(&Viveport::IAPurchase::Subscription::set_plan_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_plan_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_plan_name
// Il2CppName: get_plan_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_plan_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_plan_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_plan_name
// Il2CppName: set_plan_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(::StringW)>(&Viveport::IAPurchase::Subscription::set_plan_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_plan_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_status
// Il2CppName: get_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_status
// Il2CppName: set_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(::StringW)>(&Viveport::IAPurchase::Subscription::set_status)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::get_status_detail
// Il2CppName: get_status_detail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::IAPurchase::StatusDetail* (Viveport::IAPurchase::Subscription::*)()>(&Viveport::IAPurchase::Subscription::get_status_detail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "get_status_detail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::set_status_detail
// Il2CppName: set_status_detail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::Subscription::*)(::Viveport::IAPurchase::StatusDetail*)>(&Viveport::IAPurchase::Subscription::set_status_detail)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Viveport", "IAPurchase/StatusDetail")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::Subscription*), "set_status_detail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::Subscription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
