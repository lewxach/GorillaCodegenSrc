// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: EngineProfiler
  class EngineProfiler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::EngineProfiler);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::EngineProfiler*, "Fusion", "EngineProfiler");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.EngineProfiler
  // [TokenAttribute] Offset: FFFFFFFF
  class EngineProfiler : public ::Il2CppObject {
    public:
    // Get static field: static public System.Action`1<System.Single> InterpolationOffsetCallback
    static ::System::Action_1<float>* _get_InterpolationOffsetCallback();
    // Set static field: static public System.Action`1<System.Single> InterpolationOffsetCallback
    static void _set_InterpolationOffsetCallback(::System::Action_1<float>* value);
    // Get static field: static public System.Action`1<System.Single> InterpolationTimeScaleCallback
    static ::System::Action_1<float>* _get_InterpolationTimeScaleCallback();
    // Set static field: static public System.Action`1<System.Single> InterpolationTimeScaleCallback
    static void _set_InterpolationTimeScaleCallback(::System::Action_1<float>* value);
    // Get static field: static public System.Action`1<System.Single> InterpolationMultiplierCallback
    static ::System::Action_1<float>* _get_InterpolationMultiplierCallback();
    // Set static field: static public System.Action`1<System.Single> InterpolationMultiplierCallback
    static void _set_InterpolationMultiplierCallback(::System::Action_1<float>* value);
    // Get static field: static public System.Action`1<System.Single> InterpolationUncertaintyCallback
    static ::System::Action_1<float>* _get_InterpolationUncertaintyCallback();
    // Set static field: static public System.Action`1<System.Single> InterpolationUncertaintyCallback
    static void _set_InterpolationUncertaintyCallback(::System::Action_1<float>* value);
    // Get static field: static public System.Action`1<System.Int32> WorldSnapshotSizeCallback
    static ::System::Action_1<int>* _get_WorldSnapshotSizeCallback();
    // Set static field: static public System.Action`1<System.Int32> WorldSnapshotSizeCallback
    static void _set_WorldSnapshotSizeCallback(::System::Action_1<int>* value);
    // Get static field: static public System.Action`1<System.Int32> InputSizeCallback
    static ::System::Action_1<int>* _get_InputSizeCallback();
    // Set static field: static public System.Action`1<System.Int32> InputSizeCallback
    static void _set_InputSizeCallback(::System::Action_1<int>* value);
    // Get static field: static public System.Action`1<System.Int32> InputQueueCallback
    static ::System::Action_1<int>* _get_InputQueueCallback();
    // Set static field: static public System.Action`1<System.Int32> InputQueueCallback
    static void _set_InputQueueCallback(::System::Action_1<int>* value);
    // Get static field: static public System.Action`1<System.Int32> RpcInCallback
    static ::System::Action_1<int>* _get_RpcInCallback();
    // Set static field: static public System.Action`1<System.Int32> RpcInCallback
    static void _set_RpcInCallback(::System::Action_1<int>* value);
    // Get static field: static public System.Action`1<System.Int32> RpcOutCallback
    static ::System::Action_1<int>* _get_RpcOutCallback();
    // Set static field: static public System.Action`1<System.Int32> RpcOutCallback
    static void _set_RpcOutCallback(::System::Action_1<int>* value);
    // Get static field: static public System.Action`1<System.Single> RoundTripTimeCallback
    static ::System::Action_1<float>* _get_RoundTripTimeCallback();
    // Set static field: static public System.Action`1<System.Single> RoundTripTimeCallback
    static void _set_RoundTripTimeCallback(::System::Action_1<float>* value);
    // Get static field: static public System.Action`1<System.Single> SimualtionTimeScaleCallback
    static ::System::Action_1<float>* _get_SimualtionTimeScaleCallback();
    // Set static field: static public System.Action`1<System.Single> SimualtionTimeScaleCallback
    static void _set_SimualtionTimeScaleCallback(::System::Action_1<float>* value);
    // Get static field: static public System.Action`1<System.Single> InputOffsetCallback
    static ::System::Action_1<float>* _get_InputOffsetCallback();
    // Set static field: static public System.Action`1<System.Single> InputOffsetCallback
    static void _set_InputOffsetCallback(::System::Action_1<float>* value);
    // Get static field: static public System.Action`1<System.Single> InputOffsetDeviationCallback
    static ::System::Action_1<float>* _get_InputOffsetDeviationCallback();
    // Set static field: static public System.Action`1<System.Single> InputOffsetDeviationCallback
    static void _set_InputOffsetDeviationCallback(::System::Action_1<float>* value);
    // Get static field: static public System.Action`1<System.Single> InputRecvDeltaCallback
    static ::System::Action_1<float>* _get_InputRecvDeltaCallback();
    // Set static field: static public System.Action`1<System.Single> InputRecvDeltaCallback
    static void _set_InputRecvDeltaCallback(::System::Action_1<float>* value);
    // Get static field: static public System.Action`1<System.Single> InputRecvDeltaDeviationCallback
    static ::System::Action_1<float>* _get_InputRecvDeltaDeviationCallback();
    // Set static field: static public System.Action`1<System.Single> InputRecvDeltaDeviationCallback
    static void _set_InputRecvDeltaDeviationCallback(::System::Action_1<float>* value);
    // static public System.Void Begin(System.String sample)
    // Offset: 0x2AD6E7C
    static void Begin(::StringW sample);
    // static public System.Void End()
    // Offset: 0x2AD6F08
    static void End();
    // static public System.Void InterpolationOffset(System.Single value)
    // Offset: 0x2AD6F10
    static void InterpolationOffset(float value);
    // static public System.Void InterpolationMultiplier(System.Single value)
    // Offset: 0x2AD6F88
    static void InterpolationMultiplier(float value);
    // static public System.Void InterpolationTimeScale(System.Single value)
    // Offset: 0x2AD7000
    static void InterpolationTimeScale(float value);
    // static public System.Void InterpolationUncertainty(System.Single value)
    // Offset: 0x2AD7078
    static void InterpolationUncertainty(float value);
    // static public System.Void WorldSnapshotSize(System.Int32 value)
    // Offset: 0x2AD70F0
    static void WorldSnapshotSize(int value);
    // static public System.Void RoundTripTime(System.Single value)
    // Offset: 0x2AD715C
    static void RoundTripTime(float value);
    // static public System.Void InputSize(System.Int32 value)
    // Offset: 0x2AD71D4
    static void InputSize(int value);
    // static public System.Void InputQueue(System.Int32 value)
    // Offset: 0x2AD7240
    static void InputQueue(int value);
    // static public System.Void RpcIn(System.Int32 value)
    // Offset: 0x2AD72AC
    static void RpcIn(int value);
    // static public System.Void RpcOut(System.Int32 value)
    // Offset: 0x2AD7318
    static void RpcOut(int value);
    // static public System.Void SimulationTimeScale(System.Single value)
    // Offset: 0x2AD7384
    static void SimulationTimeScale(float value);
    // static public System.Void InputOffset(System.Single value)
    // Offset: 0x2AD73FC
    static void InputOffset(float value);
    // static public System.Void InputOffsetDeviation(System.Single value)
    // Offset: 0x2AD7474
    static void InputOffsetDeviation(float value);
    // static public System.Void InputRecvDelta(System.Single value)
    // Offset: 0x2AD74EC
    static void InputRecvDelta(float value);
    // static public System.Void InputRecvDeltaDeviation(System.Single value)
    // Offset: 0x2AD7564
    static void InputRecvDeltaDeviation(float value);
  }; // Fusion.EngineProfiler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::EngineProfiler::Begin
