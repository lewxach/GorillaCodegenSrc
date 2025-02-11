// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.VoiceClient
#include "Photon/Voice/VoiceClient.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2/Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: RemoteVoiceInfo
  class RemoteVoiceInfo;
  // Forward declaring type: RemoteVoice
  class RemoteVoice;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: Dictionary`2 because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40*, "Photon.Voice", "VoiceClient/<get_RemoteVoiceInfos>d__40");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VoiceClient::$get_RemoteVoiceInfos$d__40 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>, public ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Photon.Voice.RemoteVoiceInfo <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Photon::Voice::RemoteVoiceInfo* $$2__current;
    // Field size check
    static_assert(sizeof(::Photon::Voice::RemoteVoiceInfo*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Photon.Voice.VoiceClient <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::Photon::Voice::VoiceClient* $$4__this;
    // Field size check
    static_assert(sizeof(::Photon::Voice::VoiceClient*) == 0x8);
    // private System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    typename ::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::Dictionary_2<uint8_t, ::Photon::Voice::RemoteVoice*>*>::Enumerator $$7__wrap1;
    // private System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> <playerVoices>5__3
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::System::Collections::Generic::KeyValuePair_2<int, ::System::Collections::Generic::Dictionary_2<uint8_t, ::Photon::Voice::RemoteVoice*>*> $playerVoices$5__3;
    // private System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice> <>7__wrap3
    // Size: 0xFFFFFFFF
    // Offset: 0x68
    typename ::System::Collections::Generic::Dictionary_2<uint8_t, ::Photon::Voice::RemoteVoice*>::Enumerator $$7__wrap3;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>
    operator ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>
    operator ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private Photon.Voice.RemoteVoiceInfo <>2__current
    [[deprecated("Use field access instead!")]] ::Photon::Voice::RemoteVoiceInfo*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public Photon.Voice.VoiceClient <>4__this
    [[deprecated("Use field access instead!")]] ::Photon::Voice::VoiceClient*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> <>7__wrap1
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::Dictionary_2<uint8_t, ::Photon::Voice::RemoteVoice*>*>::Enumerator& dyn_$$7__wrap1();
    // Get instance field reference: private System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> <playerVoices>5__3
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::KeyValuePair_2<int, ::System::Collections::Generic::Dictionary_2<uint8_t, ::Photon::Voice::RemoteVoice*>*>& dyn_$playerVoices$5__3();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice> <>7__wrap3
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::Dictionary_2<uint8_t, ::Photon::Voice::RemoteVoice*>::Enumerator& dyn_$$7__wrap3();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x4A694B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceClient::$get_RemoteVoiceInfos$d__40* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceClient::$get_RemoteVoiceInfos$d__40*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x4A6F6A8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x4A6F758
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x4A6FB54
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x4A6FB04
    void $$m__Finally2();
    // private Photon.Voice.RemoteVoiceInfo System.Collections.Generic.IEnumerator<Photon.Voice.RemoteVoiceInfo>.get_Current()
    // Offset: 0x4A6FBA4
    ::Photon::Voice::RemoteVoiceInfo* System_Collections_Generic_IEnumerator$Photon_Voice_RemoteVoiceInfo$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x4A6FBAC
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x4A6FBE4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo> System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator()
    // Offset: 0x4A6FBEC
    ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>* System_Collections_Generic_IEnumerable$Photon_Voice_RemoteVoiceInfo$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x4A6FC90
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::*)()>(&Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::*)()>(&Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::*)()>(&Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::$$m__Finally2
// Il2CppName: <>m__Finally2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::*)()>(&Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::$$m__Finally2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40*), "<>m__Finally2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_Collections_Generic_IEnumerator$Photon_Voice_RemoteVoiceInfo$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<Photon.Voice.RemoteVoiceInfo>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::RemoteVoiceInfo* (Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::*)()>(&Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_Collections_Generic_IEnumerator$Photon_Voice_RemoteVoiceInfo$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40*), "System.Collections.Generic.IEnumerator<Photon.Voice.RemoteVoiceInfo>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::*)()>(&Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::*)()>(&Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_Collections_Generic_IEnumerable$Photon_Voice_RemoteVoiceInfo$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>* (Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::*)()>(&Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_Collections_Generic_IEnumerable$Photon_Voice_RemoteVoiceInfo$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40*), "System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::*)()>(&Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::$get_RemoteVoiceInfos$d__40*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
