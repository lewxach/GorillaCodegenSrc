// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.ShaderUtils
#include "UnityEngine/Rendering/Universal/ShaderUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShaderUtils::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderUtils::$$c__DisplayClass2_0*, "UnityEngine.Rendering.Universal", "ShaderUtils/<>c__DisplayClass2_0");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.ShaderUtils/<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ShaderUtils::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String path
    // Size: 0x8
    // Offset: 0x10
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return path;
    }
    // Get instance field reference: public System.String path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_path();
    // public System.Void .ctor()
    // Offset: 0x52DCAF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderUtils::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::ShaderUtils::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderUtils::$$c__DisplayClass2_0*, creationType>()));
    }
    // System.Boolean <GetEnumFromPath>b__0(System.String m)
    // Offset: 0x52DCE40
    bool $GetEnumFromPath$b__0(::StringW m);
  }; // UnityEngine.Rendering.Universal.ShaderUtils/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(ShaderUtils::$$c__DisplayClass2_0), 16 + sizeof(::StringW)> __UnityEngine_Rendering_Universal_ShaderUtils_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(ShaderUtils::$$c__DisplayClass2_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShaderUtils::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ShaderUtils::$$c__DisplayClass2_0::$GetEnumFromPath$b__0
// Il2CppName: <GetEnumFromPath>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::ShaderUtils::$$c__DisplayClass2_0::*)(::StringW)>(&UnityEngine::Rendering::Universal::ShaderUtils::$$c__DisplayClass2_0::$GetEnumFromPath$b__0)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ShaderUtils::$$c__DisplayClass2_0*), "<GetEnumFromPath>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};