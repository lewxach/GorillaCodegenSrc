// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // Forward declaring type: IAttributes
  class IAttributes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Properties::Internal::IAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::IAttributes*, "Unity.Properties.Internal", "IAttributes");
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Properties.Internal.IAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  class IAttributes {
    public:
    // public System.Void AddAttribute(System.Attribute attribute)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddAttribute(::System::Attribute* attribute);
    // public System.Void AddAttributes(System.Collections.Generic.IEnumerable`1<System.Attribute> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddAttributes(::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* attributes);
  }; // Unity.Properties.Internal.IAttributes
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Properties::Internal::IAttributes::AddAttribute
// Il2CppName: AddAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Properties::Internal::IAttributes::*)(::System::Attribute*)>(&Unity::Properties::Internal::IAttributes::AddAttribute)> {
  static const MethodInfo* get() {
    static auto* attribute = &::il2cpp_utils::GetClassFromName("System", "Attribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::Internal::IAttributes*), "AddAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attribute});
  }
};
// Writing MetadataGetter for method: Unity::Properties::Internal::IAttributes::AddAttributes
// Il2CppName: AddAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Properties::Internal::IAttributes::*)(::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*)>(&Unity::Properties::Internal::IAttributes::AddAttributes)> {
  static const MethodInfo* get() {
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Attribute")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::Internal::IAttributes*), "AddAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};