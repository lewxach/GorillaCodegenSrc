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
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BeforeRenderOrderAttribute
  class BeforeRenderOrderAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::BeforeRenderOrderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BeforeRenderOrderAttribute*, "UnityEngine", "BeforeRenderOrderAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.BeforeRenderOrderAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class BeforeRenderOrderAttribute : public ::System::Attribute {
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
    // Offset: 0x5488BEC
    int get_order();
    // private System.Void set_order(System.Int32 value)
    // Offset: 0x5488BF4
    void set_order(int value);
    // public System.Void .ctor(System.Int32 order)
    // Offset: 0x5488BFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeforeRenderOrderAttribute* New_ctor(int order) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::BeforeRenderOrderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeforeRenderOrderAttribute*, creationType>(order)));
    }
  }; // UnityEngine.BeforeRenderOrderAttribute
  #pragma pack(pop)
  static check_size<sizeof(BeforeRenderOrderAttribute), 16 + sizeof(int)> __UnityEngine_BeforeRenderOrderAttributeSizeCheck;
  static_assert(sizeof(BeforeRenderOrderAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BeforeRenderOrderAttribute::get_order
// Il2CppName: get_order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BeforeRenderOrderAttribute::*)()>(&UnityEngine::BeforeRenderOrderAttribute::get_order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BeforeRenderOrderAttribute*), "get_order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BeforeRenderOrderAttribute::set_order
// Il2CppName: set_order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BeforeRenderOrderAttribute::*)(int)>(&UnityEngine::BeforeRenderOrderAttribute::set_order)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BeforeRenderOrderAttribute*), "set_order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BeforeRenderOrderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
