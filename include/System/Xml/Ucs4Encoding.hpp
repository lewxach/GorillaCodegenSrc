// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: Ucs4Decoder
  class Ucs4Decoder;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Decoder
  class Decoder;
  // Forward declaring type: Encoder
  class Encoder;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: Ucs4Encoding
  class Ucs4Encoding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Ucs4Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Encoding*, "System.Xml", "Ucs4Encoding");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Ucs4Encoding
  // [TokenAttribute] Offset: FFFFFFFF
  class Ucs4Encoding : public ::System::Text::Encoding {
    public:
    public:
    // System.Xml.Ucs4Decoder ucs4Decoder
    // Size: 0x8
    // Offset: 0x38
    ::System::Xml::Ucs4Decoder* ucs4Decoder;
    // Field size check
    static_assert(sizeof(::System::Xml::Ucs4Decoder*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Xml::Ucs4Decoder*
    constexpr operator ::System::Xml::Ucs4Decoder*() const noexcept {
      return ucs4Decoder;
    }
    // Get instance field reference: System.Xml.Ucs4Decoder ucs4Decoder
    [[deprecated("Use field access instead!")]] ::System::Xml::Ucs4Decoder*& dyn_ucs4Decoder();
    // static System.Text.Encoding get_UCS4_Littleendian()
    // Offset: 0x4E39CE0
    static ::System::Text::Encoding* get_UCS4_Littleendian();
    // static System.Text.Encoding get_UCS4_Bigendian()
    // Offset: 0x4E39D98
    static ::System::Text::Encoding* get_UCS4_Bigendian();
    // static System.Text.Encoding get_UCS4_2143()
    // Offset: 0x4E39E50
    static ::System::Text::Encoding* get_UCS4_2143();
    // static System.Text.Encoding get_UCS4_3412()
    // Offset: 0x4E39F08
    static ::System::Text::Encoding* get_UCS4_3412();
    // public System.Void .ctor()
    // Offset: 0x4E39FC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ucs4Encoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Ucs4Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ucs4Encoding*, creationType>()));
    }
    // public override System.String get_WebName()
    // Offset: 0x4E39BEC
    // Implemented from: System.Text.Encoding
    // Base method: System.String Encoding::get_WebName()
    ::StringW get_WebName();
    // public override System.Text.Decoder GetDecoder()
    // Offset: 0x4E39BF8
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Decoder Encoding::GetDecoder()
    ::System::Text::Decoder* GetDecoder();
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x4E39C00
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    int GetByteCount(::ArrayW<::Il2CppChar> chars, int index, int count);
    // public override System.Byte[] GetBytes(System.String s)
    // Offset: 0x4E39C60
    // Implemented from: System.Text.Encoding
    // Base method: System.Byte[] Encoding::GetBytes(System.String s)
    ::ArrayW<uint8_t> GetBytes(::StringW s);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x4E39C68
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::ArrayW<::Il2CppChar> chars, int charIndex, int charCount, ::ArrayW<uint8_t> bytes, int byteIndex);
    // public override System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0x4E39C70
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxByteCount(System.Int32 charCount)
    int GetMaxByteCount(int charCount);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x4E39C78
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::ArrayW<uint8_t> bytes, int index, int count);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x4E39C98
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex);
    // public override System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0x4E39CB8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxCharCount(System.Int32 byteCount)
    int GetMaxCharCount(int byteCount);
    // public override System.Int32 get_CodePage()
    // Offset: 0x4E39CD0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::get_CodePage()
    int get_CodePage();
    // public override System.Text.Encoder GetEncoder()
    // Offset: 0x4E39CD8
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Encoder Encoding::GetEncoder()
    ::System::Text::Encoder* GetEncoder();
  }; // System.Xml.Ucs4Encoding
  #pragma pack(pop)
  static check_size<sizeof(Ucs4Encoding), 56 + sizeof(::System::Xml::Ucs4Decoder*)> __System_Xml_Ucs4EncodingSizeCheck;
  static_assert(sizeof(Ucs4Encoding) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::get_UCS4_Littleendian
// Il2CppName: get_UCS4_Littleendian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&System::Xml::Ucs4Encoding::get_UCS4_Littleendian)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "get_UCS4_Littleendian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::get_UCS4_Bigendian
// Il2CppName: get_UCS4_Bigendian
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&System::Xml::Ucs4Encoding::get_UCS4_Bigendian)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "get_UCS4_Bigendian", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::get_UCS4_2143
// Il2CppName: get_UCS4_2143
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&System::Xml::Ucs4Encoding::get_UCS4_2143)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "get_UCS4_2143", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::get_UCS4_3412
// Il2CppName: get_UCS4_3412
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&System::Xml::Ucs4Encoding::get_UCS4_3412)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "get_UCS4_3412", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::get_WebName
// Il2CppName: get_WebName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Ucs4Encoding::*)()>(&System::Xml::Ucs4Encoding::get_WebName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "get_WebName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::GetDecoder
// Il2CppName: GetDecoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Decoder* (System::Xml::Ucs4Encoding::*)()>(&System::Xml::Ucs4Encoding::GetDecoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "GetDecoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Ucs4Encoding::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::Ucs4Encoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Xml::Ucs4Encoding::*)(::StringW)>(&System::Xml::Ucs4Encoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Ucs4Encoding::*)(::ArrayW<::Il2CppChar>, int, int, ::ArrayW<uint8_t>, int)>(&System::Xml::Ucs4Encoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charIndex, charCount, bytes, byteIndex});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::GetMaxByteCount
// Il2CppName: GetMaxByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Ucs4Encoding::*)(int)>(&System::Xml::Ucs4Encoding::GetMaxByteCount)> {
  static const MethodInfo* get() {
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "GetMaxByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCount});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Ucs4Encoding::*)(::ArrayW<uint8_t>, int, int)>(&System::Xml::Ucs4Encoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Ucs4Encoding::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int)>(&System::Xml::Ucs4Encoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::GetMaxCharCount
// Il2CppName: GetMaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Ucs4Encoding::*)(int)>(&System::Xml::Ucs4Encoding::GetMaxCharCount)> {
  static const MethodInfo* get() {
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "GetMaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteCount});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::get_CodePage
// Il2CppName: get_CodePage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Ucs4Encoding::*)()>(&System::Xml::Ucs4Encoding::get_CodePage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "get_CodePage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding::GetEncoder
// Il2CppName: GetEncoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoder* (System::Xml::Ucs4Encoding::*)()>(&System::Xml::Ucs4Encoding::GetEncoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding*), "GetEncoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};