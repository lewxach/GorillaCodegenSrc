// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkPrefabLoadInfo
#include "Fusion/NetworkPrefabLoadInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkStaticPrefabLoadInfo
  class NetworkStaticPrefabLoadInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkStaticPrefabLoadInfo);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkStaticPrefabLoadInfo*, "Fusion", "NetworkStaticPrefabLoadInfo");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkStaticPrefabLoadInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  class NetworkStaticPrefabLoadInfo : public ::Fusion::NetworkPrefabLoadInfo {
    public:
    // public System.Void .ctor()
    // Offset: 0x2B504F4
    // Implemented from: Fusion.NetworkPrefabLoadInfo
    // Base method: System.Void NetworkPrefabLoadInfo::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkStaticPrefabLoadInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkStaticPrefabLoadInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkStaticPrefabLoadInfo*, creationType>()));
    }
  }; // Fusion.NetworkStaticPrefabLoadInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkStaticPrefabLoadInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!