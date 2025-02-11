// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Viveport.IAPurchase
#include "Viveport/IAPurchase.hpp"
// Including type: Viveport.IAPurchase/BaseHandler
#include "Viveport/IAPurchase_BaseHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Viveport::Internal
namespace Viveport::Internal {
  // Forward declaring type: IAPurchaseCallback
  class IAPurchaseCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::IAPurchase::IAPHandler);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::IAPurchase::IAPHandler*, "Viveport", "IAPurchase/IAPHandler");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.IAPurchase/IAPHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IAPurchase::IAPHandler : public ::Viveport::IAPurchase::BaseHandler {
    public:
    // Get static field: static private Viveport.IAPurchase/IAPurchaseListener listener
    static ::Viveport::IAPurchase::IAPurchaseListener* _get_listener();
    // Set static field: static private Viveport.IAPurchase/IAPurchaseListener listener
    static void _set_listener(::Viveport::IAPurchase::IAPurchaseListener* value);
    // public System.Void .ctor(Viveport.IAPurchase/IAPurchaseListener cb)
    // Offset: 0x27AEEEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IAPurchase::IAPHandler* New_ctor(::Viveport::IAPurchase::IAPurchaseListener* cb) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::IAPurchase::IAPHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IAPurchase::IAPHandler*, creationType>(cb)));
    }
    // public Viveport.Internal.IAPurchaseCallback getIsReadyHandler()
    // Offset: 0x27AEF5C
    ::Viveport::Internal::IAPurchaseCallback* getIsReadyHandler();
    // public Viveport.Internal.IAPurchaseCallback getRequestHandler()
    // Offset: 0x27AF14C
    ::Viveport::Internal::IAPurchaseCallback* getRequestHandler();
    // public Viveport.Internal.IAPurchaseCallback getPurchaseHandler()
    // Offset: 0x27AF394
    ::Viveport::Internal::IAPurchaseCallback* getPurchaseHandler();
    // public Viveport.Internal.IAPurchaseCallback getQueryHandler()
    // Offset: 0x27AF4E4
    ::Viveport::Internal::IAPurchaseCallback* getQueryHandler();
    // public Viveport.Internal.IAPurchaseCallback getQueryListHandler()
    // Offset: 0x27AF62C
    ::Viveport::Internal::IAPurchaseCallback* getQueryListHandler();
    // public Viveport.Internal.IAPurchaseCallback getBalanceHandler()
    // Offset: 0x27AF774
    ::Viveport::Internal::IAPurchaseCallback* getBalanceHandler();
    // public Viveport.Internal.IAPurchaseCallback getRequestSubscriptionHandler()
    // Offset: 0x27AF90C
    ::Viveport::Internal::IAPurchaseCallback* getRequestSubscriptionHandler();
    // public Viveport.Internal.IAPurchaseCallback getRequestSubscriptionWithPlanIDHandler()
    // Offset: 0x27AFA5C
    ::Viveport::Internal::IAPurchaseCallback* getRequestSubscriptionWithPlanIDHandler();
    // public Viveport.Internal.IAPurchaseCallback getSubscribeHandler()
    // Offset: 0x27AFBAC
    ::Viveport::Internal::IAPurchaseCallback* getSubscribeHandler();
    // public Viveport.Internal.IAPurchaseCallback getQuerySubscriptionHandler()
    // Offset: 0x27AFCFC
    ::Viveport::Internal::IAPurchaseCallback* getQuerySubscriptionHandler();
    // public Viveport.Internal.IAPurchaseCallback getQuerySubscriptionListHandler()
    // Offset: 0x27AFE44
    ::Viveport::Internal::IAPurchaseCallback* getQuerySubscriptionListHandler();
    // public Viveport.Internal.IAPurchaseCallback getCancelSubscriptionHandler()
    // Offset: 0x27AFF94
    ::Viveport::Internal::IAPurchaseCallback* getCancelSubscriptionHandler();
    // protected override System.Void IsReadyHandler(System.Int32 code, System.String message)
    // Offset: 0x27B000C
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::IsReadyHandler(System.Int32 code, System.String message)
    void IsReadyHandler(int code, ::StringW message);
    // protected override System.Void RequestHandler(System.Int32 code, System.String message)
    // Offset: 0x27B04AC
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::RequestHandler(System.Int32 code, System.String message)
    void RequestHandler(int code, ::StringW message);
    // protected override System.Void PurchaseHandler(System.Int32 code, System.String message)
    // Offset: 0x27B094C
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::PurchaseHandler(System.Int32 code, System.String message)
    void PurchaseHandler(int code, ::StringW message);
    // protected override System.Void QueryHandler(System.Int32 code, System.String message)
    // Offset: 0x27B0E6C
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::QueryHandler(System.Int32 code, System.String message)
    void QueryHandler(int code, ::StringW message);
    // protected override System.Void QueryListHandler(System.Int32 code, System.String message)
    // Offset: 0x27B1784
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::QueryListHandler(System.Int32 code, System.String message)
    void QueryListHandler(int code, ::StringW message);
    // protected override System.Void BalanceHandler(System.Int32 code, System.String message)
    // Offset: 0x27B2790
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::BalanceHandler(System.Int32 code, System.String message)
    void BalanceHandler(int code, ::StringW message);
    // protected override System.Void RequestSubscriptionHandler(System.Int32 code, System.String message)
    // Offset: 0x27B2CB4
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::RequestSubscriptionHandler(System.Int32 code, System.String message)
    void RequestSubscriptionHandler(int code, ::StringW message);
    // protected override System.Void RequestSubscriptionWithPlanIDHandler(System.Int32 code, System.String message)
    // Offset: 0x27B313C
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::RequestSubscriptionWithPlanIDHandler(System.Int32 code, System.String message)
    void RequestSubscriptionWithPlanIDHandler(int code, ::StringW message);
    // protected override System.Void SubscribeHandler(System.Int32 code, System.String message)
    // Offset: 0x27B35C4
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::SubscribeHandler(System.Int32 code, System.String message)
    void SubscribeHandler(int code, ::StringW message);
    // protected override System.Void QuerySubscriptionHandler(System.Int32 code, System.String message)
    // Offset: 0x27B3C00
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::QuerySubscriptionHandler(System.Int32 code, System.String message)
    void QuerySubscriptionHandler(int code, ::StringW message);
    // protected override System.Void QuerySubscriptionListHandler(System.Int32 code, System.String message)
    // Offset: 0x27B40AC
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::QuerySubscriptionListHandler(System.Int32 code, System.String message)
    void QuerySubscriptionListHandler(int code, ::StringW message);
    // protected override System.Void CancelSubscriptionHandler(System.Int32 code, System.String message)
    // Offset: 0x27B4558
    // Implemented from: Viveport.IAPurchase/BaseHandler
    // Base method: System.Void BaseHandler::CancelSubscriptionHandler(System.Int32 code, System.String message)
    void CancelSubscriptionHandler(int code, ::StringW message);
  }; // Viveport.IAPurchase/IAPHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getIsReadyHandler
