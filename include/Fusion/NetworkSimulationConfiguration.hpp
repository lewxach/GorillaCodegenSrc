// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Sockets.NetConfigSimulationOscillator/WaveShape
#include "Fusion/Sockets/NetConfigSimulationOscillator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetConfigSimulation
  struct NetConfigSimulation;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkSimulationConfiguration
  class NetworkSimulationConfiguration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkSimulationConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkSimulationConfiguration*, "Fusion", "NetworkSimulationConfiguration");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkSimulationConfiguration
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkSimulationConfiguration : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean Enabled
    // Size: 0x1
    // Offset: 0x10
    bool Enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Enabled and: DelayShape
    char __padding0[0x3] = {};
    // public Fusion.Sockets.NetConfigSimulationOscillator/WaveShape DelayShape
    // Size: 0x4
    // Offset: 0x14
    ::Fusion::Sockets::NetConfigSimulationOscillator::WaveShape DelayShape;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConfigSimulationOscillator::WaveShape) == 0x4);
    // public System.Double DelayMin
    // Size: 0x8
    // Offset: 0x18
    double DelayMin;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double DelayMax
    // Size: 0x8
    // Offset: 0x20
    double DelayMax;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double DelayPeriod
    // Size: 0x8
    // Offset: 0x28
    double DelayPeriod;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double DelayThreshold
    // Size: 0x8
    // Offset: 0x30
    double DelayThreshold;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double AdditionalJitter
    // Size: 0x8
    // Offset: 0x38
    double AdditionalJitter;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public Fusion.Sockets.NetConfigSimulationOscillator/WaveShape LossChanceShape
    // Size: 0x4
    // Offset: 0x40
    ::Fusion::Sockets::NetConfigSimulationOscillator::WaveShape LossChanceShape;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetConfigSimulationOscillator::WaveShape) == 0x4);
    // Padding between fields: LossChanceShape and: LossChanceMin
    char __padding7[0x4] = {};
    // public System.Double LossChanceMin
    // Size: 0x8
    // Offset: 0x48
    double LossChanceMin;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double LossChanceMax
    // Size: 0x8
    // Offset: 0x50
    double LossChanceMax;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double LossChanceThreshold
    // Size: 0x8
    // Offset: 0x58
    double LossChanceThreshold;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double LossChancePeriod
    // Size: 0x8
    // Offset: 0x60
    double LossChancePeriod;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double AdditionalLoss
    // Size: 0x8
    // Offset: 0x68
    double AdditionalLoss;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Get instance field reference: public System.Boolean Enabled
    [[deprecated("Use field access instead!")]] bool& dyn_Enabled();
    // Get instance field reference: public Fusion.Sockets.NetConfigSimulationOscillator/WaveShape DelayShape
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConfigSimulationOscillator::WaveShape& dyn_DelayShape();
    // Get instance field reference: public System.Double DelayMin
    [[deprecated("Use field access instead!")]] double& dyn_DelayMin();
    // Get instance field reference: public System.Double DelayMax
    [[deprecated("Use field access instead!")]] double& dyn_DelayMax();
    // Get instance field reference: public System.Double DelayPeriod
    [[deprecated("Use field access instead!")]] double& dyn_DelayPeriod();
    // Get instance field reference: public System.Double DelayThreshold
    [[deprecated("Use field access instead!")]] double& dyn_DelayThreshold();
    // Get instance field reference: public System.Double AdditionalJitter
    [[deprecated("Use field access instead!")]] double& dyn_AdditionalJitter();
    // Get instance field reference: public Fusion.Sockets.NetConfigSimulationOscillator/WaveShape LossChanceShape
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetConfigSimulationOscillator::WaveShape& dyn_LossChanceShape();
    // Get instance field reference: public System.Double LossChanceMin
    [[deprecated("Use field access instead!")]] double& dyn_LossChanceMin();
    // Get instance field reference: public System.Double LossChanceMax
    [[deprecated("Use field access instead!")]] double& dyn_LossChanceMax();
    // Get instance field reference: public System.Double LossChanceThreshold
    [[deprecated("Use field access instead!")]] double& dyn_LossChanceThreshold();
    // Get instance field reference: public System.Double LossChancePeriod
    [[deprecated("Use field access instead!")]] double& dyn_LossChancePeriod();
    // Get instance field reference: public System.Double AdditionalLoss
    [[deprecated("Use field access instead!")]] double& dyn_AdditionalLoss();
    // public Fusion.NetworkSimulationConfiguration Clone()
    // Offset: 0x2B82628
    ::Fusion::NetworkSimulationConfiguration* Clone();
    // public Fusion.Sockets.NetConfigSimulation Create()
    // Offset: 0x2B826A8
    ::Fusion::Sockets::NetConfigSimulation Create();
    // public System.Void .ctor()
    // Offset: 0x2B828D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkSimulationConfiguration* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkSimulationConfiguration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkSimulationConfiguration*, creationType>()));
    }
  }; // Fusion.NetworkSimulationConfiguration
  #pragma pack(pop)
  static check_size<sizeof(NetworkSimulationConfiguration), 104 + sizeof(double)> __Fusion_NetworkSimulationConfigurationSizeCheck;
  static_assert(sizeof(NetworkSimulationConfiguration) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkSimulationConfiguration::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkSimulationConfiguration* (Fusion::NetworkSimulationConfiguration::*)()>(&Fusion::NetworkSimulationConfiguration::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSimulationConfiguration*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSimulationConfiguration::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetConfigSimulation (Fusion::NetworkSimulationConfiguration::*)()>(&Fusion::NetworkSimulationConfiguration::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSimulationConfiguration*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSimulationConfiguration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
