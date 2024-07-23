// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: GorillaNetworking.Store
namespace GorillaNetworking::Store {
  // Forward declaring type: StoreBundleData
  class StoreBundleData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::Store::StoreBundleData);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::Store::StoreBundleData*, "GorillaNetworking.Store", "StoreBundleData");
// Type namespace: GorillaNetworking.Store
namespace GorillaNetworking::Store {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.Store.StoreBundleData
  // [TokenAttribute] Offset: FFFFFFFF
  class StoreBundleData : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.String playfabBundleID
    // Size: 0x8
    // Offset: 0x18
    ::StringW playfabBundleID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String bundleSKU
    // Size: 0x8
    // Offset: 0x20
    ::StringW bundleSKU;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Sprite bundleImage
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Sprite* bundleImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // public System.String bundleDescriptionText
    // Size: 0x8
    // Offset: 0x30
    ::StringW bundleDescriptionText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String playfabBundleID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_playfabBundleID();
    // Get instance field reference: public System.String bundleSKU
    [[deprecated("Use field access instead!")]] ::StringW& dyn_bundleSKU();
    // Get instance field reference: public UnityEngine.Sprite bundleImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_bundleImage();
    // Get instance field reference: public System.String bundleDescriptionText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_bundleDescriptionText();
    // public System.Void .ctor()
    // Offset: 0x2866B58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StoreBundleData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::Store::StoreBundleData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StoreBundleData*, creationType>()));
    }
    // public System.Void OnValidate()
    // Offset: 0x2866C00
    void OnValidate();
  }; // GorillaNetworking.Store.StoreBundleData
  #pragma pack(pop)
  static check_size<sizeof(StoreBundleData), 48 + sizeof(::StringW)> __GorillaNetworking_Store_StoreBundleDataSizeCheck;
  static_assert(sizeof(StoreBundleData) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::Store::StoreBundleData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaNetworking::Store::StoreBundleData::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::Store::StoreBundleData::*)()>(&GorillaNetworking::Store::StoreBundleData::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::Store::StoreBundleData*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};