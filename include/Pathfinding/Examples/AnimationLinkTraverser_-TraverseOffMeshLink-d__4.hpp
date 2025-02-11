// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Examples.AnimationLinkTraverser
#include "Pathfinding/Examples/AnimationLinkTraverser.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: RichSpecial
  class RichSpecial;
  // Forward declaring type: AnimationLink
  class AnimationLink;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4*, "Pathfinding.Examples", "AnimationLinkTraverser/<TraverseOffMeshLink>d__4");
// Type namespace: Pathfinding.Examples
namespace Pathfinding::Examples {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Examples.AnimationLinkTraverser/<TraverseOffMeshLink>d__4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AnimationLinkTraverser::$TraverseOffMeshLink$d__4 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public Pathfinding.RichSpecial rs
    // Size: 0x8
    // Offset: 0x20
    ::Pathfinding::RichSpecial* rs;
    // Field size check
    static_assert(sizeof(::Pathfinding::RichSpecial*) == 0x8);
    // public Pathfinding.Examples.AnimationLinkTraverser <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::Pathfinding::Examples::AnimationLinkTraverser* $$4__this;
    // Field size check
    static_assert(sizeof(::Pathfinding::Examples::AnimationLinkTraverser*) == 0x8);
    // private Pathfinding.AnimationLink <link>5__2
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::AnimationLink* $link$5__2;
    // Field size check
    static_assert(sizeof(::Pathfinding::AnimationLink*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Pathfinding.RichSpecial rs
    [[deprecated("Use field access instead!")]] ::Pathfinding::RichSpecial*& dyn_rs();
    // Get instance field reference: public Pathfinding.Examples.AnimationLinkTraverser <>4__this
    [[deprecated("Use field access instead!")]] ::Pathfinding::Examples::AnimationLinkTraverser*& dyn_$$4__this();
    // Get instance field reference: private Pathfinding.AnimationLink <link>5__2
    [[deprecated("Use field access instead!")]] ::Pathfinding::AnimationLink*& dyn_$link$5__2();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2A4D5D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationLinkTraverser::$TraverseOffMeshLink$d__4* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationLinkTraverser::$TraverseOffMeshLink$d__4*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2A4D608
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2A4D60C
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x2A4DC58
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2A4DC60
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2A4DC98
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Pathfinding.Examples.AnimationLinkTraverser/<TraverseOffMeshLink>d__4
  #pragma pack(pop)
  static check_size<sizeof(AnimationLinkTraverser::$TraverseOffMeshLink$d__4), 48 + sizeof(::Pathfinding::AnimationLink*)> __Pathfinding_Examples_AnimationLinkTraverser_$TraverseOffMeshLink$d__4SizeCheck;
  static_assert(sizeof(AnimationLinkTraverser::$TraverseOffMeshLink$d__4) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::*)()>(&Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::*)()>(&Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::*)()>(&Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::*)()>(&Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::*)()>(&Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::AnimationLinkTraverser::$TraverseOffMeshLink$d__4*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
