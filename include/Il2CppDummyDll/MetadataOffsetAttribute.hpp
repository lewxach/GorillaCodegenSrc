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
// Type namespace: Il2CppDummyDll
namespace Il2CppDummyDll {
  // Forward declaring type: MetadataOffsetAttribute
  class MetadataOffsetAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Il2CppDummyDll::MetadataOffsetAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Il2CppDummyDll::MetadataOffsetAttribute*, "Il2CppDummyDll", "MetadataOffsetAttribute");
// Type namespace: Il2CppDummyDll
namespace Il2CppDummyDll {
  // WARNING Size may be invalid!
  // Autogenerated type: Il2CppDummyDll.MetadataOffsetAttribute
  class MetadataOffsetAttribute : public ::System::Attribute {
    public:
    public:
    // public System.String Offset
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::StringW Offset;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Offset;
    }
    // Get instance field reference: public System.String Offset
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Offset();
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetadataOffsetAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Il2CppDummyDll::MetadataOffsetAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetadataOffsetAttribute*, creationType>()));
    }
  }; // Il2CppDummyDll.MetadataOffsetAttribute
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Il2CppDummyDll::MetadataOffsetAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!