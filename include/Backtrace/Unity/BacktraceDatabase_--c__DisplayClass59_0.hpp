// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.BacktraceDatabase
#include "Backtrace/Unity/BacktraceDatabase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Backtrace::Unity::Model::Database
namespace Backtrace::Unity::Model::Database {
  // Forward declaring type: BacktraceDatabaseRecord
  class BacktraceDatabaseRecord;
}
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceResult
  class BacktraceResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::BacktraceDatabase::$$c__DisplayClass59_0);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::BacktraceDatabase::$$c__DisplayClass59_0*, "Backtrace.Unity", "BacktraceDatabase/<>c__DisplayClass59_0");
// Type namespace: Backtrace.Unity
namespace Backtrace::Unity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.BacktraceDatabase/<>c__DisplayClass59_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BacktraceDatabase::$$c__DisplayClass59_0 : public ::Il2CppObject {
    public:
    public:
    // public Backtrace.Unity.Model.Database.BacktraceDatabaseRecord record
    // Size: 0x8
    // Offset: 0x10
    ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* record;
    // Field size check
    static_assert(sizeof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*) == 0x8);
    // public Backtrace.Unity.BacktraceDatabase <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::Backtrace::Unity::BacktraceDatabase* $$4__this;
    // Field size check
    static_assert(sizeof(::Backtrace::Unity::BacktraceDatabase*) == 0x8);
    public:
    // Get instance field reference: public Backtrace.Unity.Model.Database.BacktraceDatabaseRecord record
    [[deprecated("Use field access instead!")]] ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*& dyn_record();
    // Get instance field reference: public Backtrace.Unity.BacktraceDatabase <>4__this
    [[deprecated("Use field access instead!")]] ::Backtrace::Unity::BacktraceDatabase*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x2A56E7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceDatabase::$$c__DisplayClass59_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::BacktraceDatabase::$$c__DisplayClass59_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceDatabase::$$c__DisplayClass59_0*, creationType>()));
    }
    // System.Void <FlushRecord>b__0(Backtrace.Unity.Model.BacktraceResult result)
    // Offset: 0x2A57F00
    void $FlushRecord$b__0(::Backtrace::Unity::Model::BacktraceResult* result);
  }; // Backtrace.Unity.BacktraceDatabase/<>c__DisplayClass59_0
  #pragma pack(pop)
  static check_size<sizeof(BacktraceDatabase::$$c__DisplayClass59_0), 24 + sizeof(::Backtrace::Unity::BacktraceDatabase*)> __Backtrace_Unity_BacktraceDatabase_$$c__DisplayClass59_0SizeCheck;
  static_assert(sizeof(BacktraceDatabase::$$c__DisplayClass59_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::BacktraceDatabase::$$c__DisplayClass59_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::BacktraceDatabase::$$c__DisplayClass59_0::$FlushRecord$b__0
// Il2CppName: <FlushRecord>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::BacktraceDatabase::$$c__DisplayClass59_0::*)(::Backtrace::Unity::Model::BacktraceResult*)>(&Backtrace::Unity::BacktraceDatabase::$$c__DisplayClass59_0::$FlushRecord$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::BacktraceDatabase::$$c__DisplayClass59_0*), "<FlushRecord>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
