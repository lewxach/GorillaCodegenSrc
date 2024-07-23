// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UIR.BestFitAllocator
#include "UnityEngine/UIElements/UIR/BestFitAllocator.hpp"
// Including type: UnityEngine.UIElements.UIR.LinkedPool`1
#include "UnityEngine/UIElements/UIR/LinkedPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::BestFitAllocator::BlockPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BestFitAllocator::BlockPool*, "UnityEngine.UIElements.UIR", "BestFitAllocator/BlockPool");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UIR.BestFitAllocator/BlockPool
  // [TokenAttribute] Offset: FFFFFFFF
  class BestFitAllocator::BlockPool : public ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::BestFitAllocator::Block*> {
    public:
    // static private UnityEngine.UIElements.UIR.BestFitAllocator/Block CreateBlock()
    // Offset: 0x55E01A0
    static ::UnityEngine::UIElements::UIR::BestFitAllocator::Block* CreateBlock();
    // static private System.Void ResetBlock(UnityEngine.UIElements.UIR.BestFitAllocator/Block block)
    // Offset: 0x55E0238
    static void ResetBlock(::UnityEngine::UIElements::UIR::BestFitAllocator::Block* block);
    // public System.Void .ctor()
    // Offset: 0x55DF92C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BestFitAllocator::BlockPool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::BestFitAllocator::BlockPool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BestFitAllocator::BlockPool*, creationType>()));
    }
  }; // UnityEngine.UIElements.UIR.BestFitAllocator/BlockPool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::BestFitAllocator::BlockPool::CreateBlock
// Il2CppName: CreateBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::BestFitAllocator::Block* (*)()>(&UnityEngine::UIElements::UIR::BestFitAllocator::BlockPool::CreateBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::BestFitAllocator::BlockPool*), "CreateBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::BestFitAllocator::BlockPool::ResetBlock
// Il2CppName: ResetBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::UIR::BestFitAllocator::Block*)>(&UnityEngine::UIElements::UIR::BestFitAllocator::BlockPool::ResetBlock)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.UIR", "BestFitAllocator/Block")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::BestFitAllocator::BlockPool*), "ResetBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::BestFitAllocator::BlockPool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!