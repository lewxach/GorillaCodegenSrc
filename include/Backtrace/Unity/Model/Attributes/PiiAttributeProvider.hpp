// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.Model.Attributes.IScopeAttributeProvider
#include "Backtrace/Unity/Model/Attributes/IScopeAttributeProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model.Attributes
namespace Backtrace::Unity::Model::Attributes {
  // Forward declaring type: PiiAttributeProvider
  class PiiAttributeProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::Attributes::PiiAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::Attributes::PiiAttributeProvider*, "Backtrace.Unity.Model.Attributes", "PiiAttributeProvider");
// Type namespace: Backtrace.Unity.Model.Attributes
namespace Backtrace::Unity::Model::Attributes {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.Attributes.PiiAttributeProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class PiiAttributeProvider : public ::Il2CppObject/*, public ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*/ {
    public:
    // Creating interface conversion operator: operator ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider
    operator ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider() noexcept {
      return *reinterpret_cast<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>(this);
    }
    // public System.Void GetAttributes(System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0x2A73670
    void GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // public System.Void .ctor()
    // Offset: 0x2A6B164
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PiiAttributeProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Attributes::PiiAttributeProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PiiAttributeProvider*, creationType>()));
    }
  }; // Backtrace.Unity.Model.Attributes.PiiAttributeProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::Attributes::PiiAttributeProvider::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Attributes::PiiAttributeProvider::*)(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::Attributes::PiiAttributeProvider::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Attributes::PiiAttributeProvider*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::Attributes::PiiAttributeProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!