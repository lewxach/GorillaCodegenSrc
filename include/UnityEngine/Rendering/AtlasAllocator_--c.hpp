// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.AtlasAllocator
#include "UnityEngine/Rendering/AtlasAllocator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::AtlasAllocator::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AtlasAllocator::$$c*, "UnityEngine.Rendering", "AtlasAllocator/<>c");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.AtlasAllocator/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AtlasAllocator::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Rendering.AtlasAllocator/<>c <>9
    static ::UnityEngine::Rendering::AtlasAllocator::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Rendering.AtlasAllocator/<>c <>9
    static void _set_$$9(::UnityEngine::Rendering::AtlasAllocator::$$c* value);
    // Get static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Rendering.AtlasAllocator/AtlasNode> <>9__6_0
    static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator::AtlasNode*>* _get_$$9__6_0();
    // Set static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Rendering.AtlasAllocator/AtlasNode> <>9__6_0
    static void _set_$$9__6_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator::AtlasNode*>* value);
    // Get static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Rendering.AtlasAllocator/AtlasNode> <>9__6_1
    static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator::AtlasNode*>* _get_$$9__6_1();
    // Set static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Rendering.AtlasAllocator/AtlasNode> <>9__6_1
    static void _set_$$9__6_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator::AtlasNode*>* value);
    // static private System.Void .cctor()
    // Offset: 0x5256AC0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x5256B28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AtlasAllocator::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::AtlasAllocator::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AtlasAllocator::$$c*, creationType>()));
    }
    // System.Void <.ctor>b__6_0(UnityEngine.Rendering.AtlasAllocator/AtlasNode _)
    // Offset: 0x5256B30
    void $_ctor$b__6_0(::UnityEngine::Rendering::AtlasAllocator::AtlasNode* _);
    // System.Void <.ctor>b__6_1(UnityEngine.Rendering.AtlasAllocator/AtlasNode _)
    // Offset: 0x5256B34
    void $_ctor$b__6_1(::UnityEngine::Rendering::AtlasAllocator::AtlasNode* _);
  }; // UnityEngine.Rendering.AtlasAllocator/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::AtlasAllocator::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::AtlasAllocator::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::AtlasAllocator::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::AtlasAllocator::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::AtlasAllocator::$$c::$_ctor$b__6_0
// Il2CppName: <.ctor>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::AtlasAllocator::$$c::*)(::UnityEngine::Rendering::AtlasAllocator::AtlasNode*)>(&UnityEngine::Rendering::AtlasAllocator::$$c::$_ctor$b__6_0)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "AtlasAllocator/AtlasNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::AtlasAllocator::$$c*), "<.ctor>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::AtlasAllocator::$$c::$_ctor$b__6_1
// Il2CppName: <.ctor>b__6_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::AtlasAllocator::$$c::*)(::UnityEngine::Rendering::AtlasAllocator::AtlasNode*)>(&UnityEngine::Rendering::AtlasAllocator::$$c::$_ctor$b__6_1)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "AtlasAllocator/AtlasNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::AtlasAllocator::$$c*), "<.ctor>b__6_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
