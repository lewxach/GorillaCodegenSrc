// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.ContainerPropertyBag`1
#include "Unity/Properties/ContainerPropertyBag_1.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Properties::Internal
namespace Unity::Properties::Internal {
}
// Completed forward declares
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // Forward declaring type: BoundsPropertyBag
  class BoundsPropertyBag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Properties::Internal::BoundsPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::BoundsPropertyBag*, "Unity.Properties.Internal", "BoundsPropertyBag");
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.Properties.Internal.BoundsPropertyBag
  // [TokenAttribute] Offset: FFFFFFFF
  class BoundsPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Bounds> {
    public:
    // Nested type: ::Unity::Properties::Internal::BoundsPropertyBag::CenterProperty
    class CenterProperty;
    // Nested type: ::Unity::Properties::Internal::BoundsPropertyBag::ExtentsProperty
    class ExtentsProperty;
    // public System.Void .ctor()
    // Offset: 0x553871C
    // Implemented from: Unity.Properties.ContainerPropertyBag`1
    // Base method: System.Void ContainerPropertyBag_1::.ctor()
    // Base method: System.Void PropertyBag_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoundsPropertyBag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::BoundsPropertyBag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoundsPropertyBag*, creationType>()));
    }
  }; // Unity.Properties.Internal.BoundsPropertyBag
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Properties::Internal::BoundsPropertyBag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
