// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: UnityEngine::UIElements::StyleSheets::Syntax
namespace UnityEngine::UIElements::StyleSheets::Syntax {
  // Forward declaring type: Expression
  class Expression;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Forward declaring type: BaseStyleMatcher
  class BaseStyleMatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher");
// Type namespace: UnityEngine.UIElements.StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseStyleMatcher : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchContext
    struct MatchContext;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext
    // [TokenAttribute] Offset: FFFFFFFF
    struct MatchContext/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Int32 valueIndex
      // Size: 0x4
      // Offset: 0x0
      int valueIndex;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 matchedVariableCount
      // Size: 0x4
      // Offset: 0x4
      int matchedVariableCount;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MatchContext
      constexpr MatchContext(int valueIndex_ = {}, int matchedVariableCount_ = {}) noexcept : valueIndex{valueIndex_}, matchedVariableCount{matchedVariableCount_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Int32 valueIndex
      [[deprecated("Use field access instead!")]] int& dyn_valueIndex();
      // Get instance field reference: public System.Int32 matchedVariableCount
      [[deprecated("Use field access instead!")]] int& dyn_matchedVariableCount();
    }; // UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext
    #pragma pack(pop)
    static check_size<sizeof(BaseStyleMatcher::MatchContext), 4 + sizeof(int)> __UnityEngine_UIElements_StyleSheets_BaseStyleMatcher_MatchContextSizeCheck;
    static_assert(sizeof(BaseStyleMatcher::MatchContext) == 0x8);
    public:
    // private System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext> m_ContextStack
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchContext>* m_ContextStack;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchContext>*) == 0x8);
    // private UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext m_CurrentContext
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchContext m_CurrentContext;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchContext) == 0x8);
    public:
    // Get static field: static protected readonly System.Text.RegularExpressions.Regex s_CustomIdentRegex
    static ::System::Text::RegularExpressions::Regex* _get_s_CustomIdentRegex();
    // Set static field: static protected readonly System.Text.RegularExpressions.Regex s_CustomIdentRegex
    static void _set_s_CustomIdentRegex(::System::Text::RegularExpressions::Regex* value);
    // Get instance field reference: private System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext> m_ContextStack
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchContext>*& dyn_m_ContextStack();
    // Get instance field reference: private UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext m_CurrentContext
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchContext& dyn_m_CurrentContext();
    // protected System.Boolean MatchKeyword(System.String keyword)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MatchKeyword(::StringW keyword);
    // protected System.Boolean MatchNumber()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MatchNumber();
    // protected System.Boolean MatchInteger()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MatchInteger();
    // protected System.Boolean MatchLength()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MatchLength();
    // protected System.Boolean MatchPercentage()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MatchPercentage();
    // protected System.Boolean MatchColor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MatchColor();
    // protected System.Boolean MatchResource()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MatchResource();
    // protected System.Boolean MatchUrl()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MatchUrl();
    // protected System.Boolean MatchTime()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MatchTime();
    // protected System.Boolean MatchAngle()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MatchAngle();
    // protected System.Boolean MatchCustomIdent()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MatchCustomIdent();
    // public System.Int32 get_valueCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_valueCount();
    // public System.Boolean get_isCurrentVariable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isCurrentVariable();
    // public System.Boolean get_isCurrentComma()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isCurrentComma();
    // public System.Boolean get_hasCurrent()
    // Offset: 0x5600D0C
    bool get_hasCurrent();
    // public System.Int32 get_currentIndex()
    // Offset: 0x5600D34
    int get_currentIndex();
    // public System.Void set_currentIndex(System.Int32 value)
    // Offset: 0x5600D3C
    void set_currentIndex(int value);
    // public System.Int32 get_matchedVariableCount()
    // Offset: 0x5600D44
    int get_matchedVariableCount();
    // public System.Void set_matchedVariableCount(System.Int32 value)
    // Offset: 0x5600D4C
    void set_matchedVariableCount(int value);
    // protected System.Void Initialize()
    // Offset: 0x5600D54
    void Initialize();
    // public System.Void MoveNext()
    // Offset: 0x5600DA8
    void MoveNext();
    // public System.Void SaveContext()
    // Offset: 0x5600DEC
    void SaveContext();
    // public System.Void RestoreContext()
    // Offset: 0x5600E40
    void RestoreContext();
    // public System.Void DropContext()
    // Offset: 0x5600E98
    void DropContext();
    // protected System.Boolean Match(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp)
    // Offset: 0x5600EE8
    bool Match(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);
    // private System.Boolean MatchExpression(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp)
    // Offset: 0x5600FA4
    bool MatchExpression(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);
    // private System.Boolean MatchExpressionWithMultiplier(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp)
    // Offset: 0x56010B8
    bool MatchExpressionWithMultiplier(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);
    // private System.Boolean MatchGroup(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp)
    // Offset: 0x56013C8
    bool MatchGroup(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);
    // private System.Boolean MatchCombinator(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp)
    // Offset: 0x5601200
    bool MatchCombinator(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);
    // private System.Boolean MatchOr(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp)
    // Offset: 0x560147C
    bool MatchOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);
    // private System.Boolean MatchOrOr(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp)
    // Offset: 0x5601548
    bool MatchOrOr(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);
    // private System.Boolean MatchAndAnd(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp)
    // Offset: 0x5601560
    bool MatchAndAnd(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);
    // private System.Int32 MatchMany(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp)
    // Offset: 0x5601608
    int MatchMany(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);
    // private System.Int32 MatchManyByOrder(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp, System.Int32* matchOrder)
    // Offset: 0x560177C
    int MatchManyByOrder(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp, int* matchOrder);
    // private System.Boolean MatchJuxtaposition(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp)
    // Offset: 0x5601590
    bool MatchJuxtaposition(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);
    // private System.Boolean MatchDataType(UnityEngine.UIElements.StyleSheets.Syntax.Expression exp)
    // Offset: 0x56012CC
    bool MatchDataType(::UnityEngine::UIElements::StyleSheets::Syntax::Expression* exp);
    // protected System.Void .ctor()
    // Offset: 0x5601910
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseStyleMatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseStyleMatcher*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x5601998
    static void _cctor();
  }; // UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
  #pragma pack(pop)
  static check_size<sizeof(BaseStyleMatcher), 24 + sizeof(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchContext)> __UnityEngine_UIElements_StyleSheets_BaseStyleMatcherSizeCheck;
  static_assert(sizeof(BaseStyleMatcher) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchContext, "UnityEngine.UIElements.StyleSheets", "BaseStyleMatcher/MatchContext");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchKeyword
