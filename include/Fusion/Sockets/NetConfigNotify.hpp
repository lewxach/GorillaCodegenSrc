// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetConfigNotify
  struct NetConfigNotify;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetConfigNotify, "Fusion.Sockets", "NetConfigNotify");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.Sockets.NetConfigNotify
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetConfigNotify/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 AckMaskBytes
    // Size: 0x4
    // Offset: 0x0
    int AckMaskBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 AckForceCount
    // Size: 0x4
    // Offset: 0x4
    int AckForceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Double AckForceTimeout
    // Size: 0x8
    // Offset: 0x8
    double AckForceTimeout;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Int32 WindowSize
    // Size: 0x4
    // Offset: 0x10
    int WindowSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 SequenceBytes
    // Size: 0x4
    // Offset: 0x14
    int SequenceBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetConfigNotify
    constexpr NetConfigNotify(int AckMaskBytes_ = {}, int AckForceCount_ = {}, double AckForceTimeout_ = {}, int WindowSize_ = {}, int SequenceBytes_ = {}) noexcept : AckMaskBytes{AckMaskBytes_}, AckForceCount{AckForceCount_}, AckForceTimeout{AckForceTimeout_}, WindowSize{WindowSize_}, SequenceBytes{SequenceBytes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 AckMaskBytes
    [[deprecated("Use field access instead!")]] int& dyn_AckMaskBytes();
    // Get instance field reference: public System.Int32 AckForceCount
    [[deprecated("Use field access instead!")]] int& dyn_AckForceCount();
    // Get instance field reference: public System.Double AckForceTimeout
    [[deprecated("Use field access instead!")]] double& dyn_AckForceTimeout();
    // Get instance field reference: public System.Int32 WindowSize
    [[deprecated("Use field access instead!")]] int& dyn_WindowSize();
    // Get instance field reference: public System.Int32 SequenceBytes
    [[deprecated("Use field access instead!")]] int& dyn_SequenceBytes();
    // public System.Int32 get_AckMaskBits()
    // Offset: 0x2B91264
    int get_AckMaskBits();
    // static public Fusion.Sockets.NetConfigNotify get_Defaults()
    // Offset: 0x2B911C0
    static ::Fusion::Sockets::NetConfigNotify get_Defaults();
  }; // Fusion.Sockets.NetConfigNotify
  #pragma pack(pop)
  static check_size<sizeof(NetConfigNotify), 20 + sizeof(int)> __Fusion_Sockets_NetConfigNotifySizeCheck;
  static_assert(sizeof(NetConfigNotify) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::NetConfigNotify::get_AckMaskBits
// Il2CppName: get_AckMaskBits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Sockets::NetConfigNotify::*)()>(&Fusion::Sockets::NetConfigNotify::get_AckMaskBits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConfigNotify), "get_AckMaskBits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetConfigNotify::get_Defaults
// Il2CppName: get_Defaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetConfigNotify (*)()>(&Fusion::Sockets::NetConfigNotify::get_Defaults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetConfigNotify), "get_Defaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};