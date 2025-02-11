// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine/EventSystems/BaseRaycaster.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.InputSystem.Utilities.InlinedArray`1
#include "UnityEngine/InputSystem/Utilities/InlinedArray_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: UnityEngine::InputSystem::UI
namespace UnityEngine::InputSystem::UI {
  // Forward declaring type: ExtendedPointerEventData
  class ExtendedPointerEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.UI
namespace UnityEngine::InputSystem::UI {
  // Forward declaring type: TrackedDeviceRaycaster
  class TrackedDeviceRaycaster;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*, "UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster");
// Type namespace: UnityEngine.InputSystem.UI
namespace UnityEngine::InputSystem::UI {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.UI.TrackedDeviceRaycaster
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class TrackedDeviceRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
    public:
    // Nested type: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData
    struct RaycastHitData;
    // Nested type: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c
    class $$c;
    // Size: 0x20
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData
    // [TokenAttribute] Offset: FFFFFFFF
    struct RaycastHitData/*, public ::System::ValueType*/ {
      public:
      public:
      // private readonly UnityEngine.UI.Graphic <graphic>k__BackingField
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::UI::Graphic* graphic;
      // Field size check
      static_assert(sizeof(::UnityEngine::UI::Graphic*) == 0x8);
      // private readonly UnityEngine.Vector3 <worldHitPosition>k__BackingField
      // Size: 0xC
      // Offset: 0x8
      ::UnityEngine::Vector3 worldHitPosition;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private readonly UnityEngine.Vector2 <screenPosition>k__BackingField
      // Size: 0x8
      // Offset: 0x14
      ::UnityEngine::Vector2 screenPosition;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
      // private readonly System.Single <distance>k__BackingField
      // Size: 0x4
      // Offset: 0x1C
      float distance;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: RaycastHitData
      constexpr RaycastHitData(::UnityEngine::UI::Graphic* graphic_ = {}, ::UnityEngine::Vector3 worldHitPosition_ = {}, ::UnityEngine::Vector2 screenPosition_ = {}, float distance_ = {}) noexcept : graphic{graphic_}, worldHitPosition{worldHitPosition_}, screenPosition{screenPosition_}, distance{distance_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private readonly UnityEngine.UI.Graphic <graphic>k__BackingField
      [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Graphic*& dyn_$graphic$k__BackingField();
      // Get instance field reference: private readonly UnityEngine.Vector3 <worldHitPosition>k__BackingField
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$worldHitPosition$k__BackingField();
      // Get instance field reference: private readonly UnityEngine.Vector2 <screenPosition>k__BackingField
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$screenPosition$k__BackingField();
      // Get instance field reference: private readonly System.Single <distance>k__BackingField
      [[deprecated("Use field access instead!")]] float& dyn_$distance$k__BackingField();
      // public System.Void .ctor(UnityEngine.UI.Graphic graphic, UnityEngine.Vector3 worldHitPosition, UnityEngine.Vector2 screenPosition, System.Single distance)
      // Offset: 0x51384D4
      // ABORTED: conflicts with another method.  RaycastHitData(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::Vector3 worldHitPosition, ::UnityEngine::Vector2 screenPosition, float distance);
      // public UnityEngine.UI.Graphic get_graphic()
      // Offset: 0x5138648
      ::UnityEngine::UI::Graphic* get_graphic();
      // public UnityEngine.Vector3 get_worldHitPosition()
      // Offset: 0x5138650
      ::UnityEngine::Vector3 get_worldHitPosition();
      // public UnityEngine.Vector2 get_screenPosition()
      // Offset: 0x513865C
      ::UnityEngine::Vector2 get_screenPosition();
      // public System.Single get_distance()
      // Offset: 0x5138664
      float get_distance();
    }; // UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData
    #pragma pack(pop)
    static check_size<sizeof(TrackedDeviceRaycaster::RaycastHitData), 28 + sizeof(float)> __UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_RaycastHitDataSizeCheck;
    static_assert(sizeof(TrackedDeviceRaycaster::RaycastHitData) == 0x20);
    public:
    // private System.Collections.Generic.List`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData> m_RaycastResultsCache
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData>* m_RaycastResultsCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData>*) == 0x8);
    // private System.Boolean m_IgnoreReversedGraphics
    // Size: 0x1
    // Offset: 0x30
    bool m_IgnoreReversedGraphics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_CheckFor2DOcclusion
    // Size: 0x1
    // Offset: 0x31
    bool m_CheckFor2DOcclusion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_CheckFor3DOcclusion
    // Size: 0x1
    // Offset: 0x32
    bool m_CheckFor3DOcclusion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_CheckFor3DOcclusion and: m_MaxDistance
    char __padding3[0x1] = {};
    // private System.Single m_MaxDistance
    // Size: 0x4
    // Offset: 0x34
    float m_MaxDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.LayerMask m_BlockingMask
    // Size: 0x4
    // Offset: 0x38
    ::UnityEngine::LayerMask m_BlockingMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // Padding between fields: m_BlockingMask and: m_Canvas
    char __padding5[0x4] = {};
    // private UnityEngine.Canvas m_Canvas
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Canvas* m_Canvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::Canvas*) == 0x8);
    public:
    // Get static field: static UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster> s_Instances
    static ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*> _get_s_Instances();
    // Set static field: static UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster> s_Instances
    static void _set_s_Instances(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*> value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData> s_SortedGraphics
    static ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData>* _get_s_SortedGraphics();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData> s_SortedGraphics
    static void _set_s_SortedGraphics(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData>* value);
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData> m_RaycastResultsCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData>*& dyn_m_RaycastResultsCache();
    // Get instance field reference: private System.Boolean m_IgnoreReversedGraphics
    [[deprecated("Use field access instead!")]] bool& dyn_m_IgnoreReversedGraphics();
    // Get instance field reference: private System.Boolean m_CheckFor2DOcclusion
    [[deprecated("Use field access instead!")]] bool& dyn_m_CheckFor2DOcclusion();
    // Get instance field reference: private System.Boolean m_CheckFor3DOcclusion
    [[deprecated("Use field access instead!")]] bool& dyn_m_CheckFor3DOcclusion();
    // Get instance field reference: private System.Single m_MaxDistance
    [[deprecated("Use field access instead!")]] float& dyn_m_MaxDistance();
    // Get instance field reference: private UnityEngine.LayerMask m_BlockingMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_m_BlockingMask();
    // Get instance field reference: private UnityEngine.Canvas m_Canvas
    [[deprecated("Use field access instead!")]] ::UnityEngine::Canvas*& dyn_m_Canvas();
    // public UnityEngine.LayerMask get_blockingMask()
    // Offset: 0x5137A5C
    ::UnityEngine::LayerMask get_blockingMask();
    // public System.Void set_blockingMask(UnityEngine.LayerMask value)
    // Offset: 0x5137A64
    void set_blockingMask(::UnityEngine::LayerMask value);
    // public System.Boolean get_checkFor3DOcclusion()
    // Offset: 0x5137A6C
    bool get_checkFor3DOcclusion();
    // public System.Void set_checkFor3DOcclusion(System.Boolean value)
    // Offset: 0x5137A74
    void set_checkFor3DOcclusion(bool value);
    // public System.Boolean get_checkFor2DOcclusion()
    // Offset: 0x5137A80
    bool get_checkFor2DOcclusion();
    // public System.Void set_checkFor2DOcclusion(System.Boolean value)
    // Offset: 0x5137A88
    void set_checkFor2DOcclusion(bool value);
    // public System.Boolean get_ignoreReversedGraphics()
    // Offset: 0x5137A94
    bool get_ignoreReversedGraphics();
    // public System.Void set_ignoreReversedGraphics(System.Boolean value)
    // Offset: 0x5137A9C
    void set_ignoreReversedGraphics(bool value);
    // public System.Single get_maxDistance()
    // Offset: 0x5137AA8
    float get_maxDistance();
    // public System.Void set_maxDistance(System.Single value)
    // Offset: 0x5137AB0
    void set_maxDistance(float value);
    // System.Void PerformRaycast(UnityEngine.InputSystem.UI.ExtendedPointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x5131394
    void PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // private System.Void SortedRaycastGraphics(UnityEngine.Canvas canvas, UnityEngine.Ray ray, System.Collections.Generic.List`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData> results)
    // Offset: 0x5137CD8
    void SortedRaycastGraphics(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData>* results);
    // static private System.Boolean RayIntersectsRectTransform(UnityEngine.RectTransform transform, UnityEngine.Ray ray, out UnityEngine.Vector3 worldPosition, out System.Single distance)
    // Offset: 0x51381DC
    static bool RayIntersectsRectTransform(::UnityEngine::RectTransform* transform, ::UnityEngine::Ray ray, ByRef<::UnityEngine::Vector3> worldPosition, ByRef<float> distance);
    // private UnityEngine.Canvas get_canvas()
    // Offset: 0x51379B4
    ::UnityEngine::Canvas* get_canvas();
    // public System.Void .ctor()
    // Offset: 0x5138528
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackedDeviceRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackedDeviceRaycaster*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x51385B8
    static void _cctor();
    // public override UnityEngine.Camera get_eventCamera()
    // Offset: 0x5137920
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: UnityEngine.Camera BaseRaycaster::get_eventCamera()
    ::UnityEngine::Camera* get_eventCamera();
    // protected override System.Void OnEnable()
    // Offset: 0x5137AB8
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x5137B3C
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::OnDisable()
    void OnDisable();
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x5137C30
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);
  }; // UnityEngine.InputSystem.UI.TrackedDeviceRaycaster
  #pragma pack(pop)
  static check_size<sizeof(TrackedDeviceRaycaster), 64 + sizeof(::UnityEngine::Canvas*)> __UnityEngine_InputSystem_UI_TrackedDeviceRaycasterSizeCheck;
  static_assert(sizeof(TrackedDeviceRaycaster) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData, "UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster/RaycastHitData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_blockingMask
// Il2CppName: get_blockingMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_blockingMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "get_blockingMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_blockingMask
// Il2CppName: set_blockingMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(::UnityEngine::LayerMask)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_blockingMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "set_blockingMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor3DOcclusion
// Il2CppName: get_checkFor3DOcclusion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor3DOcclusion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "get_checkFor3DOcclusion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor3DOcclusion
// Il2CppName: set_checkFor3DOcclusion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor3DOcclusion)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "set_checkFor3DOcclusion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor2DOcclusion
// Il2CppName: get_checkFor2DOcclusion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor2DOcclusion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "get_checkFor2DOcclusion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor2DOcclusion
// Il2CppName: set_checkFor2DOcclusion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor2DOcclusion)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "set_checkFor2DOcclusion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_ignoreReversedGraphics
// Il2CppName: get_ignoreReversedGraphics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_ignoreReversedGraphics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "get_ignoreReversedGraphics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_ignoreReversedGraphics
// Il2CppName: set_ignoreReversedGraphics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_ignoreReversedGraphics)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "set_ignoreReversedGraphics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_maxDistance
// Il2CppName: get_maxDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_maxDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "get_maxDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_maxDistance
// Il2CppName: set_maxDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(float)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_maxDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "set_maxDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::PerformRaycast
// Il2CppName: PerformRaycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::PerformRaycast)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.UI", "ExtendedPointerEventData")->byval_arg;
    static auto* resultAppendList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "PerformRaycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, resultAppendList});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::SortedRaycastGraphics
// Il2CppName: SortedRaycastGraphics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(::UnityEngine::Canvas*, ::UnityEngine::Ray, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData>*)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::SortedRaycastGraphics)> {
  static const MethodInfo* get() {
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster/RaycastHitData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "SortedRaycastGraphics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvas, ray, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RayIntersectsRectTransform
// Il2CppName: RayIntersectsRectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Ray, ByRef<::UnityEngine::Vector3>, ByRef<float>)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RayIntersectsRectTransform)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* worldPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "RayIntersectsRectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, ray, worldPosition, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_canvas
// Il2CppName: get_canvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Canvas* (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_canvas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "get_canvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_eventCamera
// Il2CppName: get_eventCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_eventCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "get_eventCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::Raycast)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* resultAppendList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, resultAppendList});
  }
};
