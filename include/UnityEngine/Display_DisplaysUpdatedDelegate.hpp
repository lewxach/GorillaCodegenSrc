// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Display
#include "UnityEngine/Display.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Display::DisplaysUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Display::DisplaysUpdatedDelegate*, "UnityEngine", "Display/DisplaysUpdatedDelegate");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Display/DisplaysUpdatedDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class Display::DisplaysUpdatedDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x5489790
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Display::DisplaysUpdatedDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Display::DisplaysUpdatedDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Display::DisplaysUpdatedDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x548982C
    void Invoke();
  }; // UnityEngine.Display/DisplaysUpdatedDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Display::DisplaysUpdatedDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Display::DisplaysUpdatedDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Display::DisplaysUpdatedDelegate::*)()>(&UnityEngine::Display::DisplaysUpdatedDelegate::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Display::DisplaysUpdatedDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
