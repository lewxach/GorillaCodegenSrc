// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.IncrementalReadDecoder
#include "System/Xml/IncrementalReadDecoder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: IncrementalReadDummyDecoder
  class IncrementalReadDummyDecoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::IncrementalReadDummyDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IncrementalReadDummyDecoder*, "System.Xml", "IncrementalReadDummyDecoder");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.IncrementalReadDummyDecoder
  // [TokenAttribute] Offset: FFFFFFFF
  class IncrementalReadDummyDecoder : public ::System::Xml::IncrementalReadDecoder {
    public:
    // override System.Boolean get_IsFull()
    // Offset: 0x4DE2F0C
    // Implemented from: System.Xml.IncrementalReadDecoder
    // Base method: System.Boolean IncrementalReadDecoder::get_IsFull()
    bool get_IsFull();
    // override System.Int32 Decode(System.Char[] chars, System.Int32 startPos, System.Int32 len)
    // Offset: 0x4DE2F14
    // Implemented from: System.Xml.IncrementalReadDecoder
    // Base method: System.Int32 IncrementalReadDecoder::Decode(System.Char[] chars, System.Int32 startPos, System.Int32 len)
    int Decode(::ArrayW<::Il2CppChar> chars, int startPos, int len);
    // public System.Void .ctor()
    // Offset: 0x4DE2F1C
    // Implemented from: System.Xml.IncrementalReadDecoder
    // Base method: System.Void IncrementalReadDecoder::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IncrementalReadDummyDecoder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::IncrementalReadDummyDecoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IncrementalReadDummyDecoder*, creationType>()));
    }
  }; // System.Xml.IncrementalReadDummyDecoder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::IncrementalReadDummyDecoder::get_IsFull
// Il2CppName: get_IsFull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::IncrementalReadDummyDecoder::*)()>(&System::Xml::IncrementalReadDummyDecoder::get_IsFull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IncrementalReadDummyDecoder*), "get_IsFull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::IncrementalReadDummyDecoder::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::IncrementalReadDummyDecoder::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::IncrementalReadDummyDecoder::Decode)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* startPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::IncrementalReadDummyDecoder*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, startPos, len});
  }
};
// Writing MetadataGetter for method: System::Xml::IncrementalReadDummyDecoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
