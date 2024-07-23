// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ManipulatableLever
#include "GlobalNamespace/ManipulatableLever.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ManipulatableLever::LeverNotch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ManipulatableLever::LeverNotch*, "", "ManipulatableLever/LeverNotch");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: ManipulatableLever/LeverNotch
  // [TokenAttribute] Offset: FFFFFFFF
  class ManipulatableLever::LeverNotch : public ::Il2CppObject {
    public:
    public:
    // public System.Single minAngleValue
    // Size: 0x4
    // Offset: 0x10
    float minAngleValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxAngleValue
    // Size: 0x4
    // Offset: 0x14
    float maxAngleValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 value
    // Size: 0x4
    // Offset: 0x18
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Single minAngleValue
    [[deprecated("Use field access instead!")]] float& dyn_minAngleValue();
    // Get instance field reference: public System.Single maxAngleValue
    [[deprecated("Use field access instead!")]] float& dyn_maxAngleValue();
    // Get instance field reference: public System.Int32 value
    [[deprecated("Use field access instead!")]] int& dyn_value();
    // public System.Void .ctor()
    // Offset: 0x26B6FB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManipulatableLever::LeverNotch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ManipulatableLever::LeverNotch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManipulatableLever::LeverNotch*, creationType>()));
    }
  }; // ManipulatableLever/LeverNotch
  #pragma pack(pop)
  static check_size<sizeof(ManipulatableLever::LeverNotch), 24 + sizeof(int)> __GlobalNamespace_ManipulatableLever_LeverNotchSizeCheck;
  static_assert(sizeof(ManipulatableLever::LeverNotch) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ManipulatableLever::LeverNotch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!