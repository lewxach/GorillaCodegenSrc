// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.AssetObject
#include "Fusion/AssetObject.hpp"
// Including type: Fusion.NetworkObjectGuid
#include "Fusion/NetworkObjectGuid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkPrefabAsset
  class NetworkPrefabAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkPrefabAsset);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkPrefabAsset*, "Fusion", "NetworkPrefabAsset");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkPrefabAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkPrefabAsset : public ::Fusion::AssetObject {
    public:
    public:
    // public Fusion.NetworkObjectGuid AssetGuid
    // Size: 0x10
    // Offset: 0x18
    ::Fusion::NetworkObjectGuid AssetGuid;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkObjectGuid) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Fusion.NetworkObjectGuid AssetGuid
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObjectGuid& dyn_AssetGuid();
    // private System.Void Destroy()
    // Offset: 0x2B4F0EC
    void Destroy();
    // public System.Void .ctor()
    // Offset: 0x2B4F148
    // Implemented from: Fusion.AssetObject
    // Base method: System.Void AssetObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPrefabAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkPrefabAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPrefabAsset*, creationType>()));
    }
  }; // Fusion.NetworkPrefabAsset
  #pragma pack(pop)
  static check_size<sizeof(NetworkPrefabAsset), 24 + sizeof(::Fusion::NetworkObjectGuid)> __Fusion_NetworkPrefabAssetSizeCheck;
  static_assert(sizeof(NetworkPrefabAsset) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkPrefabAsset::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPrefabAsset::*)()>(&Fusion::NetworkPrefabAsset::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabAsset*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
