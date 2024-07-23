// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: BoingManagerPostUpdatePump
  class BoingManagerPostUpdatePump;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BoingKit::BoingManagerPostUpdatePump);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::BoingManagerPostUpdatePump*, "BoingKit", "BoingManagerPostUpdatePump");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.BoingManagerPostUpdatePump
  // [TokenAttribute] Offset: FFFFFFFF
  class BoingManagerPostUpdatePump : public ::UnityEngine::MonoBehaviour {
    public:
    // private System.Void Start()
    // Offset: 0x28F24A4
    void Start();
    // private System.Boolean TryDestroyDuplicate()
    // Offset: 0x28F2510
    bool TryDestroyDuplicate();
    // private System.Void FixedUpdate()
    // Offset: 0x28F25FC
    void FixedUpdate();
    // private System.Void Update()
    // Offset: 0x28F2668
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x28F26EC
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x28F2788
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoingManagerPostUpdatePump* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::BoingManagerPostUpdatePump::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoingManagerPostUpdatePump*, creationType>()));
    }
  }; // BoingKit.BoingManagerPostUpdatePump
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::BoingManagerPostUpdatePump::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManagerPostUpdatePump::*)()>(&BoingKit::BoingManagerPostUpdatePump::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManagerPostUpdatePump*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManagerPostUpdatePump::TryDestroyDuplicate
// Il2CppName: TryDestroyDuplicate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BoingKit::BoingManagerPostUpdatePump::*)()>(&BoingKit::BoingManagerPostUpdatePump::TryDestroyDuplicate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManagerPostUpdatePump*), "TryDestroyDuplicate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManagerPostUpdatePump::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManagerPostUpdatePump::*)()>(&BoingKit::BoingManagerPostUpdatePump::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManagerPostUpdatePump*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManagerPostUpdatePump::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManagerPostUpdatePump::*)()>(&BoingKit::BoingManagerPostUpdatePump::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManagerPostUpdatePump*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManagerPostUpdatePump::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManagerPostUpdatePump::*)()>(&BoingKit::BoingManagerPostUpdatePump::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManagerPostUpdatePump*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManagerPostUpdatePump::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!