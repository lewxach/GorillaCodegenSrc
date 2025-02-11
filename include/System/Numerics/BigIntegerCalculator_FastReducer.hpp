// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Numerics.BigIntegerCalculator
#include "System/Numerics/BigIntegerCalculator.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::BigIntegerCalculator::FastReducer, "System.Numerics", "BigIntegerCalculator/FastReducer");
// Type namespace: System.Numerics
namespace System::Numerics {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Numerics.BigIntegerCalculator/FastReducer
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct BigIntegerCalculator::FastReducer/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly System.UInt32[] _modulus
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint> modulus;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private readonly System.UInt32[] _mu
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<uint> mu;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private readonly System.UInt32[] _q1
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint> q1;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private readonly System.UInt32[] _q2
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint> q2;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private readonly System.Int32 _muLength
    // Size: 0x4
    // Offset: 0x20
    int muLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FastReducer
    constexpr FastReducer(::ArrayW<uint> modulus_ = ::ArrayW<uint>(static_cast<void*>(nullptr)), ::ArrayW<uint> mu_ = ::ArrayW<uint>(static_cast<void*>(nullptr)), ::ArrayW<uint> q1_ = ::ArrayW<uint>(static_cast<void*>(nullptr)), ::ArrayW<uint> q2_ = ::ArrayW<uint>(static_cast<void*>(nullptr)), int muLength_ = {}) noexcept : modulus{modulus_}, mu{mu_}, q1{q1_}, q2{q2_}, muLength{muLength_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly System.UInt32[] _modulus
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn__modulus();
    // Get instance field reference: private readonly System.UInt32[] _mu
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn__mu();
    // Get instance field reference: private readonly System.UInt32[] _q1
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn__q1();
    // Get instance field reference: private readonly System.UInt32[] _q2
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn__q2();
    // Get instance field reference: private readonly System.Int32 _muLength
    [[deprecated("Use field access instead!")]] int& dyn__muLength();
    // public System.Void .ctor(System.UInt32[] modulus)
    // Offset: 0x4CFE954
    FastReducer(::ArrayW<uint> modulus);
    // public System.Int32 Reduce(System.UInt32[] value, System.Int32 length)
    // Offset: 0x4CFFA78
    int Reduce(::ArrayW<uint> value, int length);
    // static private System.Int32 DivMul(System.UInt32[] left, System.Int32 leftLength, System.UInt32[] right, System.Int32 rightLength, System.UInt32[] bits, System.Int32 k)
    // Offset: 0x4CFFB1C
    static int DivMul(::ArrayW<uint> left, int leftLength, ::ArrayW<uint> right, int rightLength, ::ArrayW<uint> bits, int k);
    // static private System.Int32 SubMod(System.UInt32[] left, System.Int32 leftLength, System.UInt32[] right, System.Int32 rightLength, System.UInt32[] modulus, System.Int32 k)
    // Offset: 0x4CFFC6C
    static int SubMod(::ArrayW<uint> left, int leftLength, ::ArrayW<uint> right, int rightLength, ::ArrayW<uint> modulus, int k);
  }; // System.Numerics.BigIntegerCalculator/FastReducer
  #pragma pack(pop)
  static check_size<sizeof(BigIntegerCalculator::FastReducer), 32 + sizeof(int)> __System_Numerics_BigIntegerCalculator_FastReducerSizeCheck;
  static_assert(sizeof(BigIntegerCalculator::FastReducer) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Numerics::BigIntegerCalculator::FastReducer::FastReducer
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Numerics::BigIntegerCalculator::FastReducer::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Numerics::BigIntegerCalculator::FastReducer::*)(::ArrayW<uint>, int)>(&System::Numerics::BigIntegerCalculator::FastReducer::Reduce)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigIntegerCalculator::FastReducer), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, length});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigIntegerCalculator::FastReducer::DivMul
// Il2CppName: DivMul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint>, int, ::ArrayW<uint>, int, ::ArrayW<uint>, int)>(&System::Numerics::BigIntegerCalculator::FastReducer::DivMul)> {
  static const MethodInfo* get() {
    static auto* left = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* leftLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* right = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* rightLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bits = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigIntegerCalculator::FastReducer), "DivMul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, leftLength, right, rightLength, bits, k});
  }
};
// Writing MetadataGetter for method: System::Numerics::BigIntegerCalculator::FastReducer::SubMod
// Il2CppName: SubMod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint>, int, ::ArrayW<uint>, int, ::ArrayW<uint>, int)>(&System::Numerics::BigIntegerCalculator::FastReducer::SubMod)> {
  static const MethodInfo* get() {
    static auto* left = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* leftLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* right = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* rightLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modulus = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::BigIntegerCalculator::FastReducer), "SubMod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, leftLength, right, rightLength, modulus, k});
  }
};
