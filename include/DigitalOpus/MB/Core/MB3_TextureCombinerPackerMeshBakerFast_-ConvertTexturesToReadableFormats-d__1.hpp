// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerFast
#include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerMeshBakerFast.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBakerFast/<ConvertTexturesToReadableFormats>d__1");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerFast/<ConvertTexturesToReadableFormats>d__1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x43EC02C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x43EC184
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x43EC188
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x43EC1A0
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x43EC1A8
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x43EC1E0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerFast/<ConvertTexturesToReadableFormats>d__1
  #pragma pack(pop)
  static check_size<sizeof(MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1), 24 + sizeof(::Il2CppObject*)> __DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerFast_$ConvertTexturesToReadableFormats$d__1SizeCheck;
  static_assert(sizeof(MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
