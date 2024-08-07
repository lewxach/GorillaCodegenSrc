// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: Util
  class Util;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::Util);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::Util*, "Photon.Voice", "Util");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.Util
  // [TokenAttribute] Offset: FFFFFFFF
  class Util : public ::Il2CppObject {
    public:
    // static public System.Void SetThreadName(System.Threading.Thread t, System.String name)
    // Offset: 0x4A6527C
    static void SetThreadName(::System::Threading::Thread* t, ::StringW name);
  }; // Photon.Voice.Util
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::Util::SetThreadName
// Il2CppName: SetThreadName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Thread*, ::StringW)>(&Photon::Voice::Util::SetThreadName)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Threading", "Thread")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Util*), "SetThreadName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, name});
  }
};
