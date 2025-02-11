// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UIR.Allocator2D
#include "UnityEngine/UIElements/UIR/Allocator2D.hpp"
// Including type: UnityEngine.UIElements.UIR.LinkedPoolItem`1
#include "UnityEngine/UIElements/UIR/LinkedPoolItem_1.hpp"
// Including type: UnityEngine.RectInt
#include "UnityEngine/RectInt.hpp"
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
  // Forward declaring type: BestFitAllocator
  class BestFitAllocator;
  // Forward declaring type: LinkedPool`1<T>
  template<typename T>
  class LinkedPool_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Allocator2D::Row);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Allocator2D::Row*, "UnityEngine.UIElements.UIR", "Allocator2D/Row");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UIR.Allocator2D/Row
  // [TokenAttribute] Offset: FFFFFFFF
  class Allocator2D::Row : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::Allocator2D::Row*> {
    public:
    public:
    // public UnityEngine.RectInt rect
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::RectInt rect;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectInt) == 0x10);
    // public UnityEngine.UIElements.UIR.Allocator2D/Area area
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UIElements::UIR::Allocator2D::Area* area;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::Allocator2D::Area*) == 0x8);
    // public UnityEngine.UIElements.UIR.BestFitAllocator allocator
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UIElements::UIR::BestFitAllocator* allocator;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::BestFitAllocator*) == 0x8);
    // public UnityEngine.UIElements.UIR.Alloc alloc
    // Size: 0x11
    // Offset: 0x38
    ::UnityEngine::UIElements::UIR::Alloc alloc;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::Alloc) == 0x11);
    // public UnityEngine.UIElements.UIR.Allocator2D/Row next
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::UIElements::UIR::Allocator2D::Row* next;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::Allocator2D::Row*) == 0x8);
    public:
    // Get static field: static public readonly UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.Allocator2D/Row> pool
    static ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D::Row*>* _get_pool();
    // Set static field: static public readonly UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.Allocator2D/Row> pool
    static void _set_pool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::Allocator2D::Row*>* value);
    // Get instance field reference: public UnityEngine.RectInt rect
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectInt& dyn_rect();
    // Get instance field reference: public UnityEngine.UIElements.UIR.Allocator2D/Area area
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::Allocator2D::Area*& dyn_area();
    // Get instance field reference: public UnityEngine.UIElements.UIR.BestFitAllocator allocator
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::BestFitAllocator*& dyn_allocator();
    // Get instance field reference: public UnityEngine.UIElements.UIR.Alloc alloc
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::Alloc& dyn_alloc();
    // Get instance field reference: public UnityEngine.UIElements.UIR.Allocator2D/Row next
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::Allocator2D::Row*& dyn_next();
    // static private UnityEngine.UIElements.UIR.Allocator2D/Row Create()
    // Offset: 0x55CBC4C
    static ::UnityEngine::UIElements::UIR::Allocator2D::Row* Create();
    // static private System.Void Reset(UnityEngine.UIElements.UIR.Allocator2D/Row row)
    // Offset: 0x55CBCE4
    static void Reset(::UnityEngine::UIElements::UIR::Allocator2D::Row* row);
    // static private System.Void .cctor()
    // Offset: 0x55CBD30
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x55CBC9C
    // Implemented from: UnityEngine.UIElements.UIR.LinkedPoolItem`1
    // Base method: System.Void LinkedPoolItem_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Allocator2D::Row* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::Allocator2D::Row::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Allocator2D::Row*, creationType>()));
    }
  }; // UnityEngine.UIElements.UIR.Allocator2D/Row
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Allocator2D::Row::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Allocator2D::Row* (*)()>(&UnityEngine::UIElements::UIR::Allocator2D::Row::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Allocator2D::Row*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Allocator2D::Row::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::UIR::Allocator2D::Row*)>(&UnityEngine::UIElements::UIR::Allocator2D::Row::Reset)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.UIR", "Allocator2D/Row")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Allocator2D::Row*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Allocator2D::Row::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIR::Allocator2D::Row::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Allocator2D::Row*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Allocator2D::Row::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
