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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SizeManager
  class SizeManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SizeManagerManager
  class SizeManagerManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SizeManagerManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SizeManagerManager*, "", "SizeManagerManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SizeManagerManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SizeManagerManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Get static field: static public SizeManagerManager instance
    static ::GlobalNamespace::SizeManagerManager* _get_instance();
    // Set static field: static public SizeManagerManager instance
    static void _set_instance(::GlobalNamespace::SizeManagerManager* value);
    // Get static field: static public System.Boolean hasInstance
    static bool _get_hasInstance();
    // Set static field: static public System.Boolean hasInstance
    static void _set_hasInstance(bool value);
    // Get static field: static public System.Collections.Generic.List`1<SizeManager> allSM
    static ::System::Collections::Generic::List_1<::GlobalNamespace::SizeManager*>* _get_allSM();
    // Set static field: static public System.Collections.Generic.List`1<SizeManager> allSM
    static void _set_allSM(::System::Collections::Generic::List_1<::GlobalNamespace::SizeManager*>* value);
    // protected System.Void Awake()
    // Offset: 0x272CD6C
    void Awake();
    // static public System.Void CreateManager()
    // Offset: 0x272CF48
    static void CreateManager();
    // static private System.Void SetInstance(SizeManagerManager manager)
    // Offset: 0x272CE64
    static void SetInstance(::GlobalNamespace::SizeManagerManager* manager);
    // static public System.Void RegisterSM(SizeManager sM)
    // Offset: 0x272C058
    static void RegisterSM(::GlobalNamespace::SizeManager* sM);
    // static public System.Void UnregisterSM(SizeManager sM)
    // Offset: 0x272BF04
    static void UnregisterSM(::GlobalNamespace::SizeManager* sM);
    // public System.Void FixedUpdate()
    // Offset: 0x272D008
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x272D0D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SizeManagerManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SizeManagerManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SizeManagerManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x272D0DC
    static void _cctor();
  }; // SizeManagerManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SizeManagerManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeManagerManager::*)()>(&GlobalNamespace::SizeManagerManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeManagerManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeManagerManager::CreateManager
// Il2CppName: CreateManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SizeManagerManager::CreateManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeManagerManager*), "CreateManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeManagerManager::SetInstance
// Il2CppName: SetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::SizeManagerManager*)>(&GlobalNamespace::SizeManagerManager::SetInstance)> {
  static const MethodInfo* get() {
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "SizeManagerManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeManagerManager*), "SetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{manager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeManagerManager::RegisterSM
// Il2CppName: RegisterSM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::SizeManager*)>(&GlobalNamespace::SizeManagerManager::RegisterSM)> {
  static const MethodInfo* get() {
    static auto* sM = &::il2cpp_utils::GetClassFromName("", "SizeManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeManagerManager*), "RegisterSM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sM});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeManagerManager::UnregisterSM
// Il2CppName: UnregisterSM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::SizeManager*)>(&GlobalNamespace::SizeManagerManager::UnregisterSM)> {
  static const MethodInfo* get() {
    static auto* sM = &::il2cpp_utils::GetClassFromName("", "SizeManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeManagerManager*), "UnregisterSM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sM});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeManagerManager::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SizeManagerManager::*)()>(&GlobalNamespace::SizeManagerManager::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeManagerManager*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SizeManagerManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SizeManagerManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SizeManagerManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SizeManagerManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};