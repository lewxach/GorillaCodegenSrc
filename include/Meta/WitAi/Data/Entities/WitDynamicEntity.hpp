// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Interfaces.IDynamicEntitiesProvider
#include "Meta/WitAi/Interfaces/IDynamicEntitiesProvider.hpp"
// Including type: Meta.WitAi.Data.Info.WitEntityKeywordInfo
#include "Meta/WitAi/Data/Info/WitEntityKeywordInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseArray
  class WitResponseArray;
}
// Forward declaring namespace: Meta::WitAi::Data::Entities
namespace Meta::WitAi::Data::Entities {
  // Forward declaring type: WitDynamicEntities
  class WitDynamicEntities;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Data.Entities
namespace Meta::WitAi::Data::Entities {
  // Forward declaring type: WitDynamicEntity
  class WitDynamicEntity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Data::Entities::WitDynamicEntity);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Data::Entities::WitDynamicEntity*, "Meta.WitAi.Data.Entities", "WitDynamicEntity");
// Type namespace: Meta.WitAi.Data.Entities
namespace Meta::WitAi::Data::Entities {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Data.Entities.WitDynamicEntity
  // [TokenAttribute] Offset: FFFFFFFF
  class WitDynamicEntity : public ::Il2CppObject/*, public ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*/ {
    public:
    public:
    // public System.String entity
    // Size: 0x8
    // Offset: 0x10
    ::StringW entity;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo> keywords
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>* keywords;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider
    operator ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider() noexcept {
      return *reinterpret_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(this);
    }
    // Get instance field reference: public System.String entity
    [[deprecated("Use field access instead!")]] ::StringW& dyn_entity();
    // Get instance field reference: public System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo> keywords
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>*& dyn_keywords();
    // public System.Void .ctor()
    // Offset: 0x44673FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitDynamicEntity* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitDynamicEntity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitDynamicEntity*, creationType>()));
    }
    // public System.Void .ctor(System.String entity, Meta.WitAi.Data.Info.WitEntityKeywordInfo keyword)
    // Offset: 0x4467484
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitDynamicEntity* New_ctor(::StringW entity, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo keyword) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitDynamicEntity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitDynamicEntity*, creationType>(entity, keyword)));
    }
    // public System.Void .ctor(System.String entity, params System.String[] keywords)
    // Offset: 0x4467148
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitDynamicEntity* New_ctor(::StringW entity, ::ArrayW<::StringW> keywords) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitDynamicEntity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitDynamicEntity*, creationType>(entity, keywords)));
    }
    // public System.Void .ctor(System.String entity, System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> keywordsToSynonyms)
    // Offset: 0x44675C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitDynamicEntity* New_ctor(::StringW entity, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* keywordsToSynonyms) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitDynamicEntity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitDynamicEntity*, creationType>(entity, keywordsToSynonyms)));
    }
    // public Meta.WitAi.Json.WitResponseArray get_AsJson()
    // Offset: 0x4466D78
    ::Meta::WitAi::Json::WitResponseArray* get_AsJson();
    // public Meta.WitAi.Data.Entities.WitDynamicEntities GetDynamicEntities()
    // Offset: 0x4467858
    ::Meta::WitAi::Data::Entities::WitDynamicEntities* GetDynamicEntities();
  }; // Meta.WitAi.Data.Entities.WitDynamicEntity
  #pragma pack(pop)
  static check_size<sizeof(WitDynamicEntity), 24 + sizeof(::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>*)> __Meta_WitAi_Data_Entities_WitDynamicEntitySizeCheck;
  static_assert(sizeof(WitDynamicEntity) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntity::get_AsJson
// Il2CppName: get_AsJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Json::WitResponseArray* (Meta::WitAi::Data::Entities::WitDynamicEntity::*)()>(&Meta::WitAi::Data::Entities::WitDynamicEntity::get_AsJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntity*), "get_AsJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntity::GetDynamicEntities
// Il2CppName: GetDynamicEntities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Data::Entities::WitDynamicEntities* (Meta::WitAi::Data::Entities::WitDynamicEntity::*)()>(&Meta::WitAi::Data::Entities::WitDynamicEntity::GetDynamicEntities)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntity*), "GetDynamicEntities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};