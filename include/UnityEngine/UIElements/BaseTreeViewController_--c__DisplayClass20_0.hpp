// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseTreeViewController
#include "UnityEngine/UIElements/BaseTreeViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ReusableTreeViewItem
  class ReusableTreeViewItem;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::BaseTreeViewController::$$c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseTreeViewController::$$c__DisplayClass20_0*, "UnityEngine.UIElements", "BaseTreeViewController/<>c__DisplayClass20_0");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.BaseTreeViewController/<>c__DisplayClass20_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BaseTreeViewController::$$c__DisplayClass20_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.UIElements.BaseTreeViewController <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::BaseTreeViewController* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::BaseTreeViewController*) == 0x8);
    // public UnityEngine.UIElements.ReusableTreeViewItem treeItem
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::ReusableTreeViewItem* treeItem;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::ReusableTreeViewItem*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.UIElements.BaseTreeViewController <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::BaseTreeViewController*& dyn_$$4__this();
    // Get instance field reference: public UnityEngine.UIElements.ReusableTreeViewItem treeItem
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::ReusableTreeViewItem*& dyn_treeItem();
    // public System.Void .ctor()
    // Offset: 0x559B940
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseTreeViewController::$$c__DisplayClass20_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BaseTreeViewController::$$c__DisplayClass20_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseTreeViewController::$$c__DisplayClass20_0*, creationType>()));
    }
    // System.Void <PostInitRegistration>b__0()
    // Offset: 0x559E664
    void $PostInitRegistration$b__0();
  }; // UnityEngine.UIElements.BaseTreeViewController/<>c__DisplayClass20_0
  #pragma pack(pop)
  static check_size<sizeof(BaseTreeViewController::$$c__DisplayClass20_0), 24 + sizeof(::UnityEngine::UIElements::ReusableTreeViewItem*)> __UnityEngine_UIElements_BaseTreeViewController_$$c__DisplayClass20_0SizeCheck;
  static_assert(sizeof(BaseTreeViewController::$$c__DisplayClass20_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseTreeViewController::$$c__DisplayClass20_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseTreeViewController::$$c__DisplayClass20_0::$PostInitRegistration$b__0
// Il2CppName: <PostInitRegistration>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BaseTreeViewController::$$c__DisplayClass20_0::*)()>(&UnityEngine::UIElements::BaseTreeViewController::$$c__DisplayClass20_0::$PostInitRegistration$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseTreeViewController::$$c__DisplayClass20_0*), "<PostInitRegistration>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
