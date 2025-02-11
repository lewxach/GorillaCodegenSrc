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
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Progress
  struct Progress;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: OnScanStatus
  class OnScanStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::OnScanStatus);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::OnScanStatus*, "Pathfinding", "OnScanStatus");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.OnScanStatus
  // [TokenAttribute] Offset: FFFFFFFF
  class OnScanStatus : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x299AAF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnScanStatus* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::OnScanStatus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnScanStatus*, creationType>(object, method)));
    }
    // public System.Void Invoke(Pathfinding.Progress progress)
    // Offset: 0x299AB90
    void Invoke(::Pathfinding::Progress progress);
    // public System.IAsyncResult BeginInvoke(Pathfinding.Progress progress, System.AsyncCallback callback, System.Object object)
    // Offset: 0x299ABA4
    ::System::IAsyncResult* BeginInvoke(::Pathfinding::Progress progress, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x299AC28
    void EndInvoke(::System::IAsyncResult* result);
  }; // Pathfinding.OnScanStatus
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::OnScanStatus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::OnScanStatus::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::OnScanStatus::*)(::Pathfinding::Progress)>(&Pathfinding::OnScanStatus::Invoke)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("Pathfinding", "Progress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::OnScanStatus*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: Pathfinding::OnScanStatus::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Pathfinding::OnScanStatus::*)(::Pathfinding::Progress, ::System::AsyncCallback*, ::Il2CppObject*)>(&Pathfinding::OnScanStatus::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("Pathfinding", "Progress")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::OnScanStatus*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress, callback, object});
  }
};
// Writing MetadataGetter for method: Pathfinding::OnScanStatus::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::OnScanStatus::*)(::System::IAsyncResult*)>(&Pathfinding::OnScanStatus::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::OnScanStatus*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
