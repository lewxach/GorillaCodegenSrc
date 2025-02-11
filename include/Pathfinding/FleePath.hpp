// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.RandomPath
#include "Pathfinding/RandomPath.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: OnPathDelegate
  class OnPathDelegate;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: FleePath
  class FleePath;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::FleePath);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::FleePath*, "Pathfinding", "FleePath");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x178
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.FleePath
  // [TokenAttribute] Offset: FFFFFFFF
  class FleePath : public ::Pathfinding::RandomPath {
    public:
    // static public Pathfinding.FleePath Construct(UnityEngine.Vector3 start, UnityEngine.Vector3 avoid, System.Int32 searchLength, Pathfinding.OnPathDelegate callback)
    // Offset: 0x29FF9A4
    static ::Pathfinding::FleePath* Construct(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 avoid, int searchLength, ::Pathfinding::OnPathDelegate* callback);
    // protected System.Void Setup(UnityEngine.Vector3 start, UnityEngine.Vector3 avoid, System.Int32 searchLength, Pathfinding.OnPathDelegate callback)
    // Offset: 0x29FFA80
    void Setup(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 avoid, int searchLength, ::Pathfinding::OnPathDelegate* callback);
    // public System.Void .ctor()
    // Offset: 0x29FF900
    // Implemented from: Pathfinding.RandomPath
    // Base method: System.Void RandomPath::.ctor()
    // Base method: System.Void ABPath::.ctor()
    // Base method: System.Void Path::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FleePath* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::FleePath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FleePath*, creationType>()));
    }
  }; // Pathfinding.FleePath
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::FleePath::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::FleePath* (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int, ::Pathfinding::OnPathDelegate*)>(&Pathfinding::FleePath::Construct)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* avoid = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* searchLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("Pathfinding", "OnPathDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::FleePath*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, avoid, searchLength, callback});
  }
};
// Writing MetadataGetter for method: Pathfinding::FleePath::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::FleePath::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int, ::Pathfinding::OnPathDelegate*)>(&Pathfinding::FleePath::Setup)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* avoid = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* searchLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("Pathfinding", "OnPathDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::FleePath*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, avoid, searchLength, callback});
  }
};
// Writing MetadataGetter for method: Pathfinding::FleePath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
