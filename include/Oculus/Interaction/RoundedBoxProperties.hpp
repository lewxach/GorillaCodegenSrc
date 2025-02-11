// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: MaterialPropertyBlockEditor
  class MaterialPropertyBlockEditor;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: RoundedBoxProperties
  class RoundedBoxProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::RoundedBoxProperties);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::RoundedBoxProperties*, "Oculus.Interaction", "RoundedBoxProperties");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.RoundedBoxProperties
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class RoundedBoxProperties : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Oculus.Interaction.MaterialPropertyBlockEditor _editor
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::MaterialPropertyBlockEditor* editor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::MaterialPropertyBlockEditor*) == 0x8);
    // private System.Single _width
    // Size: 0x4
    // Offset: 0x28
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _height
    // Size: 0x4
    // Offset: 0x2C
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _borderColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color borderColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _radiusTopLeft
    // Size: 0x4
    // Offset: 0x50
    float radiusTopLeft;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _radiusTopRight
    // Size: 0x4
    // Offset: 0x54
    float radiusTopRight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _radiusBottomLeft
    // Size: 0x4
    // Offset: 0x58
    float radiusBottomLeft;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _radiusBottomRight
    // Size: 0x4
    // Offset: 0x5C
    float radiusBottomRight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _borderInnerRadius
    // Size: 0x4
    // Offset: 0x60
    float borderInnerRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _borderOuterRadius
    // Size: 0x4
    // Offset: 0x64
    float borderOuterRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Int32 _colorShaderID
    // Size: 0x4
    // Offset: 0x68
    int colorShaderID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _borderColorShaderID
    // Size: 0x4
    // Offset: 0x6C
    int borderColorShaderID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _radiiShaderID
    // Size: 0x4
    // Offset: 0x70
    int radiiShaderID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _dimensionsShaderID
    // Size: 0x4
    // Offset: 0x74
    int dimensionsShaderID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private Oculus.Interaction.MaterialPropertyBlockEditor _editor
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::MaterialPropertyBlockEditor*& dyn__editor();
    // Get instance field reference: private System.Single _width
    [[deprecated("Use field access instead!")]] float& dyn__width();
    // Get instance field reference: private System.Single _height
    [[deprecated("Use field access instead!")]] float& dyn__height();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private UnityEngine.Color _borderColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__borderColor();
    // Get instance field reference: private System.Single _radiusTopLeft
    [[deprecated("Use field access instead!")]] float& dyn__radiusTopLeft();
    // Get instance field reference: private System.Single _radiusTopRight
    [[deprecated("Use field access instead!")]] float& dyn__radiusTopRight();
    // Get instance field reference: private System.Single _radiusBottomLeft
    [[deprecated("Use field access instead!")]] float& dyn__radiusBottomLeft();
    // Get instance field reference: private System.Single _radiusBottomRight
    [[deprecated("Use field access instead!")]] float& dyn__radiusBottomRight();
    // Get instance field reference: private System.Single _borderInnerRadius
    [[deprecated("Use field access instead!")]] float& dyn__borderInnerRadius();
    // Get instance field reference: private System.Single _borderOuterRadius
    [[deprecated("Use field access instead!")]] float& dyn__borderOuterRadius();
    // Get instance field reference: private readonly System.Int32 _colorShaderID
    [[deprecated("Use field access instead!")]] int& dyn__colorShaderID();
    // Get instance field reference: private readonly System.Int32 _borderColorShaderID
    [[deprecated("Use field access instead!")]] int& dyn__borderColorShaderID();
    // Get instance field reference: private readonly System.Int32 _radiiShaderID
    [[deprecated("Use field access instead!")]] int& dyn__radiiShaderID();
    // Get instance field reference: private readonly System.Int32 _dimensionsShaderID
    [[deprecated("Use field access instead!")]] int& dyn__dimensionsShaderID();
    // public System.Single get_Width()
    // Offset: 0x47C9EEC
    float get_Width();
    // public System.Void set_Width(System.Single value)
    // Offset: 0x47C9EF4
    void set_Width(float value);
    // public System.Single get_Height()
    // Offset: 0x47C9F40
    float get_Height();
    // public System.Void set_Height(System.Single value)
    // Offset: 0x47C9F48
    void set_Height(float value);
    // public UnityEngine.Color get_Color()
    // Offset: 0x47C9F50
    ::UnityEngine::Color get_Color();
    // public System.Void set_Color(UnityEngine.Color value)
    // Offset: 0x47C9F5C
    void set_Color(::UnityEngine::Color value);
    // public UnityEngine.Color get_BorderColor()
    // Offset: 0x47C9F68
    ::UnityEngine::Color get_BorderColor();
    // public System.Void set_BorderColor(UnityEngine.Color value)
    // Offset: 0x47C9F74
    void set_BorderColor(::UnityEngine::Color value);
    // public System.Single get_RadiusTopLeft()
    // Offset: 0x47C9F80
    float get_RadiusTopLeft();
    // public System.Void set_RadiusTopLeft(System.Single value)
    // Offset: 0x47C9F88
    void set_RadiusTopLeft(float value);
    // public System.Single get_RadiusTopRight()
    // Offset: 0x47C9F90
    float get_RadiusTopRight();
    // public System.Void set_RadiusTopRight(System.Single value)
    // Offset: 0x47C9F98
    void set_RadiusTopRight(float value);
    // public System.Single get_RadiusBottomLeft()
    // Offset: 0x47C9FA0
    float get_RadiusBottomLeft();
    // public System.Void set_RadiusBottomLeft(System.Single value)
    // Offset: 0x47C9FA8
    void set_RadiusBottomLeft(float value);
    // public System.Single get_RadiusBottomRight()
    // Offset: 0x47C9FB0
    float get_RadiusBottomRight();
    // public System.Void set_RadiusBottomRight(System.Single value)
    // Offset: 0x47C9FB8
    void set_RadiusBottomRight(float value);
    // public System.Single get_BorderInnerRadius()
    // Offset: 0x47C9FC0
    float get_BorderInnerRadius();
    // public System.Void set_BorderInnerRadius(System.Single value)
    // Offset: 0x47C9FC8
    void set_BorderInnerRadius(float value);
    // public System.Single get_BorderOuterRadius()
    // Offset: 0x47C9FD0
    float get_BorderOuterRadius();
    // public System.Void set_BorderOuterRadius(System.Single value)
    // Offset: 0x47C9FD8
    void set_BorderOuterRadius(float value);
    // protected System.Void Awake()
    // Offset: 0x47C9FE0
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47CA194
    void Start();
    // private System.Void UpdateSize()
    // Offset: 0x47C9EFC
    void UpdateSize();
    // private System.Void UpdateMaterialPropertyBlock()
    // Offset: 0x47C9FF8
    void UpdateMaterialPropertyBlock();
    // protected System.Void OnValidate()
    // Offset: 0x47CA1AC
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x47CA1C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RoundedBoxProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::RoundedBoxProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RoundedBoxProperties*, creationType>()));
    }
  }; // Oculus.Interaction.RoundedBoxProperties
  #pragma pack(pop)
  static check_size<sizeof(RoundedBoxProperties), 116 + sizeof(int)> __Oculus_Interaction_RoundedBoxPropertiesSizeCheck;
  static_assert(sizeof(RoundedBoxProperties) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::get_Width
// Il2CppName: get_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::get_Width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "get_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::set_Width
// Il2CppName: set_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)(float)>(&Oculus::Interaction::RoundedBoxProperties::set_Width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "set_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::get_Height
// Il2CppName: get_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::get_Height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "get_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::set_Height
// Il2CppName: set_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)(float)>(&Oculus::Interaction::RoundedBoxProperties::set_Height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "set_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::get_Color
// Il2CppName: get_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::get_Color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "get_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::set_Color
// Il2CppName: set_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)(::UnityEngine::Color)>(&Oculus::Interaction::RoundedBoxProperties::set_Color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "set_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::get_BorderColor
// Il2CppName: get_BorderColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::get_BorderColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "get_BorderColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::set_BorderColor
// Il2CppName: set_BorderColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)(::UnityEngine::Color)>(&Oculus::Interaction::RoundedBoxProperties::set_BorderColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "set_BorderColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::get_RadiusTopLeft
// Il2CppName: get_RadiusTopLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::get_RadiusTopLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "get_RadiusTopLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::set_RadiusTopLeft
// Il2CppName: set_RadiusTopLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)(float)>(&Oculus::Interaction::RoundedBoxProperties::set_RadiusTopLeft)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "set_RadiusTopLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::get_RadiusTopRight
// Il2CppName: get_RadiusTopRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::get_RadiusTopRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "get_RadiusTopRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::set_RadiusTopRight
// Il2CppName: set_RadiusTopRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)(float)>(&Oculus::Interaction::RoundedBoxProperties::set_RadiusTopRight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "set_RadiusTopRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::get_RadiusBottomLeft
// Il2CppName: get_RadiusBottomLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::get_RadiusBottomLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "get_RadiusBottomLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::set_RadiusBottomLeft
// Il2CppName: set_RadiusBottomLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)(float)>(&Oculus::Interaction::RoundedBoxProperties::set_RadiusBottomLeft)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "set_RadiusBottomLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::get_RadiusBottomRight
// Il2CppName: get_RadiusBottomRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::get_RadiusBottomRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "get_RadiusBottomRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::set_RadiusBottomRight
// Il2CppName: set_RadiusBottomRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)(float)>(&Oculus::Interaction::RoundedBoxProperties::set_RadiusBottomRight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "set_RadiusBottomRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::get_BorderInnerRadius
// Il2CppName: get_BorderInnerRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::get_BorderInnerRadius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "get_BorderInnerRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::set_BorderInnerRadius
// Il2CppName: set_BorderInnerRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)(float)>(&Oculus::Interaction::RoundedBoxProperties::set_BorderInnerRadius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "set_BorderInnerRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::get_BorderOuterRadius
// Il2CppName: get_BorderOuterRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::get_BorderOuterRadius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "get_BorderOuterRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::set_BorderOuterRadius
// Il2CppName: set_BorderOuterRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)(float)>(&Oculus::Interaction::RoundedBoxProperties::set_BorderOuterRadius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "set_BorderOuterRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::UpdateSize
// Il2CppName: UpdateSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::UpdateSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "UpdateSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::UpdateMaterialPropertyBlock
// Il2CppName: UpdateMaterialPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::UpdateMaterialPropertyBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "UpdateMaterialPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::RoundedBoxProperties::*)()>(&Oculus::Interaction::RoundedBoxProperties::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::RoundedBoxProperties*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::RoundedBoxProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
