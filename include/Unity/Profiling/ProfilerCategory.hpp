// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Unity.Profiling
namespace Unity::Profiling {
  // Forward declaring type: ProfilerCategory
  struct ProfilerCategory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerCategory, "Unity.Profiling", "ProfilerCategory");
// Type namespace: Unity.Profiling
namespace Unity::Profiling {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Unity.Profiling.ProfilerCategory
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct ProfilerCategory/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly System.UInt16 m_CategoryId
    // Size: 0x2
    // Offset: 0x0
    uint16_t m_CategoryId;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: ProfilerCategory
    constexpr ProfilerCategory(uint16_t m_CategoryId_ = {}) noexcept : m_CategoryId{m_CategoryId_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint16_t
    constexpr operator uint16_t() const noexcept {
      return m_CategoryId;
    }
    // Get instance field reference: private readonly System.UInt16 m_CategoryId
    [[deprecated("Use field access instead!")]] uint16_t& dyn_m_CategoryId();
    // System.Void .ctor(System.UInt16 category)
    // Offset: 0x5477FEC
    // ABORTED: conflicts with another method.  ProfilerCategory(uint16_t category);
    // public System.String get_Name()
    // Offset: 0x5477FF4
    ::StringW get_Name();
    // static public Unity.Profiling.ProfilerCategory get_Render()
    // Offset: 0x54781F4
    static ::Unity::Profiling::ProfilerCategory get_Render();
    // static public Unity.Profiling.ProfilerCategory get_Scripts()
    // Offset: 0x54781FC
    static ::Unity::Profiling::ProfilerCategory get_Scripts();
    // static public Unity.Profiling.ProfilerCategory get_Loading()
    // Offset: 0x5478204
    static ::Unity::Profiling::ProfilerCategory get_Loading();
    // public override System.String ToString()
    // Offset: 0x54781F0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Unity.Profiling.ProfilerCategory
  #pragma pack(pop)
  static check_size<sizeof(ProfilerCategory), 0 + sizeof(uint16_t)> __Unity_Profiling_ProfilerCategorySizeCheck;
  static_assert(sizeof(ProfilerCategory) == 0x2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Profiling::ProfilerCategory::ProfilerCategory
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Profiling::ProfilerCategory::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Profiling::ProfilerCategory::*)()>(&Unity::Profiling::ProfilerCategory::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Profiling::ProfilerCategory), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Profiling::ProfilerCategory::get_Render
// Il2CppName: get_Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerCategory (*)()>(&Unity::Profiling::ProfilerCategory::get_Render)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Profiling::ProfilerCategory), "get_Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Profiling::ProfilerCategory::get_Scripts
// Il2CppName: get_Scripts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerCategory (*)()>(&Unity::Profiling::ProfilerCategory::get_Scripts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Profiling::ProfilerCategory), "get_Scripts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Profiling::ProfilerCategory::get_Loading
// Il2CppName: get_Loading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerCategory (*)()>(&Unity::Profiling::ProfilerCategory::get_Loading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Profiling::ProfilerCategory), "get_Loading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Profiling::ProfilerCategory::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Profiling::ProfilerCategory::*)()>(&Unity::Profiling::ProfilerCategory::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Profiling::ProfilerCategory), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};