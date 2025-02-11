// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.PropertyAttribute
#include "Fusion/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: FixedBufferPropertyAttribute
  class FixedBufferPropertyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::FixedBufferPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::FixedBufferPropertyAttribute*, "Fusion", "FixedBufferPropertyAttribute");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.FixedBufferPropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class FixedBufferPropertyAttribute : public ::Fusion::PropertyAttribute {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // private readonly System.Type <Type>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.Type <SurrogateType>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* SurrogateType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.Int32 <Capacity>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int Capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private readonly System.Type <Type>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$Type$k__BackingField();
    // Get instance field reference: private readonly System.Type <SurrogateType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$SurrogateType$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <Capacity>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Capacity$k__BackingField();
    // public System.Void .ctor(System.Type fieldType, System.Type surrogateType, System.Int32 capacity)
    // Offset: 0x2AFF058
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedBufferPropertyAttribute* New_ctor(::System::Type* fieldType, ::System::Type* surrogateType, int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::FixedBufferPropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedBufferPropertyAttribute*, creationType>(fieldType, surrogateType, capacity)));
    }
    // public System.Type get_Type()
    // Offset: 0x2AFF0B0
    ::System::Type* get_Type();
    // public System.Type get_SurrogateType()
    // Offset: 0x2AFF0B8
    ::System::Type* get_SurrogateType();
    // public System.Int32 get_Capacity()
    // Offset: 0x2AFF0C0
    int get_Capacity();
  }; // Fusion.FixedBufferPropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(FixedBufferPropertyAttribute), 40 + sizeof(int)> __Fusion_FixedBufferPropertyAttributeSizeCheck;
  static_assert(sizeof(FixedBufferPropertyAttribute) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::FixedBufferPropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::FixedBufferPropertyAttribute::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Fusion::FixedBufferPropertyAttribute::*)()>(&Fusion::FixedBufferPropertyAttribute::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::FixedBufferPropertyAttribute*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::FixedBufferPropertyAttribute::get_SurrogateType
// Il2CppName: get_SurrogateType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Fusion::FixedBufferPropertyAttribute::*)()>(&Fusion::FixedBufferPropertyAttribute::get_SurrogateType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::FixedBufferPropertyAttribute*), "get_SurrogateType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::FixedBufferPropertyAttribute::get_Capacity
// Il2CppName: get_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::FixedBufferPropertyAttribute::*)()>(&Fusion::FixedBufferPropertyAttribute::get_Capacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::FixedBufferPropertyAttribute*), "get_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
