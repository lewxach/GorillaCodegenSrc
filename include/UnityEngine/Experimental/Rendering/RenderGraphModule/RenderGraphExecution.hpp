// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraph
  class RenderGraph;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraphExecution
  struct RenderGraphExecution;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphExecution");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphExecution
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderGraphExecution/*, public ::System::ValueType, public ::System::IDisposable*/ {
    public:
    public:
    // private UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph renderGraph
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*) == 0x8);
    public:
    // Creating value type constructor for type: RenderGraphExecution
    constexpr RenderGraphExecution(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph_ = {}) noexcept : renderGraph{renderGraph_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*
    constexpr operator ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*() const noexcept {
      return renderGraph;
    }
    // Get instance field reference: private UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph renderGraph
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*& dyn_renderGraph();
    // System.Void .ctor(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph renderGraph)
    // Offset: 0x5230334
    // ABORTED: conflicts with another method.  RenderGraphExecution(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph);
    // public System.Void Dispose()
    // Offset: 0x523033C
    void Dispose();
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphExecution
  #pragma pack(pop)
  static check_size<sizeof(RenderGraphExecution), 0 + sizeof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*)> __UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphExecutionSizeCheck;
  static_assert(sizeof(RenderGraphExecution) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution::RenderGraphExecution
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
