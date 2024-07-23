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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Completed forward declares
// Type namespace: Meta.Voice.Samples.TTSVoices
namespace Meta::Voice::Samples::TTSVoices {
  // Forward declaring type: TTSErrorText
  class TTSErrorText;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::Samples::TTSVoices::TTSErrorText);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::Samples::TTSVoices::TTSErrorText*, "Meta.Voice.Samples.TTSVoices", "TTSErrorText");
// Type namespace: Meta.Voice.Samples.TTSVoices
namespace Meta::Voice::Samples::TTSVoices {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.Samples.TTSVoices.TTSErrorText
  // [TokenAttribute] Offset: FFFFFFFF
  class TTSErrorText : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.UI.Text _errorLabel
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* errorLabel;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private System.String _error
    // Size: 0x8
    // Offset: 0x28
    ::StringW error;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Text _errorLabel
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn__errorLabel();
    // Get instance field reference: private System.String _error
    [[deprecated("Use field access instead!")]] ::StringW& dyn__error();
    // private System.Void OnEnable()
    // Offset: 0x4413710
    void OnEnable();
    // private System.Void Update()
    // Offset: 0x44137C8
    void Update();
    // private System.Void RefreshText()
    // Offset: 0x4413714
    void RefreshText();
    // public System.Void .ctor()
    // Offset: 0x44138B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSErrorText* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::Samples::TTSVoices::TTSErrorText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSErrorText*, creationType>()));
    }
  }; // Meta.Voice.Samples.TTSVoices.TTSErrorText
  #pragma pack(pop)
  static check_size<sizeof(TTSErrorText), 40 + sizeof(::StringW)> __Meta_Voice_Samples_TTSVoices_TTSErrorTextSizeCheck;
  static_assert(sizeof(TTSErrorText) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSErrorText::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSErrorText::*)()>(&Meta::Voice::Samples::TTSVoices::TTSErrorText::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSErrorText*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSErrorText::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSErrorText::*)()>(&Meta::Voice::Samples::TTSVoices::TTSErrorText::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSErrorText*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSErrorText::RefreshText
// Il2CppName: RefreshText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSErrorText::*)()>(&Meta::Voice::Samples::TTSVoices::TTSErrorText::RefreshText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSErrorText*), "RefreshText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSErrorText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!