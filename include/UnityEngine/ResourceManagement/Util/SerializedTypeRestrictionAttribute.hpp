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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: SerializedTypeRestrictionAttribute
  class SerializedTypeRestrictionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*, "UnityEngine.ResourceManagement.Util", "SerializedTypeRestrictionAttribute");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.SerializedTypeRestrictionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializedTypeRestrictionAttribute : public ::System::Attribute {
    public:
    public:
    // public System.Type type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return type;
    }
    // Get instance field reference: public System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // public System.Void .ctor()
    // Offset: 0x5330BD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializedTypeRestrictionAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializedTypeRestrictionAttribute*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.Util.SerializedTypeRestrictionAttribute
  #pragma pack(pop)
  static check_size<sizeof(SerializedTypeRestrictionAttribute), 16 + sizeof(::System::Type*)> __UnityEngine_ResourceManagement_Util_SerializedTypeRestrictionAttributeSizeCheck;
  static_assert(sizeof(SerializedTypeRestrictionAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!