// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.ColumnLayout
#include "UnityEngine/UIElements/ColumnLayout.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Column
  class Column;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::ColumnLayout::$$c__DisplayClass42_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ColumnLayout::$$c__DisplayClass42_1*, "UnityEngine.UIElements", "ColumnLayout/<>c__DisplayClass42_1");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ColumnLayout/<>c__DisplayClass42_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ColumnLayout::$$c__DisplayClass42_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Single totalFixedWidth
    // Size: 0x4
    // Offset: 0x10
    float totalFixedWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: totalFixedWidth and: $$4__this
    char __padding0[0x4] = {};
    // public UnityEngine.UIElements.ColumnLayout <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::ColumnLayout* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::ColumnLayout*) == 0x8);
    public:
    // Get instance field reference: public System.Single totalFixedWidth
    [[deprecated("Use field access instead!")]] float& dyn_totalFixedWidth();
    // Get instance field reference: public UnityEngine.UIElements.ColumnLayout <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::ColumnLayout*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x561CE74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColumnLayout::$$c__DisplayClass42_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::ColumnLayout::$$c__DisplayClass42_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColumnLayout::$$c__DisplayClass42_1*, creationType>()));
    }
    // System.Void <StretchResizeColumns>b__3(UnityEngine.UIElements.Column c)
    // Offset: 0x561D8A0
    void $StretchResizeColumns$b__3(::UnityEngine::UIElements::Column* c);
  }; // UnityEngine.UIElements.ColumnLayout/<>c__DisplayClass42_1
  #pragma pack(pop)
  static check_size<sizeof(ColumnLayout::$$c__DisplayClass42_1), 24 + sizeof(::UnityEngine::UIElements::ColumnLayout*)> __UnityEngine_UIElements_ColumnLayout_$$c__DisplayClass42_1SizeCheck;
  static_assert(sizeof(ColumnLayout::$$c__DisplayClass42_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ColumnLayout::$$c__DisplayClass42_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::ColumnLayout::$$c__DisplayClass42_1::$StretchResizeColumns$b__3
// Il2CppName: <StretchResizeColumns>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ColumnLayout::$$c__DisplayClass42_1::*)(::UnityEngine::UIElements::Column*)>(&UnityEngine::UIElements::ColumnLayout::$$c__DisplayClass42_1::$StretchResizeColumns$b__3)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Column")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ColumnLayout::$$c__DisplayClass42_1*), "<StretchResizeColumns>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
