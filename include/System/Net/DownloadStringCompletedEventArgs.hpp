// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.AsyncCompletedEventArgs
#include "System/ComponentModel/AsyncCompletedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: DownloadStringCompletedEventArgs
  class DownloadStringCompletedEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::DownloadStringCompletedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DownloadStringCompletedEventArgs*, "System.Net", "DownloadStringCompletedEventArgs");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DownloadStringCompletedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class DownloadStringCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs {
    public:
    public:
    // private readonly System.String _result
    // Size: 0x8
    // Offset: 0x28
    ::StringW result;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return result;
    }
    // Get instance field reference: private readonly System.String _result
    [[deprecated("Use field access instead!")]] ::StringW& dyn__result();
    // System.Void .ctor(System.String result, System.Exception exception, System.Boolean cancelled, System.Object userToken)
    // Offset: 0x4FC6C7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadStringCompletedEventArgs* New_ctor(::StringW result, ::System::Exception* exception, bool cancelled, ::Il2CppObject* userToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::DownloadStringCompletedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadStringCompletedEventArgs*, creationType>(result, exception, cancelled, userToken)));
    }
    // public System.String get_Result()
    // Offset: 0x4FCE3EC
    ::StringW get_Result();
    // System.Void .ctor()
    // Offset: 0x4FCFB50
    // Implemented from: System.ComponentModel.AsyncCompletedEventArgs
    // Base method: System.Void AsyncCompletedEventArgs::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadStringCompletedEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::DownloadStringCompletedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadStringCompletedEventArgs*, creationType>()));
    }
  }; // System.Net.DownloadStringCompletedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(DownloadStringCompletedEventArgs), 40 + sizeof(::StringW)> __System_Net_DownloadStringCompletedEventArgsSizeCheck;
  static_assert(sizeof(DownloadStringCompletedEventArgs) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::DownloadStringCompletedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::DownloadStringCompletedEventArgs::get_Result
// Il2CppName: get_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DownloadStringCompletedEventArgs::*)()>(&System::Net::DownloadStringCompletedEventArgs::get_Result)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DownloadStringCompletedEventArgs*), "get_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DownloadStringCompletedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!