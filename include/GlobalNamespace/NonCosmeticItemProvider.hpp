// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: GTZone
#include "GlobalNamespace/GTZone.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NonCosmeticItemProvider
  class NonCosmeticItemProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NonCosmeticItemProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NonCosmeticItemProvider*, "", "NonCosmeticItemProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NonCosmeticItemProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class NonCosmeticItemProvider : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::NonCosmeticItemProvider::ItemType
    struct ItemType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: NonCosmeticItemProvider/ItemType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ItemType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ItemType
      constexpr ItemType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public NonCosmeticItemProvider/ItemType honeycomb
      static constexpr const int honeycomb = 0;
      // Get static field: static public NonCosmeticItemProvider/ItemType honeycomb
      static ::GlobalNamespace::NonCosmeticItemProvider::ItemType _get_honeycomb();
      // Set static field: static public NonCosmeticItemProvider/ItemType honeycomb
      static void _set_honeycomb(::GlobalNamespace::NonCosmeticItemProvider::ItemType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // NonCosmeticItemProvider/ItemType
    #pragma pack(pop)
    static check_size<sizeof(NonCosmeticItemProvider::ItemType), 0 + sizeof(int)> __GlobalNamespace_NonCosmeticItemProvider_ItemTypeSizeCheck;
    static_assert(sizeof(NonCosmeticItemProvider::ItemType) == 0x4);
    public:
    // public GTZone zone
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::GTZone zone;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GTZone) == 0x4);
    // public System.Boolean useCondition
    // Size: 0x1
    // Offset: 0x24
    bool useCondition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useCondition and: conditionThreshold
    char __padding1[0x3] = {};
    // public System.Int32 conditionThreshold
    // Size: 0x4
    // Offset: 0x28
    int conditionThreshold;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public NonCosmeticItemProvider/ItemType itemType
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::NonCosmeticItemProvider::ItemType itemType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NonCosmeticItemProvider::ItemType) == 0x4);
    public:
    // Get instance field reference: public GTZone zone
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GTZone& dyn_zone();
    // Get instance field reference: public System.Boolean useCondition
    [[deprecated("Use field access instead!")]] bool& dyn_useCondition();
    // Get instance field reference: public System.Int32 conditionThreshold
    [[deprecated("Use field access instead!")]] int& dyn_conditionThreshold();
    // Get instance field reference: public NonCosmeticItemProvider/ItemType itemType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NonCosmeticItemProvider::ItemType& dyn_itemType();
    // private System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x291BC74
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // public System.Void .ctor()
    // Offset: 0x291BEF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NonCosmeticItemProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NonCosmeticItemProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NonCosmeticItemProvider*, creationType>()));
    }
  }; // NonCosmeticItemProvider
  #pragma pack(pop)
  static check_size<sizeof(NonCosmeticItemProvider), 44 + sizeof(::GlobalNamespace::NonCosmeticItemProvider::ItemType)> __GlobalNamespace_NonCosmeticItemProviderSizeCheck;
  static_assert(sizeof(NonCosmeticItemProvider) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NonCosmeticItemProvider::ItemType, "", "NonCosmeticItemProvider/ItemType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NonCosmeticItemProvider::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NonCosmeticItemProvider::*)(::UnityEngine::Collider*)>(&GlobalNamespace::NonCosmeticItemProvider::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NonCosmeticItemProvider*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NonCosmeticItemProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!