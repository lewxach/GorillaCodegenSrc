// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource`2
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResource_2.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureDesc
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/TextureDesc.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandle
  class RTHandle;
}
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraphLogger
  class RenderGraphLogger;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: TextureResource
  class TextureResource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureResource");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.TextureResource
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: FFFFFFFF
  class TextureResource : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, ::UnityEngine::Rendering::RTHandle*> {
    public:
    // Get static field: static private System.Int32 m_TextureCreationIndex
    static int _get_m_TextureCreationIndex();
    // Set static field: static private System.Int32 m_TextureCreationIndex
    static void _set_m_TextureCreationIndex(int value);
    // public override System.String GetName()
    // Offset: 0x523CB20
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
    // Base method: System.String IRenderGraphResource::GetName()
    ::StringW GetName();
    // public override System.Void CreatePooledGraphicsResource()
    // Offset: 0x523CB8C
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
    // Base method: System.Void IRenderGraphResource::CreatePooledGraphicsResource()
    void CreatePooledGraphicsResource();
    // public override System.Void ReleasePooledGraphicsResource(System.Int32 frameIndex)
    // Offset: 0x523CD04
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
    // Base method: System.Void IRenderGraphResource::ReleasePooledGraphicsResource(System.Int32 frameIndex)
    void ReleasePooledGraphicsResource(int frameIndex);
    // public override System.Void CreateGraphicsResource(System.String name)
    // Offset: 0x523CE64
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
    // Base method: System.Void IRenderGraphResource::CreateGraphicsResource(System.String name)
    void CreateGraphicsResource(::StringW name);
    // public override System.Void ReleaseGraphicsResource()
    // Offset: 0x523D248
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource`2
    // Base method: System.Void RenderGraphResource_2::ReleaseGraphicsResource()
    void ReleaseGraphicsResource();
    // public override System.Void LogCreation(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger logger)
    // Offset: 0x523D2A0
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
    // Base method: System.Void IRenderGraphResource::LogCreation(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger logger)
    void LogCreation(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);
    // public override System.Void LogRelease(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger logger)
    // Offset: 0x523D3B4
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
    // Base method: System.Void IRenderGraphResource::LogRelease(UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger logger)
    void LogRelease(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);
    // public System.Void .ctor()
    // Offset: 0x523D488
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResource`2
    // Base method: System.Void RenderGraphResource_2::.ctor()
    // Base method: System.Void IRenderGraphResource::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextureResource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextureResource*, creationType>()));
    }
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.TextureResource
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::GetName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::CreatePooledGraphicsResource
// Il2CppName: CreatePooledGraphicsResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::CreatePooledGraphicsResource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*), "CreatePooledGraphicsResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::ReleasePooledGraphicsResource
// Il2CppName: ReleasePooledGraphicsResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::*)(int)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::ReleasePooledGraphicsResource)> {
  static const MethodInfo* get() {
    static auto* frameIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*), "ReleasePooledGraphicsResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frameIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::CreateGraphicsResource
// Il2CppName: CreateGraphicsResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::*)(::StringW)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::CreateGraphicsResource)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*), "CreateGraphicsResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::ReleaseGraphicsResource
// Il2CppName: ReleaseGraphicsResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::*)()>(&UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::ReleaseGraphicsResource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*), "ReleaseGraphicsResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::LogCreation
// Il2CppName: LogCreation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::LogCreation)> {
  static const MethodInfo* get() {
    static auto* logger = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphLogger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*), "LogCreation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logger});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::LogRelease
// Il2CppName: LogRelease
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*)>(&UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::LogRelease)> {
  static const MethodInfo* get() {
    static auto* logger = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphLogger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*), "LogRelease", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logger});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!