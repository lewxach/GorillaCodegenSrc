// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: ExceptionHelpers
  class ExceptionHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ExceptionHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ExceptionHelpers*, "UnityEngine.InputSystem.Utilities", "ExceptionHelpers");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Utilities.ExceptionHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ExceptionHelpers : public ::Il2CppObject {
    public:
    // static public System.Boolean IsExceptionIndicatingBugInCode(System.Exception exception)
    // Offset: 0x517268C
    static bool IsExceptionIndicatingBugInCode(::System::Exception* exception);
  }; // UnityEngine.InputSystem.Utilities.ExceptionHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::ExceptionHelpers::IsExceptionIndicatingBugInCode
// Il2CppName: IsExceptionIndicatingBugInCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception*)>(&UnityEngine::InputSystem::Utilities::ExceptionHelpers::IsExceptionIndicatingBugInCode)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::ExceptionHelpers*), "IsExceptionIndicatingBugInCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
