// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.SimulationBehaviourUpdater
#include "Fusion/SimulationBehaviourUpdater.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::SimulationBehaviourUpdater::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SimulationBehaviourUpdater::$$c*, "Fusion", "SimulationBehaviourUpdater/<>c");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.SimulationBehaviourUpdater/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SimulationBehaviourUpdater::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Fusion.SimulationBehaviourUpdater/<>c <>9
    static ::Fusion::SimulationBehaviourUpdater::$$c* _get_$$9();
    // Set static field: static public readonly Fusion.SimulationBehaviourUpdater/<>c <>9
    static void _set_$$9(::Fusion::SimulationBehaviourUpdater::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__9_0
    static ::System::Func_2<::System::Type*, bool>* _get_$$9__9_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__9_0
    static void _set_$$9__9_0(::System::Func_2<::System::Type*, bool>* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Type,Fusion.SimulationBehaviourUpdater/BehaviourList>,System.String> <>9__22_0
    static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::Fusion::SimulationBehaviourUpdater::BehaviourList*>, ::StringW>* _get_$$9__22_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Type,Fusion.SimulationBehaviourUpdater/BehaviourList>,System.String> <>9__22_0
    static void _set_$$9__22_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::Fusion::SimulationBehaviourUpdater::BehaviourList*>, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x2B1B428
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2B1B490
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimulationBehaviourUpdater::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SimulationBehaviourUpdater::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimulationBehaviourUpdater::$$c*, creationType>()));
    }
    // System.Boolean <BuildTypeOrder>b__9_0(System.Type x)
    // Offset: 0x2B1B498
    bool $BuildTypeOrder$b__9_0(::System::Type* x);
    // System.String <FindList>b__22_0(System.Collections.Generic.KeyValuePair`2<System.Type,Fusion.SimulationBehaviourUpdater/BehaviourList> x)
    // Offset: 0x2B1B4B0
    ::StringW $FindList$b__22_0(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::Fusion::SimulationBehaviourUpdater::BehaviourList*> x);
  }; // Fusion.SimulationBehaviourUpdater/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::SimulationBehaviourUpdater::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::SimulationBehaviourUpdater::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationBehaviourUpdater::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationBehaviourUpdater::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::SimulationBehaviourUpdater::$$c::$BuildTypeOrder$b__9_0
// Il2CppName: <BuildTypeOrder>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SimulationBehaviourUpdater::$$c::*)(::System::Type*)>(&Fusion::SimulationBehaviourUpdater::$$c::$BuildTypeOrder$b__9_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationBehaviourUpdater::$$c*), "<BuildTypeOrder>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationBehaviourUpdater::$$c::$FindList$b__22_0
// Il2CppName: <FindList>b__22_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::SimulationBehaviourUpdater::$$c::*)(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::Fusion::SimulationBehaviourUpdater::BehaviourList*>)>(&Fusion::SimulationBehaviourUpdater::$$c::$FindList$b__22_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("Fusion", "SimulationBehaviourUpdater/BehaviourList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationBehaviourUpdater::$$c*), "<FindList>b__22_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
