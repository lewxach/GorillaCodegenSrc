// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Core.Bindings.Android
namespace Oculus::Voice::Core::Bindings::Android {
  // Forward declaring type: BaseServiceBinding
  class BaseServiceBinding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding*, "Oculus.Voice.Core.Bindings.Android", "BaseServiceBinding");
// Type namespace: Oculus.Voice.Core.Bindings.Android
namespace Oculus::Voice::Core::Bindings::Android {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseServiceBinding : public ::Il2CppObject {
    public:
    public:
    // protected UnityEngine.AndroidJavaObject binding
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AndroidJavaObject* binding;
    // Field size check
    static_assert(sizeof(::UnityEngine::AndroidJavaObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::AndroidJavaObject*
    constexpr operator ::UnityEngine::AndroidJavaObject*() const noexcept {
      return binding;
    }
    // Get instance field reference: protected UnityEngine.AndroidJavaObject binding
    [[deprecated("Use field access instead!")]] ::UnityEngine::AndroidJavaObject*& dyn_binding();
    // protected System.Void .ctor(UnityEngine.AndroidJavaObject sdkInstance)
    // Offset: 0x29813B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseServiceBinding* New_ctor(::UnityEngine::AndroidJavaObject* sdkInstance) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseServiceBinding*, creationType>(sdkInstance)));
    }
    // public System.Void Shutdown()
    // Offset: 0x29813E0
    void Shutdown();
  }; // Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
  #pragma pack(pop)
  static check_size<sizeof(BaseServiceBinding), 16 + sizeof(::UnityEngine::AndroidJavaObject*)> __Oculus_Voice_Core_Bindings_Android_BaseServiceBindingSizeCheck;
  static_assert(sizeof(BaseServiceBinding) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::Shutdown
// Il2CppName: Shutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::*)()>(&Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::Shutdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::BaseServiceBinding*), "Shutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};