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
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataRowChangeEventArgs
  class DataRowChangeEventArgs;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataRowChangeEventHandler
  class DataRowChangeEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataRowChangeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowChangeEventHandler*, "System.Data", "DataRowChangeEventHandler");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataRowChangeEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class DataRowChangeEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4C3D51C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataRowChangeEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataRowChangeEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataRowChangeEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.Data.DataRowChangeEventArgs e)
    // Offset: 0x4C3D628
    void Invoke(::Il2CppObject* sender, ::System::Data::DataRowChangeEventArgs* e);
  }; // System.Data.DataRowChangeEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataRowChangeEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataRowChangeEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRowChangeEventHandler::*)(::Il2CppObject*, ::System::Data::DataRowChangeEventArgs*)>(&System::Data::DataRowChangeEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Data", "DataRowChangeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRowChangeEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
