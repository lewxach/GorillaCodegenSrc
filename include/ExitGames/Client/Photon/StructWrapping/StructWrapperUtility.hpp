// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: ExitGames.Client.Photon.StructWrapping
namespace ExitGames::Client::Photon::StructWrapping {
  // Forward declaring type: StructWrapperUtility
  class StructWrapperUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility*, "ExitGames.Client.Photon.StructWrapping", "StructWrapperUtility");
// Type namespace: ExitGames.Client.Photon.StructWrapping
namespace ExitGames::Client::Photon::StructWrapping {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.StructWrapping.StructWrapperUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class StructWrapperUtility : public ::Il2CppObject {
    public:
    // static public T Unwrap(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Unwrap(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility::Unwrap");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ExitGames.Client.Photon.StructWrapping", "StructWrapperUtility", "Unwrap", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, obj);
    }
    // static public T Get(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Get(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("ExitGames.Client.Photon.StructWrapping", "StructWrapperUtility", "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, obj);
    }
  }; // ExitGames.Client.Photon.StructWrapping.StructWrapperUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::StructWrapping::StructWrapperUtility::Unwrap
// Il2CppName: Unwrap
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: ExitGames::Client::Photon::StructWrapping::StructWrapperUtility::Get
// Il2CppName: Get
// Cannot write MetadataGetter for generic methods!
