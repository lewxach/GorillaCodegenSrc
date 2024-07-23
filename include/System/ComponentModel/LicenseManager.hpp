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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: LicenseContext
  class LicenseContext;
  // Forward declaring type: LicenseUsageMode
  struct LicenseUsageMode;
  // Forward declaring type: LicenseProvider
  class LicenseProvider;
  // Forward declaring type: License
  class License;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: LicenseManager
  class LicenseManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::LicenseManager);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::LicenseManager*, "System.ComponentModel", "LicenseManager");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.LicenseManager
  // [TokenAttribute] Offset: FFFFFFFF
  class LicenseManager : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Object s_selfLock
    static ::Il2CppObject* _get_s_selfLock();
    // Set static field: static private readonly System.Object s_selfLock
    static void _set_s_selfLock(::Il2CppObject* value);
    // Get static field: static private System.ComponentModel.LicenseContext s_context
    static ::System::ComponentModel::LicenseContext* _get_s_context();
    // Set static field: static private System.ComponentModel.LicenseContext s_context
    static void _set_s_context(::System::ComponentModel::LicenseContext* value);
    // Get static field: static private System.Object s_contextLockHolder
    static ::Il2CppObject* _get_s_contextLockHolder();
    // Set static field: static private System.Object s_contextLockHolder
    static void _set_s_contextLockHolder(::Il2CppObject* value);
    // Get static field: static private System.Collections.Hashtable s_providers
    static ::System::Collections::Hashtable* _get_s_providers();
    // Set static field: static private System.Collections.Hashtable s_providers
    static void _set_s_providers(::System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable s_providerInstances
    static ::System::Collections::Hashtable* _get_s_providerInstances();
    // Set static field: static private System.Collections.Hashtable s_providerInstances
    static void _set_s_providerInstances(::System::Collections::Hashtable* value);
    // Get static field: static private readonly System.Object s_internalSyncObject
    static ::Il2CppObject* _get_s_internalSyncObject();
    // Set static field: static private readonly System.Object s_internalSyncObject
    static void _set_s_internalSyncObject(::Il2CppObject* value);
    // private System.Void .ctor()
    // Offset: 0x4F057E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LicenseManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::LicenseManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LicenseManager*, creationType>()));
    }
    // static public System.ComponentModel.LicenseContext get_CurrentContext()
    // Offset: 0x4F057E8
    static ::System::ComponentModel::LicenseContext* get_CurrentContext();
    // static public System.Void set_CurrentContext(System.ComponentModel.LicenseContext value)
    // Offset: 0x4F059A0
    static void set_CurrentContext(::System::ComponentModel::LicenseContext* value);
    // static public System.ComponentModel.LicenseUsageMode get_UsageMode()
    // Offset: 0x4F05B30
    static ::System::ComponentModel::LicenseUsageMode get_UsageMode();
    // static private System.Void CacheProvider(System.Type type, System.ComponentModel.LicenseProvider provider)
    // Offset: 0x4F05BD4
    static void CacheProvider(::System::Type* type, ::System::ComponentModel::LicenseProvider* provider);
    // static public System.Object CreateWithContext(System.Type type, System.ComponentModel.LicenseContext creationContext)
    // Offset: 0x4F05D9C
    static ::Il2CppObject* CreateWithContext(::System::Type* type, ::System::ComponentModel::LicenseContext* creationContext);
    // static public System.Object CreateWithContext(System.Type type, System.ComponentModel.LicenseContext creationContext, System.Object[] args)
    // Offset: 0x4F05E6C
    static ::Il2CppObject* CreateWithContext(::System::Type* type, ::System::ComponentModel::LicenseContext* creationContext, ::ArrayW<::Il2CppObject*> args);
    // static private System.Boolean GetCachedNoLicenseProvider(System.Type type)
    // Offset: 0x4F062D8
    static bool GetCachedNoLicenseProvider(::System::Type* type);
    // static private System.ComponentModel.LicenseProvider GetCachedProvider(System.Type type)
    // Offset: 0x4F06388
    static ::System::ComponentModel::LicenseProvider* GetCachedProvider(::System::Type* type);
    // static private System.ComponentModel.LicenseProvider GetCachedProviderInstance(System.Type providerType)
    // Offset: 0x4F06450
    static ::System::ComponentModel::LicenseProvider* GetCachedProviderInstance(::System::Type* providerType);
    // static public System.Boolean IsLicensed(System.Type type)
    // Offset: 0x4F06518
    static bool IsLicensed(::System::Type* type);
    // static public System.Boolean IsValid(System.Type type)
    // Offset: 0x4F06638
    static bool IsValid(::System::Type* type);
    // static public System.Boolean IsValid(System.Type type, System.Object instance, out System.ComponentModel.License license)
    // Offset: 0x4F066C8
    static bool IsValid(::System::Type* type, ::Il2CppObject* instance, ByRef<::System::ComponentModel::License*> license);
    // static public System.Void LockContext(System.Object contextUser)
    // Offset: 0x4F0614C
    static void LockContext(::Il2CppObject* contextUser);
    // static public System.Void UnlockContext(System.Object contextUser)
    // Offset: 0x4F06738
    static void UnlockContext(::Il2CppObject* contextUser);
    // static private System.Boolean ValidateInternal(System.Type type, System.Object instance, System.Boolean allowExceptions, out System.ComponentModel.License license)
    // Offset: 0x4F065A8
    static bool ValidateInternal(::System::Type* type, ::Il2CppObject* instance, bool allowExceptions, ByRef<::System::ComponentModel::License*> license);
    // static private System.Boolean ValidateInternalRecursive(System.ComponentModel.LicenseContext context, System.Type type, System.Object instance, System.Boolean allowExceptions, out System.ComponentModel.License license, out System.String licenseKey)
    // Offset: 0x4F068C8
    static bool ValidateInternalRecursive(::System::ComponentModel::LicenseContext* context, ::System::Type* type, ::Il2CppObject* instance, bool allowExceptions, ByRef<::System::ComponentModel::License*> license, ByRef<::StringW> licenseKey);
    // static public System.Void Validate(System.Type type)
    // Offset: 0x4F06D30
    static void Validate(::System::Type* type);
    // static public System.ComponentModel.License Validate(System.Type type, System.Object instance)
    // Offset: 0x4F06DF0
    static ::System::ComponentModel::License* Validate(::System::Type* type, ::Il2CppObject* instance);
    // static private System.Void .cctor()
    // Offset: 0x4F06EA8
    static void _cctor();
  }; // System.ComponentModel.LicenseManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::get_CurrentContext
