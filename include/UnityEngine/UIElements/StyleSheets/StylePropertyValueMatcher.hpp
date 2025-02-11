// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
#include "UnityEngine/UIElements/StyleSheets/BaseStyleMatcher.hpp"
// Including type: UnityEngine.UIElements.StyleSheets.StylePropertyValue
#include "UnityEngine/UIElements/StyleSheets/StylePropertyValue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UIElements::StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Forward declaring type: MatchResult
  struct MatchResult;
}
// Forward declaring namespace: UnityEngine::UIElements::StyleSheets::Syntax
namespace UnityEngine::UIElements::StyleSheets::Syntax {
  // Forward declaring type: Expression
  class Expression;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Forward declaring type: StylePropertyValueMatcher
  class StylePropertyValueMatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*, "UnityEngine.UIElements.StyleSheets", "StylePropertyValueMatcher");
// Type namespace: UnityEngine.UIElements.StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class StylePropertyValueMatcher : public ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher {
    public:
    public:
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue> m_Values
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* m_Values;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*
    constexpr operator ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*() const noexcept {
      return m_Values;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue> m_Values
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*& dyn_m_Values();
    // private UnityEngine.UIElements.StyleSheets.StylePropertyValue get_current()
    // Offset: 0x5601A38
    ::UnityEngine::UIElements::StyleSheets::StylePropertyValue get_current();
    // public UnityEngine.UIElements.StyleSheets.MatchResult Match(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp, System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue> values)
    // Offset: 0x5601BB8
    ::UnityEngine::UIElements::StyleSheets::MatchResult Match(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* values);
    // public override System.Int32 get_valueCount()
    // Offset: 0x5601ABC
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Int32 BaseStyleMatcher::get_valueCount()
    int get_valueCount();
    // public override System.Boolean get_isCurrentVariable()
    // Offset: 0x5601B04
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::get_isCurrentVariable()
    bool get_isCurrentVariable();
    // public override System.Boolean get_isCurrentComma()
    // Offset: 0x5601B0C
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::get_isCurrentComma()
    bool get_isCurrentComma();
    // protected override System.Boolean MatchKeyword(System.String keyword)
    // Offset: 0x5601D44
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::MatchKeyword(System.String keyword)
    bool MatchKeyword(::StringW keyword);
    // protected override System.Boolean MatchNumber()
    // Offset: 0x5601DF8
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::MatchNumber()
    bool MatchNumber();
    // protected override System.Boolean MatchInteger()
    // Offset: 0x5601E30
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::MatchInteger()
    bool MatchInteger();
    // protected override System.Boolean MatchLength()
    // Offset: 0x5601E68
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::MatchLength()
    bool MatchLength();
    // protected override System.Boolean MatchPercentage()
    // Offset: 0x5601F5C
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::MatchPercentage()
    bool MatchPercentage();
    // protected override System.Boolean MatchColor()
    // Offset: 0x5602050
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::MatchColor()
    bool MatchColor();
    // protected override System.Boolean MatchResource()
    // Offset: 0x560212C
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::MatchResource()
    bool MatchResource();
    // protected override System.Boolean MatchUrl()
    // Offset: 0x5602164
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::MatchUrl()
    bool MatchUrl();
    // protected override System.Boolean MatchTime()
    // Offset: 0x56021A8
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::MatchTime()
    bool MatchTime();
    // protected override System.Boolean MatchCustomIdent()
    // Offset: 0x560220C
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::MatchCustomIdent()
    bool MatchCustomIdent();
    // protected override System.Boolean MatchAngle()
    // Offset: 0x56022EC
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Boolean BaseStyleMatcher::MatchAngle()
    bool MatchAngle();
    // public System.Void .ctor()
    // Offset: 0x56023E8
    // Implemented from: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
    // Base method: System.Void BaseStyleMatcher::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StylePropertyValueMatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StylePropertyValueMatcher*, creationType>()));
    }
  }; // UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher
  #pragma pack(pop)
  static check_size<sizeof(StylePropertyValueMatcher), 32 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*)> __UnityEngine_UIElements_StyleSheets_StylePropertyValueMatcherSizeCheck;
  static_assert(sizeof(StylePropertyValueMatcher) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::StylePropertyValue (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::MatchResult (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*)>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::Match)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    static auto* values = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets", "StylePropertyValue")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp, values});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_valueCount
// Il2CppName: get_valueCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_valueCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "get_valueCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_isCurrentVariable
// Il2CppName: get_isCurrentVariable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_isCurrentVariable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "get_isCurrentVariable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_isCurrentComma
// Il2CppName: get_isCurrentComma
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::get_isCurrentComma)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "get_isCurrentComma", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchKeyword
// Il2CppName: MatchKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)(::StringW)>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchKeyword)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "MatchKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchNumber
// Il2CppName: MatchNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "MatchNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchInteger
// Il2CppName: MatchInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchInteger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "MatchInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchLength
// Il2CppName: MatchLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "MatchLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchPercentage
// Il2CppName: MatchPercentage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchPercentage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "MatchPercentage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchColor
// Il2CppName: MatchColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "MatchColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchResource
// Il2CppName: MatchResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchResource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "MatchResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchUrl
// Il2CppName: MatchUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "MatchUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchTime
// Il2CppName: MatchTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "MatchTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchCustomIdent
// Il2CppName: MatchCustomIdent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchCustomIdent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "MatchCustomIdent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchAngle
// Il2CppName: MatchAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::MatchAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher*), "MatchAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StylePropertyValueMatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
