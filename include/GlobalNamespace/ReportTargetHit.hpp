// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SRand
#include "GlobalNamespace/SRand.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightningDispatcherEvent
  class LightningDispatcherEvent;
}
// Forward declaring namespace: NetSynchrony
namespace NetSynchrony {
  // Forward declaring type: RandomDispatcher
  class RandomDispatcher;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ReportTargetHit
  class ReportTargetHit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ReportTargetHit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReportTargetHit*, "", "ReportTargetHit");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: ReportTargetHit
  // [TokenAttribute] Offset: FFFFFFFF
  class ReportTargetHit : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single minseekFreq
    // Size: 0x4
    // Offset: 0x20
    float minseekFreq;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single maxseekFreq
    // Size: 0x4
    // Offset: 0x24
    float maxseekFreq;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Transform[] targets
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Transform*> targets;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private LightningDispatcherEvent colliderFound
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::LightningDispatcherEvent* colliderFound;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightningDispatcherEvent*) == 0x8);
    // private System.Single timeSinceSeek
    // Size: 0x4
    // Offset: 0x38
    float timeSinceSeek;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single seekFreq
    // Size: 0x4
    // Offset: 0x3C
    float seekFreq;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private NetSynchrony.RandomDispatcher nsRand
    // Size: 0x8
    // Offset: 0x40
    ::NetSynchrony::RandomDispatcher* nsRand;
    // Field size check
    static_assert(sizeof(::NetSynchrony::RandomDispatcher*) == 0x8);
    public:
    // Get static field: static private SRand rand
    static ::GlobalNamespace::SRand _get_rand();
    // Set static field: static private SRand rand
    static void _set_rand(::GlobalNamespace::SRand value);
    // Get instance field reference: private System.Single minseekFreq
    [[deprecated("Use field access instead!")]] float& dyn_minseekFreq();
    // Get instance field reference: private System.Single maxseekFreq
    [[deprecated("Use field access instead!")]] float& dyn_maxseekFreq();
    // Get instance field reference: private UnityEngine.Transform[] targets
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_targets();
    // Get instance field reference: private LightningDispatcherEvent colliderFound
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightningDispatcherEvent*& dyn_colliderFound();
    // Get instance field reference: private System.Single timeSinceSeek
    [[deprecated("Use field access instead!")]] float& dyn_timeSinceSeek();
    // Get instance field reference: private System.Single seekFreq
    [[deprecated("Use field access instead!")]] float& dyn_seekFreq();
    // Get instance field reference: private NetSynchrony.RandomDispatcher nsRand
    [[deprecated("Use field access instead!")]] ::NetSynchrony::RandomDispatcher*& dyn_nsRand();
    // private System.Void Start()
    // Offset: 0x27A1FC0
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x27A2028
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x27A20F8
    void OnDisable();
    // private System.Void NsRand_Dispatch(NetSynchrony.RandomDispatcher randomDispatcher)
    // Offset: 0x27A21C8
    void NsRand_Dispatch(::NetSynchrony::RandomDispatcher* randomDispatcher);
    // private System.Void Update()
    // Offset: 0x27A23BC
    void Update();
    // private System.Void seek()
    // Offset: 0x27A21CC
    void seek();
    // public System.Void .ctor()
    // Offset: 0x27A2494
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReportTargetHit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ReportTargetHit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReportTargetHit*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x27A24A8
    static void _cctor();
  }; // ReportTargetHit
  #pragma pack(pop)
  static check_size<sizeof(ReportTargetHit), 64 + sizeof(::NetSynchrony::RandomDispatcher*)> __GlobalNamespace_ReportTargetHitSizeCheck;
  static_assert(sizeof(ReportTargetHit) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ReportTargetHit::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReportTargetHit::*)()>(&GlobalNamespace::ReportTargetHit::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReportTargetHit*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReportTargetHit::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReportTargetHit::*)()>(&GlobalNamespace::ReportTargetHit::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReportTargetHit*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReportTargetHit::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReportTargetHit::*)()>(&GlobalNamespace::ReportTargetHit::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReportTargetHit*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReportTargetHit::NsRand_Dispatch
// Il2CppName: NsRand_Dispatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReportTargetHit::*)(::NetSynchrony::RandomDispatcher*)>(&GlobalNamespace::ReportTargetHit::NsRand_Dispatch)> {
  static const MethodInfo* get() {
    static auto* randomDispatcher = &::il2cpp_utils::GetClassFromName("NetSynchrony", "RandomDispatcher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReportTargetHit*), "NsRand_Dispatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{randomDispatcher});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReportTargetHit::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReportTargetHit::*)()>(&GlobalNamespace::ReportTargetHit::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReportTargetHit*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReportTargetHit::seek
// Il2CppName: seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReportTargetHit::*)()>(&GlobalNamespace::ReportTargetHit::seek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReportTargetHit*), "seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReportTargetHit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ReportTargetHit::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ReportTargetHit::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReportTargetHit*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
