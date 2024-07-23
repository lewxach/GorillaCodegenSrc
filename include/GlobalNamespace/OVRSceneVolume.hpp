// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IOVRSceneComponent
#include "GlobalNamespace/IOVRSceneComponent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRSceneAnchor
  class OVRSceneAnchor;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRSceneVolume
  class OVRSceneVolume;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSceneVolume);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneVolume*, "", "OVRSceneVolume");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: OVRSceneVolume
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class OVRSceneVolume : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IOVRSceneComponent*/ {
    public:
    public:
    // private System.Single <Width>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    float Width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <Height>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    float Height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <Depth>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float Depth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 <Offset>k__BackingField
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 Offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // System.Boolean _scaleChildren
    // Size: 0x1
    // Offset: 0x38
    bool scaleChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _offsetChildren
    // Size: 0x1
    // Offset: 0x39
    bool offsetChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: offsetChildren and: sceneAnchor
    char __padding5[0x6] = {};
    // private OVRSceneAnchor _sceneAnchor
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::OVRSceneAnchor* sceneAnchor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSceneAnchor*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IOVRSceneComponent
    operator ::GlobalNamespace::IOVRSceneComponent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IOVRSceneComponent*>(this);
    }
    // Get instance field reference: private System.Single <Width>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$Width$k__BackingField();
    // Get instance field reference: private System.Single <Height>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$Height$k__BackingField();
    // Get instance field reference: private System.Single <Depth>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$Depth$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <Offset>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$Offset$k__BackingField();
    // Get instance field reference: System.Boolean _scaleChildren
    [[deprecated("Use field access instead!")]] bool& dyn__scaleChildren();
    // Get instance field reference: System.Boolean _offsetChildren
    [[deprecated("Use field access instead!")]] bool& dyn__offsetChildren();
    // Get instance field reference: private OVRSceneAnchor _sceneAnchor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSceneAnchor*& dyn__sceneAnchor();
    // public System.Single get_Width()
    // Offset: 0x49271A8
    float get_Width();
    // private System.Void set_Width(System.Single value)
    // Offset: 0x49271B0
    void set_Width(float value);
    // public System.Single get_Height()
    // Offset: 0x49271B8
    float get_Height();
    // private System.Void set_Height(System.Single value)
    // Offset: 0x49271C0
    void set_Height(float value);
    // public System.Single get_Depth()
    // Offset: 0x49271C8
    float get_Depth();
    // private System.Void set_Depth(System.Single value)
    // Offset: 0x49271D0
    void set_Depth(float value);
    // public UnityEngine.Vector3 get_Dimensions()
    // Offset: 0x49271D8
    ::UnityEngine::Vector3 get_Dimensions();
    // public UnityEngine.Vector3 get_Offset()
    // Offset: 0x49271E4
    ::UnityEngine::Vector3 get_Offset();
    // private System.Void set_Offset(UnityEngine.Vector3 value)
    // Offset: 0x49271F0
    void set_Offset(::UnityEngine::Vector3 value);
    // public System.Boolean get_ScaleChildren()
    // Offset: 0x49271FC
    bool get_ScaleChildren();
    // public System.Void set_ScaleChildren(System.Boolean value)
    // Offset: 0x4927204
    void set_ScaleChildren(bool value);
    // public System.Boolean get_OffsetChildren()
    // Offset: 0x4927318
    bool get_OffsetChildren();
    // public System.Void set_OffsetChildren(System.Boolean value)
    // Offset: 0x4927320
    void set_OffsetChildren(bool value);
    // private System.Void Awake()
    // Offset: 0x4927434
    void Awake();
    // private System.Void IOVRSceneComponent.Initialize()
    // Offset: 0x492751C
    void IOVRSceneComponent_Initialize();
    // private System.Void SetChildScale()
    // Offset: 0x4927238
    void SetChildScale();
    // private System.Void SetChildOffset()
    // Offset: 0x4927354
    void SetChildOffset();
    // System.Void UpdateTransform()
    // Offset: 0x492037C
    void UpdateTransform();
    // public System.Void .ctor()
    // Offset: 0x4927520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSceneVolume* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSceneVolume::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSceneVolume*, creationType>()));
    }
  }; // OVRSceneVolume
  #pragma pack(pop)
  static check_size<sizeof(OVRSceneVolume), 64 + sizeof(::GlobalNamespace::OVRSceneAnchor*)> __GlobalNamespace_OVRSceneVolumeSizeCheck;
  static_assert(sizeof(OVRSceneVolume) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::get_Width
// Il2CppName: get_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::get_Width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "get_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::set_Width
// Il2CppName: set_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolume::*)(float)>(&GlobalNamespace::OVRSceneVolume::set_Width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "set_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::get_Height
// Il2CppName: get_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::get_Height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "get_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::set_Height
// Il2CppName: set_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolume::*)(float)>(&GlobalNamespace::OVRSceneVolume::set_Height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "set_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::get_Depth
// Il2CppName: get_Depth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::get_Depth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "get_Depth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::set_Depth
// Il2CppName: set_Depth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolume::*)(float)>(&GlobalNamespace::OVRSceneVolume::set_Depth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "set_Depth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::get_Dimensions
// Il2CppName: get_Dimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::get_Dimensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "get_Dimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::get_Offset
// Il2CppName: get_Offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::get_Offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "get_Offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::set_Offset
// Il2CppName: set_Offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolume::*)(::UnityEngine::Vector3)>(&GlobalNamespace::OVRSceneVolume::set_Offset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "set_Offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::get_ScaleChildren
// Il2CppName: get_ScaleChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::get_ScaleChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "get_ScaleChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::set_ScaleChildren
// Il2CppName: set_ScaleChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolume::*)(bool)>(&GlobalNamespace::OVRSceneVolume::set_ScaleChildren)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "set_ScaleChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::get_OffsetChildren
// Il2CppName: get_OffsetChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::get_OffsetChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "get_OffsetChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::set_OffsetChildren
// Il2CppName: set_OffsetChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolume::*)(bool)>(&GlobalNamespace::OVRSceneVolume::set_OffsetChildren)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "set_OffsetChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::IOVRSceneComponent_Initialize
// Il2CppName: IOVRSceneComponent.Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::IOVRSceneComponent_Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "IOVRSceneComponent.Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::SetChildScale
// Il2CppName: SetChildScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::SetChildScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "SetChildScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::SetChildOffset
// Il2CppName: SetChildOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::SetChildOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "SetChildOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::UpdateTransform
// Il2CppName: UpdateTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneVolume::*)()>(&GlobalNamespace::OVRSceneVolume::UpdateTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneVolume*), "UpdateTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneVolume::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!