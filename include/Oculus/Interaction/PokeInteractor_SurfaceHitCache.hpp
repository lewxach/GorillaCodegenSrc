// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PokeInteractor
#include "Oculus/Interaction/PokeInteractor.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: Oculus.Interaction.Surfaces.SurfaceHit
#include "Oculus/Interaction/Surfaces/SurfaceHit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: PokeInteractable
  class PokeInteractable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PokeInteractor::SurfaceHitCache);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PokeInteractor::SurfaceHitCache*, "Oculus.Interaction", "PokeInteractor/SurfaceHitCache");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PokeInteractor/SurfaceHitCache
  // [TokenAttribute] Offset: FFFFFFFF
  class PokeInteractor::SurfaceHitCache : public ::Il2CppObject {
    public:
    // Nested type: ::Oculus::Interaction::PokeInteractor::SurfaceHitCache::HitInfo
    struct HitInfo;
    // Size: 0x20
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo
    // [TokenAttribute] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct HitInfo/*, public ::System::ValueType*/ {
      public:
      public:
      // public readonly System.Boolean IsValid
      // Size: 0x1
      // Offset: 0x0
      bool IsValid;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: IsValid and: Hit
      char __padding0[0x3] = {};
      // public readonly Oculus.Interaction.Surfaces.SurfaceHit Hit
      // Size: 0x1C
      // Offset: 0x4
      ::Oculus::Interaction::Surfaces::SurfaceHit Hit;
      // Field size check
      static_assert(sizeof(::Oculus::Interaction::Surfaces::SurfaceHit) == 0x1C);
      public:
      // Creating value type constructor for type: HitInfo
      constexpr HitInfo(bool IsValid_ = {}, ::Oculus::Interaction::Surfaces::SurfaceHit Hit_ = {}) noexcept : IsValid{IsValid_}, Hit{Hit_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Boolean IsValid
      [[deprecated("Use field access instead!")]] bool& dyn_IsValid();
      // Get instance field reference: public readonly Oculus.Interaction.Surfaces.SurfaceHit Hit
      [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Surfaces::SurfaceHit& dyn_Hit();
      // public System.Void .ctor(System.Boolean isValid, Oculus.Interaction.Surfaces.SurfaceHit hit)
      // Offset: 0x47B1F20
      // ABORTED: conflicts with another method.  HitInfo(bool isValid, ::Oculus::Interaction::Surfaces::SurfaceHit hit);
    }; // Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo
    #pragma pack(pop)
    static check_size<sizeof(PokeInteractor::SurfaceHitCache::HitInfo), 4 + sizeof(::Oculus::Interaction::Surfaces::SurfaceHit)> __Oculus_Interaction_PokeInteractor_SurfaceHitCache_HitInfoSizeCheck;
    static_assert(sizeof(PokeInteractor::SurfaceHitCache::HitInfo) == 0x20);
    public:
    // private System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo> _surfacePatchHitCache
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PokeInteractable*, ::Oculus::Interaction::PokeInteractor::SurfaceHitCache::HitInfo>* surfacePatchHitCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PokeInteractable*, ::Oculus::Interaction::PokeInteractor::SurfaceHitCache::HitInfo>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo> _backingSurfaceHitCache
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PokeInteractable*, ::Oculus::Interaction::PokeInteractor::SurfaceHitCache::HitInfo>* backingSurfaceHitCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PokeInteractable*, ::Oculus::Interaction::PokeInteractor::SurfaceHitCache::HitInfo>*) == 0x8);
    // private UnityEngine.Vector3 _origin
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 origin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo> _surfacePatchHitCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PokeInteractable*, ::Oculus::Interaction::PokeInteractor::SurfaceHitCache::HitInfo>*& dyn__surfacePatchHitCache();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<Oculus.Interaction.PokeInteractable,Oculus.Interaction.PokeInteractor/SurfaceHitCache/HitInfo> _backingSurfaceHitCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PokeInteractable*, ::Oculus::Interaction::PokeInteractor::SurfaceHitCache::HitInfo>*& dyn__backingSurfaceHitCache();
    // Get instance field reference: private UnityEngine.Vector3 _origin
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__origin();
    // public System.Boolean GetPatchHit(Oculus.Interaction.PokeInteractable interactable, out Oculus.Interaction.Surfaces.SurfaceHit hit)
    // Offset: 0x47AE544
    bool GetPatchHit(::Oculus::Interaction::PokeInteractable* interactable, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit);
    // public System.Boolean GetBackingHit(Oculus.Interaction.PokeInteractable interactable, out Oculus.Interaction.Surfaces.SurfaceHit hit)
    // Offset: 0x47AE2B0
    bool GetBackingHit(::Oculus::Interaction::PokeInteractable* interactable, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit> hit);
    // public System.Void .ctor()
    // Offset: 0x47ADB94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PokeInteractor::SurfaceHitCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PokeInteractor::SurfaceHitCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PokeInteractor::SurfaceHitCache*, creationType>()));
    }
    // public System.Void Reset(UnityEngine.Vector3 origin)
    // Offset: 0x47ADCC8
    void Reset(::UnityEngine::Vector3 origin);
  }; // Oculus.Interaction.PokeInteractor/SurfaceHitCache
  #pragma pack(pop)
  static check_size<sizeof(PokeInteractor::SurfaceHitCache), 32 + sizeof(::UnityEngine::Vector3)> __Oculus_Interaction_PokeInteractor_SurfaceHitCacheSizeCheck;
  static_assert(sizeof(PokeInteractor::SurfaceHitCache) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PokeInteractor::SurfaceHitCache::HitInfo, "Oculus.Interaction", "PokeInteractor/SurfaceHitCache/HitInfo");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractor::SurfaceHitCache::GetPatchHit
// Il2CppName: GetPatchHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PokeInteractor::SurfaceHitCache::*)(::Oculus::Interaction::PokeInteractable*, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>)>(&Oculus::Interaction::PokeInteractor::SurfaceHitCache::GetPatchHit)> {
  static const MethodInfo* get() {
    static auto* interactable = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PokeInteractable")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractor::SurfaceHitCache*), "GetPatchHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactable, hit});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractor::SurfaceHitCache::GetBackingHit
// Il2CppName: GetBackingHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::PokeInteractor::SurfaceHitCache::*)(::Oculus::Interaction::PokeInteractable*, ByRef<::Oculus::Interaction::Surfaces::SurfaceHit>)>(&Oculus::Interaction::PokeInteractor::SurfaceHitCache::GetBackingHit)> {
  static const MethodInfo* get() {
    static auto* interactable = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PokeInteractable")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "SurfaceHit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractor::SurfaceHitCache*), "GetBackingHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactable, hit});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractor::SurfaceHitCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PokeInteractor::SurfaceHitCache::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PokeInteractor::SurfaceHitCache::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::PokeInteractor::SurfaceHitCache::Reset)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PokeInteractor::SurfaceHitCache*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin});
  }
};
