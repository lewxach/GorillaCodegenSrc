// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PassthroughStyler
#include "GlobalNamespace/PassthroughStyler.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31*, "", "PassthroughStyler/<FadeToCurrentStyle>d__31");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: PassthroughStyler/<FadeToCurrentStyle>d__31
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PassthroughStyler::$FadeToCurrentStyle$d__31 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public PassthroughStyler <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PassthroughStyler* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PassthroughStyler*) == 0x8);
    // public System.Single fadeTime
    // Size: 0x4
    // Offset: 0x28
    float fadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public PassthroughStyler <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PassthroughStyler*& dyn_$$4__this();
    // Get instance field reference: public System.Single fadeTime
    [[deprecated("Use field access instead!")]] float& dyn_fadeTime();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x293BC34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PassthroughStyler::$FadeToCurrentStyle$d__31* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PassthroughStyler::$FadeToCurrentStyle$d__31*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x293BFD8
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x293BFDC
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x293C064
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x293C06C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x293C0A4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // PassthroughStyler/<FadeToCurrentStyle>d__31
  #pragma pack(pop)
  static check_size<sizeof(PassthroughStyler::$FadeToCurrentStyle$d__31), 40 + sizeof(float)> __GlobalNamespace_PassthroughStyler_$FadeToCurrentStyle$d__31SizeCheck;
  static_assert(sizeof(PassthroughStyler::$FadeToCurrentStyle$d__31) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::*)()>(&GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::*)()>(&GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::*)()>(&GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::*)()>(&GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::*)()>(&GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PassthroughStyler::$FadeToCurrentStyle$d__31*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
