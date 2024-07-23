// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.CloudServices
#include "Fusion/CloudServices.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::CloudServices::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::CloudServices::$$c*, "Fusion", "CloudServices/<>c");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.CloudServices/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CloudServices::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Fusion.CloudServices/<>c <>9
    static ::Fusion::CloudServices::$$c* _get_$$9();
    // Set static field: static public readonly Fusion.CloudServices/<>c <>9
    static void _set_$$9(::Fusion::CloudServices::$$c* value);
    // Get static field: static public System.Action`1<System.String> <>9__94_0
    static ::System::Action_1<::StringW>* _get_$$9__94_0();
    // Set static field: static public System.Action`1<System.String> <>9__94_0
    static void _set_$$9__94_0(::System::Action_1<::StringW>* value);
    // Get static field: static public System.Action`1<System.String> <>9__94_1
    static ::System::Action_1<::StringW>* _get_$$9__94_1();
    // Set static field: static public System.Action`1<System.String> <>9__94_1
    static void _set_$$9__94_1(::System::Action_1<::StringW>* value);
    // Get static field: static public System.Action`1<System.String> <>9__94_2
    static ::System::Action_1<::StringW>* _get_$$9__94_2();
    // Set static field: static public System.Action`1<System.String> <>9__94_2
    static void _set_$$9__94_2(::System::Action_1<::StringW>* value);
    // Get static field: static public System.Action`1<System.Exception> <>9__94_3
    static ::System::Action_1<::System::Exception*>* _get_$$9__94_3();
    // Set static field: static public System.Action`1<System.Exception> <>9__94_3
    static void _set_$$9__94_3(::System::Action_1<::System::Exception*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2B031A4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2B0320C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudServices::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::CloudServices::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudServices::$$c*, creationType>()));
    }
    // System.Void <InitRelayLogs>b__94_0(System.String info)
    // Offset: 0x2B03214
    void $InitRelayLogs$b__94_0(::StringW info);
    // System.Void <InitRelayLogs>b__94_1(System.String warn)
    // Offset: 0x2B03218
    void $InitRelayLogs$b__94_1(::StringW warn);
    // System.Void <InitRelayLogs>b__94_2(System.String error)
    // Offset: 0x2B0321C
    void $InitRelayLogs$b__94_2(::StringW error);
    // System.Void <InitRelayLogs>b__94_3(System.Exception exn)
    // Offset: 0x2B03220
    void $InitRelayLogs$b__94_3(::System::Exception* exn);
  }; // Fusion.CloudServices/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::CloudServices::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::CloudServices::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::CloudServices::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::CloudServices::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::CloudServices::$$c::$InitRelayLogs$b__94_0
// Il2CppName: <InitRelayLogs>b__94_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::CloudServices::$$c::*)(::StringW)>(&Fusion::CloudServices::$$c::$InitRelayLogs$b__94_0)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::CloudServices::$$c*), "<InitRelayLogs>b__94_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
// Writing MetadataGetter for method: Fusion::CloudServices::$$c::$InitRelayLogs$b__94_1
// Il2CppName: <InitRelayLogs>b__94_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::CloudServices::$$c::*)(::StringW)>(&Fusion::CloudServices::$$c::$InitRelayLogs$b__94_1)> {
  static const MethodInfo* get() {
    static auto* warn = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::CloudServices::$$c*), "<InitRelayLogs>b__94_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{warn});
  }
};
// Writing MetadataGetter for method: Fusion::CloudServices::$$c::$InitRelayLogs$b__94_2
// Il2CppName: <InitRelayLogs>b__94_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::CloudServices::$$c::*)(::StringW)>(&Fusion::CloudServices::$$c::$InitRelayLogs$b__94_2)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::CloudServices::$$c*), "<InitRelayLogs>b__94_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: Fusion::CloudServices::$$c::$InitRelayLogs$b__94_3
// Il2CppName: <InitRelayLogs>b__94_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::CloudServices::$$c::*)(::System::Exception*)>(&Fusion::CloudServices::$$c::$InitRelayLogs$b__94_3)> {
  static const MethodInfo* get() {
    static auto* exn = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::CloudServices::$$c*), "<InitRelayLogs>b__94_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exn});
  }
};