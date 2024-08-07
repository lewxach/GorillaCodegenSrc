// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonView
  class PhotonView;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Forward declaring type: PunExtensions
  class PunExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::PunExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PunExtensions*, "Photon.Pun", "PunExtensions");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.PunExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class PunExtensions : public ::Il2CppObject {
    public:
    // Get static field: static public System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]> ParametersOfMethods
    static ::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*>>* _get_ParametersOfMethods();
    // Set static field: static public System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Reflection.ParameterInfo[]> ParametersOfMethods
    static void _set_ParametersOfMethods(::System::Collections::Generic::Dictionary_2<::System::Reflection::MethodInfo*, ::ArrayW<::System::Reflection::ParameterInfo*>>* value);
    // static public System.Reflection.ParameterInfo[] GetCachedParemeters(System.Reflection.MethodInfo mo)
    // Offset: 0x4A58CEC
    static ::ArrayW<::System::Reflection::ParameterInfo*> GetCachedParemeters(::System::Reflection::MethodInfo* mo);
    // static public Photon.Pun.PhotonView[] GetPhotonViewsInChildren(UnityEngine.GameObject go)
    // Offset: 0x4A58DEC
    static ::ArrayW<::Photon::Pun::PhotonView*> GetPhotonViewsInChildren(::UnityEngine::GameObject* go);
    // static public Photon.Pun.PhotonView GetPhotonView(UnityEngine.GameObject go)
    // Offset: 0x4A58E40
    static ::Photon::Pun::PhotonView* GetPhotonView(::UnityEngine::GameObject* go);
    // static public System.Boolean AlmostEquals(UnityEngine.Vector3 target, UnityEngine.Vector3 second, System.Single sqrMagnitudePrecision)
    // Offset: 0x4A58E90
    static bool AlmostEquals(::UnityEngine::Vector3 target, ::UnityEngine::Vector3 second, float sqrMagnitudePrecision);
    // static public System.Boolean AlmostEquals(UnityEngine.Vector2 target, UnityEngine.Vector2 second, System.Single sqrMagnitudePrecision)
    // Offset: 0x4A58EBC
    static bool AlmostEquals(::UnityEngine::Vector2 target, ::UnityEngine::Vector2 second, float sqrMagnitudePrecision);
    // static public System.Boolean AlmostEquals(UnityEngine.Quaternion target, UnityEngine.Quaternion second, System.Single maxAngle)
    // Offset: 0x4A58EDC
    static bool AlmostEquals(::UnityEngine::Quaternion target, ::UnityEngine::Quaternion second, float maxAngle);
    // static public System.Boolean AlmostEquals(System.Single target, System.Single second, System.Single floatDiff)
    // Offset: 0x4A58F4C
    static bool AlmostEquals(float target, float second, float floatDiff);
    // static public System.Boolean CheckIsAssignableFrom(System.Type to, System.Type from)
    // Offset: 0x4A58F5C
    static bool CheckIsAssignableFrom(::System::Type* to, ::System::Type* from);
    // static public System.Boolean CheckIsInterface(System.Type to)
    // Offset: 0x4A58F7C
    static bool CheckIsInterface(::System::Type* to);
    // static private System.Void .cctor()
    // Offset: 0x4A58F90
    static void _cctor();
  }; // Photon.Pun.PunExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::PunExtensions::GetCachedParemeters
// Il2CppName: GetCachedParemeters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (*)(::System::Reflection::MethodInfo*)>(&Photon::Pun::PunExtensions::GetCachedParemeters)> {
  static const MethodInfo* get() {
    static auto* mo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PunExtensions*), "GetCachedParemeters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mo});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PunExtensions::GetPhotonViewsInChildren
// Il2CppName: GetPhotonViewsInChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Photon::Pun::PhotonView*> (*)(::UnityEngine::GameObject*)>(&Photon::Pun::PunExtensions::GetPhotonViewsInChildren)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PunExtensions*), "GetPhotonViewsInChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PunExtensions::GetPhotonView
// Il2CppName: GetPhotonView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Pun::PhotonView* (*)(::UnityEngine::GameObject*)>(&Photon::Pun::PunExtensions::GetPhotonView)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PunExtensions*), "GetPhotonView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PunExtensions::AlmostEquals
// Il2CppName: AlmostEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&Photon::Pun::PunExtensions::AlmostEquals)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sqrMagnitudePrecision = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PunExtensions*), "AlmostEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, second, sqrMagnitudePrecision});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PunExtensions::AlmostEquals
// Il2CppName: AlmostEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float)>(&Photon::Pun::PunExtensions::AlmostEquals)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* sqrMagnitudePrecision = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PunExtensions*), "AlmostEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, second, sqrMagnitudePrecision});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PunExtensions::AlmostEquals
// Il2CppName: AlmostEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float)>(&Photon::Pun::PunExtensions::AlmostEquals)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* maxAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PunExtensions*), "AlmostEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, second, maxAngle});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PunExtensions::AlmostEquals
// Il2CppName: AlmostEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float, float, float)>(&Photon::Pun::PunExtensions::AlmostEquals)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* second = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* floatDiff = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PunExtensions*), "AlmostEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, second, floatDiff});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PunExtensions::CheckIsAssignableFrom
// Il2CppName: CheckIsAssignableFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&Photon::Pun::PunExtensions::CheckIsAssignableFrom)> {
  static const MethodInfo* get() {
    static auto* to = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* from = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PunExtensions*), "CheckIsAssignableFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{to, from});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PunExtensions::CheckIsInterface
// Il2CppName: CheckIsInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Photon::Pun::PunExtensions::CheckIsInterface)> {
  static const MethodInfo* get() {
    static auto* to = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PunExtensions*), "CheckIsInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{to});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PunExtensions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Photon::Pun::PunExtensions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PunExtensions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
