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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: PokeInteractable
  class PokeInteractable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Samples.PalmMenu
namespace Oculus::Interaction::Samples::PalmMenu {
  // Forward declaring type: PalmMenuExample
  class PalmMenuExample;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*, "Oculus.Interaction.Samples.PalmMenu", "PalmMenuExample");
// Type namespace: Oculus.Interaction.Samples.PalmMenu
namespace Oculus::Interaction::Samples::PalmMenu {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Samples.PalmMenu.PalmMenuExample
  // [TokenAttribute] Offset: FFFFFFFF
  class PalmMenuExample : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Oculus.Interaction.PokeInteractable _menuInteractable
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::PokeInteractable* menuInteractable;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PokeInteractable*) == 0x8);
    // private UnityEngine.GameObject _menuParent
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* menuParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.RectTransform _menuPanel
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::RectTransform* menuPanel;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform[] _buttons
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::RectTransform*> buttons;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::RectTransform*>) == 0x8);
    // private UnityEngine.RectTransform[] _paginationDots
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::RectTransform*> paginationDots;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::RectTransform*>) == 0x8);
    // private UnityEngine.RectTransform _selectionIndicatorDot
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::RectTransform* selectionIndicatorDot;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.AnimationCurve _paginationButtonScaleCurve
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AnimationCurve* paginationButtonScaleCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _defaultButtonDistance
    // Size: 0x4
    // Offset: 0x58
    float defaultButtonDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: defaultButtonDistance and: paginationSwipeAudio
    char __padding7[0x4] = {};
    // private UnityEngine.AudioSource _paginationSwipeAudio
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::AudioSource* paginationSwipeAudio;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioSource _showMenuAudio
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::AudioSource* showMenuAudio;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AudioSource _hideMenuAudio
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::AudioSource* hideMenuAudio;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Int32 _currentSelectedButtonIdx
    // Size: 0x4
    // Offset: 0x78
    int currentSelectedButtonIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private Oculus.Interaction.PokeInteractable _menuInteractable
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PokeInteractable*& dyn__menuInteractable();
    // Get instance field reference: private UnityEngine.GameObject _menuParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__menuParent();
    // Get instance field reference: private UnityEngine.RectTransform _menuPanel
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__menuPanel();
    // Get instance field reference: private UnityEngine.RectTransform[] _buttons
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::RectTransform*>& dyn__buttons();
    // Get instance field reference: private UnityEngine.RectTransform[] _paginationDots
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::RectTransform*>& dyn__paginationDots();
    // Get instance field reference: private UnityEngine.RectTransform _selectionIndicatorDot
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__selectionIndicatorDot();
    // Get instance field reference: private UnityEngine.AnimationCurve _paginationButtonScaleCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__paginationButtonScaleCurve();
    // Get instance field reference: private System.Single _defaultButtonDistance
    [[deprecated("Use field access instead!")]] float& dyn__defaultButtonDistance();
    // Get instance field reference: private UnityEngine.AudioSource _paginationSwipeAudio
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__paginationSwipeAudio();
    // Get instance field reference: private UnityEngine.AudioSource _showMenuAudio
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__showMenuAudio();
    // Get instance field reference: private UnityEngine.AudioSource _hideMenuAudio
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__hideMenuAudio();
    // Get instance field reference: private System.Int32 _currentSelectedButtonIdx
    [[deprecated("Use field access instead!")]] int& dyn__currentSelectedButtonIdx();
    // private System.Void Start()
    // Offset: 0x47A2DB4
    void Start();
    // private System.Void Update()
    // Offset: 0x47A2FE4
    void Update();
    // private System.Int32 CalculateNearestButtonIdx()
    // Offset: 0x47A2E28
    int CalculateNearestButtonIdx();
    // private System.Void LerpToButton()
    // Offset: 0x47A30B4
    void LerpToButton();
    // public System.Void ToggleMenu()
    // Offset: 0x47A31CC
    void ToggleMenu();
    // public System.Void .ctor()
    // Offset: 0x47A3234
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PalmMenuExample* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PalmMenuExample*, creationType>()));
    }
  }; // Oculus.Interaction.Samples.PalmMenu.PalmMenuExample
  #pragma pack(pop)
  static check_size<sizeof(PalmMenuExample), 120 + sizeof(int)> __Oculus_Interaction_Samples_PalmMenu_PalmMenuExampleSizeCheck;
  static_assert(sizeof(PalmMenuExample) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::*)()>(&Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::*)()>(&Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::CalculateNearestButtonIdx
// Il2CppName: CalculateNearestButtonIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::*)()>(&Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::CalculateNearestButtonIdx)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*), "CalculateNearestButtonIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::LerpToButton
// Il2CppName: LerpToButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::*)()>(&Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::LerpToButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*), "LerpToButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::ToggleMenu
// Il2CppName: ToggleMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::*)()>(&Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::ToggleMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::PalmMenu::PalmMenuExample*), "ToggleMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::PalmMenu::PalmMenuExample::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!