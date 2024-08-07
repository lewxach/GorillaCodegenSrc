// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IPointable
  class IPointable;
  // Forward declaring type: PointerEvent
  struct PointerEvent;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: PointableDebugGizmos
  class PointableDebugGizmos;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PointableDebugGizmos);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PointableDebugGizmos*, "Oculus.Interaction", "PointableDebugGizmos");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PointableDebugGizmos
  // [TokenAttribute] Offset: FFFFFFFF
  class PointableDebugGizmos : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Interaction::PointableDebugGizmos::PointData
    class PointData;
    public:
    // private UnityEngine.Object _pointable
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* pointable;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x28
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _hoverColor
    // Size: 0x10
    // Offset: 0x2C
    ::UnityEngine::Color hoverColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _selectColor
    // Size: 0x10
    // Offset: 0x3C
    ::UnityEngine::Color selectColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _drawAxes
    // Size: 0x1
    // Offset: 0x4C
    bool drawAxes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: drawAxes and: points
    char __padding4[0x3] = {};
    // private System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Interaction.PointableDebugGizmos/PointData> _points
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::Dictionary_2<int, ::Oculus::Interaction::PointableDebugGizmos::PointData*>* points;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::Oculus::Interaction::PointableDebugGizmos::PointData*>*) == 0x8);
    // private Oculus.Interaction.IPointable Pointable
    // Size: 0x8
    // Offset: 0x58
    ::Oculus::Interaction::IPointable* Pointable;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IPointable*) == 0x8);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x60
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _pointable
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__pointable();
    // Get instance field reference: private System.Single _radius
    [[deprecated("Use field access instead!")]] float& dyn__radius();
    // Get instance field reference: private UnityEngine.Color _hoverColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__hoverColor();
    // Get instance field reference: private UnityEngine.Color _selectColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__selectColor();
    // Get instance field reference: private System.Boolean _drawAxes
    [[deprecated("Use field access instead!")]] bool& dyn__drawAxes();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Interaction.PointableDebugGizmos/PointData> _points
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::Oculus::Interaction::PointableDebugGizmos::PointData*>*& dyn__points();
    // Get instance field reference: private Oculus.Interaction.IPointable Pointable
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IPointable*& dyn_Pointable();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public System.Single get_Radius()
    // Offset: 0x47C2774
    float get_Radius();
    // public System.Void set_Radius(System.Single value)
    // Offset: 0x47C277C
    void set_Radius(float value);
    // public UnityEngine.Color get_HoverColor()
    // Offset: 0x47C2784
    ::UnityEngine::Color get_HoverColor();
    // public System.Void set_HoverColor(UnityEngine.Color value)
    // Offset: 0x47C2790
    void set_HoverColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_SelectColor()
    // Offset: 0x47C279C
    ::UnityEngine::Color get_SelectColor();
    // public System.Void set_SelectColor(UnityEngine.Color value)
    // Offset: 0x47C27A8
    void set_SelectColor(::UnityEngine::Color value);
    // public System.Boolean get_DrawAxes()
    // Offset: 0x47C27B4
    bool get_DrawAxes();
    // public System.Void set_DrawAxes(System.Boolean value)
    // Offset: 0x47C27BC
    void set_DrawAxes(bool value);
    // private System.Void Reset()
    // Offset: 0x47C27C8
    void Reset();
    // protected System.Void Awake()
    // Offset: 0x47C2820
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47C2888
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47C292C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47C2A28
    void OnDisable();
    // private System.Void HandlePointerEventRaised(Oculus.Interaction.PointerEvent evt)
    // Offset: 0x47C2B28
    void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent evt);
    // protected System.Void LateUpdate()
    // Offset: 0x47C2D24
    void LateUpdate();
    // public System.Void InjectAllPointableDebugGizmos(Oculus.Interaction.IPointable pointable)
    // Offset: 0x47C281C
    void InjectAllPointableDebugGizmos(::Oculus::Interaction::IPointable* pointable);
    // public System.Void InjectPointable(Oculus.Interaction.IPointable pointable)
    // Offset: 0x47C32F4
    void InjectPointable(::Oculus::Interaction::IPointable* pointable);
    // public System.Void .ctor()
    // Offset: 0x47C33C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointableDebugGizmos* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PointableDebugGizmos::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointableDebugGizmos*, creationType>()));
    }
  }; // Oculus.Interaction.PointableDebugGizmos
  #pragma pack(pop)
  static check_size<sizeof(PointableDebugGizmos), 96 + sizeof(bool)> __Oculus_Interaction_PointableDebugGizmosSizeCheck;
  static_assert(sizeof(PointableDebugGizmos) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::get_Radius
// Il2CppName: get_Radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PointableDebugGizmos::*)()>(&Oculus::Interaction::PointableDebugGizmos::get_Radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "get_Radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::set_Radius
// Il2CppName: set_Radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)(float)>(&Oculus::Interaction::PointableDebugGizmos::set_Radius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "set_Radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::get_HoverColor
// Il2CppName: get_HoverColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::PointableDebugGizmos::*)()>(&Oculus::Interaction::PointableDebugGizmos::get_HoverColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "get_HoverColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::set_HoverColor
// Il2CppName: set_HoverColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)(::UnityEngine::Color)>(&Oculus::Interaction::PointableDebugGizmos::set_HoverColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "set_HoverColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::get_SelectColor
// Il2CppName: get_SelectColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::PointableDebugGizmos::*)()>(&Oculus::Interaction::PointableDebugGizmos::get_SelectColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "get_SelectColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::set_SelectColor
// Il2CppName: set_SelectColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)(::UnityEngine::Color)>(&Oculus::Interaction::PointableDebugGizmos::set_SelectColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "set_SelectColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::get_DrawAxes
// Il2CppName: get_DrawAxes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PointableDebugGizmos::*)()>(&Oculus::Interaction::PointableDebugGizmos::get_DrawAxes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "get_DrawAxes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::set_DrawAxes
// Il2CppName: set_DrawAxes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)(bool)>(&Oculus::Interaction::PointableDebugGizmos::set_DrawAxes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "set_DrawAxes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)()>(&Oculus::Interaction::PointableDebugGizmos::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)()>(&Oculus::Interaction::PointableDebugGizmos::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)()>(&Oculus::Interaction::PointableDebugGizmos::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)()>(&Oculus::Interaction::PointableDebugGizmos::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)()>(&Oculus::Interaction::PointableDebugGizmos::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::HandlePointerEventRaised
// Il2CppName: HandlePointerEventRaised
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)(::Oculus::Interaction::PointerEvent)>(&Oculus::Interaction::PointableDebugGizmos::HandlePointerEventRaised)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PointerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "HandlePointerEventRaised", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)()>(&Oculus::Interaction::PointableDebugGizmos::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::InjectAllPointableDebugGizmos
// Il2CppName: InjectAllPointableDebugGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)(::Oculus::Interaction::IPointable*)>(&Oculus::Interaction::PointableDebugGizmos::InjectAllPointableDebugGizmos)> {
  static const MethodInfo* get() {
    static auto* pointable = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IPointable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "InjectAllPointableDebugGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointable});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::InjectPointable
// Il2CppName: InjectPointable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableDebugGizmos::*)(::Oculus::Interaction::IPointable*)>(&Oculus::Interaction::PointableDebugGizmos::InjectPointable)> {
  static const MethodInfo* get() {
    static auto* pointable = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IPointable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableDebugGizmos*), "InjectPointable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointable});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableDebugGizmos::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
