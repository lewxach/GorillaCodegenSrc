// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Ionic.Zlib
namespace Ionic::Zlib {
  // Forward declaring type: InternalInflateConstants
  class InternalInflateConstants;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Ionic::Zlib::InternalInflateConstants);
DEFINE_IL2CPP_ARG_TYPE(::Ionic::Zlib::InternalInflateConstants*, "Ionic.Zlib", "InternalInflateConstants");
// Type namespace: Ionic.Zlib
namespace Ionic::Zlib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Ionic.Zlib.InternalInflateConstants
  // [TokenAttribute] Offset: FFFFFFFF
  class InternalInflateConstants : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.Int32[] InflateMask
    static ::ArrayW<int> _get_InflateMask();
    // Set static field: static readonly System.Int32[] InflateMask
    static void _set_InflateMask(::ArrayW<int> value);
    // static private System.Void .cctor()
    // Offset: 0x4AB4274
    static void _cctor();
  }; // Ionic.Zlib.InternalInflateConstants
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Ionic::Zlib::InternalInflateConstants::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Ionic::Zlib::InternalInflateConstants::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ionic::Zlib::InternalInflateConstants*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
