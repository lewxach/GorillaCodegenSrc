// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayableOutput
#include "UnityEngine/Playables/IPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationPlayableOutput
  struct AnimationPlayableOutput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPlayableOutput, "UnityEngine.Animations", "AnimationPlayableOutput");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationPlayableOutput
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct AnimationPlayableOutput/*, public ::System::ValueType, public ::UnityEngine::Playables::IPlayableOutput*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableOutputHandle) == 0xC);
    public:
    // Creating value type constructor for type: AnimationPlayableOutput
    constexpr AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Playables::IPlayableOutput
    operator ::UnityEngine::Playables::IPlayableOutput() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::IPlayableOutput*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Playables::PlayableOutputHandle
    constexpr operator ::UnityEngine::Playables::PlayableOutputHandle() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private UnityEngine.Playables.PlayableOutputHandle m_Handle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableOutputHandle& dyn_m_Handle();
    // static public UnityEngine.Animations.AnimationPlayableOutput Create(UnityEngine.Playables.PlayableGraph graph, System.String name, UnityEngine.Animator target)
    // Offset: 0x546AC70
    static ::UnityEngine::Animations::AnimationPlayableOutput Create(::UnityEngine::Playables::PlayableGraph graph, ::StringW name, ::UnityEngine::Animator* target);
    // System.Void .ctor(UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x546C980
    // ABORTED: conflicts with another method.  AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle handle);
    // static public UnityEngine.Animations.AnimationPlayableOutput get_Null()
    // Offset: 0x546C904
    static ::UnityEngine::Animations::AnimationPlayableOutput get_Null();
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0x546A9C8
    ::UnityEngine::Playables::PlayableOutputHandle GetHandle();
    // static public UnityEngine.Animations.AnimationPlayableOutput op_Explicit(UnityEngine.Playables.PlayableOutput output)
    // Offset: 0x546CA80
    explicit AnimationPlayableOutput(::UnityEngine::Playables::PlayableOutput& output);
    // public UnityEngine.Animator GetTarget()
    // Offset: 0x546CAC4
    ::UnityEngine::Animator* GetTarget();
    // public System.Void SetTarget(UnityEngine.Animator value)
    // Offset: 0x546CA3C
    void SetTarget(::UnityEngine::Animator* value);
    // static private UnityEngine.Animator InternalGetTarget(ref UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x546CB00
    static ::UnityEngine::Animator* InternalGetTarget(ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle);
    // static private System.Void InternalSetTarget(ref UnityEngine.Playables.PlayableOutputHandle handle, UnityEngine.Animator target)
    // Offset: 0x546CB3C
    static void InternalSetTarget(ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle, ::UnityEngine::Animator* target);
  }; // UnityEngine.Animations.AnimationPlayableOutput
  #pragma pack(pop)
  static check_size<sizeof(AnimationPlayableOutput), 0 + sizeof(::UnityEngine::Playables::PlayableOutputHandle)> __UnityEngine_Animations_AnimationPlayableOutputSizeCheck;
  static_assert(sizeof(AnimationPlayableOutput) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableOutput::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::AnimationPlayableOutput (*)(::UnityEngine::Playables::PlayableGraph, ::StringW, ::UnityEngine::Animator*)>(&UnityEngine::Animations::AnimationPlayableOutput::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPlayableOutput), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, name, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableOutput::AnimationPlayableOutput
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableOutput::get_Null
// Il2CppName: get_Null
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::AnimationPlayableOutput (*)()>(&UnityEngine::Animations::AnimationPlayableOutput::get_Null)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPlayableOutput), "get_Null", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableOutput::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (UnityEngine::Animations::AnimationPlayableOutput::*)()>(&UnityEngine::Animations::AnimationPlayableOutput::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPlayableOutput), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableOutput::AnimationPlayableOutput
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableOutput::GetTarget
// Il2CppName: GetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animator* (UnityEngine::Animations::AnimationPlayableOutput::*)()>(&UnityEngine::Animations::AnimationPlayableOutput::GetTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPlayableOutput), "GetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableOutput::SetTarget
// Il2CppName: SetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::AnimationPlayableOutput::*)(::UnityEngine::Animator*)>(&UnityEngine::Animations::AnimationPlayableOutput::SetTarget)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPlayableOutput), "SetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableOutput::InternalGetTarget
// Il2CppName: InternalGetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animator* (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>)>(&UnityEngine::Animations::AnimationPlayableOutput::InternalGetTarget)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPlayableOutput), "InternalGetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableOutput::InternalSetTarget
// Il2CppName: InternalSetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>, ::UnityEngine::Animator*)>(&UnityEngine::Animations::AnimationPlayableOutput::InternalSetTarget)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPlayableOutput), "InternalSetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, target});
  }
};
