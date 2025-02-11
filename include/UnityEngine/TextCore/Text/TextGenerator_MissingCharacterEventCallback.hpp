// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextCore.Text.TextGenerator
#include "UnityEngine/TextCore/Text/TextGenerator.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore::Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: TextInfo
  class TextInfo;
  // Forward declaring type: FontAsset
  class FontAsset;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextGenerator::MissingCharacterEventCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextGenerator::MissingCharacterEventCallback*, "UnityEngine.TextCore.Text", "TextGenerator/MissingCharacterEventCallback");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.TextGenerator/MissingCharacterEventCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class TextGenerator::MissingCharacterEventCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x556BFB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextGenerator::MissingCharacterEventCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TextCore::Text::TextGenerator::MissingCharacterEventCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextGenerator::MissingCharacterEventCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.UInt32 unicode, System.Int32 stringIndex, UnityEngine.TextCore.Text.TextInfo text, UnityEngine.TextCore.Text.FontAsset fontAsset)
    // Offset: 0x556C054
    void Invoke(uint unicode, int stringIndex, ::UnityEngine::TextCore::Text::TextInfo* text, ::UnityEngine::TextCore::Text::FontAsset* fontAsset);
  }; // UnityEngine.TextCore.Text.TextGenerator/MissingCharacterEventCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::TextGenerator::MissingCharacterEventCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::TextGenerator::MissingCharacterEventCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextGenerator::MissingCharacterEventCallback::*)(uint, int, ::UnityEngine::TextCore::Text::TextInfo*, ::UnityEngine::TextCore::Text::FontAsset*)>(&UnityEngine::TextCore::Text::TextGenerator::MissingCharacterEventCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* stringIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore.Text", "TextInfo")->byval_arg;
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore.Text", "FontAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::TextGenerator::MissingCharacterEventCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicode, stringIndex, text, fontAsset});
  }
};
