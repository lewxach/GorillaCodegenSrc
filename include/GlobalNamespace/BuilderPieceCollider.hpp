// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BuilderPiece
  class BuilderPiece;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BuilderPieceCollider
  class BuilderPieceCollider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BuilderPieceCollider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BuilderPieceCollider*, "", "BuilderPieceCollider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BuilderPieceCollider
  // [TokenAttribute] Offset: FFFFFFFF
  class BuilderPieceCollider : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public BuilderPiece piece
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BuilderPiece* piece;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BuilderPiece*) == 0x8);
    public:
    // Get instance field reference: public BuilderPiece piece
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BuilderPiece*& dyn_piece();
    // public System.Void .ctor()
    // Offset: 0x26E3D44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuilderPieceCollider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BuilderPieceCollider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuilderPieceCollider*, creationType>()));
    }
  }; // BuilderPieceCollider
  #pragma pack(pop)
  static check_size<sizeof(BuilderPieceCollider), 32 + sizeof(::GlobalNamespace::BuilderPiece*)> __GlobalNamespace_BuilderPieceColliderSizeCheck;
  static_assert(sizeof(BuilderPieceCollider) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BuilderPieceCollider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
