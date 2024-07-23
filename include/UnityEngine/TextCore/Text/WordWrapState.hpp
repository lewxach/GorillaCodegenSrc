// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.TextCore.Text.FontStyles
#include "UnityEngine/TextCore/Text/FontStyles.hpp"
// Including type: UnityEngine.TextCore.Text.LineInfo
#include "UnityEngine/TextCore/Text/LineInfo.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.TextCore.Text.HighlightState
#include "UnityEngine/TextCore/Text/HighlightState.hpp"
// Including type: UnityEngine.TextCore.Text.FontStyleStack
#include "UnityEngine/TextCore/Text/FontStyleStack.hpp"
// Including type: UnityEngine.TextCore.Text.TextProcessingStack`1
#include "UnityEngine/TextCore/Text/TextProcessingStack_1.hpp"
// Including type: UnityEngine.TextCore.Text.TextFontWeight
#include "UnityEngine/TextCore/Text/TextFontWeight.hpp"
// Including type: UnityEngine.TextCore.Text.MaterialReference
#include "UnityEngine/TextCore/Text/MaterialReference.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore::Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: TextInfo
  class TextInfo;
  // Forward declaring type: TextColorGradient
  class TextColorGradient;
  // Forward declaring type: FontAsset
  class FontAsset;
  // Forward declaring type: SpriteAsset
  class SpriteAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: WordWrapState
  struct WordWrapState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::WordWrapState, "UnityEngine.TextCore.Text", "WordWrapState");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.Text.WordWrapState
  // [TokenAttribute] Offset: FFFFFFFF
  struct WordWrapState/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 previousWordBreak
    // Size: 0x4
    // Offset: 0x0
    int previousWordBreak;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 totalCharacterCount
    // Size: 0x4
    // Offset: 0x4
    int totalCharacterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 visibleCharacterCount
    // Size: 0x4
    // Offset: 0x8
    int visibleCharacterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 visibleSpaceCount
    // Size: 0x4
    // Offset: 0xC
    int visibleSpaceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 visibleSpriteCount
    // Size: 0x4
    // Offset: 0x10
    int visibleSpriteCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 visibleLinkCount
    // Size: 0x4
    // Offset: 0x14
    int visibleLinkCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 firstCharacterIndex
    // Size: 0x4
    // Offset: 0x18
    int firstCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 firstVisibleCharacterIndex
    // Size: 0x4
    // Offset: 0x1C
    int firstVisibleCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lastCharacterIndex
    // Size: 0x4
    // Offset: 0x20
    int lastCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lastVisibleCharIndex
    // Size: 0x4
    // Offset: 0x24
    int lastVisibleCharIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x28
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single maxCapHeight
    // Size: 0x4
    // Offset: 0x2C
    float maxCapHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxAscender
    // Size: 0x4
    // Offset: 0x30
    float maxAscender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxDescender
    // Size: 0x4
    // Offset: 0x34
    float maxDescender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxLineAscender
    // Size: 0x4
    // Offset: 0x38
    float maxLineAscender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxLineDescender
    // Size: 0x4
    // Offset: 0x3C
    float maxLineDescender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single startOfLineAscender
    // Size: 0x4
    // Offset: 0x40
    float startOfLineAscender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single xAdvance
    // Size: 0x4
    // Offset: 0x44
    float xAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single preferredWidth
    // Size: 0x4
    // Offset: 0x48
    float preferredWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single preferredHeight
    // Size: 0x4
    // Offset: 0x4C
    float preferredHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single previousLineScale
    // Size: 0x4
    // Offset: 0x50
    float previousLineScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single pageAscender
    // Size: 0x4
    // Offset: 0x54
    float pageAscender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 wordCount
    // Size: 0x4
    // Offset: 0x58
    int wordCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.TextCore.Text.FontStyles fontStyle
    // Size: 0x4
    // Offset: 0x5C
    ::UnityEngine::TextCore::Text::FontStyles fontStyle;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::FontStyles) == 0x4);
    // public System.Single fontScale
    // Size: 0x4
    // Offset: 0x60
    float fontScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fontScaleMultiplier
    // Size: 0x4
    // Offset: 0x64
    float fontScaleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 italicAngle
    // Size: 0x4
    // Offset: 0x68
    int italicAngle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single currentFontSize
    // Size: 0x4
    // Offset: 0x6C
    float currentFontSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single baselineOffset
    // Size: 0x4
    // Offset: 0x70
    float baselineOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single lineOffset
    // Size: 0x4
    // Offset: 0x74
    float lineOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.TextCore.Text.TextInfo textInfo
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::TextCore::Text::TextInfo* textInfo;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::TextInfo*) == 0x8);
    // public UnityEngine.TextCore.Text.LineInfo lineInfo
    // Size: 0x60
    // Offset: 0x80
    ::UnityEngine::TextCore::Text::LineInfo lineInfo;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::LineInfo) == 0x60);
    // public UnityEngine.Color32 vertexColor
    // Size: 0x4
    // Offset: 0xE0
    ::UnityEngine::Color32 vertexColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 underlineColor
    // Size: 0x4
    // Offset: 0xE4
    ::UnityEngine::Color32 underlineColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 strikethroughColor
    // Size: 0x4
    // Offset: 0xE8
    ::UnityEngine::Color32 strikethroughColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 highlightColor
    // Size: 0x4
    // Offset: 0xEC
    ::UnityEngine::Color32 highlightColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color32) == 0x4);
    // public UnityEngine.TextCore.Text.HighlightState highlightState
    // Size: 0x14
    // Offset: 0xF0
    ::UnityEngine::TextCore::Text::HighlightState highlightState;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::HighlightState) == 0x14);
    // public UnityEngine.TextCore.Text.FontStyleStack basicStyleStack
    // Size: 0xA
    // Offset: 0x104
    ::UnityEngine::TextCore::Text::FontStyleStack basicStyleStack;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::FontStyleStack) == 0xA);
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Int32> italicAngleStack
    // Size: 0xFFFFFFFF
    // Offset: 0x110
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<int> italicAngleStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.Color32> colorStack
    // Size: 0xFFFFFFFF
    // Offset: 0x130
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> colorStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.Color32> underlineColorStack
    // Size: 0xFFFFFFFF
    // Offset: 0x150
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> underlineColorStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.Color32> strikethroughColorStack
    // Size: 0xFFFFFFFF
    // Offset: 0x170
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> strikethroughColorStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.Color32> highlightColorStack
    // Size: 0xFFFFFFFF
    // Offset: 0x190
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> highlightColorStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.TextCore.Text.HighlightState> highlightStateStack
    // Size: 0xFFFFFFFF
    // Offset: 0x1B0
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState> highlightStateStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.TextCore.Text.TextColorGradient> colorGradientStack
    // Size: 0xFFFFFFFF
    // Offset: 0x1E0
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*> colorGradientStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Single> sizeStack
    // Size: 0xFFFFFFFF
    // Offset: 0x208
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<float> sizeStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Single> indentStack
    // Size: 0xFFFFFFFF
    // Offset: 0x228
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<float> indentStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.TextCore.Text.TextFontWeight> fontWeightStack
    // Size: 0xFFFFFFFF
    // Offset: 0x248
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> fontWeightStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Int32> styleStack
    // Size: 0xFFFFFFFF
    // Offset: 0x268
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<int> styleStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Single> baselineStack
    // Size: 0xFFFFFFFF
    // Offset: 0x288
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<float> baselineStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Int32> actionStack
    // Size: 0xFFFFFFFF
    // Offset: 0x2A8
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<int> actionStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.TextCore.Text.MaterialReference> materialReferenceStack
    // Size: 0xFFFFFFFF
    // Offset: 0x2C8
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> materialReferenceStack;
    // public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.TextCore.Text.TextAlignment> lineJustificationStack
    // Size: 0xFFFFFFFF
    // Offset: 0x320
    ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> lineJustificationStack;
    // public System.Int32 lastBaseGlyphIndex
    // Size: 0x4
    // Offset: 0x340
    int lastBaseGlyphIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 spriteAnimationId
    // Size: 0x4
    // Offset: 0x344
    int spriteAnimationId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.TextCore.Text.FontAsset currentFontAsset
    // Size: 0x8
    // Offset: 0x348
    ::UnityEngine::TextCore::Text::FontAsset* currentFontAsset;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::FontAsset*) == 0x8);
    // public UnityEngine.TextCore.Text.SpriteAsset currentSpriteAsset
    // Size: 0x8
    // Offset: 0x350
    ::UnityEngine::TextCore::Text::SpriteAsset* currentSpriteAsset;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::SpriteAsset*) == 0x8);
    // public UnityEngine.Material currentMaterial
    // Size: 0x8
    // Offset: 0x358
    ::UnityEngine::Material* currentMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Int32 currentMaterialIndex
    // Size: 0x4
    // Offset: 0x360
    int currentMaterialIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.TextCore.Text.Extents meshExtents
    // Size: 0x10
    // Offset: 0x364
    ::UnityEngine::TextCore::Text::Extents meshExtents;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextCore::Text::Extents) == 0x10);
    // public System.Boolean tagNoParsing
    // Size: 0x1
    // Offset: 0x374
    bool tagNoParsing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isNonBreakingSpace
    // Size: 0x1
    // Offset: 0x375
    bool isNonBreakingSpace;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isDrivenLineSpacing
    // Size: 0x1
    // Offset: 0x376
    bool isDrivenLineSpacing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public UnityEngine.Vector3 fxScale
    // Size: 0xC
    // Offset: 0x378
    ::UnityEngine::Vector3 fxScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion fxRotation
    // Size: 0x10
    // Offset: 0x384
    ::UnityEngine::Quaternion fxRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating value type constructor for type: WordWrapState
    constexpr WordWrapState(int previousWordBreak_ = {}, int totalCharacterCount_ = {}, int visibleCharacterCount_ = {}, int visibleSpaceCount_ = {}, int visibleSpriteCount_ = {}, int visibleLinkCount_ = {}, int firstCharacterIndex_ = {}, int firstVisibleCharacterIndex_ = {}, int lastCharacterIndex_ = {}, int lastVisibleCharIndex_ = {}, int lineNumber_ = {}, float maxCapHeight_ = {}, float maxAscender_ = {}, float maxDescender_ = {}, float maxLineAscender_ = {}, float maxLineDescender_ = {}, float startOfLineAscender_ = {}, float xAdvance_ = {}, float preferredWidth_ = {}, float preferredHeight_ = {}, float previousLineScale_ = {}, float pageAscender_ = {}, int wordCount_ = {}, ::UnityEngine::TextCore::Text::FontStyles fontStyle_ = {}, float fontScale_ = {}, float fontScaleMultiplier_ = {}, int italicAngle_ = {}, float currentFontSize_ = {}, float baselineOffset_ = {}, float lineOffset_ = {}, ::UnityEngine::TextCore::Text::TextInfo* textInfo_ = {}, ::UnityEngine::TextCore::Text::LineInfo lineInfo_ = {}, ::UnityEngine::Color32 vertexColor_ = {}, ::UnityEngine::Color32 underlineColor_ = {}, ::UnityEngine::Color32 strikethroughColor_ = {}, ::UnityEngine::Color32 highlightColor_ = {}, ::UnityEngine::TextCore::Text::HighlightState highlightState_ = {}, ::UnityEngine::TextCore::Text::FontStyleStack basicStyleStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<int> italicAngleStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> colorStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> underlineColorStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> strikethroughColorStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> highlightColorStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState> highlightStateStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*> colorGradientStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float> sizeStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float> indentStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> fontWeightStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<int> styleStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float> baselineStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<int> actionStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> materialReferenceStack_ = {}, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> lineJustificationStack_ = {}, int lastBaseGlyphIndex_ = {}, int spriteAnimationId_ = {}, ::UnityEngine::TextCore::Text::FontAsset* currentFontAsset_ = {}, ::UnityEngine::TextCore::Text::SpriteAsset* currentSpriteAsset_ = {}, ::UnityEngine::Material* currentMaterial_ = {}, int currentMaterialIndex_ = {}, ::UnityEngine::TextCore::Text::Extents meshExtents_ = {}, bool tagNoParsing_ = {}, bool isNonBreakingSpace_ = {}, bool isDrivenLineSpacing_ = {}, ::UnityEngine::Vector3 fxScale_ = {}, ::UnityEngine::Quaternion fxRotation_ = {}) noexcept : previousWordBreak{previousWordBreak_}, totalCharacterCount{totalCharacterCount_}, visibleCharacterCount{visibleCharacterCount_}, visibleSpaceCount{visibleSpaceCount_}, visibleSpriteCount{visibleSpriteCount_}, visibleLinkCount{visibleLinkCount_}, firstCharacterIndex{firstCharacterIndex_}, firstVisibleCharacterIndex{firstVisibleCharacterIndex_}, lastCharacterIndex{lastCharacterIndex_}, lastVisibleCharIndex{lastVisibleCharIndex_}, lineNumber{lineNumber_}, maxCapHeight{maxCapHeight_}, maxAscender{maxAscender_}, maxDescender{maxDescender_}, maxLineAscender{maxLineAscender_}, maxLineDescender{maxLineDescender_}, startOfLineAscender{startOfLineAscender_}, xAdvance{xAdvance_}, preferredWidth{preferredWidth_}, preferredHeight{preferredHeight_}, previousLineScale{previousLineScale_}, pageAscender{pageAscender_}, wordCount{wordCount_}, fontStyle{fontStyle_}, fontScale{fontScale_}, fontScaleMultiplier{fontScaleMultiplier_}, italicAngle{italicAngle_}, currentFontSize{currentFontSize_}, baselineOffset{baselineOffset_}, lineOffset{lineOffset_}, textInfo{textInfo_}, lineInfo{lineInfo_}, vertexColor{vertexColor_}, underlineColor{underlineColor_}, strikethroughColor{strikethroughColor_}, highlightColor{highlightColor_}, highlightState{highlightState_}, basicStyleStack{basicStyleStack_}, italicAngleStack{italicAngleStack_}, colorStack{colorStack_}, underlineColorStack{underlineColorStack_}, strikethroughColorStack{strikethroughColorStack_}, highlightColorStack{highlightColorStack_}, highlightStateStack{highlightStateStack_}, colorGradientStack{colorGradientStack_}, sizeStack{sizeStack_}, indentStack{indentStack_}, fontWeightStack{fontWeightStack_}, styleStack{styleStack_}, baselineStack{baselineStack_}, actionStack{actionStack_}, materialReferenceStack{materialReferenceStack_}, lineJustificationStack{lineJustificationStack_}, lastBaseGlyphIndex{lastBaseGlyphIndex_}, spriteAnimationId{spriteAnimationId_}, currentFontAsset{currentFontAsset_}, currentSpriteAsset{currentSpriteAsset_}, currentMaterial{currentMaterial_}, currentMaterialIndex{currentMaterialIndex_}, meshExtents{meshExtents_}, tagNoParsing{tagNoParsing_}, isNonBreakingSpace{isNonBreakingSpace_}, isDrivenLineSpacing{isDrivenLineSpacing_}, fxScale{fxScale_}, fxRotation{fxRotation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 previousWordBreak
    [[deprecated("Use field access instead!")]] int& dyn_previousWordBreak();
    // Get instance field reference: public System.Int32 totalCharacterCount
    [[deprecated("Use field access instead!")]] int& dyn_totalCharacterCount();
    // Get instance field reference: public System.Int32 visibleCharacterCount
    [[deprecated("Use field access instead!")]] int& dyn_visibleCharacterCount();
    // Get instance field reference: public System.Int32 visibleSpaceCount
    [[deprecated("Use field access instead!")]] int& dyn_visibleSpaceCount();
    // Get instance field reference: public System.Int32 visibleSpriteCount
    [[deprecated("Use field access instead!")]] int& dyn_visibleSpriteCount();
    // Get instance field reference: public System.Int32 visibleLinkCount
    [[deprecated("Use field access instead!")]] int& dyn_visibleLinkCount();
    // Get instance field reference: public System.Int32 firstCharacterIndex
    [[deprecated("Use field access instead!")]] int& dyn_firstCharacterIndex();
    // Get instance field reference: public System.Int32 firstVisibleCharacterIndex
    [[deprecated("Use field access instead!")]] int& dyn_firstVisibleCharacterIndex();
    // Get instance field reference: public System.Int32 lastCharacterIndex
    [[deprecated("Use field access instead!")]] int& dyn_lastCharacterIndex();
    // Get instance field reference: public System.Int32 lastVisibleCharIndex
    [[deprecated("Use field access instead!")]] int& dyn_lastVisibleCharIndex();
    // Get instance field reference: public System.Int32 lineNumber
    [[deprecated("Use field access instead!")]] int& dyn_lineNumber();
    // Get instance field reference: public System.Single maxCapHeight
    [[deprecated("Use field access instead!")]] float& dyn_maxCapHeight();
    // Get instance field reference: public System.Single maxAscender
    [[deprecated("Use field access instead!")]] float& dyn_maxAscender();
    // Get instance field reference: public System.Single maxDescender
    [[deprecated("Use field access instead!")]] float& dyn_maxDescender();
    // Get instance field reference: public System.Single maxLineAscender
    [[deprecated("Use field access instead!")]] float& dyn_maxLineAscender();
    // Get instance field reference: public System.Single maxLineDescender
    [[deprecated("Use field access instead!")]] float& dyn_maxLineDescender();
    // Get instance field reference: public System.Single startOfLineAscender
    [[deprecated("Use field access instead!")]] float& dyn_startOfLineAscender();
    // Get instance field reference: public System.Single xAdvance
    [[deprecated("Use field access instead!")]] float& dyn_xAdvance();
    // Get instance field reference: public System.Single preferredWidth
    [[deprecated("Use field access instead!")]] float& dyn_preferredWidth();
    // Get instance field reference: public System.Single preferredHeight
    [[deprecated("Use field access instead!")]] float& dyn_preferredHeight();
    // Get instance field reference: public System.Single previousLineScale
    [[deprecated("Use field access instead!")]] float& dyn_previousLineScale();
    // Get instance field reference: public System.Single pageAscender
    [[deprecated("Use field access instead!")]] float& dyn_pageAscender();
    // Get instance field reference: public System.Int32 wordCount
    [[deprecated("Use field access instead!")]] int& dyn_wordCount();
    // Get instance field reference: public UnityEngine.TextCore.Text.FontStyles fontStyle
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::FontStyles& dyn_fontStyle();
    // Get instance field reference: public System.Single fontScale
    [[deprecated("Use field access instead!")]] float& dyn_fontScale();
    // Get instance field reference: public System.Single fontScaleMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_fontScaleMultiplier();
    // Get instance field reference: public System.Int32 italicAngle
    [[deprecated("Use field access instead!")]] int& dyn_italicAngle();
    // Get instance field reference: public System.Single currentFontSize
    [[deprecated("Use field access instead!")]] float& dyn_currentFontSize();
    // Get instance field reference: public System.Single baselineOffset
    [[deprecated("Use field access instead!")]] float& dyn_baselineOffset();
    // Get instance field reference: public System.Single lineOffset
    [[deprecated("Use field access instead!")]] float& dyn_lineOffset();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextInfo textInfo
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextInfo*& dyn_textInfo();
    // Get instance field reference: public UnityEngine.TextCore.Text.LineInfo lineInfo
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::LineInfo& dyn_lineInfo();
    // Get instance field reference: public UnityEngine.Color32 vertexColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_vertexColor();
    // Get instance field reference: public UnityEngine.Color32 underlineColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_underlineColor();
    // Get instance field reference: public UnityEngine.Color32 strikethroughColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_strikethroughColor();
    // Get instance field reference: public UnityEngine.Color32 highlightColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_highlightColor();
    // Get instance field reference: public UnityEngine.TextCore.Text.HighlightState highlightState
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::HighlightState& dyn_highlightState();
    // Get instance field reference: public UnityEngine.TextCore.Text.FontStyleStack basicStyleStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::FontStyleStack& dyn_basicStyleStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Int32> italicAngleStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<int>& dyn_italicAngleStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.Color32> colorStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& dyn_colorStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.Color32> underlineColorStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& dyn_underlineColorStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.Color32> strikethroughColorStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& dyn_strikethroughColorStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.Color32> highlightColorStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>& dyn_highlightColorStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.TextCore.Text.HighlightState> highlightStateStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::HighlightState>& dyn_highlightStateStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.TextCore.Text.TextColorGradient> colorGradientStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient*>& dyn_colorGradientStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Single> sizeStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<float>& dyn_sizeStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Single> indentStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<float>& dyn_indentStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.TextCore.Text.TextFontWeight> fontWeightStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>& dyn_fontWeightStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Int32> styleStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<int>& dyn_styleStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Single> baselineStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<float>& dyn_baselineStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<System.Int32> actionStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<int>& dyn_actionStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.TextCore.Text.MaterialReference> materialReferenceStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>& dyn_materialReferenceStack();
    // Get instance field reference: public UnityEngine.TextCore.Text.TextProcessingStack`1<UnityEngine.TextCore.Text.TextAlignment> lineJustificationStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>& dyn_lineJustificationStack();
    // Get instance field reference: public System.Int32 lastBaseGlyphIndex
    [[deprecated("Use field access instead!")]] int& dyn_lastBaseGlyphIndex();
    // Get instance field reference: public System.Int32 spriteAnimationId
    [[deprecated("Use field access instead!")]] int& dyn_spriteAnimationId();
    // Get instance field reference: public UnityEngine.TextCore.Text.FontAsset currentFontAsset
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::FontAsset*& dyn_currentFontAsset();
    // Get instance field reference: public UnityEngine.TextCore.Text.SpriteAsset currentSpriteAsset
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::SpriteAsset*& dyn_currentSpriteAsset();
    // Get instance field reference: public UnityEngine.Material currentMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_currentMaterial();
    // Get instance field reference: public System.Int32 currentMaterialIndex
    [[deprecated("Use field access instead!")]] int& dyn_currentMaterialIndex();
    // Get instance field reference: public UnityEngine.TextCore.Text.Extents meshExtents
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextCore::Text::Extents& dyn_meshExtents();
    // Get instance field reference: public System.Boolean tagNoParsing
    [[deprecated("Use field access instead!")]] bool& dyn_tagNoParsing();
    // Get instance field reference: public System.Boolean isNonBreakingSpace
    [[deprecated("Use field access instead!")]] bool& dyn_isNonBreakingSpace();
    // Get instance field reference: public System.Boolean isDrivenLineSpacing
    [[deprecated("Use field access instead!")]] bool& dyn_isDrivenLineSpacing();
    // Get instance field reference: public UnityEngine.Vector3 fxScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_fxScale();
    // Get instance field reference: public UnityEngine.Quaternion fxRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_fxRotation();
  }; // UnityEngine.TextCore.Text.WordWrapState
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"