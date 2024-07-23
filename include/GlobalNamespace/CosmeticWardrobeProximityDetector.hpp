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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SphereCollider
  class SphereCollider;
  // Forward declaring type: Collider
  class Collider;
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
  // Forward declaring type: CosmeticWardrobeProximityDetector
  class CosmeticWardrobeProximityDetector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CosmeticWardrobeProximityDetector);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticWardrobeProximityDetector*, "", "CosmeticWardrobeProximityDetector");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CosmeticWardrobeProximityDetector
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class CosmeticWardrobeProximityDetector : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.SphereCollider wardrobeNearbyCollider
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::SphereCollider* wardrobeNearbyCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::SphereCollider*) == 0x8);
    public:
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.SphereCollider> wardrobeNearbyDetection
    static ::System::Collections::Generic::List_1<::UnityEngine::SphereCollider*>* _get_wardrobeNearbyDetection();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.SphereCollider> wardrobeNearbyDetection
    static void _set_wardrobeNearbyDetection(::System::Collections::Generic::List_1<::UnityEngine::SphereCollider*>* value);
    // Get static field: static private readonly UnityEngine.Collider[] overlapColliders
    static ::ArrayW<::UnityEngine::Collider*> _get_overlapColliders();
    // Set static field: static private readonly UnityEngine.Collider[] overlapColliders
    static void _set_overlapColliders(::ArrayW<::UnityEngine::Collider*> value);
    // Get instance field reference: private UnityEngine.SphereCollider wardrobeNearbyCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::SphereCollider*& dyn_wardrobeNearbyCollider();
    // private System.Void OnEnable()
    // Offset: 0x26D2A24
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x26D2B3C
    void OnDisable();
    // static public System.Boolean IsUserNearWardrobe(System.String userID)
    // Offset: 0x26D2C04
    static bool IsUserNearWardrobe(::StringW userID);
    // public System.Void .ctor()
    // Offset: 0x26D32A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticWardrobeProximityDetector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CosmeticWardrobeProximityDetector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticWardrobeProximityDetector*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x26D32A8
    static void _cctor();
  }; // CosmeticWardrobeProximityDetector
  #pragma pack(pop)
  static check_size<sizeof(CosmeticWardrobeProximityDetector), 32 + sizeof(::UnityEngine::SphereCollider*)> __GlobalNamespace_CosmeticWardrobeProximityDetectorSizeCheck;
  static_assert(sizeof(CosmeticWardrobeProximityDetector) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CosmeticWardrobeProximityDetector::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticWardrobeProximityDetector::*)()>(&GlobalNamespace::CosmeticWardrobeProximityDetector::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticWardrobeProximityDetector*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticWardrobeProximityDetector::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticWardrobeProximityDetector::*)()>(&GlobalNamespace::CosmeticWardrobeProximityDetector::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticWardrobeProximityDetector*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticWardrobeProximityDetector::IsUserNearWardrobe
// Il2CppName: IsUserNearWardrobe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&GlobalNamespace::CosmeticWardrobeProximityDetector::IsUserNearWardrobe)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticWardrobeProximityDetector*), "IsUserNearWardrobe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticWardrobeProximityDetector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CosmeticWardrobeProximityDetector::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::CosmeticWardrobeProximityDetector::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticWardrobeProximityDetector*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};