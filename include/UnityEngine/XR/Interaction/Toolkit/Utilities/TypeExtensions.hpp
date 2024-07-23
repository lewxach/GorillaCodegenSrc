// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
  // Forward declaring type: TypeExtensions
  class TypeExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Utilities::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Utilities::TypeExtensions*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "TypeExtensions");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Utilities.TypeExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TypeExtensions : public ::Il2CppObject {
    public:
    // static public TAttribute GetAttribute(System.Type type, System.Boolean inherit)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TAttribute>
    static TAttribute GetAttribute(::System::Type* type, bool inherit) {
      static_assert(std::is_convertible_v<TAttribute, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::TypeExtensions::GetAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.XR.Interaction.Toolkit.Utilities", "TypeExtensions", "GetAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAttribute>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type), ::il2cpp_utils::ExtractType(inherit)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAttribute>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TAttribute, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, type, inherit);
    }
  }; // UnityEngine.XR.Interaction.Toolkit.Utilities.TypeExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Utilities::TypeExtensions::GetAttribute
// Il2CppName: GetAttribute
// Cannot write MetadataGetter for generic methods!