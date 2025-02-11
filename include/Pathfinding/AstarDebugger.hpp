// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.VersionedMonoBehaviour
#include "Pathfinding/VersionedMonoBehaviour.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Font
  class Font;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: AstarDebugger
  class AstarDebugger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::AstarDebugger);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::AstarDebugger*, "Pathfinding", "AstarDebugger");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.AstarDebugger
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class AstarDebugger : public ::Pathfinding::VersionedMonoBehaviour {
    public:
    // Nested type: ::Pathfinding::AstarDebugger::GraphPoint
    struct GraphPoint;
    // Nested type: ::Pathfinding::AstarDebugger::PathTypeDebug
    struct PathTypeDebug;
    // Nested type: ::Pathfinding::AstarDebugger::$$c
    class $$c;
    // Size: 0x9
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Pathfinding.AstarDebugger/GraphPoint
    // [TokenAttribute] Offset: FFFFFFFF
    struct GraphPoint/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Single fps
      // Size: 0x4
      // Offset: 0x0
      float fps;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single memory
      // Size: 0x4
      // Offset: 0x4
      float memory;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Boolean collectEvent
      // Size: 0x1
      // Offset: 0x8
      bool collectEvent;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: GraphPoint
      constexpr GraphPoint(float fps_ = {}, float memory_ = {}, bool collectEvent_ = {}) noexcept : fps{fps_}, memory{memory_}, collectEvent{collectEvent_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Single fps
      [[deprecated("Use field access instead!")]] float& dyn_fps();
      // Get instance field reference: public System.Single memory
      [[deprecated("Use field access instead!")]] float& dyn_memory();
      // Get instance field reference: public System.Boolean collectEvent
      [[deprecated("Use field access instead!")]] bool& dyn_collectEvent();
    }; // Pathfinding.AstarDebugger/GraphPoint
    #pragma pack(pop)
    static check_size<sizeof(AstarDebugger::GraphPoint), 8 + sizeof(bool)> __Pathfinding_AstarDebugger_GraphPointSizeCheck;
    static_assert(sizeof(AstarDebugger::GraphPoint) == 0x9);
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Pathfinding.AstarDebugger/PathTypeDebug
    // [TokenAttribute] Offset: FFFFFFFF
    struct PathTypeDebug/*, public ::System::ValueType*/ {
      public:
      public:
      // private System.String name
      // Size: 0x8
      // Offset: 0x0
      ::StringW name;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // private System.Func`1<System.Int32> getSize
      // Size: 0x8
      // Offset: 0x8
      ::System::Func_1<int>* getSize;
      // Field size check
      static_assert(sizeof(::System::Func_1<int>*) == 0x8);
      // private System.Func`1<System.Int32> getTotalCreated
      // Size: 0x8
      // Offset: 0x10
      ::System::Func_1<int>* getTotalCreated;
      // Field size check
      static_assert(sizeof(::System::Func_1<int>*) == 0x8);
      public:
      // Creating value type constructor for type: PathTypeDebug
      constexpr PathTypeDebug(::StringW name_ = {}, ::System::Func_1<int>* getSize_ = {}, ::System::Func_1<int>* getTotalCreated_ = {}) noexcept : name{name_}, getSize{getSize_}, getTotalCreated{getTotalCreated_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private System.String name
      [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
      // Get instance field reference: private System.Func`1<System.Int32> getSize
      [[deprecated("Use field access instead!")]] ::System::Func_1<int>*& dyn_getSize();
      // Get instance field reference: private System.Func`1<System.Int32> getTotalCreated
      [[deprecated("Use field access instead!")]] ::System::Func_1<int>*& dyn_getTotalCreated();
      // public System.Void .ctor(System.String name, System.Func`1<System.Int32> getSize, System.Func`1<System.Int32> getTotalCreated)
      // Offset: 0x29A6B0C
      // ABORTED: conflicts with another method.  PathTypeDebug(::StringW name, ::System::Func_1<int>* getSize, ::System::Func_1<int>* getTotalCreated);
      // public System.Void Print(System.Text.StringBuilder text)
      // Offset: 0x29A5E3C
      void Print(::System::Text::StringBuilder* text);
    }; // Pathfinding.AstarDebugger/PathTypeDebug
    #pragma pack(pop)
    static check_size<sizeof(AstarDebugger::PathTypeDebug), 16 + sizeof(::System::Func_1<int>*)> __Pathfinding_AstarDebugger_PathTypeDebugSizeCheck;
    static_assert(sizeof(AstarDebugger::PathTypeDebug) == 0x18);
    public:
    // public System.Int32 yOffset
    // Size: 0x4
    // Offset: 0x24
    int yOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean show
    // Size: 0x1
    // Offset: 0x28
    bool show;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean showInEditor
    // Size: 0x1
    // Offset: 0x29
    bool showInEditor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean showFPS
    // Size: 0x1
    // Offset: 0x2A
    bool showFPS;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean showPathProfile
    // Size: 0x1
    // Offset: 0x2B
    bool showPathProfile;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean showMemProfile
    // Size: 0x1
    // Offset: 0x2C
    bool showMemProfile;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean showGraph
    // Size: 0x1
    // Offset: 0x2D
    bool showGraph;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showGraph and: graphBufferSize
    char __padding6[0x2] = {};
    // public System.Int32 graphBufferSize
    // Size: 0x4
    // Offset: 0x30
    int graphBufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: graphBufferSize and: font
    char __padding7[0x4] = {};
    // public UnityEngine.Font font
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Font* font;
    // Field size check
    static_assert(sizeof(::UnityEngine::Font*) == 0x8);
    // public System.Int32 fontSize
    // Size: 0x4
    // Offset: 0x40
    int fontSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: fontSize and: text
    char __padding9[0x4] = {};
    // private System.Text.StringBuilder text
    // Size: 0x8
    // Offset: 0x48
    ::System::Text::StringBuilder* text;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private System.String cachedText
    // Size: 0x8
    // Offset: 0x50
    ::StringW cachedText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single lastUpdate
    // Size: 0x4
    // Offset: 0x58
    float lastUpdate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastUpdate and: graph
    char __padding12[0x4] = {};
    // private Pathfinding.AstarDebugger/GraphPoint[] graph
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::Pathfinding::AstarDebugger::GraphPoint> graph;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::AstarDebugger::GraphPoint>) == 0x8);
    // private System.Single delayedDeltaTime
    // Size: 0x4
    // Offset: 0x68
    float delayedDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastCollect
    // Size: 0x4
    // Offset: 0x6C
    float lastCollect;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastCollectNum
    // Size: 0x4
    // Offset: 0x70
    float lastCollectNum;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single delta
    // Size: 0x4
    // Offset: 0x74
    float delta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single lastDeltaTime
    // Size: 0x4
    // Offset: 0x78
    float lastDeltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 allocRate
    // Size: 0x4
    // Offset: 0x7C
    int allocRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 lastAllocMemory
    // Size: 0x4
    // Offset: 0x80
    int lastAllocMemory;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single lastAllocSet
    // Size: 0x4
    // Offset: 0x84
    float lastAllocSet;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 allocMem
    // Size: 0x4
    // Offset: 0x88
    int allocMem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 collectAlloc
    // Size: 0x4
    // Offset: 0x8C
    int collectAlloc;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 peakAlloc
    // Size: 0x4
    // Offset: 0x90
    int peakAlloc;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 fpsDropCounterSize
    // Size: 0x4
    // Offset: 0x94
    int fpsDropCounterSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single[] fpsDrops
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<float> fpsDrops;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private UnityEngine.Rect boxRect
    // Size: 0x10
    // Offset: 0xA0
    ::UnityEngine::Rect boxRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // private UnityEngine.GUIStyle style
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::GUIStyle* style;
    // Field size check
    static_assert(sizeof(::UnityEngine::GUIStyle*) == 0x8);
    // private UnityEngine.Camera cam
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::Camera* cam;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private System.Single graphWidth
    // Size: 0x4
    // Offset: 0xC0
    float graphWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single graphHeight
    // Size: 0x4
    // Offset: 0xC4
    float graphHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single graphOffset
    // Size: 0x4
    // Offset: 0xC8
    float graphOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 maxVecPool
    // Size: 0x4
    // Offset: 0xCC
    int maxVecPool;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 maxNodePool
    // Size: 0x4
    // Offset: 0xD0
    int maxNodePool;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxNodePool and: debugTypes
    char __padding34[0x4] = {};
    // private Pathfinding.AstarDebugger/PathTypeDebug[] debugTypes
    // Size: 0x8
    // Offset: 0xD8
    ::ArrayW<::Pathfinding::AstarDebugger::PathTypeDebug> debugTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::AstarDebugger::PathTypeDebug>) == 0x8);
    public:
    // Get instance field reference: public System.Int32 yOffset
    [[deprecated("Use field access instead!")]] int& dyn_yOffset();
    // Get instance field reference: public System.Boolean show
    [[deprecated("Use field access instead!")]] bool& dyn_show();
    // Get instance field reference: public System.Boolean showInEditor
    [[deprecated("Use field access instead!")]] bool& dyn_showInEditor();
    // Get instance field reference: public System.Boolean showFPS
    [[deprecated("Use field access instead!")]] bool& dyn_showFPS();
    // Get instance field reference: public System.Boolean showPathProfile
    [[deprecated("Use field access instead!")]] bool& dyn_showPathProfile();
    // Get instance field reference: public System.Boolean showMemProfile
    [[deprecated("Use field access instead!")]] bool& dyn_showMemProfile();
    // Get instance field reference: public System.Boolean showGraph
    [[deprecated("Use field access instead!")]] bool& dyn_showGraph();
    // Get instance field reference: public System.Int32 graphBufferSize
    [[deprecated("Use field access instead!")]] int& dyn_graphBufferSize();
    // Get instance field reference: public UnityEngine.Font font
    [[deprecated("Use field access instead!")]] ::UnityEngine::Font*& dyn_font();
    // Get instance field reference: public System.Int32 fontSize
    [[deprecated("Use field access instead!")]] int& dyn_fontSize();
    // Get instance field reference: private System.Text.StringBuilder text
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn_text();
    // Get instance field reference: private System.String cachedText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_cachedText();
    // Get instance field reference: private System.Single lastUpdate
    [[deprecated("Use field access instead!")]] float& dyn_lastUpdate();
    // Get instance field reference: private Pathfinding.AstarDebugger/GraphPoint[] graph
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::AstarDebugger::GraphPoint>& dyn_graph();
    // Get instance field reference: private System.Single delayedDeltaTime
    [[deprecated("Use field access instead!")]] float& dyn_delayedDeltaTime();
    // Get instance field reference: private System.Single lastCollect
    [[deprecated("Use field access instead!")]] float& dyn_lastCollect();
    // Get instance field reference: private System.Single lastCollectNum
    [[deprecated("Use field access instead!")]] float& dyn_lastCollectNum();
    // Get instance field reference: private System.Single delta
    [[deprecated("Use field access instead!")]] float& dyn_delta();
    // Get instance field reference: private System.Single lastDeltaTime
    [[deprecated("Use field access instead!")]] float& dyn_lastDeltaTime();
    // Get instance field reference: private System.Int32 allocRate
    [[deprecated("Use field access instead!")]] int& dyn_allocRate();
    // Get instance field reference: private System.Int32 lastAllocMemory
    [[deprecated("Use field access instead!")]] int& dyn_lastAllocMemory();
    // Get instance field reference: private System.Single lastAllocSet
    [[deprecated("Use field access instead!")]] float& dyn_lastAllocSet();
    // Get instance field reference: private System.Int32 allocMem
    [[deprecated("Use field access instead!")]] int& dyn_allocMem();
    // Get instance field reference: private System.Int32 collectAlloc
    [[deprecated("Use field access instead!")]] int& dyn_collectAlloc();
    // Get instance field reference: private System.Int32 peakAlloc
    [[deprecated("Use field access instead!")]] int& dyn_peakAlloc();
    // Get instance field reference: private System.Int32 fpsDropCounterSize
    [[deprecated("Use field access instead!")]] int& dyn_fpsDropCounterSize();
    // Get instance field reference: private System.Single[] fpsDrops
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_fpsDrops();
    // Get instance field reference: private UnityEngine.Rect boxRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_boxRect();
    // Get instance field reference: private UnityEngine.GUIStyle style
    [[deprecated("Use field access instead!")]] ::UnityEngine::GUIStyle*& dyn_style();
    // Get instance field reference: private UnityEngine.Camera cam
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_cam();
    // Get instance field reference: private System.Single graphWidth
    [[deprecated("Use field access instead!")]] float& dyn_graphWidth();
    // Get instance field reference: private System.Single graphHeight
    [[deprecated("Use field access instead!")]] float& dyn_graphHeight();
    // Get instance field reference: private System.Single graphOffset
    [[deprecated("Use field access instead!")]] float& dyn_graphOffset();
    // Get instance field reference: private System.Int32 maxVecPool
    [[deprecated("Use field access instead!")]] int& dyn_maxVecPool();
    // Get instance field reference: private System.Int32 maxNodePool
    [[deprecated("Use field access instead!")]] int& dyn_maxNodePool();
    // Get instance field reference: private Pathfinding.AstarDebugger/PathTypeDebug[] debugTypes
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::AstarDebugger::PathTypeDebug>& dyn_debugTypes();
    // public System.Void Start()
    // Offset: 0x29A432C
    void Start();
    // public System.Void LateUpdate()
    // Offset: 0x29A44C4
    void LateUpdate();
    // private System.Void DrawGraphLine(System.Int32 index, UnityEngine.Matrix4x4 m, System.Single x1, System.Single x2, System.Single y1, System.Single y2, UnityEngine.Color color)
    // Offset: 0x29A4B88
    void DrawGraphLine(int index, ::UnityEngine::Matrix4x4 m, float x1, float x2, float y1, float y2, ::UnityEngine::Color color);
    // public System.Void OnGUI()
    // Offset: 0x29A4CC4
    void OnGUI();
    // public System.Void .ctor()
    // Offset: 0x29A5F84
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AstarDebugger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::AstarDebugger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AstarDebugger*, creationType>()));
    }
  }; // Pathfinding.AstarDebugger
  #pragma pack(pop)
  static check_size<sizeof(AstarDebugger), 216 + sizeof(::ArrayW<::Pathfinding::AstarDebugger::PathTypeDebug>)> __Pathfinding_AstarDebuggerSizeCheck;
  static_assert(sizeof(AstarDebugger) == 0xE0);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::AstarDebugger::PathTypeDebug, "Pathfinding", "AstarDebugger/PathTypeDebug");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::AstarDebugger::GraphPoint, "Pathfinding", "AstarDebugger/GraphPoint");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::AstarDebugger::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AstarDebugger::*)()>(&Pathfinding::AstarDebugger::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarDebugger*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarDebugger::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AstarDebugger::*)()>(&Pathfinding::AstarDebugger::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarDebugger*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarDebugger::DrawGraphLine
// Il2CppName: DrawGraphLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AstarDebugger::*)(int, ::UnityEngine::Matrix4x4, float, float, float, float, ::UnityEngine::Color)>(&Pathfinding::AstarDebugger::DrawGraphLine)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* x1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* x2 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y2 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarDebugger*), "DrawGraphLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, m, x1, x2, y1, y2, color});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarDebugger::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AstarDebugger::*)()>(&Pathfinding::AstarDebugger::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarDebugger*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarDebugger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
