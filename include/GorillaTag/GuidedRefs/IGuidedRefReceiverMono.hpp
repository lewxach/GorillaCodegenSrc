// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour
#include "GorillaTag/GuidedRefs/IGuidedRefMonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaTag::GuidedRefs
namespace GorillaTag::GuidedRefs {
  // Forward declaring type: GuidedRefTryResolveInfo
  struct GuidedRefTryResolveInfo;
}
// Completed forward declares
// Type namespace: GorillaTag.GuidedRefs
namespace GorillaTag::GuidedRefs {
  // Forward declaring type: IGuidedRefReceiverMono
  class IGuidedRefReceiverMono;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::GuidedRefs::IGuidedRefReceiverMono);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*, "GorillaTag.GuidedRefs", "IGuidedRefReceiverMono");
// Type namespace: GorillaTag.GuidedRefs
namespace GorillaTag::GuidedRefs {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.GuidedRefs.IGuidedRefReceiverMono
  // [TokenAttribute] Offset: FFFFFFFF
  class IGuidedRefReceiverMono/*, public ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*/ {
    public:
    // Creating interface conversion operator: operator ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour
    operator ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour() noexcept {
      return *reinterpret_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(this);
    }
    // public System.Boolean GuidedRefTryResolveReference(GorillaTag.GuidedRefs.GuidedRefTryResolveInfo target)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool GuidedRefTryResolveReference(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo target);
    // public System.Int32 get_GuidedRefsWaitingToResolveCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_GuidedRefsWaitingToResolveCount();
    // public System.Void set_GuidedRefsWaitingToResolveCount(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_GuidedRefsWaitingToResolveCount(int value);
    // public System.Void OnAllGuidedRefsResolved()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnAllGuidedRefsResolved();
    // public System.Void OnGuidedRefTargetDestroyed(System.Int32 fieldId)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnGuidedRefTargetDestroyed(int fieldId);
  }; // GorillaTag.GuidedRefs.IGuidedRefReceiverMono
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::IGuidedRefReceiverMono::GuidedRefTryResolveReference
// Il2CppName: GuidedRefTryResolveReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaTag::GuidedRefs::IGuidedRefReceiverMono::*)(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo)>(&GorillaTag::GuidedRefs::IGuidedRefReceiverMono::GuidedRefTryResolveReference)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("GorillaTag.GuidedRefs", "GuidedRefTryResolveInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::IGuidedRefReceiverMono*), "GuidedRefTryResolveReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::IGuidedRefReceiverMono::get_GuidedRefsWaitingToResolveCount
// Il2CppName: get_GuidedRefsWaitingToResolveCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GorillaTag::GuidedRefs::IGuidedRefReceiverMono::*)()>(&GorillaTag::GuidedRefs::IGuidedRefReceiverMono::get_GuidedRefsWaitingToResolveCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::IGuidedRefReceiverMono*), "get_GuidedRefsWaitingToResolveCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::IGuidedRefReceiverMono::set_GuidedRefsWaitingToResolveCount
// Il2CppName: set_GuidedRefsWaitingToResolveCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::GuidedRefs::IGuidedRefReceiverMono::*)(int)>(&GorillaTag::GuidedRefs::IGuidedRefReceiverMono::set_GuidedRefsWaitingToResolveCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::IGuidedRefReceiverMono*), "set_GuidedRefsWaitingToResolveCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::IGuidedRefReceiverMono::OnAllGuidedRefsResolved
// Il2CppName: OnAllGuidedRefsResolved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::GuidedRefs::IGuidedRefReceiverMono::*)()>(&GorillaTag::GuidedRefs::IGuidedRefReceiverMono::OnAllGuidedRefsResolved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::IGuidedRefReceiverMono*), "OnAllGuidedRefsResolved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::IGuidedRefReceiverMono::OnGuidedRefTargetDestroyed
// Il2CppName: OnGuidedRefTargetDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::GuidedRefs::IGuidedRefReceiverMono::*)(int)>(&GorillaTag::GuidedRefs::IGuidedRefReceiverMono::OnGuidedRefTargetDestroyed)> {
  static const MethodInfo* get() {
    static auto* fieldId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::IGuidedRefReceiverMono*), "OnGuidedRefTargetDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldId});
  }
};