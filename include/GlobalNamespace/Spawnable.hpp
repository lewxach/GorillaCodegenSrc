// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SimpleResizable
  class SimpleResizable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Spawnable
  class Spawnable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Spawnable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Spawnable*, "", "Spawnable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Spawnable
  // [TokenAttribute] Offset: FFFFFFFF
  class Spawnable : public ::Il2CppObject/*, public ::UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    public:
    // public SimpleResizable ResizablePrefab
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::SimpleResizable* ResizablePrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SimpleResizable*) == 0x8);
    // public System.String ClassificationLabel
    // Size: 0x8
    // Offset: 0x18
    ::StringW ClassificationLabel;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _editorClassificationIndex
    // Size: 0x4
    // Offset: 0x20
    int editorClassificationIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Get instance field reference: public SimpleResizable ResizablePrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SimpleResizable*& dyn_ResizablePrefab();
    // Get instance field reference: public System.String ClassificationLabel
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ClassificationLabel();
    // Get instance field reference: private System.Int32 _editorClassificationIndex
    [[deprecated("Use field access instead!")]] int& dyn__editorClassificationIndex();
    // public System.Void OnBeforeSerialize()
    // Offset: 0x2949108
    void OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x294910C
    void OnAfterDeserialize();
    // public System.Void .ctor()
    // Offset: 0x2949558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Spawnable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Spawnable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Spawnable*, creationType>()));
    }
    // static System.Int32 <OnAfterDeserialize>g__IndexOf|4_0(System.String label, System.Collections.Generic.IEnumerable`1<System.String> collection)
    // Offset: 0x2949260
    static int $OnAfterDeserialize$g__IndexOf_4_0(::StringW label, ::System::Collections::Generic::IEnumerable_1<::StringW>* collection);
  }; // Spawnable
  #pragma pack(pop)
  static check_size<sizeof(Spawnable), 32 + sizeof(int)> __GlobalNamespace_SpawnableSizeCheck;
  static_assert(sizeof(Spawnable) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Spawnable::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Spawnable::*)()>(&GlobalNamespace::Spawnable::OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Spawnable*), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Spawnable::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Spawnable::*)()>(&GlobalNamespace::Spawnable::OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Spawnable*), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Spawnable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Spawnable::$OnAfterDeserialize$g__IndexOf_4_0
// Il2CppName: <OnAfterDeserialize>g__IndexOf|4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&GlobalNamespace::Spawnable::$OnAfterDeserialize$g__IndexOf_4_0)> {
  static const MethodInfo* get() {
    static auto* label = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* collection = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Spawnable*), "<OnAfterDeserialize>g__IndexOf|4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{label, collection});
  }
};