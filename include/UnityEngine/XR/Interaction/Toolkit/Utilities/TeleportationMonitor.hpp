// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::Utilities
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: TeleportationProvider
  class TeleportationProvider;
  // Forward declaring type: IXRInteractor
  class IXRInteractor;
  // Forward declaring type: LocomotionSystem
  class LocomotionSystem;
  // Forward declaring type: LocomotionProvider
  class LocomotionProvider;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
  // Forward declaring type: LinkedPool`1<T>
  template<typename T>
  class LinkedPool_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
  // Forward declaring type: TeleportationMonitor
  class TeleportationMonitor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "TeleportationMonitor");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportationMonitor : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::$$c
    class $$c;
    public:
    // private System.Action`1<UnityEngine.Pose> teleported
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::UnityEngine::Pose>* teleported;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Pose>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.TeleportationProvider,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>> m_TeleportInteractors
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>* m_TeleportInteractors;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem,UnityEngine.Pose> m_OriginPosesBeforeTeleport
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*, ::UnityEngine::Pose>* m_OriginPosesBeforeTeleport;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*, ::UnityEngine::Pose>*) == 0x8);
    public:
    // Get static field: static private readonly UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.TeleportationProvider,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>>> s_TeleportInteractorsPool
    static ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*>* _get_s_TeleportInteractorsPool();
    // Set static field: static private readonly UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.TeleportationProvider,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>>> s_TeleportInteractorsPool
    static void _set_s_TeleportInteractorsPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*>* value);
    // Get static field: static private readonly UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem,UnityEngine.Pose>> s_OriginPosesBeforeTeleportPool
    static ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*, ::UnityEngine::Pose>*>* _get_s_OriginPosesBeforeTeleportPool();
    // Set static field: static private readonly UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem,UnityEngine.Pose>> s_OriginPosesBeforeTeleportPool
    static void _set_s_OriginPosesBeforeTeleportPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*, ::UnityEngine::Pose>*>* value);
    // Get static field: static private UnityEngine.XR.Interaction.Toolkit.TeleportationProvider[] s_TeleportationProvidersCache
    static ::ArrayW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*> _get_s_TeleportationProvidersCache();
    // Set static field: static private UnityEngine.XR.Interaction.Toolkit.TeleportationProvider[] s_TeleportationProvidersCache
    static void _set_s_TeleportationProvidersCache(::ArrayW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*> value);
    // Get instance field reference: private System.Action`1<UnityEngine.Pose> teleported
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Pose>*& dyn_teleported();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.TeleportationProvider,System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractor>> m_TeleportInteractors
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*& dyn_m_TeleportInteractors();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem,UnityEngine.Pose> m_OriginPosesBeforeTeleport
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*, ::UnityEngine::Pose>*& dyn_m_OriginPosesBeforeTeleport();
    // public System.Void add_teleported(System.Action`1<UnityEngine.Pose> value)
    // Offset: 0x5416348
    void add_teleported(::System::Action_1<::UnityEngine::Pose>* value);
    // public System.Void remove_teleported(System.Action`1<UnityEngine.Pose> value)
    // Offset: 0x54163F8
    void remove_teleported(::System::Action_1<::UnityEngine::Pose>* value);
    // public System.Void AddInteractor(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor)
    // Offset: 0x54164A8
    void AddInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);
    // public System.Void RemoveInteractor(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor)
    // Offset: 0x5416AA0
    void RemoveInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);
    // static private System.Boolean TryGetOriginTransform(UnityEngine.XR.Interaction.Toolkit.LocomotionProvider locomotionProvider, out UnityEngine.Transform originTransform)
    // Offset: 0x54169D4
    static bool TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* locomotionProvider, ByRef<::UnityEngine::Transform*> originTransform);
    // static private System.Boolean TryGetOriginTransform(UnityEngine.XR.Interaction.Toolkit.LocomotionSystem system, out UnityEngine.Transform originTransform)
    // Offset: 0x5416E84
    static bool TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* system, ByRef<::UnityEngine::Transform*> originTransform);
    // static private System.Boolean FindTeleportationProviders()
    // Offset: 0x54168DC
    static bool FindTeleportationProviders();
    // private System.Void OnBeginTeleportation(UnityEngine.XR.Interaction.Toolkit.LocomotionSystem locomotionSystem)
    // Offset: 0x5416F60
    void OnBeginTeleportation(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* locomotionSystem);
    // private System.Void OnEndTeleportation(UnityEngine.XR.Interaction.Toolkit.LocomotionSystem locomotionSystem)
    // Offset: 0x5417090
    void OnEndTeleportation(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* locomotionSystem);
    // public System.Void .ctor()
    // Offset: 0x54172A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportationMonitor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportationMonitor*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x54172A8
    static void _cctor();
  }; // UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor
  #pragma pack(pop)
  static check_size<sizeof(TeleportationMonitor), 32 + sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*, ::UnityEngine::Pose>*)> __UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitorSizeCheck;
  static_assert(sizeof(TeleportationMonitor) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::add_teleported
// Il2CppName: add_teleported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::System::Action_1<::UnityEngine::Pose>*)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::add_teleported)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*), "add_teleported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::remove_teleported
// Il2CppName: remove_teleported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::System::Action_1<::UnityEngine::Pose>*)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::remove_teleported)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*), "remove_teleported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::AddInteractor
// Il2CppName: AddInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::AddInteractor)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*), "AddInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::RemoveInteractor
// Il2CppName: RemoveInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::RemoveInteractor)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*), "RemoveInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::TryGetOriginTransform
// Il2CppName: TryGetOriginTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*, ByRef<::UnityEngine::Transform*>)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::TryGetOriginTransform)> {
  static const MethodInfo* get() {
    static auto* locomotionProvider = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "LocomotionProvider")->byval_arg;
    static auto* originTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*), "TryGetOriginTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locomotionProvider, originTransform});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::TryGetOriginTransform
// Il2CppName: TryGetOriginTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*, ByRef<::UnityEngine::Transform*>)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::TryGetOriginTransform)> {
  static const MethodInfo* get() {
    static auto* system = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "LocomotionSystem")->byval_arg;
    static auto* originTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*), "TryGetOriginTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{system, originTransform});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::FindTeleportationProviders
// Il2CppName: FindTeleportationProviders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::FindTeleportationProviders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*), "FindTeleportationProviders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnBeginTeleportation
// Il2CppName: OnBeginTeleportation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnBeginTeleportation)> {
  static const MethodInfo* get() {
    static auto* locomotionSystem = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "LocomotionSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*), "OnBeginTeleportation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locomotionSystem});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnEndTeleportation
// Il2CppName: OnEndTeleportation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*)>(&UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnEndTeleportation)> {
  static const MethodInfo* get() {
    static auto* locomotionSystem = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "LocomotionSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*), "OnEndTeleportation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locomotionSystem});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
