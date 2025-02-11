// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Technie::PhysicsCreator::Rigid
namespace Technie::PhysicsCreator::Rigid {
  // Forward declaring type: Hull
  class Hull;
}
// Forward declaring namespace: Technie::PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: TriangleBucket
  class TriangleBucket;
  // Forward declaring type: Triangle
  class Triangle;
  // Forward declaring type: ConstructionPlane
  class ConstructionPlane;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: FaceAlignmentBoxFitter
  class FaceAlignmentBoxFitter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::FaceAlignmentBoxFitter);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::FaceAlignmentBoxFitter*, "Technie.PhysicsCreator", "FaceAlignmentBoxFitter");
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.FaceAlignmentBoxFitter
  // [TokenAttribute] Offset: FFFFFFFF
  class FaceAlignmentBoxFitter : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x50244AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FaceAlignmentBoxFitter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::FaceAlignmentBoxFitter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FaceAlignmentBoxFitter*, creationType>()));
    }
    // public System.Void Fit(Technie.PhysicsCreator.Rigid.Hull hull, UnityEngine.Vector3[] meshVertices, System.Int32[] meshIndices)
    // Offset: 0x50244B4
    void Fit(::Technie::PhysicsCreator::Rigid::Hull* hull, ::ArrayW<::UnityEngine::Vector3> meshVertices, ::ArrayW<int> meshIndices);
    // private Technie.PhysicsCreator.TriangleBucket FindBestBucket(Technie.PhysicsCreator.Triangle tri, System.Single thresholdAngleDeg, System.Collections.Generic.List`1<Technie.PhysicsCreator.TriangleBucket> buckets)
    // Offset: 0x5024C10
    ::Technie::PhysicsCreator::TriangleBucket* FindBestBucket(::Technie::PhysicsCreator::Triangle* tri, float thresholdAngleDeg, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>* buckets);
    // private System.Void MergeClosestBuckets(System.Collections.Generic.List`1<Technie.PhysicsCreator.TriangleBucket> buckets)
    // Offset: 0x5024FB4
    void MergeClosestBuckets(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>* buckets);
    // private Technie.PhysicsCreator.ConstructionPlane CreateConstructionPlane(Technie.PhysicsCreator.TriangleBucket primaryBucket, Technie.PhysicsCreator.TriangleBucket secondaryBucket, Technie.PhysicsCreator.TriangleBucket tertiaryBucket)
    // Offset: 0x5025234
    ::Technie::PhysicsCreator::ConstructionPlane* CreateConstructionPlane(::Technie::PhysicsCreator::TriangleBucket* primaryBucket, ::Technie::PhysicsCreator::TriangleBucket* secondaryBucket, ::Technie::PhysicsCreator::TriangleBucket* tertiaryBucket);
  }; // Technie.PhysicsCreator.FaceAlignmentBoxFitter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::FaceAlignmentBoxFitter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Technie::PhysicsCreator::FaceAlignmentBoxFitter::Fit
// Il2CppName: Fit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::FaceAlignmentBoxFitter::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int>)>(&Technie::PhysicsCreator::FaceAlignmentBoxFitter::Fit)> {
  static const MethodInfo* get() {
    static auto* hull = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator.Rigid", "Hull")->byval_arg;
    static auto* meshVertices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* meshIndices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::FaceAlignmentBoxFitter*), "Fit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hull, meshVertices, meshIndices});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::FaceAlignmentBoxFitter::FindBestBucket
// Il2CppName: FindBestBucket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::TriangleBucket* (Technie::PhysicsCreator::FaceAlignmentBoxFitter::*)(::Technie::PhysicsCreator::Triangle*, float, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*)>(&Technie::PhysicsCreator::FaceAlignmentBoxFitter::FindBestBucket)> {
  static const MethodInfo* get() {
    static auto* tri = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator", "Triangle")->byval_arg;
    static auto* thresholdAngleDeg = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* buckets = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator", "TriangleBucket")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::FaceAlignmentBoxFitter*), "FindBestBucket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tri, thresholdAngleDeg, buckets});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::FaceAlignmentBoxFitter::MergeClosestBuckets
// Il2CppName: MergeClosestBuckets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Technie::PhysicsCreator::FaceAlignmentBoxFitter::*)(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::TriangleBucket*>*)>(&Technie::PhysicsCreator::FaceAlignmentBoxFitter::MergeClosestBuckets)> {
  static const MethodInfo* get() {
    static auto* buckets = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator", "TriangleBucket")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::FaceAlignmentBoxFitter*), "MergeClosestBuckets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buckets});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::FaceAlignmentBoxFitter::CreateConstructionPlane
// Il2CppName: CreateConstructionPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Technie::PhysicsCreator::ConstructionPlane* (Technie::PhysicsCreator::FaceAlignmentBoxFitter::*)(::Technie::PhysicsCreator::TriangleBucket*, ::Technie::PhysicsCreator::TriangleBucket*, ::Technie::PhysicsCreator::TriangleBucket*)>(&Technie::PhysicsCreator::FaceAlignmentBoxFitter::CreateConstructionPlane)> {
  static const MethodInfo* get() {
    static auto* primaryBucket = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator", "TriangleBucket")->byval_arg;
    static auto* secondaryBucket = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator", "TriangleBucket")->byval_arg;
    static auto* tertiaryBucket = &::il2cpp_utils::GetClassFromName("Technie.PhysicsCreator", "TriangleBucket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::FaceAlignmentBoxFitter*), "CreateConstructionPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{primaryBucket, secondaryBucket, tertiaryBucket});
  }
};
