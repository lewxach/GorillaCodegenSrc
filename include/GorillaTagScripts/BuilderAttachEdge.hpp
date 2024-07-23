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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Forward declaring type: BuilderAttachEdge
  class BuilderAttachEdge;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTagScripts::BuilderAttachEdge);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTagScripts::BuilderAttachEdge*, "GorillaTagScripts", "BuilderAttachEdge");
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTagScripts.BuilderAttachEdge
  // [TokenAttribute] Offset: FFFFFFFF
  class BuilderAttachEdge : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Transform center
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* center;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x28
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Transform center
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_center();
    // Get instance field reference: public System.Single length
    [[deprecated("Use field access instead!")]] float& dyn_length();
    // private System.Void Awake()
    // Offset: 0x27F0D48
    void Awake();
    // protected System.Void OnDrawGizmosSelected()
    // Offset: 0x27F0DE4
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x27F0F90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuilderAttachEdge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTagScripts::BuilderAttachEdge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuilderAttachEdge*, creationType>()));
    }
  }; // GorillaTagScripts.BuilderAttachEdge
  #pragma pack(pop)
  static check_size<sizeof(BuilderAttachEdge), 40 + sizeof(float)> __GorillaTagScripts_BuilderAttachEdgeSizeCheck;
  static_assert(sizeof(BuilderAttachEdge) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTagScripts::BuilderAttachEdge::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::BuilderAttachEdge::*)()>(&GorillaTagScripts::BuilderAttachEdge::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::BuilderAttachEdge*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::BuilderAttachEdge::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::BuilderAttachEdge::*)()>(&GorillaTagScripts::BuilderAttachEdge::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::BuilderAttachEdge*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::BuilderAttachEdge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!