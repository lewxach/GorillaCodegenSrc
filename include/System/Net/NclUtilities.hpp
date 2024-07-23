// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ContextCallback
  class ContextCallback;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: SecurityStatus
  struct SecurityStatus;
  // Forward declaring type: IPHostEntry
  class IPHostEntry;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: NclUtilities
  class NclUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NclUtilities);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NclUtilities*, "System.Net", "NclUtilities");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NclUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class NclUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private System.Threading.ContextCallback s_ContextRelativeDemandCallback
    static ::System::Threading::ContextCallback* _get_s_ContextRelativeDemandCallback();
    // Set static field: static private System.Threading.ContextCallback s_ContextRelativeDemandCallback
    static void _set_s_ContextRelativeDemandCallback(::System::Threading::ContextCallback* value);
    // Get static field: static private System.Net.IPAddress[] _LocalAddresses
    static ::ArrayW<::System::Net::IPAddress*> _get__LocalAddresses();
    // Set static field: static private System.Net.IPAddress[] _LocalAddresses
    static void _set__LocalAddresses(::ArrayW<::System::Net::IPAddress*> value);
    // Get static field: static private System.Object _LocalAddressesLock
    static ::Il2CppObject* _get__LocalAddressesLock();
    // Set static field: static private System.Object _LocalAddressesLock
    static void _set__LocalAddressesLock(::Il2CppObject* value);
    // static field const value: static private System.Int32 HostNameBufferLength
    static constexpr const int HostNameBufferLength = 256;
    // Get static field: static private System.Int32 HostNameBufferLength
    static int _get_HostNameBufferLength();
    // Set static field: static private System.Int32 HostNameBufferLength
    static void _set_HostNameBufferLength(int value);
    // Get static field: static System.String _LocalDomainName
    static ::StringW _get__LocalDomainName();
    // Set static field: static System.String _LocalDomainName
    static void _set__LocalDomainName(::StringW value);
    // static System.Boolean IsThreadPoolLow()
    // Offset: 0x4FD4B60
    static bool IsThreadPoolLow();
    // static System.Boolean get_HasShutdownStarted()
    // Offset: 0x4FD4B8C
    static bool get_HasShutdownStarted();
    // static System.Boolean IsCredentialFailure(System.Net.SecurityStatus error)
    // Offset: 0x4FD4BC4
    static bool IsCredentialFailure(::System::Net::SecurityStatus error);
    // static System.Boolean IsClientFault(System.Net.SecurityStatus error)
    // Offset: 0x4FD4BF8
    static bool IsClientFault(::System::Net::SecurityStatus error);
    // static System.Threading.ContextCallback get_ContextRelativeDemandCallback()
    // Offset: 0x4FD4C30
    static ::System::Threading::ContextCallback* get_ContextRelativeDemandCallback();
    // static private System.Void DemandCallback(System.Object state)
    // Offset: 0x4FD4CF8
    static void DemandCallback(::Il2CppObject* state);
    // static System.Boolean GuessWhetherHostIsLoopback(System.String host)
    // Offset: 0x4FD4CFC
    static bool GuessWhetherHostIsLoopback(::StringW host);
    // static System.Boolean IsFatal(System.Exception exception)
    // Offset: 0x4FD4D94
    static bool IsFatal(::System::Exception* exception);
    // static System.Boolean IsAddressLocal(System.Net.IPAddress ipAddress)
    // Offset: 0x4FD4E54
    static bool IsAddressLocal(::System::Net::IPAddress* ipAddress);
    // static private System.Net.IPHostEntry GetLocalHost()
    // Offset: 0x4FD53B0
    static ::System::Net::IPHostEntry* GetLocalHost();
    // static System.Net.IPAddress[] get_LocalAddresses()
    // Offset: 0x4FD4EE4
    static ::ArrayW<::System::Net::IPAddress*> get_LocalAddresses();
    // static private System.Object get_LocalAddressesLock()
    // Offset: 0x4FD5408
    static ::Il2CppObject* get_LocalAddressesLock();
  }; // System.Net.NclUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NclUtilities::IsThreadPoolLow
// Il2CppName: IsThreadPoolLow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Net::NclUtilities::IsThreadPoolLow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "IsThreadPoolLow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::get_HasShutdownStarted
// Il2CppName: get_HasShutdownStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Net::NclUtilities::get_HasShutdownStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "get_HasShutdownStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::IsCredentialFailure
// Il2CppName: IsCredentialFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::SecurityStatus)>(&System::Net::NclUtilities::IsCredentialFailure)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System.Net", "SecurityStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "IsCredentialFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::IsClientFault
// Il2CppName: IsClientFault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::SecurityStatus)>(&System::Net::NclUtilities::IsClientFault)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System.Net", "SecurityStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "IsClientFault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::get_ContextRelativeDemandCallback
// Il2CppName: get_ContextRelativeDemandCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ContextCallback* (*)()>(&System::Net::NclUtilities::get_ContextRelativeDemandCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "get_ContextRelativeDemandCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::DemandCallback
// Il2CppName: DemandCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Net::NclUtilities::DemandCallback)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "DemandCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::GuessWhetherHostIsLoopback
// Il2CppName: GuessWhetherHostIsLoopback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Net::NclUtilities::GuessWhetherHostIsLoopback)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "GuessWhetherHostIsLoopback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::IsFatal
// Il2CppName: IsFatal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception*)>(&System::Net::NclUtilities::IsFatal)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "IsFatal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::IsAddressLocal
// Il2CppName: IsAddressLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::IPAddress*)>(&System::Net::NclUtilities::IsAddressLocal)> {
  static const MethodInfo* get() {
    static auto* ipAddress = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "IsAddressLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ipAddress});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::GetLocalHost
// Il2CppName: GetLocalHost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry* (*)()>(&System::Net::NclUtilities::GetLocalHost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "GetLocalHost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::get_LocalAddresses
// Il2CppName: get_LocalAddresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*> (*)()>(&System::Net::NclUtilities::get_LocalAddresses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "get_LocalAddresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::NclUtilities::get_LocalAddressesLock
// Il2CppName: get_LocalAddressesLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&System::Net::NclUtilities::get_LocalAddressesLock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::NclUtilities*), "get_LocalAddressesLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};