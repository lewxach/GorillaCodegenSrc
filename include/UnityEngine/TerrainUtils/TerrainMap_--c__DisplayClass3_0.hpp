// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TerrainUtils.TerrainMap
#include "UnityEngine/TerrainUtils/TerrainMap.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TerrainUtils::TerrainMap::$$c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainMap::$$c__DisplayClass3_0*, "UnityEngine.TerrainUtils", "TerrainMap/<>c__DisplayClass3_0");
// Type namespace: UnityEngine.TerrainUtils
namespace UnityEngine::TerrainUtils {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TerrainMap::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 groupID
    // Size: 0x4
    // Offset: 0x10
    int groupID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return groupID;
    }
    // Get instance field reference: public System.Int32 groupID
    [[deprecated("Use field access instead!")]] int& dyn_groupID();
    // public System.Void .ctor()
    // Offset: 0x553F680
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainMap::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TerrainUtils::TerrainMap::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainMap::$$c__DisplayClass3_0*, creationType>()));
    }
    // System.Boolean <CreateFromPlacement>b__0(UnityEngine.Terrain x)
    // Offset: 0x5540620
    bool $CreateFromPlacement$b__0(::UnityEngine::Terrain* x);
  }; // UnityEngine.TerrainUtils.TerrainMap/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(TerrainMap::$$c__DisplayClass3_0), 16 + sizeof(int)> __UnityEngine_TerrainUtils_TerrainMap_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(TerrainMap::$$c__DisplayClass3_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TerrainUtils::TerrainMap::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TerrainUtils::TerrainMap::$$c__DisplayClass3_0::$CreateFromPlacement$b__0
// Il2CppName: <CreateFromPlacement>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TerrainUtils::TerrainMap::$$c__DisplayClass3_0::*)(::UnityEngine::Terrain*)>(&UnityEngine::TerrainUtils::TerrainMap::$$c__DisplayClass3_0::$CreateFromPlacement$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainUtils::TerrainMap::$$c__DisplayClass3_0*), "<CreateFromPlacement>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
