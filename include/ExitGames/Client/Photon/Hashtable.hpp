// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: DictionaryEntryEnumerator
  struct DictionaryEntryEnumerator;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: Hashtable
  class Hashtable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::Hashtable);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Hashtable*, "ExitGames.Client.Photon", "Hashtable");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // WARNING Size may be invalid!
  // Autogenerated type: ExitGames.Client.Photon.Hashtable
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class Hashtable : public ::System::Collections::Generic::Dictionary_2<::Il2CppObject*, ::Il2CppObject*> {
    public:
    // Get static field: static readonly System.Object[] boxedByte
    static ::ArrayW<::Il2CppObject*> _get_boxedByte();
    // Set static field: static readonly System.Object[] boxedByte
    static void _set_boxedByte(::ArrayW<::Il2CppObject*> value);
    // static public System.Object GetBoxedByte(System.Byte value)
    // Offset: 0x49C9494
    static ::Il2CppObject* GetBoxedByte(uint8_t value);
    // static private System.Void .cctor()
    // Offset: 0x49C9510
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x49C9630
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hashtable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Hashtable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hashtable*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 x)
    // Offset: 0x49C9678
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hashtable* New_ctor(int x) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Hashtable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hashtable*, creationType>(x)));
    }
    // public System.Object get_Item(System.Object key)
    // Offset: 0x49C96D0
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x49C9738
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Object get_Item(System.Byte key)
    // Offset: 0x49C9798
    ::Il2CppObject* get_Item(uint8_t key);
    // public System.Void set_Item(System.Byte key, System.Object value)
    // Offset: 0x49C984C
    void set_Item(uint8_t key, ::Il2CppObject* value);
    // public System.Void Add(System.Byte k, System.Object v)
    // Offset: 0x49C98F8
    void Add(uint8_t k, ::Il2CppObject* v);
    // public System.Void Remove(System.Byte k)
    // Offset: 0x49C99A4
    void Remove(uint8_t k);
    // public System.Boolean ContainsKey(System.Byte key)
    // Offset: 0x49C9A48
    bool ContainsKey(uint8_t key);
    // public ExitGames.Client.Photon.DictionaryEntryEnumerator GetEnumerator()
    // Offset: 0x49C9AEC
    ::ExitGames::Client::Photon::DictionaryEntryEnumerator GetEnumerator();
    // public System.Object Clone()
    // Offset: 0x49CA1E0
    ::Il2CppObject* Clone();
    // public override System.String ToString()
    // Offset: 0x49C9BA4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // ExitGames.Client.Photon.Hashtable
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::GetBoxedByte
// Il2CppName: GetBoxedByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(uint8_t)>(&ExitGames::Client::Photon::Hashtable::GetBoxedByte)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), "GetBoxedByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ExitGames::Client::Photon::Hashtable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExitGames::Client::Photon::Hashtable::*)(::Il2CppObject*)>(&ExitGames::Client::Photon::Hashtable::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::Hashtable::*)(::Il2CppObject*, ::Il2CppObject*)>(&ExitGames::Client::Photon::Hashtable::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExitGames::Client::Photon::Hashtable::*)(uint8_t)>(&ExitGames::Client::Photon::Hashtable::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::Hashtable::*)(uint8_t, ::Il2CppObject*)>(&ExitGames::Client::Photon::Hashtable::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::Hashtable::*)(uint8_t, ::Il2CppObject*)>(&ExitGames::Client::Photon::Hashtable::Add)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k, v});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::Hashtable::*)(uint8_t)>(&ExitGames::Client::Photon::Hashtable::Remove)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::ContainsKey
// Il2CppName: ContainsKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::Hashtable::*)(uint8_t)>(&ExitGames::Client::Photon::Hashtable::ContainsKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), "ContainsKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::DictionaryEntryEnumerator (ExitGames::Client::Photon::Hashtable::*)()>(&ExitGames::Client::Photon::Hashtable::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExitGames::Client::Photon::Hashtable::*)()>(&ExitGames::Client::Photon::Hashtable::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Hashtable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::Hashtable::*)()>(&ExitGames::Client::Photon::Hashtable::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Hashtable*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
