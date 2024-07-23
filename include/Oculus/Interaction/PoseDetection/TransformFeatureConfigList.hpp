// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformFeatureConfig
  class TransformFeatureConfig;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: TransformFeatureConfigList
  class TransformFeatureConfigList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::TransformFeatureConfigList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::TransformFeatureConfigList*, "Oculus.Interaction.PoseDetection", "TransformFeatureConfigList");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.TransformFeatureConfigList
  // [TokenAttribute] Offset: FFFFFFFF
  class TransformFeatureConfigList : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.TransformFeatureConfig> _values
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>* values;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*
    constexpr operator ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*() const noexcept {
      return values;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.TransformFeatureConfig> _values
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*& dyn__values();
    // public System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.TransformFeatureConfig> get_Values()
    // Offset: 0x47F6860
    ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>* get_Values();
    // public System.Void .ctor()
    // Offset: 0x47F6868
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformFeatureConfigList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::TransformFeatureConfigList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformFeatureConfigList*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.TransformFeatureConfigList
  #pragma pack(pop)
  static check_size<sizeof(TransformFeatureConfigList), 16 + sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>*)> __Oculus_Interaction_PoseDetection_TransformFeatureConfigListSizeCheck;
  static_assert(sizeof(TransformFeatureConfigList) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureConfigList::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureConfig*>* (Oculus::Interaction::PoseDetection::TransformFeatureConfigList::*)()>(&Oculus::Interaction::PoseDetection::TransformFeatureConfigList::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::TransformFeatureConfigList*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::TransformFeatureConfigList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!