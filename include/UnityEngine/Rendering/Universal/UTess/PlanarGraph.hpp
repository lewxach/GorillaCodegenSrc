// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Mathematics.int2
#include "Unity/Mathematics/int2.hpp"
// Including type: Unity.Mathematics.double2
#include "Unity/Mathematics/double2.hpp"
// Including type: Unity.Mathematics.float2
#include "Unity/Mathematics/float2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
  // Forward declaring type: Allocator
  struct Allocator;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Forward declaring type: PlanarGraph
  struct PlanarGraph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UTess::PlanarGraph, "UnityEngine.Rendering.Universal.UTess", "PlanarGraph");
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.UTess.PlanarGraph
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlanarGraph/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: PlanarGraph
    constexpr PlanarGraph() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly System.Double kEpsilon
    static double _get_kEpsilon();
    // Set static field: static private readonly System.Double kEpsilon
    static void _set_kEpsilon(double value);
    // Get static field: static private readonly System.Int32 kMaxIntersectionTolerance
    static int _get_kMaxIntersectionTolerance();
    // Set static field: static private readonly System.Int32 kMaxIntersectionTolerance
    static void _set_kMaxIntersectionTolerance(int value);
    // static System.Void RemoveDuplicateEdges(ref Unity.Collections.NativeArray`1<Unity.Mathematics.int2> edges, ref System.Int32 edgeCount, Unity.Collections.NativeArray`1<System.Int32> duplicates, System.Int32 duplicateCount)
    // Offset: 0x531BA18
    static void RemoveDuplicateEdges(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>> edges, ByRef<int> edgeCount, ::Unity::Collections::NativeArray_1<int> duplicates, int duplicateCount);
    // static System.Boolean CheckCollinear(Unity.Mathematics.double2 a0, Unity.Mathematics.double2 a1, Unity.Mathematics.double2 b0, Unity.Mathematics.double2 b1)
    // Offset: 0x531BBDC
    static bool CheckCollinear(::Unity::Mathematics::double2 a0, ::Unity::Mathematics::double2 a1, ::Unity::Mathematics::double2 b0, ::Unity::Mathematics::double2 b1);
    // static System.Boolean LineLineIntersection(Unity.Mathematics.double2 a0, Unity.Mathematics.double2 a1, Unity.Mathematics.double2 b0, Unity.Mathematics.double2 b1)
    // Offset: 0x531BD04
    static bool LineLineIntersection(::Unity::Mathematics::double2 a0, ::Unity::Mathematics::double2 a1, ::Unity::Mathematics::double2 b0, ::Unity::Mathematics::double2 b1);
    // static System.Boolean LineLineIntersection(Unity.Mathematics.double2 p1, Unity.Mathematics.double2 p2, Unity.Mathematics.double2 p3, Unity.Mathematics.double2 p4, ref Unity.Mathematics.double2 result)
    // Offset: 0x531C0C0
    static bool LineLineIntersection(::Unity::Mathematics::double2 p1, ::Unity::Mathematics::double2 p2, ::Unity::Mathematics::double2 p3, ::Unity::Mathematics::double2 p4, ByRef<::Unity::Mathematics::double2> result);
    // static System.Boolean CalculateEdgeIntersections(Unity.Collections.NativeArray`1<Unity.Mathematics.int2> edges, System.Int32 edgeCount, Unity.Collections.NativeArray`1<Unity.Mathematics.double2> points, System.Int32 pointCount, ref Unity.Collections.NativeArray`1<Unity.Mathematics.int2> results, ref Unity.Collections.NativeArray`1<Unity.Mathematics.double2> intersects, ref System.Int32 resultCount)
    // Offset: 0x531C224
    static bool CalculateEdgeIntersections(::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2> edges, int edgeCount, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2> points, int pointCount, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>> results, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2>> intersects, ByRef<int> resultCount);
    // static System.Boolean CalculateTJunctions(Unity.Collections.NativeArray`1<Unity.Mathematics.int2> edges, System.Int32 edgeCount, Unity.Collections.NativeArray`1<Unity.Mathematics.double2> points, System.Int32 pointCount, Unity.Collections.NativeArray`1<Unity.Mathematics.int2> results, ref System.Int32 resultCount)
    // Offset: 0x531C5E0
    static bool CalculateTJunctions(::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2> edges, int edgeCount, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2> points, int pointCount, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2> results, ByRef<int> resultCount);
    // static System.Boolean CutEdges(ref Unity.Collections.NativeArray`1<Unity.Mathematics.double2> points, ref System.Int32 pointCount, ref Unity.Collections.NativeArray`1<Unity.Mathematics.int2> edges, ref System.Int32 edgeCount, ref Unity.Collections.NativeArray`1<Unity.Mathematics.int2> tJunctions, ref System.Int32 tJunctionCount, Unity.Collections.NativeArray`1<Unity.Mathematics.int2> intersections, Unity.Collections.NativeArray`1<Unity.Mathematics.double2> intersects, System.Int32 intersectionCount)
    // Offset: 0x531C798
    static bool CutEdges(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2>> points, ByRef<int> pointCount, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>> edges, ByRef<int> edgeCount, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>> tJunctions, ByRef<int> tJunctionCount, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2> intersections, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2> intersects, int intersectionCount);
    // static System.Void RemoveDuplicatePoints(ref Unity.Collections.NativeArray`1<Unity.Mathematics.double2> points, ref System.Int32 pointCount, ref Unity.Collections.NativeArray`1<System.Int32> duplicates, ref System.Int32 duplicateCount, Unity.Collections.Allocator allocator)
    // Offset: 0x531CA50
    static void RemoveDuplicatePoints(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2>> points, ByRef<int> pointCount, ByRef<::Unity::Collections::NativeArray_1<int>> duplicates, ByRef<int> duplicateCount, ::Unity::Collections::Allocator allocator);
    // static System.Boolean Validate(Unity.Collections.Allocator allocator, Unity.Collections.NativeArray`1<Unity.Mathematics.float2> inputPoints, System.Int32 pointCount, Unity.Collections.NativeArray`1<Unity.Mathematics.int2> inputEdges, System.Int32 edgeCount, ref Unity.Collections.NativeArray`1<Unity.Mathematics.float2> outputPoints, ref System.Int32 outputPointCount, ref Unity.Collections.NativeArray`1<Unity.Mathematics.int2> outputEdges, ref System.Int32 outputEdgeCount)
    // Offset: 0x531CD34
    static bool Validate(::Unity::Collections::Allocator allocator, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> inputPoints, int pointCount, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2> inputEdges, int edgeCount, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>> outputPoints, ByRef<int> outputPointCount, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>> outputEdges, ByRef<int> outputEdgeCount);
    // static private System.Void .cctor()
    // Offset: 0x531D2C8
    static void _cctor();
  }; // UnityEngine.Rendering.Universal.UTess.PlanarGraph
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::PlanarGraph::RemoveDuplicateEdges
// Il2CppName: RemoveDuplicateEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>>, ByRef<int>, ::Unity::Collections::NativeArray_1<int>, int)>(&UnityEngine::Rendering::Universal::UTess::PlanarGraph::RemoveDuplicateEdges)> {
  static const MethodInfo* get() {
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->this_arg;
    static auto* edgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* duplicates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* duplicateCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::PlanarGraph), "RemoveDuplicateEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges, edgeCount, duplicates, duplicateCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::PlanarGraph::CheckCollinear
