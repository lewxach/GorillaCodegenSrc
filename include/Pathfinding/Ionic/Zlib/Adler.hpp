// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: Adler
  class Adler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zlib::Adler);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::Adler*, "Pathfinding.Ionic.Zlib", "Adler");
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zlib.Adler
  // [TokenAttribute] Offset: FFFFFFFF
  class Adler : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.UInt32 BASE
    static uint _get_BASE();
    // Set static field: static private readonly System.UInt32 BASE
    static void _set_BASE(uint value);
    // Get static field: static private readonly System.Int32 NMAX
    static int _get_NMAX();
    // Set static field: static private readonly System.Int32 NMAX
    static void _set_NMAX(int value);
    // static private System.Void .cctor()
    // Offset: 0x49BEFB0
    static void _cctor();
    // static public System.UInt32 Adler32(System.UInt32 adler, System.Byte[] buf, System.Int32 index, System.Int32 len)
    // Offset: 0x49BF000
    static uint Adler32(uint adler, ::ArrayW<uint8_t> buf, int index, int len);
  }; // Pathfinding.Ionic.Zlib.Adler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::Adler::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::Ionic::Zlib::Adler::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::Adler*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::Adler::Adler32
// Il2CppName: Adler32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, ::ArrayW<uint8_t>, int, int)>(&Pathfinding::Ionic::Zlib::Adler::Adler32)> {
  static const MethodInfo* get() {
    static auto* adler = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::Adler*), "Adler32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{adler, buf, index, len});
  }
};
