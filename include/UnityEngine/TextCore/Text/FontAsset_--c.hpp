// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextCore.Text.FontAsset
#include "UnityEngine/TextCore/Text/FontAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::TextCore::Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: Character
  class Character;
}
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontAsset::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAsset::$$c*, "UnityEngine.TextCore.Text", "FontAsset/<>c");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.FontAsset/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FontAsset::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TextCore.Text.FontAsset/<>c <>9
    static ::UnityEngine::TextCore::Text::FontAsset::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TextCore.Text.FontAsset/<>c <>9
    static void _set_$$9(::UnityEngine::TextCore::Text::FontAsset::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.TextCore.Text.Character,System.UInt32> <>9__151_0
    static ::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint>* _get_$$9__151_0();
    // Set static field: static public System.Func`2<UnityEngine.TextCore.Text.Character,System.UInt32> <>9__151_0
    static void _set_$$9__151_0(::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint>* value);
    // Get static field: static public System.Func`2<UnityEngine.TextCore.Glyph,System.UInt32> <>9__152_0
    static ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint>* _get_$$9__152_0();
    // Set static field: static public System.Func`2<UnityEngine.TextCore.Glyph,System.UInt32> <>9__152_0
    static void _set_$$9__152_0(::System::Func_2<::UnityEngine::TextCore::Glyph*, uint>* value);
    // static private System.Void .cctor()
    // Offset: 0x554D5F4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x554D65C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FontAsset::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TextCore::Text::FontAsset::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FontAsset::$$c*, creationType>()));
    }
    // System.UInt32 <SortCharacterTable>b__151_0(UnityEngine.TextCore.Text.Character c)
    // Offset: 0x554D664
    uint $SortCharacterTable$b__151_0(::UnityEngine::TextCore::Text::Character* c);
    // System.UInt32 <SortGlyphTable>b__152_0(UnityEngine.TextCore.Glyph c)
    // Offset: 0x554D67C
    uint $SortGlyphTable$b__152_0(::UnityEngine::TextCore::Glyph* c);
  }; // UnityEngine.TextCore.Text.FontAsset/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::FontAsset::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TextCore::Text::FontAsset::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::FontAsset::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::FontAsset::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::FontAsset::$$c::$SortCharacterTable$b__151_0
// Il2CppName: <SortCharacterTable>b__151_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::TextCore::Text::FontAsset::$$c::*)(::UnityEngine::TextCore::Text::Character*)>(&UnityEngine::TextCore::Text::FontAsset::$$c::$SortCharacterTable$b__151_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore.Text", "Character")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::FontAsset::$$c*), "<SortCharacterTable>b__151_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::FontAsset::$$c::$SortGlyphTable$b__152_0
// Il2CppName: <SortGlyphTable>b__152_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::TextCore::Text::FontAsset::$$c::*)(::UnityEngine::TextCore::Glyph*)>(&UnityEngine::TextCore::Text::FontAsset::$$c::$SortGlyphTable$b__152_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore", "Glyph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::FontAsset::$$c*), "<SortGlyphTable>b__152_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
