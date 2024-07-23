// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Keyframe
#include "UnityEngine/Keyframe.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WrapMode
  struct WrapMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AnimationCurve);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationCurve*, "UnityEngine", "AnimationCurve");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimationCurve
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  class AnimationCurve : public ::Il2CppObject/*, public ::System::IEquatable_1<::UnityEngine::AnimationCurve*>*/ {
    public:
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::AnimationCurve*>
    operator ::System::IEquatable_1<::UnityEngine::AnimationCurve*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::AnimationCurve*>*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x547A1B8
    static void Internal_Destroy(::System::IntPtr ptr);
    // static private System.IntPtr Internal_Create(UnityEngine.Keyframe[] keys)
    // Offset: 0x547A1F4
    static ::System::IntPtr Internal_Create(::ArrayW<::UnityEngine::Keyframe> keys);
    // private System.Boolean Internal_Equals(System.IntPtr other)
    // Offset: 0x547A230
    bool Internal_Equals(::System::IntPtr other);
    // public System.Single Evaluate(System.Single time)
    // Offset: 0x547A330
    float Evaluate(float time);
    // public UnityEngine.Keyframe[] get_keys()
    // Offset: 0x547A37C
    ::ArrayW<::UnityEngine::Keyframe> get_keys();
    // public System.Void set_keys(UnityEngine.Keyframe[] value)
    // Offset: 0x547A3F4
    void set_keys(::ArrayW<::UnityEngine::Keyframe> value);
    // public System.Int32 AddKey(UnityEngine.Keyframe key)
    // Offset: 0x547A47C
    int AddKey(::UnityEngine::Keyframe key);
    // private System.Int32 AddKey_Internal(UnityEngine.Keyframe key)
    // Offset: 0x547A4D8
    int AddKey_Internal(::UnityEngine::Keyframe key);
    // public UnityEngine.Keyframe get_Item(System.Int32 index)
    // Offset: 0x547A560
    ::UnityEngine::Keyframe get_Item(int index);
    // public System.Int32 get_length()
    // Offset: 0x547A668
    int get_length();
    // private System.Void SetKeys(UnityEngine.Keyframe[] keys)
    // Offset: 0x547A438
    void SetKeys(::ArrayW<::UnityEngine::Keyframe> keys);
    // private UnityEngine.Keyframe GetKey(System.Int32 index)
    // Offset: 0x547A5EC
    ::UnityEngine::Keyframe GetKey(int index);
    // private UnityEngine.Keyframe[] GetKeys()
    // Offset: 0x547A3B8
    ::ArrayW<::UnityEngine::Keyframe> GetKeys();
    // static public UnityEngine.AnimationCurve Constant(System.Single timeStart, System.Single timeEnd, System.Single value)
    // Offset: 0x547A6F8
    static ::UnityEngine::AnimationCurve* Constant(float timeStart, float timeEnd, float value);
    // static public UnityEngine.AnimationCurve Linear(System.Single timeStart, System.Single valueStart, System.Single timeEnd, System.Single valueEnd)
    // Offset: 0x547A708
    static ::UnityEngine::AnimationCurve* Linear(float timeStart, float valueStart, float timeEnd, float valueEnd);
    // static public UnityEngine.AnimationCurve EaseInOut(System.Single timeStart, System.Single valueStart, System.Single timeEnd, System.Single valueEnd)
    // Offset: 0x547A894
    static ::UnityEngine::AnimationCurve* EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd);
    // public UnityEngine.WrapMode get_preWrapMode()
    // Offset: 0x547A9C4
    ::UnityEngine::WrapMode get_preWrapMode();
    // public UnityEngine.WrapMode get_postWrapMode()
    // Offset: 0x547AA00
    ::UnityEngine::WrapMode get_postWrapMode();
    // public System.Void .ctor(params UnityEngine.Keyframe[] keys)
    // Offset: 0x547A844
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationCurve* New_ctor(::ArrayW<::UnityEngine::Keyframe> keys) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AnimationCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationCurve*, creationType>(keys)));
    }
    // public System.Void .ctor()
    // Offset: 0x547AA3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationCurve* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AnimationCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationCurve*, creationType>()));
    }
    // public System.Boolean Equals(UnityEngine.AnimationCurve other)
    // Offset: 0x547AB94
    bool Equals(::UnityEngine::AnimationCurve* other);
    // private System.Int32 AddKey_Internal_Injected(ref UnityEngine.Keyframe key)
    // Offset: 0x547A51C
    int AddKey_Internal_Injected(ByRef<::UnityEngine::Keyframe> key);
    // private System.Void GetKey_Injected(System.Int32 index, out UnityEngine.Keyframe ret)
    // Offset: 0x547A6A4
    void GetKey_Injected(int index, ByRef<::UnityEngine::Keyframe> ret);
    // protected override System.Void Finalize()
    // Offset: 0x547A274
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x547AA88
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x547AC5C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.AnimationCurve
  #pragma pack(pop)
  static check_size<sizeof(AnimationCurve), 16 + sizeof(::System::IntPtr)> __UnityEngine_AnimationCurveSizeCheck;
  static_assert(sizeof(AnimationCurve) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Internal_Destroy
// Il2CppName: Internal_Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::AnimationCurve::Internal_Destroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Internal_Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<::UnityEngine::Keyframe>)>(&UnityEngine::AnimationCurve::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* keys = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Keyframe"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keys});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Internal_Equals
// Il2CppName: Internal_Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationCurve::*)(::System::IntPtr)>(&UnityEngine::AnimationCurve::Internal_Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Internal_Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AnimationCurve::*)(float)>(&UnityEngine::AnimationCurve::Evaluate)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::get_keys
// Il2CppName: get_keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Keyframe> (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::get_keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "get_keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::set_keys
// Il2CppName: set_keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationCurve::*)(::ArrayW<::UnityEngine::Keyframe>)>(&UnityEngine::AnimationCurve::set_keys)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Keyframe"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "set_keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::AddKey
// Il2CppName: AddKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimationCurve::*)(::UnityEngine::Keyframe)>(&UnityEngine::AnimationCurve::AddKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "Keyframe")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "AddKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::AddKey_Internal
// Il2CppName: AddKey_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimationCurve::*)(::UnityEngine::Keyframe)>(&UnityEngine::AnimationCurve::AddKey_Internal)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "Keyframe")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "AddKey_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Keyframe (UnityEngine::AnimationCurve::*)(int)>(&UnityEngine::AnimationCurve::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::SetKeys
// Il2CppName: SetKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationCurve::*)(::ArrayW<::UnityEngine::Keyframe>)>(&UnityEngine::AnimationCurve::SetKeys)> {
  static const MethodInfo* get() {
    static auto* keys = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Keyframe"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "SetKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keys});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Keyframe (UnityEngine::AnimationCurve::*)(int)>(&UnityEngine::AnimationCurve::GetKey)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::GetKeys
