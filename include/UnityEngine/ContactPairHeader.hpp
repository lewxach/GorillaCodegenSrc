// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.CollisionPairHeaderFlags
#include "UnityEngine/CollisionPairHeaderFlags.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: ContactPair
  struct ContactPair;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ContactPairHeader
  struct ContactPairHeader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactPairHeader, "UnityEngine", "ContactPairHeader");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ContactPairHeader
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct ContactPairHeader/*, public ::System::ValueType*/ {
    public:
    public:
    // readonly System.Int32 m_BodyID
    // Size: 0x4
    // Offset: 0x0
    int m_BodyID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Int32 m_OtherBodyID
    // Size: 0x4
    // Offset: 0x4
    int m_OtherBodyID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.IntPtr m_StartPtr
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr m_StartPtr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // readonly System.UInt32 m_NbPairs
    // Size: 0x4
    // Offset: 0x10
    uint m_NbPairs;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // readonly UnityEngine.CollisionPairHeaderFlags m_Flags
    // Size: 0x2
    // Offset: 0x14
    ::UnityEngine::CollisionPairHeaderFlags m_Flags;
    // Field size check
    static_assert(sizeof(::UnityEngine::CollisionPairHeaderFlags) == 0x2);
    // Padding between fields: m_Flags and: m_RelativeVelocity
    char __padding4[0x2] = {};
    // readonly UnityEngine.Vector3 m_RelativeVelocity
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 m_RelativeVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: ContactPairHeader
    constexpr ContactPairHeader(int m_BodyID_ = {}, int m_OtherBodyID_ = {}, ::System::IntPtr m_StartPtr_ = {}, uint m_NbPairs_ = {}, ::UnityEngine::CollisionPairHeaderFlags m_Flags_ = {}, ::UnityEngine::Vector3 m_RelativeVelocity_ = {}) noexcept : m_BodyID{m_BodyID_}, m_OtherBodyID{m_OtherBodyID_}, m_StartPtr{m_StartPtr_}, m_NbPairs{m_NbPairs_}, m_Flags{m_Flags_}, m_RelativeVelocity{m_RelativeVelocity_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: readonly System.Int32 m_BodyID
    [[deprecated("Use field access instead!")]] int& dyn_m_BodyID();
    // Get instance field reference: readonly System.Int32 m_OtherBodyID
    [[deprecated("Use field access instead!")]] int& dyn_m_OtherBodyID();
    // Get instance field reference: readonly System.IntPtr m_StartPtr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_StartPtr();
    // Get instance field reference: readonly System.UInt32 m_NbPairs
    [[deprecated("Use field access instead!")]] uint& dyn_m_NbPairs();
    // Get instance field reference: readonly UnityEngine.CollisionPairHeaderFlags m_Flags
    [[deprecated("Use field access instead!")]] ::UnityEngine::CollisionPairHeaderFlags& dyn_m_Flags();
    // Get instance field reference: readonly UnityEngine.Vector3 m_RelativeVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_RelativeVelocity();
    // public UnityEngine.Component get_Body()
    // Offset: 0x5527BB8
    ::UnityEngine::Component* get_Body();
    // public UnityEngine.Component get_OtherBody()
    // Offset: 0x5527B40
    ::UnityEngine::Component* get_OtherBody();
    // System.Boolean get_HasRemovedBody()
    // Offset: 0x552D440
    bool get_HasRemovedBody();
    // public UnityEngine.ContactPair GetContactPair(System.Int32 index)
    // Offset: 0x552D450
    ::UnityEngine::ContactPair GetContactPair(int index);
    // UnityEngine.ContactPair* GetContactPair_Internal(System.Int32 index)
    // Offset: 0x5535D98
    ::UnityEngine::ContactPair* GetContactPair_Internal(int index);
  }; // UnityEngine.ContactPairHeader
  #pragma pack(pop)
  static check_size<sizeof(ContactPairHeader), 24 + sizeof(::UnityEngine::Vector3)> __UnityEngine_ContactPairHeaderSizeCheck;
  static_assert(sizeof(ContactPairHeader) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ContactPairHeader::get_Body
// Il2CppName: get_Body
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Component* (UnityEngine::ContactPairHeader::*)()>(&UnityEngine::ContactPairHeader::get_Body)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactPairHeader), "get_Body", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactPairHeader::get_OtherBody
// Il2CppName: get_OtherBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Component* (UnityEngine::ContactPairHeader::*)()>(&UnityEngine::ContactPairHeader::get_OtherBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactPairHeader), "get_OtherBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactPairHeader::get_HasRemovedBody
// Il2CppName: get_HasRemovedBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ContactPairHeader::*)()>(&UnityEngine::ContactPairHeader::get_HasRemovedBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactPairHeader), "get_HasRemovedBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactPairHeader::GetContactPair
// Il2CppName: GetContactPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ContactPair (UnityEngine::ContactPairHeader::*)(int)>(&UnityEngine::ContactPairHeader::GetContactPair)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactPairHeader), "GetContactPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::ContactPairHeader::GetContactPair_Internal
// Il2CppName: GetContactPair_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ContactPair* (UnityEngine::ContactPairHeader::*)(int)>(&UnityEngine::ContactPairHeader::GetContactPair_Internal)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ContactPairHeader), "GetContactPair_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
