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
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: NotifyCollectionChangedEventArgs
  class NotifyCollectionChangedEventArgs;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: NotifyCollectionChangedEventHandler
  class NotifyCollectionChangedEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Specialized::NotifyCollectionChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, "System.Collections.Specialized", "NotifyCollectionChangedEventHandler");
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.NotifyCollectionChangedEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class NotifyCollectionChangedEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4F4EEC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotifyCollectionChangedEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NotifyCollectionChangedEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotifyCollectionChangedEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.Collections.Specialized.NotifyCollectionChangedEventArgs e)
    // Offset: 0x4F4EFCC
    void Invoke(::Il2CppObject* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e);
  }; // System.Collections.Specialized.NotifyCollectionChangedEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::NotifyCollectionChangedEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::NotifyCollectionChangedEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::NotifyCollectionChangedEventHandler::*)(::Il2CppObject*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*)>(&System::Collections::Specialized::NotifyCollectionChangedEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Collections.Specialized", "NotifyCollectionChangedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::NotifyCollectionChangedEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};