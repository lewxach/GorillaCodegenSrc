// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Forward declaring type: UnityObjectExtensions
  class UnityObjectExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::UnityObjectExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::UnityObjectExtensions*, "Meta.WitAi", "UnityObjectExtensions");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.UnityObjectExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class UnityObjectExtensions : public ::Il2CppObject {
    public:
    // static public System.Void DestroySafely(UnityEngine.Object unityObject)
    // Offset: 0x443DE8C
    static void DestroySafely(::UnityEngine::Object* unityObject);
  }; // Meta.WitAi.UnityObjectExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::UnityObjectExtensions::DestroySafely
// Il2CppName: DestroySafely
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&Meta::WitAi::UnityObjectExtensions::DestroySafely)> {
  static const MethodInfo* get() {
    static auto* unityObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::UnityObjectExtensions*), "DestroySafely", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unityObject});
  }
};
