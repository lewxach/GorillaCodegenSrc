// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UIR.LinkedPoolItem`1
#include "UnityEngine/UIElements/UIR/LinkedPoolItem_1.hpp"
// Including type: UnityEngine.UIElements.UIR.Alloc
#include "UnityEngine/UIElements/UIR/Alloc.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements::UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: Page
  class Page;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: MeshHandle
  class MeshHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::MeshHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::MeshHandle*, "UnityEngine.UIElements.UIR", "MeshHandle");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UIR.MeshHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class MeshHandle : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::MeshHandle*> {
    public:
    public:
    // UnityEngine.UIElements.UIR.Alloc allocVerts
    // Size: 0x11
    // Offset: 0x18
    ::UnityEngine::UIElements::UIR::Alloc allocVerts;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::Alloc) == 0x11);
    // UnityEngine.UIElements.UIR.Alloc allocIndices
    // Size: 0x11
    // Offset: 0x30
    ::UnityEngine::UIElements::UIR::Alloc allocIndices;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::Alloc) == 0x11);
    // System.UInt32 triangleCount
    // Size: 0x4
    // Offset: 0x48
    uint triangleCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // UnityEngine.UIElements.UIR.Page allocPage
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::UIElements::UIR::Page* allocPage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::Page*) == 0x8);
    // System.UInt32 allocTime
    // Size: 0x4
    // Offset: 0x58
    uint allocTime;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 updateAllocID
    // Size: 0x4
    // Offset: 0x5C
    uint updateAllocID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Get instance field reference: UnityEngine.UIElements.UIR.Alloc allocVerts
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::Alloc& dyn_allocVerts();
    // Get instance field reference: UnityEngine.UIElements.UIR.Alloc allocIndices
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::Alloc& dyn_allocIndices();
    // Get instance field reference: System.UInt32 triangleCount
    [[deprecated("Use field access instead!")]] uint& dyn_triangleCount();
    // Get instance field reference: UnityEngine.UIElements.UIR.Page allocPage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::Page*& dyn_allocPage();
    // Get instance field reference: System.UInt32 allocTime
    [[deprecated("Use field access instead!")]] uint& dyn_allocTime();
    // Get instance field reference: System.UInt32 updateAllocID
    [[deprecated("Use field access instead!")]] uint& dyn_updateAllocID();
    // public System.Void .ctor()
    // Offset: 0x55D92EC
    // Implemented from: UnityEngine.UIElements.UIR.LinkedPoolItem`1
    // Base method: System.Void LinkedPoolItem_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshHandle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::MeshHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshHandle*, creationType>()));
    }
  }; // UnityEngine.UIElements.UIR.MeshHandle
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::MeshHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
