// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventLevel
  struct EventLevel;
  // Forward declaring type: EventKeywords
  struct EventKeywords;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSource
  class EventSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::EventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventSource*, "System.Diagnostics.Tracing", "EventSource");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventSource
  // [TokenAttribute] Offset: FFFFFFFF
  class EventSource : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::System::Diagnostics::Tracing::EventSource::EventData
    struct EventData;
    public:
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Name;
    }
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // public System.Void .ctor(System.String eventSourceName)
    // Offset: 0x461B6B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSource* New_ctor(::StringW eventSourceName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSource*, creationType>(eventSourceName)));
    }
    // System.Void .ctor(System.Guid eventSourceGuid, System.String eventSourceName)
    // Offset: 0x461B6E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSource* New_ctor(::System::Guid eventSourceGuid, ::StringW eventSourceName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSource*, creationType>(eventSourceGuid, eventSourceName)));
    }
    // private System.Void set_Name(System.String value)
    // Offset: 0x461B7B0
    void set_Name(::StringW value);
    // public System.Boolean IsEnabled()
    // Offset: 0x461B7B8
    bool IsEnabled();
    // public System.Boolean IsEnabled(System.Diagnostics.Tracing.EventLevel level, System.Diagnostics.Tracing.EventKeywords keywords)
    // Offset: 0x461B7C0
    bool IsEnabled(::System::Diagnostics::Tracing::EventLevel level, ::System::Diagnostics::Tracing::EventKeywords keywords);
    // public System.Void Dispose()
    // Offset: 0x461B7C8
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x461B834
    void Dispose(bool disposing);
    // protected System.Void WriteEvent(System.Int32 eventId, System.Int32 arg1)
    // Offset: 0x461B838
    void WriteEvent(int eventId, int arg1);
    // protected System.Void WriteEvent(System.Int32 eventId, System.String arg1)
    // Offset: 0x461B904
    void WriteEvent(int eventId, ::StringW arg1);
    // protected System.Void WriteEvent(System.Int32 eventId, System.Int32 arg1, System.Int32 arg2)
    // Offset: 0x461B998
    void WriteEvent(int eventId, int arg1, int arg2);
    // protected System.Void WriteEvent(System.Int32 eventId, System.Int32 arg1, System.Int32 arg2, System.Int32 arg3)
    // Offset: 0x461BAB4
    void WriteEvent(int eventId, int arg1, int arg2, int arg3);
    // protected System.Void WriteEvent(System.Int32 eventId, System.Int64 arg1)
    // Offset: 0x461BC24
    void WriteEvent(int eventId, int64_t arg1);
    // protected System.Void WriteEvent(System.Int32 eventId, System.Int64 arg1, System.String arg2)
    // Offset: 0x461BCEC
    void WriteEvent(int eventId, int64_t arg1, ::StringW arg2);
    // protected System.Void WriteEvent(System.Int32 eventId, params System.Object[] args)
    // Offset: 0x461B900
    void WriteEvent(int eventId, ::ArrayW<::Il2CppObject*> args);
    // protected System.Void WriteEvent(System.Int32 eventId, System.String arg1, System.String arg2, System.String arg3)
    // Offset: 0x461BDF4
    void WriteEvent(int eventId, ::StringW arg1, ::StringW arg2, ::StringW arg3);
    // protected System.Void WriteEventCore(System.Int32 eventId, System.Int32 eventDataCount, System.Diagnostics.Tracing.EventSource/EventData* data)
    // Offset: 0x461BF00
    void WriteEventCore(int eventId, int eventDataCount, ::System::Diagnostics::Tracing::EventSource::EventData* data);
    // protected System.Void .ctor()
    // Offset: 0x461B66C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSource*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x461B710
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Diagnostics.Tracing.EventSource
  #pragma pack(pop)
  static check_size<sizeof(EventSource), 16 + sizeof(::StringW)> __System_Diagnostics_Tracing_EventSourceSizeCheck;
  static_assert(sizeof(EventSource) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)(::StringW)>(&System::Diagnostics::Tracing::EventSource::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::IsEnabled
// Il2CppName: IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::Tracing::EventSource::*)()>(&System::Diagnostics::Tracing::EventSource::IsEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::IsEnabled
// Il2CppName: IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::Tracing::EventSource::*)(::System::Diagnostics::Tracing::EventLevel, ::System::Diagnostics::Tracing::EventKeywords)>(&System::Diagnostics::Tracing::EventSource::IsEnabled)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventLevel")->byval_arg;
    static auto* keywords = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventKeywords")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, keywords});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)()>(&System::Diagnostics::Tracing::EventSource::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)(bool)>(&System::Diagnostics::Tracing::EventSource::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::WriteEvent
// Il2CppName: WriteEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)(int, int)>(&System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  static const MethodInfo* get() {
    static auto* eventId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "WriteEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventId, arg1});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::WriteEvent
// Il2CppName: WriteEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)(int, ::StringW)>(&System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  static const MethodInfo* get() {
    static auto* eventId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "WriteEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventId, arg1});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::WriteEvent
// Il2CppName: WriteEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)(int, int, int)>(&System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  static const MethodInfo* get() {
    static auto* eventId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "WriteEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventId, arg1, arg2});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::WriteEvent
// Il2CppName: WriteEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)(int, int, int, int)>(&System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  static const MethodInfo* get() {
    static auto* eventId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* arg3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "WriteEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventId, arg1, arg2, arg3});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::WriteEvent
// Il2CppName: WriteEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)(int, int64_t)>(&System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  static const MethodInfo* get() {
    static auto* eventId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "WriteEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventId, arg1});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::WriteEvent
// Il2CppName: WriteEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)(int, int64_t, ::StringW)>(&System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  static const MethodInfo* get() {
    static auto* eventId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "WriteEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventId, arg1, arg2});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::WriteEvent
// Il2CppName: WriteEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)(int, ::ArrayW<::Il2CppObject*>)>(&System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  static const MethodInfo* get() {
    static auto* eventId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "WriteEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventId, args});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::WriteEvent
// Il2CppName: WriteEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)(int, ::StringW, ::StringW, ::StringW)>(&System::Diagnostics::Tracing::EventSource::WriteEvent)> {
  static const MethodInfo* get() {
    static auto* eventId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arg3 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "WriteEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventId, arg1, arg2, arg3});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::WriteEventCore
// Il2CppName: WriteEventCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)(int, int, ::System::Diagnostics::Tracing::EventSource::EventData*)>(&System::Diagnostics::Tracing::EventSource::WriteEventCore)> {
  static const MethodInfo* get() {
    static auto* eventId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* eventDataCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventSource/EventData"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "WriteEventCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventId, eventDataCount, data});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventSource::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventSource::*)()>(&System::Diagnostics::Tracing::EventSource::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventSource*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};