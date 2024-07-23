// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.EncoderFallbackBuffer
#include "System/Text/EncoderFallbackBuffer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderReplacementFallback
  class EncoderReplacementFallback;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: EncoderReplacementFallbackBuffer
  class EncoderReplacementFallbackBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::EncoderReplacementFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderReplacementFallbackBuffer*, "System.Text", "EncoderReplacementFallbackBuffer");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncoderReplacementFallbackBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class EncoderReplacementFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
    public:
    public:
    // private System.String _strDefault
    // Size: 0x8
    // Offset: 0x30
    ::StringW strDefault;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _fallbackCount
    // Size: 0x4
    // Offset: 0x38
    int fallbackCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _fallbackIndex
    // Size: 0x4
    // Offset: 0x3C
    int fallbackIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String _strDefault
    [[deprecated("Use field access instead!")]] ::StringW& dyn__strDefault();
    // Get instance field reference: private System.Int32 _fallbackCount
    [[deprecated("Use field access instead!")]] int& dyn__fallbackCount();
    // Get instance field reference: private System.Int32 _fallbackIndex
    [[deprecated("Use field access instead!")]] int& dyn__fallbackIndex();
    // public System.Void .ctor(System.Text.EncoderReplacementFallback fallback)
    // Offset: 0x44CBE70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderReplacementFallbackBuffer* New_ctor(::System::Text::EncoderReplacementFallback* fallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::EncoderReplacementFallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderReplacementFallbackBuffer*, creationType>(fallback)));
    }
    // public override System.Boolean Fallback(System.Char charUnknown, System.Int32 index)
    // Offset: 0x44CBF7C
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback(System.Char charUnknown, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknown, int index);
    // public override System.Boolean Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    // Offset: 0x44CC0BC
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index);
    // public override System.Char GetNextChar()
    // Offset: 0x44CC2CC
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Char EncoderFallbackBuffer::GetNextChar()
    ::Il2CppChar GetNextChar();
    // public override System.Boolean MovePrevious()
    // Offset: 0x44CC31C
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::MovePrevious()
    bool MovePrevious();
    // public override System.Int32 get_Remaining()
    // Offset: 0x44CC34C
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Int32 EncoderFallbackBuffer::get_Remaining()
    int get_Remaining();
    // public override System.Void Reset()
    // Offset: 0x44CC358
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Void EncoderFallbackBuffer::Reset()
    void Reset();
  }; // System.Text.EncoderReplacementFallbackBuffer
  #pragma pack(pop)
  static check_size<sizeof(EncoderReplacementFallbackBuffer), 60 + sizeof(int)> __System_Text_EncoderReplacementFallbackBufferSizeCheck;
  static_assert(sizeof(EncoderReplacementFallbackBuffer) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::EncoderReplacementFallbackBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::EncoderReplacementFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderReplacementFallbackBuffer::*)(::Il2CppChar, int)>(&System::Text::EncoderReplacementFallbackBuffer::Fallback)> {
  static const MethodInfo* get() {
    static auto* charUnknown = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderReplacementFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charUnknown, index});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderReplacementFallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderReplacementFallbackBuffer::*)(::Il2CppChar, ::Il2CppChar, int)>(&System::Text::EncoderReplacementFallbackBuffer::Fallback)> {
  static const MethodInfo* get() {
    static auto* charUnknownHigh = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* charUnknownLow = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderReplacementFallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charUnknownHigh, charUnknownLow, index});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderReplacementFallbackBuffer::GetNextChar
// Il2CppName: GetNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::EncoderReplacementFallbackBuffer::*)()>(&System::Text::EncoderReplacementFallbackBuffer::GetNextChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderReplacementFallbackBuffer*), "GetNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderReplacementFallbackBuffer::MovePrevious
// Il2CppName: MovePrevious
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderReplacementFallbackBuffer::*)()>(&System::Text::EncoderReplacementFallbackBuffer::MovePrevious)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderReplacementFallbackBuffer*), "MovePrevious", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderReplacementFallbackBuffer::get_Remaining
// Il2CppName: get_Remaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncoderReplacementFallbackBuffer::*)()>(&System::Text::EncoderReplacementFallbackBuffer::get_Remaining)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderReplacementFallbackBuffer*), "get_Remaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderReplacementFallbackBuffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::EncoderReplacementFallbackBuffer::*)()>(&System::Text::EncoderReplacementFallbackBuffer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderReplacementFallbackBuffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};