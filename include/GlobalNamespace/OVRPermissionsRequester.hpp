// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Permission because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Android
namespace UnityEngine::Android {
  // Forward declaring type: PermissionCallbacks
  class PermissionCallbacks;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRPermissionsRequester
  class OVRPermissionsRequester;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPermissionsRequester);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPermissionsRequester*, "", "OVRPermissionsRequester");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPermissionsRequester
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPermissionsRequester : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRPermissionsRequester::Permission
    struct Permission;
    // Nested type: ::GlobalNamespace::OVRPermissionsRequester::$$c
    class $$c;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRPermissionsRequester/Permission
    // [TokenAttribute] Offset: FFFFFFFF
    struct Permission/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Permission
      constexpr Permission(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRPermissionsRequester/Permission FaceTracking
      static constexpr const int FaceTracking = 0;
      // Get static field: static public OVRPermissionsRequester/Permission FaceTracking
      static ::GlobalNamespace::OVRPermissionsRequester::Permission _get_FaceTracking();
      // Set static field: static public OVRPermissionsRequester/Permission FaceTracking
      static void _set_FaceTracking(::GlobalNamespace::OVRPermissionsRequester::Permission value);
      // static field const value: static public OVRPermissionsRequester/Permission BodyTracking
      static constexpr const int BodyTracking = 1;
      // Get static field: static public OVRPermissionsRequester/Permission BodyTracking
      static ::GlobalNamespace::OVRPermissionsRequester::Permission _get_BodyTracking();
      // Set static field: static public OVRPermissionsRequester/Permission BodyTracking
      static void _set_BodyTracking(::GlobalNamespace::OVRPermissionsRequester::Permission value);
      // static field const value: static public OVRPermissionsRequester/Permission EyeTracking
      static constexpr const int EyeTracking = 2;
      // Get static field: static public OVRPermissionsRequester/Permission EyeTracking
      static ::GlobalNamespace::OVRPermissionsRequester::Permission _get_EyeTracking();
      // Set static field: static public OVRPermissionsRequester/Permission EyeTracking
      static void _set_EyeTracking(::GlobalNamespace::OVRPermissionsRequester::Permission value);
      // static field const value: static public OVRPermissionsRequester/Permission Scene
      static constexpr const int Scene = 3;
      // Get static field: static public OVRPermissionsRequester/Permission Scene
      static ::GlobalNamespace::OVRPermissionsRequester::Permission _get_Scene();
      // Set static field: static public OVRPermissionsRequester/Permission Scene
      static void _set_Scene(::GlobalNamespace::OVRPermissionsRequester::Permission value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // OVRPermissionsRequester/Permission
    #pragma pack(pop)
    static check_size<sizeof(OVRPermissionsRequester::Permission), 0 + sizeof(int)> __GlobalNamespace_OVRPermissionsRequester_PermissionSizeCheck;
    static_assert(sizeof(OVRPermissionsRequester::Permission) == 0x4);
    // Get static field: static private System.Action`1<System.String> PermissionGranted
    static ::System::Action_1<::StringW>* _get_PermissionGranted();
    // Set static field: static private System.Action`1<System.String> PermissionGranted
    static void _set_PermissionGranted(::System::Action_1<::StringW>* value);
    // static field const value: static private System.String FaceTrackingPermission
    static constexpr const char* FaceTrackingPermission = "com.oculus.permission.FACE_TRACKING";
    // Get static field: static private System.String FaceTrackingPermission
    static ::StringW _get_FaceTrackingPermission();
    // Set static field: static private System.String FaceTrackingPermission
    static void _set_FaceTrackingPermission(::StringW value);
    // static field const value: static private System.String EyeTrackingPermission
    static constexpr const char* EyeTrackingPermission = "com.oculus.permission.EYE_TRACKING";
    // Get static field: static private System.String EyeTrackingPermission
    static ::StringW _get_EyeTrackingPermission();
    // Set static field: static private System.String EyeTrackingPermission
    static void _set_EyeTrackingPermission(::StringW value);
    // static field const value: static private System.String BodyTrackingPermission
    static constexpr const char* BodyTrackingPermission = "com.oculus.permission.BODY_TRACKING";
    // Get static field: static private System.String BodyTrackingPermission
    static ::StringW _get_BodyTrackingPermission();
    // Set static field: static private System.String BodyTrackingPermission
    static void _set_BodyTrackingPermission(::StringW value);
    // static field const value: static private System.String ScenePermission
    static constexpr const char* ScenePermission = "com.oculus.permission.USE_SCENE";
    // Get static field: static private System.String ScenePermission
    static ::StringW _get_ScenePermission();
    // Set static field: static private System.String ScenePermission
    static void _set_ScenePermission(::StringW value);
    // static public System.Void add_PermissionGranted(System.Action`1<System.String> value)
    // Offset: 0x48EC970
    static void add_PermissionGranted(::System::Action_1<::StringW>* value);
    // static public System.Void remove_PermissionGranted(System.Action`1<System.String> value)
    // Offset: 0x48ECA3C
    static void remove_PermissionGranted(::System::Action_1<::StringW>* value);
    // static public System.String GetPermissionId(OVRPermissionsRequester/Permission permission)
    // Offset: 0x48ECB08
    static ::StringW GetPermissionId(::GlobalNamespace::OVRPermissionsRequester::Permission permission);
    // static private System.Boolean IsPermissionSupportedByPlatform(OVRPermissionsRequester/Permission permission)
    // Offset: 0x48ECBE8
    static bool IsPermissionSupportedByPlatform(::GlobalNamespace::OVRPermissionsRequester::Permission permission);
    // static public System.Boolean IsPermissionGranted(OVRPermissionsRequester/Permission permission)
    // Offset: 0x48ECF90
    static bool IsPermissionGranted(::GlobalNamespace::OVRPermissionsRequester::Permission permission);
    // static public System.Void Request(System.Collections.Generic.IEnumerable`1<OVRPermissionsRequester/Permission> permissions)
    // Offset: 0x48ECFA4
    static void Request(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester::Permission>* permissions);
    // static private System.Void RequestPermissions(System.Collections.Generic.IEnumerable`1<OVRPermissionsRequester/Permission> permissions)
    // Offset: 0x48ECFA8
    static void RequestPermissions(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester::Permission>* permissions);
    // static private System.Boolean ShouldRequestPermission(OVRPermissionsRequester/Permission permission)
    // Offset: 0x48ED3A0
    static bool ShouldRequestPermission(::GlobalNamespace::OVRPermissionsRequester::Permission permission);
    // static private UnityEngine.Android.PermissionCallbacks BuildPermissionCallbacks()
    // Offset: 0x48ED49C
    static ::UnityEngine::Android::PermissionCallbacks* BuildPermissionCallbacks();
  }; // OVRPermissionsRequester
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPermissionsRequester::Permission, "", "OVRPermissionsRequester/Permission");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPermissionsRequester::add_PermissionGranted
// Il2CppName: add_PermissionGranted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&GlobalNamespace::OVRPermissionsRequester::add_PermissionGranted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPermissionsRequester*), "add_PermissionGranted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPermissionsRequester::remove_PermissionGranted
// Il2CppName: remove_PermissionGranted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&GlobalNamespace::OVRPermissionsRequester::remove_PermissionGranted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPermissionsRequester*), "remove_PermissionGranted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPermissionsRequester::GetPermissionId
// Il2CppName: GetPermissionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::OVRPermissionsRequester::Permission)>(&GlobalNamespace::OVRPermissionsRequester::GetPermissionId)> {
  static const MethodInfo* get() {
    static auto* permission = &::il2cpp_utils::GetClassFromName("", "OVRPermissionsRequester/Permission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPermissionsRequester*), "GetPermissionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permission});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPermissionsRequester::IsPermissionSupportedByPlatform
