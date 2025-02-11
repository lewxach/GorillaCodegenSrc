// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory
#include "UnityEngine/Rendering/DebugDisplaySettingsVolume_WidgetFactory.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ColorParameter
  class ColorParameter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass2_1");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass2_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rendering.ColorParameter p
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::ColorParameter* p;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ColorParameter*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Rendering::ColorParameter*
    constexpr operator ::UnityEngine::Rendering::ColorParameter*() const noexcept {
      return p;
    }
    // Get instance field reference: public UnityEngine.Rendering.ColorParameter p
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ColorParameter*& dyn_p();
    // public System.Void .ctor()
    // Offset: 0x52409F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1*, creationType>()));
    }
    // UnityEngine.Color <CreateVolumeParameterWidget>b__1()
    // Offset: 0x5242A0C
    ::UnityEngine::Color $CreateVolumeParameterWidget$b__1();
    // System.Void <CreateVolumeParameterWidget>b__2(UnityEngine.Color value)
    // Offset: 0x5242A30
    void $CreateVolumeParameterWidget$b__2(::UnityEngine::Color value);
  }; // UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass2_1
  #pragma pack(pop)
  static check_size<sizeof(DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1), 16 + sizeof(::UnityEngine::Rendering::ColorParameter*)> __UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_$$c__DisplayClass2_1SizeCheck;
  static_assert(sizeof(DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1::$CreateVolumeParameterWidget$b__1
// Il2CppName: <CreateVolumeParameterWidget>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1::*)()>(&UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1::$CreateVolumeParameterWidget$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1*), "<CreateVolumeParameterWidget>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1::$CreateVolumeParameterWidget$b__2
// Il2CppName: <CreateVolumeParameterWidget>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1::*)(::UnityEngine::Color)>(&UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1::$CreateVolumeParameterWidget$b__2)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass2_1*), "<CreateVolumeParameterWidget>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