// Il2CppName: MatchKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::StringW)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchKeyword)> {
  static const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchNumber
// Il2CppName: MatchNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchInteger
// Il2CppName: MatchInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchInteger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchLength
// Il2CppName: MatchLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchPercentage
// Il2CppName: MatchPercentage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchPercentage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchPercentage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchColor
// Il2CppName: MatchColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchResource
// Il2CppName: MatchResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchResource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchUrl
// Il2CppName: MatchUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchTime
// Il2CppName: MatchTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAngle
// Il2CppName: MatchAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCustomIdent
// Il2CppName: MatchCustomIdent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCustomIdent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchCustomIdent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_valueCount
// Il2CppName: get_valueCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_valueCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "get_valueCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentVariable
// Il2CppName: get_isCurrentVariable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentVariable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "get_isCurrentVariable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentComma
// Il2CppName: get_isCurrentComma
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_isCurrentComma)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "get_isCurrentComma", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_hasCurrent
// Il2CppName: get_hasCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_hasCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "get_hasCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_currentIndex
// Il2CppName: get_currentIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_currentIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "get_currentIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_currentIndex
// Il2CppName: set_currentIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(int)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_currentIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "set_currentIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_matchedVariableCount
// Il2CppName: get_matchedVariableCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::get_matchedVariableCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "get_matchedVariableCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_matchedVariableCount
// Il2CppName: set_matchedVariableCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(int)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::set_matchedVariableCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "set_matchedVariableCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::SaveContext
// Il2CppName: SaveContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::SaveContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "SaveContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::RestoreContext
// Il2CppName: RestoreContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::RestoreContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "RestoreContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::DropContext
// Il2CppName: DropContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::DropContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "DropContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::Match)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpression
// Il2CppName: MatchExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpression)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpressionWithMultiplier
// Il2CppName: MatchExpressionWithMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchExpressionWithMultiplier)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchExpressionWithMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchGroup
// Il2CppName: MatchGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchGroup)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCombinator
// Il2CppName: MatchCombinator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchCombinator)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchCombinator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOr
// Il2CppName: MatchOr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOr)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchOr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOrOr
// Il2CppName: MatchOrOr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchOrOr)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchOrOr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAndAnd
// Il2CppName: MatchAndAnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchAndAnd)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchAndAnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchMany
// Il2CppName: MatchMany
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchMany)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchMany", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchManyByOrder
// Il2CppName: MatchManyByOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, int*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchManyByOrder)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    static auto* matchOrder = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchManyByOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp, matchOrder});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchJuxtaposition
// Il2CppName: MatchJuxtaposition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchJuxtaposition)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchJuxtaposition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchDataType
// Il2CppName: MatchDataType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::*)(::UnityEngine::UIElements::StyleSheets::Syntax::Expression*)>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::MatchDataType)> {
  static const MethodInfo* get() {
    static auto* exp = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets.Syntax", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), "MatchDataType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exp});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::StyleSheets::BaseStyleMatcher::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::BaseStyleMatcher*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};