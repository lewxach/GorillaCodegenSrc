// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.UtilityScripts.OnClickRpc
#include "Photon/Pun/UtilityScripts/OnClickRpc.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8*, "Photon.Pun.UtilityScripts", "OnClickRpc/<ClickFlash>d__8");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OnClickRpc::$ClickFlash$d__8 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public Photon.Pun.UtilityScripts.OnClickRpc <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Photon::Pun::UtilityScripts::OnClickRpc* $$4__this;
    // Field size check
    static_assert(sizeof(::Photon::Pun::UtilityScripts::OnClickRpc*) == 0x8);
    // private System.Boolean <wasEmissive>5__2
    // Size: 0x1
    // Offset: 0x28
    bool $wasEmissive$5__2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $wasEmissive$5__2 and: $f$5__3
    char __padding3[0x3] = {};
    // private System.Single <f>5__3
    // Size: 0x4
    // Offset: 0x2C
    float $f$5__3;
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
    // Get instance field reference: public Photon.Pun.UtilityScripts.OnClickRpc <>4__this
    [[deprecated("Use field access instead!")]] ::Photon::Pun::UtilityScripts::OnClickRpc*& dyn_$$4__this();
    // Get instance field reference: private System.Boolean <wasEmissive>5__2
    [[deprecated("Use field access instead!")]] bool& dyn_$wasEmissive$5__2();
    // Get instance field reference: private System.Single <f>5__3
    [[deprecated("Use field access instead!")]] float& dyn_$f$5__3();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x4A54848
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnClickRpc::$ClickFlash$d__8* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnClickRpc::$ClickFlash$d__8*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x4A54878
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x4A5487C
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x4A54B5C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x4A54B64
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x4A54B9C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8
  #pragma pack(pop)
  static check_size<sizeof(OnClickRpc::$ClickFlash$d__8), 44 + sizeof(float)> __Photon_Pun_UtilityScripts_OnClickRpc_$ClickFlash$d__8SizeCheck;
  static_assert(sizeof(OnClickRpc::$ClickFlash$d__8) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::*)()>(&Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::*)()>(&Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::*)()>(&Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::*)()>(&Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::*)()>(&Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::OnClickRpc::$ClickFlash$d__8*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
