// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlSerializationReadCallback
  class XmlSerializationReadCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationReadCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationReadCallback*, "System.Xml.Serialization", "XmlSerializationReadCallback");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlSerializationReadCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSerializationReadCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4E552FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSerializationReadCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlSerializationReadCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSerializationReadCallback*, creationType>(object, method)));
    }
    // public System.Object Invoke()
    // Offset: 0x4E55398
    ::Il2CppObject* Invoke();
  }; // System.Xml.Serialization.XmlSerializationReadCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationReadCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationReadCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Serialization::XmlSerializationReadCallback::*)()>(&System::Xml::Serialization::XmlSerializationReadCallback::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationReadCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
