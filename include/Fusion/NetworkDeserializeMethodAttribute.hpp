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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkDeserializeMethodAttribute
  class NetworkDeserializeMethodAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkDeserializeMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkDeserializeMethodAttribute*, "Fusion", "NetworkDeserializeMethodAttribute");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkDeserializeMethodAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class NetworkDeserializeMethodAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x2AFF160
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkDeserializeMethodAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkDeserializeMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkDeserializeMethodAttribute*, creationType>()));
    }
  }; // Fusion.NetworkDeserializeMethodAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkDeserializeMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!