// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityEngine.UIElements.Vertex
#include "UnityEngine/UIElements/Vertex.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements::UIR
namespace UnityEngine::UIElements::UIR {
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: Page
  class Page;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Page);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Page*, "UnityEngine.UIElements.UIR", "Page");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIR.Page
  // [TokenAttribute] Offset: FFFFFFFF
  class Page : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::UnityEngine::UIElements::UIR::Page::DataSet_1<T>
    template<typename T>
    class DataSet_1;
    public:
    // private System.Boolean <disposed>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: vertices
    char __padding0[0x7] = {};
    // public UnityEngine.UIElements.UIR.Page/DataSet`1<UnityEngine.UIElements.Vertex> vertices
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::UIR::Page::DataSet_1<::UnityEngine::UIElements::Vertex>* vertices;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::Page::DataSet_1<::UnityEngine::UIElements::Vertex>*) == 0x8);
    // public UnityEngine.UIElements.UIR.Page/DataSet`1<System.UInt16> indices
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UIElements::UIR::Page::DataSet_1<uint16_t>* indices;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::Page::DataSet_1<uint16_t>*) == 0x8);
    // public UnityEngine.UIElements.UIR.Page next
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UIElements::UIR::Page* next;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::Page*) == 0x8);
    // public System.Int32 framesEmpty
    // Size: 0x4
    // Offset: 0x30
    int framesEmpty;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Boolean <disposed>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$disposed$k__BackingField();
    // Get instance field reference: public UnityEngine.UIElements.UIR.Page/DataSet`1<UnityEngine.UIElements.Vertex> vertices
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::Page::DataSet_1<::UnityEngine::UIElements::Vertex>*& dyn_vertices();
    // Get instance field reference: public UnityEngine.UIElements.UIR.Page/DataSet`1<System.UInt16> indices
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::Page::DataSet_1<uint16_t>*& dyn_indices();
    // Get instance field reference: public UnityEngine.UIElements.UIR.Page next
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::Page*& dyn_next();
    // Get instance field reference: public System.Int32 framesEmpty
    [[deprecated("Use field access instead!")]] int& dyn_framesEmpty();
    // public System.Void .ctor(System.UInt32 vertexMaxCount, System.UInt32 indexMaxCount, System.UInt32 maxQueuedFrameCount, System.Boolean mockPage)
    // Offset: 0x55DBEBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Page* New_ctor(uint vertexMaxCount, uint indexMaxCount, uint maxQueuedFrameCount, bool mockPage) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::Page::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Page*, creationType>(vertexMaxCount, indexMaxCount, maxQueuedFrameCount, mockPage)));
    }
    // protected System.Boolean get_disposed()
    // Offset: 0x55E034C
    bool get_disposed();
    // private System.Void set_disposed(System.Boolean value)
    // Offset: 0x55E0354
    void set_disposed(bool value);
    // public System.Void Dispose()
    // Offset: 0x55DF3E0
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x55E0360
    void Dispose(bool disposing);
    // public System.Boolean get_isEmpty()
    // Offset: 0x55DC020
    bool get_isEmpty();
  }; // UnityEngine.UIElements.UIR.Page
  #pragma pack(pop)
  static check_size<sizeof(Page), 48 + sizeof(int)> __UnityEngine_UIElements_UIR_PageSizeCheck;
  static_assert(sizeof(Page) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Page::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Page::get_disposed
// Il2CppName: get_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::Page::*)()>(&UnityEngine::UIElements::UIR::Page::get_disposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Page*), "get_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Page::set_disposed
// Il2CppName: set_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::Page::*)(bool)>(&UnityEngine::UIElements::UIR::Page::set_disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Page*), "set_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Page::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::Page::*)()>(&UnityEngine::UIElements::UIR::Page::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Page*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Page::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::Page::*)(bool)>(&UnityEngine::UIElements::UIR::Page::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Page*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::Page::get_isEmpty
// Il2CppName: get_isEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::Page::*)()>(&UnityEngine::UIElements::UIR::Page::get_isEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::Page*), "get_isEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};