// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IBuilderPieceComponent
#include "GlobalNamespace/IBuilderPieceComponent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SizeChangerTrigger
  class SizeChangerTrigger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SizeChangerTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SizeChangerTrigger*, "", "SizeChangerTrigger");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: SizeChangerTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  class SizeChangerTrigger : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IBuilderPieceComponent*/ {
    public:
    // Nested type: ::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent
    class SizeChangerTriggerEvent;
    public:
    // private UnityEngine.Collider myCollider
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Collider* myCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // private SizeChangerTrigger/SizeChangerTriggerEvent OnEnter
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent* OnEnter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent*) == 0x8);
    // private SizeChangerTrigger/SizeChangerTriggerEvent OnExit
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent* OnExit;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent*) == 0x8);
    // public System.Boolean builderEnterTrigger
    // Size: 0x1
    // Offset: 0x38
    bool builderEnterTrigger;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean builderExitOnEnterTrigger
    // Size: 0x1
    // Offset: 0x39
    bool builderExitOnEnterTrigger;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IBuilderPieceComponent
    operator ::GlobalNamespace::IBuilderPieceComponent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBuilderPieceComponent*>(this);
    }
    // Get instance field reference: private UnityEngine.Collider myCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_myCollider();
    // Get instance field reference: private SizeChangerTrigger/SizeChangerTriggerEvent OnEnter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent*& dyn_OnEnter();
    // Get instance field reference: private SizeChangerTrigger/SizeChangerTriggerEvent OnExit
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent*& dyn_OnExit();
    // Get instance field reference: public System.Boolean builderEnterTrigger
    [[deprecated("Use field access instead!")]] bool& dyn_builderEnterTrigger();
    // Get instance field reference: public System.Boolean builderExitOnEnterTrigger
    [[deprecated("Use field access instead!")]] bool& dyn_builderExitOnEnterTrigger();
    // public System.Void add_OnEnter(SizeChangerTrigger/SizeChangerTriggerEvent value)
    // Offset: 0x272A6E4
    void add_OnEnter(::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent* value);
    // public System.Void remove_OnEnter(SizeChangerTrigger/SizeChangerTriggerEvent value)
    // Offset: 0x272A9A8
    void remove_OnEnter(::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent* value);
    // public System.Void add_OnExit(SizeChangerTrigger/SizeChangerTriggerEvent value)
    // Offset: 0x272A780
    void add_OnExit(::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent* value);
    // public System.Void remove_OnExit(SizeChangerTrigger/SizeChangerTriggerEvent value)
    // Offset: 0x272AA44
    void remove_OnExit(::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent* value);
    // private System.Void Awake()
    // Offset: 0x272B454
    void Awake();
    // public System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x272B4AC
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // public System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0x272B4C8
    void OnTriggerExit(::UnityEngine::Collider* other);
    // public UnityEngine.Vector3 ClosestPoint(UnityEngine.Vector3 position)
    // Offset: 0x272B428
    ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 position);
    // public System.Void OnPieceCreate(System.Int32 pieceType, System.Int32 pieceId)
    // Offset: 0x272B4E4
    void OnPieceCreate(int pieceType, int pieceId);
    // public System.Void OnPieceDestroy()
    // Offset: 0x272B4E8
    void OnPieceDestroy();
    // public System.Void OnPieceActivate()
    // Offset: 0x272B4EC
    void OnPieceActivate();
    // public System.Void OnPieceDeactivate()
    // Offset: 0x272B554
    void OnPieceDeactivate();
    // public System.Void .ctor()
    // Offset: 0x272B5BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SizeChangerTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SizeChangerTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SizeChangerTrigger*, creationType>()));
    }
  }; // SizeChangerTrigger
  #pragma pack(pop)
  static check_size<sizeof(SizeChangerTrigger), 57 + sizeof(bool)> __GlobalNamespace_SizeChangerTriggerSizeCheck;
  static_assert(sizeof(SizeChangerTrigger) == 0x3A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::add_OnEnter
// Il2CppName: add_OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeChangerTrigger::*)(::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent*)>(&GlobalNamespace::SizeChangerTrigger::add_OnEnter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SizeChangerTrigger/SizeChangerTriggerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "add_OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::remove_OnEnter
// Il2CppName: remove_OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeChangerTrigger::*)(::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent*)>(&GlobalNamespace::SizeChangerTrigger::remove_OnEnter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SizeChangerTrigger/SizeChangerTriggerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "remove_OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::add_OnExit
// Il2CppName: add_OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeChangerTrigger::*)(::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent*)>(&GlobalNamespace::SizeChangerTrigger::add_OnExit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SizeChangerTrigger/SizeChangerTriggerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "add_OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::remove_OnExit
// Il2CppName: remove_OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeChangerTrigger::*)(::GlobalNamespace::SizeChangerTrigger::SizeChangerTriggerEvent*)>(&GlobalNamespace::SizeChangerTrigger::remove_OnExit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SizeChangerTrigger/SizeChangerTriggerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "remove_OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeChangerTrigger::*)()>(&GlobalNamespace::SizeChangerTrigger::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeChangerTrigger::*)(::UnityEngine::Collider*)>(&GlobalNamespace::SizeChangerTrigger::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeChangerTrigger::*)(::UnityEngine::Collider*)>(&GlobalNamespace::SizeChangerTrigger::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::ClosestPoint
// Il2CppName: ClosestPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::SizeChangerTrigger::*)(::UnityEngine::Vector3)>(&GlobalNamespace::SizeChangerTrigger::ClosestPoint)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "ClosestPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::OnPieceCreate
// Il2CppName: OnPieceCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeChangerTrigger::*)(int, int)>(&GlobalNamespace::SizeChangerTrigger::OnPieceCreate)> {
  static const MethodInfo* get() {
    static auto* pieceType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pieceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "OnPieceCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pieceType, pieceId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::OnPieceDestroy
// Il2CppName: OnPieceDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeChangerTrigger::*)()>(&GlobalNamespace::SizeChangerTrigger::OnPieceDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "OnPieceDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::OnPieceActivate
// Il2CppName: OnPieceActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeChangerTrigger::*)()>(&GlobalNamespace::SizeChangerTrigger::OnPieceActivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "OnPieceActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::OnPieceDeactivate
// Il2CppName: OnPieceDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeChangerTrigger::*)()>(&GlobalNamespace::SizeChangerTrigger::OnPieceDeactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeChangerTrigger*), "OnPieceDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeChangerTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
