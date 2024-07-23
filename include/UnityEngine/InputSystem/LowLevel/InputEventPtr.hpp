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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputEvent
  struct InputEvent;
  // Forward declaring type: IInputEventTypeInfo
  class IInputEventTypeInfo;
}
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: FourCC
  struct FourCC;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputEventPtr
  struct InputEventPtr;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventPtr, "UnityEngine.InputSystem.LowLevel", "InputEventPtr");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputEventPtr
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputEventPtr/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*/ {
    public:
    public:
    // private readonly UnityEngine.InputSystem.LowLevel.InputEvent* m_EventPtr
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::LowLevel::InputEvent* m_EventPtr;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputEvent*) == 0x8);
    public:
    // Creating value type constructor for type: InputEventPtr
    constexpr InputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEvent* m_EventPtr_ = {}) noexcept : m_EventPtr{m_EventPtr_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>
    operator ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::InputSystem::LowLevel::InputEvent*
    constexpr operator ::UnityEngine::InputSystem::LowLevel::InputEvent*() const noexcept {
      return m_EventPtr;
    }
    // Get instance field reference: private readonly UnityEngine.InputSystem.LowLevel.InputEvent* m_EventPtr
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputEvent*& dyn_m_EventPtr();
    // public System.Void .ctor(UnityEngine.InputSystem.LowLevel.InputEvent* eventPtr)
    // Offset: 0x514DE54
    // ABORTED: conflicts with another method.  InputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr);
    // public System.Boolean get_valid()
    // Offset: 0x5143AE0
    bool get_valid();
    // public System.Boolean get_handled()
    // Offset: 0x514DE5C
    bool get_handled();
    // public System.Void set_handled(System.Boolean value)
    // Offset: 0x514730C
    void set_handled(bool value);
    // public System.Int32 get_id()
    // Offset: 0x514DE78
    int get_id();
    // public System.Void set_id(System.Int32 value)
    // Offset: 0x514DE94
    void set_id(int value);
    // public UnityEngine.InputSystem.Utilities.FourCC get_type()
    // Offset: 0x5143AF0
    ::UnityEngine::InputSystem::Utilities::FourCC get_type();
    // public System.UInt32 get_sizeInBytes()
    // Offset: 0x514DF00
    uint get_sizeInBytes();
    // public System.Int32 get_deviceId()
    // Offset: 0x514DF18
    int get_deviceId();
    // public System.Void set_deviceId(System.Int32 value)
    // Offset: 0x514DF30
    void set_deviceId(int value);
    // public System.Double get_time()
    // Offset: 0x5147DD8
    double get_time();
    // public System.Void set_time(System.Double value)
    // Offset: 0x514DF90
    void set_time(double value);
    // System.Double get_internalTime()
    // Offset: 0x514E03C
    double get_internalTime();
    // System.Void set_internalTime(System.Double value)
    // Offset: 0x514E054
    void set_internalTime(double value);
    // public UnityEngine.InputSystem.LowLevel.InputEvent* get_data()
    // Offset: 0x514E0B4
    ::UnityEngine::InputSystem::LowLevel::InputEvent* get_data();
    // UnityEngine.InputSystem.Utilities.FourCC get_stateFormat()
    // Offset: 0x514E0BC
    ::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat();
    // System.UInt32 get_stateSizeInBytes()
    // Offset: 0x514E1F8
    uint get_stateSizeInBytes();
    // System.UInt32 get_stateOffset()
    // Offset: 0x514E438
    uint get_stateOffset();
    // public System.Boolean IsA()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TOtherEvent>
    bool IsA() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TOtherEvent>, ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo> && std::is_convertible_v<TOtherEvent, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::LowLevel::InputEventPtr::IsA");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "IsA", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOtherEvent>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOtherEvent>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method);
    }
    // public UnityEngine.InputSystem.LowLevel.InputEventPtr Next()
    // Offset: 0x514E50C
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr Next();
    // public UnityEngine.InputSystem.LowLevel.InputEvent* ToPointer()
    // Offset: 0x514E538
    ::UnityEngine::InputSystem::LowLevel::InputEvent* ToPointer();
    // public System.Boolean Equals(UnityEngine.InputSystem.LowLevel.InputEventPtr other)
    // Offset: 0x514E540
    bool Equals(::UnityEngine::InputSystem::LowLevel::InputEventPtr other);
    // static public UnityEngine.InputSystem.LowLevel.InputEventPtr From(UnityEngine.InputSystem.LowLevel.InputEvent* eventPtr)
    // Offset: 0x514E600
    static ::UnityEngine::InputSystem::LowLevel::InputEventPtr From(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr);
    // static public UnityEngine.InputSystem.LowLevel.InputEvent* FromInputEventPtr(UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr)
    // Offset: 0x514E604
    static ::UnityEngine::InputSystem::LowLevel::InputEvent* FromInputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);
    // public override System.String ToString()
    // Offset: 0x514E168
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x514E558
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x514E5E0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.InputSystem.LowLevel.InputEventPtr
  #pragma pack(pop)
  static check_size<sizeof(InputEventPtr), 0 + sizeof(::UnityEngine::InputSystem::LowLevel::InputEvent*)> __UnityEngine_InputSystem_LowLevel_InputEventPtrSizeCheck;
  static_assert(sizeof(InputEventPtr) == 0x8);
  // static public System.Boolean op_Equality(UnityEngine.InputSystem.LowLevel.InputEventPtr left, UnityEngine.InputSystem.LowLevel.InputEventPtr right)
  // Offset: 0x514E5E8
  bool operator ==(const ::UnityEngine::InputSystem::LowLevel::InputEventPtr& left, const ::UnityEngine::InputSystem::LowLevel::InputEventPtr& right);
  // static public System.Boolean op_Inequality(UnityEngine.InputSystem.LowLevel.InputEventPtr left, UnityEngine.InputSystem.LowLevel.InputEventPtr right)
  // Offset: 0x514E5F4
  bool operator !=(const ::UnityEngine::InputSystem::LowLevel::InputEventPtr& left, const ::UnityEngine::InputSystem::LowLevel::InputEventPtr& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::InputEventPtr
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_valid
// Il2CppName: get_valid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_valid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_valid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_handled
// Il2CppName: get_handled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_handled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_handled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::set_handled
// Il2CppName: set_handled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(bool)>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::set_handled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "set_handled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::set_id
// Il2CppName: set_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(int)>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::set_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "set_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_sizeInBytes
// Il2CppName: get_sizeInBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_sizeInBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_sizeInBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_deviceId
// Il2CppName: get_deviceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_deviceId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_deviceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::set_deviceId
// Il2CppName: set_deviceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(int)>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::set_deviceId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "set_deviceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(double)>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_internalTime
// Il2CppName: get_internalTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_internalTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_internalTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::set_internalTime
// Il2CppName: set_internalTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(double)>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::set_internalTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "set_internalTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateFormat
// Il2CppName: get_stateFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_stateFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateSizeInBytes
// Il2CppName: get_stateSizeInBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateSizeInBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_stateSizeInBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateOffset
// Il2CppName: get_stateOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::get_stateOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "get_stateOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::IsA
// Il2CppName: IsA
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::Next)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::ToPointer
// Il2CppName: ToPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::ToPointer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "ToPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::From
// Il2CppName: From
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (*)(::UnityEngine::InputSystem::LowLevel::InputEvent*)>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::From)> {
  static const MethodInfo* get() {
    static auto* eventPtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEvent"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "From", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::FromInputEventPtr
// Il2CppName: FromInputEventPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::FromInputEventPtr)> {
  static const MethodInfo* get() {
    static auto* eventPtr = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "FromInputEventPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)(::Il2CppObject*)>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::LowLevel::InputEventPtr::*)()>(&UnityEngine::InputSystem::LowLevel::InputEventPtr::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventPtr), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventPtr::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!