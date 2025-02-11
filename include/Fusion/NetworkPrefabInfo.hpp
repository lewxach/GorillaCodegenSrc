// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.NetworkPrefabId
#include "Fusion/NetworkPrefabId.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObjectHeader
  struct NetworkObjectHeader;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkPrefabInfo
  struct NetworkPrefabInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkPrefabInfo, "Fusion", "NetworkPrefabInfo");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkPrefabInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkPrefabInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.NetworkPrefabId Prefab
    // Size: 0x4
    // Offset: 0x0
    ::Fusion::NetworkPrefabId Prefab;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkPrefabId) == 0x4);
    // Padding between fields: Prefab and: Header
    char __padding0[0x4] = {};
    // public Fusion.NetworkObjectHeader* Header
    // Size: 0x8
    // Offset: 0x8
    ::Fusion::NetworkObjectHeader* Header;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkObjectHeader*) == 0x8);
    public:
    // Creating value type constructor for type: NetworkPrefabInfo
    constexpr NetworkPrefabInfo(::Fusion::NetworkPrefabId Prefab_ = {}, ::Fusion::NetworkObjectHeader* Header_ = {}) noexcept : Prefab{Prefab_}, Header{Header_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Fusion.NetworkPrefabId Prefab
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkPrefabId& dyn_Prefab();
    // Get instance field reference: public Fusion.NetworkObjectHeader* Header
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObjectHeader*& dyn_Header();
    // public System.Boolean get_HasHeader()
    // Offset: 0x2B4F23C
    bool get_HasHeader();
    // public System.Int32* get_Data()
    // Offset: 0x2B4F24C
    int* get_Data();
  }; // Fusion.NetworkPrefabInfo
  #pragma pack(pop)
  static check_size<sizeof(NetworkPrefabInfo), 8 + sizeof(::Fusion::NetworkObjectHeader*)> __Fusion_NetworkPrefabInfoSizeCheck;
  static_assert(sizeof(NetworkPrefabInfo) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkPrefabInfo::get_HasHeader
// Il2CppName: get_HasHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkPrefabInfo::*)()>(&Fusion::NetworkPrefabInfo::get_HasHeader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabInfo), "get_HasHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabInfo::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int* (Fusion::NetworkPrefabInfo::*)()>(&Fusion::NetworkPrefabInfo::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabInfo), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
