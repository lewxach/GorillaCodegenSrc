// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Span`1
#include "System/Span_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ReadOnlySpan`1 because it is already included!
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: ValueStringBuilder
  struct ValueStringBuilder__;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Text::ValueStringBuilder__, "System.Text", "ValueStringBuilder");
// Type namespace: System.Text
namespace System::Text {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Text.ValueStringBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsByRefLikeAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct ValueStringBuilder__/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Char[] _arrayToReturnToPool
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Il2CppChar> arrayToReturnToPool;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Span`1<System.Char> _chars
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Span_1<::Il2CppChar> chars;
    // private System.Int32 _pos
    // Size: 0x4
    // Offset: 0x18
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ValueStringBuilder__
    constexpr ValueStringBuilder__(::ArrayW<::Il2CppChar> arrayToReturnToPool_ = ::ArrayW<::Il2CppChar>(static_cast<void*>(nullptr)), ::System::Span_1<::Il2CppChar> chars_ = {}, int pos_ = {}) noexcept : arrayToReturnToPool{arrayToReturnToPool_}, chars{chars_}, pos{pos_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Char[] _arrayToReturnToPool
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn__arrayToReturnToPool();
    // Get instance field reference: private System.Span`1<System.Char> _chars
    [[deprecated("Use field access instead!")]] ::System::Span_1<::Il2CppChar>& dyn__chars();
    // Get instance field reference: private System.Int32 _pos
    [[deprecated("Use field access instead!")]] int& dyn__pos();
    // public System.Void .ctor(System.Span`1<System.Char> initialBuffer)
    // Offset: 0x575DC38
    ValueStringBuilder__(::System::Span_1<::Il2CppChar> initialBuffer);
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x575DC48
    ValueStringBuilder__(int initialCapacity);
    // public System.Int32 get_Length()
    // Offset: 0x575DD58
    int get_Length();
    // public System.Void set_Length(System.Int32 value)
    // Offset: 0x575DD60
    void set_Length(int value);
    // public System.Int32 get_Capacity()
    // Offset: 0x575DD68
    int get_Capacity();
    // public System.Void EnsureCapacity(System.Int32 capacity)
    // Offset: 0x575DDA4
    void EnsureCapacity(int capacity);
    // public System.Char GetPinnableReference()
    // Offset: 0x575E094
    ::Il2CppChar GetPinnableReference();
    // public System.Char GetPinnableReference(System.Boolean terminate)
    // Offset: 0x575E0DC
    ::Il2CppChar GetPinnableReference(bool terminate);
    // public System.Char get_Item(System.Int32 index)
    // Offset: 0x575E158
    ::Il2CppChar get_Item(int index);
    // public System.Span`1<System.Char> get_RawChars()
    // Offset: 0x575E234
    ::System::Span_1<::Il2CppChar> get_RawChars();
    // public System.ReadOnlySpan`1<System.Char> AsSpan(System.Boolean terminate)
    // Offset: 0x575E240
    ::System::ReadOnlySpan_1<::Il2CppChar> AsSpan(bool terminate);
    // public System.ReadOnlySpan`1<System.Char> AsSpan()
    // Offset: 0x575E308
    ::System::ReadOnlySpan_1<::Il2CppChar> AsSpan();
    // public System.ReadOnlySpan`1<System.Char> AsSpan(System.Int32 start)
    // Offset: 0x575E398
    ::System::ReadOnlySpan_1<::Il2CppChar> AsSpan(int start);
    // public System.ReadOnlySpan`1<System.Char> AsSpan(System.Int32 start, System.Int32 length)
    // Offset: 0x575E440
    ::System::ReadOnlySpan_1<::Il2CppChar> AsSpan(int start, int length);
    // public System.Boolean TryCopyTo(System.Span`1<System.Char> destination, out System.Int32 charsWritten)
    // Offset: 0x575E4E4
    bool TryCopyTo(::System::Span_1<::Il2CppChar> destination, ByRef<int> charsWritten);
    // public System.Void Insert(System.Int32 index, System.Char value, System.Int32 count)
    // Offset: 0x575E5CC
    void Insert(int index, ::Il2CppChar value, int count);
    // public System.Void Insert(System.Int32 index, System.String s)
    // Offset: 0x575E790
    void Insert(int index, ::StringW s);
    // public System.Void Append(System.Char c)
    // Offset: 0x575E984
    void Append(::Il2CppChar c);
    // public System.Void Append(System.String s)
    // Offset: 0x575EA68
    void Append(::StringW s);
    // private System.Void AppendSlow(System.String s)
    // Offset: 0x575EB04
    void AppendSlow(::StringW s);
    // public System.Void Append(System.Char c, System.Int32 count)
    // Offset: 0x575EC30
    void Append(::Il2CppChar c, int count);
    // public System.Void Append(System.Char* value, System.Int32 length)
    // Offset: 0x575ED58
    void Append(::Il2CppChar* value, int length);
    // public System.Void Append(System.ReadOnlySpan`1<System.Char> value)
    // Offset: 0x575EE38
    void Append(::System::ReadOnlySpan_1<::Il2CppChar> value);
    // public System.Span`1<System.Char> AppendSpan(System.Int32 length)
    // Offset: 0x575EF34
    ::System::Span_1<::Il2CppChar> AppendSpan(int length);
    // private System.Void GrowAndAppend(System.Char c)
    // Offset: 0x575E9F4
    void GrowAndAppend(::Il2CppChar c);
    // private System.Void Grow(System.Int32 additionalCapacityBeyondPos)
    // Offset: 0x575DE04
    void Grow(int additionalCapacityBeyondPos);
    // public System.Void Dispose()
    // Offset: 0x575EFF0
    void Dispose();
    // public override System.String ToString()
    // Offset: 0x575E17C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Text.ValueStringBuilder
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::ValueStringBuilder__
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::ValueStringBuilder__
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ValueStringBuilder__::*)()>(&System::Text::ValueStringBuilder__::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::set_Length
// Il2CppName: set_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(int)>(&System::Text::ValueStringBuilder__::set_Length)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "set_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::get_Capacity
// Il2CppName: get_Capacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ValueStringBuilder__::*)()>(&System::Text::ValueStringBuilder__::get_Capacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "get_Capacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::EnsureCapacity
// Il2CppName: EnsureCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(int)>(&System::Text::ValueStringBuilder__::EnsureCapacity)> {
  static const MethodInfo* get() {
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "EnsureCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capacity});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::GetPinnableReference
// Il2CppName: GetPinnableReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::ValueStringBuilder__::*)()>(&System::Text::ValueStringBuilder__::GetPinnableReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "GetPinnableReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::GetPinnableReference
// Il2CppName: GetPinnableReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::ValueStringBuilder__::*)(bool)>(&System::Text::ValueStringBuilder__::GetPinnableReference)> {
  static const MethodInfo* get() {
    static auto* terminate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "GetPinnableReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terminate});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::ValueStringBuilder__::*)(int)>(&System::Text::ValueStringBuilder__::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::get_RawChars
// Il2CppName: get_RawChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Span_1<::Il2CppChar> (System::Text::ValueStringBuilder__::*)()>(&System::Text::ValueStringBuilder__::get_RawChars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "get_RawChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::AsSpan
// Il2CppName: AsSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<::Il2CppChar> (System::Text::ValueStringBuilder__::*)(bool)>(&System::Text::ValueStringBuilder__::AsSpan)> {
  static const MethodInfo* get() {
    static auto* terminate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "AsSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{terminate});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::AsSpan
// Il2CppName: AsSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<::Il2CppChar> (System::Text::ValueStringBuilder__::*)()>(&System::Text::ValueStringBuilder__::AsSpan)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "AsSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::AsSpan
// Il2CppName: AsSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<::Il2CppChar> (System::Text::ValueStringBuilder__::*)(int)>(&System::Text::ValueStringBuilder__::AsSpan)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "AsSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::AsSpan
// Il2CppName: AsSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<::Il2CppChar> (System::Text::ValueStringBuilder__::*)(int, int)>(&System::Text::ValueStringBuilder__::AsSpan)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "AsSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, length});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::TryCopyTo
// Il2CppName: TryCopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::ValueStringBuilder__::*)(::System::Span_1<::Il2CppChar>, ByRef<int>)>(&System::Text::ValueStringBuilder__::TryCopyTo)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* charsWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "TryCopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, charsWritten});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(int, ::Il2CppChar, int)>(&System::Text::ValueStringBuilder__::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value, count});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::Insert
// Il2CppName: Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(int, ::StringW)>(&System::Text::ValueStringBuilder__::Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, s});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(::Il2CppChar)>(&System::Text::ValueStringBuilder__::Append)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(::StringW)>(&System::Text::ValueStringBuilder__::Append)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::AppendSlow
// Il2CppName: AppendSlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(::StringW)>(&System::Text::ValueStringBuilder__::AppendSlow)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "AppendSlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(::Il2CppChar, int)>(&System::Text::ValueStringBuilder__::Append)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, count});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(::Il2CppChar*, int)>(&System::Text::ValueStringBuilder__::Append)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, length});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(::System::ReadOnlySpan_1<::Il2CppChar>)>(&System::Text::ValueStringBuilder__::Append)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::AppendSpan
// Il2CppName: AppendSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Span_1<::Il2CppChar> (System::Text::ValueStringBuilder__::*)(int)>(&System::Text::ValueStringBuilder__::AppendSpan)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "AppendSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::GrowAndAppend
// Il2CppName: GrowAndAppend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(::Il2CppChar)>(&System::Text::ValueStringBuilder__::GrowAndAppend)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "GrowAndAppend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::Grow
// Il2CppName: Grow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)(int)>(&System::Text::ValueStringBuilder__::Grow)> {
  static const MethodInfo* get() {
    static auto* additionalCapacityBeyondPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "Grow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{additionalCapacityBeyondPos});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueStringBuilder__::*)()>(&System::Text::ValueStringBuilder__::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::ValueStringBuilder__::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::ValueStringBuilder__::*)()>(&System::Text::ValueStringBuilder__::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueStringBuilder__), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};