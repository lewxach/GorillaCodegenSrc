// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
}
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XObjectChangeEventArgs
  class XObjectChangeEventArgs;
}
// Completed forward declares
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XObjectChangeAnnotation
  class XObjectChangeAnnotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XObjectChangeAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObjectChangeAnnotation*, "System.Xml.Linq", "XObjectChangeAnnotation");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XObjectChangeAnnotation
  // [TokenAttribute] Offset: FFFFFFFF
  class XObjectChangeAnnotation : public ::Il2CppObject {
    public:
    public:
    // System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs> changing
    // Size: 0x8
    // Offset: 0x10
    ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* changing;
    // Field size check
    static_assert(sizeof(::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*) == 0x8);
    // System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs> changed
    // Size: 0x8
    // Offset: 0x18
    ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* changed;
    // Field size check
    static_assert(sizeof(::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*) == 0x8);
    public:
    // Get instance field reference: System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs> changing
    [[deprecated("Use field access instead!")]] ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*& dyn_changing();
    // Get instance field reference: System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs> changed
    [[deprecated("Use field access instead!")]] ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*& dyn_changed();
  }; // System.Xml.Linq.XObjectChangeAnnotation
  #pragma pack(pop)
  static check_size<sizeof(XObjectChangeAnnotation), 24 + sizeof(::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*)> __System_Xml_Linq_XObjectChangeAnnotationSizeCheck;
  static_assert(sizeof(XObjectChangeAnnotation) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
