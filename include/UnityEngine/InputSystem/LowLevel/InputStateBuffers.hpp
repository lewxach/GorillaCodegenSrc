// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Skipping declaration: DoubleBuffers because it is already included!
  // Forward declaring type: InputUpdateType
  struct InputUpdateType;
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputStateBuffers
  struct InputStateBuffers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputStateBuffers
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputStateBuffers/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers
    struct DoubleBuffers;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers
    // [TokenAttribute] Offset: FFFFFFFF
    struct DoubleBuffers/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Void** deviceToBufferMapping
      // Size: 0x8
      // Offset: 0x0
      void** deviceToBufferMapping;
      // Field size check
      static_assert(sizeof(void**) == 0x8);
      public:
      // Creating value type constructor for type: DoubleBuffers
      constexpr DoubleBuffers(void** deviceToBufferMapping_ = {}) noexcept : deviceToBufferMapping{deviceToBufferMapping_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator void**
      constexpr operator void**() const noexcept {
        return deviceToBufferMapping;
      }
      // Get instance field reference: public System.Void** deviceToBufferMapping
      [[deprecated("Use field access instead!")]] void**& dyn_deviceToBufferMapping();
      // public System.Boolean get_valid()
      // Offset: 0x5157C58
      bool get_valid();
      // public System.Void SetFrontBuffer(System.Int32 deviceIndex, System.Void* ptr)
      // Offset: 0x51577EC
      void SetFrontBuffer(int deviceIndex, void* ptr);
      // public System.Void SetBackBuffer(System.Int32 deviceIndex, System.Void* ptr)
      // Offset: 0x51577FC
      void SetBackBuffer(int deviceIndex, void* ptr);
      // public System.Void* GetFrontBuffer(System.Int32 deviceIndex)
      // Offset: 0x515758C
      void* GetFrontBuffer(int deviceIndex);
      // public System.Void* GetBackBuffer(System.Int32 deviceIndex)
      // Offset: 0x51575F4
      void* GetBackBuffer(int deviceIndex);
      // public System.Void SwapBuffers(System.Int32 deviceIndex)
      // Offset: 0x5157C68
      void SwapBuffers(int deviceIndex);
    }; // UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers
    #pragma pack(pop)
    static check_size<sizeof(InputStateBuffers::DoubleBuffers), 0 + sizeof(void**)> __UnityEngine_InputSystem_LowLevel_InputStateBuffers_DoubleBuffersSizeCheck;
    static_assert(sizeof(InputStateBuffers::DoubleBuffers) == 0x8);
    public:
    // public System.UInt32 sizePerBuffer
    // Size: 0x4
    // Offset: 0x0
    uint sizePerBuffer;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 totalSize
    // Size: 0x4
    // Offset: 0x4
    uint totalSize;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Void* defaultStateBuffer
    // Size: 0x8
    // Offset: 0x8
    void* defaultStateBuffer;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    // public System.Void* noiseMaskBuffer
    // Size: 0x8
    // Offset: 0x10
    void* noiseMaskBuffer;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    // public System.Void* resetMaskBuffer
    // Size: 0x8
    // Offset: 0x18
    void* resetMaskBuffer;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    // private System.Void* m_AllBuffers
    // Size: 0x8
    // Offset: 0x20
    void* m_AllBuffers;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    // UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers m_PlayerStateBuffers
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers m_PlayerStateBuffers;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers) == 0x8);
    public:
    // Creating value type constructor for type: InputStateBuffers
    constexpr InputStateBuffers(uint sizePerBuffer_ = {}, uint totalSize_ = {}, void* defaultStateBuffer_ = {}, void* noiseMaskBuffer_ = {}, void* resetMaskBuffer_ = {}, void* m_AllBuffers_ = {}, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers m_PlayerStateBuffers_ = {}) noexcept : sizePerBuffer{sizePerBuffer_}, totalSize{totalSize_}, defaultStateBuffer{defaultStateBuffer_}, noiseMaskBuffer{noiseMaskBuffer_}, resetMaskBuffer{resetMaskBuffer_}, m_AllBuffers{m_AllBuffers_}, m_PlayerStateBuffers{m_PlayerStateBuffers_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static System.Void* s_DefaultStateBuffer
    static void* _get_s_DefaultStateBuffer();
    // Set static field: static System.Void* s_DefaultStateBuffer
    static void _set_s_DefaultStateBuffer(void* value);
    // Get static field: static System.Void* s_NoiseMaskBuffer
    static void* _get_s_NoiseMaskBuffer();
    // Set static field: static System.Void* s_NoiseMaskBuffer
    static void _set_s_NoiseMaskBuffer(void* value);
    // Get static field: static System.Void* s_ResetMaskBuffer
    static void* _get_s_ResetMaskBuffer();
    // Set static field: static System.Void* s_ResetMaskBuffer
    static void _set_s_ResetMaskBuffer(void* value);
    // Get static field: static UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers s_CurrentBuffers
    static ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers _get_s_CurrentBuffers();
    // Set static field: static UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers s_CurrentBuffers
    static void _set_s_CurrentBuffers(::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers value);
    // Get instance field reference: public System.UInt32 sizePerBuffer
    [[deprecated("Use field access instead!")]] uint& dyn_sizePerBuffer();
    // Get instance field reference: public System.UInt32 totalSize
    [[deprecated("Use field access instead!")]] uint& dyn_totalSize();
    // Get instance field reference: public System.Void* defaultStateBuffer
    [[deprecated("Use field access instead!")]] void*& dyn_defaultStateBuffer();
    // Get instance field reference: public System.Void* noiseMaskBuffer
    [[deprecated("Use field access instead!")]] void*& dyn_noiseMaskBuffer();
    // Get instance field reference: public System.Void* resetMaskBuffer
    [[deprecated("Use field access instead!")]] void*& dyn_resetMaskBuffer();
    // Get instance field reference: private System.Void* m_AllBuffers
    [[deprecated("Use field access instead!")]] void*& dyn_m_AllBuffers();
    // Get instance field reference: UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers m_PlayerStateBuffers
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers& dyn_m_PlayerStateBuffers();
    // public UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers GetDoubleBuffersFor(UnityEngine.InputSystem.LowLevel.InputUpdateType updateType)
    // Offset: 0x5157464
    ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers GetDoubleBuffersFor(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);
    // static public System.Void* GetFrontBufferForDevice(System.Int32 deviceIndex)
    // Offset: 0x5157538
    static void* GetFrontBufferForDevice(int deviceIndex);
    // static public System.Void* GetBackBufferForDevice(System.Int32 deviceIndex)
    // Offset: 0x515759C
    static void* GetBackBufferForDevice(int deviceIndex);
    // static public System.Void SwitchTo(UnityEngine.InputSystem.LowLevel.InputStateBuffers buffers, UnityEngine.InputSystem.LowLevel.InputUpdateType update)
    // Offset: 0x5157608
    static void SwitchTo(::UnityEngine::InputSystem::LowLevel::InputStateBuffers buffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType update);
    // public System.Void AllocateAll(UnityEngine.InputSystem.InputDevice[] devices, System.Int32 deviceCount)
    // Offset: 0x515766C
    void AllocateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*> devices, int deviceCount);
    // static private UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers SetUpDeviceToBufferMappings(System.Int32 deviceCount, ref System.Byte* bufferPtr, System.UInt32 sizePerBuffer, System.UInt32 mappingTableSizePerBuffer)
    // Offset: 0x515778C
    static ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers SetUpDeviceToBufferMappings(int deviceCount, ByRef<uint8_t*> bufferPtr, uint sizePerBuffer, uint mappingTableSizePerBuffer);
    // public System.Void FreeAll()
    // Offset: 0x5157810
    void FreeAll();
    // public System.Void MigrateAll(UnityEngine.InputSystem.InputDevice[] devices, System.Int32 deviceCount, UnityEngine.InputSystem.LowLevel.InputStateBuffers oldBuffers)
    // Offset: 0x51578D0
    void MigrateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*> devices, int deviceCount, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers oldBuffers);
    // static private System.Void MigrateDoubleBuffer(UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers newBuffer, UnityEngine.InputSystem.InputDevice[] devices, System.Int32 deviceCount, UnityEngine.InputSystem.LowLevel.InputStateBuffers/DoubleBuffers oldBuffer)
    // Offset: 0x51579D8
    static void MigrateDoubleBuffer(::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers newBuffer, ::ArrayW<::UnityEngine::InputSystem::InputDevice*> devices, int deviceCount, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers oldBuffer);
    // static private System.Void MigrateSingleBuffer(System.Void* newBuffer, UnityEngine.InputSystem.InputDevice[] devices, System.Int32 deviceCount, System.Void* oldBuffer)
    // Offset: 0x5157AF0
    static void MigrateSingleBuffer(void* newBuffer, ::ArrayW<::UnityEngine::InputSystem::InputDevice*> devices, int deviceCount, void* oldBuffer);
    // static private System.UInt32 ComputeSizeOfSingleStateBuffer(UnityEngine.InputSystem.InputDevice[] devices, System.Int32 deviceCount)
    // Offset: 0x5157720
    static uint ComputeSizeOfSingleStateBuffer(::ArrayW<::UnityEngine::InputSystem::InputDevice*> devices, int deviceCount);
    // static private System.UInt32 NextDeviceOffset(System.UInt32 currentOffset, UnityEngine.InputSystem.InputDevice device)
    // Offset: 0x5157BA8
    static uint NextDeviceOffset(uint currentOffset, ::UnityEngine::InputSystem::InputDevice* device);
  }; // UnityEngine.InputSystem.LowLevel.InputStateBuffers
  #pragma pack(pop)
  static check_size<sizeof(InputStateBuffers), 40 + sizeof(::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers)> __UnityEngine_InputSystem_LowLevel_InputStateBuffersSizeCheck;
  static_assert(sizeof(InputStateBuffers) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers/DoubleBuffers");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetDoubleBuffersFor
// Il2CppName: GetDoubleBuffersFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers (UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetDoubleBuffersFor)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "GetDoubleBuffersFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetFrontBufferForDevice
// Il2CppName: GetFrontBufferForDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int)>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetFrontBufferForDevice)> {
  static const MethodInfo* get() {
    static auto* deviceIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "GetFrontBufferForDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetBackBufferForDevice
// Il2CppName: GetBackBufferForDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int)>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetBackBufferForDevice)> {
  static const MethodInfo* get() {
    static auto* deviceIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "GetBackBufferForDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::SwitchTo
// Il2CppName: SwitchTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::SwitchTo)> {
  static const MethodInfo* get() {
    static auto* buffers = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputStateBuffers")->byval_arg;
    static auto* update = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "SwitchTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffers, update});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::AllocateAll
// Il2CppName: AllocateAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)(::ArrayW<::UnityEngine::InputSystem::InputDevice*>, int)>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::AllocateAll)> {
  static const MethodInfo* get() {
    static auto* devices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice"), 1)->byval_arg;
    static auto* deviceCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "AllocateAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{devices, deviceCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::SetUpDeviceToBufferMappings
// Il2CppName: SetUpDeviceToBufferMappings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers (*)(int, ByRef<uint8_t*>, uint, uint)>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::SetUpDeviceToBufferMappings)> {
  static const MethodInfo* get() {
    static auto* deviceCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bufferPtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    static auto* sizePerBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* mappingTableSizePerBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "SetUpDeviceToBufferMappings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceCount, bufferPtr, sizePerBuffer, mappingTableSizePerBuffer});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::FreeAll
// Il2CppName: FreeAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)()>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::FreeAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "FreeAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateAll
// Il2CppName: MigrateAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)(::ArrayW<::UnityEngine::InputSystem::InputDevice*>, int, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers)>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateAll)> {
  static const MethodInfo* get() {
    static auto* devices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice"), 1)->byval_arg;
    static auto* deviceCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* oldBuffers = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputStateBuffers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "MigrateAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{devices, deviceCount, oldBuffers});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateDoubleBuffer
// Il2CppName: MigrateDoubleBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>, int, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::DoubleBuffers)>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateDoubleBuffer)> {
  static const MethodInfo* get() {
    static auto* newBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputStateBuffers/DoubleBuffers")->byval_arg;
    static auto* devices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice"), 1)->byval_arg;
    static auto* deviceCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* oldBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputStateBuffers/DoubleBuffers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "MigrateDoubleBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newBuffer, devices, deviceCount, oldBuffer});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateSingleBuffer
// Il2CppName: MigrateSingleBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>, int, void*)>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateSingleBuffer)> {
  static const MethodInfo* get() {
    static auto* newBuffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* devices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice"), 1)->byval_arg;
    static auto* deviceCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* oldBuffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "MigrateSingleBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newBuffer, devices, deviceCount, oldBuffer});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::ComputeSizeOfSingleStateBuffer
// Il2CppName: ComputeSizeOfSingleStateBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<::UnityEngine::InputSystem::InputDevice*>, int)>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::ComputeSizeOfSingleStateBuffer)> {
  static const MethodInfo* get() {
    static auto* devices = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice"), 1)->byval_arg;
    static auto* deviceCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "ComputeSizeOfSingleStateBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{devices, deviceCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputStateBuffers::NextDeviceOffset
// Il2CppName: NextDeviceOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, ::UnityEngine::InputSystem::InputDevice*)>(&UnityEngine::InputSystem::LowLevel::InputStateBuffers::NextDeviceOffset)> {
  static const MethodInfo* get() {
    static auto* currentOffset = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputStateBuffers), "NextDeviceOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentOffset, device});
  }
};