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
  // Forward declaring type: DotGridProperties
  class DotGridProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::DotGridProperties);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::DotGridProperties*, "Oculus.Interaction", "DotGridProperties");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.DotGridProperties
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class DotGridProperties : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Oculus.Interaction.MaterialPropertyBlockEditor _materialPropertyBlockEditor
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::MaterialPropertyBlockEditor* materialPropertyBlockEditor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::MaterialPropertyBlockEditor*) == 0x8);
    // private System.Int32 _columns
    // Size: 0x4
    // Offset: 0x28
    int columns;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _rows
    // Size: 0x4
    // Offset: 0x2C
    int rows;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x30
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _change
    // Size: 0x1
    // Offset: 0x44
    bool change;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: change and: colorShaderID
    char __padding5[0x3] = {};
    // private readonly System.Int32 _colorShaderID
    // Size: 0x4
    // Offset: 0x48
    int colorShaderID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _dimensionsShaderID
    // Size: 0x4
    // Offset: 0x4C
    int dimensionsShaderID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private Oculus.Interaction.MaterialPropertyBlockEditor _materialPropertyBlockEditor
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::MaterialPropertyBlockEditor*& dyn__materialPropertyBlockEditor();
    // Get instance field reference: private System.Int32 _columns
    [[deprecated("Use field access instead!")]] int& dyn__columns();
    // Get instance field reference: private System.Int32 _rows
    [[deprecated("Use field access instead!")]] int& dyn__rows();
    // Get instance field reference: private System.Single _radius
    [[deprecated("Use field access instead!")]] float& dyn__radius();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Boolean _change
    [[deprecated("Use field access instead!")]] bool& dyn__change();
    // Get instance field reference: private readonly System.Int32 _colorShaderID
    [[deprecated("Use field access instead!")]] int& dyn__colorShaderID();
    // Get instance field reference: private readonly System.Int32 _dimensionsShaderID
    [[deprecated("Use field access instead!")]] int& dyn__dimensionsShaderID();
    // public System.Int32 get_Columns()
    // Offset: 0x47C9B60
    int get_Columns();
    // public System.Void set_Columns(System.Int32 value)
    // Offset: 0x47C9B68
    void set_Columns(int value);
    // public System.Int32 get_Rows()
    // Offset: 0x47C9B70
    int get_Rows();
    // public System.Void set_Rows(System.Int32 value)
    // Offset: 0x47C9B78
    void set_Rows(int value);
    // public System.Single get_Radius()
    // Offset: 0x47C9B80
    float get_Radius();
    // public System.Void set_Radius(System.Single value)
    // Offset: 0x47C9B88
    void set_Radius(float value);
    // public UnityEngine.Color get_Color()
    // Offset: 0x47C9B90
    ::UnityEngine::Color get_Color();
    // public System.Void set_Color(UnityEngine.Color value)
    // Offset: 0x47C9B9C
    void set_Color(::UnityEngine::Color value);
    // protected System.Void Start()
    // Offset: 0x47C9BA8
    void Start();
    // protected System.Void Update()
    // Offset: 0x47C9BB4
    void Update();
    // protected System.Void OnValidate()
    // Offset: 0x47C9C84
    void OnValidate();
    // public System.Void InjectAllDotGridProperties(Oculus.Interaction.MaterialPropertyBlockEditor editor)
    // Offset: 0x47C9C90
    void InjectAllDotGridProperties(::Oculus::Interaction::MaterialPropertyBlockEditor* editor);
    // public System.Void InjectMaterialPropertyBlockEditor(Oculus.Interaction.MaterialPropertyBlockEditor editor)
    // Offset: 0x47C9C98
    void InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor* editor);
    // public System.Void .ctor()
    // Offset: 0x47C9CA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DotGridProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::DotGridProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DotGridProperties*, creationType>()));
    }
  }; // Oculus.Interaction.DotGridProperties
  #pragma pack(pop)
  static check_size<sizeof(DotGridProperties), 76 + sizeof(int)> __Oculus_Interaction_DotGridPropertiesSizeCheck;
  static_assert(sizeof(DotGridProperties) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::get_Columns
// Il2CppName: get_Columns
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::DotGridProperties::*)()>(&Oculus::Interaction::DotGridProperties::get_Columns)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "get_Columns", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::set_Columns
// Il2CppName: set_Columns
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DotGridProperties::*)(int)>(&Oculus::Interaction::DotGridProperties::set_Columns)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "set_Columns", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::get_Rows
// Il2CppName: get_Rows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::DotGridProperties::*)()>(&Oculus::Interaction::DotGridProperties::get_Rows)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "get_Rows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::set_Rows
// Il2CppName: set_Rows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DotGridProperties::*)(int)>(&Oculus::Interaction::DotGridProperties::set_Rows)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "set_Rows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::get_Radius
// Il2CppName: get_Radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::DotGridProperties::*)()>(&Oculus::Interaction::DotGridProperties::get_Radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "get_Radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::set_Radius
// Il2CppName: set_Radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DotGridProperties::*)(float)>(&Oculus::Interaction::DotGridProperties::set_Radius)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "set_Radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::get_Color
// Il2CppName: get_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::DotGridProperties::*)()>(&Oculus::Interaction::DotGridProperties::get_Color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "get_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::set_Color
// Il2CppName: set_Color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DotGridProperties::*)(::UnityEngine::Color)>(&Oculus::Interaction::DotGridProperties::set_Color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "set_Color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DotGridProperties::*)()>(&Oculus::Interaction::DotGridProperties::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DotGridProperties::*)()>(&Oculus::Interaction::DotGridProperties::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DotGridProperties::*)()>(&Oculus::Interaction::DotGridProperties::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::InjectAllDotGridProperties
// Il2CppName: InjectAllDotGridProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DotGridProperties::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&Oculus::Interaction::DotGridProperties::InjectAllDotGridProperties)> {
  static const MethodInfo* get() {
    static auto* editor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "MaterialPropertyBlockEditor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "InjectAllDotGridProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{editor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::InjectMaterialPropertyBlockEditor
// Il2CppName: InjectMaterialPropertyBlockEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DotGridProperties::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&Oculus::Interaction::DotGridProperties::InjectMaterialPropertyBlockEditor)> {
  static const MethodInfo* get() {
    static auto* editor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "MaterialPropertyBlockEditor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DotGridProperties*), "InjectMaterialPropertyBlockEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{editor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DotGridProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!