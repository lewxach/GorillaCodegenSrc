// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Number
#include "System/Number_.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Number/NumberBufferKind
#include "System/Number__NumberBufferKind.hpp"
// Including type: System.Span`1
#include "System/Span_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Number_::NumberBuffer, "System", "Number/NumberBuffer");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Number/NumberBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsByRefLikeAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  struct Number_::NumberBuffer/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 DigitsCount
    // Size: 0x4
    // Offset: 0x0
    int DigitsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Scale
    // Size: 0x4
    // Offset: 0x4
    int Scale;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean IsNegative
    // Size: 0x1
    // Offset: 0x8
    bool IsNegative;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean HasNonZeroTail
    // Size: 0x1
    // Offset: 0x9
    bool HasNonZeroTail;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Number/NumberBufferKind Kind
    // Size: 0x1
    // Offset: 0xA
    ::System::Number_::NumberBufferKind Kind;
    // Field size check
    static_assert(sizeof(::System::Number_::NumberBufferKind) == 0x1);
    // public System.Span`1<System.Byte> Digits
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::System::Span_1<uint8_t> Digits;
    public:
    // Creating value type constructor for type: NumberBuffer
    constexpr NumberBuffer(int DigitsCount_ = {}, int Scale_ = {}, bool IsNegative_ = {}, bool HasNonZeroTail_ = {}, ::System::Number_::NumberBufferKind Kind_ = {}, ::System::Span_1<uint8_t> Digits_ = {}) noexcept : DigitsCount{DigitsCount_}, Scale{Scale_}, IsNegative{IsNegative_}, HasNonZeroTail{HasNonZeroTail_}, Kind{Kind_}, Digits{Digits_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 DigitsCount
    [[deprecated("Use field access instead!")]] int& dyn_DigitsCount();
    // Get instance field reference: public System.Int32 Scale
    [[deprecated("Use field access instead!")]] int& dyn_Scale();
    // Get instance field reference: public System.Boolean IsNegative
    [[deprecated("Use field access instead!")]] bool& dyn_IsNegative();
    // Get instance field reference: public System.Boolean HasNonZeroTail
    [[deprecated("Use field access instead!")]] bool& dyn_HasNonZeroTail();
    // Get instance field reference: public System.Number/NumberBufferKind Kind
    [[deprecated("Use field access instead!")]] ::System::Number_::NumberBufferKind& dyn_Kind();
    // Get instance field reference: public System.Span`1<System.Byte> Digits
    [[deprecated("Use field access instead!")]] ::System::Span_1<uint8_t>& dyn_Digits();
    // public System.Void .ctor(System.Number/NumberBufferKind kind, System.Byte* digits, System.Int32 digitsLength)
    // Offset: 0x575D780
    NumberBuffer(::System::Number_::NumberBufferKind kind, uint8_t* digits, int digitsLength);
    // public System.Void CheckConsistency()
    // Offset: 0x575D7F8
    void CheckConsistency();
    // public System.Byte* GetDigitsPointer()
    // Offset: 0x575D7FC
    uint8_t* GetDigitsPointer();
    // public override System.String ToString()
    // Offset: 0x575D818
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Number/NumberBuffer
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Number_::NumberBuffer::NumberBuffer
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Number_::NumberBuffer::CheckConsistency
// Il2CppName: CheckConsistency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Number_::NumberBuffer::*)()>(&System::Number_::NumberBuffer::CheckConsistency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Number_::NumberBuffer), "CheckConsistency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Number_::NumberBuffer::GetDigitsPointer
// Il2CppName: GetDigitsPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (System::Number_::NumberBuffer::*)()>(&System::Number_::NumberBuffer::GetDigitsPointer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Number_::NumberBuffer), "GetDigitsPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Number_::NumberBuffer::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Number_::NumberBuffer::*)()>(&System::Number_::NumberBuffer::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Number_::NumberBuffer), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
