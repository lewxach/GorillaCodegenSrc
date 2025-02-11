// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
// Including type: System.Uri/Offset
#include "System/Uri_Offset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Uri::UriInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Uri::UriInfo*, "System", "Uri/UriInfo");
// Type namespace: System
namespace System {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Uri/UriInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class Uri::UriInfo : public ::Il2CppObject {
    public:
    public:
    // public System.String Host
    // Size: 0x8
    // Offset: 0x10
    ::StringW Host;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ScopeId
    // Size: 0x8
    // Offset: 0x18
    ::StringW ScopeId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String String
    // Size: 0x8
    // Offset: 0x20
    ::StringW String;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Uri/Offset Offset
    // Size: 0x10
    // Offset: 0x28
    ::System::Uri::Offset Offset;
    // Field size check
    static_assert(sizeof(::System::Uri::Offset) == 0x10);
    // public System.String DnsSafeHost
    // Size: 0x8
    // Offset: 0x38
    ::StringW DnsSafeHost;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Uri/MoreInfo MoreInfo
    // Size: 0x8
    // Offset: 0x40
    ::System::Uri::MoreInfo* MoreInfo;
    // Field size check
    static_assert(sizeof(::System::Uri::MoreInfo*) == 0x8);
    public:
    // Get instance field reference: public System.String Host
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Host();
    // Get instance field reference: public System.String ScopeId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ScopeId();
    // Get instance field reference: public System.String String
    [[deprecated("Use field access instead!")]] ::StringW& dyn_String();
    // Get instance field reference: public System.Uri/Offset Offset
    [[deprecated("Use field access instead!")]] ::System::Uri::Offset& dyn_Offset();
    // Get instance field reference: public System.String DnsSafeHost
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DnsSafeHost();
    // Get instance field reference: public System.Uri/MoreInfo MoreInfo
    [[deprecated("Use field access instead!")]] ::System::Uri::MoreInfo*& dyn_MoreInfo();
    // public System.Void .ctor()
    // Offset: 0x4F62574
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Uri::UriInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Uri::UriInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Uri::UriInfo*, creationType>()));
    }
  }; // System.Uri/UriInfo
  #pragma pack(pop)
  static check_size<sizeof(Uri::UriInfo), 64 + sizeof(::System::Uri::MoreInfo*)> __System_Uri_UriInfoSizeCheck;
  static_assert(sizeof(Uri::UriInfo) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Uri::UriInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
