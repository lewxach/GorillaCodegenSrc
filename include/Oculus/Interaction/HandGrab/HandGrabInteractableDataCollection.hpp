// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Oculus.Interaction.HandGrab.HandGrabUtils/HandGrabInteractableData
#include "Oculus/Interaction/HandGrab/HandGrabUtils_HandGrabInteractableData.hpp"
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
// Completed forward declares
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Forward declaring type: HandGrabInteractableDataCollection
  class HandGrabInteractableDataCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*, "Oculus.Interaction.HandGrab", "HandGrabInteractableDataCollection");
// Type namespace: Oculus.Interaction.HandGrab
namespace Oculus::Interaction::HandGrab {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandGrab.HandGrabInteractableDataCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class HandGrabInteractableDataCollection : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabUtils/HandGrabInteractableData> _interactablesData
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::HandGrabUtils::HandGrabInteractableData>* interactablesData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::HandGrabUtils::HandGrabInteractableData>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabUtils/HandGrabInteractableData> _interactablesData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::HandGrabUtils::HandGrabInteractableData>*& dyn__interactablesData();
    // public System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabUtils/HandGrabInteractableData> get_InteractablesData()
    // Offset: 0x4824904
    ::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::HandGrabUtils::HandGrabInteractableData>* get_InteractablesData();
    // public System.Void StoreInteractables(System.Collections.Generic.List`1<Oculus.Interaction.HandGrab.HandGrabUtils/HandGrabInteractableData> interactablesData)
    // Offset: 0x482490C
    void StoreInteractables(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::HandGrabUtils::HandGrabInteractableData>* interactablesData);
    // public System.Void .ctor()
    // Offset: 0x4824914
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandGrabInteractableDataCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandGrabInteractableDataCollection*, creationType>()));
    }
  }; // Oculus.Interaction.HandGrab.HandGrabInteractableDataCollection
  #pragma pack(pop)
  static check_size<sizeof(HandGrabInteractableDataCollection), 24 + sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::HandGrabUtils::HandGrabInteractableData>*)> __Oculus_Interaction_HandGrab_HandGrabInteractableDataCollectionSizeCheck;
  static_assert(sizeof(HandGrabInteractableDataCollection) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::get_InteractablesData
// Il2CppName: get_InteractablesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::HandGrabUtils::HandGrabInteractableData>* (Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::*)()>(&Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::get_InteractablesData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*), "get_InteractablesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::StoreInteractables
// Il2CppName: StoreInteractables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::HandGrab::HandGrabUtils::HandGrabInteractableData>*)>(&Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::StoreInteractables)> {
  static const MethodInfo* get() {
    static auto* interactablesData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction.HandGrab", "HandGrabUtils/HandGrabInteractableData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection*), "StoreInteractables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactablesData});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::HandGrabInteractableDataCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
