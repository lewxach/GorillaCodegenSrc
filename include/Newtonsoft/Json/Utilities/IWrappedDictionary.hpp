// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: IWrappedDictionary
  class IWrappedDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::IWrappedDictionary);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::IWrappedDictionary*, "Newtonsoft.Json.Utilities", "IWrappedDictionary");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.IWrappedDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  class IWrappedDictionary/*, public ::System::Collections::IDictionary*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IDictionary
    operator ::System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionary*>(this);
    }
    // public System.Object get_UnderlyingDictionary()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* get_UnderlyingDictionary();
  }; // Newtonsoft.Json.Utilities.IWrappedDictionary
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::IWrappedDictionary::get_UnderlyingDictionary
// Il2CppName: get_UnderlyingDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Utilities::IWrappedDictionary::*)()>(&Newtonsoft::Json::Utilities::IWrappedDictionary::get_UnderlyingDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::IWrappedDictionary*), "get_UnderlyingDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
