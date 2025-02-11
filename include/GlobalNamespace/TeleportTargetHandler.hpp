// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TeleportSupport
#include "GlobalNamespace/TeleportSupport.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: LocomotionTeleport
#include "GlobalNamespace/LocomotionTeleport.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Skipping declaration: Nullable`1 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TeleportTargetHandler
  class TeleportTargetHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TeleportTargetHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportTargetHandler*, "", "TeleportTargetHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: TeleportTargetHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportTargetHandler : public ::GlobalNamespace::TeleportSupport {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x2C
    char ___base_padding[0x3] = {};
    // Nested type: ::GlobalNamespace::TeleportTargetHandler::$TargetAimCoroutine$d__7
    class $TargetAimCoroutine$d__7;
    public:
    // public UnityEngine.LayerMask AimCollisionLayerMask
    // Size: 0x4
    // Offset: 0x2C
    ::UnityEngine::LayerMask AimCollisionLayerMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // protected readonly LocomotionTeleport/AimData AimData
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::LocomotionTeleport::AimData* AimData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LocomotionTeleport::AimData*) == 0x8);
    // private readonly System.Action _startAimAction
    // Size: 0x8
    // Offset: 0x38
    ::System::Action* startAimAction;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Vector3> _aimPoints
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* aimPoints;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    public:
    // static field const value: static private System.Single ERROR_MARGIN
    static constexpr const float ERROR_MARGIN = 0.1;
    // Get static field: static private System.Single ERROR_MARGIN
    static float _get_ERROR_MARGIN();
    // Set static field: static private System.Single ERROR_MARGIN
    static void _set_ERROR_MARGIN(float value);
    // Get instance field reference: public UnityEngine.LayerMask AimCollisionLayerMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_AimCollisionLayerMask();
    // Get instance field reference: protected readonly LocomotionTeleport/AimData AimData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LocomotionTeleport::AimData*& dyn_AimData();
    // Get instance field reference: private readonly System.Action _startAimAction
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn__startAimAction();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Vector3> _aimPoints
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn__aimPoints();
    // private System.Collections.IEnumerator TargetAimCoroutine()
    // Offset: 0x2925DC8
    ::System::Collections::IEnumerator* TargetAimCoroutine();
    // protected System.Void ResetAimData()
    // Offset: 0x2925E5C
    void ResetAimData();
    // protected System.Boolean ConsiderTeleport(UnityEngine.Vector3 start, ref UnityEngine.Vector3 end)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ConsiderTeleport(::UnityEngine::Vector3 start, ByRef<::UnityEngine::Vector3> end);
    // public System.Nullable`1<UnityEngine.Vector3> ConsiderDestination(UnityEngine.Vector3 location)
    // Offset: 0x2925E74
    ::System::Nullable_1<::UnityEngine::Vector3> ConsiderDestination(::UnityEngine::Vector3 location);
    // private System.Void <.ctor>b__3_0()
    // Offset: 0x2925FC0
    void $_ctor$b__3_0();
    // protected System.Void .ctor()
    // Offset: 0x2925C64
    // Implemented from: TeleportSupport
    // Base method: System.Void TeleportSupport::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportTargetHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TeleportTargetHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportTargetHandler*, creationType>()));
    }
    // protected override System.Void AddEventHandlers()
    // Offset: 0x2925D7C
    // Implemented from: TeleportSupport
    // Base method: System.Void TeleportSupport::AddEventHandlers()
    void AddEventHandlers();
    // protected override System.Void RemoveEventHandlers()
    // Offset: 0x2925DA4
    // Implemented from: TeleportSupport
    // Base method: System.Void TeleportSupport::RemoveEventHandlers()
    void RemoveEventHandlers();
  }; // TeleportTargetHandler
  #pragma pack(pop)
  static check_size<sizeof(TeleportTargetHandler), 64 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)> __GlobalNamespace_TeleportTargetHandlerSizeCheck;
  static_assert(sizeof(TeleportTargetHandler) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandler::TargetAimCoroutine
// Il2CppName: TargetAimCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::TeleportTargetHandler::*)()>(&GlobalNamespace::TeleportTargetHandler::TargetAimCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandler*), "TargetAimCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandler::ResetAimData
// Il2CppName: ResetAimData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportTargetHandler::*)()>(&GlobalNamespace::TeleportTargetHandler::ResetAimData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandler*), "ResetAimData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandler::ConsiderTeleport
// Il2CppName: ConsiderTeleport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TeleportTargetHandler::*)(::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::TeleportTargetHandler::ConsiderTeleport)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandler*), "ConsiderTeleport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandler::ConsiderDestination
// Il2CppName: ConsiderDestination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (GlobalNamespace::TeleportTargetHandler::*)(::UnityEngine::Vector3)>(&GlobalNamespace::TeleportTargetHandler::ConsiderDestination)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandler*), "ConsiderDestination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandler::$_ctor$b__3_0
// Il2CppName: <.ctor>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportTargetHandler::*)()>(&GlobalNamespace::TeleportTargetHandler::$_ctor$b__3_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandler*), "<.ctor>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandler::AddEventHandlers
// Il2CppName: AddEventHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportTargetHandler::*)()>(&GlobalNamespace::TeleportTargetHandler::AddEventHandlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandler*), "AddEventHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandler::RemoveEventHandlers
// Il2CppName: RemoveEventHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportTargetHandler::*)()>(&GlobalNamespace::TeleportTargetHandler::RemoveEventHandlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandler*), "RemoveEventHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
