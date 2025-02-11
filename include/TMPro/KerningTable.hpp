// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: KerningPair
  class KerningPair;
  // Forward declaring type: GlyphValueRecord_Legacy
  struct GlyphValueRecord_Legacy;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: KerningTable
  class KerningTable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::KerningTable);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::KerningTable*, "TMPro", "KerningTable");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.KerningTable
  // [TokenAttribute] Offset: FFFFFFFF
  class KerningTable : public ::Il2CppObject {
    public:
    // Nested type: ::TMPro::KerningTable::$$c
    class $$c;
    // Nested type: ::TMPro::KerningTable::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: ::TMPro::KerningTable::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: ::TMPro::KerningTable::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    public:
    // public System.Collections.Generic.List`1<TMPro.KerningPair> kerningPairs
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::TMPro::KerningPair*>* kerningPairs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::TMPro::KerningPair*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::TMPro::KerningPair*>*
    constexpr operator ::System::Collections::Generic::List_1<::TMPro::KerningPair*>*() const noexcept {
      return kerningPairs;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<TMPro.KerningPair> kerningPairs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::TMPro::KerningPair*>*& dyn_kerningPairs();
    // public System.Void .ctor()
    // Offset: 0x5371CD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KerningTable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::KerningTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KerningTable*, creationType>()));
    }
    // public System.Void AddKerningPair()
    // Offset: 0x53724CC
    void AddKerningPair();
    // public System.Int32 AddKerningPair(System.UInt32 first, System.UInt32 second, System.Single offset)
    // Offset: 0x53726A8
    int AddKerningPair(uint first, uint second, float offset);
    // public System.Int32 AddGlyphPairAdjustmentRecord(System.UInt32 first, TMPro.GlyphValueRecord_Legacy firstAdjustments, System.UInt32 second, TMPro.GlyphValueRecord_Legacy secondAdjustments)
    // Offset: 0x5372860
    int AddGlyphPairAdjustmentRecord(uint first, ::TMPro::GlyphValueRecord_Legacy firstAdjustments, uint second, ::TMPro::GlyphValueRecord_Legacy secondAdjustments);
    // public System.Void RemoveKerningPair(System.Int32 left, System.Int32 right)
    // Offset: 0x5372A58
    void RemoveKerningPair(int left, int right);
    // public System.Void RemoveKerningPair(System.Int32 index)
    // Offset: 0x5372B7C
    void RemoveKerningPair(int index);
    // public System.Void SortKerningPairs()
    // Offset: 0x5372BD4
    void SortKerningPairs();
  }; // TMPro.KerningTable
  #pragma pack(pop)
  static check_size<sizeof(KerningTable), 16 + sizeof(::System::Collections::Generic::List_1<::TMPro::KerningPair*>*)> __TMPro_KerningTableSizeCheck;
  static_assert(sizeof(KerningTable) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::KerningTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::KerningTable::AddKerningPair
// Il2CppName: AddKerningPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::KerningTable::*)()>(&TMPro::KerningTable::AddKerningPair)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningTable*), "AddKerningPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::KerningTable::AddKerningPair
// Il2CppName: AddKerningPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (TMPro::KerningTable::*)(uint, uint, float)>(&TMPro::KerningTable::AddKerningPair)> {
  static const MethodInfo* get() {
    static auto* first = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningTable*), "AddKerningPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{first, second, offset});
  }
};
// Writing MetadataGetter for method: TMPro::KerningTable::AddGlyphPairAdjustmentRecord
// Il2CppName: AddGlyphPairAdjustmentRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (TMPro::KerningTable::*)(uint, ::TMPro::GlyphValueRecord_Legacy, uint, ::TMPro::GlyphValueRecord_Legacy)>(&TMPro::KerningTable::AddGlyphPairAdjustmentRecord)> {
  static const MethodInfo* get() {
    static auto* first = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* firstAdjustments = &::il2cpp_utils::GetClassFromName("TMPro", "GlyphValueRecord_Legacy")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* secondAdjustments = &::il2cpp_utils::GetClassFromName("TMPro", "GlyphValueRecord_Legacy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningTable*), "AddGlyphPairAdjustmentRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{first, firstAdjustments, second, secondAdjustments});
  }
};
// Writing MetadataGetter for method: TMPro::KerningTable::RemoveKerningPair
// Il2CppName: RemoveKerningPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::KerningTable::*)(int, int)>(&TMPro::KerningTable::RemoveKerningPair)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningTable*), "RemoveKerningPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: TMPro::KerningTable::RemoveKerningPair
// Il2CppName: RemoveKerningPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::KerningTable::*)(int)>(&TMPro::KerningTable::RemoveKerningPair)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningTable*), "RemoveKerningPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: TMPro::KerningTable::SortKerningPairs
// Il2CppName: SortKerningPairs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::KerningTable::*)()>(&TMPro::KerningTable::SortKerningPairs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::KerningTable*), "SortKerningPairs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
