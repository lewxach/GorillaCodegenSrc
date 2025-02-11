// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: UnityTooltipAttribute
  class UnityTooltipAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::UnityTooltipAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::UnityTooltipAttribute*, "Fusion", "UnityTooltipAttribute");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.UnityTooltipAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ConditionalAttribute] Offset: FFFFFFFF
  // [UnityPropertyAttributeProxyAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  // [ConditionalAttribute] Offset: FFFFFFFF
  // [ConditionalAttribute] Offset: FFFFFFFF
  class UnityTooltipAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Int32 <order>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return order;
    }
    // Get instance field reference: private System.Int32 <order>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$order$k__BackingField();
    // public System.Int32 get_order()
    // Offset: 0x2AFF604
    int get_order();
    // public System.Void set_order(System.Int32 value)
    // Offset: 0x2AFF60C
    void set_order(int value);
    // public System.Void .ctor(System.String tooltip)
    // Offset: 0x2AFF614
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTooltipAttribute* New_ctor(::StringW tooltip) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::UnityTooltipAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTooltipAttribute*, creationType>(tooltip)));
    }
  }; // Fusion.UnityTooltipAttribute
  #pragma pack(pop)
  static check_size<sizeof(UnityTooltipAttribute), 16 + sizeof(int)> __Fusion_UnityTooltipAttributeSizeCheck;
  static_assert(sizeof(UnityTooltipAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::UnityTooltipAttribute::get_order
// Il2CppName: get_order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::UnityTooltipAttribute::*)()>(&Fusion::UnityTooltipAttribute::get_order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::UnityTooltipAttribute*), "get_order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::UnityTooltipAttribute::set_order
// Il2CppName: set_order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::UnityTooltipAttribute::*)(int)>(&Fusion::UnityTooltipAttribute::set_order)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::UnityTooltipAttribute*), "set_order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::UnityTooltipAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
