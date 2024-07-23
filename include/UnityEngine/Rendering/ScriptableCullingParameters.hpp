// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Rendering.LODParameters
#include "UnityEngine/Rendering/LODParameters.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Rendering.CullingOptions
#include "UnityEngine/Rendering/CullingOptions.hpp"
// Including type: UnityEngine.Rendering.ReflectionProbeSortingCriteria
#include "UnityEngine/Rendering/ReflectionProbeSortingCriteria.hpp"
// Including type: UnityEngine.Rendering.CameraProperties
#include "UnityEngine/Rendering/CameraProperties.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Plane
  struct Plane;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScriptableCullingParameters
  struct ScriptableCullingParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableCullingParameters, "UnityEngine.Rendering", "ScriptableCullingParameters");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x630
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.ScriptableCullingParameters
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct ScriptableCullingParameters/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>*/ {
    public:
    // Nested type: ::UnityEngine::Rendering::ScriptableCullingParameters::$m_CullingPlanes$e__FixedBuffer
    struct $m_CullingPlanes$e__FixedBuffer;
    // Nested type: ::UnityEngine::Rendering::ScriptableCullingParameters::$m_LayerFarCullDistances$e__FixedBuffer
    struct $m_LayerFarCullDistances$e__FixedBuffer;
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    struct $m_CullingPlanes$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $m_CullingPlanes$e__FixedBuffer
      constexpr $m_CullingPlanes$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Byte FixedElementField
      [[deprecated("Use field access instead!")]] uint8_t& dyn_FixedElementField();
    }; // UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(ScriptableCullingParameters::$m_CullingPlanes$e__FixedBuffer), 0 + sizeof(uint8_t)> __UnityEngine_Rendering_ScriptableCullingParameters_$m_CullingPlanes$e__FixedBufferSizeCheck;
    static_assert(sizeof(ScriptableCullingParameters::$m_CullingPlanes$e__FixedBuffer) == 0x1);
    // Size: 0x4
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    struct $m_LayerFarCullDistances$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Single FixedElementField
      // Size: 0x4
      // Offset: 0x0
      float FixedElementField;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: $m_LayerFarCullDistances$e__FixedBuffer
      constexpr $m_LayerFarCullDistances$e__FixedBuffer(float FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator float
      constexpr operator float() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Single FixedElementField
      [[deprecated("Use field access instead!")]] float& dyn_FixedElementField();
    }; // UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(ScriptableCullingParameters::$m_LayerFarCullDistances$e__FixedBuffer), 0 + sizeof(float)> __UnityEngine_Rendering_ScriptableCullingParameters_$m_LayerFarCullDistances$e__FixedBufferSizeCheck;
    static_assert(sizeof(ScriptableCullingParameters::$m_LayerFarCullDistances$e__FixedBuffer) == 0x4);
    public:
    // private System.Int32 m_IsOrthographic
    // Size: 0x4
    // Offset: 0x0
    int m_IsOrthographic;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Rendering.LODParameters m_LODParameters
    // Size: 0x1C
    // Offset: 0x4
    ::UnityEngine::Rendering::LODParameters m_LODParameters;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::LODParameters) == 0x1C);
    // UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer m_CullingPlanes
    // Size: 0x1
    // Offset: 0x20
    ::UnityEngine::Rendering::ScriptableCullingParameters::$m_CullingPlanes$e__FixedBuffer m_CullingPlanes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ScriptableCullingParameters::$m_CullingPlanes$e__FixedBuffer) == 0x1);
    // Padding between fields: m_CullingPlanes and: m_CullingPlaneCount
    char __padding2[0x9F] = {};
    // private System.Int32 m_CullingPlaneCount
    // Size: 0x4
    // Offset: 0xC0
    int m_CullingPlaneCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 m_CullingMask
    // Size: 0x4
    // Offset: 0xC4
    uint m_CullingMask;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt64 m_SceneMask
    // Size: 0x8
    // Offset: 0xC8
    uint64_t m_SceneMask;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 m_ViewID
    // Size: 0x8
    // Offset: 0xD0
    uint64_t m_ViewID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer m_LayerFarCullDistances
    // Size: 0x4
    // Offset: 0xD8
    ::UnityEngine::Rendering::ScriptableCullingParameters::$m_LayerFarCullDistances$e__FixedBuffer m_LayerFarCullDistances;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ScriptableCullingParameters::$m_LayerFarCullDistances$e__FixedBuffer) == 0x4);
    // Padding between fields: m_LayerFarCullDistances and: m_LayerCull
    char __padding7[0x7C] = {};
    // private System.Int32 m_LayerCull
    // Size: 0x4
    // Offset: 0x158
    int m_LayerCull;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Matrix4x4 m_CullingMatrix
    // Size: 0x40
    // Offset: 0x15C
    ::UnityEngine::Matrix4x4 m_CullingMatrix;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Vector3 m_Origin
    // Size: 0xC
    // Offset: 0x19C
    ::UnityEngine::Vector3 m_Origin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single m_ShadowDistance
    // Size: 0x4
    // Offset: 0x1A8
    float m_ShadowDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_ShadowNearPlaneOffset
    // Size: 0x4
    // Offset: 0x1AC
    float m_ShadowNearPlaneOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Rendering.CullingOptions m_CullingOptions
    // Size: 0x4
    // Offset: 0x1B0
    ::UnityEngine::Rendering::CullingOptions m_CullingOptions;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CullingOptions) == 0x4);
    // private UnityEngine.Rendering.ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria
    // Size: 0x4
    // Offset: 0x1B4
    ::UnityEngine::Rendering::ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ReflectionProbeSortingCriteria) == 0x4);
    // private UnityEngine.Rendering.CameraProperties m_CameraProperties
    // Size: 0x3E0
    // Offset: 0x1B8
    ::UnityEngine::Rendering::CameraProperties m_CameraProperties;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CameraProperties) == 0x3E0);
    // private System.Single m_AccurateOcclusionThreshold
    // Size: 0x4
    // Offset: 0x598
    float m_AccurateOcclusionThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_MaximumPortalCullingJobs
    // Size: 0x4
    // Offset: 0x59C
    int m_MaximumPortalCullingJobs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Matrix4x4 m_StereoViewMatrix
    // Size: 0x40
    // Offset: 0x5A0
    ::UnityEngine::Matrix4x4 m_StereoViewMatrix;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Matrix4x4 m_StereoProjectionMatrix
    // Size: 0x40
    // Offset: 0x5E0
    ::UnityEngine::Matrix4x4 m_StereoProjectionMatrix;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private System.Single m_StereoSeparationDistance
    // Size: 0x4
    // Offset: 0x620
    float m_StereoSeparationDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_maximumVisibleLights
    // Size: 0x4
    // Offset: 0x624
    int m_maximumVisibleLights;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_ConservativeEnclosingSphere
    // Size: 0x1
    // Offset: 0x628
    bool m_ConservativeEnclosingSphere;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ConservativeEnclosingSphere and: m_NumIterationsEnclosingSphere
    char __padding22[0x3] = {};
    // private System.Int32 m_NumIterationsEnclosingSphere
    // Size: 0x4
    // Offset: 0x62C
    int m_NumIterationsEnclosingSphere;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ScriptableCullingParameters
    constexpr ScriptableCullingParameters(int m_IsOrthographic_ = {}, ::UnityEngine::Rendering::LODParameters m_LODParameters_ = {}, ::UnityEngine::Rendering::ScriptableCullingParameters::$m_CullingPlanes$e__FixedBuffer m_CullingPlanes_ = {}, int m_CullingPlaneCount_ = {}, uint m_CullingMask_ = {}, uint64_t m_SceneMask_ = {}, uint64_t m_ViewID_ = {}, ::UnityEngine::Rendering::ScriptableCullingParameters::$m_LayerFarCullDistances$e__FixedBuffer m_LayerFarCullDistances_ = {}, int m_LayerCull_ = {}, ::UnityEngine::Matrix4x4 m_CullingMatrix_ = {}, ::UnityEngine::Vector3 m_Origin_ = {}, float m_ShadowDistance_ = {}, float m_ShadowNearPlaneOffset_ = {}, ::UnityEngine::Rendering::CullingOptions m_CullingOptions_ = {}, ::UnityEngine::Rendering::ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria_ = {}, ::UnityEngine::Rendering::CameraProperties m_CameraProperties_ = {}, float m_AccurateOcclusionThreshold_ = {}, int m_MaximumPortalCullingJobs_ = {}, ::UnityEngine::Matrix4x4 m_StereoViewMatrix_ = {}, ::UnityEngine::Matrix4x4 m_StereoProjectionMatrix_ = {}, float m_StereoSeparationDistance_ = {}, int m_maximumVisibleLights_ = {}, bool m_ConservativeEnclosingSphere_ = {}, int m_NumIterationsEnclosingSphere_ = {}) noexcept : m_IsOrthographic{m_IsOrthographic_}, m_LODParameters{m_LODParameters_}, m_CullingPlanes{m_CullingPlanes_}, m_CullingPlaneCount{m_CullingPlaneCount_}, m_CullingMask{m_CullingMask_}, m_SceneMask{m_SceneMask_}, m_ViewID{m_ViewID_}, m_LayerFarCullDistances{m_LayerFarCullDistances_}, m_LayerCull{m_LayerCull_}, m_CullingMatrix{m_CullingMatrix_}, m_Origin{m_Origin_}, m_ShadowDistance{m_ShadowDistance_}, m_ShadowNearPlaneOffset{m_ShadowNearPlaneOffset_}, m_CullingOptions{m_CullingOptions_}, m_ReflectionProbeSortingCriteria{m_ReflectionProbeSortingCriteria_}, m_CameraProperties{m_CameraProperties_}, m_AccurateOcclusionThreshold{m_AccurateOcclusionThreshold_}, m_MaximumPortalCullingJobs{m_MaximumPortalCullingJobs_}, m_StereoViewMatrix{m_StereoViewMatrix_}, m_StereoProjectionMatrix{m_StereoProjectionMatrix_}, m_StereoSeparationDistance{m_StereoSeparationDistance_}, m_maximumVisibleLights{m_maximumVisibleLights_}, m_ConservativeEnclosingSphere{m_ConservativeEnclosingSphere_}, m_NumIterationsEnclosingSphere{m_NumIterationsEnclosingSphere_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::ScriptableCullingParameters>*>(this);
    }
    // static field const value: static private System.Int32 k_MaximumCullingPlaneCount
    static constexpr const int k_MaximumCullingPlaneCount = 10;
    // Get static field: static private System.Int32 k_MaximumCullingPlaneCount
    static int _get_k_MaximumCullingPlaneCount();
    // Set static field: static private System.Int32 k_MaximumCullingPlaneCount
    static void _set_k_MaximumCullingPlaneCount(int value);
    // Get static field: static public readonly System.Int32 maximumCullingPlaneCount
    static int _get_maximumCullingPlaneCount();
    // Set static field: static public readonly System.Int32 maximumCullingPlaneCount
    static void _set_maximumCullingPlaneCount(int value);
    // static field const value: static private System.Int32 k_LayerCount
    static constexpr const int k_LayerCount = 32;
    // Get static field: static private System.Int32 k_LayerCount
    static int _get_k_LayerCount();
    // Set static field: static private System.Int32 k_LayerCount
    static void _set_k_LayerCount(int value);
    // Get static field: static public readonly System.Int32 layerCount
    static int _get_layerCount();
    // Set static field: static public readonly System.Int32 layerCount
    static void _set_layerCount(int value);
    // static field const value: static private System.Int32 k_CullingJobCountLowerLimit
    static constexpr const int k_CullingJobCountLowerLimit = 1;
    // Get static field: static private System.Int32 k_CullingJobCountLowerLimit
    static int _get_k_CullingJobCountLowerLimit();
    // Set static field: static private System.Int32 k_CullingJobCountLowerLimit
    static void _set_k_CullingJobCountLowerLimit(int value);
    // static field const value: static private System.Int32 k_CullingJobCountUpperLimit
    static constexpr const int k_CullingJobCountUpperLimit = 16;
    // Get static field: static private System.Int32 k_CullingJobCountUpperLimit
    static int _get_k_CullingJobCountUpperLimit();
    // Set static field: static private System.Int32 k_CullingJobCountUpperLimit
    static void _set_k_CullingJobCountUpperLimit(int value);
    // Get instance field reference: private System.Int32 m_IsOrthographic
    [[deprecated("Use field access instead!")]] int& dyn_m_IsOrthographic();
    // Get instance field reference: private UnityEngine.Rendering.LODParameters m_LODParameters
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::LODParameters& dyn_m_LODParameters();
    // Get instance field reference: UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer m_CullingPlanes
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ScriptableCullingParameters::$m_CullingPlanes$e__FixedBuffer& dyn_m_CullingPlanes();
    // Get instance field reference: private System.Int32 m_CullingPlaneCount
    [[deprecated("Use field access instead!")]] int& dyn_m_CullingPlaneCount();
    // Get instance field reference: private System.UInt32 m_CullingMask
    [[deprecated("Use field access instead!")]] uint& dyn_m_CullingMask();
    // Get instance field reference: private System.UInt64 m_SceneMask
    [[deprecated("Use field access instead!")]] uint64_t& dyn_m_SceneMask();
    // Get instance field reference: private System.UInt64 m_ViewID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_m_ViewID();
    // Get instance field reference: UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer m_LayerFarCullDistances
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ScriptableCullingParameters::$m_LayerFarCullDistances$e__FixedBuffer& dyn_m_LayerFarCullDistances();
    // Get instance field reference: private System.Int32 m_LayerCull
    [[deprecated("Use field access instead!")]] int& dyn_m_LayerCull();
    // Get instance field reference: private UnityEngine.Matrix4x4 m_CullingMatrix
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_m_CullingMatrix();
    // Get instance field reference: private UnityEngine.Vector3 m_Origin
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Origin();
    // Get instance field reference: private System.Single m_ShadowDistance
    [[deprecated("Use field access instead!")]] float& dyn_m_ShadowDistance();
    // Get instance field reference: private System.Single m_ShadowNearPlaneOffset
    [[deprecated("Use field access instead!")]] float& dyn_m_ShadowNearPlaneOffset();
    // Get instance field reference: private UnityEngine.Rendering.CullingOptions m_CullingOptions
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CullingOptions& dyn_m_CullingOptions();
    // Get instance field reference: private UnityEngine.Rendering.ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ReflectionProbeSortingCriteria& dyn_m_ReflectionProbeSortingCriteria();
    // Get instance field reference: private UnityEngine.Rendering.CameraProperties m_CameraProperties
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CameraProperties& dyn_m_CameraProperties();
    // Get instance field reference: private System.Single m_AccurateOcclusionThreshold
    [[deprecated("Use field access instead!")]] float& dyn_m_AccurateOcclusionThreshold();
    // Get instance field reference: private System.Int32 m_MaximumPortalCullingJobs
    [[deprecated("Use field access instead!")]] int& dyn_m_MaximumPortalCullingJobs();
    // Get instance field reference: private UnityEngine.Matrix4x4 m_StereoViewMatrix
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_m_StereoViewMatrix();
    // Get instance field reference: private UnityEngine.Matrix4x4 m_StereoProjectionMatrix
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_m_StereoProjectionMatrix();
    // Get instance field reference: private System.Single m_StereoSeparationDistance
    [[deprecated("Use field access instead!")]] float& dyn_m_StereoSeparationDistance();
    // Get instance field reference: private System.Int32 m_maximumVisibleLights
    [[deprecated("Use field access instead!")]] int& dyn_m_maximumVisibleLights();
    // Get instance field reference: private System.Boolean m_ConservativeEnclosingSphere
    [[deprecated("Use field access instead!")]] bool& dyn_m_ConservativeEnclosingSphere();
    // Get instance field reference: private System.Int32 m_NumIterationsEnclosingSphere
    [[deprecated("Use field access instead!")]] int& dyn_m_NumIterationsEnclosingSphere();
    // public System.Void set_maximumVisibleLights(System.Int32 value)
    // Offset: 0x54E5F44
    void set_maximumVisibleLights(int value);
    // public System.Void set_conservativeEnclosingSphere(System.Boolean value)
    // Offset: 0x54E5F4C
    void set_conservativeEnclosingSphere(bool value);
    // public System.Void set_numIterationsEnclosingSphere(System.Int32 value)
    // Offset: 0x54E5F58
    void set_numIterationsEnclosingSphere(int value);
    // public System.Int32 get_cullingPlaneCount()
    // Offset: 0x54E5F60
    int get_cullingPlaneCount();
    // public System.Void set_isOrthographic(System.Boolean value)
    // Offset: 0x54E5F68
    void set_isOrthographic(bool value);
    // public System.Void set_shadowDistance(System.Single value)
    // Offset: 0x54E5FD4
    void set_shadowDistance(float value);
    // public UnityEngine.Rendering.CullingOptions get_cullingOptions()
    // Offset: 0x54E5FDC
    ::UnityEngine::Rendering::CullingOptions get_cullingOptions();
    // public System.Void set_cullingOptions(UnityEngine.Rendering.CullingOptions value)
    // Offset: 0x54E5FE4
    void set_cullingOptions(::UnityEngine::Rendering::CullingOptions value);
    // public System.Void set_stereoViewMatrix(UnityEngine.Matrix4x4 value)
    // Offset: 0x54E5FEC
    void set_stereoViewMatrix(::UnityEngine::Matrix4x4 value);
    // public UnityEngine.Matrix4x4 get_stereoProjectionMatrix()
    // Offset: 0x54E6008
    ::UnityEngine::Matrix4x4 get_stereoProjectionMatrix();
    // public System.Void set_stereoProjectionMatrix(UnityEngine.Matrix4x4 value)
    // Offset: 0x54E6024
    void set_stereoProjectionMatrix(::UnityEngine::Matrix4x4 value);
    // public System.Void set_stereoSeparationDistance(System.Single value)
    // Offset: 0x54E6040
    void set_stereoSeparationDistance(float value);
    // public System.Single GetLayerCullingDistance(System.Int32 layerIndex)
    // Offset: 0x54E6048
    float GetLayerCullingDistance(int layerIndex);
    // public UnityEngine.Plane GetCullingPlane(System.Int32 index)
    // Offset: 0x54E6120
    ::UnityEngine::Plane GetCullingPlane(int index);
    // public System.Boolean Equals(UnityEngine.Rendering.ScriptableCullingParameters other)
    // Offset: 0x54E6208
    bool Equals(::UnityEngine::Rendering::ScriptableCullingParameters other);
    // static private System.Void .cctor()
    // Offset: 0x54E684C
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x54E65DC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54E6694
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.ScriptableCullingParameters
  #pragma pack(pop)
  static check_size<sizeof(ScriptableCullingParameters), 1580 + sizeof(int)> __UnityEngine_Rendering_ScriptableCullingParametersSizeCheck;
  static_assert(sizeof(ScriptableCullingParameters) == 0x630);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableCullingParameters::$m_LayerFarCullDistances$e__FixedBuffer, "UnityEngine.Rendering", "ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableCullingParameters::$m_CullingPlanes$e__FixedBuffer, "UnityEngine.Rendering", "ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::set_maximumVisibleLights
