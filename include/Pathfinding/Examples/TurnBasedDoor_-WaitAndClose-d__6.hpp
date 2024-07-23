// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Examples.TurnBasedDoor
#include "Pathfinding/Examples/TurnBasedDoor.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
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
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: SingleNodeBlocker
  class SingleNodeBlocker;
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6*, "Pathfinding.Examples", "TurnBasedDoor/<WaitAndClose>d__6");
// Type namespace: Pathfinding.Examples
namespace Pathfinding::Examples {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Examples.TurnBasedDoor/<WaitAndClose>d__6
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TurnBasedDoor::$WaitAndClose$d__6 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public Pathfinding.Examples.TurnBasedDoor <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Pathfinding::Examples::TurnBasedDoor* $$4__this;
    // Field size check
    static_assert(sizeof(::Pathfinding::Examples::TurnBasedDoor*) == 0x8);
    // private System.Collections.Generic.List`1<Pathfinding.SingleNodeBlocker> <selector>5__2
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::Pathfinding::SingleNodeBlocker*>* $selector$5__2;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::SingleNodeBlocker*>*) == 0x8);
    // private Pathfinding.GraphNode <node>5__3
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::GraphNode* $node$5__3;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNode*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Pathfinding.Examples.TurnBasedDoor <>4__this
    [[deprecated("Use field access instead!")]] ::Pathfinding::Examples::TurnBasedDoor*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.List`1<Pathfinding.SingleNodeBlocker> <selector>5__2
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::SingleNodeBlocker*>*& dyn_$selector$5__2();
    // Get instance field reference: private Pathfinding.GraphNode <node>5__3
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNode*& dyn_$node$5__3();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2A46E58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TurnBasedDoor::$WaitAndClose$d__6* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TurnBasedDoor::$WaitAndClose$d__6*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2A46F40
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2A46F44
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x2A471BC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2A471C4
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2A471FC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Pathfinding.Examples.TurnBasedDoor/<WaitAndClose>d__6
  #pragma pack(pop)
  static check_size<sizeof(TurnBasedDoor::$WaitAndClose$d__6), 48 + sizeof(::Pathfinding::GraphNode*)> __Pathfinding_Examples_TurnBasedDoor_$WaitAndClose$d__6SizeCheck;
  static_assert(sizeof(TurnBasedDoor::$WaitAndClose$d__6) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::*)()>(&Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::*)()>(&Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::*)()>(&Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::*)()>(&Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::*)()>(&Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::TurnBasedDoor::$WaitAndClose$d__6*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};