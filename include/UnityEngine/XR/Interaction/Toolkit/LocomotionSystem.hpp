// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: LocomotionProvider
  class LocomotionProvider;
  // Forward declaring type: RequestResult
  struct RequestResult;
  // Forward declaring type: XRRig
  class XRRig;
}
// Forward declaring namespace: Unity::XR::CoreUtils
namespace Unity::XR::CoreUtils {
  // Forward declaring type: XROrigin
  class XROrigin;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: LocomotionSystem
  class LocomotionSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*, "UnityEngine.XR.Interaction.Toolkit", "LocomotionSystem");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class LocomotionSystem : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.LocomotionProvider m_CurrentExclusiveProvider
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* m_CurrentExclusiveProvider;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*) == 0x8);
    // private System.Single m_TimeMadeExclusive
    // Size: 0x4
    // Offset: 0x28
    float m_TimeMadeExclusive;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Timeout
    // Size: 0x4
    // Offset: 0x2C
    float m_Timeout;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Unity.XR.CoreUtils.XROrigin m_XROrigin
    // Size: 0x8
    // Offset: 0x30
    ::Unity::XR::CoreUtils::XROrigin* m_XROrigin;
    // Field size check
    static_assert(sizeof(::Unity::XR::CoreUtils::XROrigin*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.LocomotionProvider m_CurrentExclusiveProvider
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*& dyn_m_CurrentExclusiveProvider();
    // Get instance field reference: private System.Single m_TimeMadeExclusive
    [[deprecated("Use field access instead!")]] float& dyn_m_TimeMadeExclusive();
    // Get instance field reference: private System.Single m_Timeout
    [[deprecated("Use field access instead!")]] float& dyn_m_Timeout();
    // Get instance field reference: private Unity.XR.CoreUtils.XROrigin m_XROrigin
    [[deprecated("Use field access instead!")]] ::Unity::XR::CoreUtils::XROrigin*& dyn_m_XROrigin();
    // public System.Single get_timeout()
    // Offset: 0x540DF10
    float get_timeout();
    // public System.Void set_timeout(System.Single value)
    // Offset: 0x540DF18
    void set_timeout(float value);
    // public Unity.XR.CoreUtils.XROrigin get_xrOrigin()
    // Offset: 0x540DF20
    ::Unity::XR::CoreUtils::XROrigin* get_xrOrigin();
    // public System.Void set_xrOrigin(Unity.XR.CoreUtils.XROrigin value)
    // Offset: 0x540DF28
    void set_xrOrigin(::Unity::XR::CoreUtils::XROrigin* value);
    // public System.Boolean get_busy()
    // Offset: 0x540DB74
    bool get_busy();
    // protected System.Void Awake()
    // Offset: 0x540DF30
    void Awake();
    // protected System.Void Update()
    // Offset: 0x540DFDC
    void Update();
    // public UnityEngine.XR.Interaction.Toolkit.RequestResult RequestExclusiveOperation(UnityEngine.XR.Interaction.Toolkit.LocomotionProvider provider)
    // Offset: 0x540DBD4
    ::UnityEngine::XR::Interaction::Toolkit::RequestResult RequestExclusiveOperation(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* provider);
    // private System.Void ResetExclusivity()
    // Offset: 0x540E07C
    void ResetExclusivity();
    // public UnityEngine.XR.Interaction.Toolkit.RequestResult FinishExclusiveOperation(UnityEngine.XR.Interaction.Toolkit.LocomotionProvider provider)
    // Offset: 0x540DCCC
    ::UnityEngine::XR::Interaction::Toolkit::RequestResult FinishExclusiveOperation(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* provider);
    // public UnityEngine.XR.Interaction.Toolkit.XRRig get_xrRig()
    // Offset: 0x540E0A0
    ::UnityEngine::XR::Interaction::Toolkit::XRRig* get_xrRig();
    // public System.Void set_xrRig(UnityEngine.XR.Interaction.Toolkit.XRRig value)
    // Offset: 0x540E11C
    void set_xrRig(::UnityEngine::XR::Interaction::Toolkit::XRRig* value);
    // public System.Boolean get_Busy()
    // Offset: 0x540E124
    bool get_Busy();
    // public System.Void .ctor()
    // Offset: 0x540E128
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocomotionSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocomotionSystem*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
  #pragma pack(pop)
  static check_size<sizeof(LocomotionSystem), 48 + sizeof(::Unity::XR::CoreUtils::XROrigin*)> __UnityEngine_XR_Interaction_Toolkit_LocomotionSystemSizeCheck;
  static_assert(sizeof(LocomotionSystem) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_timeout
// Il2CppName: get_timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_timeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "get_timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_timeout
// Il2CppName: set_timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_timeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "set_timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_xrOrigin
// Il2CppName: get_xrOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::CoreUtils::XROrigin* (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_xrOrigin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "get_xrOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_xrOrigin
// Il2CppName: set_xrOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(::Unity::XR::CoreUtils::XROrigin*)>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_xrOrigin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Unity.XR.CoreUtils", "XROrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "set_xrOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_busy
// Il2CppName: get_busy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_busy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "get_busy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::RequestExclusiveOperation
// Il2CppName: RequestExclusiveOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::RequestResult (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*)>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::RequestExclusiveOperation)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "LocomotionProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "RequestExclusiveOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::ResetExclusivity
// Il2CppName: ResetExclusivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::ResetExclusivity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "ResetExclusivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::FinishExclusiveOperation
// Il2CppName: FinishExclusiveOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::RequestResult (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*)>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::FinishExclusiveOperation)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "LocomotionProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "FinishExclusiveOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_xrRig
// Il2CppName: get_xrRig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRRig* (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_xrRig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "get_xrRig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_xrRig
// Il2CppName: set_xrRig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)(::UnityEngine::XR::Interaction::Toolkit::XRRig*)>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::set_xrRig)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRRig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "set_xrRig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_Busy
// Il2CppName: get_Busy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::*)()>(&UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::get_Busy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*), "get_Busy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::LocomotionSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!