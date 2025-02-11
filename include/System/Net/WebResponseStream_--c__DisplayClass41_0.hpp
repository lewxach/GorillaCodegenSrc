// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebResponseStream
#include "System/Net/WebResponseStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebResponseStream::$$c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebResponseStream::$$c__DisplayClass41_0*, "System.Net", "WebResponseStream/<>c__DisplayClass41_0");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebResponseStream/<>c__DisplayClass41_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WebResponseStream::$$c__DisplayClass41_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Net.WebResponseStream <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::WebResponseStream* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebResponseStream*) == 0x8);
    // public System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 offset
    // Size: 0x4
    // Offset: 0x20
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 size
    // Size: 0x4
    // Offset: 0x24
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Net.WebResponseStream <>4__this
    [[deprecated("Use field access instead!")]] ::System::Net::WebResponseStream*& dyn_$$4__this();
    // Get instance field reference: public System.Byte[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: public System.Int32 offset
    [[deprecated("Use field access instead!")]] int& dyn_offset();
    // Get instance field reference: public System.Int32 size
    [[deprecated("Use field access instead!")]] int& dyn_size();
    // public System.Void .ctor()
    // Offset: 0x4EC2FA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebResponseStream::$$c__DisplayClass41_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebResponseStream::$$c__DisplayClass41_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebResponseStream::$$c__DisplayClass41_0*, creationType>()));
    }
    // System.Threading.Tasks.Task`1<System.Int32> <ProcessRead>b__0(System.Threading.CancellationToken ct)
    // Offset: 0x4EC4E64
    ::System::Threading::Tasks::Task_1<int>* $ProcessRead$b__0(::System::Threading::CancellationToken ct);
    // System.Void <ProcessRead>b__1()
    // Offset: 0x4EC4EA0
    void $ProcessRead$b__1();
    // System.Boolean <ProcessRead>b__2()
    // Offset: 0x4EC4EDC
    bool $ProcessRead$b__2();
  }; // System.Net.WebResponseStream/<>c__DisplayClass41_0
  #pragma pack(pop)
  static check_size<sizeof(WebResponseStream::$$c__DisplayClass41_0), 36 + sizeof(int)> __System_Net_WebResponseStream_$$c__DisplayClass41_0SizeCheck;
  static_assert(sizeof(WebResponseStream::$$c__DisplayClass41_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebResponseStream::$$c__DisplayClass41_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebResponseStream::$$c__DisplayClass41_0::$ProcessRead$b__0
// Il2CppName: <ProcessRead>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::Net::WebResponseStream::$$c__DisplayClass41_0::*)(::System::Threading::CancellationToken)>(&System::Net::WebResponseStream::$$c__DisplayClass41_0::$ProcessRead$b__0)> {
  static const MethodInfo* get() {
    static auto* ct = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream::$$c__DisplayClass41_0*), "<ProcessRead>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ct});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::$$c__DisplayClass41_0::$ProcessRead$b__1
// Il2CppName: <ProcessRead>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebResponseStream::$$c__DisplayClass41_0::*)()>(&System::Net::WebResponseStream::$$c__DisplayClass41_0::$ProcessRead$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream::$$c__DisplayClass41_0*), "<ProcessRead>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebResponseStream::$$c__DisplayClass41_0::$ProcessRead$b__2
// Il2CppName: <ProcessRead>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebResponseStream::$$c__DisplayClass41_0::*)()>(&System::Net::WebResponseStream::$$c__DisplayClass41_0::$ProcessRead$b__2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebResponseStream::$$c__DisplayClass41_0*), "<ProcessRead>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
