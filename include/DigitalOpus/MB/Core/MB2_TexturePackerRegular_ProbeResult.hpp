// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB2_TexturePackerRegular
#include "DigitalOpus/MB/Core/MB2_TexturePackerRegular.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult*, "DigitalOpus.MB.Core", "MB2_TexturePackerRegular/ProbeResult");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB2_TexturePackerRegular/ProbeResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MB2_TexturePackerRegular::ProbeResult : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 w
    // Size: 0x4
    // Offset: 0x10
    int w;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 h
    // Size: 0x4
    // Offset: 0x14
    int h;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 outW
    // Size: 0x4
    // Offset: 0x18
    int outW;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 outH
    // Size: 0x4
    // Offset: 0x1C
    int outH;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public DigitalOpus.MB.Core.MB2_TexturePackerRegular/Node root
    // Size: 0x8
    // Offset: 0x20
    ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node* root;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node*) == 0x8);
    // public System.Boolean largerOrEqualToMaxDim
    // Size: 0x1
    // Offset: 0x28
    bool largerOrEqualToMaxDim;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: largerOrEqualToMaxDim and: efficiency
    char __padding5[0x3] = {};
    // public System.Single efficiency
    // Size: 0x4
    // Offset: 0x2C
    float efficiency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single squareness
    // Size: 0x4
    // Offset: 0x30
    float squareness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single totalAtlasArea
    // Size: 0x4
    // Offset: 0x34
    float totalAtlasArea;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 numAtlases
    // Size: 0x4
    // Offset: 0x38
    int numAtlases;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 w
    [[deprecated("Use field access instead!")]] int& dyn_w();
    // Get instance field reference: public System.Int32 h
    [[deprecated("Use field access instead!")]] int& dyn_h();
    // Get instance field reference: public System.Int32 outW
    [[deprecated("Use field access instead!")]] int& dyn_outW();
    // Get instance field reference: public System.Int32 outH
    [[deprecated("Use field access instead!")]] int& dyn_outH();
    // Get instance field reference: public DigitalOpus.MB.Core.MB2_TexturePackerRegular/Node root
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node*& dyn_root();
    // Get instance field reference: public System.Boolean largerOrEqualToMaxDim
    [[deprecated("Use field access instead!")]] bool& dyn_largerOrEqualToMaxDim();
    // Get instance field reference: public System.Single efficiency
    [[deprecated("Use field access instead!")]] float& dyn_efficiency();
    // Get instance field reference: public System.Single squareness
    [[deprecated("Use field access instead!")]] float& dyn_squareness();
    // Get instance field reference: public System.Single totalAtlasArea
    [[deprecated("Use field access instead!")]] float& dyn_totalAtlasArea();
    // Get instance field reference: public System.Int32 numAtlases
    [[deprecated("Use field access instead!")]] int& dyn_numAtlases();
    // public System.Void Set(System.Int32 ww, System.Int32 hh, System.Int32 outw, System.Int32 outh, DigitalOpus.MB.Core.MB2_TexturePackerRegular/Node r, System.Boolean fits, System.Single e, System.Single sq)
    // Offset: 0x43D6EC0
    void Set(int ww, int hh, int outw, int outh, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node* r, bool fits, float e, float sq);
    // public System.Single GetScore(System.Boolean doPowerOfTwoScore)
    // Offset: 0x43DA190
    float GetScore(bool doPowerOfTwoScore);
    // public System.Void PrintTree()
    // Offset: 0x43DA1E0
    void PrintTree();
    // public System.Void .ctor()
    // Offset: 0x43DA188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB2_TexturePackerRegular::ProbeResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB2_TexturePackerRegular::ProbeResult*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB2_TexturePackerRegular/ProbeResult
  #pragma pack(pop)
  static check_size<sizeof(MB2_TexturePackerRegular::ProbeResult), 56 + sizeof(int)> __DigitalOpus_MB_Core_MB2_TexturePackerRegular_ProbeResultSizeCheck;
  static_assert(sizeof(MB2_TexturePackerRegular::ProbeResult) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult::*)(int, int, int, int, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node*, bool, float, float)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult::Set)> {
  static const MethodInfo* get() {
    static auto* ww = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hh = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outw = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outh = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePackerRegular/Node")->byval_arg;
    static auto* fits = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sq = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ww, hh, outw, outh, r, fits, e, sq});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult::GetScore
// Il2CppName: GetScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult::*)(bool)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult::GetScore)> {
  static const MethodInfo* get() {
    static auto* doPowerOfTwoScore = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult*), "GetScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{doPowerOfTwoScore});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult::PrintTree
// Il2CppName: PrintTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult::*)()>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult::PrintTree)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult*), "PrintTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
