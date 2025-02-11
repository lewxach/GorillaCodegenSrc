// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TerrainCallbacks
#include "UnityEngine/TerrainCallbacks.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
  // Forward declaring type: RectInt
  struct RectInt;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TerrainCallbacks::HeightmapChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainCallbacks::HeightmapChangedCallback*, "UnityEngine", "TerrainCallbacks/HeightmapChangedCallback");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TerrainCallbacks/HeightmapChangedCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class TerrainCallbacks::HeightmapChangedCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x553E900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerrainCallbacks::HeightmapChangedCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TerrainCallbacks::HeightmapChangedCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerrainCallbacks::HeightmapChangedCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Terrain terrain, UnityEngine.RectInt heightRegion, System.Boolean synched)
    // Offset: 0x553E9B4
    void Invoke(::UnityEngine::Terrain* terrain, ::UnityEngine::RectInt heightRegion, bool synched);
  }; // UnityEngine.TerrainCallbacks/HeightmapChangedCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TerrainCallbacks::HeightmapChangedCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TerrainCallbacks::HeightmapChangedCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainCallbacks::HeightmapChangedCallback::*)(::UnityEngine::Terrain*, ::UnityEngine::RectInt, bool)>(&UnityEngine::TerrainCallbacks::HeightmapChangedCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* terrain = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* heightRegion = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectInt")->byval_arg;
    static auto* synched = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainCallbacks::HeightmapChangedCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terrain, heightRegion, synched});
  }
};
