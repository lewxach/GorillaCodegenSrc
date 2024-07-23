// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputStateHistory
#include "UnityEngine/InputSystem/LowLevel/InputStateHistory.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/Enumerator");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputStateHistory::Enumerator/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory::Record>*/ {
    public:
    public:
    // private readonly UnityEngine.InputSystem.LowLevel.InputStateHistory m_History
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_History;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputStateHistory*) == 0x8);
    // private System.Int32 m_Index
    // Size: 0x4
    // Offset: 0x8
    int m_Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Enumerator
    constexpr Enumerator(::UnityEngine::InputSystem::LowLevel::InputStateHistory* m_History_ = {}, int m_Index_ = {}) noexcept : m_History{m_History_}, m_Index{m_Index_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory::Record>
    operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory::Record>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputStateHistory::Record>*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.InputSystem.LowLevel.InputStateHistory m_History
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputStateHistory*& dyn_m_History();
    // Get instance field reference: private System.Int32 m_Index
    [[deprecated("Use field access instead!")]] int& dyn_m_Index();
    // public System.Void .ctor(UnityEngine.InputSystem.LowLevel.InputStateHistory history)
    // Offset: 0x515948C
    Enumerator(::UnityEngine::InputSystem::LowLevel::InputStateHistory* history);
    // public System.Boolean MoveNext()
    // Offset: 0x5159A3C
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x5159A74
    void Reset();
    // public UnityEngine.InputSystem.LowLevel.InputStateHistory/Record get_Current()
    // Offset: 0x5159A80
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory::Record get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x5159AA0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Dispose()
    // Offset: 0x5159B04
    void Dispose();
  }; // UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
  #pragma pack(pop)
  static check_size<sizeof(InputStateHistory::Enumerator), 8 + sizeof(int)> __UnityEngine_InputSystem_LowLevel_InputStateHistory_EnumeratorSizeCheck;
  static_assert(sizeof(InputStateHistory::Enumerator) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::Enumerator
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::*)()>(&UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::*)()>(&UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateHistory::Record (UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::*)()>(&UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::*)()>(&UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::*)()>(&UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateHistory::Enumerator), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};