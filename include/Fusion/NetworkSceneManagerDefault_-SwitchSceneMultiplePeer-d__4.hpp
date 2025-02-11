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
// Including type: UnityEngine.SceneManagement.LoadSceneParameters
#include "UnityEngine/SceneManagement/LoadSceneParameters.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObject
  class NetworkObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4*, "Fusion", "NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0 <>8__1
    // Size: 0x8
    // Offset: 0x38
    ::Fusion::NetworkSceneManagerDefault::$$c__DisplayClass4_0* $$8__1;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkSceneManagerDefault::$$c__DisplayClass4_0*) == 0x8);
    // public Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate finished
    // Size: 0x8
    // Offset: 0x40
    ::Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate* finished;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate*) == 0x8);
    // private UnityEngine.SceneManagement.LoadSceneParameters <loadSceneParameters>5__2
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::SceneManagement::LoadSceneParameters $loadSceneParameters$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::SceneManagement::LoadSceneParameters) == 0x8);
    // private UnityEngine.SceneManagement.Scene <sceneToUnload>5__3
    // Size: 0x4
    // Offset: 0x50
    ::UnityEngine::SceneManagement::Scene $sceneToUnload$5__3;
    // Field size check
    static_assert(sizeof(::UnityEngine::SceneManagement::Scene) == 0x4);
    // Padding between fields: $sceneToUnload$5__3 and: $tempSceneSpawnedPrefabs$5__4
    char __padding8[0x4] = {};
    // private UnityEngine.GameObject[] <tempSceneSpawnedPrefabs>5__4
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::GameObject*> $tempSceneSpawnedPrefabs$5__4;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private System.Collections.Generic.List`1<Fusion.NetworkObject> <sceneObjects>5__5
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::Fusion::NetworkObject*>* $sceneObjects$5__5;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Fusion::NetworkObject*>*) == 0x8);
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
    // Get instance field reference: private Fusion.NetworkSceneManagerDefault/<>c__DisplayClass4_0 <>8__1
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkSceneManagerDefault::$$c__DisplayClass4_0*& dyn_$$8__1();
    // Get instance field reference: public Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate finished
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate*& dyn_finished();
    // Get instance field reference: private UnityEngine.SceneManagement.LoadSceneParameters <loadSceneParameters>5__2
    [[deprecated("Use field access instead!")]] ::UnityEngine::SceneManagement::LoadSceneParameters& dyn_$loadSceneParameters$5__2();
    // Get instance field reference: private UnityEngine.SceneManagement.Scene <sceneToUnload>5__3
    [[deprecated("Use field access instead!")]] ::UnityEngine::SceneManagement::Scene& dyn_$sceneToUnload$5__3();
    // Get instance field reference: private UnityEngine.GameObject[] <tempSceneSpawnedPrefabs>5__4
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_$tempSceneSpawnedPrefabs$5__4();
    // Get instance field reference: private System.Collections.Generic.List`1<Fusion.NetworkObject> <sceneObjects>5__5
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Fusion::NetworkObject*>*& dyn_$sceneObjects$5__5();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2819568
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x28197E0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x28197E4
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x2819DD4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2819DDC
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2819E14
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Fusion.NetworkSceneManagerDefault/<SwitchSceneMultiplePeer>d__4
  #pragma pack(pop)
  static check_size<sizeof(NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4), 96 + sizeof(::System::Collections::Generic::List_1<::Fusion::NetworkObject*>*)> __Fusion_NetworkSceneManagerDefault_$SwitchSceneMultiplePeer$d__4SizeCheck;
  static_assert(sizeof(NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::*)()>(&Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::*)()>(&Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::*)()>(&Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::*)()>(&Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::*)()>(&Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerDefault::$SwitchSceneMultiplePeer$d__4*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
