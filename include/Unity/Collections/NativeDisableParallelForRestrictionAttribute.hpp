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
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: NativeDisableParallelForRestrictionAttribute
  class NativeDisableParallelForRestrictionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Collections::NativeDisableParallelForRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeDisableParallelForRestrictionAttribute*, "Unity.Collections", "NativeDisableParallelForRestrictionAttribute");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.NativeDisableParallelForRestrictionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  class NativeDisableParallelForRestrictionAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x54794C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeDisableParallelForRestrictionAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeDisableParallelForRestrictionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeDisableParallelForRestrictionAttribute*, creationType>()));
    }
  }; // Unity.Collections.NativeDisableParallelForRestrictionAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::NativeDisableParallelForRestrictionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!