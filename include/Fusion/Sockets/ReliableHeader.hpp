// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Forward declaring type: ReliableHeader
  struct ReliableHeader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::ReliableHeader, "Fusion.Sockets", "ReliableHeader");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.Sockets.ReliableHeader
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReliableHeader/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.Sockets.ReliableHeader* Next
    // Size: 0x8
    // Offset: 0x0
    ::Fusion::Sockets::ReliableHeader* Next;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::ReliableHeader*) == 0x8);
    // public Fusion.Sockets.ReliableHeader* Prev
    // Size: 0x8
    // Offset: 0x8
    ::Fusion::Sockets::ReliableHeader* Prev;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::ReliableHeader*) == 0x8);
    // public System.UInt64 Sequence
    // Size: 0x8
    // Offset: 0x10
    uint64_t Sequence;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Int32 Length
    // Size: 0x4
    // Offset: 0x18
    int Length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Key
    // Size: 0x4
    // Offset: 0x1C
    int Key;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ReliableHeader
    constexpr ReliableHeader(::Fusion::Sockets::ReliableHeader* Next_ = {}, ::Fusion::Sockets::ReliableHeader* Prev_ = {}, uint64_t Sequence_ = {}, int Length_ = {}, int Key_ = {}) noexcept : Next{Next_}, Prev{Prev_}, Sequence{Sequence_}, Length{Length_}, Key{Key_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 32;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // Get instance field reference: public Fusion.Sockets.ReliableHeader* Next
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::ReliableHeader*& dyn_Next();
    // Get instance field reference: public Fusion.Sockets.ReliableHeader* Prev
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::ReliableHeader*& dyn_Prev();
    // Get instance field reference: public System.UInt64 Sequence
    [[deprecated("Use field access instead!")]] uint64_t& dyn_Sequence();
    // Get instance field reference: public System.Int32 Length
    [[deprecated("Use field access instead!")]] int& dyn_Length();
    // Get instance field reference: public System.Int32 Key
    [[deprecated("Use field access instead!")]] int& dyn_Key();
    // static public System.Byte* GetData(Fusion.Sockets.ReliableHeader* header)
    // Offset: 0x2B95B20
    static uint8_t* GetData(::Fusion::Sockets::ReliableHeader* header);
  }; // Fusion.Sockets.ReliableHeader
  #pragma pack(pop)
  static check_size<sizeof(ReliableHeader), 28 + sizeof(int)> __Fusion_Sockets_ReliableHeaderSizeCheck;
  static_assert(sizeof(ReliableHeader) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::ReliableHeader::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (*)(::Fusion::Sockets::ReliableHeader*)>(&Fusion::Sockets::ReliableHeader::GetData)> {
  static const MethodInfo* get() {
    static auto* header = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "ReliableHeader"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::ReliableHeader), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{header});
  }
};