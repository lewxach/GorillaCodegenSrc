// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Fusion.Internal
namespace Fusion::Internal {
  // Forward declaring type: IUnitySurrogate
  class IUnitySurrogate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Internal::IUnitySurrogate);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Internal::IUnitySurrogate*, "Fusion.Internal", "IUnitySurrogate");
// Type namespace: Fusion.Internal
namespace Fusion::Internal {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Internal.IUnitySurrogate
  // [TokenAttribute] Offset: FFFFFFFF
  class IUnitySurrogate {
    public:
    // public System.Void Read(System.Int32* data, System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Read(int* data, int capacity);
    // public System.Void Write(System.Int32* data, System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Write(int* data, int capacity);
  }; // Fusion.Internal.IUnitySurrogate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Internal::IUnitySurrogate::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Internal::IUnitySurrogate::*)(int*, int)>(&Fusion::Internal::IUnitySurrogate::Read)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Internal::IUnitySurrogate*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, capacity});
  }
};
// Writing MetadataGetter for method: Fusion::Internal::IUnitySurrogate::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Internal::IUnitySurrogate::*)(int*, int)>(&Fusion::Internal::IUnitySurrogate::Write)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Internal::IUnitySurrogate*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, capacity});
  }
};
