// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: DragAndDropData
  class DragAndDropData;
  // Forward declaring type: DragAndDropPosition
  struct DragAndDropPosition;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IListDragAndDropArgs
  class IListDragAndDropArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IListDragAndDropArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IListDragAndDropArgs*, "UnityEngine.UIElements", "IListDragAndDropArgs");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IListDragAndDropArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class IListDragAndDropArgs {
    public:
    // public System.Int32 get_insertAtIndex()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_insertAtIndex();
    // public System.Int32 get_parentId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_parentId();
    // public System.Int32 get_childIndex()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_childIndex();
    // public UnityEngine.UIElements.DragAndDropData get_dragAndDropData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::DragAndDropData* get_dragAndDropData();
    // public UnityEngine.UIElements.DragAndDropPosition get_dragAndDropPosition()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::DragAndDropPosition get_dragAndDropPosition();
  }; // UnityEngine.UIElements.IListDragAndDropArgs
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IListDragAndDropArgs::get_insertAtIndex
// Il2CppName: get_insertAtIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::IListDragAndDropArgs::*)()>(&UnityEngine::UIElements::IListDragAndDropArgs::get_insertAtIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IListDragAndDropArgs*), "get_insertAtIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IListDragAndDropArgs::get_parentId
// Il2CppName: get_parentId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::IListDragAndDropArgs::*)()>(&UnityEngine::UIElements::IListDragAndDropArgs::get_parentId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IListDragAndDropArgs*), "get_parentId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IListDragAndDropArgs::get_childIndex
// Il2CppName: get_childIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::IListDragAndDropArgs::*)()>(&UnityEngine::UIElements::IListDragAndDropArgs::get_childIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IListDragAndDropArgs*), "get_childIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropData
// Il2CppName: get_dragAndDropData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragAndDropData* (UnityEngine::UIElements::IListDragAndDropArgs::*)()>(&UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IListDragAndDropArgs*), "get_dragAndDropData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropPosition
// Il2CppName: get_dragAndDropPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragAndDropPosition (UnityEngine::UIElements::IListDragAndDropArgs::*)()>(&UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IListDragAndDropArgs*), "get_dragAndDropPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};