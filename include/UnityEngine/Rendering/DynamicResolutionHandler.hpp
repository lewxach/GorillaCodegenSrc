// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2Int
#include "UnityEngine/Vector2Int.hpp"
// Including type: UnityEngine.Rendering.DynamicResUpscaleFilter
#include "UnityEngine/Rendering/DynamicResUpscaleFilter.hpp"
// Including type: UnityEngine.Rendering.DynamicResolutionType
#include "UnityEngine/Rendering/DynamicResolutionType.hpp"
// Including type: UnityEngine.Rendering.DynamicResScalerSlot
#include "UnityEngine/Rendering/DynamicResScalerSlot.hpp"
// Including type: UnityEngine.Rendering.DynamicResScalePolicyType
#include "UnityEngine/Rendering/DynamicResScalePolicyType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: PerformDynamicRes
  class PerformDynamicRes;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: DynamicResolutionHandler
  class DynamicResolutionHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DynamicResolutionHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DynamicResolutionHandler*, "UnityEngine.Rendering", "DynamicResolutionHandler");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.DynamicResolutionHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class DynamicResolutionHandler : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::DynamicResolutionHandler::ScalerContainer
    struct ScalerContainer;
    // Nested type: ::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType
    struct UpsamplerScheduleType;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Rendering.DynamicResolutionHandler/ScalerContainer
    // [TokenAttribute] Offset: FFFFFFFF
    struct ScalerContainer/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Rendering.DynamicResScalePolicyType type
      // Size: 0x4
      // Offset: 0x0
      ::UnityEngine::Rendering::DynamicResScalePolicyType type;
      // Field size check
      static_assert(sizeof(::UnityEngine::Rendering::DynamicResScalePolicyType) == 0x4);
      // Padding between fields: type and: method
      char __padding0[0x4] = {};
      // public UnityEngine.Rendering.PerformDynamicRes method
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Rendering::PerformDynamicRes* method;
      // Field size check
      static_assert(sizeof(::UnityEngine::Rendering::PerformDynamicRes*) == 0x8);
      public:
      // Creating value type constructor for type: ScalerContainer
      constexpr ScalerContainer(::UnityEngine::Rendering::DynamicResScalePolicyType type_ = {}, ::UnityEngine::Rendering::PerformDynamicRes* method_ = {}) noexcept : type{type_}, method{method_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Rendering.DynamicResScalePolicyType type
      [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DynamicResScalePolicyType& dyn_type();
      // Get instance field reference: public UnityEngine.Rendering.PerformDynamicRes method
      [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::PerformDynamicRes*& dyn_method();
    }; // UnityEngine.Rendering.DynamicResolutionHandler/ScalerContainer
    #pragma pack(pop)
    static check_size<sizeof(DynamicResolutionHandler::ScalerContainer), 8 + sizeof(::UnityEngine::Rendering::PerformDynamicRes*)> __UnityEngine_Rendering_DynamicResolutionHandler_ScalerContainerSizeCheck;
    static_assert(sizeof(DynamicResolutionHandler::ScalerContainer) == 0x10);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType
    // [TokenAttribute] Offset: FFFFFFFF
    struct UpsamplerScheduleType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: UpsamplerScheduleType
      constexpr UpsamplerScheduleType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType BeforePost
      static constexpr const int BeforePost = 0;
      // Get static field: static public UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType BeforePost
      static ::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType _get_BeforePost();
      // Set static field: static public UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType BeforePost
      static void _set_BeforePost(::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType value);
      // static field const value: static public UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType AfterDepthOfField
      static constexpr const int AfterDepthOfField = 1;
      // Get static field: static public UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType AfterDepthOfField
      static ::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType _get_AfterDepthOfField();
      // Set static field: static public UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType AfterDepthOfField
      static void _set_AfterDepthOfField(::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType value);
      // static field const value: static public UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType AfterPost
      static constexpr const int AfterPost = 2;
      // Get static field: static public UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType AfterPost
      static ::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType _get_AfterPost();
      // Set static field: static public UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType AfterPost
      static void _set_AfterPost(::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType
    #pragma pack(pop)
    static check_size<sizeof(DynamicResolutionHandler::UpsamplerScheduleType), 0 + sizeof(int)> __UnityEngine_Rendering_DynamicResolutionHandler_UpsamplerScheduleTypeSizeCheck;
    static_assert(sizeof(DynamicResolutionHandler::UpsamplerScheduleType) == 0x4);
    public:
    // private System.Boolean m_Enabled
    // Size: 0x1
    // Offset: 0x10
    bool m_Enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_UseMipBias
    // Size: 0x1
    // Offset: 0x11
    bool m_UseMipBias;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UseMipBias and: m_MinScreenFraction
    char __padding1[0x2] = {};
    // private System.Single m_MinScreenFraction
    // Size: 0x4
    // Offset: 0x14
    float m_MinScreenFraction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_MaxScreenFraction
    // Size: 0x4
    // Offset: 0x18
    float m_MaxScreenFraction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_CurrentFraction
    // Size: 0x4
    // Offset: 0x1C
    float m_CurrentFraction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_ForcingRes
    // Size: 0x1
    // Offset: 0x20
    bool m_ForcingRes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_CurrentCameraRequest
    // Size: 0x1
    // Offset: 0x21
    bool m_CurrentCameraRequest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_CurrentCameraRequest and: m_PrevFraction
    char __padding6[0x2] = {};
    // private System.Single m_PrevFraction
    // Size: 0x4
    // Offset: 0x24
    float m_PrevFraction;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_ForceSoftwareFallback
    // Size: 0x1
    // Offset: 0x28
    bool m_ForceSoftwareFallback;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_RunUpscalerFilterOnFullResolution
    // Size: 0x1
    // Offset: 0x29
    bool m_RunUpscalerFilterOnFullResolution;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_RunUpscalerFilterOnFullResolution and: m_PrevHWScaleWidth
    char __padding9[0x2] = {};
    // private System.Single m_PrevHWScaleWidth
    // Size: 0x4
    // Offset: 0x2C
    float m_PrevHWScaleWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_PrevHWScaleHeight
    // Size: 0x4
    // Offset: 0x30
    float m_PrevHWScaleHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector2Int m_LastScaledSize
    // Size: 0x8
    // Offset: 0x34
    ::UnityEngine::Vector2Int m_LastScaledSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    // private UnityEngine.Rendering.DynamicResUpscaleFilter <filter>k__BackingField
    // Size: 0x1
    // Offset: 0x3C
    ::UnityEngine::Rendering::DynamicResUpscaleFilter filter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::DynamicResUpscaleFilter) == 0x1);
    // Padding between fields: filter and: finalViewport
    char __padding13[0x3] = {};
    // private UnityEngine.Vector2Int <finalViewport>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Vector2Int finalViewport;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    // private UnityEngine.Rendering.DynamicResolutionType type
    // Size: 0x1
    // Offset: 0x48
    ::UnityEngine::Rendering::DynamicResolutionType type;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::DynamicResolutionType) == 0x1);
    // Padding between fields: type and: m_CachedSettings
    char __padding15[0x3] = {};
    // private UnityEngine.Rendering.GlobalDynamicResolutionSettings m_CachedSettings
    // Size: 0x34
    // Offset: 0x4C
    ::UnityEngine::Rendering::GlobalDynamicResolutionSettings m_CachedSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::GlobalDynamicResolutionSettings) == 0x34);
    // private UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType m_UpsamplerSchedule
    // Size: 0x4
    // Offset: 0x80
    ::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType m_UpsamplerSchedule;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType) == 0x4);
    public:
    // Get static field: static private UnityEngine.Rendering.DynamicResScalerSlot s_ActiveScalerSlot
    static ::UnityEngine::Rendering::DynamicResScalerSlot _get_s_ActiveScalerSlot();
    // Set static field: static private UnityEngine.Rendering.DynamicResScalerSlot s_ActiveScalerSlot
    static void _set_s_ActiveScalerSlot(::UnityEngine::Rendering::DynamicResScalerSlot value);
    // Get static field: static private UnityEngine.Rendering.DynamicResolutionHandler/ScalerContainer[] s_ScalerContainers
    static ::ArrayW<::UnityEngine::Rendering::DynamicResolutionHandler::ScalerContainer> _get_s_ScalerContainers();
    // Set static field: static private UnityEngine.Rendering.DynamicResolutionHandler/ScalerContainer[] s_ScalerContainers
    static void _set_s_ScalerContainers(::ArrayW<::UnityEngine::Rendering::DynamicResolutionHandler::ScalerContainer> value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.DynamicResUpscaleFilter> s_CameraUpscaleFilters
    static ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Rendering::DynamicResUpscaleFilter>* _get_s_CameraUpscaleFilters();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.DynamicResUpscaleFilter> s_CameraUpscaleFilters
    static void _set_s_CameraUpscaleFilters(::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Rendering::DynamicResUpscaleFilter>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.DynamicResolutionHandler> s_CameraInstances
    static ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Rendering::DynamicResolutionHandler*>* _get_s_CameraInstances();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Rendering.DynamicResolutionHandler> s_CameraInstances
    static void _set_s_CameraInstances(::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Rendering::DynamicResolutionHandler*>* value);
    // Get static field: static private UnityEngine.Rendering.DynamicResolutionHandler s_DefaultInstance
    static ::UnityEngine::Rendering::DynamicResolutionHandler* _get_s_DefaultInstance();
    // Set static field: static private UnityEngine.Rendering.DynamicResolutionHandler s_DefaultInstance
    static void _set_s_DefaultInstance(::UnityEngine::Rendering::DynamicResolutionHandler* value);
    // Get static field: static private System.Int32 s_ActiveCameraId
    static int _get_s_ActiveCameraId();
    // Set static field: static private System.Int32 s_ActiveCameraId
    static void _set_s_ActiveCameraId(int value);
    // Get static field: static private UnityEngine.Rendering.DynamicResolutionHandler s_ActiveInstance
    static ::UnityEngine::Rendering::DynamicResolutionHandler* _get_s_ActiveInstance();
    // Set static field: static private UnityEngine.Rendering.DynamicResolutionHandler s_ActiveInstance
    static void _set_s_ActiveInstance(::UnityEngine::Rendering::DynamicResolutionHandler* value);
    // Get static field: static private System.Boolean s_ActiveInstanceDirty
    static bool _get_s_ActiveInstanceDirty();
    // Set static field: static private System.Boolean s_ActiveInstanceDirty
    static void _set_s_ActiveInstanceDirty(bool value);
    // Get static field: static private System.Single s_GlobalHwFraction
    static float _get_s_GlobalHwFraction();
    // Set static field: static private System.Single s_GlobalHwFraction
    static void _set_s_GlobalHwFraction(float value);
    // Get static field: static private System.Boolean s_GlobalHwUpresActive
    static bool _get_s_GlobalHwUpresActive();
    // Set static field: static private System.Boolean s_GlobalHwUpresActive
    static void _set_s_GlobalHwUpresActive(bool value);
    // Get instance field reference: private System.Boolean m_Enabled
    [[deprecated("Use field access instead!")]] bool& dyn_m_Enabled();
    // Get instance field reference: private System.Boolean m_UseMipBias
    [[deprecated("Use field access instead!")]] bool& dyn_m_UseMipBias();
    // Get instance field reference: private System.Single m_MinScreenFraction
    [[deprecated("Use field access instead!")]] float& dyn_m_MinScreenFraction();
    // Get instance field reference: private System.Single m_MaxScreenFraction
    [[deprecated("Use field access instead!")]] float& dyn_m_MaxScreenFraction();
    // Get instance field reference: private System.Single m_CurrentFraction
    [[deprecated("Use field access instead!")]] float& dyn_m_CurrentFraction();
    // Get instance field reference: private System.Boolean m_ForcingRes
    [[deprecated("Use field access instead!")]] bool& dyn_m_ForcingRes();
    // Get instance field reference: private System.Boolean m_CurrentCameraRequest
    [[deprecated("Use field access instead!")]] bool& dyn_m_CurrentCameraRequest();
    // Get instance field reference: private System.Single m_PrevFraction
    [[deprecated("Use field access instead!")]] float& dyn_m_PrevFraction();
    // Get instance field reference: private System.Boolean m_ForceSoftwareFallback
    [[deprecated("Use field access instead!")]] bool& dyn_m_ForceSoftwareFallback();
    // Get instance field reference: private System.Boolean m_RunUpscalerFilterOnFullResolution
    [[deprecated("Use field access instead!")]] bool& dyn_m_RunUpscalerFilterOnFullResolution();
    // Get instance field reference: private System.Single m_PrevHWScaleWidth
    [[deprecated("Use field access instead!")]] float& dyn_m_PrevHWScaleWidth();
    // Get instance field reference: private System.Single m_PrevHWScaleHeight
    [[deprecated("Use field access instead!")]] float& dyn_m_PrevHWScaleHeight();
    // Get instance field reference: private UnityEngine.Vector2Int m_LastScaledSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_m_LastScaledSize();
    // Get instance field reference: private UnityEngine.Rendering.DynamicResUpscaleFilter <filter>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DynamicResUpscaleFilter& dyn_$filter$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector2Int <finalViewport>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_$finalViewport$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.DynamicResolutionType type
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DynamicResolutionType& dyn_type();
    // Get instance field reference: private UnityEngine.Rendering.GlobalDynamicResolutionSettings m_CachedSettings
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::GlobalDynamicResolutionSettings& dyn_m_CachedSettings();
    // Get instance field reference: private UnityEngine.Rendering.DynamicResolutionHandler/UpsamplerScheduleType m_UpsamplerSchedule
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType& dyn_m_UpsamplerSchedule();
    // private System.Void Reset()
    // Offset: 0x523DDDC
    void Reset();
    // private System.Void set_filter(UnityEngine.Rendering.DynamicResUpscaleFilter value)
    // Offset: 0x523DE18
    void set_filter(::UnityEngine::Rendering::DynamicResUpscaleFilter value);
    // public UnityEngine.Vector2Int get_finalViewport()
    // Offset: 0x523DE20
    ::UnityEngine::Vector2Int get_finalViewport();
    // static public UnityEngine.Rendering.DynamicResolutionHandler get_instance()
    // Offset: 0x523DE28
    static ::UnityEngine::Rendering::DynamicResolutionHandler* get_instance();
    // private System.Void .ctor()
    // Offset: 0x523DE80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicResolutionHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DynamicResolutionHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicResolutionHandler*, creationType>()));
    }
    // static private System.Single DefaultDynamicResMethod()
    // Offset: 0x523DF8C
    static float DefaultDynamicResMethod();
    // public System.Boolean HardwareDynamicResIsEnabled()
    // Offset: 0x523DF94
    bool HardwareDynamicResIsEnabled();
    // public System.Boolean RequestsHardwareDynamicResolution()
    // Offset: 0x523DFC4
    bool RequestsHardwareDynamicResolution();
    // UnityEngine.Vector2Int ApplyScalesOnSize(UnityEngine.Vector2Int size, UnityEngine.Vector2 scales)
    // Offset: 0x523DFE4
    ::UnityEngine::Vector2Int ApplyScalesOnSize(::UnityEngine::Vector2Int size, ::UnityEngine::Vector2 scales);
    // static private System.Void .cctor()
    // Offset: 0x523E16C
    static void _cctor();
  }; // UnityEngine.Rendering.DynamicResolutionHandler
  #pragma pack(pop)
  static check_size<sizeof(DynamicResolutionHandler), 128 + sizeof(::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType)> __UnityEngine_Rendering_DynamicResolutionHandlerSizeCheck;
  static_assert(sizeof(DynamicResolutionHandler) == 0x84);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DynamicResolutionHandler::UpsamplerScheduleType, "UnityEngine.Rendering", "DynamicResolutionHandler/UpsamplerScheduleType");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DynamicResolutionHandler::ScalerContainer, "UnityEngine.Rendering", "DynamicResolutionHandler/ScalerContainer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DynamicResolutionHandler::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DynamicResolutionHandler::*)()>(&UnityEngine::Rendering::DynamicResolutionHandler::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DynamicResolutionHandler*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DynamicResolutionHandler::set_filter
