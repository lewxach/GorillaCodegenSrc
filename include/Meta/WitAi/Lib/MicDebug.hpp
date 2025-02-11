// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Interfaces
namespace Meta::WitAi::Interfaces {
  // Forward declaring type: IAudioInputSource
  class IAudioInputSource;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileStream
  class FileStream;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Lib
namespace Meta::WitAi::Lib {
  // Forward declaring type: MicDebug
  class MicDebug;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Lib::MicDebug);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Lib::MicDebug*, "Meta.WitAi.Lib", "MicDebug");
// Type namespace: Meta.WitAi.Lib
namespace Meta::WitAi::Lib {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Lib.MicDebug
  // [TokenAttribute] Offset: FFFFFFFF
  class MicDebug : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Meta.WitAi.Interfaces.IAudioInputSource _micSource
    // Size: 0x8
    // Offset: 0x20
    ::Meta::WitAi::Interfaces::IAudioInputSource* micSource;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Interfaces::IAudioInputSource*) == 0x8);
    // private System.String fileDirectory
    // Size: 0x8
    // Offset: 0x28
    ::StringW fileDirectory;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String fileName
    // Size: 0x8
    // Offset: 0x30
    ::StringW fileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.IO.FileStream _fileStream
    // Size: 0x8
    // Offset: 0x38
    ::System::IO::FileStream* fileStream;
    // Field size check
    static_assert(sizeof(::System::IO::FileStream*) == 0x8);
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // static field const value: static private System.Int32 FLOAT_TO_SHORT
    static constexpr const int FLOAT_TO_SHORT = 32767;
    // Get static field: static private System.Int32 FLOAT_TO_SHORT
    static int _get_FLOAT_TO_SHORT();
    // Set static field: static private System.Int32 FLOAT_TO_SHORT
    static void _set_FLOAT_TO_SHORT(int value);
    // static field const value: static private System.Int32 BYTES_PER_SHORT
    static constexpr const int BYTES_PER_SHORT = 2;
    // Get static field: static private System.Int32 BYTES_PER_SHORT
    static int _get_BYTES_PER_SHORT();
    // Set static field: static private System.Int32 BYTES_PER_SHORT
    static void _set_BYTES_PER_SHORT(int value);
    // Get instance field reference: private Meta.WitAi.Interfaces.IAudioInputSource _micSource
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Interfaces::IAudioInputSource*& dyn__micSource();
    // Get instance field reference: private System.String fileDirectory
    [[deprecated("Use field access instead!")]] ::StringW& dyn_fileDirectory();
    // Get instance field reference: private System.String fileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_fileName();
    // Get instance field reference: private System.IO.FileStream _fileStream
    [[deprecated("Use field access instead!")]] ::System::IO::FileStream*& dyn__fileStream();
    // Get instance field reference: private System.Byte[] _buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__buffer();
    // private System.Void OnEnable()
    // Offset: 0x44171BC
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x4417454
    void OnDisable();
    // private System.Void OnDestroy()
    // Offset: 0x44176A8
    void OnDestroy();
    // private System.Void OnStartRecording()
    // Offset: 0x44176FC
    void OnStartRecording();
    // private System.Void OnSampleReady(System.Int32 sampleCount, System.Single[] sample, System.Single levelMax)
    // Offset: 0x4417B50
    void OnSampleReady(int sampleCount, ::ArrayW<float> sample, float levelMax);
    // private System.Void OnStopRecording()
    // Offset: 0x4417CC8
    void OnStopRecording();
    // private System.Void UnloadStream()
    // Offset: 0x44176AC
    void UnloadStream();
    // public System.Void .ctor()
    // Offset: 0x4417CCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MicDebug* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Lib::MicDebug::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MicDebug*, creationType>()));
    }
  }; // Meta.WitAi.Lib.MicDebug
  #pragma pack(pop)
  static check_size<sizeof(MicDebug), 64 + sizeof(::ArrayW<uint8_t>)> __Meta_WitAi_Lib_MicDebugSizeCheck;
  static_assert(sizeof(MicDebug) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Lib::MicDebug::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Lib::MicDebug::*)()>(&Meta::WitAi::Lib::MicDebug::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Lib::MicDebug*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Lib::MicDebug::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Lib::MicDebug::*)()>(&Meta::WitAi::Lib::MicDebug::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Lib::MicDebug*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Lib::MicDebug::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Lib::MicDebug::*)()>(&Meta::WitAi::Lib::MicDebug::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Lib::MicDebug*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Lib::MicDebug::OnStartRecording
// Il2CppName: OnStartRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Lib::MicDebug::*)()>(&Meta::WitAi::Lib::MicDebug::OnStartRecording)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Lib::MicDebug*), "OnStartRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Lib::MicDebug::OnSampleReady
// Il2CppName: OnSampleReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Lib::MicDebug::*)(int, ::ArrayW<float>, float)>(&Meta::WitAi::Lib::MicDebug::OnSampleReady)> {
  static const MethodInfo* get() {
    static auto* sampleCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sample = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* levelMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Lib::MicDebug*), "OnSampleReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleCount, sample, levelMax});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Lib::MicDebug::OnStopRecording
// Il2CppName: OnStopRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Lib::MicDebug::*)()>(&Meta::WitAi::Lib::MicDebug::OnStopRecording)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Lib::MicDebug*), "OnStopRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Lib::MicDebug::UnloadStream
// Il2CppName: UnloadStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Lib::MicDebug::*)()>(&Meta::WitAi::Lib::MicDebug::UnloadStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Lib::MicDebug*), "UnloadStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Lib::MicDebug::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