// Il2CppName: Begin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Fusion::EngineProfiler::Begin)> {
  static const MethodInfo* get() {
    static auto* sample = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "Begin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sample});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::End
// Il2CppName: End
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::EngineProfiler::End)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "End", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::InterpolationOffset
// Il2CppName: InterpolationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&Fusion::EngineProfiler::InterpolationOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "InterpolationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::InterpolationMultiplier
// Il2CppName: InterpolationMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&Fusion::EngineProfiler::InterpolationMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "InterpolationMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::InterpolationTimeScale
// Il2CppName: InterpolationTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&Fusion::EngineProfiler::InterpolationTimeScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "InterpolationTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::InterpolationUncertainty
// Il2CppName: InterpolationUncertainty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&Fusion::EngineProfiler::InterpolationUncertainty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "InterpolationUncertainty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::WorldSnapshotSize
// Il2CppName: WorldSnapshotSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&Fusion::EngineProfiler::WorldSnapshotSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "WorldSnapshotSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::RoundTripTime
// Il2CppName: RoundTripTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&Fusion::EngineProfiler::RoundTripTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "RoundTripTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::InputSize
// Il2CppName: InputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&Fusion::EngineProfiler::InputSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "InputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::InputQueue
// Il2CppName: InputQueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&Fusion::EngineProfiler::InputQueue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "InputQueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::RpcIn
// Il2CppName: RpcIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&Fusion::EngineProfiler::RpcIn)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "RpcIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::RpcOut
// Il2CppName: RpcOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&Fusion::EngineProfiler::RpcOut)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "RpcOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::SimulationTimeScale
// Il2CppName: SimulationTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&Fusion::EngineProfiler::SimulationTimeScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "SimulationTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::InputOffset
// Il2CppName: InputOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&Fusion::EngineProfiler::InputOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "InputOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::InputOffsetDeviation
// Il2CppName: InputOffsetDeviation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&Fusion::EngineProfiler::InputOffsetDeviation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "InputOffsetDeviation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::InputRecvDelta
// Il2CppName: InputRecvDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&Fusion::EngineProfiler::InputRecvDelta)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "InputRecvDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::EngineProfiler::InputRecvDeltaDeviation
// Il2CppName: InputRecvDeltaDeviation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&Fusion::EngineProfiler::InputRecvDeltaDeviation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::EngineProfiler*), "InputRecvDeltaDeviation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
