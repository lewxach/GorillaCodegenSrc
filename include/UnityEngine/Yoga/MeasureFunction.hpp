// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: YogaSize
  struct YogaSize;
  // Forward declaring type: YogaNode
  class YogaNode;
  // Forward declaring type: YogaMeasureMode
  struct YogaMeasureMode;
}
// Completed forward declares
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: MeasureFunction
  class MeasureFunction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Yoga::MeasureFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::MeasureFunction*, "UnityEngine.Yoga", "MeasureFunction");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.MeasureFunction
  // [TokenAttribute] Offset: FFFFFFFF
  class MeasureFunction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x558E464
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeasureFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Yoga::MeasureFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeasureFunction*, creationType>(object, method)));
    }
    // public UnityEngine.Yoga.YogaSize Invoke(UnityEngine.Yoga.YogaNode node, System.Single width, UnityEngine.Yoga.YogaMeasureMode widthMode, System.Single height, UnityEngine.Yoga.YogaMeasureMode heightMode)
    // Offset: 0x558E570
    ::UnityEngine::Yoga::YogaSize Invoke(::UnityEngine::Yoga::YogaNode* node, float width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float height, ::UnityEngine::Yoga::YogaMeasureMode heightMode);
  }; // UnityEngine.Yoga.MeasureFunction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Yoga::MeasureFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Yoga::MeasureFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Yoga::YogaSize (UnityEngine::Yoga::MeasureFunction::*)(::UnityEngine::Yoga::YogaNode*, float, ::UnityEngine::Yoga::YogaMeasureMode, float, ::UnityEngine::Yoga::YogaMeasureMode)>(&UnityEngine::Yoga::MeasureFunction::Invoke)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaNode")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* widthMode = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaMeasureMode")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* heightMode = &::il2cpp_utils::GetClassFromName("UnityEngine.Yoga", "YogaMeasureMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::MeasureFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, width, widthMode, height, heightMode});
  }
};