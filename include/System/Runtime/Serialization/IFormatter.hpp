// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: IFormatter
  class IFormatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::IFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IFormatter*, "System.Runtime.Serialization", "IFormatter");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.IFormatter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class IFormatter {
    public:
    // public System.Object Deserialize(System.IO.Stream serializationStream)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* Deserialize(::System::IO::Stream* serializationStream);
  }; // System.Runtime.Serialization.IFormatter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::IFormatter::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::IFormatter::*)(::System::IO::Stream*)>(&System::Runtime::Serialization::IFormatter::Deserialize)> {
  static const MethodInfo* get() {
    static auto* serializationStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::IFormatter*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationStream});
  }
};
