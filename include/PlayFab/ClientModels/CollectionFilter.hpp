// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: Container_Dictionary_String_String
  class Container_Dictionary_String_String;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: CollectionFilter
  class CollectionFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::CollectionFilter);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::CollectionFilter*, "PlayFab.ClientModels", "CollectionFilter");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.CollectionFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class CollectionFilter : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.Container_Dictionary_String_String> Excludes
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>* Excludes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.Container_Dictionary_String_String> Includes
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>* Includes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.Container_Dictionary_String_String> Excludes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*& dyn_Excludes();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.Container_Dictionary_String_String> Includes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*& dyn_Includes();
    // public System.Void .ctor()
    // Offset: 0x4B6E46C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CollectionFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::CollectionFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CollectionFilter*, creationType>()));
    }
  }; // PlayFab.ClientModels.CollectionFilter
  #pragma pack(pop)
  static check_size<sizeof(CollectionFilter), 24 + sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*)> __PlayFab_ClientModels_CollectionFilterSizeCheck;
  static_assert(sizeof(CollectionFilter) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::CollectionFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
