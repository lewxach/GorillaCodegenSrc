// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VFXEventAttribute
  class VFXEventAttribute;
}
// Completed forward declares
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Forward declaring type: VFXSpawnerState
  class VFXSpawnerState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::VFX::VFXSpawnerState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXSpawnerState*, "UnityEngine.VFX", "VFXSpawnerState");
// Type namespace: UnityEngine.VFX
namespace UnityEngine::VFX {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.VFX.VFXSpawnerState
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  class VFXSpawnerState : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Boolean m_Owner
    // Size: 0x1
    // Offset: 0x18
    bool m_Owner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Owner and: m_WrapEventAttribute
    char __padding1[0x7] = {};
    // private UnityEngine.VFX.VFXEventAttribute m_WrapEventAttribute
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::VFX::VFXEventAttribute* m_WrapEventAttribute;
    // Field size check
    static_assert(sizeof(::UnityEngine::VFX::VFXEventAttribute*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // Get instance field reference: private System.Boolean m_Owner
    [[deprecated("Use field access instead!")]] bool& dyn_m_Owner();
    // Get instance field reference: private UnityEngine.VFX.VFXEventAttribute m_WrapEventAttribute
    [[deprecated("Use field access instead!")]] ::UnityEngine::VFX::VFXEventAttribute*& dyn_m_WrapEventAttribute();
    // System.Void .ctor(System.IntPtr ptr, System.Boolean owner)
    // Offset: 0x5710BAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VFXSpawnerState* New_ctor(::System::IntPtr ptr, bool owner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::VFX::VFXSpawnerState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VFXSpawnerState*, creationType>(ptr, owner)));
    }
    // static UnityEngine.VFX.VFXSpawnerState CreateSpawnerStateWrapper()
    // Offset: 0x5710BDC
    static ::UnityEngine::VFX::VFXSpawnerState* CreateSpawnerStateWrapper();
    // private System.Void PrepareWrapper()
    // Offset: 0x5710C40
    void PrepareWrapper();
    // System.Void SetWrapValue(System.IntPtr ptrToSpawnerState, System.IntPtr ptrToEventAttribute)
    // Offset: 0x5710CD8
    void SetWrapValue(::System::IntPtr ptrToSpawnerState, ::System::IntPtr ptrToEventAttribute);
    // private System.Void Release()
    // Offset: 0x5710D68
    void Release();
    // public System.Void Dispose()
    // Offset: 0x5710EA8
    void Dispose();
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x5710DD8
    static void Internal_Destroy(::System::IntPtr ptr);
    // protected override System.Void Finalize()
    // Offset: 0x5710E14
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.VFX.VFXSpawnerState
  #pragma pack(pop)
  static check_size<sizeof(VFXSpawnerState), 32 + sizeof(::UnityEngine::VFX::VFXEventAttribute*)> __UnityEngine_VFX_VFXSpawnerStateSizeCheck;
  static_assert(sizeof(VFXSpawnerState) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerState::CreateSpawnerStateWrapper
// Il2CppName: CreateSpawnerStateWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::VFX::VFXSpawnerState* (*)()>(&UnityEngine::VFX::VFXSpawnerState::CreateSpawnerStateWrapper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXSpawnerState*), "CreateSpawnerStateWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerState::PrepareWrapper
// Il2CppName: PrepareWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::VFX::VFXSpawnerState::*)()>(&UnityEngine::VFX::VFXSpawnerState::PrepareWrapper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXSpawnerState*), "PrepareWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerState::SetWrapValue
// Il2CppName: SetWrapValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::VFX::VFXSpawnerState::*)(::System::IntPtr, ::System::IntPtr)>(&UnityEngine::VFX::VFXSpawnerState::SetWrapValue)> {
  static const MethodInfo* get() {
    static auto* ptrToSpawnerState = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* ptrToEventAttribute = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXSpawnerState*), "SetWrapValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptrToSpawnerState, ptrToEventAttribute});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerState::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::VFX::VFXSpawnerState::*)()>(&UnityEngine::VFX::VFXSpawnerState::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXSpawnerState*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerState::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::VFX::VFXSpawnerState::*)()>(&UnityEngine::VFX::VFXSpawnerState::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXSpawnerState*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerState::Internal_Destroy
// Il2CppName: Internal_Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::VFX::VFXSpawnerState::Internal_Destroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXSpawnerState*), "Internal_Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::VFX::VFXSpawnerState::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::VFX::VFXSpawnerState::*)()>(&UnityEngine::VFX::VFXSpawnerState::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::VFX::VFXSpawnerState*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
