// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Technie.PhysicsCreator.QHull
namespace Technie::PhysicsCreator::QHull {
  // Forward declaring type: InternalErrorException
  class InternalErrorException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::QHull::InternalErrorException);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::QHull::InternalErrorException*, "Technie.PhysicsCreator.QHull", "InternalErrorException");
// Type namespace: Technie.PhysicsCreator.QHull
namespace Technie::PhysicsCreator::QHull {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.QHull.InternalErrorException
  // [TokenAttribute] Offset: FFFFFFFF
  class InternalErrorException : public ::System::SystemException {
    public:
    // public System.Void .ctor(System.String msg)
    // Offset: 0x503C244
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalErrorException* New_ctor(::StringW msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::QHull::InternalErrorException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalErrorException*, creationType>(msg)));
    }
  }; // Technie.PhysicsCreator.QHull.InternalErrorException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::QHull::InternalErrorException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
