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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonView
  class PhotonView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ViewsAndAllocator
  class ViewsAndAllocator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ViewsAndAllocator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ViewsAndAllocator*, "", "ViewsAndAllocator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: ViewsAndAllocator
  // [TokenAttribute] Offset: FFFFFFFF
  class ViewsAndAllocator : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.List`1<Photon.Pun.PhotonView> views
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Photon::Pun::PhotonView*>* views;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Photon::Pun::PhotonView*>*) == 0x8);
    // public System.String path
    // Size: 0x8
    // Offset: 0x18
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 order
    // Size: 0x4
    // Offset: 0x20
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isStatic
    // Size: 0x1
    // Offset: 0x24
    bool isStatic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<Photon.Pun.PhotonView> views
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Photon::Pun::PhotonView*>*& dyn_views();
    // Get instance field reference: public System.String path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_path();
    // Get instance field reference: public System.Int32 order
    [[deprecated("Use field access instead!")]] int& dyn_order();
    // Get instance field reference: public System.Boolean isStatic
    [[deprecated("Use field access instead!")]] bool& dyn_isStatic();
    // public System.Void .ctor()
    // Offset: 0x2789920
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewsAndAllocator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ViewsAndAllocator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewsAndAllocator*, creationType>()));
    }
  }; // ViewsAndAllocator
  #pragma pack(pop)
  static check_size<sizeof(ViewsAndAllocator), 36 + sizeof(bool)> __GlobalNamespace_ViewsAndAllocatorSizeCheck;
  static_assert(sizeof(ViewsAndAllocator) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ViewsAndAllocator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!