// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: GorillaPosRotConstraint
#include "GlobalNamespace/GorillaPosRotConstraint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GTPosRotConstraints
  class GTPosRotConstraints;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GTPosRotConstraintManager
  class GTPosRotConstraintManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GTPosRotConstraintManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GTPosRotConstraintManager*, "", "GTPosRotConstraintManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GTPosRotConstraintManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultExecutionOrder] Offset: FFFFFFFF
  class GTPosRotConstraintManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::GTPosRotConstraintManager::Range
    struct Range;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: GTPosRotConstraintManager/Range
    // [TokenAttribute] Offset: FFFFFFFF
    struct Range/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Int32 start
      // Size: 0x4
      // Offset: 0x0
      int start;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 end
      // Size: 0x4
      // Offset: 0x4
      int end;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Range
      constexpr Range(int start_ = {}, int end_ = {}) noexcept : start{start_}, end{end_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Int32 start
      [[deprecated("Use field access instead!")]] int& dyn_start();
      // Get instance field reference: public System.Int32 end
      [[deprecated("Use field access instead!")]] int& dyn_end();
    }; // GTPosRotConstraintManager/Range
    #pragma pack(pop)
    static check_size<sizeof(GTPosRotConstraintManager::Range), 4 + sizeof(int)> __GlobalNamespace_GTPosRotConstraintManager_RangeSizeCheck;
    static_assert(sizeof(GTPosRotConstraintManager::Range) == 0x8);
    // Get static field: static public GTPosRotConstraintManager instance
    static ::GlobalNamespace::GTPosRotConstraintManager* _get_instance();
    // Set static field: static public GTPosRotConstraintManager instance
    static void _set_instance(::GlobalNamespace::GTPosRotConstraintManager* value);
    // Get static field: static public System.Boolean hasInstance
    static bool _get_hasInstance();
    // Set static field: static public System.Boolean hasInstance
    static void _set_hasInstance(bool value);
    // static field const value: static private System.Int32 _kComponentsCapacity
    static constexpr const int _kComponentsCapacity = 256;
    // Get static field: static private System.Int32 _kComponentsCapacity
    static int _get__kComponentsCapacity();
    // Set static field: static private System.Int32 _kComponentsCapacity
    static void _set__kComponentsCapacity(int value);
    // static field const value: static private System.Int32 _kConstraintsCapacity
    static constexpr const int _kConstraintsCapacity = 1024;
    // Get static field: static private System.Int32 _kConstraintsCapacity
    static int _get__kConstraintsCapacity();
    // Set static field: static private System.Int32 _kConstraintsCapacity
    static void _set__kConstraintsCapacity(int value);
    // Get static field: static private readonly System.Collections.Generic.List`1<GorillaPosRotConstraint> constraints
    static ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPosRotConstraint>* _get_constraints();
    // Set static field: static private readonly System.Collections.Generic.List`1<GorillaPosRotConstraint> constraints
    static void _set_constraints(::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPosRotConstraint>* value);
    // Get static field: static public readonly System.Collections.Generic.Dictionary`2<System.Int32,GTPosRotConstraintManager/Range> componentRanges
    static ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::GTPosRotConstraintManager::Range>* _get_componentRanges();
    // Set static field: static public readonly System.Collections.Generic.Dictionary`2<System.Int32,GTPosRotConstraintManager/Range> componentRanges
    static void _set_componentRanges(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::GTPosRotConstraintManager::Range>* value);
    // protected System.Void Awake()
    // Offset: 0x288B468
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x288B66C
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0x288B73C
    void LateUpdate();
    // static public System.Void CreateManager()
    // Offset: 0x288B988
    static void CreateManager();
    // static private System.Void SetInstance(GTPosRotConstraintManager manager)
    // Offset: 0x288B560
    static void SetInstance(::GlobalNamespace::GTPosRotConstraintManager* manager);
    // static public System.Void Register(GTPosRotConstraints component)
    // Offset: 0x288BAB4
    static void Register(::GlobalNamespace::GTPosRotConstraints* component);
    // static public System.Void Unregister(GTPosRotConstraints component)
    // Offset: 0x288BE38
    static void Unregister(::GlobalNamespace::GTPosRotConstraints* component);
    // public System.Void .ctor()
    // Offset: 0x288C0CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GTPosRotConstraintManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GTPosRotConstraintManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GTPosRotConstraintManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x288C0D4
    static void _cctor();
  }; // GTPosRotConstraintManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GTPosRotConstraintManager::Range, "", "GTPosRotConstraintManager/Range");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GTPosRotConstraintManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GTPosRotConstraintManager::*)()>(&GlobalNamespace::GTPosRotConstraintManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GTPosRotConstraintManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GTPosRotConstraintManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GTPosRotConstraintManager::*)()>(&GlobalNamespace::GTPosRotConstraintManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GTPosRotConstraintManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GTPosRotConstraintManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GTPosRotConstraintManager::*)()>(&GlobalNamespace::GTPosRotConstraintManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GTPosRotConstraintManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GTPosRotConstraintManager::CreateManager
// Il2CppName: CreateManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::GTPosRotConstraintManager::CreateManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GTPosRotConstraintManager*), "CreateManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GTPosRotConstraintManager::SetInstance
// Il2CppName: SetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::GTPosRotConstraintManager*)>(&GlobalNamespace::GTPosRotConstraintManager::SetInstance)> {
  static const MethodInfo* get() {
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "GTPosRotConstraintManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GTPosRotConstraintManager*), "SetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{manager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GTPosRotConstraintManager::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::GTPosRotConstraints*)>(&GlobalNamespace::GTPosRotConstraintManager::Register)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("", "GTPosRotConstraints")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GTPosRotConstraintManager*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GTPosRotConstraintManager::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::GTPosRotConstraints*)>(&GlobalNamespace::GTPosRotConstraintManager::Unregister)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("", "GTPosRotConstraints")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GTPosRotConstraintManager*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GTPosRotConstraintManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GTPosRotConstraintManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::GTPosRotConstraintManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GTPosRotConstraintManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};