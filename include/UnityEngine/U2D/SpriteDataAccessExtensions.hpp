// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.VertexAttribute
#include "UnityEngine/Rendering/VertexAttribute.hpp"
// Including type: Unity.Collections.NativeSlice`1
#include "Unity/Collections/NativeSlice_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Skipping declaration: NativeArray`1 because it is already included!
}
// Forward declaring namespace: UnityEngine::U2D
namespace UnityEngine::U2D {
  // Forward declaring type: SpriteChannelInfo
  struct SpriteChannelInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Forward declaring type: SpriteDataAccessExtensions
  class SpriteDataAccessExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::U2D::SpriteDataAccessExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteDataAccessExtensions*, "UnityEngine.U2D", "SpriteDataAccessExtensions");
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.U2D.SpriteDataAccessExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class SpriteDataAccessExtensions : public ::Il2CppObject {
    public:
    // static private System.Void CheckAttributeTypeMatchesAndThrow(UnityEngine.Rendering.VertexAttribute channel)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void CheckAttributeTypeMatchesAndThrow(::UnityEngine::Rendering::VertexAttribute channel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::U2D::SpriteDataAccessExtensions::CheckAttributeTypeMatchesAndThrow");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.U2D", "SpriteDataAccessExtensions", "CheckAttributeTypeMatchesAndThrow", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(channel)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, channel);
    }
    // static public Unity.Collections.NativeSlice`1<T> GetVertexAttribute(UnityEngine.Sprite sprite, UnityEngine.Rendering.VertexAttribute channel)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::Unity::Collections::NativeSlice_1<T> GetVertexAttribute(::UnityEngine::Sprite* sprite, ::UnityEngine::Rendering::VertexAttribute channel) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::U2D::SpriteDataAccessExtensions::GetVertexAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.U2D", "SpriteDataAccessExtensions", "GetVertexAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(sprite), ::il2cpp_utils::ExtractType(channel)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, sprite, channel);
    }
    // static public Unity.Collections.NativeArray`1<System.UInt16> GetIndices(UnityEngine.Sprite sprite)
    // Offset: 0x54D6C00
    static ::Unity::Collections::NativeArray_1<uint16_t> GetIndices(::UnityEngine::Sprite* sprite);
    // static private UnityEngine.U2D.SpriteChannelInfo GetIndicesInfo(UnityEngine.Sprite sprite)
    // Offset: 0x54D6C9C
    static ::UnityEngine::U2D::SpriteChannelInfo GetIndicesInfo(::UnityEngine::Sprite* sprite);
    // static private UnityEngine.U2D.SpriteChannelInfo GetChannelInfo(UnityEngine.Sprite sprite, UnityEngine.Rendering.VertexAttribute channel)
    // Offset: 0x54D6D48
    static ::UnityEngine::U2D::SpriteChannelInfo GetChannelInfo(::UnityEngine::Sprite* sprite, ::UnityEngine::Rendering::VertexAttribute channel);
    // static private System.Void GetIndicesInfo_Injected(UnityEngine.Sprite sprite, out UnityEngine.U2D.SpriteChannelInfo ret)
    // Offset: 0x54D6D04
    static void GetIndicesInfo_Injected(::UnityEngine::Sprite* sprite, ByRef<::UnityEngine::U2D::SpriteChannelInfo> ret);
    // static private System.Void GetChannelInfo_Injected(UnityEngine.Sprite sprite, UnityEngine.Rendering.VertexAttribute channel, out UnityEngine.U2D.SpriteChannelInfo ret)
    // Offset: 0x54D6DB8
    static void GetChannelInfo_Injected(::UnityEngine::Sprite* sprite, ::UnityEngine::Rendering::VertexAttribute channel, ByRef<::UnityEngine::U2D::SpriteChannelInfo> ret);
  }; // UnityEngine.U2D.SpriteDataAccessExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteDataAccessExtensions::CheckAttributeTypeMatchesAndThrow
// Il2CppName: CheckAttributeTypeMatchesAndThrow
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteDataAccessExtensions::GetVertexAttribute
// Il2CppName: GetVertexAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteDataAccessExtensions::GetIndices
// Il2CppName: GetIndices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint16_t> (*)(::UnityEngine::Sprite*)>(&UnityEngine::U2D::SpriteDataAccessExtensions::GetIndices)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteDataAccessExtensions*), "GetIndices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteDataAccessExtensions::GetIndicesInfo
// Il2CppName: GetIndicesInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::U2D::SpriteChannelInfo (*)(::UnityEngine::Sprite*)>(&UnityEngine::U2D::SpriteDataAccessExtensions::GetIndicesInfo)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteDataAccessExtensions*), "GetIndicesInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteDataAccessExtensions::GetChannelInfo
// Il2CppName: GetChannelInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::U2D::SpriteChannelInfo (*)(::UnityEngine::Sprite*, ::UnityEngine::Rendering::VertexAttribute)>(&UnityEngine::U2D::SpriteDataAccessExtensions::GetChannelInfo)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VertexAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteDataAccessExtensions*), "GetChannelInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite, channel});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteDataAccessExtensions::GetIndicesInfo_Injected
// Il2CppName: GetIndicesInfo_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Sprite*, ByRef<::UnityEngine::U2D::SpriteChannelInfo>)>(&UnityEngine::U2D::SpriteDataAccessExtensions::GetIndicesInfo_Injected)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine.U2D", "SpriteChannelInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteDataAccessExtensions*), "GetIndicesInfo_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::U2D::SpriteDataAccessExtensions::GetChannelInfo_Injected
// Il2CppName: GetChannelInfo_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Sprite*, ::UnityEngine::Rendering::VertexAttribute, ByRef<::UnityEngine::U2D::SpriteChannelInfo>)>(&UnityEngine::U2D::SpriteDataAccessExtensions::GetChannelInfo_Injected)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    static auto* channel = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VertexAttribute")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine.U2D", "SpriteChannelInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::SpriteDataAccessExtensions*), "GetChannelInfo_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite, channel, ret});
  }
};
