// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::CultureInfo::OnCultureInfoChangedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CultureInfo::OnCultureInfoChangedDelegate*, "System.Globalization", "CultureInfo/OnCultureInfoChangedDelegate");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.CultureInfo/OnCultureInfoChangedDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class CultureInfo::OnCultureInfoChangedDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4617454
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CultureInfo::OnCultureInfoChangedDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::CultureInfo::OnCultureInfoChangedDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CultureInfo::OnCultureInfoChangedDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String language)
    // Offset: 0x46177B0
    void Invoke(::StringW language);
  }; // System.Globalization.CultureInfo/OnCultureInfoChangedDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::CultureInfo::OnCultureInfoChangedDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::CultureInfo::OnCultureInfoChangedDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::CultureInfo::OnCultureInfoChangedDelegate::*)(::StringW)>(&System::Globalization::CultureInfo::OnCultureInfoChangedDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* language = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CultureInfo::OnCultureInfoChangedDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{language});
  }
};