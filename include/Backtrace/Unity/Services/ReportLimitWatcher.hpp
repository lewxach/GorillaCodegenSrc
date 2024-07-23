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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceReport
  class BacktraceReport;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Services
namespace Backtrace::Unity::Services {
  // Forward declaring type: ReportLimitWatcher
  class ReportLimitWatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Services::ReportLimitWatcher);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Services::ReportLimitWatcher*, "Backtrace.Unity.Services", "ReportLimitWatcher");
// Type namespace: Backtrace.Unity.Services
namespace Backtrace::Unity::Services {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Services.ReportLimitWatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class ReportLimitWatcher : public ::Il2CppObject {
    public:
    public:
    // readonly System.Collections.Generic.Queue`1<System.Int64> _reportQueue
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Queue_1<int64_t>* reportQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<int64_t>*) == 0x8);
    // readonly System.Object _object
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* object;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Int64 _queueReportTime
    // Size: 0x8
    // Offset: 0x20
    int64_t queueReportTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean _watcherEnable
    // Size: 0x1
    // Offset: 0x28
    bool watcherEnable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: watcherEnable and: reportPerMin
    char __padding3[0x3] = {};
    // private System.Int32 _reportPerMin
    // Size: 0x4
    // Offset: 0x2C
    int reportPerMin;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _displayMessage
    // Size: 0x1
    // Offset: 0x30
    bool displayMessage;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _limitHit
    // Size: 0x1
    // Offset: 0x31
    bool limitHit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: readonly System.Collections.Generic.Queue`1<System.Int64> _reportQueue
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<int64_t>*& dyn__reportQueue();
    // Get instance field reference: readonly System.Object _object
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__object();
    // Get instance field reference: private readonly System.Int64 _queueReportTime
    [[deprecated("Use field access instead!")]] int64_t& dyn__queueReportTime();
    // Get instance field reference: private System.Boolean _watcherEnable
    [[deprecated("Use field access instead!")]] bool& dyn__watcherEnable();
    // Get instance field reference: private System.Int32 _reportPerMin
    [[deprecated("Use field access instead!")]] int& dyn__reportPerMin();
    // Get instance field reference: private System.Boolean _displayMessage
    [[deprecated("Use field access instead!")]] bool& dyn__displayMessage();
    // Get instance field reference: private System.Boolean _limitHit
    [[deprecated("Use field access instead!")]] bool& dyn__limitHit();
    // System.Void .ctor(System.UInt32 reportPerMin)
    // Offset: 0x2A4FE5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReportLimitWatcher* New_ctor(uint reportPerMin) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Services::ReportLimitWatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReportLimitWatcher*, creationType>(reportPerMin)));
    }
    // System.Void SetClientReportLimit(System.UInt32 reportPerMin)
    // Offset: 0x2A511DC
    void SetClientReportLimit(uint reportPerMin);
    // public System.Boolean WatchReport(System.Int64 timestamp, System.Boolean displayMessageOnLimitHit)
    // Offset: 0x2A53534
    bool WatchReport(int64_t timestamp, bool displayMessageOnLimitHit);
    // public System.Boolean WatchReport(Backtrace.Unity.Model.BacktraceReport report, System.Boolean displayMessageOnLimitHit)
    // Offset: 0x2A5E044
    bool WatchReport(::Backtrace::Unity::Model::BacktraceReport* report, bool displayMessageOnLimitHit);
    // System.Boolean ShouldDisplayMessage()
    // Offset: 0x2A5E060
    bool ShouldDisplayMessage();
    // private System.Void DisplayReportLimitHitMessage()
    // Offset: 0x2A5DF7C
    void DisplayReportLimitHitMessage();
    // private System.Void Clear()
    // Offset: 0x2A5DEC0
    void Clear();
    // System.Void Reset()
    // Offset: 0x2A5E080
    void Reset();
  }; // Backtrace.Unity.Services.ReportLimitWatcher
  #pragma pack(pop)
  static check_size<sizeof(ReportLimitWatcher), 49 + sizeof(bool)> __Backtrace_Unity_Services_ReportLimitWatcherSizeCheck;
  static_assert(sizeof(ReportLimitWatcher) == 0x32);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Services::ReportLimitWatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Services::ReportLimitWatcher::SetClientReportLimit
// Il2CppName: SetClientReportLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Services::ReportLimitWatcher::*)(uint)>(&Backtrace::Unity::Services::ReportLimitWatcher::SetClientReportLimit)> {
  static const MethodInfo* get() {
    static auto* reportPerMin = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::ReportLimitWatcher*), "SetClientReportLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reportPerMin});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::ReportLimitWatcher::WatchReport
// Il2CppName: WatchReport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Services::ReportLimitWatcher::*)(int64_t, bool)>(&Backtrace::Unity::Services::ReportLimitWatcher::WatchReport)> {
  static const MethodInfo* get() {
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* displayMessageOnLimitHit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::ReportLimitWatcher*), "WatchReport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timestamp, displayMessageOnLimitHit});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::ReportLimitWatcher::WatchReport
// Il2CppName: WatchReport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Services::ReportLimitWatcher::*)(::Backtrace::Unity::Model::BacktraceReport*, bool)>(&Backtrace::Unity::Services::ReportLimitWatcher::WatchReport)> {
  static const MethodInfo* get() {
    static auto* report = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceReport")->byval_arg;
    static auto* displayMessageOnLimitHit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::ReportLimitWatcher*), "WatchReport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{report, displayMessageOnLimitHit});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::ReportLimitWatcher::ShouldDisplayMessage
// Il2CppName: ShouldDisplayMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Services::ReportLimitWatcher::*)()>(&Backtrace::Unity::Services::ReportLimitWatcher::ShouldDisplayMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::ReportLimitWatcher*), "ShouldDisplayMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::ReportLimitWatcher::DisplayReportLimitHitMessage
// Il2CppName: DisplayReportLimitHitMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Services::ReportLimitWatcher::*)()>(&Backtrace::Unity::Services::ReportLimitWatcher::DisplayReportLimitHitMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::ReportLimitWatcher*), "DisplayReportLimitHitMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::ReportLimitWatcher::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Services::ReportLimitWatcher::*)()>(&Backtrace::Unity::Services::ReportLimitWatcher::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::ReportLimitWatcher*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::ReportLimitWatcher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Services::ReportLimitWatcher::*)()>(&Backtrace::Unity::Services::ReportLimitWatcher::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::ReportLimitWatcher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};