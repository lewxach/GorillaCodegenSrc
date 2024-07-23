// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DecimalEx
#include "System/DecimalEx.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::DecimalEx::DecCalc, "System", "DecimalEx/DecCalc");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: System.DecimalEx/DecCalc
  // [TokenAttribute] Offset: FFFFFFFF
  struct DecimalEx::DecCalc/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 uflags
    // Size: 0x4
    // Offset: 0x0
    uint uflags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 uhi
    // Size: 0x4
    // Offset: 0x4
    uint uhi;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 ulo
    // Size: 0x4
    // Offset: 0x8
    uint ulo;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 umid
    // Size: 0x4
    // Offset: 0xC
    uint umid;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // WARNING Could not write padding for field: umid! Ignoring it instead (and assuming correct layout regardless)...
    // private System.UInt64 ulomidLE
    // Size: 0x8
    // Offset: 0x8
    uint64_t ulomidLE;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: DecCalc
    constexpr DecCalc(uint uflags_ = {}, uint uhi_ = {}, uint ulo_ = {}, uint umid_ = {}, uint64_t ulomidLE_ = {}) noexcept : uflags{uflags_}, uhi{uhi_}, ulo{ulo_}, umid{umid_}, ulomidLE{ulomidLE_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static private System.UInt32 TenToPowerNine
    static constexpr const uint TenToPowerNine = 1000000000u;
    // Get static field: static private System.UInt32 TenToPowerNine
    static uint _get_TenToPowerNine();
    // Set static field: static private System.UInt32 TenToPowerNine
    static void _set_TenToPowerNine(uint value);
    // Get instance field reference: public System.UInt32 uflags
    [[deprecated("Use field access instead!")]] uint& dyn_uflags();
    // Get instance field reference: public System.UInt32 uhi
    [[deprecated("Use field access instead!")]] uint& dyn_uhi();
    // Get instance field reference: public System.UInt32 ulo
    [[deprecated("Use field access instead!")]] uint& dyn_ulo();
    // Get instance field reference: public System.UInt32 umid
    [[deprecated("Use field access instead!")]] uint& dyn_umid();
    // Get instance field reference: private System.UInt64 ulomidLE
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ulomidLE();
    // static System.UInt32 DecDivMod1E9(ref System.DecimalEx/DecCalc value)
    // Offset: 0x574AE8C
    static uint DecDivMod1E9(ByRef<::System::DecimalEx::DecCalc> value);
  }; // System.DecimalEx/DecCalc
  #pragma pack(pop)
  static check_size<sizeof(DecimalEx::DecCalc), 8 + sizeof(uint64_t)> __System_DecimalEx_DecCalcSizeCheck;
  static_assert(sizeof(DecimalEx::DecCalc) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DecimalEx::DecCalc::DecDivMod1E9
// Il2CppName: DecDivMod1E9
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(ByRef<::System::DecimalEx::DecCalc>)>(&System::DecimalEx::DecCalc::DecDivMod1E9)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DecimalEx/DecCalc")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DecimalEx::DecCalc), "DecDivMod1E9", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};