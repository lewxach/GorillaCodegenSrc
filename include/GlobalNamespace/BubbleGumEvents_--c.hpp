// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BubbleGumEvents
#include "GlobalNamespace/BubbleGumEvents.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GumBubble
  class GumBubble;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BubbleGumEvents::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BubbleGumEvents::$$c*, "", "BubbleGumEvents/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BubbleGumEvents/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BubbleGumEvents::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BubbleGumEvents/<>c <>9
    static ::GlobalNamespace::BubbleGumEvents::$$c* _get_$$9();
    // Set static field: static public readonly BubbleGumEvents/<>c <>9
    static void _set_$$9(::GlobalNamespace::BubbleGumEvents::$$c* value);
    // Get static field: static public System.Func`2<GumBubble,System.Boolean> <>9__7_0
    static ::System::Func_2<::GlobalNamespace::GumBubble*, bool>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<GumBubble,System.Boolean> <>9__7_0
    static void _set_$$9__7_0(::System::Func_2<::GlobalNamespace::GumBubble*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x26D5588
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x26D55F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BubbleGumEvents::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BubbleGumEvents::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BubbleGumEvents::$$c*, creationType>()));
    }
    // System.Boolean <OnBite>b__7_0(GumBubble g)
    // Offset: 0x26D55F8
    bool $OnBite$b__7_0(::GlobalNamespace::GumBubble* g);
  }; // BubbleGumEvents/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BubbleGumEvents::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BubbleGumEvents::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BubbleGumEvents::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BubbleGumEvents::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BubbleGumEvents::$$c::$OnBite$b__7_0
// Il2CppName: <OnBite>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BubbleGumEvents::$$c::*)(::GlobalNamespace::GumBubble*)>(&GlobalNamespace::BubbleGumEvents::$$c::$OnBite$b__7_0)> {
  static const MethodInfo* get() {
    static auto* g = &::il2cpp_utils::GetClassFromName("", "GumBubble")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BubbleGumEvents::$$c*), "<OnBite>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{g});
  }
};
