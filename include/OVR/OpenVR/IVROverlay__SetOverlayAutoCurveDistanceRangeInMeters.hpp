// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters*, "OVR.OpenVR", "IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x497B378
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.Single fMinDistanceInMeters, System.Single fMaxDistanceInMeters)
    // Offset: 0x497B418
    ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Single fMinDistanceInMeters, System.Single fMaxDistanceInMeters, System.AsyncCallback callback, System.Object object)
    // Offset: 0x497B42C
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x497B4F8
    ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, float, float)>(&OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* fMinDistanceInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fMaxDistanceInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, float, float, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* fMinDistanceInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fMaxDistanceInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
