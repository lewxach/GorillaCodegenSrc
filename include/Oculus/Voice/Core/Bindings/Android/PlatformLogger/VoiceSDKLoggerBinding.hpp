// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
#include "Oculus/Voice/Core/Bindings/Android/BaseServiceBinding.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Core.Bindings.Android.PlatformLogger
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
  // Forward declaring type: VoiceSDKLoggerBinding
  class VoiceSDKLoggerBinding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*, "Oculus.Voice.Core.Bindings.Android.PlatformLogger", "VoiceSDKLoggerBinding");
// Type namespace: Oculus.Voice.Core.Bindings.Android.PlatformLogger
namespace Oculus::Voice::Core::Bindings::Android::PlatformLogger {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceSDKLoggerBinding : public ::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding {
    public:
    // public System.Void Connect()
    // Offset: 0x2981E90
    void Connect();
    // public System.Void LogInteractionStart(System.String requestId, System.String startTime)
    // Offset: 0x2981F60
    void LogInteractionStart(::StringW requestId, ::StringW startTime);
    // public System.Void LogInteractionEndSuccess(System.String endTime)
    // Offset: 0x2982068
    void LogInteractionEndSuccess(::StringW endTime);
    // public System.Void LogInteractionEndFailure(System.String endTime, System.String errorMessage)
    // Offset: 0x2982138
    void LogInteractionEndFailure(::StringW endTime, ::StringW errorMessage);
    // public System.Void LogInteractionPoint(System.String interactionPoint, System.String time)
    // Offset: 0x2982240
    void LogInteractionPoint(::StringW interactionPoint, ::StringW time);
    // public System.Void LogAnnotation(System.String annotationKey, System.String annotationValue)
    // Offset: 0x2982348
    void LogAnnotation(::StringW annotationKey, ::StringW annotationValue);
    // public System.Void .ctor(UnityEngine.AndroidJavaObject loggerInstance)
    // Offset: 0x2981E60
    // Implemented from: Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
    // Base method: System.Void BaseServiceBinding::.ctor(UnityEngine.AndroidJavaObject loggerInstance)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceSDKLoggerBinding* New_ctor(::UnityEngine::AndroidJavaObject* loggerInstance) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceSDKLoggerBinding*, creationType>(loggerInstance)));
    }
  }; // Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)()>(&Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::Connect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionStart
// Il2CppName: LogInteractionStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::StringW, ::StringW)>(&Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionStart)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*), "LogInteractionStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId, startTime});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionEndSuccess
// Il2CppName: LogInteractionEndSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::StringW)>(&Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionEndSuccess)> {
  static const MethodInfo* get() {
    static auto* endTime = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*), "LogInteractionEndSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endTime});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionEndFailure
// Il2CppName: LogInteractionEndFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::StringW, ::StringW)>(&Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionEndFailure)> {
  static const MethodInfo* get() {
    static auto* endTime = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*), "LogInteractionEndFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endTime, errorMessage});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionPoint
// Il2CppName: LogInteractionPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::StringW, ::StringW)>(&Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogInteractionPoint)> {
  static const MethodInfo* get() {
    static auto* interactionPoint = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*), "LogInteractionPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactionPoint, time});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogAnnotation
// Il2CppName: LogAnnotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::*)(::StringW, ::StringW)>(&Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::LogAnnotation)> {
  static const MethodInfo* get() {
    static auto* annotationKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* annotationValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding*), "LogAnnotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{annotationKey, annotationValue});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Bindings::Android::PlatformLogger::VoiceSDKLoggerBinding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
