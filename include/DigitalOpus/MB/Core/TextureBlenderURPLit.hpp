// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.TextureBlender
#include "DigitalOpus/MB/Core/TextureBlender.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Skipping declaration: WorkflowMode because it is already included!
  // Skipping declaration: SmoothnessTextureChannel because it is already included!
  // Forward declaring type: TextureBlenderMaterialPropertyCacheHelper
  class TextureBlenderMaterialPropertyCacheHelper;
  // Forward declaring type: ShaderTextureProperty
  class ShaderTextureProperty;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: TextureBlenderURPLit
  class TextureBlenderURPLit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::TextureBlenderURPLit);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::TextureBlenderURPLit*, "DigitalOpus.MB.Core", "TextureBlenderURPLit");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.TextureBlenderURPLit
  // [TokenAttribute] Offset: FFFFFFFF
  class TextureBlenderURPLit : public ::Il2CppObject/*, public ::DigitalOpus::MB::Core::TextureBlender*/ {
    public:
    // Nested type: ::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop
    struct Prop;
    // Nested type: ::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode
    struct WorkflowMode;
    // Nested type: ::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel
    struct SmoothnessTextureChannel;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: DigitalOpus.MB.Core.TextureBlenderURPLit/Prop
    // [TokenAttribute] Offset: FFFFFFFF
    struct Prop/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Prop
      constexpr Prop(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doColor
      static constexpr const int doColor = 0;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doColor
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop _get_doColor();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doColor
      static void _set_doColor(::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doSpecular
      static constexpr const int doSpecular = 1;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doSpecular
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop _get_doSpecular();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doSpecular
      static void _set_doSpecular(::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doMetallic
      static constexpr const int doMetallic = 2;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doMetallic
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop _get_doMetallic();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doMetallic
      static void _set_doMetallic(::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doEmission
      static constexpr const int doEmission = 3;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doEmission
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop _get_doEmission();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doEmission
      static void _set_doEmission(::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doBump
      static constexpr const int doBump = 4;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doBump
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop _get_doBump();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doBump
      static void _set_doBump(::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doNone
      static constexpr const int doNone = 5;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doNone
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop _get_doNone();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/Prop doNone
      static void _set_doNone(::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // DigitalOpus.MB.Core.TextureBlenderURPLit/Prop
    #pragma pack(pop)
    static check_size<sizeof(TextureBlenderURPLit::Prop), 0 + sizeof(int)> __DigitalOpus_MB_Core_TextureBlenderURPLit_PropSizeCheck;
    static_assert(sizeof(TextureBlenderURPLit::Prop) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct WorkflowMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: WorkflowMode
      constexpr WorkflowMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode unknown
      static constexpr const int unknown = 0;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode unknown
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode _get_unknown();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode unknown
      static void _set_unknown(::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode metallic
      static constexpr const int metallic = 1;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode metallic
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode _get_metallic();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode metallic
      static void _set_metallic(::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode specular
      static constexpr const int specular = 2;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode specular
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode _get_specular();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode specular
      static void _set_specular(::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode
    #pragma pack(pop)
    static check_size<sizeof(TextureBlenderURPLit::WorkflowMode), 0 + sizeof(int)> __DigitalOpus_MB_Core_TextureBlenderURPLit_WorkflowModeSizeCheck;
    static_assert(sizeof(TextureBlenderURPLit::WorkflowMode) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel
    // [TokenAttribute] Offset: FFFFFFFF
    struct SmoothnessTextureChannel/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: SmoothnessTextureChannel
      constexpr SmoothnessTextureChannel(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel unknown
      static constexpr const int unknown = 0;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel unknown
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel _get_unknown();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel unknown
      static void _set_unknown(::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel albedo
      static constexpr const int albedo = 1;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel albedo
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel _get_albedo();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel albedo
      static void _set_albedo(::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel value);
      // static field const value: static public DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel metallicSpecular
      static constexpr const int metallicSpecular = 2;
      // Get static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel metallicSpecular
      static ::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel _get_metallicSpecular();
      // Set static field: static public DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel metallicSpecular
      static void _set_metallicSpecular(::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel
    #pragma pack(pop)
    static check_size<sizeof(TextureBlenderURPLit::SmoothnessTextureChannel), 0 + sizeof(int)> __DigitalOpus_MB_Core_TextureBlenderURPLit_SmoothnessTextureChannelSizeCheck;
    static_assert(sizeof(TextureBlenderURPLit::SmoothnessTextureChannel) == 0x4);
    public:
    // private DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper sourceMaterialPropertyCache
    // Size: 0x8
    // Offset: 0x10
    ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper* sourceMaterialPropertyCache;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*) == 0x8);
    // private DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode m_workflowMode
    // Size: 0x4
    // Offset: 0x18
    ::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode m_workflowMode;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode) == 0x4);
    // private DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel m_smoothnessTextureChannel
    // Size: 0x4
    // Offset: 0x1C
    ::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel m_smoothnessTextureChannel;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel) == 0x4);
    // private UnityEngine.Color m_tintColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color m_tintColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single m_smoothness
    // Size: 0x4
    // Offset: 0x30
    float m_smoothness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color m_specColor
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Color m_specColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean m_hasSpecGlossMap
    // Size: 0x1
    // Offset: 0x44
    bool m_hasSpecGlossMap;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_hasSpecGlossMap and: m_metallic
    char __padding6[0x3] = {};
    // private System.Single m_metallic
    // Size: 0x4
    // Offset: 0x48
    float m_metallic;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_hasMetallicGlossMap
    // Size: 0x1
    // Offset: 0x4C
    bool m_hasMetallicGlossMap;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_hasMetallicGlossMap and: m_bumpScale
    char __padding8[0x3] = {};
    // private System.Single m_bumpScale
    // Size: 0x4
    // Offset: 0x50
    float m_bumpScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_shaderDoesEmission
    // Size: 0x1
    // Offset: 0x54
    bool m_shaderDoesEmission;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_shaderDoesEmission and: m_emissionColor
    char __padding10[0x3] = {};
    // private UnityEngine.Color m_emissionColor
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Color m_emissionColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private DigitalOpus.MB.Core.TextureBlenderURPLit/Prop propertyToDo
    // Size: 0x4
    // Offset: 0x68
    ::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop propertyToDo;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop) == 0x4);
    // private UnityEngine.Color m_generatingTintedAtlaColor
    // Size: 0x10
    // Offset: 0x6C
    ::UnityEngine::Color m_generatingTintedAtlaColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single m_generatingTintedAtlasMetallic
    // Size: 0x4
    // Offset: 0x7C
    float m_generatingTintedAtlasMetallic;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color m_generatingTintedAtlaSpecular
    // Size: 0x10
    // Offset: 0x80
    ::UnityEngine::Color m_generatingTintedAtlaSpecular;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single m_generatingTintedAtlasMetallic_smoothness
    // Size: 0x4
    // Offset: 0x90
    float m_generatingTintedAtlasMetallic_smoothness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_generatingTintedAtlasSpecular_somoothness
    // Size: 0x4
    // Offset: 0x94
    float m_generatingTintedAtlasSpecular_somoothness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_generatingTintedAtlaBumpScale
    // Size: 0x4
    // Offset: 0x98
    float m_generatingTintedAtlaBumpScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color m_generatingTintedAtlaEmission
    // Size: 0x10
    // Offset: 0x9C
    ::UnityEngine::Color m_generatingTintedAtlaEmission;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_notGeneratingAtlasDefaultColor
    // Size: 0x10
    // Offset: 0xAC
    ::UnityEngine::Color m_notGeneratingAtlasDefaultColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single m_notGeneratingAtlasDefaultMetallic
    // Size: 0x4
    // Offset: 0xBC
    float m_notGeneratingAtlasDefaultMetallic;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow
    // Size: 0x4
    // Offset: 0xC0
    float m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow
    // Size: 0x4
    // Offset: 0xC4
    float m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color m_notGeneratingAtlasDefaultSpecularColor
    // Size: 0x10
    // Offset: 0xC8
    ::UnityEngine::Color m_notGeneratingAtlasDefaultSpecularColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_notGeneratingAtlasDefaultEmisionColor
    // Size: 0x10
    // Offset: 0xD8
    ::UnityEngine::Color m_notGeneratingAtlasDefaultEmisionColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating interface conversion operator: operator ::DigitalOpus::MB::Core::TextureBlender
    operator ::DigitalOpus::MB::Core::TextureBlender() noexcept {
      return *reinterpret_cast<::DigitalOpus::MB::Core::TextureBlender*>(this);
    }
    // Get static field: static private UnityEngine.Color NeutralNormalMap
    static ::UnityEngine::Color _get_NeutralNormalMap();
    // Set static field: static private UnityEngine.Color NeutralNormalMap
    static void _set_NeutralNormalMap(::UnityEngine::Color value);
    // Get instance field reference: private DigitalOpus.MB.Core.TextureBlenderMaterialPropertyCacheHelper sourceMaterialPropertyCache
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::TextureBlenderMaterialPropertyCacheHelper*& dyn_sourceMaterialPropertyCache();
    // Get instance field reference: private DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode m_workflowMode
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode& dyn_m_workflowMode();
    // Get instance field reference: private DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel m_smoothnessTextureChannel
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel& dyn_m_smoothnessTextureChannel();
    // Get instance field reference: private UnityEngine.Color m_tintColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_tintColor();
    // Get instance field reference: private System.Single m_smoothness
    [[deprecated("Use field access instead!")]] float& dyn_m_smoothness();
    // Get instance field reference: private UnityEngine.Color m_specColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_specColor();
    // Get instance field reference: private System.Boolean m_hasSpecGlossMap
    [[deprecated("Use field access instead!")]] bool& dyn_m_hasSpecGlossMap();
    // Get instance field reference: private System.Single m_metallic
    [[deprecated("Use field access instead!")]] float& dyn_m_metallic();
    // Get instance field reference: private System.Boolean m_hasMetallicGlossMap
    [[deprecated("Use field access instead!")]] bool& dyn_m_hasMetallicGlossMap();
    // Get instance field reference: private System.Single m_bumpScale
    [[deprecated("Use field access instead!")]] float& dyn_m_bumpScale();
    // Get instance field reference: private System.Boolean m_shaderDoesEmission
    [[deprecated("Use field access instead!")]] bool& dyn_m_shaderDoesEmission();
    // Get instance field reference: private UnityEngine.Color m_emissionColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_emissionColor();
    // Get instance field reference: private DigitalOpus.MB.Core.TextureBlenderURPLit/Prop propertyToDo
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop& dyn_propertyToDo();
    // Get instance field reference: private UnityEngine.Color m_generatingTintedAtlaColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_generatingTintedAtlaColor();
    // Get instance field reference: private System.Single m_generatingTintedAtlasMetallic
    [[deprecated("Use field access instead!")]] float& dyn_m_generatingTintedAtlasMetallic();
    // Get instance field reference: private UnityEngine.Color m_generatingTintedAtlaSpecular
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_generatingTintedAtlaSpecular();
    // Get instance field reference: private System.Single m_generatingTintedAtlasMetallic_smoothness
    [[deprecated("Use field access instead!")]] float& dyn_m_generatingTintedAtlasMetallic_smoothness();
    // Get instance field reference: private System.Single m_generatingTintedAtlasSpecular_somoothness
    [[deprecated("Use field access instead!")]] float& dyn_m_generatingTintedAtlasSpecular_somoothness();
    // Get instance field reference: private System.Single m_generatingTintedAtlaBumpScale
    [[deprecated("Use field access instead!")]] float& dyn_m_generatingTintedAtlaBumpScale();
    // Get instance field reference: private UnityEngine.Color m_generatingTintedAtlaEmission
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_generatingTintedAtlaEmission();
    // Get instance field reference: private UnityEngine.Color m_notGeneratingAtlasDefaultColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_notGeneratingAtlasDefaultColor();
    // Get instance field reference: private System.Single m_notGeneratingAtlasDefaultMetallic
    [[deprecated("Use field access instead!")]] float& dyn_m_notGeneratingAtlasDefaultMetallic();
    // Get instance field reference: private System.Single m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow
    [[deprecated("Use field access instead!")]] float& dyn_m_notGeneratingAtlasDefaultSmoothness_MetallicWorkflow();
    // Get instance field reference: private System.Single m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow
    [[deprecated("Use field access instead!")]] float& dyn_m_notGeneratingAtlasDefaultSmoothness_SpecularWorkflow();
    // Get instance field reference: private UnityEngine.Color m_notGeneratingAtlasDefaultSpecularColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_notGeneratingAtlasDefaultSpecularColor();
    // Get instance field reference: private UnityEngine.Color m_notGeneratingAtlasDefaultEmisionColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_notGeneratingAtlasDefaultEmisionColor();
    // public System.Boolean DoesShaderNameMatch(System.String shaderName)
    // Offset: 0x440D764
    bool DoesShaderNameMatch(::StringW shaderName);
    // private DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode _MapFloatToWorkflowMode(System.Single workflowMode)
    // Offset: 0x440D818
    ::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode _MapFloatToWorkflowMode(float workflowMode);
    // private System.Single _MapWorkflowModeToFloat(DigitalOpus.MB.Core.TextureBlenderURPLit/WorkflowMode workflowMode)
    // Offset: 0x440D828
    float _MapWorkflowModeToFloat(::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode workflowMode);
    // private DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel _MapFloatToTextureChannel(System.Single texChannel)
    // Offset: 0x440D83C
    ::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel _MapFloatToTextureChannel(float texChannel);
    // private System.Single _MapTextureChannelToFloat(DigitalOpus.MB.Core.TextureBlenderURPLit/SmoothnessTextureChannel workflowMode)
    // Offset: 0x440D84C
    float _MapTextureChannelToFloat(::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel workflowMode);
    // public System.Void OnBeforeTintTexture(UnityEngine.Material sourceMat, System.String shaderTexturePropertyName)
    // Offset: 0x440D860
    void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::StringW shaderTexturePropertyName);
    // public UnityEngine.Color OnBlendTexturePixel(System.String propertyToDoshaderPropertyName, UnityEngine.Color pixelColor)
    // Offset: 0x440DEC4
    ::UnityEngine::Color OnBlendTexturePixel(::StringW propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor);
    // public System.Boolean NonTexturePropertiesAreEqual(UnityEngine.Material a, UnityEngine.Material b)
    // Offset: 0x440E038
    bool NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b);
    // public System.Void SetNonTexturePropertyValuesOnResultMaterial(UnityEngine.Material resultMaterial)
    // Offset: 0x440E524
    void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial);
    // public UnityEngine.Color GetColorIfNoTexture(UnityEngine.Material mat, DigitalOpus.MB.Core.ShaderTextureProperty texPropertyName)
    // Offset: 0x440EBBC
    ::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* mat, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName);
    // public System.Void .ctor()
    // Offset: 0x440F34C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextureBlenderURPLit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::TextureBlenderURPLit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextureBlenderURPLit*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x440F400
    static void _cctor();
  }; // DigitalOpus.MB.Core.TextureBlenderURPLit
  #pragma pack(pop)
  static check_size<sizeof(TextureBlenderURPLit), 216 + sizeof(::UnityEngine::Color)> __DigitalOpus_MB_Core_TextureBlenderURPLitSizeCheck;
  static_assert(sizeof(TextureBlenderURPLit) == 0xE8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel, "DigitalOpus.MB.Core", "TextureBlenderURPLit/SmoothnessTextureChannel");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode, "DigitalOpus.MB.Core", "TextureBlenderURPLit/WorkflowMode");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::TextureBlenderURPLit::Prop, "DigitalOpus.MB.Core", "TextureBlenderURPLit/Prop");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::DoesShaderNameMatch
// Il2CppName: DoesShaderNameMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::StringW)>(&DigitalOpus::MB::Core::TextureBlenderURPLit::DoesShaderNameMatch)> {
  static const MethodInfo* get() {
    static auto* shaderName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderURPLit*), "DoesShaderNameMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shaderName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::_MapFloatToWorkflowMode
// Il2CppName: _MapFloatToWorkflowMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode (DigitalOpus::MB::Core::TextureBlenderURPLit::*)(float)>(&DigitalOpus::MB::Core::TextureBlenderURPLit::_MapFloatToWorkflowMode)> {
  static const MethodInfo* get() {
    static auto* workflowMode = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderURPLit*), "_MapFloatToWorkflowMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{workflowMode});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::_MapWorkflowModeToFloat
// Il2CppName: _MapWorkflowModeToFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::DigitalOpus::MB::Core::TextureBlenderURPLit::WorkflowMode)>(&DigitalOpus::MB::Core::TextureBlenderURPLit::_MapWorkflowModeToFloat)> {
  static const MethodInfo* get() {
    static auto* workflowMode = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "TextureBlenderURPLit/WorkflowMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderURPLit*), "_MapWorkflowModeToFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{workflowMode});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::_MapFloatToTextureChannel
// Il2CppName: _MapFloatToTextureChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel (DigitalOpus::MB::Core::TextureBlenderURPLit::*)(float)>(&DigitalOpus::MB::Core::TextureBlenderURPLit::_MapFloatToTextureChannel)> {
  static const MethodInfo* get() {
    static auto* texChannel = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderURPLit*), "_MapFloatToTextureChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texChannel});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::_MapTextureChannelToFloat
// Il2CppName: _MapTextureChannelToFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::DigitalOpus::MB::Core::TextureBlenderURPLit::SmoothnessTextureChannel)>(&DigitalOpus::MB::Core::TextureBlenderURPLit::_MapTextureChannelToFloat)> {
  static const MethodInfo* get() {
    static auto* workflowMode = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "TextureBlenderURPLit/SmoothnessTextureChannel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderURPLit*), "_MapTextureChannelToFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{workflowMode});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::OnBeforeTintTexture
// Il2CppName: OnBeforeTintTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::UnityEngine::Material*, ::StringW)>(&DigitalOpus::MB::Core::TextureBlenderURPLit::OnBeforeTintTexture)> {
  static const MethodInfo* get() {
    static auto* sourceMat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* shaderTexturePropertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderURPLit*), "OnBeforeTintTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceMat, shaderTexturePropertyName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::OnBlendTexturePixel
// Il2CppName: OnBlendTexturePixel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::StringW, ::UnityEngine::Color)>(&DigitalOpus::MB::Core::TextureBlenderURPLit::OnBlendTexturePixel)> {
  static const MethodInfo* get() {
    static auto* propertyToDoshaderPropertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pixelColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderURPLit*), "OnBlendTexturePixel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyToDoshaderPropertyName, pixelColor});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::NonTexturePropertiesAreEqual
// Il2CppName: NonTexturePropertiesAreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&DigitalOpus::MB::Core::TextureBlenderURPLit::NonTexturePropertiesAreEqual)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderURPLit*), "NonTexturePropertiesAreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::SetNonTexturePropertyValuesOnResultMaterial
// Il2CppName: SetNonTexturePropertyValuesOnResultMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::UnityEngine::Material*)>(&DigitalOpus::MB::Core::TextureBlenderURPLit::SetNonTexturePropertyValuesOnResultMaterial)> {
  static const MethodInfo* get() {
    static auto* resultMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderURPLit*), "SetNonTexturePropertyValuesOnResultMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultMaterial});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::GetColorIfNoTexture
// Il2CppName: GetColorIfNoTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DigitalOpus::MB::Core::TextureBlenderURPLit::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&DigitalOpus::MB::Core::TextureBlenderURPLit::GetColorIfNoTexture)> {
  static const MethodInfo* get() {
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* texPropertyName = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderURPLit*), "GetColorIfNoTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mat, texPropertyName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderURPLit::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&DigitalOpus::MB::Core::TextureBlenderURPLit::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderURPLit*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};