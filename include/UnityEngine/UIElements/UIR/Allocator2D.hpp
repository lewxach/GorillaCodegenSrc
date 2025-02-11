// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2Int
#include "UnityEngine/Vector2Int.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements::UIR
namespace UnityEngine::UIElements::UIR {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: Allocator2D
  class Allocator2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Allocator2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Allocator2D*, "UnityEngine.UIElements.UIR", "Allocator2D");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIR.Allocator2D
  // [TokenAttribute] Offset: FFFFFFFF
  class Allocator2D : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::UIR::Allocator2D::Area
    class Area;
    // Nested type: ::UnityEngine::UIElements::UIR::Allocator2D::Row
    class Row;
    // Nested type: ::UnityEngine::UIElements::UIR::Allocator2D::Alloc2D
    struct Alloc2D;
    public:
    // private readonly UnityEngine.Vector2Int m_MinSize
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Vector2Int m_MinSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    // private readonly UnityEngine.Vector2Int m_MaxSize
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Vector2Int m_MaxSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    // private readonly UnityEngine.Vector2Int m_MaxAllocSize
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2Int m_MaxAllocSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    // private readonly System.Int32 m_RowHeightBias
    // Size: 0x4
    // Offset: 0x28
    int m_RowHeightBias;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_RowHeightBias and: m_Rows
    char __padding3[0x4] = {};
    // private readonly UnityEngine.UIElements.UIR.Allocator2D/Row[] m_Rows
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D::Row*> m_Rows;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D::Row*>) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.Allocator2D/Area> m_Areas
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D::Area*>* m_Areas;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D::Area*>*) == 0x8);
    public:
    // Get instance field reference: private readonly UnityEngine.Vector2Int m_MinSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_m_MinSize();
    // Get instance field reference: private readonly UnityEngine.Vector2Int m_MaxSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_m_MaxSize();
    // Get instance field reference: private readonly UnityEngine.Vector2Int m_MaxAllocSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_m_MaxAllocSize();
    // Get instance field reference: private readonly System.Int32 m_RowHeightBias
    [[deprecated("Use field access instead!")]] int& dyn_m_RowHeightBias();
    // Get instance field reference: private readonly UnityEngine.UIElements.UIR.Allocator2D/Row[] m_Rows
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D::Row*>& dyn_m_Rows();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.Allocator2D/Area> m_Areas
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D::Area*>*& dyn_m_Areas();
    // public System.Void .ctor(UnityEngine.Vector2Int minSize, UnityEngine.Vector2Int maxSize, System.Int32 rowHeightBias)
    // Offset: 0x55CADA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Allocator2D* New_ctor(::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize, int rowHeightBias) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::Allocator2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Allocator2D*, creationType>(minSize, maxSize, rowHeightBias)));
    }
    // public System.Boolean TryAllocate(System.Int32 width, System.Int32 height, out UnityEngine.UIElements.UIR.Allocator2D/Alloc2D alloc2D)
    // Offset: 0x55CB3A4
    bool TryAllocate(int width, int height, ByRef<::UnityEngine::UIElements::UIR::Allocator2D::Alloc2D> alloc2D);
    // public System.Void Free(UnityEngine.UIElements.UIR.Allocator2D/Alloc2D alloc2D)
    // Offset: 0x55CB9BC
    void Free(::UnityEngine::UIElements::UIR::Allocator2D::Alloc2D alloc2D);
    // static private System.Void BuildAreas(System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.Allocator2D/Area> areas, UnityEngine.Vector2Int minSize, UnityEngine.Vector2Int maxSize)
    // Offset: 0x55CAFD4
    static void BuildAreas(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D::Area*>* areas, ::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize);
    // static private UnityEngine.Vector2Int ComputeMaxAllocSize(System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.Allocator2D/Area> areas, System.Int32 rowHeightBias)
    // Offset: 0x55CB218
    static ::UnityEngine::Vector2Int ComputeMaxAllocSize(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D::Area*>* areas, int rowHeightBias);
    // static private UnityEngine.UIElements.UIR.Allocator2D/Row[] BuildRowArray(System.Int32 maxRowHeight, System.Int32 rowHeightBias)
    // Offset: 0x55CB31C
    static ::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D::Row*> BuildRowArray(int maxRowHeight, int rowHeightBias);
  }; // UnityEngine.UIElements.UIR.Allocator2D
  #pragma pack(pop)
  static check_size<sizeof(Allocator2D), 56 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D::Area*>*)> __UnityEngine_UIElements_UIR_Allocator2DSizeCheck;
  static_assert(sizeof(Allocator2D) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Allocator2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Allocator2D::TryAllocate
// Il2CppName: TryAllocate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::Allocator2D::*)(int, int, ByRef<::UnityEngine::UIElements::UIR::Allocator2D::Alloc2D>)>(&UnityEngine::UIElements::UIR::Allocator2D::TryAllocate)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* alloc2D = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.UIR", "Allocator2D/Alloc2D")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Allocator2D*), "TryAllocate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height, alloc2D});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Allocator2D::Free
// Il2CppName: Free
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::Allocator2D::*)(::UnityEngine::UIElements::UIR::Allocator2D::Alloc2D)>(&UnityEngine::UIElements::UIR::Allocator2D::Free)> {
  static const MethodInfo* get() {
    static auto* alloc2D = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.UIR", "Allocator2D/Alloc2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Allocator2D*), "Free", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alloc2D});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Allocator2D::BuildAreas
// Il2CppName: BuildAreas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D::Area*>*, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&UnityEngine::UIElements::UIR::Allocator2D::BuildAreas)> {
  static const MethodInfo* get() {
    static auto* areas = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.UIR", "Allocator2D/Area")})->byval_arg;
    static auto* minSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2Int")->byval_arg;
    static auto* maxSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Allocator2D*), "BuildAreas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{areas, minSize, maxSize});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Allocator2D::ComputeMaxAllocSize
// Il2CppName: ComputeMaxAllocSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Allocator2D::Area*>*, int)>(&UnityEngine::UIElements::UIR::Allocator2D::ComputeMaxAllocSize)> {
  static const MethodInfo* get() {
    static auto* areas = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.UIR", "Allocator2D/Area")})->byval_arg;
    static auto* rowHeightBias = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Allocator2D*), "ComputeMaxAllocSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{areas, rowHeightBias});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Allocator2D::BuildRowArray
// Il2CppName: BuildRowArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::UIElements::UIR::Allocator2D::Row*> (*)(int, int)>(&UnityEngine::UIElements::UIR::Allocator2D::BuildRowArray)> {
  static const MethodInfo* get() {
    static auto* maxRowHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rowHeightBias = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Allocator2D*), "BuildRowArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxRowHeight, rowHeightBias});
  }
};
