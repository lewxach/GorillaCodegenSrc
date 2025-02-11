// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaGameManager
#include "GlobalNamespace/GorillaGameManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaGameManager::OnTouchDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaGameManager::OnTouchDelegate*, "", "GorillaGameManager/OnTouchDelegate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: GorillaGameManager/OnTouchDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaGameManager::OnTouchDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2707F3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaGameManager::OnTouchDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaGameManager::OnTouchDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaGameManager::OnTouchDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(Photon.Realtime.Player taggedPlayer, Photon.Realtime.Player taggingPlayer)
    // Offset: 0x2708048
    void Invoke(::Photon::Realtime::Player* taggedPlayer, ::Photon::Realtime::Player* taggingPlayer);
    // public System.IAsyncResult BeginInvoke(Photon.Realtime.Player taggedPlayer, Photon.Realtime.Player taggingPlayer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x270805C
    ::System::IAsyncResult* BeginInvoke(::Photon::Realtime::Player* taggedPlayer, ::Photon::Realtime::Player* taggingPlayer, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2708084
    void EndInvoke(::System::IAsyncResult* result);
  }; // GorillaGameManager/OnTouchDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaGameManager::OnTouchDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GorillaGameManager::OnTouchDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaGameManager::OnTouchDelegate::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaGameManager::OnTouchDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* taggedPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* taggingPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaGameManager::OnTouchDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{taggedPlayer, taggingPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaGameManager::OnTouchDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::GorillaGameManager::OnTouchDelegate::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::GorillaGameManager::OnTouchDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* taggedPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* taggingPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaGameManager::OnTouchDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{taggedPlayer, taggingPlayer, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaGameManager::OnTouchDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaGameManager::OnTouchDelegate::*)(::System::IAsyncResult*)>(&GlobalNamespace::GorillaGameManager::OnTouchDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaGameManager::OnTouchDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
