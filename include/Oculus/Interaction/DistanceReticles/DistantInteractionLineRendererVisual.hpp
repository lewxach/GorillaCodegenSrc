// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
#include "Oculus/Interaction/DistanceReticles/DistantInteractionLineVisual.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IDistanceInteractor
  class IDistanceInteractor;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Forward declaring type: DistantInteractionLineRendererVisual
  class DistantInteractionLineRendererVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual*, "Oculus.Interaction.DistanceReticles", "DistantInteractionLineRendererVisual");
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class DistantInteractionLineRendererVisual : public ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual {
    public:
    public:
    // private UnityEngine.LineRenderer _lineRenderer
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::LineRenderer* lineRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.LineRenderer _lineRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn__lineRenderer();
    // public System.Void InjectAllDistantInteractionLineRendererVisual(Oculus.Interaction.IDistanceInteractor interactor, UnityEngine.LineRenderer lineRenderer)
    // Offset: 0x483CD28
    void InjectAllDistantInteractionLineRendererVisual(::Oculus::Interaction::IDistanceInteractor* interactor, ::UnityEngine::LineRenderer* lineRenderer);
    // public System.Void InjectLineRenderer(UnityEngine.LineRenderer lineRenderer)
    // Offset: 0x483CE24
    void InjectLineRenderer(::UnityEngine::LineRenderer* lineRenderer);
    // protected override System.Void Start()
    // Offset: 0x483CC2C
    // Implemented from: Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
    // Base method: System.Void DistantInteractionLineVisual::Start()
    void Start();
    // protected override System.Void RenderLine(UnityEngine.Vector3[] linePoints)
    // Offset: 0x483CCD4
    // Implemented from: Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
    // Base method: System.Void DistantInteractionLineVisual::RenderLine(UnityEngine.Vector3[] linePoints)
    void RenderLine(::ArrayW<::UnityEngine::Vector3> linePoints);
    // protected override System.Void HideLine()
    // Offset: 0x483CD08
    // Implemented from: Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
    // Base method: System.Void DistantInteractionLineVisual::HideLine()
    void HideLine();
    // public System.Void .ctor()
    // Offset: 0x483CE2C
    // Implemented from: Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
    // Base method: System.Void DistantInteractionLineVisual::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistantInteractionLineRendererVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistantInteractionLineRendererVisual*, creationType>()));
    }
  }; // Oculus.Interaction.DistanceReticles.DistantInteractionLineRendererVisual
  #pragma pack(pop)
  static check_size<sizeof(DistantInteractionLineRendererVisual), 104 + sizeof(::UnityEngine::LineRenderer*)> __Oculus_Interaction_DistanceReticles_DistantInteractionLineRendererVisualSizeCheck;
  static_assert(sizeof(DistantInteractionLineRendererVisual) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::InjectAllDistantInteractionLineRendererVisual
// Il2CppName: InjectAllDistantInteractionLineRendererVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::*)(::Oculus::Interaction::IDistanceInteractor*, ::UnityEngine::LineRenderer*)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::InjectAllDistantInteractionLineRendererVisual)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IDistanceInteractor")->byval_arg;
    static auto* lineRenderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "LineRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual*), "InjectAllDistantInteractionLineRendererVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, lineRenderer});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::InjectLineRenderer
// Il2CppName: InjectLineRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::*)(::UnityEngine::LineRenderer*)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::InjectLineRenderer)> {
  static const MethodInfo* get() {
    static auto* lineRenderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "LineRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual*), "InjectLineRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineRenderer});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::RenderLine
// Il2CppName: RenderLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::*)(::ArrayW<::UnityEngine::Vector3>)>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::RenderLine)> {
  static const MethodInfo* get() {
    static auto* linePoints = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual*), "RenderLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{linePoints});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::HideLine
// Il2CppName: HideLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::*)()>(&Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::HideLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual*), "HideLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::DistantInteractionLineRendererVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
