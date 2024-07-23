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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: ComponentSingleton`1<T>
  template<typename T>
  class ComponentSingleton_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::ComponentSingleton_1, "UnityEngine.ResourceManagement.Util", "ComponentSingleton`1");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  template<typename T>
  class ComponentSingleton_1 : public ::UnityEngine::MonoBehaviour {
    public:
    // Autogenerated static field getter
    // Get static field: static private T s_Instance
    static T _get_s_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ComponentSingleton_1::_get_s_Instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<T>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ComponentSingleton_1<T>*>::get(), "s_Instance"));
    }
    // Autogenerated static field setter
    // Set static field: static private T s_Instance
    static void _set_s_Instance(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ComponentSingleton_1::_set_s_Instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ComponentSingleton_1<T>*>::get(), "s_Instance", value));
    }
    // static public System.Boolean get_Exists()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static bool get_Exists() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ComponentSingleton_1::get_Exists");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ComponentSingleton_1<T>*>::get(), "get_Exists", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static public T get_Instance()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static T get_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ComponentSingleton_1::get_Instance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ComponentSingleton_1<T>*>::get(), "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static private T FindInstance()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static T FindInstance() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ComponentSingleton_1::FindInstance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ComponentSingleton_1<T>*>::get(), "FindInstance", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // protected System.String GetGameObjectName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetGameObjectName() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ComponentSingleton_1::GetGameObjectName");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // static private T CreateNewSingleton()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static T CreateNewSingleton() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ComponentSingleton_1::CreateNewSingleton");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ComponentSingleton_1<T>*>::get(), "CreateNewSingleton", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // private System.Void Awake()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Awake() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ComponentSingleton_1::Awake");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // static public System.Void DestroySingleton()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void DestroySingleton() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ComponentSingleton_1::DestroySingleton");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ComponentSingleton_1<T>*>::get(), "DestroySingleton", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComponentSingleton_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ComponentSingleton_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComponentSingleton_1<T>*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.Util.ComponentSingleton`1
  // Could not write size check! Type: UnityEngine.ResourceManagement.Util.ComponentSingleton`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"