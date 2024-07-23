// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TimerState
  struct TimerState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimerState, "UnityEngine.UIElements", "TimerState");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.TimerState
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimerState/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>*/ {
    public:
    public:
    // private System.Int64 <start>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    int64_t start;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 <now>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    int64_t now;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: TimerState
    constexpr TimerState(int64_t start_ = {}, int64_t now_ = {}) noexcept : start{start_}, now{now_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::TimerState>*>(this);
    }
    // Get instance field reference: private System.Int64 <start>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$start$k__BackingField();
    // Get instance field reference: private System.Int64 <now>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$now$k__BackingField();
    // public System.Int64 get_start()
    // Offset: 0x568B144
    int64_t get_start();
    // public System.Void set_start(System.Int64 value)
    // Offset: 0x568B14C
    void set_start(int64_t value);
    // public System.Int64 get_now()
    // Offset: 0x568B154
    int64_t get_now();
    // public System.Void set_now(System.Int64 value)
    // Offset: 0x568B15C
    void set_now(int64_t value);
    // public System.Int64 get_deltaTime()
    // Offset: 0x568B164
    int64_t get_deltaTime();
    // public System.Boolean Equals(UnityEngine.UIElements.TimerState other)
    // Offset: 0x568B1F8
    bool Equals(::UnityEngine::UIElements::TimerState other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x568B170
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x568B21C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.UIElements.TimerState
  #pragma pack(pop)
  static check_size<sizeof(TimerState), 8 + sizeof(int64_t)> __UnityEngine_UIElements_TimerStateSizeCheck;
  static_assert(sizeof(TimerState) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::TimerState::get_start
// Il2CppName: get_start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::UIElements::TimerState::*)()>(&UnityEngine::UIElements::TimerState::get_start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TimerState), "get_start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TimerState::set_start
// Il2CppName: set_start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TimerState::*)(int64_t)>(&UnityEngine::UIElements::TimerState::set_start)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TimerState), "set_start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TimerState::get_now
// Il2CppName: get_now
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::UIElements::TimerState::*)()>(&UnityEngine::UIElements::TimerState::get_now)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TimerState), "get_now", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TimerState::set_now
// Il2CppName: set_now
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TimerState::*)(int64_t)>(&UnityEngine::UIElements::TimerState::set_now)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TimerState), "set_now", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TimerState::get_deltaTime
// Il2CppName: get_deltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::UIElements::TimerState::*)()>(&UnityEngine::UIElements::TimerState::get_deltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TimerState), "get_deltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TimerState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::TimerState::*)(::UnityEngine::UIElements::TimerState)>(&UnityEngine::UIElements::TimerState::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TimerState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TimerState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TimerState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::TimerState::*)(::Il2CppObject*)>(&UnityEngine::UIElements::TimerState::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TimerState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::TimerState::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::TimerState::*)()>(&UnityEngine::UIElements::TimerState::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::TimerState), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};