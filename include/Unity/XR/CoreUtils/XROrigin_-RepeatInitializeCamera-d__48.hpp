// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.XR.CoreUtils.XROrigin
#include "Unity/XR/CoreUtils/XROrigin.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48*, "Unity.XR.CoreUtils", "XROrigin/<RepeatInitializeCamera>d__48");
// Type namespace: Unity.XR.CoreUtils
namespace Unity::XR::CoreUtils {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class XROrigin::$RepeatInitializeCamera$d__48 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public Unity.XR.CoreUtils.XROrigin <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Unity::XR::CoreUtils::XROrigin* $$4__this;
    // Field size check
    static_assert(sizeof(::Unity::XR::CoreUtils::XROrigin*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Unity.XR.CoreUtils.XROrigin <>4__this
    [[deprecated("Use field access instead!")]] ::Unity::XR::CoreUtils::XROrigin*& dyn_$$4__this();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x53D1168
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XROrigin::$RepeatInitializeCamera$d__48* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XROrigin::$RepeatInitializeCamera$d__48*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x53D2690
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x53D2694
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x53D2734
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x53D273C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x53D2774
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Unity.XR.CoreUtils.XROrigin/<RepeatInitializeCamera>d__48
  #pragma pack(pop)
  static check_size<sizeof(XROrigin::$RepeatInitializeCamera$d__48), 32 + sizeof(::Unity::XR::CoreUtils::XROrigin*)> __Unity_XR_CoreUtils_XROrigin_$RepeatInitializeCamera$d__48SizeCheck;
  static_assert(sizeof(XROrigin::$RepeatInitializeCamera$d__48) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::*)()>(&Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::*)()>(&Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::*)()>(&Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::*)()>(&Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::*)()>(&Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::CoreUtils::XROrigin::$RepeatInitializeCamera$d__48*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
