// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::CancellationToken::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationToken::$$c*, "System.Threading", "CancellationToken/<>c");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.CancellationToken/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CancellationToken::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Threading.CancellationToken/<>c <>9
    static ::System::Threading::CancellationToken::$$c* _get_$$9();
    // Set static field: static public readonly System.Threading.CancellationToken/<>c <>9
    static void _set_$$9(::System::Threading::CancellationToken::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x46C1104
    static void _cctor();
    // System.Void <.cctor>b__26_0(System.Object obj)
    // Offset: 0x46C1174
    void $_cctor$b__26_0(::Il2CppObject* obj);
    // public System.Void .ctor()
    // Offset: 0x46C116C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CancellationToken::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::CancellationToken::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CancellationToken::$$c*, creationType>()));
    }
  }; // System.Threading.CancellationToken/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::CancellationToken::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::CancellationToken::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::$$c::$_cctor$b__26_0
// Il2CppName: <.cctor>b__26_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationToken::$$c::*)(::Il2CppObject*)>(&System::Threading::CancellationToken::$$c::$_cctor$b__26_0)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken::$$c*), "<.cctor>b__26_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
