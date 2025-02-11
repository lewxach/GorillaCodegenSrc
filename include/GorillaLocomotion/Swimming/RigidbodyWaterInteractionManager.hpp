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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GorillaLocomotion::Swimming
namespace GorillaLocomotion::Swimming {
  // Forward declaring type: RigidbodyWaterInteraction
  class RigidbodyWaterInteraction;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Forward declaring type: RigidbodyWaterInteractionManager
  class RigidbodyWaterInteractionManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*, "GorillaLocomotion.Swimming", "RigidbodyWaterInteractionManager");
// Type namespace: GorillaLocomotion.Swimming
namespace GorillaLocomotion::Swimming {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Swimming.RigidbodyWaterInteractionManager
  // [TokenAttribute] Offset: FFFFFFFF
  class RigidbodyWaterInteractionManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Get static field: static public GorillaLocomotion.Swimming.RigidbodyWaterInteractionManager instance
    static ::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager* _get_instance();
    // Set static field: static public GorillaLocomotion.Swimming.RigidbodyWaterInteractionManager instance
    static void _set_instance(::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager* value);
    // Get static field: static public System.Boolean hasInstance
    static bool _get_hasInstance();
    // Set static field: static public System.Boolean hasInstance
    static void _set_hasInstance(bool value);
    // Get static field: static public System.Collections.Generic.List`1<GorillaLocomotion.Swimming.RigidbodyWaterInteraction> allrBWI
    static ::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction*>* _get_allrBWI();
    // Set static field: static public System.Collections.Generic.List`1<GorillaLocomotion.Swimming.RigidbodyWaterInteraction> allrBWI
    static void _set_allrBWI(::System::Collections::Generic::List_1<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction*>* value);
    // protected System.Void Awake()
    // Offset: 0x27DEB58
    void Awake();
    // static public System.Void CreateManager()
    // Offset: 0x27DED34
    static void CreateManager();
    // static private System.Void SetInstance(GorillaLocomotion.Swimming.RigidbodyWaterInteractionManager manager)
    // Offset: 0x27DEC50
    static void SetInstance(::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager* manager);
    // static public System.Void RegisterRBWI(GorillaLocomotion.Swimming.RigidbodyWaterInteraction rbWI)
    // Offset: 0x27DCA00
    static void RegisterRBWI(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction* rbWI);
    // static public System.Void UnregisterRBWI(GorillaLocomotion.Swimming.RigidbodyWaterInteraction rbWI)
    // Offset: 0x27DCC74
    static void UnregisterRBWI(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction* rbWI);
    // public System.Void FixedUpdate()
    // Offset: 0x27DEDF4
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x27DEEC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RigidbodyWaterInteractionManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RigidbodyWaterInteractionManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x27DEEC8
    static void _cctor();
  }; // GorillaLocomotion.Swimming.RigidbodyWaterInteractionManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::*)()>(&GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::CreateManager
// Il2CppName: CreateManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::CreateManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*), "CreateManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::SetInstance
// Il2CppName: SetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*)>(&GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::SetInstance)> {
  static const MethodInfo* get() {
    static auto* manager = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Swimming", "RigidbodyWaterInteractionManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*), "SetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{manager});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::RegisterRBWI
// Il2CppName: RegisterRBWI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction*)>(&GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::RegisterRBWI)> {
  static const MethodInfo* get() {
    static auto* rbWI = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Swimming", "RigidbodyWaterInteraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*), "RegisterRBWI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rbWI});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::UnregisterRBWI
// Il2CppName: UnregisterRBWI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GorillaLocomotion::Swimming::RigidbodyWaterInteraction*)>(&GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::UnregisterRBWI)> {
  static const MethodInfo* get() {
    static auto* rbWI = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Swimming", "RigidbodyWaterInteraction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*), "UnregisterRBWI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rbWI});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::*)()>(&GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Swimming::RigidbodyWaterInteractionManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
