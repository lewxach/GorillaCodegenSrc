// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.ProBuilderMesh
#include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass168_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass168_0*, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c__DisplayClass168_0");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ProBuilderMesh/<>c__DisplayClass168_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ProBuilderMesh::$$c__DisplayClass168_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 i
    // Size: 0x4
    // Offset: 0x10
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return i;
    }
    // Get instance field reference: public System.Int32 i
    [[deprecated("Use field access instead!")]] int& dyn_i();
    // public System.Void .ctor()
    // Offset: 0x51C1C38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProBuilderMesh::$$c__DisplayClass168_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass168_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProBuilderMesh::$$c__DisplayClass168_0*, creationType>()));
    }
    // System.Boolean <GetUnusedTextureGroup>b__0(UnityEngine.ProBuilder.Face element)
    // Offset: 0x51C54D0
    bool $GetUnusedTextureGroup$b__0(::UnityEngine::ProBuilder::Face* element);
  }; // UnityEngine.ProBuilder.ProBuilderMesh/<>c__DisplayClass168_0
  #pragma pack(pop)
  static check_size<sizeof(ProBuilderMesh::$$c__DisplayClass168_0), 16 + sizeof(int)> __UnityEngine_ProBuilder_ProBuilderMesh_$$c__DisplayClass168_0SizeCheck;
  static_assert(sizeof(ProBuilderMesh::$$c__DisplayClass168_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass168_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass168_0::$GetUnusedTextureGroup$b__0
// Il2CppName: <GetUnusedTextureGroup>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass168_0::*)(::UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass168_0::$GetUnusedTextureGroup$b__0)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ProBuilderMesh::$$c__DisplayClass168_0*), "<GetUnusedTextureGroup>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