// Il2CppName: get_CurrentContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::LicenseContext* (*)()>(&System::ComponentModel::LicenseManager::get_CurrentContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "get_CurrentContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::set_CurrentContext
// Il2CppName: set_CurrentContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::LicenseContext*)>(&System::ComponentModel::LicenseManager::set_CurrentContext)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "LicenseContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "set_CurrentContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::get_UsageMode
// Il2CppName: get_UsageMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::LicenseUsageMode (*)()>(&System::ComponentModel::LicenseManager::get_UsageMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "get_UsageMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::CacheProvider
// Il2CppName: CacheProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::System::ComponentModel::LicenseProvider*)>(&System::ComponentModel::LicenseManager::CacheProvider)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "LicenseProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "CacheProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, provider});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::CreateWithContext
// Il2CppName: CreateWithContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*, ::System::ComponentModel::LicenseContext*)>(&System::ComponentModel::LicenseManager::CreateWithContext)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* creationContext = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "LicenseContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "CreateWithContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, creationContext});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::CreateWithContext
// Il2CppName: CreateWithContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*, ::System::ComponentModel::LicenseContext*, ::ArrayW<::Il2CppObject*>)>(&System::ComponentModel::LicenseManager::CreateWithContext)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* creationContext = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "LicenseContext")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "CreateWithContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, creationContext, args});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::GetCachedNoLicenseProvider
// Il2CppName: GetCachedNoLicenseProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&System::ComponentModel::LicenseManager::GetCachedNoLicenseProvider)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "GetCachedNoLicenseProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::GetCachedProvider
// Il2CppName: GetCachedProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::LicenseProvider* (*)(::System::Type*)>(&System::ComponentModel::LicenseManager::GetCachedProvider)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "GetCachedProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::GetCachedProviderInstance
// Il2CppName: GetCachedProviderInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::LicenseProvider* (*)(::System::Type*)>(&System::ComponentModel::LicenseManager::GetCachedProviderInstance)> {
  static const MethodInfo* get() {
    static auto* providerType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "GetCachedProviderInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::IsLicensed
// Il2CppName: IsLicensed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&System::ComponentModel::LicenseManager::IsLicensed)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "IsLicensed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&System::ComponentModel::LicenseManager::IsValid)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::Il2CppObject*, ByRef<::System::ComponentModel::License*>)>(&System::ComponentModel::LicenseManager::IsValid)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* license = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "License")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, instance, license});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::LockContext
// Il2CppName: LockContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::ComponentModel::LicenseManager::LockContext)> {
  static const MethodInfo* get() {
    static auto* contextUser = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "LockContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contextUser});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::UnlockContext
// Il2CppName: UnlockContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::ComponentModel::LicenseManager::UnlockContext)> {
  static const MethodInfo* get() {
    static auto* contextUser = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "UnlockContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contextUser});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::ValidateInternal
// Il2CppName: ValidateInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::Il2CppObject*, bool, ByRef<::System::ComponentModel::License*>)>(&System::ComponentModel::LicenseManager::ValidateInternal)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* allowExceptions = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* license = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "License")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "ValidateInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, instance, allowExceptions, license});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::ValidateInternalRecursive
// Il2CppName: ValidateInternalRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ComponentModel::LicenseContext*, ::System::Type*, ::Il2CppObject*, bool, ByRef<::System::ComponentModel::License*>, ByRef<::StringW>)>(&System::ComponentModel::LicenseManager::ValidateInternalRecursive)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "LicenseContext")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* allowExceptions = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* license = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "License")->this_arg;
    static auto* licenseKey = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "ValidateInternalRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, type, instance, allowExceptions, license, licenseKey});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&System::ComponentModel::LicenseManager::Validate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::License* (*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::LicenseManager::Validate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::LicenseManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};