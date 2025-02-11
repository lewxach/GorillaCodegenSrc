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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DevConsole::MessagePayload);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DevConsole::MessagePayload*, "", "DevConsole/MessagePayload");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DevConsole/MessagePayload
  // [TokenAttribute] Offset: FFFFFFFF
  class DevConsole::MessagePayload : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::DevConsole::MessagePayload::Block
    class Block;
    // Nested type: ::GlobalNamespace::DevConsole::MessagePayload::TextBlock
    class TextBlock;
    // Nested type: ::GlobalNamespace::DevConsole::MessagePayload::$$c
    class $$c;
    public:
    // public DevConsole/MessagePayload/Block[] blocks
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::DevConsole::MessagePayload::Block*> blocks;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::DevConsole::MessagePayload::Block*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::GlobalNamespace::DevConsole::MessagePayload::Block*>
    constexpr operator ::ArrayW<::GlobalNamespace::DevConsole::MessagePayload::Block*>() const noexcept {
      return blocks;
    }
    // Get instance field reference: public DevConsole/MessagePayload/Block[] blocks
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::DevConsole::MessagePayload::Block*>& dyn_blocks();
    // static public System.Collections.Generic.List`1<DevConsole/MessagePayload> GeneratePayloads(System.String username, System.Collections.Generic.List`1<DevConsole/LogEntry> entries)
    // Offset: 0x2799F74
    static ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole::MessagePayload*>* GeneratePayloads(::StringW username, ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole::LogEntry*>* entries);
    // public System.Void .ctor()
    // Offset: 0x279A940
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DevConsole::MessagePayload* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DevConsole::MessagePayload::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DevConsole::MessagePayload*, creationType>()));
    }
  }; // DevConsole/MessagePayload
  #pragma pack(pop)
  static check_size<sizeof(DevConsole::MessagePayload), 16 + sizeof(::ArrayW<::GlobalNamespace::DevConsole::MessagePayload::Block*>)> __GlobalNamespace_DevConsole_MessagePayloadSizeCheck;
  static_assert(sizeof(DevConsole::MessagePayload) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DevConsole::MessagePayload::GeneratePayloads
// Il2CppName: GeneratePayloads
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole::MessagePayload*>* (*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole::LogEntry*>*)>(&GlobalNamespace::DevConsole::MessagePayload::GeneratePayloads)> {
  static const MethodInfo* get() {
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* entries = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "DevConsole/LogEntry")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DevConsole::MessagePayload*), "GeneratePayloads", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{username, entries});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DevConsole::MessagePayload::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
