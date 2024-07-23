// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_55_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_55_0*, "", "OVRPlugin/OVRP_1_55_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_55_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_55_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Result ovrp_GetSkeleton2(OVRPlugin/SkeletonType skeletonType, out OVRPlugin/Skeleton2Internal skeleton)
    // Offset: 0x491291C
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetSkeleton2(::GlobalNamespace::OVRPlugin::SkeletonType skeletonType, ByRef<::GlobalNamespace::OVRPlugin::Skeleton2Internal> skeleton);
    // static public OVRPlugin/Result ovrp_PollEvent(ref OVRPlugin/EventDataBuffer eventDataBuffer)
    // Offset: 0x49129A0
    static ::GlobalNamespace::OVRPlugin::Result ovrp_PollEvent(ByRef<::GlobalNamespace::OVRPlugin::EventDataBuffer> eventDataBuffer);
    // static public OVRPlugin/Result ovrp_GetNativeXrApiType(out OVRPlugin/XrApi xrApi)
    // Offset: 0x4912A8C
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetNativeXrApiType(ByRef<::GlobalNamespace::OVRPlugin::XrApi> xrApi);
    // static public OVRPlugin/Result ovrp_GetNativeOpenXRHandles(out System.UInt64 xrInstance, out System.UInt64 xrSession)
    // Offset: 0x4912B08
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetNativeOpenXRHandles(ByRef<uint64_t> xrInstance, ByRef<uint64_t> xrSession);
    // static private System.Void .cctor()
    // Offset: 0x4912B8C
    static void _cctor();
  }; // OVRPlugin/OVRP_1_55_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_55_0::ovrp_GetSkeleton2
// Il2CppName: ovrp_GetSkeleton2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::SkeletonType, ByRef<::GlobalNamespace::OVRPlugin::Skeleton2Internal>)>(&GlobalNamespace::OVRPlugin::OVRP_1_55_0::ovrp_GetSkeleton2)> {
  static const MethodInfo* get() {
    static auto* skeletonType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/SkeletonType")->byval_arg;
    static auto* skeleton = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Skeleton2Internal")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_55_0*), "ovrp_GetSkeleton2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skeletonType, skeleton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_55_0::ovrp_PollEvent
// Il2CppName: ovrp_PollEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::EventDataBuffer>)>(&GlobalNamespace::OVRPlugin::OVRP_1_55_0::ovrp_PollEvent)> {
  static const MethodInfo* get() {
    static auto* eventDataBuffer = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/EventDataBuffer")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_55_0*), "ovrp_PollEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventDataBuffer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_55_0::ovrp_GetNativeXrApiType
// Il2CppName: ovrp_GetNativeXrApiType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::XrApi>)>(&GlobalNamespace::OVRPlugin::OVRP_1_55_0::ovrp_GetNativeXrApiType)> {
  static const MethodInfo* get() {
    static auto* xrApi = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/XrApi")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_55_0*), "ovrp_GetNativeXrApiType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xrApi});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_55_0::ovrp_GetNativeOpenXRHandles
// Il2CppName: ovrp_GetNativeOpenXRHandles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<uint64_t>, ByRef<uint64_t>)>(&GlobalNamespace::OVRPlugin::OVRP_1_55_0::ovrp_GetNativeOpenXRHandles)> {
  static const MethodInfo* get() {
    static auto* xrInstance = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* xrSession = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_55_0*), "ovrp_GetNativeOpenXRHandles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xrInstance, xrSession});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_55_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_55_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_55_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};