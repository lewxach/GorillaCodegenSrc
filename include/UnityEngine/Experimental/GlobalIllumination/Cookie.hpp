// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: Cookie
  struct Cookie;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::Cookie, "UnityEngine.Experimental.GlobalIllumination", "Cookie");
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.Cookie
  // [TokenAttribute] Offset: FFFFFFFF
  struct Cookie/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 instanceID
    // Size: 0x4
    // Offset: 0x0
    int instanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x4
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector2 sizes
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Vector2 sizes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Creating value type constructor for type: Cookie
    constexpr Cookie(int instanceID_ = {}, float scale_ = {}, ::UnityEngine::Vector2 sizes_ = {}) noexcept : instanceID{instanceID_}, scale{scale_}, sizes{sizes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 instanceID
    [[deprecated("Use field access instead!")]] int& dyn_instanceID();
    // Get instance field reference: public System.Single scale
    [[deprecated("Use field access instead!")]] float& dyn_scale();
    // Get instance field reference: public UnityEngine.Vector2 sizes
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_sizes();
    // static public UnityEngine.Experimental.GlobalIllumination.Cookie Defaults()
    // Offset: 0x54F482C
    static ::UnityEngine::Experimental::GlobalIllumination::Cookie Defaults();
  }; // UnityEngine.Experimental.GlobalIllumination.Cookie
  #pragma pack(pop)
  static check_size<sizeof(Cookie), 8 + sizeof(::UnityEngine::Vector2)> __UnityEngine_Experimental_GlobalIllumination_CookieSizeCheck;
  static_assert(sizeof(Cookie) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::Cookie::Defaults
// Il2CppName: Defaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::GlobalIllumination::Cookie (*)()>(&UnityEngine::Experimental::GlobalIllumination::Cookie::Defaults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::Cookie), "Defaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
