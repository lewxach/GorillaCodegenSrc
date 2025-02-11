// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.IPathModifier
#include "Pathfinding/IPathModifier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Seeker
  class Seeker;
  // Forward declaring type: Path
  class Path;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: PathModifier
  class PathModifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::PathModifier);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::PathModifier*, "Pathfinding", "PathModifier");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.PathModifier
  // [TokenAttribute] Offset: FFFFFFFF
  class PathModifier : public ::Il2CppObject/*, public ::Pathfinding::IPathModifier*/ {
    public:
    public:
    // public Pathfinding.Seeker seeker
    // Size: 0x8
    // Offset: 0x10
    ::Pathfinding::Seeker* seeker;
    // Field size check
    static_assert(sizeof(::Pathfinding::Seeker*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Pathfinding::IPathModifier
    operator ::Pathfinding::IPathModifier() noexcept {
      return *reinterpret_cast<::Pathfinding::IPathModifier*>(this);
    }
    // Creating conversion operator: operator ::Pathfinding::Seeker*
    constexpr operator ::Pathfinding::Seeker*() const noexcept {
      return seeker;
    }
    // Get instance field reference: public Pathfinding.Seeker seeker
    [[deprecated("Use field access instead!")]] ::Pathfinding::Seeker*& dyn_seeker();
    // public System.Int32 get_Order()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Order();
    // public System.Void Awake(Pathfinding.Seeker seeker)
    // Offset: 0x29F2A14
    void Awake(::Pathfinding::Seeker* seeker);
    // public System.Void OnDestroy(Pathfinding.Seeker seeker)
    // Offset: 0x29F2AB8
    void OnDestroy(::Pathfinding::Seeker* seeker);
    // public System.Void PreProcess(Pathfinding.Path path)
    // Offset: 0x29F2B4C
    void PreProcess(::Pathfinding::Path* path);
    // public System.Void Apply(Pathfinding.Path path)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Apply(::Pathfinding::Path* path);
    // protected System.Void .ctor()
    // Offset: 0x29F2B50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathModifier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::PathModifier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathModifier*, creationType>()));
    }
  }; // Pathfinding.PathModifier
  #pragma pack(pop)
  static check_size<sizeof(PathModifier), 16 + sizeof(::Pathfinding::Seeker*)> __Pathfinding_PathModifierSizeCheck;
  static_assert(sizeof(PathModifier) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::PathModifier::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::PathModifier::*)()>(&Pathfinding::PathModifier::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathModifier*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::PathModifier::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PathModifier::*)(::Pathfinding::Seeker*)>(&Pathfinding::PathModifier::Awake)> {
  static const MethodInfo* get() {
    static auto* seeker = &::il2cpp_utils::GetClassFromName("Pathfinding", "Seeker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathModifier*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seeker});
  }
};
// Writing MetadataGetter for method: Pathfinding::PathModifier::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PathModifier::*)(::Pathfinding::Seeker*)>(&Pathfinding::PathModifier::OnDestroy)> {
  static const MethodInfo* get() {
    static auto* seeker = &::il2cpp_utils::GetClassFromName("Pathfinding", "Seeker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathModifier*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seeker});
  }
};
// Writing MetadataGetter for method: Pathfinding::PathModifier::PreProcess
// Il2CppName: PreProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PathModifier::*)(::Pathfinding::Path*)>(&Pathfinding::PathModifier::PreProcess)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathModifier*), "PreProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Pathfinding::PathModifier::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PathModifier::*)(::Pathfinding::Path*)>(&Pathfinding::PathModifier::Apply)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Pathfinding", "Path")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathModifier*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Pathfinding::PathModifier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
