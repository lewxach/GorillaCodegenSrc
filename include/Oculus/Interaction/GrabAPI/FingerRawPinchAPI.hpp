// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.IFingerAPI
#include "Oculus/Interaction/IFingerAPI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::GrabAPI
namespace Oculus::Interaction::GrabAPI {
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: HandFinger
  struct HandFinger;
  // Forward declaring type: IHand
  class IHand;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.GrabAPI
namespace Oculus::Interaction::GrabAPI {
  // Forward declaring type: FingerRawPinchAPI
  class FingerRawPinchAPI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::GrabAPI::FingerRawPinchAPI*, "Oculus.Interaction.GrabAPI", "FingerRawPinchAPI");
// Type namespace: Oculus.Interaction.GrabAPI
namespace Oculus::Interaction::GrabAPI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.GrabAPI.FingerRawPinchAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class FingerRawPinchAPI : public ::Il2CppObject/*, public ::Oculus::Interaction::IFingerAPI*/ {
    public:
    // Nested type: ::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::FingerPinchData
    class FingerPinchData;
    public:
    // private readonly Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData[] _fingersPinchData
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::FingerPinchData*> fingersPinchData;
    // Field size check
    static_assert(sizeof(::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::FingerPinchData*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IFingerAPI
    operator ::Oculus::Interaction::IFingerAPI() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IFingerAPI*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::FingerPinchData*>
    constexpr operator ::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::FingerPinchData*>() const noexcept {
      return fingersPinchData;
    }
    // Get instance field reference: private readonly Oculus.Interaction.GrabAPI.FingerRawPinchAPI/FingerPinchData[] _fingersPinchData
    [[deprecated("Use field access instead!")]] ::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::FingerPinchData*>& dyn__fingersPinchData();
    // public System.Boolean GetFingerIsGrabbing(Oculus.Interaction.Input.HandFinger finger)
    // Offset: 0x483A868
    bool GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger finger);
    // public UnityEngine.Vector3 GetWristOffsetLocal()
    // Offset: 0x483A8A0
    ::UnityEngine::Vector3 GetWristOffsetLocal();
    // public System.Boolean GetFingerIsGrabbingChanged(Oculus.Interaction.Input.HandFinger finger, System.Boolean targetPinchState)
    // Offset: 0x483A948
    bool GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger finger, bool targetPinchState);
    // public System.Single GetFingerGrabScore(Oculus.Interaction.Input.HandFinger finger)
    // Offset: 0x483A99C
    float GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger finger);
    // public System.Void Update(Oculus.Interaction.Input.IHand hand)
    // Offset: 0x483A9D4
    void Update(::Oculus::Interaction::Input::IHand* hand);
    // private System.Void ClearState()
    // Offset: 0x483AA34
    void ClearState();
    // public System.Void .ctor()
    // Offset: 0x483ABCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FingerRawPinchAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FingerRawPinchAPI*, creationType>()));
    }
  }; // Oculus.Interaction.GrabAPI.FingerRawPinchAPI
  #pragma pack(pop)
  static check_size<sizeof(FingerRawPinchAPI), 16 + sizeof(::ArrayW<::Oculus::Interaction::GrabAPI::FingerRawPinchAPI::FingerPinchData*>)> __Oculus_Interaction_GrabAPI_FingerRawPinchAPISizeCheck;
  static_assert(sizeof(FingerRawPinchAPI) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerIsGrabbing
// Il2CppName: GetFingerIsGrabbing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerIsGrabbing)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::FingerRawPinchAPI*), "GetFingerIsGrabbing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetWristOffsetLocal
// Il2CppName: GetWristOffsetLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)()>(&Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetWristOffsetLocal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::FingerRawPinchAPI*), "GetWristOffsetLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerIsGrabbingChanged
// Il2CppName: GetFingerIsGrabbingChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)(::Oculus::Interaction::Input::HandFinger, bool)>(&Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerIsGrabbingChanged)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    static auto* targetPinchState = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::FingerRawPinchAPI*), "GetFingerIsGrabbingChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger, targetPinchState});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerGrabScore
// Il2CppName: GetFingerGrabScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&Oculus::Interaction::GrabAPI::FingerRawPinchAPI::GetFingerGrabScore)> {
  static const MethodInfo* get() {
    static auto* finger = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::FingerRawPinchAPI*), "GetFingerGrabScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finger});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::FingerRawPinchAPI::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::GrabAPI::FingerRawPinchAPI::Update)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::FingerRawPinchAPI*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::FingerRawPinchAPI::ClearState
// Il2CppName: ClearState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabAPI::FingerRawPinchAPI::*)()>(&Oculus::Interaction::GrabAPI::FingerRawPinchAPI::ClearState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::FingerRawPinchAPI*), "ClearState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::FingerRawPinchAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
