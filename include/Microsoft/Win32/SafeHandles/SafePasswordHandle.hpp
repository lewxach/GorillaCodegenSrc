// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.InteropServices.SafeHandle
#include "System/Runtime/InteropServices/SafeHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafePasswordHandle
  class SafePasswordHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafePasswordHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafePasswordHandle*, "Microsoft.Win32.SafeHandles", "SafePasswordHandle");
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.SafeHandles.SafePasswordHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class SafePasswordHandle : public ::System::Runtime::InteropServices::SafeHandle {
    public:
    // private System.IntPtr CreateHandle(System.String password)
    // Offset: 0x44BEB54
    ::System::IntPtr CreateHandle(::StringW password);
    // private System.Void FreeHandle()
    // Offset: 0x44BEBAC
    void FreeHandle();
    // public System.Void .ctor(System.String password)
    // Offset: 0x44BEC08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafePasswordHandle* New_ctor(::StringW password) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Microsoft::Win32::SafeHandles::SafePasswordHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafePasswordHandle*, creationType>(password)));
    }
    // System.String Mono_DangerousGetString()
    // Offset: 0x44BED20
    ::StringW Mono_DangerousGetString();
    // protected override System.Boolean ReleaseHandle()
    // Offset: 0x44BEC44
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::ReleaseHandle()
    bool ReleaseHandle();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x44BEC88
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Void SafeHandle::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Boolean get_IsInvalid()
    // Offset: 0x44BECF8
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::get_IsInvalid()
    bool get_IsInvalid();
  }; // Microsoft.Win32.SafeHandles.SafePasswordHandle
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafePasswordHandle::CreateHandle
// Il2CppName: CreateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Microsoft::Win32::SafeHandles::SafePasswordHandle::*)(::StringW)>(&Microsoft::Win32::SafeHandles::SafePasswordHandle::CreateHandle)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafePasswordHandle*), "CreateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafePasswordHandle::FreeHandle
// Il2CppName: FreeHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::SafeHandles::SafePasswordHandle::*)()>(&Microsoft::Win32::SafeHandles::SafePasswordHandle::FreeHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafePasswordHandle*), "FreeHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafePasswordHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafePasswordHandle::Mono_DangerousGetString
// Il2CppName: Mono_DangerousGetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Microsoft::Win32::SafeHandles::SafePasswordHandle::*)()>(&Microsoft::Win32::SafeHandles::SafePasswordHandle::Mono_DangerousGetString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafePasswordHandle*), "Mono_DangerousGetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafePasswordHandle::ReleaseHandle
// Il2CppName: ReleaseHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::SafeHandles::SafePasswordHandle::*)()>(&Microsoft::Win32::SafeHandles::SafePasswordHandle::ReleaseHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafePasswordHandle*), "ReleaseHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafePasswordHandle::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::SafeHandles::SafePasswordHandle::*)(bool)>(&Microsoft::Win32::SafeHandles::SafePasswordHandle::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafePasswordHandle*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafePasswordHandle::get_IsInvalid
// Il2CppName: get_IsInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::SafeHandles::SafePasswordHandle::*)()>(&Microsoft::Win32::SafeHandles::SafePasswordHandle::get_IsInvalid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafePasswordHandle*), "get_IsInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};