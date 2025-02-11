// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TextureRegistry
  class TextureRegistry;
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: TextureId
  struct TextureId;
  // Forward declaring type: IPanel
  class IPanel;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: RectInt
  struct RectInt;
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: AtlasBase
  class AtlasBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::AtlasBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AtlasBase*, "UnityEngine.UIElements", "AtlasBase");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.AtlasBase
  // [TokenAttribute] Offset: FFFFFFFF
  class AtlasBase : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.UIElements.TextureRegistry textureRegistry
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::TextureRegistry* textureRegistry;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TextureRegistry*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::UIElements::TextureRegistry*
    constexpr operator ::UnityEngine::UIElements::TextureRegistry*() const noexcept {
      return textureRegistry;
    }
    // Get instance field reference: UnityEngine.UIElements.TextureRegistry textureRegistry
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TextureRegistry*& dyn_textureRegistry();
    // public System.Boolean TryGetAtlas(UnityEngine.UIElements.VisualElement ctx, UnityEngine.Texture2D src, out UnityEngine.UIElements.TextureId atlas, out UnityEngine.RectInt atlasRect)
    // Offset: 0x55918E4
    bool TryGetAtlas(::UnityEngine::UIElements::VisualElement* ctx, ::UnityEngine::Texture2D* src, ByRef<::UnityEngine::UIElements::TextureId> atlas, ByRef<::UnityEngine::RectInt> atlasRect);
    // public System.Void ReturnAtlas(UnityEngine.UIElements.VisualElement ctx, UnityEngine.Texture2D src, UnityEngine.UIElements.TextureId atlas)
    // Offset: 0x5591958
    void ReturnAtlas(::UnityEngine::UIElements::VisualElement* ctx, ::UnityEngine::Texture2D* src, ::UnityEngine::UIElements::TextureId atlas);
    // public System.Void Reset()
    // Offset: 0x559195C
    void Reset();
    // protected System.Void OnAssignedToPanel(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x5591960
    void OnAssignedToPanel(::UnityEngine::UIElements::IPanel* panel);
    // protected System.Void OnRemovedFromPanel(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x5591964
    void OnRemovedFromPanel(::UnityEngine::UIElements::IPanel* panel);
    // protected System.Void OnUpdateDynamicTextures(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x5591968
    void OnUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* panel);
    // System.Void InvokeAssignedToPanel(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x559196C
    void InvokeAssignedToPanel(::UnityEngine::UIElements::IPanel* panel);
    // System.Void InvokeRemovedFromPanel(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x5591978
    void InvokeRemovedFromPanel(::UnityEngine::UIElements::IPanel* panel);
    // System.Void InvokeUpdateDynamicTextures(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x5591984
    void InvokeUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* panel);
    // static protected System.Void RepaintTexturedElements(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x5591990
    static void RepaintTexturedElements(::UnityEngine::UIElements::IPanel* panel);
    // protected System.Void SetDynamicTexture(UnityEngine.UIElements.TextureId id, UnityEngine.Texture texture)
    // Offset: 0x5591A7C
    void SetDynamicTexture(::UnityEngine::UIElements::TextureId id, ::UnityEngine::Texture* texture);
    // protected System.Void .ctor()
    // Offset: 0x5591A9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AtlasBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::AtlasBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AtlasBase*, creationType>()));
    }
  }; // UnityEngine.UIElements.AtlasBase
  #pragma pack(pop)
  static check_size<sizeof(AtlasBase), 16 + sizeof(::UnityEngine::UIElements::TextureRegistry*)> __UnityEngine_UIElements_AtlasBaseSizeCheck;
  static_assert(sizeof(AtlasBase) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::TryGetAtlas
// Il2CppName: TryGetAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::AtlasBase::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture2D*, ByRef<::UnityEngine::UIElements::TextureId>, ByRef<::UnityEngine::RectInt>)>(&UnityEngine::UIElements::AtlasBase::TryGetAtlas)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* atlas = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TextureId")->this_arg;
    static auto* atlasRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectInt")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AtlasBase*), "TryGetAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx, src, atlas, atlasRect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::ReturnAtlas
// Il2CppName: ReturnAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AtlasBase::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture2D*, ::UnityEngine::UIElements::TextureId)>(&UnityEngine::UIElements::AtlasBase::ReturnAtlas)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* atlas = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TextureId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AtlasBase*), "ReturnAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx, src, atlas});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AtlasBase::*)()>(&UnityEngine::UIElements::AtlasBase::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AtlasBase*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::OnAssignedToPanel
// Il2CppName: OnAssignedToPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AtlasBase::*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::AtlasBase::OnAssignedToPanel)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AtlasBase*), "OnAssignedToPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::OnRemovedFromPanel
// Il2CppName: OnRemovedFromPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AtlasBase::*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::AtlasBase::OnRemovedFromPanel)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AtlasBase*), "OnRemovedFromPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::OnUpdateDynamicTextures
// Il2CppName: OnUpdateDynamicTextures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AtlasBase::*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::AtlasBase::OnUpdateDynamicTextures)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AtlasBase*), "OnUpdateDynamicTextures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::InvokeAssignedToPanel
// Il2CppName: InvokeAssignedToPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AtlasBase::*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::AtlasBase::InvokeAssignedToPanel)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AtlasBase*), "InvokeAssignedToPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::InvokeRemovedFromPanel
// Il2CppName: InvokeRemovedFromPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AtlasBase::*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::AtlasBase::InvokeRemovedFromPanel)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AtlasBase*), "InvokeRemovedFromPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::InvokeUpdateDynamicTextures
// Il2CppName: InvokeUpdateDynamicTextures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AtlasBase::*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::AtlasBase::InvokeUpdateDynamicTextures)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AtlasBase*), "InvokeUpdateDynamicTextures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::RepaintTexturedElements
// Il2CppName: RepaintTexturedElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::AtlasBase::RepaintTexturedElements)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AtlasBase*), "RepaintTexturedElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::SetDynamicTexture
// Il2CppName: SetDynamicTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::AtlasBase::*)(::UnityEngine::UIElements::TextureId, ::UnityEngine::Texture*)>(&UnityEngine::UIElements::AtlasBase::SetDynamicTexture)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "TextureId")->byval_arg;
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::AtlasBase*), "SetDynamicTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, texture});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::AtlasBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
