// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.HID.HIDParser
#include "UnityEngine/InputSystem/HID/HIDParser.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: UnityEngine.InputSystem.HID.HID
#include "UnityEngine/InputSystem/HID/HID.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateGlobal");
// Type namespace: UnityEngine.InputSystem.HID
namespace UnityEngine::InputSystem::HID {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.HID.HIDParser/HIDItemStateGlobal
  // [TokenAttribute] Offset: FFFFFFFF
  struct HIDParser::HIDItemStateGlobal/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Nullable`1<System.Int32> usagePage
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::System::Nullable_1<int> usagePage;
    // public System.Nullable`1<System.Int32> logicalMinimum
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Nullable_1<int> logicalMinimum;
    // public System.Nullable`1<System.Int32> logicalMaximum
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::System::Nullable_1<int> logicalMaximum;
    // public System.Nullable`1<System.Int32> physicalMinimum
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<int> physicalMinimum;
    // public System.Nullable`1<System.Int32> physicalMaximum
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Nullable_1<int> physicalMaximum;
    // public System.Nullable`1<System.Int32> unitExponent
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<int> unitExponent;
    // public System.Nullable`1<System.Int32> unit
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::System::Nullable_1<int> unit;
    // public System.Nullable`1<System.Int32> reportSize
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<int> reportSize;
    // public System.Nullable`1<System.Int32> reportCount
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::System::Nullable_1<int> reportCount;
    // public System.Nullable`1<System.Int32> reportId
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    ::System::Nullable_1<int> reportId;
    public:
    // Creating value type constructor for type: HIDItemStateGlobal
    constexpr HIDItemStateGlobal(::System::Nullable_1<int> usagePage_ = {}, ::System::Nullable_1<int> logicalMinimum_ = {}, ::System::Nullable_1<int> logicalMaximum_ = {}, ::System::Nullable_1<int> physicalMinimum_ = {}, ::System::Nullable_1<int> physicalMaximum_ = {}, ::System::Nullable_1<int> unitExponent_ = {}, ::System::Nullable_1<int> unit_ = {}, ::System::Nullable_1<int> reportSize_ = {}, ::System::Nullable_1<int> reportCount_ = {}, ::System::Nullable_1<int> reportId_ = {}) noexcept : usagePage{usagePage_}, logicalMinimum{logicalMinimum_}, logicalMaximum{logicalMaximum_}, physicalMinimum{physicalMinimum_}, physicalMaximum{physicalMaximum_}, unitExponent{unitExponent_}, unit{unit_}, reportSize{reportSize_}, reportCount{reportCount_}, reportId{reportId_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Nullable`1<System.Int32> usagePage
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_usagePage();
    // Get instance field reference: public System.Nullable`1<System.Int32> logicalMinimum
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_logicalMinimum();
    // Get instance field reference: public System.Nullable`1<System.Int32> logicalMaximum
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_logicalMaximum();
    // Get instance field reference: public System.Nullable`1<System.Int32> physicalMinimum
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_physicalMinimum();
    // Get instance field reference: public System.Nullable`1<System.Int32> physicalMaximum
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_physicalMaximum();
    // Get instance field reference: public System.Nullable`1<System.Int32> unitExponent
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_unitExponent();
    // Get instance field reference: public System.Nullable`1<System.Int32> unit
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_unit();
    // Get instance field reference: public System.Nullable`1<System.Int32> reportSize
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_reportSize();
    // Get instance field reference: public System.Nullable`1<System.Int32> reportCount
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_reportCount();
    // Get instance field reference: public System.Nullable`1<System.Int32> reportId
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_reportId();
    // public UnityEngine.InputSystem.HID.HID/UsagePage GetUsagePage(System.Int32 index, ref UnityEngine.InputSystem.HID.HIDParser/HIDItemStateLocal localItemState)
    // Offset: 0x5142178
    ::UnityEngine::InputSystem::HID::HID::UsagePage GetUsagePage(int index, ByRef<::UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal> localItemState);
    // public System.Int32 GetPhysicalMin()
    // Offset: 0x5142204
    int GetPhysicalMin();
    // public System.Int32 GetPhysicalMax()
    // Offset: 0x51422C8
    int GetPhysicalMax();
  }; // UnityEngine.InputSystem.HID.HIDParser/HIDItemStateGlobal
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal::GetUsagePage
// Il2CppName: GetUsagePage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::HID::HID::UsagePage (UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal::*)(int, ByRef<::UnityEngine::InputSystem::HID::HIDParser::HIDItemStateLocal>)>(&UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal::GetUsagePage)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* localItemState = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateLocal")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal), "GetUsagePage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, localItemState});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal::GetPhysicalMin
// Il2CppName: GetPhysicalMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal::*)()>(&UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal::GetPhysicalMin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal), "GetPhysicalMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal::GetPhysicalMax
// Il2CppName: GetPhysicalMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal::*)()>(&UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal::GetPhysicalMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HID::HIDParser::HIDItemStateGlobal), "GetPhysicalMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};