// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RangeAttribute
  class RangeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::RangeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RangeAttribute*, "UnityEngine", "RangeAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RangeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class RangeAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    public:
    // public readonly System.Single min
    // Size: 0x4
    // Offset: 0x14
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single max
    // Size: 0x4
    // Offset: 0x18
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: public readonly System.Single min
    [[deprecated("Use field access instead!")]] float& dyn_min();
    // Get instance field reference: public readonly System.Single max
    [[deprecated("Use field access instead!")]] float& dyn_max();
    // public System.Void .ctor(System.Single min, System.Single max)
    // Offset: 0x54BFF78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RangeAttribute* New_ctor(float min, float max) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::RangeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RangeAttribute*, creationType>(min, max)));
    }
  }; // UnityEngine.RangeAttribute
  #pragma pack(pop)
  static check_size<sizeof(RangeAttribute), 24 + sizeof(float)> __UnityEngine_RangeAttributeSizeCheck;
  static_assert(sizeof(RangeAttribute) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RangeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!