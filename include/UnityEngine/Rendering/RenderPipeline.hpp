// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.ScriptableRenderContext
#include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipelineGlobalSettings
  class RenderPipelineGlobalSettings;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipeline
  class RenderPipeline;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipeline*, "UnityEngine.Rendering", "RenderPipeline");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RenderPipeline
  // [TokenAttribute] Offset: FFFFFFFF
  class RenderPipeline : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::RenderPipeline::StandardRequest
    class StandardRequest;
    public:
    // private System.Boolean <disposed>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return disposed;
    }
    // Get instance field reference: private System.Boolean <disposed>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$disposed$k__BackingField();
    // protected System.Void Render(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera[] cameras)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Render(::UnityEngine::Rendering::ScriptableRenderContext context, ::ArrayW<::UnityEngine::Camera*> cameras);
    // protected System.Void ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera camera, RequestData renderRequest)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class RequestData>
    void ProcessRenderRequests(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera, RequestData renderRequest) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::RenderPipeline::ProcessRenderRequests");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Rendering::RenderPipeline*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RequestData>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, context, camera, renderRequest);
    }
    // protected System.Boolean IsRenderRequestSupported(UnityEngine.Camera camera, RequestData data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class RequestData>
    bool IsRenderRequestSupported(::UnityEngine::Camera* camera, RequestData data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::RenderPipeline::IsRenderRequestSupported");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Rendering::RenderPipeline*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RequestData>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, camera, data);
    }
    // static protected System.Void BeginContextRendering(UnityEngine.Rendering.ScriptableRenderContext context, System.Collections.Generic.List`1<UnityEngine.Camera> cameras)
    // Offset: 0x54E82D4
    static void BeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* cameras);
    // static protected System.Void BeginCameraRendering(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera camera)
    // Offset: 0x54E842C
    static void BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);
    // static protected System.Void EndContextRendering(UnityEngine.Rendering.ScriptableRenderContext context, System.Collections.Generic.List`1<UnityEngine.Camera> cameras)
    // Offset: 0x54E8520
    static void EndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* cameras);
    // static protected System.Void EndCameraRendering(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera camera)
    // Offset: 0x54E8678
    static void EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);
    // protected System.Void Render(UnityEngine.Rendering.ScriptableRenderContext context, System.Collections.Generic.List`1<UnityEngine.Camera> cameras)
    // Offset: 0x54E876C
    void Render(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* cameras);
    // System.Void InternalRender(UnityEngine.Rendering.ScriptableRenderContext context, System.Collections.Generic.List`1<UnityEngine.Camera> cameras)
    // Offset: 0x54E87E4
    void InternalRender(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* cameras);
    // System.Void InternalProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera camera, RequestData renderRequest)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class RequestData>
    void InternalProcessRenderRequests(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera, RequestData renderRequest) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::RenderPipeline::InternalProcessRenderRequests");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InternalProcessRenderRequests", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RequestData>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(camera), ::il2cpp_utils::ExtractType(renderRequest)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RequestData>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, context, camera, renderRequest);
    }
    // public System.Boolean get_disposed()
    // Offset: 0x54E8864
    bool get_disposed();
    // private System.Void set_disposed(System.Boolean value)
    // Offset: 0x54E886C
    void set_disposed(bool value);
    // System.Void Dispose()
    // Offset: 0x54E8878
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x54E88F0
    void Dispose(bool disposing);
    // public UnityEngine.Rendering.RenderPipelineGlobalSettings get_defaultSettings()
    // Offset: 0x54E88F4
    ::UnityEngine::Rendering::RenderPipelineGlobalSettings* get_defaultSettings();
    // protected System.Void .ctor()
    // Offset: 0x54E88FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderPipeline* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::RenderPipeline::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderPipeline*, creationType>()));
    }
  }; // UnityEngine.Rendering.RenderPipeline
  #pragma pack(pop)
  static check_size<sizeof(RenderPipeline), 16 + sizeof(bool)> __UnityEngine_Rendering_RenderPipelineSizeCheck;
  static_assert(sizeof(RenderPipeline) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityEngine::Camera*>)>(&UnityEngine::Rendering::RenderPipeline::Render)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Camera"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, cameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::ProcessRenderRequests
// Il2CppName: ProcessRenderRequests
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::IsRenderRequestSupported
// Il2CppName: IsRenderRequestSupported
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::BeginContextRendering
// Il2CppName: BeginContextRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipeline::BeginContextRendering)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "BeginContextRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, cameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::BeginCameraRendering
// Il2CppName: BeginCameraRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&UnityEngine::Rendering::RenderPipeline::BeginCameraRendering)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "BeginCameraRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, camera});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::EndContextRendering
// Il2CppName: EndContextRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipeline::EndContextRendering)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "EndContextRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, cameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::EndCameraRendering
// Il2CppName: EndCameraRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&UnityEngine::Rendering::RenderPipeline::EndCameraRendering)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "EndCameraRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, camera});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipeline::Render)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, cameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::InternalRender
// Il2CppName: InternalRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipeline::InternalRender)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "InternalRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, cameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::InternalProcessRenderRequests
// Il2CppName: InternalProcessRenderRequests
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::get_disposed
// Il2CppName: get_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RenderPipeline::*)()>(&UnityEngine::Rendering::RenderPipeline::get_disposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "get_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::set_disposed
// Il2CppName: set_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(bool)>(&UnityEngine::Rendering::RenderPipeline::set_disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "set_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)()>(&UnityEngine::Rendering::RenderPipeline::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(bool)>(&UnityEngine::Rendering::RenderPipeline::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::get_defaultSettings
// Il2CppName: get_defaultSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderPipelineGlobalSettings* (UnityEngine::Rendering::RenderPipeline::*)()>(&UnityEngine::Rendering::RenderPipeline::get_defaultSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "get_defaultSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!