// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObjectFlags
  struct NetworkObjectFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkObjectFlags, "Fusion", "NetworkObjectFlags");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkObjectFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct NetworkObjectFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetworkObjectFlags
    constexpr NetworkObjectFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.NetworkObjectFlags None
    static constexpr const int None = 0;
    // Get static field: static public Fusion.NetworkObjectFlags None
    static ::Fusion::NetworkObjectFlags _get_None();
    // Set static field: static public Fusion.NetworkObjectFlags None
    static void _set_None(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags MaskVersion
    static constexpr const int MaskVersion = 255;
    // Get static field: static public Fusion.NetworkObjectFlags MaskVersion
    static ::Fusion::NetworkObjectFlags _get_MaskVersion();
    // Set static field: static public Fusion.NetworkObjectFlags MaskVersion
    static void _set_MaskVersion(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags V1
    static constexpr const int V1 = 1;
    // Get static field: static public Fusion.NetworkObjectFlags V1
    static ::Fusion::NetworkObjectFlags _get_V1();
    // Set static field: static public Fusion.NetworkObjectFlags V1
    static void _set_V1(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags MaskType
    static constexpr const int MaskType = 3840;
    // Get static field: static public Fusion.NetworkObjectFlags MaskType
    static ::Fusion::NetworkObjectFlags _get_MaskType();
    // Set static field: static public Fusion.NetworkObjectFlags MaskType
    static void _set_MaskType(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags TypePrefab
    static constexpr const int TypePrefab = 2304;
    // Get static field: static public Fusion.NetworkObjectFlags TypePrefab
    static ::Fusion::NetworkObjectFlags _get_TypePrefab();
    // Set static field: static public Fusion.NetworkObjectFlags TypePrefab
    static void _set_TypePrefab(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags TypeSceneObject
    static constexpr const int TypeSceneObject = 2560;
    // Get static field: static public Fusion.NetworkObjectFlags TypeSceneObject
    static ::Fusion::NetworkObjectFlags _get_TypeSceneObject();
    // Set static field: static public Fusion.NetworkObjectFlags TypeSceneObject
    static void _set_TypeSceneObject(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags TypeSpawnedPrefab
    static constexpr const int TypeSpawnedPrefab = 2816;
    // Get static field: static public Fusion.NetworkObjectFlags TypeSpawnedPrefab
    static ::Fusion::NetworkObjectFlags _get_TypeSpawnedPrefab();
    // Set static field: static public Fusion.NetworkObjectFlags TypeSpawnedPrefab
    static void _set_TypeSpawnedPrefab(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags TypePrefabChild
    static constexpr const int TypePrefabChild = 3072;
    // Get static field: static public Fusion.NetworkObjectFlags TypePrefabChild
    static ::Fusion::NetworkObjectFlags _get_TypePrefabChild();
    // Set static field: static public Fusion.NetworkObjectFlags TypePrefabChild
    static void _set_TypePrefabChild(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags TypeSpawnedPrefabChild
    static constexpr const int TypeSpawnedPrefabChild = 3328;
    // Get static field: static public Fusion.NetworkObjectFlags TypeSpawnedPrefabChild
    static ::Fusion::NetworkObjectFlags _get_TypeSpawnedPrefabChild();
    // Set static field: static public Fusion.NetworkObjectFlags TypeSpawnedPrefabChild
    static void _set_TypeSpawnedPrefabChild(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags Ignore
    static constexpr const int Ignore = 65536;
    // Get static field: static public Fusion.NetworkObjectFlags Ignore
    static ::Fusion::NetworkObjectFlags _get_Ignore();
    // Set static field: static public Fusion.NetworkObjectFlags Ignore
    static void _set_Ignore(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags ActivatedByUser
    static constexpr const int ActivatedByUser = 131072;
    // Get static field: static public Fusion.NetworkObjectFlags ActivatedByUser
    static ::Fusion::NetworkObjectFlags _get_ActivatedByUser();
    // Set static field: static public Fusion.NetworkObjectFlags ActivatedByUser
    static void _set_ActivatedByUser(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags AttachOptionLocalSpawn
    static constexpr const int AttachOptionLocalSpawn = 1048576;
    // Get static field: static public Fusion.NetworkObjectFlags AttachOptionLocalSpawn
    static ::Fusion::NetworkObjectFlags _get_AttachOptionLocalSpawn();
    // Set static field: static public Fusion.NetworkObjectFlags AttachOptionLocalSpawn
    static void _set_AttachOptionLocalSpawn(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags PredictedSpawn
    static constexpr const int PredictedSpawn = 4194304;
    // Get static field: static public Fusion.NetworkObjectFlags PredictedSpawn
    static ::Fusion::NetworkObjectFlags _get_PredictedSpawn();
    // Set static field: static public Fusion.NetworkObjectFlags PredictedSpawn
    static void _set_PredictedSpawn(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags Spawned
    static constexpr const int Spawned = 8388608;
    // Get static field: static public Fusion.NetworkObjectFlags Spawned
    static ::Fusion::NetworkObjectFlags _get_Spawned();
    // Set static field: static public Fusion.NetworkObjectFlags Spawned
    static void _set_Spawned(::Fusion::NetworkObjectFlags value);
    // static field const value: static public Fusion.NetworkObjectFlags RuntimeFlagsMask
    static constexpr const int RuntimeFlagsMask = 267386880;
    // Get static field: static public Fusion.NetworkObjectFlags RuntimeFlagsMask
    static ::Fusion::NetworkObjectFlags _get_RuntimeFlagsMask();
    // Set static field: static public Fusion.NetworkObjectFlags RuntimeFlagsMask
    static void _set_RuntimeFlagsMask(::Fusion::NetworkObjectFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Fusion.NetworkObjectFlags
  #pragma pack(pop)
  static check_size<sizeof(NetworkObjectFlags), 0 + sizeof(int)> __Fusion_NetworkObjectFlagsSizeCheck;
  static_assert(sizeof(NetworkObjectFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"