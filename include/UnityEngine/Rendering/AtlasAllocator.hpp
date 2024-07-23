// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ObjectPool`1<T>
  template<typename T>
  class ObjectPool_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: AtlasAllocator
  class AtlasAllocator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::AtlasAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AtlasAllocator*, "UnityEngine.Rendering", "AtlasAllocator");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.AtlasAllocator
  // [TokenAttribute] Offset: FFFFFFFF
  class AtlasAllocator : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::AtlasAllocator::AtlasNode
    class AtlasNode;
    // Nested type: ::UnityEngine::Rendering::AtlasAllocator::$$c
    class $$c;
    public:
    // private UnityEngine.Rendering.AtlasAllocator/AtlasNode m_Root
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::AtlasAllocator::AtlasNode* m_Root;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::AtlasAllocator::AtlasNode*) == 0x8);
    // private System.Int32 m_Width
    // Size: 0x4
    // Offset: 0x18
    int m_Width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Height
    // Size: 0x4
    // Offset: 0x1C
    int m_Height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean powerOfTwoPadding
    // Size: 0x1
    // Offset: 0x20
    bool powerOfTwoPadding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: powerOfTwoPadding and: m_NodePool
    char __padding3[0x7] = {};
    // private UnityEngine.Rendering.ObjectPool`1<UnityEngine.Rendering.AtlasAllocator/AtlasNode> m_NodePool
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator::AtlasNode*>* m_NodePool;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator::AtlasNode*>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Rendering.AtlasAllocator/AtlasNode m_Root
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::AtlasAllocator::AtlasNode*& dyn_m_Root();
    // Get instance field reference: private System.Int32 m_Width
    [[deprecated("Use field access instead!")]] int& dyn_m_Width();
    // Get instance field reference: private System.Int32 m_Height
    [[deprecated("Use field access instead!")]] int& dyn_m_Height();
    // Get instance field reference: private System.Boolean powerOfTwoPadding
    [[deprecated("Use field access instead!")]] bool& dyn_powerOfTwoPadding();
    // Get instance field reference: private UnityEngine.Rendering.ObjectPool`1<UnityEngine.Rendering.AtlasAllocator/AtlasNode> m_NodePool
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator::AtlasNode*>*& dyn_m_NodePool();
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Boolean potPadding)
    // Offset: 0x52564B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AtlasAllocator* New_ctor(int width, int height, bool potPadding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::AtlasAllocator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AtlasAllocator*, creationType>(width, height, potPadding)));
    }
    // public System.Boolean Allocate(ref UnityEngine.Vector4 result, System.Int32 width, System.Int32 height)
    // Offset: 0x52566FC
    bool Allocate(ByRef<::UnityEngine::Vector4> result, int width, int height);
    // public System.Void Reset()
    // Offset: 0x5256990
    void Reset();
  }; // UnityEngine.Rendering.AtlasAllocator
  #pragma pack(pop)
  static check_size<sizeof(AtlasAllocator), 40 + sizeof(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator::AtlasNode*>*)> __UnityEngine_Rendering_AtlasAllocatorSizeCheck;
  static_assert(sizeof(AtlasAllocator) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::AtlasAllocator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::AtlasAllocator::Allocate
// Il2CppName: Allocate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::AtlasAllocator::*)(ByRef<::UnityEngine::Vector4>, int, int)>(&UnityEngine::Rendering::AtlasAllocator::Allocate)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::AtlasAllocator*), "Allocate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, width, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::AtlasAllocator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::AtlasAllocator::*)()>(&UnityEngine::Rendering::AtlasAllocator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::AtlasAllocator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};