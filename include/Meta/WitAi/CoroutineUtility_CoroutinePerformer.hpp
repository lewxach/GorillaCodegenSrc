// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.CoroutineUtility
#include "Meta/WitAi/CoroutineUtility.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi
namespace Meta::WitAi {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::CoroutineUtility::CoroutinePerformer);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::CoroutineUtility::CoroutinePerformer*, "Meta.WitAi", "CoroutineUtility/CoroutinePerformer");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.CoroutineUtility/CoroutinePerformer
  // [TokenAttribute] Offset: FFFFFFFF
  class CoroutineUtility::CoroutinePerformer : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Meta::WitAi::CoroutineUtility::CoroutinePerformer::$CoroutineIterateEnumerator$d__9
    class $CoroutineIterateEnumerator$d__9;
    public:
    // private System.Boolean <IsRunning>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool IsRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _useUpdate
    // Size: 0x1
    // Offset: 0x21
    bool useUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useUpdate and: method
    char __padding1[0x6] = {};
    // private System.Collections.IEnumerator _method
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::IEnumerator* method;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    // private UnityEngine.Coroutine _coroutine
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Coroutine* coroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean <IsRunning>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsRunning$k__BackingField();
    // Get instance field reference: private System.Boolean _useUpdate
    [[deprecated("Use field access instead!")]] bool& dyn__useUpdate();
    // Get instance field reference: private System.Collections.IEnumerator _method
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn__method();
    // Get instance field reference: private UnityEngine.Coroutine _coroutine
    [[deprecated("Use field access instead!")]] ::UnityEngine::Coroutine*& dyn__coroutine();
    // public System.Boolean get_IsRunning()
    // Offset: 0x443F3EC
    bool get_IsRunning();
    // private System.Void set_IsRunning(System.Boolean value)
    // Offset: 0x443F3F4
    void set_IsRunning(bool value);
    // private System.Void Awake()
    // Offset: 0x443F400
    void Awake();
    // public System.Void CoroutineBegin(System.Collections.IEnumerator asyncMethod, System.Boolean useUpdate)
    // Offset: 0x443F304
    void CoroutineBegin(::System::Collections::IEnumerator* asyncMethod, bool useUpdate);
    // private System.Collections.IEnumerator CoroutineIterateEnumerator()
    // Offset: 0x443F4F4
    ::System::Collections::IEnumerator* CoroutineIterateEnumerator();
    // private System.Void Update()
    // Offset: 0x443F588
    void Update();
    // private System.Void CoroutineIterateUpdate()
    // Offset: 0x443F46C
    void CoroutineIterateUpdate();
    // private System.Boolean MoveNext(System.Collections.IEnumerator method)
    // Offset: 0x443F59C
    bool MoveNext(::System::Collections::IEnumerator* method);
    // private System.Void OnDestroy()
    // Offset: 0x443F83C
    void OnDestroy();
    // public System.Void CoroutineCancel()
    // Offset: 0x443F598
    void CoroutineCancel();
    // private System.Void CoroutineComplete()
    // Offset: 0x443F778
    void CoroutineComplete();
    // private System.Void CoroutineUnload()
    // Offset: 0x443F840
    void CoroutineUnload();
    // public System.Void .ctor()
    // Offset: 0x443F8A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoroutineUtility::CoroutinePerformer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::CoroutineUtility::CoroutinePerformer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoroutineUtility::CoroutinePerformer*, creationType>()));
    }
  }; // Meta.WitAi.CoroutineUtility/CoroutinePerformer
  #pragma pack(pop)
  static check_size<sizeof(CoroutineUtility::CoroutinePerformer), 48 + sizeof(::UnityEngine::Coroutine*)> __Meta_WitAi_CoroutineUtility_CoroutinePerformerSizeCheck;
  static_assert(sizeof(CoroutineUtility::CoroutinePerformer) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::get_IsRunning
// Il2CppName: get_IsRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)()>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::get_IsRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "get_IsRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::set_IsRunning
// Il2CppName: set_IsRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)(bool)>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::set_IsRunning)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "set_IsRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)()>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineBegin
// Il2CppName: CoroutineBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)(::System::Collections::IEnumerator*, bool)>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineBegin)> {
  static const MethodInfo* get() {
    static auto* asyncMethod = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    static auto* useUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "CoroutineBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncMethod, useUpdate});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineIterateEnumerator
// Il2CppName: CoroutineIterateEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)()>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineIterateEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "CoroutineIterateEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)()>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineIterateUpdate
// Il2CppName: CoroutineIterateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)()>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineIterateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "CoroutineIterateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)(::System::Collections::IEnumerator*)>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::MoveNext)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)()>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineCancel
// Il2CppName: CoroutineCancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)()>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineCancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "CoroutineCancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineComplete
// Il2CppName: CoroutineComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)()>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "CoroutineComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineUnload
// Il2CppName: CoroutineUnload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::CoroutineUtility::CoroutinePerformer::*)()>(&Meta::WitAi::CoroutineUtility::CoroutinePerformer::CoroutineUnload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::CoroutineUtility::CoroutinePerformer*), "CoroutineUnload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::CoroutineUtility::CoroutinePerformer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!