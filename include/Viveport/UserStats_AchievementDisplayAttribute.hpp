// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Viveport.UserStats
#include "Viveport/UserStats.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Viveport::UserStats::AchievementDisplayAttribute, "Viveport", "UserStats/AchievementDisplayAttribute");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.UserStats/AchievementDisplayAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserStats::AchievementDisplayAttribute/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AchievementDisplayAttribute
    constexpr AchievementDisplayAttribute(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Viveport.UserStats/AchievementDisplayAttribute Name
    static constexpr const int Name = 0;
    // Get static field: static public Viveport.UserStats/AchievementDisplayAttribute Name
    static ::Viveport::UserStats::AchievementDisplayAttribute _get_Name();
    // Set static field: static public Viveport.UserStats/AchievementDisplayAttribute Name
    static void _set_Name(::Viveport::UserStats::AchievementDisplayAttribute value);
    // static field const value: static public Viveport.UserStats/AchievementDisplayAttribute Desc
    static constexpr const int Desc = 1;
    // Get static field: static public Viveport.UserStats/AchievementDisplayAttribute Desc
    static ::Viveport::UserStats::AchievementDisplayAttribute _get_Desc();
    // Set static field: static public Viveport.UserStats/AchievementDisplayAttribute Desc
    static void _set_Desc(::Viveport::UserStats::AchievementDisplayAttribute value);
    // static field const value: static public Viveport.UserStats/AchievementDisplayAttribute Hidden
    static constexpr const int Hidden = 2;
    // Get static field: static public Viveport.UserStats/AchievementDisplayAttribute Hidden
    static ::Viveport::UserStats::AchievementDisplayAttribute _get_Hidden();
    // Set static field: static public Viveport.UserStats/AchievementDisplayAttribute Hidden
    static void _set_Hidden(::Viveport::UserStats::AchievementDisplayAttribute value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Viveport.UserStats/AchievementDisplayAttribute
  #pragma pack(pop)
  static check_size<sizeof(UserStats::AchievementDisplayAttribute), 0 + sizeof(int)> __Viveport_UserStats_AchievementDisplayAttributeSizeCheck;
  static_assert(sizeof(UserStats::AchievementDisplayAttribute) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"