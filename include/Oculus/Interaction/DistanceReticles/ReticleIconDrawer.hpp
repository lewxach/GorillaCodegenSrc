// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.DistanceReticles.InteractorReticle`1
#include "Oculus/Interaction/DistanceReticles/InteractorReticle_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Forward declaring type: ReticleDataIcon
  class ReticleDataIcon;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Texture
  class Texture;
  // Skipping declaration: Component because it is already included!
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IDistanceInteractor
  class IDistanceInteractor;
  // Forward declaring type: IInteractorView
  class IInteractorView;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Forward declaring type: ReticleIconDrawer
  class ReticleIconDrawer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer*, "Oculus.Interaction.DistanceReticles", "ReticleIconDrawer");
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.DistanceReticles.ReticleIconDrawer
  // [TokenAttribute] Offset: FFFFFFFF
  class ReticleIconDrawer : public ::Oculus::Interaction::DistanceReticles::InteractorReticle_1<::Oculus::Interaction::DistanceReticles::ReticleDataIcon*> {
    public:
    public:
    // private UnityEngine.Object _distanceInteractor
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Object* distanceInteractor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.IDistanceInteractor <DistanceInteractor>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Interaction::IDistanceInteractor* DistanceInteractor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IDistanceInteractor*) == 0x8);
    // private UnityEngine.MeshRenderer _renderer
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::MeshRenderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.Transform _centerEye
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* centerEye;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Texture _defaultIcon
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Texture* defaultIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // private System.Boolean _constantScreenSize
    // Size: 0x1
    // Offset: 0x60
    bool constantScreenSize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.Vector3 _originalScale
    // Size: 0xC
    // Offset: 0x64
    ::UnityEngine::Vector3 originalScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private Oculus.Interaction.IInteractorView <Interactor>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    ::Oculus::Interaction::IInteractorView* Interactor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IInteractorView*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Object _distanceInteractor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__distanceInteractor();
    // Get instance field reference: private Oculus.Interaction.IDistanceInteractor <DistanceInteractor>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IDistanceInteractor*& dyn_$DistanceInteractor$k__BackingField();
    // Get instance field reference: private UnityEngine.MeshRenderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn__renderer();
    // Get instance field reference: private UnityEngine.Transform _centerEye
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__centerEye();
    // Get instance field reference: private UnityEngine.Texture _defaultIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn__defaultIcon();
    // Get instance field reference: private System.Boolean _constantScreenSize
    [[deprecated("Use field access instead!")]] bool& dyn__constantScreenSize();
    // Get instance field reference: private UnityEngine.Vector3 _originalScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__originalScale();
    // Get instance field reference: private Oculus.Interaction.IInteractorView <Interactor>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IInteractorView*& dyn_$Interactor$k__BackingField();
    // private Oculus.Interaction.IDistanceInteractor get_DistanceInteractor()
    // Offset: 0x483EED0
    ::Oculus::Interaction::IDistanceInteractor* get_DistanceInteractor();
    // private System.Void set_DistanceInteractor(Oculus.Interaction.IDistanceInteractor value)
    // Offset: 0x483EED8
    void set_DistanceInteractor(::Oculus::Interaction::IDistanceInteractor* value);
    // public UnityEngine.Texture get_DefaultIcon()
    // Offset: 0x483EEE0
    ::UnityEngine::Texture* get_DefaultIcon();
    // public System.Void set_DefaultIcon(UnityEngine.Texture value)
    // Offset: 0x483EEE8
    void set_DefaultIcon(::UnityEngine::Texture* value);
    // public System.Boolean get_ConstantScreenSize()
    // Offset: 0x483EEF0
    bool get_ConstantScreenSize();
    // public System.Void set_ConstantScreenSize(System.Boolean value)
    // Offset: 0x483EEF8
    void set_ConstantScreenSize(bool value);
    // protected System.Void OnValidate()
    // Offset: 0x483F008
    void OnValidate();
    // protected System.Void Awake()
    // Offset: 0x483F09C
    void Awake();
    // protected System.Void Draw(Oculus.Interaction.DistanceReticles.ReticleDataIcon dataIcon)
    // Offset: 0x483F1CC
    void Draw(::Oculus::Interaction::DistanceReticles::ReticleDataIcon* dataIcon);
    // protected System.Void Align(Oculus.Interaction.DistanceReticles.ReticleDataIcon data)
    // Offset: 0x483F37C
    void Align(::Oculus::Interaction::DistanceReticles::ReticleDataIcon* data);
    // public System.Void InjectAllReticleIconDrawer(Oculus.Interaction.IDistanceInteractor distanceInteractor, UnityEngine.Transform centerEye, UnityEngine.MeshRenderer renderer)
    // Offset: 0x483F700
    void InjectAllReticleIconDrawer(::Oculus::Interaction::IDistanceInteractor* distanceInteractor, ::UnityEngine::Transform* centerEye, ::UnityEngine::MeshRenderer* renderer);
    // public System.Void InjectDistanceInteractor(Oculus.Interaction.IDistanceInteractor distanceInteractor)
    // Offset: 0x483F740
    void InjectDistanceInteractor(::Oculus::Interaction::IDistanceInteractor* distanceInteractor);
    // public System.Void InjectCenterEye(UnityEngine.Transform centerEye)
    // Offset: 0x483F824
    void InjectCenterEye(::UnityEngine::Transform* centerEye);
    // public System.Void InjectRenderer(UnityEngine.MeshRenderer renderer)
    // Offset: 0x483F82C
    void InjectRenderer(::UnityEngine::MeshRenderer* renderer);
    // private System.Void <Start>b__24_0()
    // Offset: 0x483F87C
    void $Start$b__24_0();
    // protected override Oculus.Interaction.IInteractorView get_Interactor()
    // Offset: 0x483EF04
    // Implemented from: Oculus.Interaction.DistanceReticles.InteractorReticle`1
    // Base method: Oculus.Interaction.IInteractorView InteractorReticle_1::get_Interactor()
    ::Oculus::Interaction::IInteractorView* get_Interactor();
    // protected override System.Void set_Interactor(Oculus.Interaction.IInteractorView value)
    // Offset: 0x483EF0C
    // Implemented from: Oculus.Interaction.DistanceReticles.InteractorReticle`1
    // Base method: System.Void InteractorReticle_1::set_Interactor(Oculus.Interaction.IInteractorView value)
    void set_Interactor(::Oculus::Interaction::IInteractorView* value);
    // protected override UnityEngine.Component get_InteractableComponent()
    // Offset: 0x483EF14
    // Implemented from: Oculus.Interaction.DistanceReticles.InteractorReticle`1
    // Base method: UnityEngine.Component InteractorReticle_1::get_InteractableComponent()
    ::UnityEngine::Component* get_InteractableComponent();
    // protected override System.Void Start()
    // Offset: 0x483F10C
    // Implemented from: Oculus.Interaction.DistanceReticles.InteractorReticle`1
    // Base method: System.Void InteractorReticle_1::Start()
    void Start();
    // protected override System.Void Hide()
    // Offset: 0x483F6E0
    // Implemented from: Oculus.Interaction.DistanceReticles.InteractorReticle`1
    // Base method: System.Void InteractorReticle_1::Hide()
    void Hide();
    // public System.Void .ctor()
    // Offset: 0x483F834
    // Implemented from: Oculus.Interaction.DistanceReticles.InteractorReticle`1
    // Base method: System.Void InteractorReticle_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReticleIconDrawer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::DistanceReticles::ReticleIconDrawer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReticleIconDrawer*, creationType>()));
    }
  }; // Oculus.Interaction.DistanceReticles.ReticleIconDrawer
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::get_DistanceInteractor
// Il2CppName: get_DistanceInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::IDistanceInteractor* (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)()>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::get_DistanceInteractor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "get_DistanceInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::set_DistanceInteractor
// Il2CppName: set_DistanceInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)(::Oculus::Interaction::IDistanceInteractor*)>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::set_DistanceInteractor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IDistanceInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "set_DistanceInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::get_DefaultIcon
// Il2CppName: get_DefaultIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)()>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::get_DefaultIcon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "get_DefaultIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::set_DefaultIcon
// Il2CppName: set_DefaultIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)(::UnityEngine::Texture*)>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::set_DefaultIcon)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "set_DefaultIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::get_ConstantScreenSize
// Il2CppName: get_ConstantScreenSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)()>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::get_ConstantScreenSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "get_ConstantScreenSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::set_ConstantScreenSize
// Il2CppName: set_ConstantScreenSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)(bool)>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::set_ConstantScreenSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "set_ConstantScreenSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)()>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)()>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::Draw
// Il2CppName: Draw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)(::Oculus::Interaction::DistanceReticles::ReticleDataIcon*)>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::Draw)> {
  static const MethodInfo* get() {
    static auto* dataIcon = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.DistanceReticles", "ReticleDataIcon")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "Draw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataIcon});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::Align
