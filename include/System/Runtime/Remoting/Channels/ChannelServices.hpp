// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: CrossContextChannel
  class CrossContextChannel;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: ReturnMessage
  class ReturnMessage;
}
// Forward declaring namespace: System::Runtime::Remoting::Channels
namespace System::Runtime::Remoting::Channels {
  // Forward declaring type: IChannelSender
  class IChannelSender;
  // Forward declaring type: IChannel
  class IChannel;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ChannelData
  class ChannelData;
  // Forward declaring type: ProviderData
  class ProviderData;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Forward declaring type: ChannelServices
  class ChannelServices;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Channels::ChannelServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::ChannelServices*, "System.Runtime.Remoting.Channels", "ChannelServices");
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.ChannelServices
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class ChannelServices : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.ArrayList registeredChannels
    static ::System::Collections::ArrayList* _get_registeredChannels();
    // Set static field: static private System.Collections.ArrayList registeredChannels
    static void _set_registeredChannels(::System::Collections::ArrayList* value);
    // Get static field: static private System.Collections.ArrayList delayedClientChannels
    static ::System::Collections::ArrayList* _get_delayedClientChannels();
    // Set static field: static private System.Collections.ArrayList delayedClientChannels
    static void _set_delayedClientChannels(::System::Collections::ArrayList* value);
    // Get static field: static private System.Runtime.Remoting.Contexts.CrossContextChannel _crossContextSink
    static ::System::Runtime::Remoting::Contexts::CrossContextChannel* _get__crossContextSink();
    // Set static field: static private System.Runtime.Remoting.Contexts.CrossContextChannel _crossContextSink
    static void _set__crossContextSink(::System::Runtime::Remoting::Contexts::CrossContextChannel* value);
    // Get static field: static System.String CrossContextUrl
    static ::StringW _get_CrossContextUrl();
    // Set static field: static System.String CrossContextUrl
    static void _set_CrossContextUrl(::StringW value);
    // Get static field: static private System.Collections.IList oldStartModeTypes
    static ::System::Collections::IList* _get_oldStartModeTypes();
    // Set static field: static private System.Collections.IList oldStartModeTypes
    static void _set_oldStartModeTypes(::System::Collections::IList* value);
    // static System.Runtime.Remoting.Contexts.CrossContextChannel get_CrossContextChannel()
    // Offset: 0x453C560
    static ::System::Runtime::Remoting::Contexts::CrossContextChannel* get_CrossContextChannel();
    // static System.Runtime.Remoting.Messaging.IMessageSink CreateClientChannelSinkChain(System.String url, System.Object remoteChannelData, out System.String objectUri)
    // Offset: 0x453C5B8
    static ::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(::StringW url, ::Il2CppObject* remoteChannelData, ByRef<::StringW> objectUri);
    // static System.Runtime.Remoting.Messaging.IMessageSink CreateClientChannelSinkChain(System.Runtime.Remoting.Channels.IChannelSender sender, System.String url, System.Object[] channelDataArray, out System.String objectUri)
    // Offset: 0x453CE58
    static ::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(::System::Runtime::Remoting::Channels::IChannelSender* sender, ::StringW url, ::ArrayW<::Il2CppObject*> channelDataArray, ByRef<::StringW> objectUri);
    // static public System.Void RegisterChannel(System.Runtime.Remoting.Channels.IChannel chnl)
    // Offset: 0x453D074
    static void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* chnl);
    // static public System.Void RegisterChannel(System.Runtime.Remoting.Channels.IChannel chnl, System.Boolean ensureSecurity)
    // Offset: 0x453D0CC
    static void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* chnl, bool ensureSecurity);
    // static System.Void RegisterChannelConfig(System.Runtime.Remoting.ChannelData channel)
    // Offset: 0x453D92C
    static void RegisterChannelConfig(::System::Runtime::Remoting::ChannelData* channel);
    // static private System.Object CreateProvider(System.Runtime.Remoting.ProviderData prov)
    // Offset: 0x453E5C8
    static ::Il2CppObject* CreateProvider(::System::Runtime::Remoting::ProviderData* prov);
    // static public System.Runtime.Remoting.Messaging.IMessage SyncDispatchMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x453E8DC
    static ::System::Runtime::Remoting::Messaging::IMessage* SyncDispatchMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);
    // static private System.Runtime.Remoting.Messaging.ReturnMessage CheckIncomingMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x453E980
    static ::System::Runtime::Remoting::Messaging::ReturnMessage* CheckIncomingMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);
    // static System.Runtime.Remoting.Messaging.IMessage CheckReturnMessage(System.Runtime.Remoting.Messaging.IMessage callMsg, System.Runtime.Remoting.Messaging.IMessage retMsg)
    // Offset: 0x453EC20
    static ::System::Runtime::Remoting::Messaging::IMessage* CheckReturnMessage(::System::Runtime::Remoting::Messaging::IMessage* callMsg, ::System::Runtime::Remoting::Messaging::IMessage* retMsg);
    // static private System.Boolean IsLocalCall(System.Runtime.Remoting.Messaging.IMessage callMsg)
    // Offset: 0x453EDE4
    static bool IsLocalCall(::System::Runtime::Remoting::Messaging::IMessage* callMsg);
    // static System.Object[] GetCurrentChannelInfo()
    // Offset: 0x453EF38
    static ::ArrayW<::Il2CppObject*> GetCurrentChannelInfo();
    // static private System.Void .cctor()
    // Offset: 0x453F444
    static void _cctor();
  }; // System.Runtime.Remoting.Channels.ChannelServices
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::get_CrossContextChannel
// Il2CppName: get_CrossContextChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::CrossContextChannel* (*)()>(&System::Runtime::Remoting::Channels::ChannelServices::get_CrossContextChannel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "get_CrossContextChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain
// Il2CppName: CreateClientChannelSinkChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (*)(::StringW, ::Il2CppObject*, ByRef<::StringW>)>(&System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteChannelData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* objectUri = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "CreateClientChannelSinkChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url, remoteChannelData, objectUri});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain
// Il2CppName: CreateClientChannelSinkChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (*)(::System::Runtime::Remoting::Channels::IChannelSender*, ::StringW, ::ArrayW<::Il2CppObject*>, ByRef<::StringW>)>(&System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Channels", "IChannelSender")->byval_arg;
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* channelDataArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* objectUri = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "CreateClientChannelSinkChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, url, channelDataArray, objectUri});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel
// Il2CppName: RegisterChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::Channels::IChannel*)>(&System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel)> {
  static const MethodInfo* get() {
    static auto* chnl = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Channels", "IChannel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "RegisterChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chnl});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel
// Il2CppName: RegisterChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::Channels::IChannel*, bool)>(&System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel)> {
  static const MethodInfo* get() {
    static auto* chnl = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Channels", "IChannel")->byval_arg;
    static auto* ensureSecurity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "RegisterChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chnl, ensureSecurity});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::RegisterChannelConfig
// Il2CppName: RegisterChannelConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ChannelData*)>(&System::Runtime::Remoting::Channels::ChannelServices::RegisterChannelConfig)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ChannelData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "RegisterChannelConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::CreateProvider
// Il2CppName: CreateProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Runtime::Remoting::ProviderData*)>(&System::Runtime::Remoting::Channels::ChannelServices::CreateProvider)> {
  static const MethodInfo* get() {
    static auto* prov = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ProviderData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "CreateProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prov});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::SyncDispatchMessage
// Il2CppName: SyncDispatchMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Channels::ChannelServices::SyncDispatchMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "SyncDispatchMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::CheckIncomingMessage
// Il2CppName: CheckIncomingMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::ReturnMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Channels::ChannelServices::CheckIncomingMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "CheckIncomingMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::CheckReturnMessage
// Il2CppName: CheckReturnMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Channels::ChannelServices::CheckReturnMessage)> {
  static const MethodInfo* get() {
    static auto* callMsg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* retMsg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "CheckReturnMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callMsg, retMsg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::IsLocalCall
// Il2CppName: IsLocalCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Channels::ChannelServices::IsLocalCall)> {
  static const MethodInfo* get() {
    static auto* callMsg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "IsLocalCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callMsg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::GetCurrentChannelInfo
// Il2CppName: GetCurrentChannelInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (*)()>(&System::Runtime::Remoting::Channels::ChannelServices::GetCurrentChannelInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), "GetCurrentChannelInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::ChannelServices::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::Channels::ChannelServices::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::ChannelServices*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};