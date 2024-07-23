// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.ProxyChain
#include "System/Net/ProxyChain.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebProxy
  class WebProxy;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ProxyScriptChain
  class ProxyScriptChain;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ProxyScriptChain);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ProxyScriptChain*, "System.Net", "ProxyScriptChain");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ProxyScriptChain
  // [TokenAttribute] Offset: FFFFFFFF
  class ProxyScriptChain : public ::System::Net::ProxyChain {
    public:
    public:
    // private System.Net.WebProxy m_Proxy
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::WebProxy* m_Proxy;
    // Field size check
    static_assert(sizeof(::System::Net::WebProxy*) == 0x8);
    // private System.Uri[] m_ScriptProxies
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::System::Uri*> m_ScriptProxies;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Uri*>) == 0x8);
    // private System.Int32 m_CurrentIndex
    // Size: 0x4
    // Offset: 0x48
    int m_CurrentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_SyncStatus
    // Size: 0x4
    // Offset: 0x4C
    int m_SyncStatus;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Net.WebProxy m_Proxy
    [[deprecated("Use field access instead!")]] ::System::Net::WebProxy*& dyn_m_Proxy();
    // Get instance field reference: private System.Uri[] m_ScriptProxies
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Uri*>& dyn_m_ScriptProxies();
    // Get instance field reference: private System.Int32 m_CurrentIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_CurrentIndex();
    // Get instance field reference: private System.Int32 m_SyncStatus
    [[deprecated("Use field access instead!")]] int& dyn_m_SyncStatus();
    // System.Void .ctor(System.Net.WebProxy proxy, System.Uri destination)
    // Offset: 0x4FEF538
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProxyScriptChain* New_ctor(::System::Net::WebProxy* proxy, ::System::Uri* destination) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ProxyScriptChain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProxyScriptChain*, creationType>(proxy, destination)));
    }
    // protected override System.Boolean GetNextProxy(out System.Uri proxy)
    // Offset: 0x4FEF568
    // Implemented from: System.Net.ProxyChain
    // Base method: System.Boolean ProxyChain::GetNextProxy(out System.Uri proxy)
    bool GetNextProxy(ByRef<::System::Uri*> proxy);
    // override System.Void Abort()
    // Offset: 0x4FEF9FC
    // Implemented from: System.Net.ProxyChain
    // Base method: System.Void ProxyChain::Abort()
    void Abort();
  }; // System.Net.ProxyScriptChain
  #pragma pack(pop)
  static check_size<sizeof(ProxyScriptChain), 76 + sizeof(int)> __System_Net_ProxyScriptChainSizeCheck;
  static_assert(sizeof(ProxyScriptChain) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ProxyScriptChain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ProxyScriptChain::GetNextProxy
// Il2CppName: GetNextProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ProxyScriptChain::*)(ByRef<::System::Uri*>)>(&System::Net::ProxyScriptChain::GetNextProxy)> {
  static const MethodInfo* get() {
    static auto* proxy = &::il2cpp_utils::GetClassFromName("System", "Uri")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProxyScriptChain*), "GetNextProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxy});
  }
};
// Writing MetadataGetter for method: System::Net::ProxyScriptChain::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ProxyScriptChain::*)()>(&System::Net::ProxyScriptChain::Abort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProxyScriptChain*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};