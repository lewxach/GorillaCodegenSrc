// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DevConsole/MessagePayload
#include "GlobalNamespace/DevConsole_MessagePayload.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DevConsole::MessagePayload::Block);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DevConsole::MessagePayload::Block*, "", "DevConsole/MessagePayload/Block");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DevConsole/MessagePayload/Block
  // [TokenAttribute] Offset: FFFFFFFF
  class DevConsole::MessagePayload::Block : public ::Il2CppObject {
    public:
    public:
    // public System.String type
    // Size: 0x8
    // Offset: 0x10
    ::StringW type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public DevConsole/MessagePayload/TextBlock text
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::DevConsole::MessagePayload::TextBlock* text;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DevConsole::MessagePayload::TextBlock*) == 0x8);
    public:
    // Get instance field reference: public System.String type
    [[deprecated("Use field access instead!")]] ::StringW& dyn_type();
    // Get instance field reference: public DevConsole/MessagePayload/TextBlock text
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DevConsole::MessagePayload::TextBlock*& dyn_text();
    // public System.Void .ctor(System.String markdownText)
    // Offset: 0x279A868
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DevConsole::MessagePayload::Block* New_ctor(::StringW markdownText) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DevConsole::MessagePayload::Block::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DevConsole::MessagePayload::Block*, creationType>(markdownText)));
    }
  }; // DevConsole/MessagePayload/Block
  #pragma pack(pop)
  static check_size<sizeof(DevConsole::MessagePayload::Block), 24 + sizeof(::GlobalNamespace::DevConsole::MessagePayload::TextBlock*)> __GlobalNamespace_DevConsole_MessagePayload_BlockSizeCheck;
  static_assert(sizeof(DevConsole::MessagePayload::Block) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DevConsole::MessagePayload::Block::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
