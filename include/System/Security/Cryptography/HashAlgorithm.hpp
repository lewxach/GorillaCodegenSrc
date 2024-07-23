// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
  // Forward declaring type: Span`1<T>
  template<typename T>
  struct Span_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::HashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HashAlgorithm*, "System.Security.Cryptography", "HashAlgorithm");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.HashAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  class HashAlgorithm : public ::Il2CppObject/*, public ::System::Security::Cryptography::ICryptoTransform*/ {
    public:
    public:
    // private System.Boolean _disposed
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: HashSizeValue
    char __padding0[0x3] = {};
    // protected System.Int32 HashSizeValue
    // Size: 0x4
    // Offset: 0x14
    int HashSizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected internal System.Byte[] HashValue
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> HashValue;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.Int32 State
    // Size: 0x4
    // Offset: 0x20
    int State;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Security::Cryptography::ICryptoTransform
    operator ::System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<::System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // Get instance field reference: private System.Boolean _disposed
    [[deprecated("Use field access instead!")]] bool& dyn__disposed();
    // Get instance field reference: protected System.Int32 HashSizeValue
    [[deprecated("Use field access instead!")]] int& dyn_HashSizeValue();
    // Get instance field reference: protected internal System.Byte[] HashValue
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_HashValue();
    // Get instance field reference: protected System.Int32 State
    [[deprecated("Use field access instead!")]] int& dyn_State();
    // static public System.Security.Cryptography.HashAlgorithm Create()
    // Offset: 0x44F1178
    static ::System::Security::Cryptography::HashAlgorithm* Create();
    // static public System.Security.Cryptography.HashAlgorithm Create(System.String hashName)
    // Offset: 0x44F1180
    static ::System::Security::Cryptography::HashAlgorithm* Create(::StringW hashName);
    // public System.Int32 get_HashSize()
    // Offset: 0x44F1200
    int get_HashSize();
    // public System.Byte[] get_Hash()
    // Offset: 0x44F1208
    ::ArrayW<uint8_t> get_Hash();
    // public System.Byte[] ComputeHash(System.Byte[] buffer)
    // Offset: 0x44F133C
    ::ArrayW<uint8_t> ComputeHash(::ArrayW<uint8_t> buffer);
    // public System.Boolean TryComputeHash(System.ReadOnlySpan`1<System.Byte> source, System.Span`1<System.Byte> destination, out System.Int32 bytesWritten)
    // Offset: 0x44F149C
    bool TryComputeHash(::System::ReadOnlySpan_1<uint8_t> source, ::System::Span_1<uint8_t> destination, ByRef<int> bytesWritten);
    // public System.Byte[] ComputeHash(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x44F15FC
    ::ArrayW<uint8_t> ComputeHash(::ArrayW<uint8_t> buffer, int offset, int count);
    // public System.Byte[] ComputeHash(System.IO.Stream inputStream)
    // Offset: 0x44F175C
    ::ArrayW<uint8_t> ComputeHash(::System::IO::Stream* inputStream);
    // private System.Byte[] CaptureHashCodeAndReinitialize()
    // Offset: 0x44F13E0
    ::ArrayW<uint8_t> CaptureHashCodeAndReinitialize();
    // public System.Void Dispose()
    // Offset: 0x44F1964
    void Dispose();
    // public System.Void Clear()
    // Offset: 0x44F19D4
    void Clear();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x44F1A68
    void Dispose(bool disposing);
    // public System.Int32 get_InputBlockSize()
    // Offset: 0x44F1A78
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0x44F1A80
    int get_OutputBlockSize();
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0x44F1A88
    bool get_CanTransformMultipleBlocks();
    // public System.Boolean get_CanReuseTransform()
    // Offset: 0x44F1A90
    bool get_CanReuseTransform();
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0x44F1A98
    int TransformBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount, ::ArrayW<uint8_t> outputBuffer, int outputOffset);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x44F1C78
    ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount);
    // private System.Void ValidateTransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0x44F1B34
    void ValidateTransformBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount);
    // protected System.Void HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HashCore(::ArrayW<uint8_t> array, int ibStart, int cbSize);
    // protected System.Byte[] HashFinal()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> HashFinal();
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Initialize();
    // protected System.Void HashCore(System.ReadOnlySpan`1<System.Byte> source)
    // Offset: 0x44F1DB8
    void HashCore(::System::ReadOnlySpan_1<uint8_t> source);
    // protected System.Boolean TryHashFinal(System.Span`1<System.Byte> destination, out System.Int32 bytesWritten)
    // Offset: 0x44F1F88
    bool TryHashFinal(::System::Span_1<uint8_t> destination, ByRef<int> bytesWritten);
    // protected System.Void .ctor()
    // Offset: 0x44F1170
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HashAlgorithm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::HashAlgorithm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HashAlgorithm*, creationType>()));
    }
  }; // System.Security.Cryptography.HashAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(HashAlgorithm), 32 + sizeof(int)> __System_Security_Cryptography_HashAlgorithmSizeCheck;
  static_assert(sizeof(HashAlgorithm) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)()>(&System::Security::Cryptography::HashAlgorithm::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)(::StringW)>(&System::Security::Cryptography::HashAlgorithm::Create)> {
  static const MethodInfo* get() {
    static auto* hashName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::get_HashSize
// Il2CppName: get_HashSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::get_HashSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "get_HashSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::get_Hash
// Il2CppName: get_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::get_Hash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "get_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::ComputeHash
// Il2CppName: ComputeHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::HashAlgorithm::ComputeHash)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "ComputeHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::TryComputeHash
// Il2CppName: TryComputeHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::HashAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ByRef<int>)>(&System::Security::Cryptography::HashAlgorithm::TryComputeHash)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* bytesWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "TryComputeHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, destination, bytesWritten});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::ComputeHash
// Il2CppName: ComputeHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::HashAlgorithm::ComputeHash)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "ComputeHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::ComputeHash
// Il2CppName: ComputeHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::HashAlgorithm::*)(::System::IO::Stream*)>(&System::Security::Cryptography::HashAlgorithm::ComputeHash)> {
  static const MethodInfo* get() {
    static auto* inputStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "ComputeHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputStream});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::CaptureHashCodeAndReinitialize
// Il2CppName: CaptureHashCodeAndReinitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::CaptureHashCodeAndReinitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "CaptureHashCodeAndReinitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)(bool)>(&System::Security::Cryptography::HashAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::get_InputBlockSize
// Il2CppName: get_InputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::get_InputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "get_InputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::get_OutputBlockSize
// Il2CppName: get_OutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::get_OutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "get_OutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::get_CanTransformMultipleBlocks
// Il2CppName: get_CanTransformMultipleBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::get_CanTransformMultipleBlocks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "get_CanTransformMultipleBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::get_CanReuseTransform
// Il2CppName: get_CanReuseTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::get_CanReuseTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "get_CanReuseTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::TransformBlock
// Il2CppName: TransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&System::Security::Cryptography::HashAlgorithm::TransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "TransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::TransformFinalBlock
// Il2CppName: TransformFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::HashAlgorithm::TransformFinalBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "TransformFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::ValidateTransformBlock
// Il2CppName: ValidateTransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::HashAlgorithm::ValidateTransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "ValidateTransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::HashAlgorithm::HashCore)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)()>(&System::Security::Cryptography::HashAlgorithm::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::HashAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>)>(&System::Security::Cryptography::HashAlgorithm::HashCore)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::TryHashFinal
// Il2CppName: TryHashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::HashAlgorithm::*)(::System::Span_1<uint8_t>, ByRef<int>)>(&System::Security::Cryptography::HashAlgorithm::TryHashFinal)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* bytesWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithm*), "TryHashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, bytesWritten});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithm::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!