// Il2CppName: set_maximumVisibleLights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ScriptableCullingParameters::*)(int)>(&UnityEngine::Rendering::ScriptableCullingParameters::set_maximumVisibleLights)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "set_maximumVisibleLights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::set_conservativeEnclosingSphere
// Il2CppName: set_conservativeEnclosingSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ScriptableCullingParameters::*)(bool)>(&UnityEngine::Rendering::ScriptableCullingParameters::set_conservativeEnclosingSphere)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "set_conservativeEnclosingSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::set_numIterationsEnclosingSphere
// Il2CppName: set_numIterationsEnclosingSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ScriptableCullingParameters::*)(int)>(&UnityEngine::Rendering::ScriptableCullingParameters::set_numIterationsEnclosingSphere)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "set_numIterationsEnclosingSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::get_cullingPlaneCount
// Il2CppName: get_cullingPlaneCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::ScriptableCullingParameters::*)()>(&UnityEngine::Rendering::ScriptableCullingParameters::get_cullingPlaneCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "get_cullingPlaneCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::set_isOrthographic
// Il2CppName: set_isOrthographic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ScriptableCullingParameters::*)(bool)>(&UnityEngine::Rendering::ScriptableCullingParameters::set_isOrthographic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "set_isOrthographic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::set_shadowDistance
// Il2CppName: set_shadowDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ScriptableCullingParameters::*)(float)>(&UnityEngine::Rendering::ScriptableCullingParameters::set_shadowDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "set_shadowDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::get_cullingOptions
// Il2CppName: get_cullingOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CullingOptions (UnityEngine::Rendering::ScriptableCullingParameters::*)()>(&UnityEngine::Rendering::ScriptableCullingParameters::get_cullingOptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "get_cullingOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::set_cullingOptions
// Il2CppName: set_cullingOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ScriptableCullingParameters::*)(::UnityEngine::Rendering::CullingOptions)>(&UnityEngine::Rendering::ScriptableCullingParameters::set_cullingOptions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CullingOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "set_cullingOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::set_stereoViewMatrix
// Il2CppName: set_stereoViewMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ScriptableCullingParameters::*)(::UnityEngine::Matrix4x4)>(&UnityEngine::Rendering::ScriptableCullingParameters::set_stereoViewMatrix)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "set_stereoViewMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::get_stereoProjectionMatrix
// Il2CppName: get_stereoProjectionMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (UnityEngine::Rendering::ScriptableCullingParameters::*)()>(&UnityEngine::Rendering::ScriptableCullingParameters::get_stereoProjectionMatrix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "get_stereoProjectionMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::set_stereoProjectionMatrix
// Il2CppName: set_stereoProjectionMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ScriptableCullingParameters::*)(::UnityEngine::Matrix4x4)>(&UnityEngine::Rendering::ScriptableCullingParameters::set_stereoProjectionMatrix)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "set_stereoProjectionMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::set_stereoSeparationDistance
// Il2CppName: set_stereoSeparationDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ScriptableCullingParameters::*)(float)>(&UnityEngine::Rendering::ScriptableCullingParameters::set_stereoSeparationDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "set_stereoSeparationDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::GetLayerCullingDistance
// Il2CppName: GetLayerCullingDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rendering::ScriptableCullingParameters::*)(int)>(&UnityEngine::Rendering::ScriptableCullingParameters::GetLayerCullingDistance)> {
  static const MethodInfo* get() {
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "GetLayerCullingDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::GetCullingPlane
// Il2CppName: GetCullingPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Plane (UnityEngine::Rendering::ScriptableCullingParameters::*)(int)>(&UnityEngine::Rendering::ScriptableCullingParameters::GetCullingPlane)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "GetCullingPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::ScriptableCullingParameters::*)(::UnityEngine::Rendering::ScriptableCullingParameters)>(&UnityEngine::Rendering::ScriptableCullingParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableCullingParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::ScriptableCullingParameters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::ScriptableCullingParameters::*)(::Il2CppObject*)>(&UnityEngine::Rendering::ScriptableCullingParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableCullingParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::ScriptableCullingParameters::*)()>(&UnityEngine::Rendering::ScriptableCullingParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableCullingParameters), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};