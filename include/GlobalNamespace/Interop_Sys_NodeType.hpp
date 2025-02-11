// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Interop/Sys
#include "GlobalNamespace/Interop_Sys.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Interop::Sys::NodeType, "", "Interop/Sys/NodeType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Interop/Sys/NodeType
  // [TokenAttribute] Offset: FFFFFFFF
  struct Interop::Sys::NodeType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NodeType
    constexpr NodeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Interop/Sys/NodeType DT_UNKNOWN
    static constexpr const int DT_UNKNOWN = 0;
    // Get static field: static public Interop/Sys/NodeType DT_UNKNOWN
    static ::GlobalNamespace::Interop::Sys::NodeType _get_DT_UNKNOWN();
    // Set static field: static public Interop/Sys/NodeType DT_UNKNOWN
    static void _set_DT_UNKNOWN(::GlobalNamespace::Interop::Sys::NodeType value);
    // static field const value: static public Interop/Sys/NodeType DT_FIFO
    static constexpr const int DT_FIFO = 1;
    // Get static field: static public Interop/Sys/NodeType DT_FIFO
    static ::GlobalNamespace::Interop::Sys::NodeType _get_DT_FIFO();
    // Set static field: static public Interop/Sys/NodeType DT_FIFO
    static void _set_DT_FIFO(::GlobalNamespace::Interop::Sys::NodeType value);
    // static field const value: static public Interop/Sys/NodeType DT_CHR
    static constexpr const int DT_CHR = 2;
    // Get static field: static public Interop/Sys/NodeType DT_CHR
    static ::GlobalNamespace::Interop::Sys::NodeType _get_DT_CHR();
    // Set static field: static public Interop/Sys/NodeType DT_CHR
    static void _set_DT_CHR(::GlobalNamespace::Interop::Sys::NodeType value);
    // static field const value: static public Interop/Sys/NodeType DT_DIR
    static constexpr const int DT_DIR = 4;
    // Get static field: static public Interop/Sys/NodeType DT_DIR
    static ::GlobalNamespace::Interop::Sys::NodeType _get_DT_DIR();
    // Set static field: static public Interop/Sys/NodeType DT_DIR
    static void _set_DT_DIR(::GlobalNamespace::Interop::Sys::NodeType value);
    // static field const value: static public Interop/Sys/NodeType DT_BLK
    static constexpr const int DT_BLK = 6;
    // Get static field: static public Interop/Sys/NodeType DT_BLK
    static ::GlobalNamespace::Interop::Sys::NodeType _get_DT_BLK();
    // Set static field: static public Interop/Sys/NodeType DT_BLK
    static void _set_DT_BLK(::GlobalNamespace::Interop::Sys::NodeType value);
    // static field const value: static public Interop/Sys/NodeType DT_REG
    static constexpr const int DT_REG = 8;
    // Get static field: static public Interop/Sys/NodeType DT_REG
    static ::GlobalNamespace::Interop::Sys::NodeType _get_DT_REG();
    // Set static field: static public Interop/Sys/NodeType DT_REG
    static void _set_DT_REG(::GlobalNamespace::Interop::Sys::NodeType value);
    // static field const value: static public Interop/Sys/NodeType DT_LNK
    static constexpr const int DT_LNK = 10;
    // Get static field: static public Interop/Sys/NodeType DT_LNK
    static ::GlobalNamespace::Interop::Sys::NodeType _get_DT_LNK();
    // Set static field: static public Interop/Sys/NodeType DT_LNK
    static void _set_DT_LNK(::GlobalNamespace::Interop::Sys::NodeType value);
    // static field const value: static public Interop/Sys/NodeType DT_SOCK
    static constexpr const int DT_SOCK = 12;
    // Get static field: static public Interop/Sys/NodeType DT_SOCK
    static ::GlobalNamespace::Interop::Sys::NodeType _get_DT_SOCK();
    // Set static field: static public Interop/Sys/NodeType DT_SOCK
    static void _set_DT_SOCK(::GlobalNamespace::Interop::Sys::NodeType value);
    // static field const value: static public Interop/Sys/NodeType DT_WHT
    static constexpr const int DT_WHT = 14;
    // Get static field: static public Interop/Sys/NodeType DT_WHT
    static ::GlobalNamespace::Interop::Sys::NodeType _get_DT_WHT();
    // Set static field: static public Interop/Sys/NodeType DT_WHT
    static void _set_DT_WHT(::GlobalNamespace::Interop::Sys::NodeType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Interop/Sys/NodeType
  #pragma pack(pop)
  static check_size<sizeof(Interop::Sys::NodeType), 0 + sizeof(int)> __GlobalNamespace_Interop_Sys_NodeTypeSizeCheck;
  static_assert(sizeof(Interop::Sys::NodeType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
