// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Android.AndroidAssetPackStatus
#include "UnityEngine/Android/AndroidAssetPackStatus.hpp"
// Including type: UnityEngine.Android.AndroidAssetPackError
#include "UnityEngine/Android/AndroidAssetPackError.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Forward declaring type: AndroidAssetPackInfo
  class AndroidAssetPackInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPackInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackInfo*, "UnityEngine.Android", "AndroidAssetPackInfo");
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Android.AndroidAssetPackInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidAssetPackInfo : public ::Il2CppObject {
    public:
    public:
    // private readonly System.String <name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly UnityEngine.Android.AndroidAssetPackStatus <status>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::Android::AndroidAssetPackStatus status;
    // Field size check
    static_assert(sizeof(::UnityEngine::Android::AndroidAssetPackStatus) == 0x4);
    // Padding between fields: status and: size
    char __padding1[0x4] = {};
    // private readonly System.UInt64 <size>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    uint64_t size;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly System.UInt64 <bytesDownloaded>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    uint64_t bytesDownloaded;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly System.Single <transferProgress>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    float transferProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly UnityEngine.Android.AndroidAssetPackError <error>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    ::UnityEngine::Android::AndroidAssetPackError error;
    // Field size check
    static_assert(sizeof(::UnityEngine::Android::AndroidAssetPackError) == 0x4);
    public:
    // Get instance field reference: private readonly System.String <name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$name$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.Android.AndroidAssetPackStatus <status>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Android::AndroidAssetPackStatus& dyn_$status$k__BackingField();
    // Get instance field reference: private readonly System.UInt64 <size>k__BackingField
    [[deprecated("Use field access instead!")]] uint64_t& dyn_$size$k__BackingField();
    // Get instance field reference: private readonly System.UInt64 <bytesDownloaded>k__BackingField
    [[deprecated("Use field access instead!")]] uint64_t& dyn_$bytesDownloaded$k__BackingField();
    // Get instance field reference: private readonly System.Single <transferProgress>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$transferProgress$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.Android.AndroidAssetPackError <error>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Android::AndroidAssetPackError& dyn_$error$k__BackingField();
    // System.Void .ctor(System.String name, UnityEngine.Android.AndroidAssetPackStatus status, System.UInt64 size, System.UInt64 bytesDownloaded, System.Single transferProgress, UnityEngine.Android.AndroidAssetPackError error)
    // Offset: 0x5461720
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidAssetPackInfo* New_ctor(::StringW name, ::UnityEngine::Android::AndroidAssetPackStatus status, uint64_t size, uint64_t bytesDownloaded, float transferProgress, ::UnityEngine::Android::AndroidAssetPackError error) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Android::AndroidAssetPackInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidAssetPackInfo*, creationType>(name, status, size, bytesDownloaded, transferProgress, error)));
    }
  }; // UnityEngine.Android.AndroidAssetPackInfo
  #pragma pack(pop)
  static check_size<sizeof(AndroidAssetPackInfo), 52 + sizeof(::UnityEngine::Android::AndroidAssetPackError)> __UnityEngine_Android_AndroidAssetPackInfoSizeCheck;
  static_assert(sizeof(AndroidAssetPackInfo) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Android::AndroidAssetPackInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!