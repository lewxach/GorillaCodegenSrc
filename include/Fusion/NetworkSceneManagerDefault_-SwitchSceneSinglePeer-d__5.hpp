// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkSceneManagerDefault
#include "Fusion/NetworkSceneManagerDefault.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: Fusion.SceneRef
#include "Fusion/SceneRef.hpp"
// Including type: Fusion.NetworkSceneManagerBase
#include "Fusion/NetworkSceneManagerBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5*, "Fusion", "NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public Fusion.SceneRef prevScene
    // Size: 0x4
    // Offset: 0x20
    ::Fusion::SceneRef prevScene;
    // Field size check
    static_assert(sizeof(::Fusion::SceneRef) == 0x4);
    // Padding between fields: prevScene and: $$4__this
    char __padding2[0x4] = {};
    // public Fusion.NetworkSceneManagerDefault <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::Fusion::NetworkSceneManagerDefault* $$4__this;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkSceneManagerDefault*) == 0x8);
    // public Fusion.SceneRef newScene
    // Size: 0x4
    // Offset: 0x30
    ::Fusion::SceneRef newScene;
    // Field size check
    static_assert(sizeof(::Fusion::SceneRef) == 0x4);
    // Padding between fields: newScene and: $$8__1
    char __padding4[0x4] = {};
    // private Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0 <>8__1
    // Size: 0x8
    // Offset: 0x38
    ::Fusion::NetworkSceneManagerDefault::$$c__DisplayClass5_0* $$8__1;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkSceneManagerDefault::$$c__DisplayClass5_0*) == 0x8);
    // public Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate finished
    // Size: 0x8
    // Offset: 0x40
    ::Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate* finished;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate*) == 0x8);
    // private System.Int32 <i>5__2
    // Size: 0x4
    // Offset: 0x48
    int $i$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Fusion.SceneRef prevScene
    [[deprecated("Use field access instead!")]] ::Fusion::SceneRef& dyn_prevScene();
    // Get instance field reference: public Fusion.NetworkSceneManagerDefault <>4__this
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkSceneManagerDefault*& dyn_$$4__this();
    // Get instance field reference: public Fusion.SceneRef newScene
    [[deprecated("Use field access instead!")]] ::Fusion::SceneRef& dyn_newScene();
    // Get instance field reference: private Fusion.NetworkSceneManagerDefault/<>c__DisplayClass5_0 <>8__1
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkSceneManagerDefault::$$c__DisplayClass5_0*& dyn_$$8__1();
    // Get instance field reference: public Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate finished
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate*& dyn_finished();
    // Get instance field reference: private System.Int32 <i>5__2
    [[deprecated("Use field access instead!")]] int& dyn_$i$5__2();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2819630
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2819E1C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2819E20
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x281A104
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x281A10C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x281A144
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Fusion.NetworkSceneManagerDefault/<SwitchSceneSinglePeer>d__5
  #pragma pack(pop)
  static check_size<sizeof(NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5), 72 + sizeof(int)> __Fusion_NetworkSceneManagerDefault_$SwitchSceneSinglePeer$d__5SizeCheck;
  static_assert(sizeof(NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::*)()>(&Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::*)()>(&Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::*)()>(&Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::*)()>(&Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::*)()>(&Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDefault::$SwitchSceneSinglePeer$d__5*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
