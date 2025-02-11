// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FusionGraphBase
#include "GlobalNamespace/FusionGraphBase.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FusionStats
  class FusionStats;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FusionStatsMeterBar
  class FusionStatsMeterBar;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FusionStatsMeterBar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FusionStatsMeterBar*, "", "FusionStatsMeterBar");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x114
  #pragma pack(push, 1)
  // Autogenerated type: FusionStatsMeterBar
  // [TokenAttribute] Offset: FFFFFFFF
  class FusionStatsMeterBar : public ::GlobalNamespace::FusionGraphBase {
    public:
    public:
    // public System.Single HoldPeakTime
    // Size: 0x4
    // Offset: 0xB8
    float HoldPeakTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single DecayTime
    // Size: 0x4
    // Offset: 0xBC
    float DecayTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 MeterMax
    // Size: 0x4
    // Offset: 0xC0
    int MeterMax;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _showUITargets
    // Size: 0x1
    // Offset: 0xC4
    bool showUITargets;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showUITargets and: ValueLabel
    char __padding3[0x3] = {};
    // public UnityEngine.UI.Text ValueLabel
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::UI::Text* ValueLabel;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public UnityEngine.UI.Image Bar
    // Size: 0x8
    // Offset: 0xD0
    ::UnityEngine::UI::Image* Bar;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private System.Double _currentDisplayValue
    // Size: 0x8
    // Offset: 0xD8
    double currentDisplayValue;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double _currentBarValue
    // Size: 0x8
    // Offset: 0xE0
    double currentBarValue;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private UnityEngine.Color CurrentColor
    // Size: 0x10
    // Offset: 0xE8
    ::UnityEngine::Color CurrentColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Double _lastImportedSampleTickTime
    // Size: 0x8
    // Offset: 0xF8
    double lastImportedSampleTickTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double _max
    // Size: 0x8
    // Offset: 0x100
    double max;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double _total
    // Size: 0x8
    // Offset: 0x108
    double total;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single _lastPeakSetTime
    // Size: 0x4
    // Offset: 0x110
    float lastPeakSetTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single HoldPeakTime
    [[deprecated("Use field access instead!")]] float& dyn_HoldPeakTime();
    // Get instance field reference: public System.Single DecayTime
    [[deprecated("Use field access instead!")]] float& dyn_DecayTime();
    // Get instance field reference: public System.Int32 MeterMax
    [[deprecated("Use field access instead!")]] int& dyn_MeterMax();
    // Get instance field reference: private System.Boolean _showUITargets
    [[deprecated("Use field access instead!")]] bool& dyn__showUITargets();
    // Get instance field reference: public UnityEngine.UI.Text ValueLabel
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_ValueLabel();
    // Get instance field reference: public UnityEngine.UI.Image Bar
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_Bar();
    // Get instance field reference: private System.Double _currentDisplayValue
    [[deprecated("Use field access instead!")]] double& dyn__currentDisplayValue();
    // Get instance field reference: private System.Double _currentBarValue
    [[deprecated("Use field access instead!")]] double& dyn__currentBarValue();
    // Get instance field reference: private UnityEngine.Color CurrentColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_CurrentColor();
    // Get instance field reference: private System.Double _lastImportedSampleTickTime
    [[deprecated("Use field access instead!")]] double& dyn__lastImportedSampleTickTime();
    // Get instance field reference: private System.Double _max
    [[deprecated("Use field access instead!")]] double& dyn__max();
    // Get instance field reference: private System.Double _total
    [[deprecated("Use field access instead!")]] double& dyn__total();
    // Get instance field reference: private System.Single _lastPeakSetTime
    [[deprecated("Use field access instead!")]] float& dyn__lastPeakSetTime();
    // public System.Void LateUpdate()
    // Offset: 0x295977C
    void LateUpdate();
    // public System.Void SetValue(System.Double rawvalue)
    // Offset: 0x29595E0
    void SetValue(double rawvalue);
    // private System.Void SetBar(System.Double value)
    // Offset: 0x295985C
    void SetBar(double value);
    // static public FusionStatsMeterBar Create(UnityEngine.RectTransform parent, FusionStats fusionStats, Fusion.Simulation/Statistics/StatSourceTypes statSourceType, System.Int32 statId, System.Single warnThreshold, System.Single alertThreshold)
    // Offset: 0x2959B14
    static ::GlobalNamespace::FusionStatsMeterBar* Create(::UnityEngine::RectTransform* parent, ::GlobalNamespace::FusionStats* fusionStats, ::Fusion::Simulation::Statistics::StatSourceTypes statSourceType, int statId, float warnThreshold, float alertThreshold);
    // public System.Void GenerateMeter()
    // Offset: 0x2959C74
    void GenerateMeter();
    // protected override UnityEngine.Color get_BackColor()
    // Offset: 0x2958CE4
    // Implemented from: FusionGraphBase
    // Base method: UnityEngine.Color FusionGraphBase::get_BackColor()
    ::UnityEngine::Color get_BackColor();
    // public override System.Void Initialize()
    // Offset: 0x2958D04
    // Implemented from: FusionGraphBase
    // Base method: System.Void FusionGraphBase::Initialize()
    void Initialize();
    // public override System.Void Refresh()
    // Offset: 0x2958F48
    // Implemented from: FusionGraphBase
    // Base method: System.Void FusionGraphBase::Refresh()
    void Refresh();
    // public override System.Void CalculateLayout()
    // Offset: 0x29599DC
    // Implemented from: FusionGraphBase
    // Base method: System.Void FusionGraphBase::CalculateLayout()
    void CalculateLayout();
    // public System.Void .ctor()
    // Offset: 0x295A080
    // Implemented from: FusionGraphBase
    // Base method: System.Void FusionGraphBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FusionStatsMeterBar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FusionStatsMeterBar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FusionStatsMeterBar*, creationType>()));
    }
  }; // FusionStatsMeterBar
  #pragma pack(pop)
  static check_size<sizeof(FusionStatsMeterBar), 272 + sizeof(float)> __GlobalNamespace_FusionStatsMeterBarSizeCheck;
  static_assert(sizeof(FusionStatsMeterBar) == 0x114);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsMeterBar::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsMeterBar::*)()>(&GlobalNamespace::FusionStatsMeterBar::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsMeterBar*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsMeterBar::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsMeterBar::*)(double)>(&GlobalNamespace::FusionStatsMeterBar::SetValue)> {
  static const MethodInfo* get() {
    static auto* rawvalue = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsMeterBar*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawvalue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsMeterBar::SetBar
// Il2CppName: SetBar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsMeterBar::*)(double)>(&GlobalNamespace::FusionStatsMeterBar::SetBar)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsMeterBar*), "SetBar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsMeterBar::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::FusionStatsMeterBar* (*)(::UnityEngine::RectTransform*, ::GlobalNamespace::FusionStats*, ::Fusion::Simulation::Statistics::StatSourceTypes, int, float, float)>(&GlobalNamespace::FusionStatsMeterBar::Create)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* fusionStats = &::il2cpp_utils::GetClassFromName("", "FusionStats")->byval_arg;
    static auto* statSourceType = &::il2cpp_utils::GetClassFromName("Fusion", "Simulation/Statistics/StatSourceTypes")->byval_arg;
    static auto* statId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* warnThreshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* alertThreshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsMeterBar*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, fusionStats, statSourceType, statId, warnThreshold, alertThreshold});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsMeterBar::GenerateMeter
// Il2CppName: GenerateMeter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsMeterBar::*)()>(&GlobalNamespace::FusionStatsMeterBar::GenerateMeter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsMeterBar*), "GenerateMeter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsMeterBar::get_BackColor
// Il2CppName: get_BackColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::FusionStatsMeterBar::*)()>(&GlobalNamespace::FusionStatsMeterBar::get_BackColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsMeterBar*), "get_BackColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsMeterBar::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsMeterBar::*)()>(&GlobalNamespace::FusionStatsMeterBar::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsMeterBar*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsMeterBar::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsMeterBar::*)()>(&GlobalNamespace::FusionStatsMeterBar::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsMeterBar*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsMeterBar::CalculateLayout
// Il2CppName: CalculateLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsMeterBar::*)()>(&GlobalNamespace::FusionStatsMeterBar::CalculateLayout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsMeterBar*), "CalculateLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsMeterBar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
