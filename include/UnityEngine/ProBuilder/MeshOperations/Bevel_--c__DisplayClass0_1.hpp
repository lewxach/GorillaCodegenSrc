// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel
#include "UnityEngine/ProBuilder/MeshOperations/Bevel.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1*, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_1");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Bevel::$$c__DisplayClass0_1 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.ProBuilder.EdgeLookup lup
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::ProBuilder::EdgeLookup lup;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::EdgeLookup) == 0x10);
    public:
    // Creating conversion operator: operator ::UnityEngine::ProBuilder::EdgeLookup
    constexpr operator ::UnityEngine::ProBuilder::EdgeLookup() const noexcept {
      return lup;
    }
    // Get instance field reference: public UnityEngine.ProBuilder.EdgeLookup lup
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::EdgeLookup& dyn_lup();
    // public System.Void .ctor()
    // Offset: 0x5202E40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bevel::$$c__DisplayClass0_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bevel::$$c__DisplayClass0_1*, creationType>()));
    }
    // System.Boolean <BevelEdges>b__4(UnityEngine.ProBuilder.WingedEdge x)
    // Offset: 0x5203F14
    bool $BevelEdges$b__4(::UnityEngine::ProBuilder::WingedEdge* x);
  }; // UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_1
  #pragma pack(pop)
  static check_size<sizeof(Bevel::$$c__DisplayClass0_1), 16 + sizeof(::UnityEngine::ProBuilder::EdgeLookup)> __UnityEngine_ProBuilder_MeshOperations_Bevel_$$c__DisplayClass0_1SizeCheck;
  static_assert(sizeof(Bevel::$$c__DisplayClass0_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1::$BevelEdges$b__4
// Il2CppName: <BevelEdges>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1::*)(::UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1::$BevelEdges$b__4)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::Bevel::$$c__DisplayClass0_1*), "<BevelEdges>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};