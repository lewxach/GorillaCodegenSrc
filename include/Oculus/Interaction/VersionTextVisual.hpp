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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: VersionTextVisual
  class VersionTextVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::VersionTextVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::VersionTextVisual*, "Oculus.Interaction", "VersionTextVisual");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.VersionTextVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class VersionTextVisual : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshPro _text
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshPro* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    public:
    // Get instance field reference: private TMPro.TextMeshPro _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__text();
    // protected System.Void Start()
    // Offset: 0x47DD45C
    void Start();
    // public System.Void InjectAllVersionTextVisual(TMPro.TextMeshPro text)
    // Offset: 0x47DD4FC
    void InjectAllVersionTextVisual(::TMPro::TextMeshPro* text);
    // public System.Void InjectText(TMPro.TextMeshPro text)
    // Offset: 0x47DD504
    void InjectText(::TMPro::TextMeshPro* text);
    // public System.Void .ctor()
    // Offset: 0x47DD50C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VersionTextVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::VersionTextVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VersionTextVisual*, creationType>()));
    }
  }; // Oculus.Interaction.VersionTextVisual
  #pragma pack(pop)
  static check_size<sizeof(VersionTextVisual), 32 + sizeof(::TMPro::TextMeshPro*)> __Oculus_Interaction_VersionTextVisualSizeCheck;
  static_assert(sizeof(VersionTextVisual) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::VersionTextVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VersionTextVisual::*)()>(&Oculus::Interaction::VersionTextVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VersionTextVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VersionTextVisual::InjectAllVersionTextVisual
// Il2CppName: InjectAllVersionTextVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VersionTextVisual::*)(::TMPro::TextMeshPro*)>(&Oculus::Interaction::VersionTextVisual::InjectAllVersionTextVisual)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshPro")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VersionTextVisual*), "InjectAllVersionTextVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VersionTextVisual::InjectText
// Il2CppName: InjectText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VersionTextVisual::*)(::TMPro::TextMeshPro*)>(&Oculus::Interaction::VersionTextVisual::InjectText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshPro")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VersionTextVisual*), "InjectText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VersionTextVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
