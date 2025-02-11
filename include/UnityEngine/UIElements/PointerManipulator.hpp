// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.MouseManipulator
#include "UnityEngine/UIElements/MouseManipulator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IPointerEvent
  class IPointerEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: PointerManipulator
  class PointerManipulator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::PointerManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerManipulator*, "UnityEngine.UIElements", "PointerManipulator");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.PointerManipulator
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerManipulator : public ::UnityEngine::UIElements::MouseManipulator {
    public:
    public:
    // private System.Int32 m_CurrentPointerId
    // Size: 0x4
    // Offset: 0x2C
    int m_CurrentPointerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 m_CurrentPointerId
    [[deprecated("Use field access instead!")]] int& dyn_m_CurrentPointerId();
    // protected System.Boolean CanStartManipulation(UnityEngine.UIElements.IPointerEvent e)
    // Offset: 0x566A5D0
    bool CanStartManipulation(::UnityEngine::UIElements::IPointerEvent* e);
    // protected System.Boolean CanStopManipulation(UnityEngine.UIElements.IPointerEvent e)
    // Offset: 0x566A7B4
    bool CanStopManipulation(::UnityEngine::UIElements::IPointerEvent* e);
    // protected System.Void .ctor()
    // Offset: 0x566A868
    // Implemented from: UnityEngine.UIElements.MouseManipulator
    // Base method: System.Void MouseManipulator::.ctor()
    // Base method: System.Void Manipulator::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerManipulator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerManipulator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerManipulator*, creationType>()));
    }
  }; // UnityEngine.UIElements.PointerManipulator
  #pragma pack(pop)
  static check_size<sizeof(PointerManipulator), 44 + sizeof(int)> __UnityEngine_UIElements_PointerManipulatorSizeCheck;
  static_assert(sizeof(PointerManipulator) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerManipulator::CanStartManipulation
// Il2CppName: CanStartManipulation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::PointerManipulator::*)(::UnityEngine::UIElements::IPointerEvent*)>(&UnityEngine::UIElements::PointerManipulator::CanStartManipulation)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPointerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerManipulator*), "CanStartManipulation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerManipulator::CanStopManipulation
// Il2CppName: CanStopManipulation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::PointerManipulator::*)(::UnityEngine::UIElements::IPointerEvent*)>(&UnityEngine::UIElements::PointerManipulator::CanStopManipulation)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPointerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerManipulator*), "CanStopManipulation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerManipulator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
