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
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: Codec
  struct Codec;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::Codec, "Photon.Voice", "Codec");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.Codec
  // [TokenAttribute] Offset: FFFFFFFF
  struct Codec/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Codec
    constexpr Codec(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Voice.Codec Raw
    static constexpr const int Raw = 1;
    // Get static field: static public Photon.Voice.Codec Raw
    static ::Photon::Voice::Codec _get_Raw();
    // Set static field: static public Photon.Voice.Codec Raw
    static void _set_Raw(::Photon::Voice::Codec value);
    // static field const value: static public Photon.Voice.Codec AudioOpus
    static constexpr const int AudioOpus = 11;
    // Get static field: static public Photon.Voice.Codec AudioOpus
    static ::Photon::Voice::Codec _get_AudioOpus();
    // Set static field: static public Photon.Voice.Codec AudioOpus
    static void _set_AudioOpus(::Photon::Voice::Codec value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Photon.Voice.Codec
  #pragma pack(pop)
  static check_size<sizeof(Codec), 0 + sizeof(int)> __Photon_Voice_CodecSizeCheck;
  static_assert(sizeof(Codec) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"