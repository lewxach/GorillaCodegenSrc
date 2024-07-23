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
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeGssCredHandle
  class SafeGssCredHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeGssCredHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeGssCredHandle*, "Microsoft.Win32.SafeHandles", "SafeGssCredHandle");
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.SafeHandles.SafeGssCredHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class SafeGssCredHandle : public ::System::Runtime::InteropServices::SafeHandle {
    public:
    // static public Microsoft.Win32.SafeHandles.SafeGssCredHandle Create(System.String username, System.String password, System.Boolean isNtlmOnly)
    // Offset: 0x4F5D0AC
    static ::Microsoft::Win32::SafeHandles::SafeGssCredHandle* Create(::StringW username, ::StringW password, bool isNtlmOnly);
    // private System.Void .ctor()
    // Offset: 0x4F5D358
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeGssCredHandle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Microsoft::Win32::SafeHandles::SafeGssCredHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeGssCredHandle*, creationType>()));
    }
    // public override System.Boolean get_IsInvalid()
    // Offset: 0x4F5D368
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::get_IsInvalid()
    bool get_IsInvalid();
    // protected override System.Boolean ReleaseHandle()
    // Offset: 0x4F5D378
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::ReleaseHandle()
    bool ReleaseHandle();
  }; // Microsoft.Win32.SafeHandles.SafeGssCredHandle
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeGssCredHandle::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeGssCredHandle* (*)(::StringW, ::StringW, bool)>(&Microsoft::Win32::SafeHandles::SafeGssCredHandle::Create)> {
  static const MethodInfo* get() {
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isNtlmOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafeGssCredHandle*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{username, password, isNtlmOnly});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeGssCredHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeGssCredHandle::get_IsInvalid
// Il2CppName: get_IsInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::SafeHandles::SafeGssCredHandle::*)()>(&Microsoft::Win32::SafeHandles::SafeGssCredHandle::get_IsInvalid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafeGssCredHandle*), "get_IsInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeGssCredHandle::ReleaseHandle
// Il2CppName: ReleaseHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::SafeHandles::SafeGssCredHandle::*)()>(&Microsoft::Win32::SafeHandles::SafeGssCredHandle::ReleaseHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafeGssCredHandle*), "ReleaseHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};