// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Forward declaring type: ScalableImage
  struct ScalableImage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::ScalableImage, "UnityEngine.UIElements.StyleSheets", "ScalableImage");
// Type namespace: UnityEngine.UIElements.StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.StyleSheets.ScalableImage
  // [TokenAttribute] Offset: FFFFFFFF
  struct ScalableImage/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Texture2D normalImage
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Texture2D* normalImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // public UnityEngine.Texture2D highResolutionImage
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Texture2D* highResolutionImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    public:
    // Creating value type constructor for type: ScalableImage
    constexpr ScalableImage(::UnityEngine::Texture2D* normalImage_ = {}, ::UnityEngine::Texture2D* highResolutionImage_ = {}) noexcept : normalImage{normalImage_}, highResolutionImage{highResolutionImage_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Texture2D normalImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_normalImage();
    // Get instance field reference: public UnityEngine.Texture2D highResolutionImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_highResolutionImage();
    // public override System.String ToString()
    // Offset: 0x55F9CB8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.UIElements.StyleSheets.ScalableImage
  #pragma pack(pop)
  static check_size<sizeof(ScalableImage), 8 + sizeof(::UnityEngine::Texture2D*)> __UnityEngine_UIElements_StyleSheets_ScalableImageSizeCheck;
  static_assert(sizeof(ScalableImage) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::ScalableImage::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UIElements::StyleSheets::ScalableImage::*)()>(&UnityEngine::UIElements::StyleSheets::ScalableImage::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::ScalableImage), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
