// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetworkDebugStart
#include "GlobalNamespace/NetworkDebugStart.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: Fusion.GameMode
#include "Fusion/GameMode.hpp"
// Including type: Fusion.SceneRef
#include "Fusion/SceneRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NetworkDebugStart::$StartClients$d__58);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkDebugStart::$StartClients$d__58*, "", "NetworkDebugStart/<StartClients>d__58");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: NetworkDebugStart/<StartClients>d__58
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetworkDebugStart::$StartClients$d__58 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public NetworkDebugStart <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::NetworkDebugStart* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NetworkDebugStart*) == 0x8);
    // public Fusion.GameMode serverMode
    // Size: 0x4
    // Offset: 0x28
    ::Fusion::GameMode serverMode;
    // Field size check
    static_assert(sizeof(::Fusion::GameMode) == 0x4);
    // public Fusion.SceneRef sceneRef
    // Size: 0x4
    // Offset: 0x2C
    ::Fusion::SceneRef sceneRef;
    // Field size check
    static_assert(sizeof(::Fusion::SceneRef) == 0x4);
    // public System.Int32 clientCount
    // Size: 0x4
    // Offset: 0x30
    int clientCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: clientCount and: $clientTasks$5__2
    char __padding5[0x4] = {};
    // private System.Collections.Generic.List`1<System.Threading.Tasks.Task> <clientTasks>5__2
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* $clientTasks$5__2;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*) == 0x8);
    // private System.Threading.Tasks.Task <clientsStartTask>5__3
    // Size: 0x8
    // Offset: 0x40
    ::System::Threading::Tasks::Task* $clientsStartTask$5__3;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // private System.Int32 <i>5__4
    // Size: 0x4
    // Offset: 0x48
    int $i$5__4;
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
    // Get instance field reference: public NetworkDebugStart <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NetworkDebugStart*& dyn_$$4__this();
    // Get instance field reference: public Fusion.GameMode serverMode
    [[deprecated("Use field access instead!")]] ::Fusion::GameMode& dyn_serverMode();
    // Get instance field reference: public Fusion.SceneRef sceneRef
    [[deprecated("Use field access instead!")]] ::Fusion::SceneRef& dyn_sceneRef();
    // Get instance field reference: public System.Int32 clientCount
    [[deprecated("Use field access instead!")]] int& dyn_clientCount();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Threading.Tasks.Task> <clientTasks>5__2
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*& dyn_$clientTasks$5__2();
    // Get instance field reference: private System.Threading.Tasks.Task <clientsStartTask>5__3
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn_$clientsStartTask$5__3();
    // Get instance field reference: private System.Int32 <i>5__4
    [[deprecated("Use field access instead!")]] int& dyn_$i$5__4();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x295D57C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkDebugStart::$StartClients$d__58* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkDebugStart::$StartClients$d__58::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkDebugStart::$StartClients$d__58*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x295D914
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x295D918
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x295DBE4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x295DBEC
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x295DC24
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // NetworkDebugStart/<StartClients>d__58
  #pragma pack(pop)
  static check_size<sizeof(NetworkDebugStart::$StartClients$d__58), 72 + sizeof(int)> __GlobalNamespace_NetworkDebugStart_$StartClients$d__58SizeCheck;
  static_assert(sizeof(NetworkDebugStart::$StartClients$d__58) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkDebugStart::$StartClients$d__58::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetworkDebugStart::$StartClients$d__58::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkDebugStart::$StartClients$d__58::*)()>(&GlobalNamespace::NetworkDebugStart::$StartClients$d__58::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkDebugStart::$StartClients$d__58*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkDebugStart::$StartClients$d__58::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NetworkDebugStart::$StartClients$d__58::*)()>(&GlobalNamespace::NetworkDebugStart::$StartClients$d__58::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkDebugStart::$StartClients$d__58*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkDebugStart::$StartClients$d__58::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::NetworkDebugStart::$StartClients$d__58::*)()>(&GlobalNamespace::NetworkDebugStart::$StartClients$d__58::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkDebugStart::$StartClients$d__58*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkDebugStart::$StartClients$d__58::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkDebugStart::$StartClients$d__58::*)()>(&GlobalNamespace::NetworkDebugStart::$StartClients$d__58::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkDebugStart::$StartClients$d__58*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkDebugStart::$StartClients$d__58::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::NetworkDebugStart::$StartClients$d__58::*)()>(&GlobalNamespace::NetworkDebugStart::$StartClients$d__58::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkDebugStart::$StartClients$d__58*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
