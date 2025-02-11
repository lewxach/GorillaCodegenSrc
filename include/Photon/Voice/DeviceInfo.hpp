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
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: DeviceInfo
  struct DeviceInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::DeviceInfo, "Photon.Voice", "DeviceInfo");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x19
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Photon.Voice.DeviceInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct DeviceInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Boolean <IsDefault>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool IsDefault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsDefault and: IDInt
    char __padding0[0x3] = {};
    // private System.Int32 <IDInt>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    int IDInt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String <IDString>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::StringW IDString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean useStringID
    // Size: 0x1
    // Offset: 0x18
    bool useStringID;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: DeviceInfo
    constexpr DeviceInfo(bool IsDefault_ = {}, int IDInt_ = {}, ::StringW IDString_ = {}, ::StringW Name_ = {}, bool useStringID_ = {}) noexcept : IsDefault{IsDefault_}, IDInt{IDInt_}, IDString{IDString_}, Name{Name_}, useStringID{useStringID_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly Photon.Voice.DeviceInfo Default
    static ::Photon::Voice::DeviceInfo _get_Default();
    // Set static field: static public readonly Photon.Voice.DeviceInfo Default
    static void _set_Default(::Photon::Voice::DeviceInfo value);
    // Get instance field reference: private System.Boolean <IsDefault>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsDefault$k__BackingField();
    // Get instance field reference: private System.Int32 <IDInt>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$IDInt$k__BackingField();
    // Get instance field reference: private System.String <IDString>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$IDString$k__BackingField();
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.Boolean useStringID
    [[deprecated("Use field access instead!")]] bool& dyn_useStringID();
    // private System.Void .ctor(System.Boolean isDefault, System.Int32 idInt, System.String idString, System.String name)
    // Offset: 0x4A6258C
    DeviceInfo(bool isDefault, int idInt, ::StringW idString, ::StringW name);
    // public System.Void .ctor(System.Int32 id, System.String name)
    // Offset: 0x4A625D4
    DeviceInfo(int id, ::StringW name);
    // public System.Void .ctor(System.String id, System.String name)
    // Offset: 0x4A62650
    DeviceInfo(::StringW id, ::StringW name);
    // public System.Void .ctor(System.String name)
    // Offset: 0x4A62694
    DeviceInfo(::StringW name);
    // public System.Boolean get_IsDefault()
    // Offset: 0x4A626D8
    bool get_IsDefault();
    // private System.Void set_IsDefault(System.Boolean value)
    // Offset: 0x4A626E0
    void set_IsDefault(bool value);
    // public System.Int32 get_IDInt()
    // Offset: 0x4A626EC
    int get_IDInt();
    // private System.Void set_IDInt(System.Int32 value)
    // Offset: 0x4A626F4
    void set_IDInt(int value);
    // public System.String get_IDString()
    // Offset: 0x4A626FC
    ::StringW get_IDString();
    // private System.Void set_IDString(System.String value)
    // Offset: 0x4A62704
    void set_IDString(::StringW value);
    // public System.String get_Name()
    // Offset: 0x4A6270C
    ::StringW get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x4A62714
    void set_Name(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x4A62A74
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4A62794
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4A62888
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x4A628EC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Photon.Voice.DeviceInfo
  #pragma pack(pop)
  static check_size<sizeof(DeviceInfo), 24 + sizeof(bool)> __Photon_Voice_DeviceInfoSizeCheck;
  static_assert(sizeof(DeviceInfo) == 0x19);
  // static public System.Boolean op_Equality(Photon.Voice.DeviceInfo d1, Photon.Voice.DeviceInfo d2)
  // Offset: 0x4A6271C
  bool operator ==(const ::Photon::Voice::DeviceInfo& d1, const ::Photon::Voice::DeviceInfo& d2);
  // static public System.Boolean op_Inequality(Photon.Voice.DeviceInfo d1, Photon.Voice.DeviceInfo d2)
  // Offset: 0x4A6280C
  bool operator !=(const ::Photon::Voice::DeviceInfo& d1, const ::Photon::Voice::DeviceInfo& d2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::DeviceInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::DeviceInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::DeviceInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::DeviceInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::get_IsDefault
// Il2CppName: get_IsDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::DeviceInfo::*)()>(&Photon::Voice::DeviceInfo::get_IsDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), "get_IsDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::set_IsDefault
// Il2CppName: set_IsDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::DeviceInfo::*)(bool)>(&Photon::Voice::DeviceInfo::set_IsDefault)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), "set_IsDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::get_IDInt
// Il2CppName: get_IDInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::DeviceInfo::*)()>(&Photon::Voice::DeviceInfo::get_IDInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), "get_IDInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::set_IDInt
// Il2CppName: set_IDInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::DeviceInfo::*)(int)>(&Photon::Voice::DeviceInfo::set_IDInt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), "set_IDInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::get_IDString
// Il2CppName: get_IDString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::DeviceInfo::*)()>(&Photon::Voice::DeviceInfo::get_IDString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), "get_IDString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::set_IDString
// Il2CppName: set_IDString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::DeviceInfo::*)(::StringW)>(&Photon::Voice::DeviceInfo::set_IDString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), "set_IDString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::DeviceInfo::*)()>(&Photon::Voice::DeviceInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::DeviceInfo::*)(::StringW)>(&Photon::Voice::DeviceInfo::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Photon::Voice::DeviceInfo::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::DeviceInfo::*)(::Il2CppObject*)>(&Photon::Voice::DeviceInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::DeviceInfo::*)()>(&Photon::Voice::DeviceInfo::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::DeviceInfo::*)()>(&Photon::Voice::DeviceInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::DeviceInfo), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Photon::Voice::DeviceInfo::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
