// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CosmeticIDUtils
  class CosmeticIDUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CosmeticIDUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticIDUtils*, "", "CosmeticIDUtils");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CosmeticIDUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class CosmeticIDUtils : public ::Il2CppObject {
    public:
    // static public System.Int32 PlayFabIdToIndexInCategory(System.String playFabIdString)
    // Offset: 0x278CA48
    static int PlayFabIdToIndexInCategory(::StringW playFabIdString);
  }; // CosmeticIDUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CosmeticIDUtils::PlayFabIdToIndexInCategory
// Il2CppName: PlayFabIdToIndexInCategory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&GlobalNamespace::CosmeticIDUtils::PlayFabIdToIndexInCategory)> {
  static const MethodInfo* get() {
    static auto* playFabIdString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticIDUtils*), "PlayFabIdToIndexInCategory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playFabIdString});
  }
};
