// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: ProgressUpdateCancelableDelegate
  class ProgressUpdateCancelableDelegate;
  // Forward declaring type: PriorityQueue`2<TPriority, TValue>
  template<typename TPriority, typename TValue>
  class PriorityQueue_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IComparable`1 because it is already included!
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB3_AgglomerativeClustering
  class MB3_AgglomerativeClustering;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering*, "DigitalOpus.MB.Core", "MB3_AgglomerativeClustering");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_AgglomerativeClustering
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_AgglomerativeClustering : public ::Il2CppObject {
    public:
    // Nested type: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode
    class ClusterNode;
    // Nested type: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::item_s
    class item_s;
    // Nested type: ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterDistance
    class ClusterDistance;
    public:
    // public System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB3_AgglomerativeClustering/item_s> items
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::item_s*>* items;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::item_s*>*) == 0x8);
    // public DigitalOpus.MB.Core.MB3_AgglomerativeClustering/ClusterNode[] clusters
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode*> clusters;
    // Field size check
    static_assert(sizeof(::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode*>) == 0x8);
    // public System.Boolean wasCanceled
    // Size: 0x1
    // Offset: 0x20
    bool wasCanceled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static private System.Int32 MAX_PRIORITY_Q_SIZE
    static constexpr const int MAX_PRIORITY_Q_SIZE = 2048;
    // Get static field: static private System.Int32 MAX_PRIORITY_Q_SIZE
    static int _get_MAX_PRIORITY_Q_SIZE();
    // Set static field: static private System.Int32 MAX_PRIORITY_Q_SIZE
    static void _set_MAX_PRIORITY_Q_SIZE(int value);
    // Get instance field reference: public System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB3_AgglomerativeClustering/item_s> items
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::item_s*>*& dyn_items();
    // Get instance field reference: public DigitalOpus.MB.Core.MB3_AgglomerativeClustering/ClusterNode[] clusters
    [[deprecated("Use field access instead!")]] ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode*>& dyn_clusters();
    // Get instance field reference: public System.Boolean wasCanceled
    [[deprecated("Use field access instead!")]] bool& dyn_wasCanceled();
    // private System.Single euclidean_distance(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x43AC9F0
    float euclidean_distance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);
    // public System.Boolean agglomerate(DigitalOpus.MB.Core.ProgressUpdateCancelableDelegate progFunc)
    // Offset: 0x43ACA88
    bool agglomerate(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate* progFunc);
    // private System.Single _RefillPriorityQWithSome(DigitalOpus.MB.Core.PriorityQueue`2<System.Single,DigitalOpus.MB.Core.MB3_AgglomerativeClustering/ClusterDistance> pq, System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB3_AgglomerativeClustering/ClusterNode> unclustered, DigitalOpus.MB.Core.MB3_AgglomerativeClustering/ClusterNode[] clusters, DigitalOpus.MB.Core.ProgressUpdateCancelableDelegate progFunc)
    // Offset: 0x43ADA28
    float _RefillPriorityQWithSome(::DigitalOpus::MB::Core::PriorityQueue_2<float, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterDistance*>* pq, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode*>* unclustered, ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode*> clusters, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate* progFunc);
    // public System.Int32 TestRun(System.Collections.Generic.List`1<UnityEngine.GameObject> gos)
    // Offset: 0x43AE07C
    int TestRun(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos);
    // static public System.Void Main()
    // Offset: 0x43AE284
    static void Main();
    // static public T NthSmallestElement(System.Collections.Generic.List`1<T> array, System.Int32 n)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T NthSmallestElement(::System::Collections::Generic::List_1<T>* array, int n) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::System::IComparable_1<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::NthSmallestElement");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("DigitalOpus.MB.Core", "MB3_AgglomerativeClustering", "NthSmallestElement", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(n)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, array, n);
    }
    // static private System.Collections.Generic.List`1<T> QuickSelectSmallest(System.Collections.Generic.List`1<T> input, System.Int32 n)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::List_1<T>* QuickSelectSmallest(::System::Collections::Generic::List_1<T>* input, int n) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::System::IComparable_1<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::QuickSelectSmallest");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("DigitalOpus.MB.Core", "MB3_AgglomerativeClustering", "QuickSelectSmallest", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(input), ::il2cpp_utils::ExtractType(n)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, input, n);
    }
    // static private System.Int32 QuickSelectPartition(System.Collections.Generic.List`1<T> array, System.Int32 startIndex, System.Int32 endIndex, System.Int32 pivotIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static int QuickSelectPartition(::System::Collections::Generic::List_1<T>* array, int startIndex, int endIndex, int pivotIndex) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::System::IComparable_1<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::QuickSelectPartition");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("DigitalOpus.MB.Core", "MB3_AgglomerativeClustering", "QuickSelectPartition", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(startIndex), ::il2cpp_utils::ExtractType(endIndex), ::il2cpp_utils::ExtractType(pivotIndex)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, array, startIndex, endIndex, pivotIndex);
    }
    // static private System.Void Swap(System.Collections.Generic.List`1<T> array, System.Int32 index1, System.Int32 index2)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Swap(::System::Collections::Generic::List_1<T>* array, int index1, int index2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::Swap");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("DigitalOpus.MB.Core", "MB3_AgglomerativeClustering", "Swap", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(index1), ::il2cpp_utils::ExtractType(index2)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, array, index1, index2);
    }
    // public System.Void .ctor()
    // Offset: 0x43AE3FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_AgglomerativeClustering* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_AgglomerativeClustering*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_AgglomerativeClustering
  #pragma pack(pop)
  static check_size<sizeof(MB3_AgglomerativeClustering), 32 + sizeof(bool)> __DigitalOpus_MB_Core_MB3_AgglomerativeClusteringSizeCheck;
  static_assert(sizeof(MB3_AgglomerativeClustering) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_AgglomerativeClustering::euclidean_distance
// Il2CppName: euclidean_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DigitalOpus::MB::Core::MB3_AgglomerativeClustering::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&DigitalOpus::MB::Core::MB3_AgglomerativeClustering::euclidean_distance)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_AgglomerativeClustering*), "euclidean_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_AgglomerativeClustering::agglomerate
// Il2CppName: agglomerate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_AgglomerativeClustering::*)(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*)>(&DigitalOpus::MB::Core::MB3_AgglomerativeClustering::agglomerate)> {
  static const MethodInfo* get() {
    static auto* progFunc = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ProgressUpdateCancelableDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_AgglomerativeClustering*), "agglomerate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progFunc});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_AgglomerativeClustering::_RefillPriorityQWithSome
// Il2CppName: _RefillPriorityQWithSome
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DigitalOpus::MB::Core::MB3_AgglomerativeClustering::*)(::DigitalOpus::MB::Core::PriorityQueue_2<float, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterDistance*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode*>*, ::ArrayW<::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::ClusterNode*>, ::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*)>(&DigitalOpus::MB::Core::MB3_AgglomerativeClustering::_RefillPriorityQWithSome)> {
  static const MethodInfo* get() {
    static auto* pq = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "PriorityQueue`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single"), ::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_AgglomerativeClustering/ClusterDistance")})->byval_arg;
    static auto* unclustered = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_AgglomerativeClustering/ClusterNode")})->byval_arg;
    static auto* clusters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_AgglomerativeClustering/ClusterNode"), 1)->byval_arg;
    static auto* progFunc = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ProgressUpdateCancelableDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_AgglomerativeClustering*), "_RefillPriorityQWithSome", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pq, unclustered, clusters, progFunc});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_AgglomerativeClustering::TestRun
// Il2CppName: TestRun
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MB3_AgglomerativeClustering::*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)>(&DigitalOpus::MB::Core::MB3_AgglomerativeClustering::TestRun)> {
  static const MethodInfo* get() {
    static auto* gos = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_AgglomerativeClustering*), "TestRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gos});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_AgglomerativeClustering::Main
// Il2CppName: Main
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&DigitalOpus::MB::Core::MB3_AgglomerativeClustering::Main)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_AgglomerativeClustering*), "Main", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_AgglomerativeClustering::NthSmallestElement
// Il2CppName: NthSmallestElement
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_AgglomerativeClustering::QuickSelectSmallest
// Il2CppName: QuickSelectSmallest
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_AgglomerativeClustering::QuickSelectPartition
// Il2CppName: QuickSelectPartition
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_AgglomerativeClustering::Swap
// Il2CppName: Swap
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_AgglomerativeClustering::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
