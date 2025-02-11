// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: LagCompensationSettings
  class LagCompensationSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::LagCompensationSettings);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::LagCompensationSettings*, "Fusion", "LagCompensationSettings");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.LagCompensationSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class LagCompensationSettings : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 HitboxBufferSize
    // Size: 0x4
    // Offset: 0x10
    int HitboxBufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 HitboxCapacity
    // Size: 0x4
    // Offset: 0x14
    int HitboxCapacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single ExpansionFactor
    // Size: 0x4
    // Offset: 0x18
    float ExpansionFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean Optimize
    // Size: 0x1
    // Offset: 0x1C
    bool Optimize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DebugBroadphase
    // Size: 0x1
    // Offset: 0x1D
    bool DebugBroadphase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DebugHistory
    // Size: 0x1
    // Offset: 0x1E
    bool DebugHistory;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: DebugHistory and: DebugColor
    char __padding5[0x1] = {};
    // public UnityEngine.Color DebugColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color DebugColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color ClientDebugColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color ClientDebugColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color HistoryDebugColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color HistoryDebugColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: public System.Int32 HitboxBufferSize
    [[deprecated("Use field access instead!")]] int& dyn_HitboxBufferSize();
    // Get instance field reference: public System.Int32 HitboxCapacity
    [[deprecated("Use field access instead!")]] int& dyn_HitboxCapacity();
    // Get instance field reference: public System.Single ExpansionFactor
    [[deprecated("Use field access instead!")]] float& dyn_ExpansionFactor();
    // Get instance field reference: public System.Boolean Optimize
    [[deprecated("Use field access instead!")]] bool& dyn_Optimize();
    // Get instance field reference: public System.Boolean DebugBroadphase
    [[deprecated("Use field access instead!")]] bool& dyn_DebugBroadphase();
    // Get instance field reference: public System.Boolean DebugHistory
    [[deprecated("Use field access instead!")]] bool& dyn_DebugHistory();
    // Get instance field reference: public UnityEngine.Color DebugColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_DebugColor();
    // Get instance field reference: public UnityEngine.Color ClientDebugColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_ClientDebugColor();
    // Get instance field reference: public UnityEngine.Color HistoryDebugColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_HistoryDebugColor();
    // private System.String get__bufferWarnTextProvider()
    // Offset: 0x2B3C7B8
    ::StringW get__bufferWarnTextProvider();
    // private System.Int32 get__bufferMsgTypeProvider()
    // Offset: 0x2B3C82C
    int get__bufferMsgTypeProvider();
    // public System.Void .ctor()
    // Offset: 0x2B3C850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LagCompensationSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::LagCompensationSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LagCompensationSettings*, creationType>()));
    }
  }; // Fusion.LagCompensationSettings
  #pragma pack(pop)
  static check_size<sizeof(LagCompensationSettings), 64 + sizeof(::UnityEngine::Color)> __Fusion_LagCompensationSettingsSizeCheck;
  static_assert(sizeof(LagCompensationSettings) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::LagCompensationSettings::get__bufferWarnTextProvider
// Il2CppName: get__bufferWarnTextProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::LagCompensationSettings::*)()>(&Fusion::LagCompensationSettings::get__bufferWarnTextProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationSettings*), "get__bufferWarnTextProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationSettings::get__bufferMsgTypeProvider
// Il2CppName: get__bufferMsgTypeProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::LagCompensationSettings::*)()>(&Fusion::LagCompensationSettings::get__bufferMsgTypeProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::LagCompensationSettings*), "get__bufferMsgTypeProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::LagCompensationSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
