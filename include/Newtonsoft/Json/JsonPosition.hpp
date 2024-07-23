// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Newtonsoft.Json.JsonContainerType
#include "Newtonsoft/Json/JsonContainerType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StringWriter
  class StringWriter;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: IJsonLineInfo
  class IJsonLineInfo;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonPosition
  struct JsonPosition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonPosition, "Newtonsoft.Json", "JsonPosition");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x11
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Newtonsoft.Json.JsonPosition
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  struct JsonPosition/*, public ::System::ValueType*/ {
    public:
    public:
    // Newtonsoft.Json.JsonContainerType Type
    // Size: 0x4
    // Offset: 0x0
    ::Newtonsoft::Json::JsonContainerType Type;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::JsonContainerType) == 0x4);
    // System.Int32 Position
    // Size: 0x4
    // Offset: 0x4
    int Position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.String PropertyName
    // Size: 0x8
    // Offset: 0x8
    ::StringW PropertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Boolean HasIndex
    // Size: 0x1
    // Offset: 0x10
    bool HasIndex;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: JsonPosition
    constexpr JsonPosition(::Newtonsoft::Json::JsonContainerType Type_ = {}, int Position_ = {}, ::StringW PropertyName_ = {}, bool HasIndex_ = {}) noexcept : Type{Type_}, Position{Position_}, PropertyName{PropertyName_}, HasIndex{HasIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly System.Char[] SpecialCharacters
    static ::ArrayW<::Il2CppChar> _get_SpecialCharacters();
    // Set static field: static private readonly System.Char[] SpecialCharacters
    static void _set_SpecialCharacters(::ArrayW<::Il2CppChar> value);
    // Get instance field reference: Newtonsoft.Json.JsonContainerType Type
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::JsonContainerType& dyn_Type();
    // Get instance field reference: System.Int32 Position
    [[deprecated("Use field access instead!")]] int& dyn_Position();
    // Get instance field reference: System.String PropertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PropertyName();
    // Get instance field reference: System.Boolean HasIndex
    [[deprecated("Use field access instead!")]] bool& dyn_HasIndex();
    // public System.Void .ctor(Newtonsoft.Json.JsonContainerType type)
    // Offset: 0x46EA550
    JsonPosition(::Newtonsoft::Json::JsonContainerType type);
    // System.Int32 CalculateLength()
    // Offset: 0x46EA5E4
    int CalculateLength();
    // System.Void WriteTo(System.Text.StringBuilder sb, ref System.IO.StringWriter writer, ref System.Char[] buffer)
    // Offset: 0x46EA678
    void WriteTo(::System::Text::StringBuilder* sb, ByRef<::System::IO::StringWriter*> writer, ByRef<::ArrayW<::Il2CppChar>> buffer);
    // static System.Boolean TypeHasIndex(Newtonsoft.Json.JsonContainerType type)
    // Offset: 0x46EA5D4
    static bool TypeHasIndex(::Newtonsoft::Json::JsonContainerType type);
    // static System.String BuildPath(System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> positions, System.Nullable`1<Newtonsoft.Json.JsonPosition> currentPosition)
    // Offset: 0x46EA894
    static ::StringW BuildPath(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* positions, ::System::Nullable_1<::Newtonsoft::Json::JsonPosition> currentPosition);
    // static System.String FormatMessage(Newtonsoft.Json.IJsonLineInfo lineInfo, System.String path, System.String message)
    // Offset: 0x46EAB38
    static ::StringW FormatMessage(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::StringW path, ::StringW message);
    // static private System.Void .cctor()
    // Offset: 0x46EAE64
    static void _cctor();
  }; // Newtonsoft.Json.JsonPosition
  #pragma pack(pop)
  static check_size<sizeof(JsonPosition), 16 + sizeof(bool)> __Newtonsoft_Json_JsonPositionSizeCheck;
  static_assert(sizeof(JsonPosition) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonPosition::JsonPosition
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::JsonPosition::CalculateLength
// Il2CppName: CalculateLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::JsonPosition::*)()>(&Newtonsoft::Json::JsonPosition::CalculateLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonPosition), "CalculateLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonPosition::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonPosition::*)(::System::Text::StringBuilder*, ByRef<::System::IO::StringWriter*>, ByRef<::ArrayW<::Il2CppChar>>)>(&Newtonsoft::Json::JsonPosition::WriteTo)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.IO", "StringWriter")->this_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonPosition), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, writer, buffer});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonPosition::TypeHasIndex
// Il2CppName: TypeHasIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonContainerType)>(&Newtonsoft::Json::JsonPosition::TypeHasIndex)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonContainerType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonPosition), "TypeHasIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonPosition::BuildPath
// Il2CppName: BuildPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*, ::System::Nullable_1<::Newtonsoft::Json::JsonPosition>)>(&Newtonsoft::Json::JsonPosition::BuildPath)> {
  static const MethodInfo* get() {
    static auto* positions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonPosition")})->byval_arg;
    static auto* currentPosition = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonPosition")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonPosition), "BuildPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, currentPosition});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonPosition::FormatMessage
// Il2CppName: FormatMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Newtonsoft::Json::IJsonLineInfo*, ::StringW, ::StringW)>(&Newtonsoft::Json::JsonPosition::FormatMessage)> {
  static const MethodInfo* get() {
    static auto* lineInfo = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "IJsonLineInfo")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonPosition), "FormatMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineInfo, path, message});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonPosition::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::JsonPosition::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonPosition), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};