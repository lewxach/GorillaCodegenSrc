// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: TMPro.TMP_Offset
#include "TMPro/TMP_Offset.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: HighlightState
  struct HighlightState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::HighlightState, "TMPro", "HighlightState");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.HighlightState
  // [TokenAttribute] Offset: FFFFFFFF
  struct HighlightState/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Color32 color
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::Color32 color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public TMPro.TMP_Offset padding
    // Size: 0x10
    // Offset: 0x4
    ::TMPro::TMP_Offset padding;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_Offset) == 0x10);
    public:
    // Creating value type constructor for type: HighlightState
    constexpr HighlightState(::UnityEngine::Color32 color_ = {}, ::TMPro::TMP_Offset padding_ = {}) noexcept : color{color_}, padding{padding_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Color32 color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_color();
    // Get instance field reference: public TMPro.TMP_Offset padding
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_Offset& dyn_padding();
    // public System.Void .ctor(UnityEngine.Color32 color, TMPro.TMP_Offset padding)
    // Offset: 0x5363678
    // ABORTED: conflicts with another method.  HighlightState(::UnityEngine::Color32 color, ::TMPro::TMP_Offset padding);
    // public System.Boolean Equals(TMPro.HighlightState other)
    // Offset: 0x5363888
    bool Equals(::TMPro::HighlightState other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x536379C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x5363808
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // TMPro.HighlightState
  #pragma pack(pop)
  static check_size<sizeof(HighlightState), 4 + sizeof(::TMPro::TMP_Offset)> __TMPro_HighlightStateSizeCheck;
  static_assert(sizeof(HighlightState) == 0x14);
  // static public System.Boolean op_Equality(TMPro.HighlightState lhs, TMPro.HighlightState rhs)
  // Offset: 0x5363688
  bool operator ==(const ::TMPro::HighlightState& lhs, const ::TMPro::HighlightState& rhs);
  // static public System.Boolean op_Inequality(TMPro.HighlightState lhs, TMPro.HighlightState rhs)
  // Offset: 0x5363754
  bool operator !=(const ::TMPro::HighlightState& lhs, const ::TMPro::HighlightState& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::HighlightState::HighlightState
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::HighlightState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::HighlightState::*)(::TMPro::HighlightState)>(&TMPro::HighlightState::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("TMPro", "HighlightState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::HighlightState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: TMPro::HighlightState::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (TMPro::HighlightState::*)()>(&TMPro::HighlightState::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::HighlightState), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::HighlightState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::HighlightState::*)(::Il2CppObject*)>(&TMPro::HighlightState::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::HighlightState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: TMPro::HighlightState::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: TMPro::HighlightState::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!