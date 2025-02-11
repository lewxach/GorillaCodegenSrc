// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Data.AudioBuffer
#include "Meta/WitAi/Data/AudioBuffer.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30*, "Meta.WitAi.Data", "AudioBuffer/<WaitForMicToStart>d__30");
// Type namespace: Meta.WitAi.Data
namespace Meta::WitAi::Data {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AudioBuffer::$WaitForMicToStart$d__30 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public Meta.WitAi.Data.AudioBuffer <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Meta::WitAi::Data::AudioBuffer* $$4__this;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Data::AudioBuffer*) == 0x8);
    // public UnityEngine.Component component
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Component* component;
    // Field size check
    static_assert(sizeof(::UnityEngine::Component*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Meta.WitAi.Data.AudioBuffer <>4__this
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Data::AudioBuffer*& dyn_$$4__this();
    // Get instance field reference: public UnityEngine.Component component
    [[deprecated("Use field access instead!")]] ::UnityEngine::Component*& dyn_component();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x4465534
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioBuffer::$WaitForMicToStart$d__30* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioBuffer::$WaitForMicToStart$d__30*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x4465764
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x4465768
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x4465A88
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x4465A90
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x4465AC8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30
  #pragma pack(pop)
  static check_size<sizeof(AudioBuffer::$WaitForMicToStart$d__30), 40 + sizeof(::UnityEngine::Component*)> __Meta_WitAi_Data_AudioBuffer_$WaitForMicToStart$d__30SizeCheck;
  static_assert(sizeof(AudioBuffer::$WaitForMicToStart$d__30) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::*)()>(&Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::*)()>(&Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::*)()>(&Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::*)()>(&Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::*)()>(&Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::AudioBuffer::$WaitForMicToStart$d__30*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
