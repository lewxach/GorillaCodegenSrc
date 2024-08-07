// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: BinUtils
  class BinUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::BinUtils);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BinUtils*, "Fusion", "BinUtils");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.BinUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class BinUtils : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.String[] _byteHexValue
    static ::ArrayW<::StringW> _get__byteHexValue();
    // Set static field: static private readonly System.String[] _byteHexValue
    static void _set__byteHexValue(::ArrayW<::StringW> value);
    // static public System.String BytesToHex(System.Byte* buffer, System.Int32 length, System.Int32 columns, System.String rowSeparator, System.String columnSeparator)
    // Offset: 0x2AD327C
    static ::StringW BytesToHex(uint8_t* buffer, int length, int columns, ::StringW rowSeparator, ::StringW columnSeparator);
    // static private System.Void .cctor()
    // Offset: 0x2AD33A8
    static void _cctor();
  }; // Fusion.BinUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::BinUtils::BytesToHex
// Il2CppName: BytesToHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint8_t*, int, int, ::StringW, ::StringW)>(&Fusion::BinUtils::BytesToHex)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* columns = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rowSeparator = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* columnSeparator = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BinUtils*), "BytesToHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, length, columns, rowSeparator, columnSeparator});
  }
};
// Writing MetadataGetter for method: Fusion::BinUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::BinUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BinUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