// Il2CppName: Align
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)(::Oculus::Interaction::DistanceReticles::ReticleDataIcon*)>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::Align)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.DistanceReticles", "ReticleDataIcon")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "Align", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::InjectAllReticleIconDrawer
// Il2CppName: InjectAllReticleIconDrawer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)(::Oculus::Interaction::IDistanceInteractor*, ::UnityEngine::Transform*, ::UnityEngine::MeshRenderer*)>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::InjectAllReticleIconDrawer)> {
  static const MethodInfo* get() {
    static auto* distanceInteractor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IDistanceInteractor")->byval_arg;
    static auto* centerEye = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "InjectAllReticleIconDrawer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distanceInteractor, centerEye, renderer});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::InjectDistanceInteractor
// Il2CppName: InjectDistanceInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)(::Oculus::Interaction::IDistanceInteractor*)>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::InjectDistanceInteractor)> {
  static const MethodInfo* get() {
    static auto* distanceInteractor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IDistanceInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "InjectDistanceInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distanceInteractor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::InjectCenterEye
// Il2CppName: InjectCenterEye
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::InjectCenterEye)> {
  static const MethodInfo* get() {
    static auto* centerEye = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "InjectCenterEye", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{centerEye});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::InjectRenderer
// Il2CppName: InjectRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)(::UnityEngine::MeshRenderer*)>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::InjectRenderer)> {
  static const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "InjectRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::$Start$b__24_0
// Il2CppName: <Start>b__24_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)()>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::$Start$b__24_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "<Start>b__24_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::get_Interactor
// Il2CppName: get_Interactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::IInteractorView* (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)()>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::get_Interactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "get_Interactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::set_Interactor
// Il2CppName: set_Interactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)(::Oculus::Interaction::IInteractorView*)>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::set_Interactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractorView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "set_Interactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::get_InteractableComponent
// Il2CppName: get_InteractableComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Component* (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)()>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::get_InteractableComponent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "get_InteractableComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)()>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleIconDrawer::*)()>(&Oculus::Interaction::DistanceReticles::ReticleIconDrawer::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleIconDrawer*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleIconDrawer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
