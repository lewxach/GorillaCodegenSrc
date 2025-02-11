// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.TypeDispatchData
#include "UnityEngine/TypeDispatchData.hpp"
// Including type: UnityEngine.TransformDispatchData
#include "UnityEngine/TransformDispatchData.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`6<T1, T2, T3, T4, T5, T6>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
  class Action_6;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`8<T1, T2, T3, T4, T5, T6, T7, T8>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
  class Action_8;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ObjectDispatcher
  class ObjectDispatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ObjectDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ObjectDispatcher*, "UnityEngine", "ObjectDispatcher");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ObjectDispatcher
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  class ObjectDispatcher : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ObjectDispatcher::$$c
    class $$c;
    public:
    // private System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get static field: static private System.Action`6<UnityEngine.Object[],System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Action`1<UnityEngine.TypeDispatchData>> s_TypeDispatch
    static ::System::Action_6<::ArrayW<::UnityEngine::Object*>, ::System::IntPtr, ::System::IntPtr, int, int, ::System::Action_1<::UnityEngine::TypeDispatchData>*>* _get_s_TypeDispatch();
    // Set static field: static private System.Action`6<UnityEngine.Object[],System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Action`1<UnityEngine.TypeDispatchData>> s_TypeDispatch
    static void _set_s_TypeDispatch(::System::Action_6<::ArrayW<::UnityEngine::Object*>, ::System::IntPtr, ::System::IntPtr, int, int, ::System::Action_1<::UnityEngine::TypeDispatchData>*>* value);
    // Get static field: static private System.Action`8<System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Action`1<UnityEngine.TransformDispatchData>> s_TransformDispatch
    static ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int, ::System::Action_1<::UnityEngine::TransformDispatchData>*>* _get_s_TransformDispatch();
    // Set static field: static private System.Action`8<System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Action`1<UnityEngine.TransformDispatchData>> s_TransformDispatch
    static void _set_s_TransformDispatch(::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int, ::System::Action_1<::UnityEngine::TransformDispatchData>*>* value);
    // Get instance field reference: private System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // static private System.Void .cctor()
    // Offset: 0x54BEAF8
    static void _cctor();
  }; // UnityEngine.ObjectDispatcher
  #pragma pack(pop)
  static check_size<sizeof(ObjectDispatcher), 16 + sizeof(::System::IntPtr)> __UnityEngine_ObjectDispatcherSizeCheck;
  static_assert(sizeof(ObjectDispatcher) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ObjectDispatcher::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ObjectDispatcher::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ObjectDispatcher*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