// Il2CppName: IsPermissionSupportedByPlatform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRPermissionsRequester::Permission)>(&GlobalNamespace::OVRPermissionsRequester::IsPermissionSupportedByPlatform)> {
  static const MethodInfo* get() {
    static auto* permission = &::il2cpp_utils::GetClassFromName("", "OVRPermissionsRequester/Permission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPermissionsRequester*), "IsPermissionSupportedByPlatform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permission});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPermissionsRequester::IsPermissionGranted
// Il2CppName: IsPermissionGranted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRPermissionsRequester::Permission)>(&GlobalNamespace::OVRPermissionsRequester::IsPermissionGranted)> {
  static const MethodInfo* get() {
    static auto* permission = &::il2cpp_utils::GetClassFromName("", "OVRPermissionsRequester/Permission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPermissionsRequester*), "IsPermissionGranted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permission});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPermissionsRequester::Request
// Il2CppName: Request
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester::Permission>*)>(&GlobalNamespace::OVRPermissionsRequester::Request)> {
  static const MethodInfo* get() {
    static auto* permissions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRPermissionsRequester/Permission")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPermissionsRequester*), "Request", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permissions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPermissionsRequester::RequestPermissions
// Il2CppName: RequestPermissions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRPermissionsRequester::Permission>*)>(&GlobalNamespace::OVRPermissionsRequester::RequestPermissions)> {
  static const MethodInfo* get() {
    static auto* permissions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRPermissionsRequester/Permission")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPermissionsRequester*), "RequestPermissions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permissions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPermissionsRequester::ShouldRequestPermission
// Il2CppName: ShouldRequestPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRPermissionsRequester::Permission)>(&GlobalNamespace::OVRPermissionsRequester::ShouldRequestPermission)> {
  static const MethodInfo* get() {
    static auto* permission = &::il2cpp_utils::GetClassFromName("", "OVRPermissionsRequester/Permission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPermissionsRequester*), "ShouldRequestPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permission});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPermissionsRequester::BuildPermissionCallbacks
// Il2CppName: BuildPermissionCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Android::PermissionCallbacks* (*)()>(&GlobalNamespace::OVRPermissionsRequester::BuildPermissionCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPermissionsRequester*), "BuildPermissionCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};