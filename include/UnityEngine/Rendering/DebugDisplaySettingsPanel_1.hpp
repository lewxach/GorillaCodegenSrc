// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugDisplaySettingsPanel
#include "UnityEngine/Rendering/DebugDisplaySettingsPanel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: IDebugDisplaySettingsData
  class IDebugDisplaySettingsData;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: DebugDisplaySettingsPanel`1<T>
  template<typename T>
  class DebugDisplaySettingsPanel_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplaySettingsPanel_1, "UnityEngine.Rendering", "DebugDisplaySettingsPanel`1");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.DebugDisplaySettingsPanel`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class DebugDisplaySettingsPanel_1 : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel {
    public:
    public:
    // T m_Data
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T m_Data;
    public:
    // Autogenerated instance field getter
    // Get instance field: T m_Data
    [[deprecated("Use field access instead!")]] T& dyn_m_Data() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugDisplaySettingsPanel_1::dyn_m_Data");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Data"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T get_data()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_data() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugDisplaySettingsPanel_1::get_data");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_data", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // protected System.Void .ctor(T data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugDisplaySettingsPanel_1<T>* New_ctor(T data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugDisplaySettingsPanel_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugDisplaySettingsPanel_1<T>*, creationType>(data)));
    }
  }; // UnityEngine.Rendering.DebugDisplaySettingsPanel`1
  // Could not write size check! Type: UnityEngine.Rendering.DebugDisplaySettingsPanel`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
