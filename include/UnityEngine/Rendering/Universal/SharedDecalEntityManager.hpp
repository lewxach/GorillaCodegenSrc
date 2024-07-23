// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DecalEntityManager
  class DecalEntityManager;
  // Forward declaring type: DecalProjector
  class DecalProjector;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: SharedDecalEntityManager
  class SharedDecalEntityManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::SharedDecalEntityManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SharedDecalEntityManager*, "UnityEngine.Rendering.Universal", "SharedDecalEntityManager");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.SharedDecalEntityManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SharedDecalEntityManager : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private UnityEngine.Rendering.Universal.DecalEntityManager m_DecalEntityManager
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::DecalEntityManager* m_DecalEntityManager;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalEntityManager*) == 0x8);
    // private System.Int32 m_ReferenceCounter
    // Size: 0x4
    // Offset: 0x18
    int m_ReferenceCounter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private UnityEngine.Rendering.Universal.DecalEntityManager m_DecalEntityManager
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DecalEntityManager*& dyn_m_DecalEntityManager();
    // Get instance field reference: private System.Int32 m_ReferenceCounter
    [[deprecated("Use field access instead!")]] int& dyn_m_ReferenceCounter();
    // public UnityEngine.Rendering.Universal.DecalEntityManager Get()
    // Offset: 0x52D2FF8
    ::UnityEngine::Rendering::Universal::DecalEntityManager* Get();
    // public System.Void Release(UnityEngine.Rendering.Universal.DecalEntityManager decalEntityManager)
    // Offset: 0x52D3298
    void Release(::UnityEngine::Rendering::Universal::DecalEntityManager* decalEntityManager);
    // public System.Void Dispose()
    // Offset: 0x52D32B4
    void Dispose();
    // private System.Void OnDecalAdd(UnityEngine.Rendering.Universal.DecalProjector decalProjector)
    // Offset: 0x52D3474
    void OnDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);
    // private System.Void OnDecalRemove(UnityEngine.Rendering.Universal.DecalProjector decalProjector)
    // Offset: 0x52D34C8
    void OnDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);
    // private System.Void OnDecalPropertyChange(UnityEngine.Rendering.Universal.DecalProjector decalProjector)
    // Offset: 0x52D34EC
    void OnDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);
    // private System.Void OnAllDecalPropertyChange()
    // Offset: 0x52D3548
    void OnAllDecalPropertyChange();
    // private System.Void OnDecalMaterialChange(UnityEngine.Rendering.Universal.DecalProjector decalProjector)
    // Offset: 0x52D3564
    void OnDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);
    // public System.Void .ctor()
    // Offset: 0x52D358C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SharedDecalEntityManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::SharedDecalEntityManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SharedDecalEntityManager*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.SharedDecalEntityManager
  #pragma pack(pop)
  static check_size<sizeof(SharedDecalEntityManager), 24 + sizeof(int)> __UnityEngine_Rendering_Universal_SharedDecalEntityManagerSizeCheck;
  static_assert(sizeof(SharedDecalEntityManager) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SharedDecalEntityManager::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DecalEntityManager* (UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)()>(&UnityEngine::Rendering::Universal::SharedDecalEntityManager::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SharedDecalEntityManager*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SharedDecalEntityManager::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalEntityManager*)>(&UnityEngine::Rendering::Universal::SharedDecalEntityManager::Release)> {
  static const MethodInfo* get() {
    static auto* decalEntityManager = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalEntityManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SharedDecalEntityManager*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decalEntityManager});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SharedDecalEntityManager::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)()>(&UnityEngine::Rendering::Universal::SharedDecalEntityManager::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SharedDecalEntityManager*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalAdd
// Il2CppName: OnDecalAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalProjector*)>(&UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalAdd)> {
  static const MethodInfo* get() {
    static auto* decalProjector = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalProjector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SharedDecalEntityManager*), "OnDecalAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decalProjector});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalRemove
// Il2CppName: OnDecalRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalProjector*)>(&UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalRemove)> {
  static const MethodInfo* get() {
    static auto* decalProjector = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalProjector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SharedDecalEntityManager*), "OnDecalRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decalProjector});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalPropertyChange
// Il2CppName: OnDecalPropertyChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalProjector*)>(&UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalPropertyChange)> {
  static const MethodInfo* get() {
    static auto* decalProjector = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalProjector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SharedDecalEntityManager*), "OnDecalPropertyChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decalProjector});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnAllDecalPropertyChange
// Il2CppName: OnAllDecalPropertyChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)()>(&UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnAllDecalPropertyChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SharedDecalEntityManager*), "OnAllDecalPropertyChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalMaterialChange
// Il2CppName: OnDecalMaterialChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::SharedDecalEntityManager::*)(::UnityEngine::Rendering::Universal::DecalProjector*)>(&UnityEngine::Rendering::Universal::SharedDecalEntityManager::OnDecalMaterialChange)> {
  static const MethodInfo* get() {
    static auto* decalProjector = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalProjector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::SharedDecalEntityManager*), "OnDecalMaterialChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decalProjector});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::SharedDecalEntityManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!