// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BakerySectorCapture
  class BakerySectorCapture;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BakerySector
  class BakerySector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BakerySector);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakerySector*, "", "BakerySector");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: BakerySector
  // [TokenAttribute] Offset: FFFFFFFF
  class BakerySector : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BakerySector::CaptureMode
    struct CaptureMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BakerySector/CaptureMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct CaptureMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: CaptureMode
      constexpr CaptureMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BakerySector/CaptureMode None
      static constexpr const int None = -1;
      // Get static field: static public BakerySector/CaptureMode None
      static ::GlobalNamespace::BakerySector::CaptureMode _get_None();
      // Set static field: static public BakerySector/CaptureMode None
      static void _set_None(::GlobalNamespace::BakerySector::CaptureMode value);
      // static field const value: static public BakerySector/CaptureMode CaptureInPlace
      static constexpr const int CaptureInPlace = 0;
      // Get static field: static public BakerySector/CaptureMode CaptureInPlace
      static ::GlobalNamespace::BakerySector::CaptureMode _get_CaptureInPlace();
      // Set static field: static public BakerySector/CaptureMode CaptureInPlace
      static void _set_CaptureInPlace(::GlobalNamespace::BakerySector::CaptureMode value);
      // static field const value: static public BakerySector/CaptureMode CaptureToAsset
      static constexpr const int CaptureToAsset = 1;
      // Get static field: static public BakerySector/CaptureMode CaptureToAsset
      static ::GlobalNamespace::BakerySector::CaptureMode _get_CaptureToAsset();
      // Set static field: static public BakerySector/CaptureMode CaptureToAsset
      static void _set_CaptureToAsset(::GlobalNamespace::BakerySector::CaptureMode value);
      // static field const value: static public BakerySector/CaptureMode LoadCaptured
      static constexpr const int LoadCaptured = 2;
      // Get static field: static public BakerySector/CaptureMode LoadCaptured
      static ::GlobalNamespace::BakerySector::CaptureMode _get_LoadCaptured();
      // Set static field: static public BakerySector/CaptureMode LoadCaptured
      static void _set_LoadCaptured(::GlobalNamespace::BakerySector::CaptureMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // BakerySector/CaptureMode
    #pragma pack(pop)
    static check_size<sizeof(BakerySector::CaptureMode), 0 + sizeof(int)> __GlobalNamespace_BakerySector_CaptureModeSizeCheck;
    static_assert(sizeof(BakerySector::CaptureMode) == 0x4);
    public:
    // public BakerySector/CaptureMode captureMode
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BakerySector::CaptureMode captureMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BakerySector::CaptureMode) == 0x4);
    // Padding between fields: captureMode and: captureAssetName
    char __padding0[0x4] = {};
    // public System.String captureAssetName
    // Size: 0x8
    // Offset: 0x28
    ::StringW captureAssetName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public BakerySectorCapture captureAsset
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BakerySectorCapture* captureAsset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BakerySectorCapture*) == 0x8);
    // public System.Boolean allowUVPaddingAdjustment
    // Size: 0x1
    // Offset: 0x38
    bool allowUVPaddingAdjustment;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: allowUVPaddingAdjustment and: tforms
    char __padding3[0x7] = {};
    // public System.Collections.Generic.List`1<UnityEngine.Transform> tforms
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* tforms;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Transform> cpoints
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* cpoints;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*) == 0x8);
    public:
    // Get instance field reference: public BakerySector/CaptureMode captureMode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BakerySector::CaptureMode& dyn_captureMode();
    // Get instance field reference: public System.String captureAssetName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_captureAssetName();
    // Get instance field reference: public BakerySectorCapture captureAsset
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BakerySectorCapture*& dyn_captureAsset();
    // Get instance field reference: public System.Boolean allowUVPaddingAdjustment
    [[deprecated("Use field access instead!")]] bool& dyn_allowUVPaddingAdjustment();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Transform> tforms
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& dyn_tforms();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Transform> cpoints
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& dyn_cpoints();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x2A7904C
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x2A79158
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakerySector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BakerySector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakerySector*, creationType>()));
    }
  }; // BakerySector
  #pragma pack(pop)
  static check_size<sizeof(BakerySector), 72 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*)> __GlobalNamespace_BakerySectorSizeCheck;
  static_assert(sizeof(BakerySector) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakerySector::CaptureMode, "", "BakerySector/CaptureMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BakerySector::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BakerySector::*)()>(&GlobalNamespace::BakerySector::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakerySector*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakerySector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!