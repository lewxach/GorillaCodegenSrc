// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.XmlToDatasetMap
#include "System/Data/XmlToDatasetMap.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::XmlToDatasetMap::XmlNodeIdentety);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlToDatasetMap::XmlNodeIdentety*, "System.Data", "XmlToDatasetMap/XmlNodeIdentety");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.XmlToDatasetMap/XmlNodeIdentety
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlToDatasetMap::XmlNodeIdentety : public ::Il2CppObject {
    public:
    public:
    // public System.String LocalName
    // Size: 0x8
    // Offset: 0x10
    ::StringW LocalName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String NamespaceURI
    // Size: 0x8
    // Offset: 0x18
    ::StringW NamespaceURI;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String LocalName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_LocalName();
    // Get instance field reference: public System.String NamespaceURI
    [[deprecated("Use field access instead!")]] ::StringW& dyn_NamespaceURI();
    // public System.Void .ctor(System.String localName, System.String namespaceURI)
    // Offset: 0x4C96CE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlToDatasetMap::XmlNodeIdentety* New_ctor(::StringW localName, ::StringW namespaceURI) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::XmlToDatasetMap::XmlNodeIdentety::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlToDatasetMap::XmlNodeIdentety*, creationType>(localName, namespaceURI)));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x4C96D2C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4C96D4C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // System.Data.XmlToDatasetMap/XmlNodeIdentety
  #pragma pack(pop)
  static check_size<sizeof(XmlToDatasetMap::XmlNodeIdentety), 24 + sizeof(::StringW)> __System_Data_XmlToDatasetMap_XmlNodeIdentetySizeCheck;
  static_assert(sizeof(XmlToDatasetMap::XmlNodeIdentety) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::XmlToDatasetMap::XmlNodeIdentety::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::XmlToDatasetMap::XmlNodeIdentety::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::XmlToDatasetMap::XmlNodeIdentety::*)()>(&System::Data::XmlToDatasetMap::XmlNodeIdentety::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlToDatasetMap::XmlNodeIdentety*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::XmlToDatasetMap::XmlNodeIdentety::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XmlToDatasetMap::XmlNodeIdentety::*)(::Il2CppObject*)>(&System::Data::XmlToDatasetMap::XmlNodeIdentety::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlToDatasetMap::XmlNodeIdentety*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
