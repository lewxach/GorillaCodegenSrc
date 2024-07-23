// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.VoiceClient
#include "Photon/Voice/VoiceClient.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: VoiceInfo
  struct VoiceInfo;
  // Forward declaring type: RemoteVoiceOptions
  struct RemoteVoiceOptions;
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
NEED_NO_BOX(::Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate*, "Photon.Voice", "VoiceClient/RemoteVoiceInfoDelegate");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceClient::RemoteVoiceInfoDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4A6F104
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceClient::RemoteVoiceInfoDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceClient::RemoteVoiceInfoDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int32 channelId, System.Int32 playerId, System.Byte voiceId, Photon.Voice.VoiceInfo voiceInfo, ref Photon.Voice.RemoteVoiceOptions options)
    // Offset: 0x4A6F1A4
    void Invoke(int channelId, int playerId, uint8_t voiceId, ::Photon::Voice::VoiceInfo voiceInfo, ByRef<::Photon::Voice::RemoteVoiceOptions> options);
    // public System.IAsyncResult BeginInvoke(System.Int32 channelId, System.Int32 playerId, System.Byte voiceId, Photon.Voice.VoiceInfo voiceInfo, ref Photon.Voice.RemoteVoiceOptions options, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4A6F1E0
    ::System::IAsyncResult* BeginInvoke(int channelId, int playerId, uint8_t voiceId, ::Photon::Voice::VoiceInfo voiceInfo, ByRef<::Photon::Voice::RemoteVoiceOptions> options, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref Photon.Voice.RemoteVoiceOptions options, System.IAsyncResult result)
    // Offset: 0x4A6F31C
    void EndInvoke(ByRef<::Photon::Voice::RemoteVoiceOptions> options, ::System::IAsyncResult* result);
  }; // Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate::*)(int, int, uint8_t, ::Photon::Voice::VoiceInfo, ByRef<::Photon::Voice::RemoteVoiceOptions>)>(&Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* voiceId = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* voiceInfo = &::il2cpp_utils::GetClassFromName("Photon.Voice", "VoiceInfo")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("Photon.Voice", "RemoteVoiceOptions")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channelId, playerId, voiceId, voiceInfo, options});
  }
};
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate::*)(int, int, uint8_t, ::Photon::Voice::VoiceInfo, ByRef<::Photon::Voice::RemoteVoiceOptions>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* voiceId = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* voiceInfo = &::il2cpp_utils::GetClassFromName("Photon.Voice", "VoiceInfo")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("Photon.Voice", "RemoteVoiceOptions")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channelId, playerId, voiceId, voiceInfo, options, callback, object});
  }
};
// Writing MetadataGetter for method: Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate::*)(ByRef<::Photon::Voice::RemoteVoiceOptions>, ::System::IAsyncResult*)>(&Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("Photon.Voice", "RemoteVoiceOptions")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::VoiceClient::RemoteVoiceInfoDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, result});
  }
};