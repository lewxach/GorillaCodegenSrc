// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.HDRDebugViewPass
#include "UnityEngine/Rendering/Universal/HDRDebugViewPass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraphContext
  class RenderGraphContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_2*, "UnityEngine.Rendering.Universal", "HDRDebugViewPass/<>c__DisplayClass16_2");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.HDRDebugViewPass/<>c__DisplayClass16_2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HDRDebugViewPass::$$c__DisplayClass16_2 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rendering.Universal.HDRDebugViewPass/PassData passData
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::HDRDebugViewPass::PassData* passData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::HDRDebugViewPass::PassData*) == 0x8);
    // public UnityEngine.Rendering.Universal.HDRDebugViewPass/<>c__DisplayClass16_0 CS$<>8__locals2
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_0* CS$$$8__locals2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_0*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Rendering.Universal.HDRDebugViewPass/PassData passData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::HDRDebugViewPass::PassData*& dyn_passData();
    // Get instance field reference: public UnityEngine.Rendering.Universal.HDRDebugViewPass/<>c__DisplayClass16_0 CS$<>8__locals2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_0*& dyn_CS$$$8__locals2();
    // public System.Void .ctor()
    // Offset: 0x52C6028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HDRDebugViewPass::$$c__DisplayClass16_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HDRDebugViewPass::$$c__DisplayClass16_2*, creationType>()));
    }
    // System.Void <RenderHDRDebug>b__1(UnityEngine.Rendering.Universal.HDRDebugViewPass/PassData data, UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext context)
    // Offset: 0x52C61A0
    void $RenderHDRDebug$b__1(::UnityEngine::Rendering::Universal::HDRDebugViewPass::PassData* data, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* context);
  }; // UnityEngine.Rendering.Universal.HDRDebugViewPass/<>c__DisplayClass16_2
  #pragma pack(pop)
  static check_size<sizeof(HDRDebugViewPass::$$c__DisplayClass16_2), 24 + sizeof(::UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_0*)> __UnityEngine_Rendering_Universal_HDRDebugViewPass_$$c__DisplayClass16_2SizeCheck;
  static_assert(sizeof(HDRDebugViewPass::$$c__DisplayClass16_2) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_2::$RenderHDRDebug$b__1
// Il2CppName: <RenderHDRDebug>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_2::*)(::UnityEngine::Rendering::Universal::HDRDebugViewPass::PassData*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*)>(&UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_2::$RenderHDRDebug$b__1)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "HDRDebugViewPass/PassData")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::HDRDebugViewPass::$$c__DisplayClass16_2*), "<RenderHDRDebug>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, context});
  }
};