// Il2CppName: CheckCollinear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2, ::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&UnityEngine::Rendering::Universal::UTess::PlanarGraph::CheckCollinear)> {
  static const MethodInfo* get() {
    static auto* a0 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    static auto* a1 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    static auto* b0 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    static auto* b1 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::PlanarGraph), "CheckCollinear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a0, a1, b0, b1});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::PlanarGraph::LineLineIntersection
// Il2CppName: LineLineIntersection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2, ::Unity::Mathematics::double2, ::Unity::Mathematics::double2)>(&UnityEngine::Rendering::Universal::UTess::PlanarGraph::LineLineIntersection)> {
  static const MethodInfo* get() {
    static auto* a0 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    static auto* a1 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    static auto* b0 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    static auto* b1 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::PlanarGraph), "LineLineIntersection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a0, a1, b0, b1});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::PlanarGraph::LineLineIntersection
// Il2CppName: LineLineIntersection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Mathematics::double2, ::Unity::Mathematics::double2, ::Unity::Mathematics::double2, ::Unity::Mathematics::double2, ByRef<::Unity::Mathematics::double2>)>(&UnityEngine::Rendering::Universal::UTess::PlanarGraph::LineLineIntersection)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    static auto* p3 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    static auto* p4 = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::PlanarGraph), "LineLineIntersection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2, p3, p4, result});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::PlanarGraph::CalculateEdgeIntersections
// Il2CppName: CalculateEdgeIntersections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>, int, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2>, int, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>>, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2>>, ByRef<int>)>(&UnityEngine::Rendering::Universal::UTess::PlanarGraph::CalculateEdgeIntersections)> {
  static const MethodInfo* get() {
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->byval_arg;
    static auto* edgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")})->byval_arg;
    static auto* pointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->this_arg;
    static auto* intersects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")})->this_arg;
    static auto* resultCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::PlanarGraph), "CalculateEdgeIntersections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges, edgeCount, points, pointCount, results, intersects, resultCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::PlanarGraph::CalculateTJunctions
