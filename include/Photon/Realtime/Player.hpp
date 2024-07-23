// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Room
  class Room;
  // Forward declaring type: WebFlags
  class WebFlags;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::Player);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::Player*, "Photon.Realtime", "Player");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.Player
  // [TokenAttribute] Offset: FFFFFFFF
  class Player : public ::Il2CppObject {
    public:
    public:
    // private Photon.Realtime.Room <RoomReference>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Photon::Realtime::Room* RoomReference;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::Room*) == 0x8);
    // private System.Int32 actorNumber
    // Size: 0x4
    // Offset: 0x18
    int actorNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean IsLocal
    // Size: 0x1
    // Offset: 0x1C
    bool IsLocal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <HasRejoined>k__BackingField
    // Size: 0x1
    // Offset: 0x1D
    bool HasRejoined;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HasRejoined and: nickName
    char __padding3[0x2] = {};
    // private System.String nickName
    // Size: 0x8
    // Offset: 0x20
    ::StringW nickName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String defaultName
    // Size: 0x8
    // Offset: 0x28
    ::StringW defaultName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <UserId>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::StringW UserId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <IsInactive>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool IsInactive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsInactive and: CustomProperties
    char __padding7[0x7] = {};
    // private ExitGames.Client.Photon.Hashtable <CustomProperties>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::ExitGames::Client::Photon::Hashtable* CustomProperties;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::Hashtable*) == 0x8);
    // public System.Object TagObject
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* TagObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private Photon.Realtime.Room <RoomReference>k__BackingField
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::Room*& dyn_$RoomReference$k__BackingField();
    // Get instance field reference: private System.Int32 actorNumber
    [[deprecated("Use field access instead!")]] int& dyn_actorNumber();
    // Get instance field reference: public readonly System.Boolean IsLocal
    [[deprecated("Use field access instead!")]] bool& dyn_IsLocal();
    // Get instance field reference: private System.Boolean <HasRejoined>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$HasRejoined$k__BackingField();
    // Get instance field reference: private System.String nickName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_nickName();
    // Get instance field reference: private System.String defaultName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_defaultName();
    // Get instance field reference: private System.String <UserId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$UserId$k__BackingField();
    // Get instance field reference: private System.Boolean <IsInactive>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsInactive$k__BackingField();
    // Get instance field reference: private ExitGames.Client.Photon.Hashtable <CustomProperties>k__BackingField
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::Hashtable*& dyn_$CustomProperties$k__BackingField();
    // Get instance field reference: public System.Object TagObject
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_TagObject();
    // protected internal Photon.Realtime.Room get_RoomReference()
    // Offset: 0x4A24868
    ::Photon::Realtime::Room* get_RoomReference();
    // protected internal System.Void set_RoomReference(Photon.Realtime.Room value)
    // Offset: 0x4A24870
    void set_RoomReference(::Photon::Realtime::Room* value);
    // public System.Int32 get_ActorNumber()
    // Offset: 0x4A24878
    int get_ActorNumber();
    // public System.Boolean get_HasRejoined()
    // Offset: 0x4A24880
    bool get_HasRejoined();
    // System.Void set_HasRejoined(System.Boolean value)
    // Offset: 0x4A24888
    void set_HasRejoined(bool value);
    // public System.String get_NickName()
    // Offset: 0x4A24894
    ::StringW get_NickName();
    // public System.Void set_NickName(System.String value)
    // Offset: 0x4A13E10
    void set_NickName(::StringW value);
    // public System.String get_DefaultName()
    // Offset: 0x4A2494C
    ::StringW get_DefaultName();
    // public System.String get_UserId()
    // Offset: 0x4A24954
    ::StringW get_UserId();
    // System.Void set_UserId(System.String value)
    // Offset: 0x4A2495C
    void set_UserId(::StringW value);
    // public System.Boolean get_IsMasterClient()
    // Offset: 0x4A24964
    bool get_IsMasterClient();
    // public System.Boolean get_IsInactive()
    // Offset: 0x4A24988
    bool get_IsInactive();
    // protected internal System.Void set_IsInactive(System.Boolean value)
    // Offset: 0x4A24990
    void set_IsInactive(bool value);
    // public ExitGames.Client.Photon.Hashtable get_CustomProperties()
    // Offset: 0x4A2499C
    ::ExitGames::Client::Photon::Hashtable* get_CustomProperties();
    // public System.Void set_CustomProperties(ExitGames.Client.Photon.Hashtable value)
    // Offset: 0x4A249A4
    void set_CustomProperties(::ExitGames::Client::Photon::Hashtable* value);
    // protected internal System.Void .ctor(System.String nickName, System.Int32 actorNumber, System.Boolean isLocal)
    // Offset: 0x4A249AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Player* New_ctor(::StringW nickName, int actorNumber, bool isLocal) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::Player::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Player*, creationType>(nickName, actorNumber, isLocal)));
    }
    // protected internal System.Void .ctor(System.String nickName, System.Int32 actorNumber, System.Boolean isLocal, ExitGames.Client.Photon.Hashtable playerProperties)
    // Offset: 0x4A19930
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Player* New_ctor(::StringW nickName, int actorNumber, bool isLocal, ::ExitGames::Client::Photon::Hashtable* playerProperties) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::Player::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Player*, creationType>(nickName, actorNumber, isLocal, playerProperties)));
    }
    // public Photon.Realtime.Player Get(System.Int32 id)
    // Offset: 0x4A249B8
    ::Photon::Realtime::Player* Get(int id);
    // public Photon.Realtime.Player GetNext()
    // Offset: 0x4A249D4
    ::Photon::Realtime::Player* GetNext();
    // public Photon.Realtime.Player GetNextFor(Photon.Realtime.Player currentPlayer)
    // Offset: 0x4A24BE0
    ::Photon::Realtime::Player* GetNextFor(::Photon::Realtime::Player* currentPlayer);
    // public Photon.Realtime.Player GetNextFor(System.Int32 currentPlayerId)
    // Offset: 0x4A249DC
    ::Photon::Realtime::Player* GetNextFor(int currentPlayerId);
    // protected internal System.Void InternalCacheProperties(ExitGames.Client.Photon.Hashtable properties)
    // Offset: 0x4A24BF4
    void InternalCacheProperties(::ExitGames::Client::Photon::Hashtable* properties);
    // public System.String ToStringFull()
    // Offset: 0x4A24E78
    ::StringW ToStringFull();
    // protected internal System.Void ChangeLocalID(System.Int32 newID)
    // Offset: 0x4A18D90
    void ChangeLocalID(int newID);
    // public System.Boolean SetCustomProperties(ExitGames.Client.Photon.Hashtable propertiesToSet, ExitGames.Client.Photon.Hashtable expectedValues, Photon.Realtime.WebFlags webFlags)
    // Offset: 0x4A174D4
    bool SetCustomProperties(::ExitGames::Client::Photon::Hashtable* propertiesToSet, ::ExitGames::Client::Photon::Hashtable* expectedValues, ::Photon::Realtime::WebFlags* webFlags);
    // private System.Boolean SetPlayerNameProperty()
    // Offset: 0x4A2489C
    bool SetPlayerNameProperty();
    // public override System.String ToString()
    // Offset: 0x4A24DF0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0x4A25080
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4A25134
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Photon.Realtime.Player
  #pragma pack(pop)
  static check_size<sizeof(Player), 72 + sizeof(::Il2CppObject*)> __Photon_Realtime_PlayerSizeCheck;
  static_assert(sizeof(Player) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::Player::get_RoomReference
// Il2CppName: get_RoomReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Room* (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::get_RoomReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "get_RoomReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::set_RoomReference
// Il2CppName: set_RoomReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::Player::*)(::Photon::Realtime::Room*)>(&Photon::Realtime::Player::set_RoomReference)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Room")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "set_RoomReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::get_ActorNumber
// Il2CppName: get_ActorNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::get_ActorNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "get_ActorNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::get_HasRejoined
// Il2CppName: get_HasRejoined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::get_HasRejoined)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "get_HasRejoined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::set_HasRejoined
// Il2CppName: set_HasRejoined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::Player::*)(bool)>(&Photon::Realtime::Player::set_HasRejoined)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "set_HasRejoined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::get_NickName
// Il2CppName: get_NickName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::get_NickName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "get_NickName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::set_NickName
// Il2CppName: set_NickName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::Player::*)(::StringW)>(&Photon::Realtime::Player::set_NickName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "set_NickName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::get_DefaultName
// Il2CppName: get_DefaultName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::get_DefaultName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "get_DefaultName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::get_UserId
// Il2CppName: get_UserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::get_UserId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "get_UserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::set_UserId
// Il2CppName: set_UserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::Player::*)(::StringW)>(&Photon::Realtime::Player::set_UserId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "set_UserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::get_IsMasterClient
// Il2CppName: get_IsMasterClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::get_IsMasterClient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "get_IsMasterClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::get_IsInactive
// Il2CppName: get_IsInactive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::get_IsInactive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "get_IsInactive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::set_IsInactive
// Il2CppName: set_IsInactive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::Player::*)(bool)>(&Photon::Realtime::Player::set_IsInactive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "set_IsInactive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::get_CustomProperties
// Il2CppName: get_CustomProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::Hashtable* (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::get_CustomProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "get_CustomProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::set_CustomProperties
// Il2CppName: set_CustomProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::Player::*)(::ExitGames::Client::Photon::Hashtable*)>(&Photon::Realtime::Player::set_CustomProperties)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "set_CustomProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Realtime::Player::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Realtime::Player::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (Photon::Realtime::Player::*)(int)>(&Photon::Realtime::Player::Get)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::GetNext
// Il2CppName: GetNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::GetNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "GetNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::GetNextFor
// Il2CppName: GetNextFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (Photon::Realtime::Player::*)(::Photon::Realtime::Player*)>(&Photon::Realtime::Player::GetNextFor)> {
  static const MethodInfo* get() {
    static auto* currentPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "GetNextFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentPlayer});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::GetNextFor
// Il2CppName: GetNextFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Realtime::Player* (Photon::Realtime::Player::*)(int)>(&Photon::Realtime::Player::GetNextFor)> {
  static const MethodInfo* get() {
    static auto* currentPlayerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "GetNextFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentPlayerId});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::InternalCacheProperties
// Il2CppName: InternalCacheProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::Player::*)(::ExitGames::Client::Photon::Hashtable*)>(&Photon::Realtime::Player::InternalCacheProperties)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "InternalCacheProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::ToStringFull
// Il2CppName: ToStringFull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::ToStringFull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "ToStringFull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::ChangeLocalID
// Il2CppName: ChangeLocalID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::Player::*)(int)>(&Photon::Realtime::Player::ChangeLocalID)> {
  static const MethodInfo* get() {
    static auto* newID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "ChangeLocalID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newID});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::SetCustomProperties
// Il2CppName: SetCustomProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::Player::*)(::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(&Photon::Realtime::Player::SetCustomProperties)> {
  static const MethodInfo* get() {
    static auto* propertiesToSet = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    static auto* expectedValues = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    static auto* webFlags = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "WebFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "SetCustomProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertiesToSet, expectedValues, webFlags});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::SetPlayerNameProperty
// Il2CppName: SetPlayerNameProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::SetPlayerNameProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "SetPlayerNameProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::Player::*)(::Il2CppObject*)>(&Photon::Realtime::Player::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::Player::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Realtime::Player::*)()>(&Photon::Realtime::Player::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::Player*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};