// Il2CppName: GetKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Keyframe> (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::GetKeys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "GetKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Constant
// Il2CppName: Constant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (*)(float, float, float)>(&UnityEngine::AnimationCurve::Constant)> {
  static const MethodInfo* get() {
    static auto* timeStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Constant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeStart, timeEnd, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Linear
// Il2CppName: Linear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (*)(float, float, float, float)>(&UnityEngine::AnimationCurve::Linear)> {
  static const MethodInfo* get() {
    static auto* timeStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* valueStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* valueEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Linear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeStart, valueStart, timeEnd, valueEnd});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::EaseInOut
// Il2CppName: EaseInOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (*)(float, float, float, float)>(&UnityEngine::AnimationCurve::EaseInOut)> {
  static const MethodInfo* get() {
    static auto* timeStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* valueStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* valueEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "EaseInOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeStart, valueStart, timeEnd, valueEnd});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::get_preWrapMode
// Il2CppName: get_preWrapMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WrapMode (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::get_preWrapMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "get_preWrapMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::get_postWrapMode
// Il2CppName: get_postWrapMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WrapMode (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::get_postWrapMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "get_postWrapMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationCurve::*)(::UnityEngine::AnimationCurve*)>(&UnityEngine::AnimationCurve::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::AddKey_Internal_Injected
// Il2CppName: AddKey_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimationCurve::*)(ByRef<::UnityEngine::Keyframe>)>(&UnityEngine::AnimationCurve::AddKey_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "Keyframe")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "AddKey_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::GetKey_Injected
// Il2CppName: GetKey_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationCurve::*)(int, ByRef<::UnityEngine::Keyframe>)>(&UnityEngine::AnimationCurve::GetKey_Injected)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Keyframe")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "GetKey_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationCurve::*)(::Il2CppObject*)>(&UnityEngine::AnimationCurve::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};