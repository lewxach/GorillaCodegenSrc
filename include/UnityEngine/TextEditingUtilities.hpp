// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextEditOp
#include "UnityEngine/TextEditOp.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextSelectingUtilities
  class TextSelectingUtilities;
  // Forward declaring type: Event
  class Event;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: UnityEngine::TextCore::Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: TextHandle
  class TextHandle;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextEditingUtilities
  class TextEditingUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TextEditingUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextEditingUtilities*, "UnityEngine", "TextEditingUtilities");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextEditingUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class TextEditingUtilities : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.TextSelectingUtilities m_TextSelectingUtility
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::TextSelectingUtilities* m_TextSelectingUtility;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextSelectingUtilities*) == 0x8);
    // private UnityEngine.TextCore.Text.TextHandle m_TextHandle
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::TextCore::Text::TextHandle* m_TextHandle;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::TextHandle*) == 0x8);
    // private System.Int32 m_CursorIndexSavedState
    // Size: 0x4
    // Offset: 0x20
    int m_CursorIndexSavedState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean isCompositionActive
    // Size: 0x1
    // Offset: 0x24
    bool isCompositionActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_UpdateImeWindowPosition
    // Size: 0x1
    // Offset: 0x25
    bool m_UpdateImeWindowPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean multiline
    // Size: 0x1
    // Offset: 0x26
    bool multiline;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: multiline and: m_Text
    char __padding5[0x1] = {};
    // private System.String m_Text
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_Text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditOp> s_KeyEditOps
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* _get_s_KeyEditOps();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditOp> s_KeyEditOps
    static void _set_s_KeyEditOps(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* value);
    // Get instance field reference: private UnityEngine.TextSelectingUtilities m_TextSelectingUtility
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextSelectingUtilities*& dyn_m_TextSelectingUtility();
    // Get instance field reference: private UnityEngine.TextCore.Text.TextHandle m_TextHandle
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextHandle*& dyn_m_TextHandle();
    // Get instance field reference: private System.Int32 m_CursorIndexSavedState
    [[deprecated("Use field access instead!")]] int& dyn_m_CursorIndexSavedState();
    // Get instance field reference: System.Boolean isCompositionActive
    [[deprecated("Use field access instead!")]] bool& dyn_isCompositionActive();
    // Get instance field reference: private System.Boolean m_UpdateImeWindowPosition
    [[deprecated("Use field access instead!")]] bool& dyn_m_UpdateImeWindowPosition();
    // Get instance field reference: public System.Boolean multiline
    [[deprecated("Use field access instead!")]] bool& dyn_multiline();
    // Get instance field reference: private System.String m_Text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Text();
    // private System.Boolean get_hasSelection()
    // Offset: 0x55104D4
    bool get_hasSelection();
    // System.Void set_revealCursor(System.Boolean value)
    // Offset: 0x5510550
    void set_revealCursor(bool value);
    // private System.Int32 get_cursorIndex()
    // Offset: 0x55105C8
    int get_cursorIndex();
    // private System.Void set_cursorIndex(System.Int32 value)
    // Offset: 0x55105EC
    void set_cursorIndex(int value);
    // private System.Int32 get_selectIndex()
    // Offset: 0x551065C
    int get_selectIndex();
    // private System.Void set_selectIndex(System.Int32 value)
    // Offset: 0x5510680
    void set_selectIndex(int value);
    // public System.String get_text()
    // Offset: 0x55106F0
    ::StringW get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x55106F8
    void set_text(::StringW value);
    // public System.Void .ctor(UnityEngine.TextSelectingUtilities selectingUtilities, UnityEngine.TextCore.Text.TextHandle textHandle, System.String text)
    // Offset: 0x5510778
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextEditingUtilities* New_ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities, ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TextEditingUtilities::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextEditingUtilities*, creationType>(selectingUtilities, textHandle, text)));
    }
    // public System.Boolean UpdateImeState()
    // Offset: 0x55107E4
    bool UpdateImeState();
    // public System.Boolean ShouldUpdateImeWindowPosition()
    // Offset: 0x5510900
    bool ShouldUpdateImeWindowPosition();
    // public System.Void SetImeWindowPosition(UnityEngine.Vector2 worldPosition)
    // Offset: 0x5510908
    void SetImeWindowPosition(::UnityEngine::Vector2 worldPosition);
    // public System.String GeneratePreviewString(System.Boolean richText)
    // Offset: 0x5510954
    ::StringW GeneratePreviewString(bool richText);
    // public System.Void EnableCursorPreviewState()
    // Offset: 0x5510A70
    void EnableCursorPreviewState();
    // public System.Void RestoreCursorState()
    // Offset: 0x5510A30
    void RestoreCursorState();
    // System.Boolean HandleKeyEvent(UnityEngine.Event e)
    // Offset: 0x5510AE4
    bool HandleKeyEvent(::UnityEngine::Event* e);
    // private System.Void PerformOperation(UnityEngine.TextEditOp operation)
    // Offset: 0x5511240
    void PerformOperation(::UnityEngine::TextEditOp operation);
    // static private System.Void MapKey(System.String key, UnityEngine.TextEditOp action)
    // Offset: 0x5512904
    static void MapKey(::StringW key, ::UnityEngine::TextEditOp action);
    // private System.Void InitKeyActions()
    // Offset: 0x5510BF8
    void InitKeyActions();
    // public System.Boolean DeleteLineBack()
    // Offset: 0x5512750
    bool DeleteLineBack();
    // public System.Boolean DeleteWordBack()
    // Offset: 0x5512694
    bool DeleteWordBack();
    // public System.Boolean DeleteWordForward()
    // Offset: 0x5512848
    bool DeleteWordForward();
    // public System.Boolean Delete()
    // Offset: 0x551246C
    bool Delete();
    // public System.Boolean Backspace()
    // Offset: 0x5512528
    bool Backspace();
    // public System.Boolean DeleteSelection()
    // Offset: 0x5512994
    bool DeleteSelection();
    // public System.Void ReplaceSelection(System.String replace)
    // Offset: 0x5510878
    void ReplaceSelection(::StringW replace);
    // public System.Void Insert(System.Char c)
    // Offset: 0x5512FB4
    void Insert(::Il2CppChar c);
    // public System.Boolean CanPaste()
    // Offset: 0x5512FE8
    bool CanPaste();
    // public System.Boolean Cut()
    // Offset: 0x55125E4
    bool Cut();
    // public System.Boolean Paste()
    // Offset: 0x5512608
    bool Paste();
    // static private System.String ReplaceNewlinesWithSpaces(System.String value)
    // Offset: 0x5513060
    static ::StringW ReplaceNewlinesWithSpaces(::StringW value);
    // System.Void OnBlur()
    // Offset: 0x55130F4
    void OnBlur();
    // System.Boolean TouchScreenKeyboardShouldBeUsed()
    // Offset: 0x5513164
    bool TouchScreenKeyboardShouldBeUsed();
  }; // UnityEngine.TextEditingUtilities
  #pragma pack(pop)
  static check_size<sizeof(TextEditingUtilities), 40 + sizeof(::StringW)> __UnityEngine_TextEditingUtilitiesSizeCheck;
  static_assert(sizeof(TextEditingUtilities) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::get_hasSelection
// Il2CppName: get_hasSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::get_hasSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "get_hasSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::set_revealCursor
// Il2CppName: set_revealCursor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)(bool)>(&UnityEngine::TextEditingUtilities::set_revealCursor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "set_revealCursor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::get_cursorIndex
// Il2CppName: get_cursorIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::get_cursorIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "get_cursorIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::set_cursorIndex
// Il2CppName: set_cursorIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)(int)>(&UnityEngine::TextEditingUtilities::set_cursorIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "set_cursorIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::get_selectIndex
// Il2CppName: get_selectIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::get_selectIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "get_selectIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::set_selectIndex
// Il2CppName: set_selectIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)(int)>(&UnityEngine::TextEditingUtilities::set_selectIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "set_selectIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)(::StringW)>(&UnityEngine::TextEditingUtilities::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::UpdateImeState
// Il2CppName: UpdateImeState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::UpdateImeState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "UpdateImeState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::ShouldUpdateImeWindowPosition
// Il2CppName: ShouldUpdateImeWindowPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::ShouldUpdateImeWindowPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "ShouldUpdateImeWindowPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::SetImeWindowPosition
// Il2CppName: SetImeWindowPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)(::UnityEngine::Vector2)>(&UnityEngine::TextEditingUtilities::SetImeWindowPosition)> {
  static const MethodInfo* get() {
    static auto* worldPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "SetImeWindowPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldPosition});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::GeneratePreviewString
// Il2CppName: GeneratePreviewString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextEditingUtilities::*)(bool)>(&UnityEngine::TextEditingUtilities::GeneratePreviewString)> {
  static const MethodInfo* get() {
    static auto* richText = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "GeneratePreviewString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{richText});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::EnableCursorPreviewState
// Il2CppName: EnableCursorPreviewState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::EnableCursorPreviewState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "EnableCursorPreviewState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::RestoreCursorState
// Il2CppName: RestoreCursorState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::RestoreCursorState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "RestoreCursorState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::HandleKeyEvent
// Il2CppName: HandleKeyEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)(::UnityEngine::Event*)>(&UnityEngine::TextEditingUtilities::HandleKeyEvent)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "HandleKeyEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::PerformOperation
// Il2CppName: PerformOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)(::UnityEngine::TextEditOp)>(&UnityEngine::TextEditingUtilities::PerformOperation)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextEditOp")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "PerformOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::MapKey
// Il2CppName: MapKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::TextEditOp)>(&UnityEngine::TextEditingUtilities::MapKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextEditOp")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "MapKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, action});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::InitKeyActions
// Il2CppName: InitKeyActions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::InitKeyActions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "InitKeyActions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::DeleteLineBack
// Il2CppName: DeleteLineBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::DeleteLineBack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "DeleteLineBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::DeleteWordBack
// Il2CppName: DeleteWordBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::DeleteWordBack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "DeleteWordBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::DeleteWordForward
// Il2CppName: DeleteWordForward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::DeleteWordForward)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "DeleteWordForward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::Delete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::Backspace
// Il2CppName: Backspace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::Backspace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "Backspace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::DeleteSelection
// Il2CppName: DeleteSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::DeleteSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "DeleteSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::ReplaceSelection
// Il2CppName: ReplaceSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)(::StringW)>(&UnityEngine::TextEditingUtilities::ReplaceSelection)> {
  static const MethodInfo* get() {
    static auto* replace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "ReplaceSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{replace});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)(::Il2CppChar)>(&UnityEngine::TextEditingUtilities::Insert)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::CanPaste
// Il2CppName: CanPaste
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::CanPaste)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "CanPaste", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::Cut
// Il2CppName: Cut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::Cut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "Cut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::Paste
// Il2CppName: Paste
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::Paste)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "Paste", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::ReplaceNewlinesWithSpaces
// Il2CppName: ReplaceNewlinesWithSpaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::TextEditingUtilities::ReplaceNewlinesWithSpaces)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "ReplaceNewlinesWithSpaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::OnBlur
// Il2CppName: OnBlur
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::OnBlur)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "OnBlur", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextEditingUtilities::TouchScreenKeyboardShouldBeUsed
// Il2CppName: TouchScreenKeyboardShouldBeUsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextEditingUtilities::*)()>(&UnityEngine::TextEditingUtilities::TouchScreenKeyboardShouldBeUsed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextEditingUtilities*), "TouchScreenKeyboardShouldBeUsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
