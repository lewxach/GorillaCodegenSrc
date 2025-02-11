// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RendererListHandle
  struct RendererListHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RendererListHandle");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: FFFFFFFF
  struct RendererListHandle/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Boolean m_IsValid
    // Size: 0x1
    // Offset: 0x0
    bool m_IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IsValid and: handle
    char __padding0[0x3] = {};
    // private System.Int32 <handle>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    int handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RendererListHandle
    constexpr RendererListHandle(bool m_IsValid_ = {}, int handle_ = {}) noexcept : m_IsValid{m_IsValid_}, handle{handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Boolean m_IsValid
    [[deprecated("Use field access instead!")]] bool& dyn_m_IsValid();
    // Get instance field reference: private System.Int32 <handle>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$handle$k__BackingField();
    // System.Int32 get_handle()
    // Offset: 0x523C4E4
    int get_handle();
    // public System.Boolean IsValid()
    // Offset: 0x523C4EC
    bool IsValid();
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle
  #pragma pack(pop)
  static check_size<sizeof(RendererListHandle), 4 + sizeof(int)> __UnityEngine_Experimental_Rendering_RenderGraphModule_RendererListHandleSizeCheck;
  static_assert(sizeof(RendererListHandle) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle::get_handle
// Il2CppName: get_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle::get_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle), "get_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
