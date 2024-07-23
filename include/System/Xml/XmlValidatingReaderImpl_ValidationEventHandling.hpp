// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlValidatingReaderImpl
#include "System/Xml/XmlValidatingReaderImpl.hpp"
// Including type: System.Xml.IValidationEventHandling
#include "System/Xml/IValidationEventHandling.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: ValidationEventHandler
  class ValidationEventHandler;
  // Forward declaring type: XmlSeverityType
  struct XmlSeverityType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlValidatingReaderImpl::ValidationEventHandling);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlValidatingReaderImpl::ValidationEventHandling*, "System.Xml", "XmlValidatingReaderImpl/ValidationEventHandling");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlValidatingReaderImpl/ValidationEventHandling
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlValidatingReaderImpl::ValidationEventHandling : public ::Il2CppObject/*, public ::System::Xml::IValidationEventHandling*/ {
    public:
    public:
    // private System.Xml.XmlValidatingReaderImpl reader
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlValidatingReaderImpl* reader;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlValidatingReaderImpl*) == 0x8);
    // private System.Xml.Schema.ValidationEventHandler eventHandler
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::ValidationEventHandler* eventHandler;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::ValidationEventHandler*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Xml::IValidationEventHandling
    operator ::System::Xml::IValidationEventHandling() noexcept {
      return *reinterpret_cast<::System::Xml::IValidationEventHandling*>(this);
    }
    // Get instance field reference: private System.Xml.XmlValidatingReaderImpl reader
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlValidatingReaderImpl*& dyn_reader();
    // Get instance field reference: private System.Xml.Schema.ValidationEventHandler eventHandler
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::ValidationEventHandler*& dyn_eventHandler();
    // System.Void .ctor(System.Xml.XmlValidatingReaderImpl reader)
    // Offset: 0x4DFBB0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlValidatingReaderImpl::ValidationEventHandling* New_ctor(::System::Xml::XmlValidatingReaderImpl* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlValidatingReaderImpl::ValidationEventHandling::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlValidatingReaderImpl::ValidationEventHandling*, creationType>(reader)));
    }
    // private System.Object System.Xml.IValidationEventHandling.get_EventHandler()
    // Offset: 0x4DFCD4C
    ::Il2CppObject* System_Xml_IValidationEventHandling_get_EventHandler();
    // private System.Void System.Xml.IValidationEventHandling.SendEvent(System.Exception exception, System.Xml.Schema.XmlSeverityType severity)
    // Offset: 0x4DFCD54
    void System_Xml_IValidationEventHandling_SendEvent(::System::Exception* exception, ::System::Xml::Schema::XmlSeverityType severity);
    // System.Void AddHandler(System.Xml.Schema.ValidationEventHandler handler)
    // Offset: 0x4DFBB3C
    void AddHandler(::System::Xml::Schema::ValidationEventHandler* handler);
  }; // System.Xml.XmlValidatingReaderImpl/ValidationEventHandling
  #pragma pack(pop)
  static check_size<sizeof(XmlValidatingReaderImpl::ValidationEventHandling), 24 + sizeof(::System::Xml::Schema::ValidationEventHandler*)> __System_Xml_XmlValidatingReaderImpl_ValidationEventHandlingSizeCheck;
  static_assert(sizeof(XmlValidatingReaderImpl::ValidationEventHandling) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlValidatingReaderImpl::ValidationEventHandling::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlValidatingReaderImpl::ValidationEventHandling::System_Xml_IValidationEventHandling_get_EventHandler
// Il2CppName: System.Xml.IValidationEventHandling.get_EventHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::XmlValidatingReaderImpl::ValidationEventHandling::*)()>(&System::Xml::XmlValidatingReaderImpl::ValidationEventHandling::System_Xml_IValidationEventHandling_get_EventHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlValidatingReaderImpl::ValidationEventHandling*), "System.Xml.IValidationEventHandling.get_EventHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlValidatingReaderImpl::ValidationEventHandling::System_Xml_IValidationEventHandling_SendEvent
// Il2CppName: System.Xml.IValidationEventHandling.SendEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlValidatingReaderImpl::ValidationEventHandling::*)(::System::Exception*, ::System::Xml::Schema::XmlSeverityType)>(&System::Xml::XmlValidatingReaderImpl::ValidationEventHandling::System_Xml_IValidationEventHandling_SendEvent)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* severity = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSeverityType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlValidatingReaderImpl::ValidationEventHandling*), "System.Xml.IValidationEventHandling.SendEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, severity});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlValidatingReaderImpl::ValidationEventHandling::AddHandler
// Il2CppName: AddHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlValidatingReaderImpl::ValidationEventHandling::*)(::System::Xml::Schema::ValidationEventHandler*)>(&System::Xml::XmlValidatingReaderImpl::ValidationEventHandling::AddHandler)> {
  static const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlValidatingReaderImpl::ValidationEventHandling*), "AddHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler});
  }
};