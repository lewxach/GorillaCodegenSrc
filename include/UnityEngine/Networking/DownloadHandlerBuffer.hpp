// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Networking.DownloadHandler
#include "UnityEngine/Networking/DownloadHandler.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Forward declaring type: DownloadHandlerBuffer
  class DownloadHandlerBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerBuffer*, "UnityEngine.Networking", "DownloadHandlerBuffer");
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.DownloadHandlerBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class DownloadHandlerBuffer : public ::UnityEngine::Networking::DownloadHandler {
    public:
    public:
    // private Unity.Collections.NativeArray`1<System.Byte> m_NativeData
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::Unity::Collections::NativeArray_1<uint8_t> m_NativeData;
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Unity.Collections.NativeArray`1<System.Byte> m_NativeData
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<uint8_t>& dyn_m_NativeData();
    // static private System.IntPtr Create(UnityEngine.Networking.DownloadHandlerBuffer obj)
    // Offset: 0x570C80C
    static ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerBuffer* obj);
    // private System.Void InternalCreateBuffer()
    // Offset: 0x570C848
    void InternalCreateBuffer();
    // public System.Void .ctor()
    // Offset: 0x570C88C
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Void DownloadHandler::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadHandlerBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::DownloadHandlerBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadHandlerBuffer*, creationType>()));
    }
    // protected override Unity.Collections.NativeArray`1<System.Byte> GetNativeData()
    // Offset: 0x570C8D8
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: Unity.Collections.NativeArray`1<System.Byte> DownloadHandler::GetNativeData()
    ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();
    // public override System.Void Dispose()
    // Offset: 0x570C8E0
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Void DownloadHandler::Dispose()
    void Dispose();
  }; // UnityEngine.Networking.DownloadHandlerBuffer
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerBuffer::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerBuffer*)>(&UnityEngine::Networking::DownloadHandlerBuffer::Create)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "DownloadHandlerBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerBuffer*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerBuffer::InternalCreateBuffer
// Il2CppName: InternalCreateBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerBuffer::*)()>(&UnityEngine::Networking::DownloadHandlerBuffer::InternalCreateBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerBuffer*), "InternalCreateBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerBuffer::GetNativeData
// Il2CppName: GetNativeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (UnityEngine::Networking::DownloadHandlerBuffer::*)()>(&UnityEngine::Networking::DownloadHandlerBuffer::GetNativeData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerBuffer*), "GetNativeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerBuffer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerBuffer::*)()>(&UnityEngine::Networking::DownloadHandlerBuffer::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerBuffer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};