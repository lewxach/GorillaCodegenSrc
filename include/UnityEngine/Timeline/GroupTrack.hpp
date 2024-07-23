// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: GroupTrack
  class GroupTrack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::GroupTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::GroupTrack*, "UnityEngine.Timeline", "GroupTrack");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.GroupTrack
  // [TokenAttribute] Offset: FFFFFFFF
  // [SupportsChildTracksAttribute] Offset: FFFFFFFF
  // [TrackClipTypeAttribute] Offset: FFFFFFFF
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  class GroupTrack : public ::UnityEngine::Timeline::TrackAsset {
    public:
    // override System.Boolean CanCompileClips()
    // Offset: 0x53C69B8
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Boolean TrackAsset::CanCompileClips()
    bool CanCompileClips();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x53C69C0
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> TrackAsset::get_outputs()
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public System.Void .ctor()
    // Offset: 0x53C6A18
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::GroupTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupTrack*, creationType>()));
    }
  }; // UnityEngine.Timeline.GroupTrack
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::GroupTrack::CanCompileClips
// Il2CppName: CanCompileClips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::GroupTrack::*)()>(&UnityEngine::Timeline::GroupTrack::CanCompileClips)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::GroupTrack*), "CanCompileClips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::GroupTrack::get_outputs
// Il2CppName: get_outputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* (UnityEngine::Timeline::GroupTrack::*)()>(&UnityEngine::Timeline::GroupTrack::get_outputs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::GroupTrack*), "get_outputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::GroupTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!