// Il2CppName: set_filter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DynamicResolutionHandler::*)(::UnityEngine::Rendering::DynamicResUpscaleFilter)>(&UnityEngine::Rendering::DynamicResolutionHandler::set_filter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DynamicResUpscaleFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DynamicResolutionHandler*), "set_filter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DynamicResolutionHandler::get_finalViewport
// Il2CppName: get_finalViewport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (UnityEngine::Rendering::DynamicResolutionHandler::*)()>(&UnityEngine::Rendering::DynamicResolutionHandler::get_finalViewport)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DynamicResolutionHandler*), "get_finalViewport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DynamicResolutionHandler::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DynamicResolutionHandler* (*)()>(&UnityEngine::Rendering::DynamicResolutionHandler::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DynamicResolutionHandler*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DynamicResolutionHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::DynamicResolutionHandler::DefaultDynamicResMethod
// Il2CppName: DefaultDynamicResMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Rendering::DynamicResolutionHandler::DefaultDynamicResMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DynamicResolutionHandler*), "DefaultDynamicResMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DynamicResolutionHandler::HardwareDynamicResIsEnabled
// Il2CppName: HardwareDynamicResIsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::DynamicResolutionHandler::*)()>(&UnityEngine::Rendering::DynamicResolutionHandler::HardwareDynamicResIsEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DynamicResolutionHandler*), "HardwareDynamicResIsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DynamicResolutionHandler::RequestsHardwareDynamicResolution
// Il2CppName: RequestsHardwareDynamicResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::DynamicResolutionHandler::*)()>(&UnityEngine::Rendering::DynamicResolutionHandler::RequestsHardwareDynamicResolution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DynamicResolutionHandler*), "RequestsHardwareDynamicResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DynamicResolutionHandler::ApplyScalesOnSize
// Il2CppName: ApplyScalesOnSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (UnityEngine::Rendering::DynamicResolutionHandler::*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2)>(&UnityEngine::Rendering::DynamicResolutionHandler::ApplyScalesOnSize)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2Int")->byval_arg;
    static auto* scales = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DynamicResolutionHandler*), "ApplyScalesOnSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size, scales});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DynamicResolutionHandler::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::DynamicResolutionHandler::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DynamicResolutionHandler*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
