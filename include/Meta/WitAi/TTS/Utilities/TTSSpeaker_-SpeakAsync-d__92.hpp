// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.TTS.Utilities.TTSSpeaker
#include "Meta/WitAi/TTS/Utilities/TTSSpeaker.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Forward declaring namespace: Meta::WitAi::TTS::Utilities
namespace Meta::WitAi::TTS::Utilities {
  // Forward declaring type: TTSSpeakerClipEvents
  class TTSSpeakerClipEvents;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakAsync>d__92");
// Type namespace: Meta.WitAi.TTS.Utilities
namespace Meta::WitAi::TTS::Utilities {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__92
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TTSSpeaker::$SpeakAsync$d__92 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public Meta.WitAi.TTS.Utilities.TTSSpeaker <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Meta::WitAi::TTS::Utilities::TTSSpeaker* $$4__this;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker*) == 0x8);
    // public Meta.WitAi.Json.WitResponseNode responseNode
    // Size: 0x8
    // Offset: 0x28
    ::Meta::WitAi::Json::WitResponseNode* responseNode;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Json::WitResponseNode*) == 0x8);
    // public Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents playbackEvents
    // Size: 0x8
    // Offset: 0x30
    ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* playbackEvents;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Meta.WitAi.TTS.Utilities.TTSSpeaker <>4__this
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeaker*& dyn_$$4__this();
    // Get instance field reference: public Meta.WitAi.Json.WitResponseNode responseNode
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Json::WitResponseNode*& dyn_responseNode();
    // Get instance field reference: public Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents playbackEvents
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& dyn_playbackEvents();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x445ED64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSSpeaker::$SpeakAsync$d__92* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSSpeaker::$SpeakAsync$d__92*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x4462004
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x4462008
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x4462070
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x4462078
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x44620B0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__92
  #pragma pack(pop)
  static check_size<sizeof(TTSSpeaker::$SpeakAsync$d__92), 48 + sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*)> __Meta_WitAi_TTS_Utilities_TTSSpeaker_$SpeakAsync$d__92SizeCheck;
  static_assert(sizeof(TTSSpeaker::$SpeakAsync$d__92) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$SpeakAsync$d__92*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
