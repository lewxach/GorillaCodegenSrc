// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle
#include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShapeFrame);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShapeFrame*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MBBlendShapeFrame");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MBBlendShapeFrame
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshCombinerSingle::MBBlendShapeFrame : public ::Il2CppObject {
    public:
    public:
    // public System.Single frameWeight
    // Size: 0x4
    // Offset: 0x10
    float frameWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: frameWeight and: vertices
    char __padding0[0x4] = {};
    // public UnityEngine.Vector3[] vertices
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Vector3> vertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public UnityEngine.Vector3[] normals
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Vector3> normals;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public UnityEngine.Vector3[] tangents
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Vector3> tangents;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    public:
    // Get instance field reference: public System.Single frameWeight
    [[deprecated("Use field access instead!")]] float& dyn_frameWeight();
    // Get instance field reference: public UnityEngine.Vector3[] vertices
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_vertices();
    // Get instance field reference: public UnityEngine.Vector3[] normals
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_normals();
    // Get instance field reference: public UnityEngine.Vector3[] tangents
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_tangents();
    // public System.Void .ctor()
    // Offset: 0x43C8B88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshCombinerSingle::MBBlendShapeFrame* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShapeFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshCombinerSingle::MBBlendShapeFrame*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MBBlendShapeFrame
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshCombinerSingle::MBBlendShapeFrame), 40 + sizeof(::ArrayW<::UnityEngine::Vector3>)> __DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MBBlendShapeFrameSizeCheck;
  static_assert(sizeof(MB3_MeshCombinerSingle::MBBlendShapeFrame) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShapeFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!