// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.StreamWriter
#include "System/IO/StreamWriter.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamWriter::$WriteAsyncInternal$d__59, "System.IO", "StreamWriter/<WriteAsyncInternal>d__59");
// Type namespace: System.IO
namespace System::IO {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IO.StreamWriter/<WriteAsyncInternal>d__59
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct StreamWriter::$WriteAsyncInternal$d__59/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public System.String value
    // Size: 0x8
    // Offset: 0x20
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 charPos
    // Size: 0x4
    // Offset: 0x28
    int charPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 charLen
    // Size: 0x4
    // Offset: 0x2C
    int charLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.IO.StreamWriter _this
    // Size: 0x8
    // Offset: 0x30
    ::System::IO::StreamWriter* _this;
    // Field size check
    static_assert(sizeof(::System::IO::StreamWriter*) == 0x8);
    // public System.Char[] charBuffer
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Il2CppChar> charBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // public System.Boolean appendNewLine
    // Size: 0x1
    // Offset: 0x40
    bool appendNewLine;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Char[] coreNewLine
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::Il2CppChar> coreNewLine;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // public System.Boolean autoFlush
    // Size: 0x1
    // Offset: 0x50
    bool autoFlush;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Int32 <count>5__2
    // Size: 0x4
    // Offset: 0x54
    int $count$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <index>5__3
    // Size: 0x4
    // Offset: 0x58
    int $index$5__3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter <>u__1
    // Size: 0x9
    // Offset: 0x60
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    // private System.Int32 <i>5__4
    // Size: 0x4
    // Offset: 0x70
    int $i$5__4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: $WriteAsyncInternal$d__59
    constexpr $WriteAsyncInternal$d__59(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::StringW value_ = {}, int charPos_ = {}, int charLen_ = {}, ::System::IO::StreamWriter* _this_ = {}, ::ArrayW<::Il2CppChar> charBuffer_ = ::ArrayW<::Il2CppChar>(static_cast<void*>(nullptr)), bool appendNewLine_ = {}, ::ArrayW<::Il2CppChar> coreNewLine_ = ::ArrayW<::Il2CppChar>(static_cast<void*>(nullptr)), bool autoFlush_ = {}, int $count$5__2_ = {}, int $index$5__3_ = {}, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1_ = {}, int $i$5__4_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, value{value_}, charPos{charPos_}, charLen{charLen_}, _this{_this_}, charBuffer{charBuffer_}, appendNewLine{appendNewLine_}, coreNewLine{coreNewLine_}, autoFlush{autoFlush_}, $count$5__2{$count$5__2_}, $index$5__3{$index$5__3_}, $$u__1{$$u__1_}, $i$5__4{$i$5__4_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // Get instance field reference: public System.Int32 charPos
    [[deprecated("Use field access instead!")]] int& dyn_charPos();
    // Get instance field reference: public System.Int32 charLen
    [[deprecated("Use field access instead!")]] int& dyn_charLen();
    // Get instance field reference: public System.IO.StreamWriter _this
    [[deprecated("Use field access instead!")]] ::System::IO::StreamWriter*& dyn__this();
    // Get instance field reference: public System.Char[] charBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_charBuffer();
    // Get instance field reference: public System.Boolean appendNewLine
    [[deprecated("Use field access instead!")]] bool& dyn_appendNewLine();
    // Get instance field reference: public System.Char[] coreNewLine
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_coreNewLine();
    // Get instance field reference: public System.Boolean autoFlush
    [[deprecated("Use field access instead!")]] bool& dyn_autoFlush();
    // Get instance field reference: private System.Int32 <count>5__2
    [[deprecated("Use field access instead!")]] int& dyn_$count$5__2();
    // Get instance field reference: private System.Int32 <index>5__3
    [[deprecated("Use field access instead!")]] int& dyn_$index$5__3();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Int32 <i>5__4
    [[deprecated("Use field access instead!")]] int& dyn_$i$5__4();
    // private System.Void MoveNext()
    // Offset: 0x45A6D08
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x45A71A4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.IO.StreamWriter/<WriteAsyncInternal>d__59
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::StreamWriter::$WriteAsyncInternal$d__59::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::$WriteAsyncInternal$d__59::*)()>(&System::IO::StreamWriter::$WriteAsyncInternal$d__59::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter::$WriteAsyncInternal$d__59), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::$WriteAsyncInternal$d__59::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::$WriteAsyncInternal$d__59::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::IO::StreamWriter::$WriteAsyncInternal$d__59::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter::$WriteAsyncInternal$d__59), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
