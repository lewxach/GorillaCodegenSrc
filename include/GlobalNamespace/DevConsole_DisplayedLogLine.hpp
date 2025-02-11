// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DevConsole
#include "GlobalNamespace/DevConsole.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaDevButton
  class GorillaDevButton;
  // Forward declaring type: DevInspector
  class DevInspector;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DevConsole::DisplayedLogLine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DevConsole::DisplayedLogLine*, "", "DevConsole/DisplayedLogLine");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: DevConsole/DisplayedLogLine
  // [TokenAttribute] Offset: FFFFFFFF
  class DevConsole::DisplayedLogLine : public ::Il2CppObject {
    public:
    public:
    // public GorillaDevButton[] buttons
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::GorillaDevButton*> buttons;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::GorillaDevButton*>) == 0x8);
    // public UnityEngine.UI.Text lineText
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Text* lineText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public UnityEngine.RectTransform transform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // public System.Int32 targetMessage
    // Size: 0x4
    // Offset: 0x28
    int targetMessage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: targetMessage and: maximizeButton
    char __padding3[0x4] = {};
    // public GorillaDevButton maximizeButton
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::GorillaDevButton* maximizeButton;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaDevButton*) == 0x8);
    // public GorillaDevButton forwardButton
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::GorillaDevButton* forwardButton;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaDevButton*) == 0x8);
    // public UnityEngine.SpriteRenderer backdrop
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::SpriteRenderer* backdrop;
    // Field size check
    static_assert(sizeof(::UnityEngine::SpriteRenderer*) == 0x8);
    // private System.Boolean expanded
    // Size: 0x1
    // Offset: 0x48
    bool expanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: expanded and: inspector
    char __padding7[0x7] = {};
    // public DevInspector inspector
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::DevInspector* inspector;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DevInspector*) == 0x8);
    // private System.Type <data>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::System::Type* data;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: public GorillaDevButton[] buttons
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::GorillaDevButton*>& dyn_buttons();
    // Get instance field reference: public UnityEngine.UI.Text lineText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_lineText();
    // Get instance field reference: public UnityEngine.RectTransform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_transform();
    // Get instance field reference: public System.Int32 targetMessage
    [[deprecated("Use field access instead!")]] int& dyn_targetMessage();
    // Get instance field reference: public GorillaDevButton maximizeButton
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaDevButton*& dyn_maximizeButton();
    // Get instance field reference: public GorillaDevButton forwardButton
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaDevButton*& dyn_forwardButton();
    // Get instance field reference: public UnityEngine.SpriteRenderer backdrop
    [[deprecated("Use field access instead!")]] ::UnityEngine::SpriteRenderer*& dyn_backdrop();
    // Get instance field reference: private System.Boolean expanded
    [[deprecated("Use field access instead!")]] bool& dyn_expanded();
    // Get instance field reference: public DevInspector inspector
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DevInspector*& dyn_inspector();
    // Get instance field reference: private System.Type <data>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$data$k__BackingField();
    // public System.Type get_data()
    // Offset: 0x2799DD4
    ::System::Type* get_data();
    // public System.Void set_data(System.Type value)
    // Offset: 0x2799DDC
    void set_data(::System::Type* value);
    // public System.Void .ctor(UnityEngine.GameObject obj)
    // Offset: 0x2799DE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DevConsole::DisplayedLogLine* New_ctor(::UnityEngine::GameObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DevConsole::DisplayedLogLine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DevConsole::DisplayedLogLine*, creationType>(obj)));
    }
  }; // DevConsole/DisplayedLogLine
  #pragma pack(pop)
  static check_size<sizeof(DevConsole::DisplayedLogLine), 88 + sizeof(::System::Type*)> __GlobalNamespace_DevConsole_DisplayedLogLineSizeCheck;
  static_assert(sizeof(DevConsole::DisplayedLogLine) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DevConsole::DisplayedLogLine::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (GlobalNamespace::DevConsole::DisplayedLogLine::*)()>(&GlobalNamespace::DevConsole::DisplayedLogLine::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DevConsole::DisplayedLogLine*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DevConsole::DisplayedLogLine::set_data
// Il2CppName: set_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DevConsole::DisplayedLogLine::*)(::System::Type*)>(&GlobalNamespace::DevConsole::DisplayedLogLine::set_data)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DevConsole::DisplayedLogLine*), "set_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DevConsole::DisplayedLogLine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
