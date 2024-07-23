// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GraphicsBufferHandle
  struct GraphicsBufferHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GraphicsBufferHandle, "UnityEngine", "GraphicsBufferHandle");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.GraphicsBufferHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct GraphicsBufferHandle/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>*/ {
    public:
    public:
    // public readonly System.UInt32 value
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: GraphicsBufferHandle
    constexpr GraphicsBufferHandle(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>
    operator ::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // Get instance field reference: public readonly System.UInt32 value
    [[deprecated("Use field access instead!")]] uint& dyn_value();
    // public System.Boolean Equals(UnityEngine.GraphicsBufferHandle other)
    // Offset: 0x549D630
    bool Equals(::UnityEngine::GraphicsBufferHandle other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x549D5B0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x549D5B8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // UnityEngine.GraphicsBufferHandle
  #pragma pack(pop)
  static check_size<sizeof(GraphicsBufferHandle), 0 + sizeof(uint)> __UnityEngine_GraphicsBufferHandleSizeCheck;
  static_assert(sizeof(GraphicsBufferHandle) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GraphicsBufferHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::GraphicsBufferHandle::*)(::UnityEngine::GraphicsBufferHandle)>(&UnityEngine::GraphicsBufferHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "GraphicsBufferHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GraphicsBufferHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::GraphicsBufferHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::GraphicsBufferHandle::*)()>(&UnityEngine::GraphicsBufferHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GraphicsBufferHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GraphicsBufferHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::GraphicsBufferHandle::*)(::Il2CppObject*)>(&UnityEngine::GraphicsBufferHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GraphicsBufferHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};