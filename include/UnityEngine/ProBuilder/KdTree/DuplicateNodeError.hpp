// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Forward declaring type: DuplicateNodeError
  class DuplicateNodeError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::KdTree::DuplicateNodeError);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::KdTree::DuplicateNodeError*, "UnityEngine.ProBuilder.KdTree", "DuplicateNodeError");
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.DuplicateNodeError
  // [TokenAttribute] Offset: FFFFFFFF
  class DuplicateNodeError : public ::System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x5196490
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DuplicateNodeError* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::KdTree::DuplicateNodeError::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DuplicateNodeError*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.KdTree.DuplicateNodeError
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::KdTree::DuplicateNodeError::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!