// Il2CppName: getIsReadyHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getIsReadyHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getIsReadyHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getRequestHandler
// Il2CppName: getRequestHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getRequestHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getRequestHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getPurchaseHandler
// Il2CppName: getPurchaseHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getPurchaseHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getPurchaseHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getQueryHandler
// Il2CppName: getQueryHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getQueryHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getQueryHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getQueryListHandler
// Il2CppName: getQueryListHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getQueryListHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getQueryListHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getBalanceHandler
// Il2CppName: getBalanceHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getBalanceHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getBalanceHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getRequestSubscriptionHandler
// Il2CppName: getRequestSubscriptionHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getRequestSubscriptionHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getRequestSubscriptionHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getRequestSubscriptionWithPlanIDHandler
// Il2CppName: getRequestSubscriptionWithPlanIDHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getRequestSubscriptionWithPlanIDHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getRequestSubscriptionWithPlanIDHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getSubscribeHandler
// Il2CppName: getSubscribeHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getSubscribeHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getSubscribeHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getQuerySubscriptionHandler
// Il2CppName: getQuerySubscriptionHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getQuerySubscriptionHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getQuerySubscriptionHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getQuerySubscriptionListHandler
// Il2CppName: getQuerySubscriptionListHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getQuerySubscriptionListHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getQuerySubscriptionListHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::getCancelSubscriptionHandler
// Il2CppName: getCancelSubscriptionHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Viveport::Internal::IAPurchaseCallback* (Viveport::IAPurchase::IAPHandler::*)()>(&Viveport::IAPurchase::IAPHandler::getCancelSubscriptionHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "getCancelSubscriptionHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::IsReadyHandler
// Il2CppName: IsReadyHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::IsReadyHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "IsReadyHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::RequestHandler
// Il2CppName: RequestHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::RequestHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "RequestHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::PurchaseHandler
// Il2CppName: PurchaseHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::PurchaseHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "PurchaseHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::QueryHandler
// Il2CppName: QueryHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::QueryHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "QueryHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::QueryListHandler
// Il2CppName: QueryListHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::QueryListHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "QueryListHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::BalanceHandler
// Il2CppName: BalanceHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::BalanceHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "BalanceHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::RequestSubscriptionHandler
// Il2CppName: RequestSubscriptionHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::RequestSubscriptionHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "RequestSubscriptionHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::RequestSubscriptionWithPlanIDHandler
// Il2CppName: RequestSubscriptionWithPlanIDHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::RequestSubscriptionWithPlanIDHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "RequestSubscriptionWithPlanIDHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::SubscribeHandler
// Il2CppName: SubscribeHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::SubscribeHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "SubscribeHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::QuerySubscriptionHandler
// Il2CppName: QuerySubscriptionHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::QuerySubscriptionHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "QuerySubscriptionHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::QuerySubscriptionListHandler
// Il2CppName: QuerySubscriptionListHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::QuerySubscriptionListHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "QuerySubscriptionListHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::IAPHandler::CancelSubscriptionHandler
// Il2CppName: CancelSubscriptionHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::IAPHandler::*)(int, ::StringW)>(&Viveport::IAPurchase::IAPHandler::CancelSubscriptionHandler)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::IAPHandler*), "CancelSubscriptionHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, message});
  }
};
