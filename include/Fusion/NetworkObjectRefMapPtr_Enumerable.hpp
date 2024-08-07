// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkObjectRefMapPtr
#include "Fusion/NetworkObjectRefMapPtr.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: Fusion.NetworkObjectRefMapPtr/ObjectEntry
#include "Fusion/NetworkObjectRefMapPtr_ObjectEntry.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkObjectRefMapPtr::Enumerable, "Fusion", "NetworkObjectRefMapPtr/Enumerable");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkObjectRefMapPtr/Enumerable
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkObjectRefMapPtr::Enumerable/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerable_1<::Fusion::NetworkObjectRefMapPtr::ObjectEntry>*/ {
    public:
    public:
    // private Fusion.NetworkObjectRefMapPtr* _map
    // Size: 0x8
    // Offset: 0x0
    ::Fusion::NetworkObjectRefMapPtr* map;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkObjectRefMapPtr*) == 0x8);
    public:
    // Creating value type constructor for type: Enumerable
    constexpr Enumerable(::Fusion::NetworkObjectRefMapPtr* map_ = {}) noexcept : map{map_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Fusion::NetworkObjectRefMapPtr::ObjectEntry>
    operator ::System::Collections::Generic::IEnumerable_1<::Fusion::NetworkObjectRefMapPtr::ObjectEntry>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::NetworkObjectRefMapPtr::ObjectEntry>*>(this);
    }
    // Creating conversion operator: operator ::Fusion::NetworkObjectRefMapPtr*
    constexpr operator ::Fusion::NetworkObjectRefMapPtr*() const noexcept {
      return map;
    }
    // Get instance field reference: private Fusion.NetworkObjectRefMapPtr* _map
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObjectRefMapPtr*& dyn__map();
    // public System.Void .ctor(Fusion.NetworkObjectRefMapPtr* map)
    // Offset: 0x2B4EAAC
    // ABORTED: conflicts with another method.  Enumerable(::Fusion::NetworkObjectRefMapPtr* map);
    // public Fusion.NetworkObjectRefMapPtr/Enumerator GetEnumerator()
    // Offset: 0x2B4EAB4
    ::Fusion::NetworkObjectRefMapPtr::Enumerator GetEnumerator();
    // private System.Collections.Generic.IEnumerator`1<Fusion.NetworkObjectRefMapPtr/ObjectEntry> System.Collections.Generic.IEnumerable<Fusion.NetworkObjectRefMapPtr.ObjectEntry>.GetEnumerator()
    // Offset: 0x2B4EAD0
    ::System::Collections::Generic::IEnumerator_1<::Fusion::NetworkObjectRefMapPtr::ObjectEntry>* System_Collections_Generic_IEnumerable$Fusion_NetworkObjectRefMapPtr_ObjectEntry$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x2B4EB30
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Fusion.NetworkObjectRefMapPtr/Enumerable
  #pragma pack(pop)
  static check_size<sizeof(NetworkObjectRefMapPtr::Enumerable), 0 + sizeof(::Fusion::NetworkObjectRefMapPtr*)> __Fusion_NetworkObjectRefMapPtr_EnumerableSizeCheck;
  static_assert(sizeof(NetworkObjectRefMapPtr::Enumerable) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkObjectRefMapPtr::Enumerable::Enumerable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkObjectRefMapPtr::Enumerable::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkObjectRefMapPtr::Enumerator (Fusion::NetworkObjectRefMapPtr::Enumerable::*)()>(&Fusion::NetworkObjectRefMapPtr::Enumerable::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectRefMapPtr::Enumerable), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectRefMapPtr::Enumerable::System_Collections_Generic_IEnumerable$Fusion_NetworkObjectRefMapPtr_ObjectEntry$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<Fusion.NetworkObjectRefMapPtr.ObjectEntry>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::NetworkObjectRefMapPtr::ObjectEntry>* (Fusion::NetworkObjectRefMapPtr::Enumerable::*)()>(&Fusion::NetworkObjectRefMapPtr::Enumerable::System_Collections_Generic_IEnumerable$Fusion_NetworkObjectRefMapPtr_ObjectEntry$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectRefMapPtr::Enumerable), "System.Collections.Generic.IEnumerable<Fusion.NetworkObjectRefMapPtr.ObjectEntry>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectRefMapPtr::Enumerable::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Fusion::NetworkObjectRefMapPtr::Enumerable::*)()>(&Fusion::NetworkObjectRefMapPtr::Enumerable::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectRefMapPtr::Enumerable), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
