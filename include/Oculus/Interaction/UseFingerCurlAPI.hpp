// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.IFingerUseAPI
#include "Oculus/Interaction/IFingerUseAPI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IHand
  class IHand;
  // Forward declaring type: HandFinger
  struct HandFinger;
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IFingerAPI
  class IFingerAPI;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: UseFingerCurlAPI
  class UseFingerCurlAPI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::UseFingerCurlAPI);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::UseFingerCurlAPI*, "Oculus.Interaction", "UseFingerCurlAPI");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x3D
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.UseFingerCurlAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class UseFingerCurlAPI : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IFingerUseAPI*/ {
    public:
    public:
    // private UnityEngine.Object _hand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* hand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::Input::IHand* Hand;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IHand*) == 0x8);
    // private Oculus.Interaction.IFingerAPI _grabAPI
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::IFingerAPI* grabAPI;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IFingerAPI*) == 0x8);
    // private System.Int32 _lastDataVersion
    // Size: 0x4
    // Offset: 0x38
    int lastDataVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x3C
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IFingerUseAPI
    operator ::Oculus::Interaction::IFingerUseAPI() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IFingerUseAPI*>(this);
    }
    // Get instance field reference: private UnityEngine.Object _hand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hand();
    // Get instance field reference: private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHand*& dyn_$Hand$k__BackingField();
    // Get instance field reference: private Oculus.Interaction.IFingerAPI _grabAPI
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IFingerAPI*& dyn__grabAPI();
    // Get instance field reference: private System.Int32 _lastDataVersion
    [[deprecated("Use field access instead!")]] int& dyn__lastDataVersion();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // private Oculus.Interaction.Input.IHand get_Hand()
    // Offset: 0x47C1F28
    ::Oculus::Interaction::Input::IHand* get_Hand();
    // private System.Void set_Hand(Oculus.Interaction.Input.IHand value)
    // Offset: 0x47C1F30
    void set_Hand(::Oculus::Interaction::Input::IHand* value);
    // protected System.Void Awake()
    // Offset: 0x47C1F38
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47C1F90
    void Start();
    // public System.Single GetFingerUseStrength(Oculus.Interaction.Input.HandFinger finger)
    // Offset: 0x47C1FC8
    float GetFingerUseStrength(::Oculus::Interaction::Input::HandFinger finger);
    // public System.Void InjectAllUseFingerCurlAPI(Oculus.Interaction.Input.IHand hand)
    // Offset: 0x47C21DC
    void InjectAllUseFingerCurlAPI(::Oculus::Interaction::Input::IHand* hand);
    // public System.Void InjectHand(Oculus.Interaction.Input.IHand hand)
    // Offset: 0x47C21E0
    void InjectHand(::Oculus::Interaction::Input::IHand* hand);
    // public System.Void .ctor()
    // Offset: 0x47C22B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UseFingerCurlAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::UseFingerCurlAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UseFingerCurlAPI*, creationType>()));
    }
  }; // Oculus.Interaction.UseFingerCurlAPI
  #pragma pack(pop)
  static check_size<sizeof(UseFingerCurlAPI), 60 + sizeof(bool)> __Oculus_Interaction_UseFingerCurlAPISizeCheck;
  static_assert(sizeof(UseFingerCurlAPI) == 0x3D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::UseFingerCurlAPI::get_Hand
// Il2CppName: get_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IHand* (Oculus::Interaction::UseFingerCurlAPI::*)()>(&Oculus::Interaction::UseFingerCurlAPI::get_Hand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UseFingerCurlAPI*), "get_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UseFingerCurlAPI::set_Hand
// Il2CppName: set_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UseFingerCurlAPI::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::UseFingerCurlAPI::set_Hand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UseFingerCurlAPI*), "set_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UseFingerCurlAPI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UseFingerCurlAPI::*)()>(&Oculus::Interaction::UseFingerCurlAPI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UseFingerCurlAPI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UseFingerCurlAPI::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UseFingerCurlAPI::*)()>(&Oculus::Interaction::UseFingerCurlAPI::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UseFingerCurlAPI*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UseFingerCurlAPI::GetFingerUseStrength
// Il2CppName: GetFingerUseStrength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::UseFingerCurlAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&Oculus::Interaction::UseFingerCurlAPI::GetFingerUseStrength)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UseFingerCurlAPI*), "GetFingerUseStrength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UseFingerCurlAPI::InjectAllUseFingerCurlAPI
// Il2CppName: InjectAllUseFingerCurlAPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UseFingerCurlAPI::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::UseFingerCurlAPI::InjectAllUseFingerCurlAPI)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UseFingerCurlAPI*), "InjectAllUseFingerCurlAPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UseFingerCurlAPI::InjectHand
// Il2CppName: InjectHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UseFingerCurlAPI::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::UseFingerCurlAPI::InjectHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UseFingerCurlAPI*), "InjectHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UseFingerCurlAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
