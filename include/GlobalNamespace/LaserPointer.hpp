// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRCursor
#include "GlobalNamespace/OVRCursor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: LaserBeamBehavior because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LaserPointer
  class LaserPointer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LaserPointer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LaserPointer*, "", "LaserPointer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: LaserPointer
  // [TokenAttribute] Offset: FFFFFFFF
  class LaserPointer : public ::GlobalNamespace::OVRCursor {
    public:
    // Nested type: ::GlobalNamespace::LaserPointer::LaserBeamBehavior
    struct LaserBeamBehavior;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LaserPointer/LaserBeamBehavior
    // [TokenAttribute] Offset: FFFFFFFF
    struct LaserBeamBehavior/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: LaserBeamBehavior
      constexpr LaserBeamBehavior(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LaserPointer/LaserBeamBehavior On
      static constexpr const int On = 0;
      // Get static field: static public LaserPointer/LaserBeamBehavior On
      static ::GlobalNamespace::LaserPointer::LaserBeamBehavior _get_On();
      // Set static field: static public LaserPointer/LaserBeamBehavior On
      static void _set_On(::GlobalNamespace::LaserPointer::LaserBeamBehavior value);
      // static field const value: static public LaserPointer/LaserBeamBehavior Off
      static constexpr const int Off = 1;
      // Get static field: static public LaserPointer/LaserBeamBehavior Off
      static ::GlobalNamespace::LaserPointer::LaserBeamBehavior _get_Off();
      // Set static field: static public LaserPointer/LaserBeamBehavior Off
      static void _set_Off(::GlobalNamespace::LaserPointer::LaserBeamBehavior value);
      // static field const value: static public LaserPointer/LaserBeamBehavior OnWhenHitTarget
      static constexpr const int OnWhenHitTarget = 2;
      // Get static field: static public LaserPointer/LaserBeamBehavior OnWhenHitTarget
      static ::GlobalNamespace::LaserPointer::LaserBeamBehavior _get_OnWhenHitTarget();
      // Set static field: static public LaserPointer/LaserBeamBehavior OnWhenHitTarget
      static void _set_OnWhenHitTarget(::GlobalNamespace::LaserPointer::LaserBeamBehavior value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // LaserPointer/LaserBeamBehavior
    #pragma pack(pop)
    static check_size<sizeof(LaserPointer::LaserBeamBehavior), 0 + sizeof(int)> __GlobalNamespace_LaserPointer_LaserBeamBehaviorSizeCheck;
    static_assert(sizeof(LaserPointer::LaserBeamBehavior) == 0x4);
    public:
    // public UnityEngine.GameObject cursorVisual
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* cursorVisual;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Single maxLength
    // Size: 0x4
    // Offset: 0x28
    float maxLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private LaserPointer/LaserBeamBehavior _laserBeamBehavior
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::LaserPointer::LaserBeamBehavior laserBeamBehavior;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LaserPointer::LaserBeamBehavior) == 0x4);
    // private System.Boolean m_restoreOnInputAcquired
    // Size: 0x1
    // Offset: 0x30
    bool m_restoreOnInputAcquired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_restoreOnInputAcquired and: startPoint
    char __padding3[0x3] = {};
    // private UnityEngine.Vector3 _startPoint
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 startPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _forward
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 forward;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _endPoint
    // Size: 0xC
    // Offset: 0x4C
    ::UnityEngine::Vector3 endPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _hitTarget
    // Size: 0x1
    // Offset: 0x58
    bool hitTarget;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hitTarget and: lineRenderer
    char __padding7[0x7] = {};
    // private UnityEngine.LineRenderer lineRenderer
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::LineRenderer* lineRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.GameObject cursorVisual
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_cursorVisual();
    // Get instance field reference: public System.Single maxLength
    [[deprecated("Use field access instead!")]] float& dyn_maxLength();
    // Get instance field reference: private LaserPointer/LaserBeamBehavior _laserBeamBehavior
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LaserPointer::LaserBeamBehavior& dyn__laserBeamBehavior();
    // Get instance field reference: private System.Boolean m_restoreOnInputAcquired
    [[deprecated("Use field access instead!")]] bool& dyn_m_restoreOnInputAcquired();
    // Get instance field reference: private UnityEngine.Vector3 _startPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__startPoint();
    // Get instance field reference: private UnityEngine.Vector3 _forward
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__forward();
    // Get instance field reference: private UnityEngine.Vector3 _endPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__endPoint();
    // Get instance field reference: private System.Boolean _hitTarget
    [[deprecated("Use field access instead!")]] bool& dyn__hitTarget();
    // Get instance field reference: private UnityEngine.LineRenderer lineRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn_lineRenderer();
    // public System.Void set_laserBeamBehavior(LaserPointer/LaserBeamBehavior value)
    // Offset: 0x291C424
    void set_laserBeamBehavior(::GlobalNamespace::LaserPointer::LaserBeamBehavior value);
    // public LaserPointer/LaserBeamBehavior get_laserBeamBehavior()
    // Offset: 0x291E6DC
    ::GlobalNamespace::LaserPointer::LaserBeamBehavior get_laserBeamBehavior();
    // private System.Void Awake()
    // Offset: 0x291E6E4
    void Awake();
    // private System.Void Start()
    // Offset: 0x291E73C
    void Start();
    // private System.Void LateUpdate()
    // Offset: 0x291E8D8
    void LateUpdate();
    // private System.Void UpdateLaserBeam(UnityEngine.Vector3 start, UnityEngine.Vector3 end)
    // Offset: 0x291EA78
    void UpdateLaserBeam(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end);
    // private System.Void OnDisable()
    // Offset: 0x291EB88
    void OnDisable();
    // public System.Void OnInputFocusLost()
    // Offset: 0x291EC0C
    void OnInputFocusLost();
    // public System.Void OnInputFocusAcquired()
    // Offset: 0x291ECCC
    void OnInputFocusAcquired();
    // private System.Void OnDestroy()
    // Offset: 0x291ED74
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x291EE54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LaserPointer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LaserPointer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LaserPointer*, creationType>()));
    }
    // public override System.Void SetCursorStartDest(UnityEngine.Vector3 start, UnityEngine.Vector3 dest, UnityEngine.Vector3 normal)
    // Offset: 0x291E86C
    // Implemented from: OVRCursor
    // Base method: System.Void OVRCursor::SetCursorStartDest(UnityEngine.Vector3 start, UnityEngine.Vector3 dest, UnityEngine.Vector3 normal)
    void SetCursorStartDest(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dest, ::UnityEngine::Vector3 normal);
    // public override System.Void SetCursorRay(UnityEngine.Transform t)
    // Offset: 0x291E888
    // Implemented from: OVRCursor
    // Base method: System.Void OVRCursor::SetCursorRay(UnityEngine.Transform t)
    void SetCursorRay(::UnityEngine::Transform* t);
  }; // LaserPointer
  #pragma pack(pop)
  static check_size<sizeof(LaserPointer), 96 + sizeof(::UnityEngine::LineRenderer*)> __GlobalNamespace_LaserPointerSizeCheck;
  static_assert(sizeof(LaserPointer) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LaserPointer::LaserBeamBehavior, "", "LaserPointer/LaserBeamBehavior");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::set_laserBeamBehavior
