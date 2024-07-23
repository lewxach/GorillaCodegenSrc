// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ShaderIds
  class ShaderIds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ShaderIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderIds*, "", "ShaderIds");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ShaderIds
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderIds : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int32 _MainTex
    static int _get__MainTex();
    // Set static field: static public readonly System.Int32 _MainTex
    static void _set__MainTex(int value);
    // Get static field: static public readonly System.Int32 _EmissionColor
    static int _get__EmissionColor();
    // Set static field: static public readonly System.Int32 _EmissionColor
    static void _set__EmissionColor(int value);
    // Get static field: static public readonly System.Int32 _Color
    static int _get__Color();
    // Set static field: static public readonly System.Int32 _Color
    static void _set__Color(int value);
    // static private System.Void .cctor()
    // Offset: 0x27502D0
    static void _cctor();
  }; // ShaderIds
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShaderIds::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ShaderIds::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderIds*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};