// Il2CppName: CalculateTJunctions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>, int, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2>, int, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>, ByRef<int>)>(&UnityEngine::Rendering::Universal::UTess::PlanarGraph::CalculateTJunctions)> {
  static const MethodInfo* get() {
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->byval_arg;
    static auto* edgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")})->byval_arg;
    static auto* pointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->byval_arg;
    static auto* resultCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::PlanarGraph), "CalculateTJunctions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edges, edgeCount, points, pointCount, results, resultCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::PlanarGraph::CutEdges
// Il2CppName: CutEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2>>, ByRef<int>, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>>, ByRef<int>, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>>, ByRef<int>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2>, int)>(&UnityEngine::Rendering::Universal::UTess::PlanarGraph::CutEdges)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")})->this_arg;
    static auto* pointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->this_arg;
    static auto* edgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* tJunctions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->this_arg;
    static auto* tJunctionCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* intersections = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->byval_arg;
    static auto* intersects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")})->byval_arg;
    static auto* intersectionCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::PlanarGraph), "CutEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, pointCount, edges, edgeCount, tJunctions, tJunctionCount, intersections, intersects, intersectionCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::PlanarGraph::RemoveDuplicatePoints
// Il2CppName: RemoveDuplicatePoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::double2>>, ByRef<int>, ByRef<::Unity::Collections::NativeArray_1<int>>, ByRef<int>, ::Unity::Collections::Allocator)>(&UnityEngine::Rendering::Universal::UTess::PlanarGraph::RemoveDuplicatePoints)> {
  static const MethodInfo* get() {
    static auto* points = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "double2")})->this_arg;
    static auto* pointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* duplicates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* duplicateCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* allocator = &::il2cpp_utils::GetClassFromName("Unity.Collections", "Allocator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::PlanarGraph), "RemoveDuplicatePoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, pointCount, duplicates, duplicateCount, allocator});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::PlanarGraph::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Collections::Allocator, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>, int, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>, int, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>, ByRef<int>, ByRef<::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>>, ByRef<int>)>(&UnityEngine::Rendering::Universal::UTess::PlanarGraph::Validate)> {
  static const MethodInfo* get() {
    static auto* allocator = &::il2cpp_utils::GetClassFromName("Unity.Collections", "Allocator")->byval_arg;
    static auto* inputPoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")})->byval_arg;
    static auto* pointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->byval_arg;
    static auto* edgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputPoints = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")})->this_arg;
    static auto* outputPointCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* outputEdges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "int2")})->this_arg;
    static auto* outputEdgeCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::PlanarGraph), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allocator, inputPoints, pointCount, inputEdges, edgeCount, outputPoints, outputPointCount, outputEdges, outputEdgeCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UTess::PlanarGraph::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::UTess::PlanarGraph::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UTess::PlanarGraph), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};