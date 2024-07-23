// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: UnicodeLineBreakingRules
  class UnicodeLineBreakingRules;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*, "UnityEngine.TextCore.Text", "UnicodeLineBreakingRules");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.UnicodeLineBreakingRules
  // [TokenAttribute] Offset: FFFFFFFF
  class UnicodeLineBreakingRules : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.TextAsset m_UnicodeLineBreakingRules
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::TextAsset* m_UnicodeLineBreakingRules;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    // private UnityEngine.TextAsset m_LeadingCharacters
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::TextAsset* m_LeadingCharacters;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    // private UnityEngine.TextAsset m_FollowingCharacters
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::TextAsset* m_FollowingCharacters;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    // private System.Boolean m_UseModernHangulLineBreakingRules
    // Size: 0x1
    // Offset: 0x28
    bool m_UseModernHangulLineBreakingRules;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private UnityEngine.TextCore.Text.UnicodeLineBreakingRules s_Instance
    static ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* _get_s_Instance();
    // Set static field: static private UnityEngine.TextCore.Text.UnicodeLineBreakingRules s_Instance
    static void _set_s_Instance(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* value);
    // Get static field: static private System.Collections.Generic.HashSet`1<System.UInt32> s_LeadingCharactersLookup
    static ::System::Collections::Generic::HashSet_1<uint>* _get_s_LeadingCharactersLookup();
    // Set static field: static private System.Collections.Generic.HashSet`1<System.UInt32> s_LeadingCharactersLookup
    static void _set_s_LeadingCharactersLookup(::System::Collections::Generic::HashSet_1<uint>* value);
    // Get static field: static private System.Collections.Generic.HashSet`1<System.UInt32> s_FollowingCharactersLookup
    static ::System::Collections::Generic::HashSet_1<uint>* _get_s_FollowingCharactersLookup();
    // Set static field: static private System.Collections.Generic.HashSet`1<System.UInt32> s_FollowingCharactersLookup
    static void _set_s_FollowingCharactersLookup(::System::Collections::Generic::HashSet_1<uint>* value);
    // Get instance field reference: private UnityEngine.TextAsset m_UnicodeLineBreakingRules
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn_m_UnicodeLineBreakingRules();
    // Get instance field reference: private UnityEngine.TextAsset m_LeadingCharacters
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn_m_LeadingCharacters();
    // Get instance field reference: private UnityEngine.TextAsset m_FollowingCharacters
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn_m_FollowingCharacters();
    // Get instance field reference: private System.Boolean m_UseModernHangulLineBreakingRules
    [[deprecated("Use field access instead!")]] bool& dyn_m_UseModernHangulLineBreakingRules();
    // public UnityEngine.TextAsset get_leadingCharacters()
    // Offset: 0x5575214
    ::UnityEngine::TextAsset* get_leadingCharacters();
    // public UnityEngine.TextAsset get_followingCharacters()
    // Offset: 0x557521C
    ::UnityEngine::TextAsset* get_followingCharacters();
    // System.Collections.Generic.HashSet`1<System.UInt32> get_leadingCharactersLookup()
    // Offset: 0x5575224
    ::System::Collections::Generic::HashSet_1<uint>* get_leadingCharactersLookup();
    // System.Collections.Generic.HashSet`1<System.UInt32> get_followingCharactersLookup()
    // Offset: 0x5575524
    ::System::Collections::Generic::HashSet_1<uint>* get_followingCharactersLookup();
    // public System.Boolean get_useModernHangulLineBreakingRules()
    // Offset: 0x55755BC
    bool get_useModernHangulLineBreakingRules();
    // static System.Void LoadLineBreakingRules()
    // Offset: 0x5572F00
    static void LoadLineBreakingRules();
    // static System.Void LoadLineBreakingRules(UnityEngine.TextAsset leadingRules, UnityEngine.TextAsset followingRules)
    // Offset: 0x55752BC
    static void LoadLineBreakingRules(::UnityEngine::TextAsset* leadingRules, ::UnityEngine::TextAsset* followingRules);
    // static private System.Collections.Generic.HashSet`1<System.UInt32> GetCharacters(UnityEngine.TextAsset file)
    // Offset: 0x55755C4
    static ::System::Collections::Generic::HashSet_1<uint>* GetCharacters(::UnityEngine::TextAsset* file);
    // public System.Void .ctor()
    // Offset: 0x5572EF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeLineBreakingRules* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TextCore::Text::UnicodeLineBreakingRules::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeLineBreakingRules*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x55756AC
    static void _cctor();
  }; // UnityEngine.TextCore.Text.UnicodeLineBreakingRules
  #pragma pack(pop)
  static check_size<sizeof(UnicodeLineBreakingRules), 40 + sizeof(bool)> __UnityEngine_TextCore_Text_UnicodeLineBreakingRulesSizeCheck;
  static_assert(sizeof(UnicodeLineBreakingRules) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_leadingCharacters
// Il2CppName: get_leadingCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextAsset* (UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(&UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_leadingCharacters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::UnicodeLineBreakingRules*), "get_leadingCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_followingCharacters
// Il2CppName: get_followingCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextAsset* (UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(&UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_followingCharacters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::UnicodeLineBreakingRules*), "get_followingCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_leadingCharactersLookup
// Il2CppName: get_leadingCharactersLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<uint>* (UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(&UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_leadingCharactersLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::UnicodeLineBreakingRules*), "get_leadingCharactersLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_followingCharactersLookup
// Il2CppName: get_followingCharactersLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<uint>* (UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(&UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_followingCharactersLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::UnicodeLineBreakingRules*), "get_followingCharactersLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_useModernHangulLineBreakingRules
// Il2CppName: get_useModernHangulLineBreakingRules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::Text::UnicodeLineBreakingRules::*)()>(&UnityEngine::TextCore::Text::UnicodeLineBreakingRules::get_useModernHangulLineBreakingRules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::UnicodeLineBreakingRules*), "get_useModernHangulLineBreakingRules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::UnicodeLineBreakingRules::LoadLineBreakingRules
// Il2CppName: LoadLineBreakingRules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TextCore::Text::UnicodeLineBreakingRules::LoadLineBreakingRules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::UnicodeLineBreakingRules*), "LoadLineBreakingRules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::UnicodeLineBreakingRules::LoadLineBreakingRules
// Il2CppName: LoadLineBreakingRules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*)>(&UnityEngine::TextCore::Text::UnicodeLineBreakingRules::LoadLineBreakingRules)> {
  static const MethodInfo* get() {
    static auto* leadingRules = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAsset")->byval_arg;
    static auto* followingRules = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::UnicodeLineBreakingRules*), "LoadLineBreakingRules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leadingRules, followingRules});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::UnicodeLineBreakingRules::GetCharacters
// Il2CppName: GetCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<uint>* (*)(::UnityEngine::TextAsset*)>(&UnityEngine::TextCore::Text::UnicodeLineBreakingRules::GetCharacters)> {
  static const MethodInfo* get() {
    static auto* file = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::UnicodeLineBreakingRules*), "GetCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{file});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::UnicodeLineBreakingRules::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::UnicodeLineBreakingRules::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TextCore::Text::UnicodeLineBreakingRules::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::UnicodeLineBreakingRules*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};