// Il2CppName: set_laserBeamBehavior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LaserPointer::*)(::GlobalNamespace::LaserPointer::LaserBeamBehavior)>(&GlobalNamespace::LaserPointer::set_laserBeamBehavior)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "LaserPointer/LaserBeamBehavior")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "set_laserBeamBehavior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::get_laserBeamBehavior
// Il2CppName: get_laserBeamBehavior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LaserPointer::LaserBeamBehavior (GlobalNamespace::LaserPointer::*)()>(&GlobalNamespace::LaserPointer::get_laserBeamBehavior)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "get_laserBeamBehavior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LaserPointer::*)()>(&GlobalNamespace::LaserPointer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LaserPointer::*)()>(&GlobalNamespace::LaserPointer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LaserPointer::*)()>(&GlobalNamespace::LaserPointer::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::UpdateLaserBeam
// Il2CppName: UpdateLaserBeam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LaserPointer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::LaserPointer::UpdateLaserBeam)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "UpdateLaserBeam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LaserPointer::*)()>(&GlobalNamespace::LaserPointer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::OnInputFocusLost
// Il2CppName: OnInputFocusLost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LaserPointer::*)()>(&GlobalNamespace::LaserPointer::OnInputFocusLost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "OnInputFocusLost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::OnInputFocusAcquired
// Il2CppName: OnInputFocusAcquired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LaserPointer::*)()>(&GlobalNamespace::LaserPointer::OnInputFocusAcquired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "OnInputFocusAcquired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LaserPointer::*)()>(&GlobalNamespace::LaserPointer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::SetCursorStartDest
// Il2CppName: SetCursorStartDest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LaserPointer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::LaserPointer::SetCursorStartDest)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "SetCursorStartDest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, dest, normal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LaserPointer::SetCursorRay
// Il2CppName: SetCursorRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LaserPointer::*)(::UnityEngine::Transform*)>(&GlobalNamespace::LaserPointer::SetCursorRay)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LaserPointer*), "SetCursorRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
