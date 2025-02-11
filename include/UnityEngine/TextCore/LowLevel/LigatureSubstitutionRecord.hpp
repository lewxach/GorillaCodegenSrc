// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: LigatureSubstitutionRecord
  struct LigatureSubstitutionRecord;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord, "UnityEngine.TextCore.LowLevel", "LigatureSubstitutionRecord");
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct LigatureSubstitutionRecord/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.UInt32[] m_ComponentGlyphIDs
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint> m_ComponentGlyphIDs;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.UInt32 m_LigatureGlyphID
    // Size: 0x4
    // Offset: 0x8
    uint m_LigatureGlyphID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: LigatureSubstitutionRecord
    constexpr LigatureSubstitutionRecord(::ArrayW<uint> m_ComponentGlyphIDs_ = ::ArrayW<uint>(static_cast<void*>(nullptr)), uint m_LigatureGlyphID_ = {}) noexcept : m_ComponentGlyphIDs{m_ComponentGlyphIDs_}, m_LigatureGlyphID{m_LigatureGlyphID_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.UInt32[] m_ComponentGlyphIDs
    [[deprecated("Use field access instead!")]] ::ArrayW<uint>& dyn_m_ComponentGlyphIDs();
    // Get instance field reference: private System.UInt32 m_LigatureGlyphID
    [[deprecated("Use field access instead!")]] uint& dyn_m_LigatureGlyphID();
    // public System.UInt32[] get_componentGlyphIDs()
    // Offset: 0x55439D4
    ::ArrayW<uint> get_componentGlyphIDs();
    // public System.UInt32 get_ligatureGlyphID()
    // Offset: 0x55439DC
    uint get_ligatureGlyphID();
  }; // UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord
  #pragma pack(pop)
  static check_size<sizeof(LigatureSubstitutionRecord), 8 + sizeof(uint)> __UnityEngine_TextCore_LowLevel_LigatureSubstitutionRecordSizeCheck;
  static_assert(sizeof(LigatureSubstitutionRecord) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::get_componentGlyphIDs
// Il2CppName: get_componentGlyphIDs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint> (UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::*)()>(&UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::get_componentGlyphIDs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord), "get_componentGlyphIDs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::get_ligatureGlyphID
// Il2CppName: get_ligatureGlyphID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::*)()>(&UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::get_ligatureGlyphID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord), "get_ligatureGlyphID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
