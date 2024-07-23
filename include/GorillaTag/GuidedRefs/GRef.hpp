// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaTag::GuidedRefs
namespace GorillaTag::GuidedRefs {
}
// Completed forward declares
// Type namespace: GorillaTag.GuidedRefs
namespace GorillaTag::GuidedRefs {
  // Forward declaring type: GRef
  class GRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::GuidedRefs::GRef);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::GuidedRefs::GRef*, "GorillaTag.GuidedRefs", "GRef");
// Type namespace: GorillaTag.GuidedRefs
namespace GorillaTag::GuidedRefs {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.GuidedRefs.GRef
  // [TokenAttribute] Offset: FFFFFFFF
  class GRef : public ::Il2CppObject {
    public:
    // Nested type: ::GorillaTag::GuidedRefs::GRef::EResolveModes
    struct EResolveModes;
    // static public System.Boolean ShouldResolveNow(GorillaTag.GuidedRefs.GRef/EResolveModes mode)
    // Offset: 0x28A772C
    static bool ShouldResolveNow(::GorillaTag::GuidedRefs::GRef::EResolveModes mode);
    // static public System.Boolean IsAnyResolveModeOn(GorillaTag.GuidedRefs.GRef/EResolveModes mode)
    // Offset: 0x28A778C
    static bool IsAnyResolveModeOn(::GorillaTag::GuidedRefs::GRef::EResolveModes mode);
  }; // GorillaTag.GuidedRefs.GRef
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::GRef::ShouldResolveNow
// Il2CppName: ShouldResolveNow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GorillaTag::GuidedRefs::GRef::EResolveModes)>(&GorillaTag::GuidedRefs::GRef::ShouldResolveNow)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("GorillaTag.GuidedRefs", "GRef/EResolveModes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::GRef*), "ShouldResolveNow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::GRef::IsAnyResolveModeOn
// Il2CppName: IsAnyResolveModeOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GorillaTag::GuidedRefs::GRef::EResolveModes)>(&GorillaTag::GuidedRefs::GRef::IsAnyResolveModeOn)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("GorillaTag.GuidedRefs", "GRef/EResolveModes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::GRef*), "IsAnyResolveModeOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};