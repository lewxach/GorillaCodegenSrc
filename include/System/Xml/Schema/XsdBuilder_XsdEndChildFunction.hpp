// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XsdBuilder
#include "System/Xml/Schema/XsdBuilder.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XsdBuilder::XsdEndChildFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdBuilder::XsdEndChildFunction*, "System.Xml.Schema", "XsdBuilder/XsdEndChildFunction");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XsdBuilder/XsdEndChildFunction
  // [TokenAttribute] Offset: FFFFFFFF
  class XsdBuilder::XsdEndChildFunction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4DD4010
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XsdBuilder::XsdEndChildFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XsdBuilder::XsdEndChildFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XsdBuilder::XsdEndChildFunction*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Xml.Schema.XsdBuilder builder)
    // Offset: 0x4DD40C0
    void Invoke(::System::Xml::Schema::XsdBuilder* builder);
  }; // System.Xml.Schema.XsdBuilder/XsdEndChildFunction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XsdBuilder::XsdEndChildFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XsdBuilder::XsdEndChildFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XsdBuilder::XsdEndChildFunction::*)(::System::Xml::Schema::XsdBuilder*)>(&System::Xml::Schema::XsdBuilder::XsdEndChildFunction::Invoke)> {
  static const MethodInfo* get() {
    static auto* builder = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XsdBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdBuilder::XsdEndChildFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{builder});
  }
};
