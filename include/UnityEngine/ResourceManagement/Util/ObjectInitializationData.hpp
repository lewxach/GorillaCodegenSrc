// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ResourceManagement.Util.SerializedType
#include "UnityEngine/ResourceManagement/Util/SerializedType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle
  struct AsyncOperationHandle;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: ObjectInitializationData
  struct ObjectInitializationData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::ObjectInitializationData, "UnityEngine.ResourceManagement.Util", "ObjectInitializationData");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.Util.ObjectInitializationData
  // [TokenAttribute] Offset: FFFFFFFF
  struct ObjectInitializationData/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.String m_Id
    // Size: 0x8
    // Offset: 0x0
    ::StringW m_Id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.ResourceManagement.Util.SerializedType m_ObjectType
    // Size: 0x19
    // Offset: 0x8
    ::UnityEngine::ResourceManagement::Util::SerializedType m_ObjectType;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::Util::SerializedType) == 0x19);
    // Padding between fields: m_ObjectType and: m_Data
    char __padding1[0x7] = {};
    // private System.String m_Data
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_Data;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: ObjectInitializationData
    constexpr ObjectInitializationData(::StringW m_Id_ = {}, ::UnityEngine::ResourceManagement::Util::SerializedType m_ObjectType_ = {}, ::StringW m_Data_ = {}) noexcept : m_Id{m_Id_}, m_ObjectType{m_ObjectType_}, m_Data{m_Data_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.String m_Id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Id();
    // Get instance field reference: private UnityEngine.ResourceManagement.Util.SerializedType m_ObjectType
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::Util::SerializedType& dyn_m_ObjectType();
    // Get instance field reference: private System.String m_Data
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Data();
    // public System.String get_Id()
    // Offset: 0x5330FA0
    ::StringW get_Id();
    // public UnityEngine.ResourceManagement.Util.SerializedType get_ObjectType()
    // Offset: 0x5330FA8
    ::UnityEngine::ResourceManagement::Util::SerializedType get_ObjectType();
    // public System.String get_Data()
    // Offset: 0x5330FB8
    ::StringW get_Data();
    // public TObject CreateInstance(System.String idOverride)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TObject>
    TObject CreateInstance(::StringW idOverride) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ObjectInitializationData::CreateInstance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "CreateInstance", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(idOverride)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TObject, false>(this, ___generic__method, idOverride);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle GetAsyncInitHandle(UnityEngine.ResourceManagement.ResourceManager rm, System.String idOverride)
    // Offset: 0x5331058
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle GetAsyncInitHandle(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW idOverride);
    // public override System.String ToString()
    // Offset: 0x5330FC0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.ResourceManagement.Util.ObjectInitializationData
  #pragma pack(pop)
  static check_size<sizeof(ObjectInitializationData), 40 + sizeof(::StringW)> __UnityEngine_ResourceManagement_Util_ObjectInitializationDataSizeCheck;
  static_assert(sizeof(ObjectInitializationData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::ObjectInitializationData), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_ObjectType
// Il2CppName: get_ObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::SerializedType (UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_ObjectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::ObjectInitializationData), "get_ObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&UnityEngine::ResourceManagement::Util::ObjectInitializationData::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::ObjectInitializationData), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ObjectInitializationData::CreateInstance
// Il2CppName: CreateInstance
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ObjectInitializationData::GetAsyncInitHandle
// Il2CppName: GetAsyncInitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::StringW)>(&UnityEngine::ResourceManagement::Util::ObjectInitializationData::GetAsyncInitHandle)> {
  static const MethodInfo* get() {
    static auto* rm = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* idOverride = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::ObjectInitializationData), "GetAsyncInitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rm, idOverride});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ObjectInitializationData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::ObjectInitializationData::*)()>(&UnityEngine::ResourceManagement::Util::ObjectInitializationData::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::ObjectInitializationData), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};