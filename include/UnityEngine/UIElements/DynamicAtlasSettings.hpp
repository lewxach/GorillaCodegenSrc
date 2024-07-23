// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.DynamicAtlasFilters
#include "UnityEngine/UIElements/DynamicAtlasFilters.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: DynamicAtlasCustomFilter
  class DynamicAtlasCustomFilter;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: DynamicAtlasSettings
  class DynamicAtlasSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::DynamicAtlasSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DynamicAtlasSettings*, "UnityEngine.UIElements", "DynamicAtlasSettings");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.DynamicAtlasSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class DynamicAtlasSettings : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 m_MinAtlasSize
    // Size: 0x4
    // Offset: 0x10
    int m_MinAtlasSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_MaxAtlasSize
    // Size: 0x4
    // Offset: 0x14
    int m_MaxAtlasSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_MaxSubTextureSize
    // Size: 0x4
    // Offset: 0x18
    int m_MaxSubTextureSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.UIElements.DynamicAtlasFilters m_ActiveFilters
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::UIElements::DynamicAtlasFilters m_ActiveFilters;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::DynamicAtlasFilters) == 0x4);
    // private UnityEngine.UIElements.DynamicAtlasCustomFilter m_CustomFilter
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UIElements::DynamicAtlasCustomFilter* m_CustomFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::DynamicAtlasCustomFilter*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 m_MinAtlasSize
    [[deprecated("Use field access instead!")]] int& dyn_m_MinAtlasSize();
    // Get instance field reference: private System.Int32 m_MaxAtlasSize
    [[deprecated("Use field access instead!")]] int& dyn_m_MaxAtlasSize();
    // Get instance field reference: private System.Int32 m_MaxSubTextureSize
    [[deprecated("Use field access instead!")]] int& dyn_m_MaxSubTextureSize();
    // Get instance field reference: private UnityEngine.UIElements.DynamicAtlasFilters m_ActiveFilters
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::DynamicAtlasFilters& dyn_m_ActiveFilters();
    // Get instance field reference: private UnityEngine.UIElements.DynamicAtlasCustomFilter m_CustomFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::DynamicAtlasCustomFilter*& dyn_m_CustomFilter();
    // public System.Int32 get_minAtlasSize()
    // Offset: 0x565AD78
    int get_minAtlasSize();
    // public System.Void set_minAtlasSize(System.Int32 value)
    // Offset: 0x565AD80
    void set_minAtlasSize(int value);
    // public System.Int32 get_maxAtlasSize()
    // Offset: 0x565AD88
    int get_maxAtlasSize();
    // public System.Void set_maxAtlasSize(System.Int32 value)
    // Offset: 0x565AD90
    void set_maxAtlasSize(int value);
    // public System.Int32 get_maxSubTextureSize()
    // Offset: 0x565AD98
    int get_maxSubTextureSize();
    // public System.Void set_maxSubTextureSize(System.Int32 value)
    // Offset: 0x565ADA0
    void set_maxSubTextureSize(int value);
    // public UnityEngine.UIElements.DynamicAtlasFilters get_activeFilters()
    // Offset: 0x565ADA8
    ::UnityEngine::UIElements::DynamicAtlasFilters get_activeFilters();
    // public System.Void set_activeFilters(UnityEngine.UIElements.DynamicAtlasFilters value)
    // Offset: 0x565ADB0
    void set_activeFilters(::UnityEngine::UIElements::DynamicAtlasFilters value);
    // static public UnityEngine.UIElements.DynamicAtlasFilters get_defaultFilters()
    // Offset: 0x565ADB8
    static ::UnityEngine::UIElements::DynamicAtlasFilters get_defaultFilters();
    // public UnityEngine.UIElements.DynamicAtlasCustomFilter get_customFilter()
    // Offset: 0x565ADC0
    ::UnityEngine::UIElements::DynamicAtlasCustomFilter* get_customFilter();
    // public System.Void set_customFilter(UnityEngine.UIElements.DynamicAtlasCustomFilter value)
    // Offset: 0x565ADC8
    void set_customFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter* value);
    // static public UnityEngine.UIElements.DynamicAtlasSettings get_defaults()
    // Offset: 0x565ADD0
    static ::UnityEngine::UIElements::DynamicAtlasSettings* get_defaults();
    // public System.Void .ctor()
    // Offset: 0x565AE5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicAtlasSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DynamicAtlasSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicAtlasSettings*, creationType>()));
    }
  }; // UnityEngine.UIElements.DynamicAtlasSettings
  #pragma pack(pop)
  static check_size<sizeof(DynamicAtlasSettings), 32 + sizeof(::UnityEngine::UIElements::DynamicAtlasCustomFilter*)> __UnityEngine_UIElements_DynamicAtlasSettingsSizeCheck;
  static_assert(sizeof(DynamicAtlasSettings) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::get_minAtlasSize
// Il2CppName: get_minAtlasSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::DynamicAtlasSettings::*)()>(&UnityEngine::UIElements::DynamicAtlasSettings::get_minAtlasSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "get_minAtlasSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::set_minAtlasSize
// Il2CppName: set_minAtlasSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlasSettings::*)(int)>(&UnityEngine::UIElements::DynamicAtlasSettings::set_minAtlasSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "set_minAtlasSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::get_maxAtlasSize
// Il2CppName: get_maxAtlasSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::DynamicAtlasSettings::*)()>(&UnityEngine::UIElements::DynamicAtlasSettings::get_maxAtlasSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "get_maxAtlasSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::set_maxAtlasSize
// Il2CppName: set_maxAtlasSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlasSettings::*)(int)>(&UnityEngine::UIElements::DynamicAtlasSettings::set_maxAtlasSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "set_maxAtlasSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::get_maxSubTextureSize
// Il2CppName: get_maxSubTextureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::DynamicAtlasSettings::*)()>(&UnityEngine::UIElements::DynamicAtlasSettings::get_maxSubTextureSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "get_maxSubTextureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::set_maxSubTextureSize
// Il2CppName: set_maxSubTextureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlasSettings::*)(int)>(&UnityEngine::UIElements::DynamicAtlasSettings::set_maxSubTextureSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "set_maxSubTextureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::get_activeFilters
// Il2CppName: get_activeFilters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DynamicAtlasFilters (UnityEngine::UIElements::DynamicAtlasSettings::*)()>(&UnityEngine::UIElements::DynamicAtlasSettings::get_activeFilters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "get_activeFilters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::set_activeFilters
// Il2CppName: set_activeFilters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlasSettings::*)(::UnityEngine::UIElements::DynamicAtlasFilters)>(&UnityEngine::UIElements::DynamicAtlasSettings::set_activeFilters)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "DynamicAtlasFilters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "set_activeFilters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::get_defaultFilters
// Il2CppName: get_defaultFilters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DynamicAtlasFilters (*)()>(&UnityEngine::UIElements::DynamicAtlasSettings::get_defaultFilters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "get_defaultFilters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::get_customFilter
// Il2CppName: get_customFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DynamicAtlasCustomFilter* (UnityEngine::UIElements::DynamicAtlasSettings::*)()>(&UnityEngine::UIElements::DynamicAtlasSettings::get_customFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "get_customFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::set_customFilter
// Il2CppName: set_customFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DynamicAtlasSettings::*)(::UnityEngine::UIElements::DynamicAtlasCustomFilter*)>(&UnityEngine::UIElements::DynamicAtlasSettings::set_customFilter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "DynamicAtlasCustomFilter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "set_customFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::get_defaults
// Il2CppName: get_defaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DynamicAtlasSettings* (*)()>(&UnityEngine::UIElements::DynamicAtlasSettings::get_defaults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DynamicAtlasSettings*), "get_defaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DynamicAtlasSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!