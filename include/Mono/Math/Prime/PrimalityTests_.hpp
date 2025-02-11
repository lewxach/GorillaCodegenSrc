// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Math
namespace Mono::Math {
  // Forward declaring type: BigInteger
  class BigInteger_;
}
// Forward declaring namespace: Mono::Math::Prime
namespace Mono::Math::Prime {
  // Forward declaring type: ConfidenceFactor
  struct ConfidenceFactor_;
}
// Completed forward declares
// Type namespace: Mono.Math.Prime
namespace Mono::Math::Prime {
  // Forward declaring type: PrimalityTests
  class PrimalityTests_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Math::Prime::PrimalityTests_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::PrimalityTests_*, "Mono.Math.Prime", "PrimalityTests");
// Type namespace: Mono.Math.Prime
namespace Mono::Math::Prime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.Prime.PrimalityTests
  // [TokenAttribute] Offset: FFFFFFFF
  class PrimalityTests_ : public ::Il2CppObject {
    public:
    // static private System.Int32 GetSPPRounds(Mono.Math.BigInteger bi, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x44BE0FC
    static int GetSPPRounds(::Mono::Math::BigInteger_* bi, ::Mono::Math::Prime::ConfidenceFactor_ confidence);
    // static public System.Boolean Test(Mono.Math.BigInteger n, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x44BD20C
    static bool Test(::Mono::Math::BigInteger_* n, ::Mono::Math::Prime::ConfidenceFactor_ confidence);
    // static public System.Boolean RabinMillerTest(Mono.Math.BigInteger n, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x44BE460
    static bool RabinMillerTest(::Mono::Math::BigInteger_* n, ::Mono::Math::Prime::ConfidenceFactor_ confidence);
    // static public System.Boolean SmallPrimeSppTest(Mono.Math.BigInteger bi, Mono.Math.Prime.ConfidenceFactor confidence)
    // Offset: 0x44BE288
    static bool SmallPrimeSppTest(::Mono::Math::BigInteger_* bi, ::Mono::Math::Prime::ConfidenceFactor_ confidence);
  }; // Mono.Math.Prime.PrimalityTests
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTests_::GetSPPRounds
// Il2CppName: GetSPPRounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Mono::Math::BigInteger_*, ::Mono::Math::Prime::ConfidenceFactor_)>(&Mono::Math::Prime::PrimalityTests_::GetSPPRounds)> {
  static const MethodInfo* get() {
    static auto* bi = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* confidence = &::il2cpp_utils::GetClassFromName("Mono.Math.Prime", "ConfidenceFactor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::PrimalityTests_*), "GetSPPRounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi, confidence});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTests_::Test
// Il2CppName: Test
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger_*, ::Mono::Math::Prime::ConfidenceFactor_)>(&Mono::Math::Prime::PrimalityTests_::Test)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* confidence = &::il2cpp_utils::GetClassFromName("Mono.Math.Prime", "ConfidenceFactor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::PrimalityTests_*), "Test", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, confidence});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTests_::RabinMillerTest
// Il2CppName: RabinMillerTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger_*, ::Mono::Math::Prime::ConfidenceFactor_)>(&Mono::Math::Prime::PrimalityTests_::RabinMillerTest)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* confidence = &::il2cpp_utils::GetClassFromName("Mono.Math.Prime", "ConfidenceFactor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::PrimalityTests_*), "RabinMillerTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, confidence});
  }
};
// Writing MetadataGetter for method: Mono::Math::Prime::PrimalityTests_::SmallPrimeSppTest
// Il2CppName: SmallPrimeSppTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Mono::Math::BigInteger_*, ::Mono::Math::Prime::ConfidenceFactor_)>(&Mono::Math::Prime::PrimalityTests_::SmallPrimeSppTest)> {
  static const MethodInfo* get() {
    static auto* bi = &::il2cpp_utils::GetClassFromName("Mono.Math", "BigInteger")->byval_arg;
    static auto* confidence = &::il2cpp_utils::GetClassFromName("Mono.Math.Prime", "ConfidenceFactor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Math::Prime::PrimalityTests_*), "SmallPrimeSppTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bi, confidence});
  }
};
