// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SoundBankSO
  class SoundBankSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SoundBankSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoundBankSO*, "", "SoundBankSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SoundBankSO
  // [TokenAttribute] Offset: FFFFFFFF
  class SoundBankSO : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public UnityEngine.AudioClip[] sounds
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::AudioClip*> sounds;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // public UnityEngine.Vector2 volumeRange
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 volumeRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 pitchRange
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Vector2 pitchRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.AudioClip[] sounds
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn_sounds();
    // Get instance field reference: public UnityEngine.Vector2 volumeRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_volumeRange();
    // Get instance field reference: public UnityEngine.Vector2 pitchRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_pitchRange();
    // public System.Void .ctor()
    // Offset: 0x277A968
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoundBankSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SoundBankSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoundBankSO*, creationType>()));
    }
  }; // SoundBankSO
  #pragma pack(pop)
  static check_size<sizeof(SoundBankSO), 40 + sizeof(::UnityEngine::Vector2)> __GlobalNamespace_SoundBankSOSizeCheck;
  static_assert(sizeof(SoundBankSO) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SoundBankSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
