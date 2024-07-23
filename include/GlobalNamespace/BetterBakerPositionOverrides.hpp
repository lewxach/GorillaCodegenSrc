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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BetterBakerPositionOverrides
  class BetterBakerPositionOverrides;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BetterBakerPositionOverrides);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BetterBakerPositionOverrides*, "", "BetterBakerPositionOverrides");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BetterBakerPositionOverrides
  // [TokenAttribute] Offset: FFFFFFFF
  class BetterBakerPositionOverrides : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BetterBakerPositionOverrides::OverridePosition
    struct OverridePosition;
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: BetterBakerPositionOverrides/OverridePosition
    // [TokenAttribute] Offset: FFFFFFFF
    struct OverridePosition/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.GameObject go
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::GameObject* go;
      // Field size check
      static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
      // public UnityEngine.Transform bakingTransform
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Transform* bakingTransform;
      // Field size check
      static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
      // public UnityEngine.Transform gameTransform
      // Size: 0x8
      // Offset: 0x10
      ::UnityEngine::Transform* gameTransform;
      // Field size check
      static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
      public:
      // Creating value type constructor for type: OverridePosition
      constexpr OverridePosition(::UnityEngine::GameObject* go_ = {}, ::UnityEngine::Transform* bakingTransform_ = {}, ::UnityEngine::Transform* gameTransform_ = {}) noexcept : go{go_}, bakingTransform{bakingTransform_}, gameTransform{gameTransform_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.GameObject go
      [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_go();
      // Get instance field reference: public UnityEngine.Transform bakingTransform
      [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bakingTransform();
      // Get instance field reference: public UnityEngine.Transform gameTransform
      [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_gameTransform();
    }; // BetterBakerPositionOverrides/OverridePosition
    #pragma pack(pop)
    static check_size<sizeof(BetterBakerPositionOverrides::OverridePosition), 16 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_BetterBakerPositionOverrides_OverridePositionSizeCheck;
    static_assert(sizeof(BetterBakerPositionOverrides::OverridePosition) == 0x18);
    public:
    // public System.Collections.Generic.List`1<BetterBakerPositionOverrides/OverridePosition> overridePositions
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides::OverridePosition>* overridePositions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides::OverridePosition>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<BetterBakerPositionOverrides/OverridePosition> overridePositions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides::OverridePosition>*& dyn_overridePositions();
    // public System.Void .ctor()
    // Offset: 0x277383C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BetterBakerPositionOverrides* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BetterBakerPositionOverrides::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BetterBakerPositionOverrides*, creationType>()));
    }
  }; // BetterBakerPositionOverrides
  #pragma pack(pop)
  static check_size<sizeof(BetterBakerPositionOverrides), 32 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides::OverridePosition>*)> __GlobalNamespace_BetterBakerPositionOverridesSizeCheck;
  static_assert(sizeof(BetterBakerPositionOverrides) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BetterBakerPositionOverrides::OverridePosition, "", "BetterBakerPositionOverrides/OverridePosition");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BetterBakerPositionOverrides::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!