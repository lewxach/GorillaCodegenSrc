// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRFaceExpressions
#include "GlobalNamespace/OVRFaceExpressions.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator, "", "OVRFaceExpressions/FaceExpressionsEnumerator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRFaceExpressions/FaceExpressionsEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRFaceExpressions::FaceExpressionsEnumerator/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerator_1<float>*/ {
    public:
    public:
    // private System.Single[] _faceExpressions
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<float> faceExpressions;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x8
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _count
    // Size: 0x4
    // Offset: 0xC
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FaceExpressionsEnumerator
    constexpr FaceExpressionsEnumerator(::ArrayW<float> faceExpressions_ = ::ArrayW<float>(static_cast<void*>(nullptr)), int index_ = {}, int count_ = {}) noexcept : faceExpressions{faceExpressions_}, index{index_}, count{count_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<float>
    operator ::System::Collections::Generic::IEnumerator_1<float>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<float>*>(this);
    }
    // Get instance field reference: private System.Single[] _faceExpressions
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__faceExpressions();
    // Get instance field reference: private System.Int32 _index
    [[deprecated("Use field access instead!")]] int& dyn__index();
    // Get instance field reference: private System.Int32 _count
    [[deprecated("Use field access instead!")]] int& dyn__count();
    // System.Void .ctor(System.Single[] array)
    // Offset: 0x48BA690
    FaceExpressionsEnumerator(::ArrayW<float> array);
    // public System.Boolean MoveNext()
    // Offset: 0x48BA7A8
    bool MoveNext();
    // public System.Single get_Current()
    // Offset: 0x48BA7C4
    float get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x48BA7F8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Reset()
    // Offset: 0x48BA858
    void Reset();
    // public System.Void Dispose()
    // Offset: 0x48BA864
    void Dispose();
  }; // OVRFaceExpressions/FaceExpressionsEnumerator
  #pragma pack(pop)
  static check_size<sizeof(OVRFaceExpressions::FaceExpressionsEnumerator), 12 + sizeof(int)> __GlobalNamespace_OVRFaceExpressions_FaceExpressionsEnumeratorSizeCheck;
  static_assert(sizeof(OVRFaceExpressions::FaceExpressionsEnumerator) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::FaceExpressionsEnumerator
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::*)()>(&GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::*)()>(&GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::*)()>(&GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::*)()>(&GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::*)()>(&GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRFaceExpressions::FaceExpressionsEnumerator), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
