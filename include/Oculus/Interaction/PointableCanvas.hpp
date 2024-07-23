// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PointableElement
#include "Oculus/Interaction/PointableElement.hpp"
// Including type: Oculus.Interaction.IPointableCanvas
#include "Oculus/Interaction/IPointableCanvas.hpp"
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
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: PointableCanvas
  class PointableCanvas;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PointableCanvas);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PointableCanvas*, "Oculus.Interaction", "PointableCanvas");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PointableCanvas
  // [TokenAttribute] Offset: FFFFFFFF
  class PointableCanvas : public ::Oculus::Interaction::PointableElement/*, public ::Oculus::Interaction::IPointableCanvas*/ {
    public:
    // Writing base type padding for base size: 0x61 to desired offset: 0x68
    char ___base_padding[0x7] = {};
    public:
    // private UnityEngine.Canvas _canvas
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Canvas* canvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::Canvas*) == 0x8);
    // private System.Boolean _registered
    // Size: 0x1
    // Offset: 0x70
    bool registered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IPointableCanvas
    operator ::Oculus::Interaction::IPointableCanvas() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IPointableCanvas*>(this);
    }
    // Get instance field reference: private UnityEngine.Canvas _canvas
    [[deprecated("Use field access instead!")]] ::UnityEngine::Canvas*& dyn__canvas();
    // Get instance field reference: private System.Boolean _registered
    [[deprecated("Use field access instead!")]] bool& dyn__registered();
    // public UnityEngine.Canvas get_Canvas()
    // Offset: 0x47D6954
    ::UnityEngine::Canvas* get_Canvas();
    // private System.Void Register()
    // Offset: 0x47D6964
    void Register();
    // private System.Void Unregister()
    // Offset: 0x47D69D8
    void Unregister();
    // public System.Void InjectAllPointableCanvas(UnityEngine.Canvas canvas)
    // Offset: 0x47D6ABC
    void InjectAllPointableCanvas(::UnityEngine::Canvas* canvas);
    // public System.Void InjectCanvas(UnityEngine.Canvas canvas)
    // Offset: 0x47D6AC4
    void InjectCanvas(::UnityEngine::Canvas* canvas);
    // protected override System.Void Start()
    // Offset: 0x47D695C
    // Implemented from: Oculus.Interaction.PointableElement
    // Base method: System.Void PointableElement::Start()
    void Start();
    // protected override System.Void OnEnable()
    // Offset: 0x47D6A58
    // Implemented from: Oculus.Interaction.PointableElement
    // Base method: System.Void PointableElement::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x47D6A88
    // Implemented from: Oculus.Interaction.PointableElement
    // Base method: System.Void PointableElement::OnDisable()
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x47D6ACC
    // Implemented from: Oculus.Interaction.PointableElement
    // Base method: System.Void PointableElement::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointableCanvas* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PointableCanvas::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointableCanvas*, creationType>()));
    }
  }; // Oculus.Interaction.PointableCanvas
  #pragma pack(pop)
  static check_size<sizeof(PointableCanvas), 112 + sizeof(bool)> __Oculus_Interaction_PointableCanvasSizeCheck;
  static_assert(sizeof(PointableCanvas) == 0x71);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvas::get_Canvas
// Il2CppName: get_Canvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Canvas* (Oculus::Interaction::PointableCanvas::*)()>(&Oculus::Interaction::PointableCanvas::get_Canvas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvas*), "get_Canvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvas::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvas::*)()>(&Oculus::Interaction::PointableCanvas::Register)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvas*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvas::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvas::*)()>(&Oculus::Interaction::PointableCanvas::Unregister)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvas*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvas::InjectAllPointableCanvas
// Il2CppName: InjectAllPointableCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvas::*)(::UnityEngine::Canvas*)>(&Oculus::Interaction::PointableCanvas::InjectAllPointableCanvas)> {
  static const MethodInfo* get() {
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvas*), "InjectAllPointableCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvas});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvas::InjectCanvas
// Il2CppName: InjectCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvas::*)(::UnityEngine::Canvas*)>(&Oculus::Interaction::PointableCanvas::InjectCanvas)> {
  static const MethodInfo* get() {
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvas*), "InjectCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvas});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvas::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvas::*)()>(&Oculus::Interaction::PointableCanvas::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvas*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvas::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvas::*)()>(&Oculus::Interaction::PointableCanvas::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvas*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvas::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvas::*)()>(&Oculus::Interaction::PointableCanvas::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvas*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvas::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!