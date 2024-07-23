// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Forward declaring type: WitConstants
  class WitConstants;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::WitConstants);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::WitConstants*, "Meta.WitAi", "WitConstants");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.WitConstants
  // [TokenAttribute] Offset: FFFFFFFF
  class WitConstants : public ::Il2CppObject {
    public:
    // static field const value: static public System.String API_VERSION
    static constexpr const char* API_VERSION = "20230613";
    // Get static field: static public System.String API_VERSION
    static ::StringW _get_API_VERSION();
    // Set static field: static public System.String API_VERSION
    static void _set_API_VERSION(::StringW value);
    // static field const value: static public System.String SDK_VERSION
    static constexpr const char* SDK_VERSION = "57.0.0";
    // Get static field: static public System.String SDK_VERSION
    static ::StringW _get_SDK_VERSION();
    // Set static field: static public System.String SDK_VERSION
    static void _set_SDK_VERSION(::StringW value);
    // static field const value: static public System.String CLIENT_NAME
    static constexpr const char* CLIENT_NAME = "wit-unity";
    // Get static field: static public System.String CLIENT_NAME
    static ::StringW _get_CLIENT_NAME();
    // Set static field: static public System.String CLIENT_NAME
    static void _set_CLIENT_NAME(::StringW value);
    // static field const value: static public System.String URI_SCHEME
    static constexpr const char* URI_SCHEME = "https";
    // Get static field: static public System.String URI_SCHEME
    static ::StringW _get_URI_SCHEME();
    // Set static field: static public System.String URI_SCHEME
    static void _set_URI_SCHEME(::StringW value);
    // static field const value: static public System.String URI_AUTHORITY
    static constexpr const char* URI_AUTHORITY = "api.wit.ai";
    // Get static field: static public System.String URI_AUTHORITY
    static ::StringW _get_URI_AUTHORITY();
    // Set static field: static public System.String URI_AUTHORITY
    static void _set_URI_AUTHORITY(::StringW value);
    // static field const value: static public System.Int32 URI_DEFAULT_PORT
    static constexpr const int URI_DEFAULT_PORT = -1;
    // Get static field: static public System.Int32 URI_DEFAULT_PORT
    static int _get_URI_DEFAULT_PORT();
    // Set static field: static public System.Int32 URI_DEFAULT_PORT
    static void _set_URI_DEFAULT_PORT(int value);
    // static field const value: static public System.String HEADER_REQUEST_ID
    static constexpr const char* HEADER_REQUEST_ID = "X-Wit-Client-Request-Id";
    // Get static field: static public System.String HEADER_REQUEST_ID
    static ::StringW _get_HEADER_REQUEST_ID();
    // Set static field: static public System.String HEADER_REQUEST_ID
    static void _set_HEADER_REQUEST_ID(::StringW value);
    // static field const value: static public System.String HEADER_AUTH
    static constexpr const char* HEADER_AUTH = "Authorization";
    // Get static field: static public System.String HEADER_AUTH
    static ::StringW _get_HEADER_AUTH();
    // Set static field: static public System.String HEADER_AUTH
    static void _set_HEADER_AUTH(::StringW value);
    // static field const value: static public System.String HEADER_USERAGENT
    static constexpr const char* HEADER_USERAGENT = "User-Agent";
    // Get static field: static public System.String HEADER_USERAGENT
    static ::StringW _get_HEADER_USERAGENT();
    // Set static field: static public System.String HEADER_USERAGENT
    static void _set_HEADER_USERAGENT(::StringW value);
    // static field const value: static public System.String HEADER_USERAGENT_CONFID_MISSING
    static constexpr const char* HEADER_USERAGENT_CONFID_MISSING = "not-yet-configured";
    // Get static field: static public System.String HEADER_USERAGENT_CONFID_MISSING
    static ::StringW _get_HEADER_USERAGENT_CONFID_MISSING();
    // Set static field: static public System.String HEADER_USERAGENT_CONFID_MISSING
    static void _set_HEADER_USERAGENT_CONFID_MISSING(::StringW value);
    // static field const value: static public System.String HEADER_POST_CONTENT
    static constexpr const char* HEADER_POST_CONTENT = "Content-Type";
    // Get static field: static public System.String HEADER_POST_CONTENT
    static ::StringW _get_HEADER_POST_CONTENT();
    // Set static field: static public System.String HEADER_POST_CONTENT
    static void _set_HEADER_POST_CONTENT(::StringW value);
    // static field const value: static public System.String HEADER_GET_CONTENT
    static constexpr const char* HEADER_GET_CONTENT = "Accept";
    // Get static field: static public System.String HEADER_GET_CONTENT
    static ::StringW _get_HEADER_GET_CONTENT();
    // Set static field: static public System.String HEADER_GET_CONTENT
    static void _set_HEADER_GET_CONTENT(::StringW value);
    // static field const value: static public System.String ENDPOINT_SPEECH
    static constexpr const char* ENDPOINT_SPEECH = "speech";
    // Get static field: static public System.String ENDPOINT_SPEECH
    static ::StringW _get_ENDPOINT_SPEECH();
    // Set static field: static public System.String ENDPOINT_SPEECH
    static void _set_ENDPOINT_SPEECH(::StringW value);
    // static field const value: static public System.String ENDPOINT_MESSAGE
    static constexpr const char* ENDPOINT_MESSAGE = "message";
    // Get static field: static public System.String ENDPOINT_MESSAGE
    static ::StringW _get_ENDPOINT_MESSAGE();
    // Set static field: static public System.String ENDPOINT_MESSAGE
    static void _set_ENDPOINT_MESSAGE(::StringW value);
    // static field const value: static public System.String ENDPOINT_MESSAGE_PARAM
    static constexpr const char* ENDPOINT_MESSAGE_PARAM = "q";
    // Get static field: static public System.String ENDPOINT_MESSAGE_PARAM
    static ::StringW _get_ENDPOINT_MESSAGE_PARAM();
    // Set static field: static public System.String ENDPOINT_MESSAGE_PARAM
    static void _set_ENDPOINT_MESSAGE_PARAM(::StringW value);
    // static field const value: static public System.String ENDPOINT_JSON_DELIMITER
    static constexpr const char* ENDPOINT_JSON_DELIMITER = "\u000d\u000a";
    // Get static field: static public System.String ENDPOINT_JSON_DELIMITER
    static ::StringW _get_ENDPOINT_JSON_DELIMITER();
    // Set static field: static public System.String ENDPOINT_JSON_DELIMITER
    static void _set_ENDPOINT_JSON_DELIMITER(::StringW value);
    // static field const value: static public System.String ENDPOINT_ERROR_PARAM
    static constexpr const char* ENDPOINT_ERROR_PARAM = "error";
    // Get static field: static public System.String ENDPOINT_ERROR_PARAM
    static ::StringW _get_ENDPOINT_ERROR_PARAM();
    // Set static field: static public System.String ENDPOINT_ERROR_PARAM
    static void _set_ENDPOINT_ERROR_PARAM(::StringW value);
    // static field const value: static public System.String ENDPOINT_TTS
    static constexpr const char* ENDPOINT_TTS = "synthesize";
    // Get static field: static public System.String ENDPOINT_TTS
    static ::StringW _get_ENDPOINT_TTS();
    // Set static field: static public System.String ENDPOINT_TTS
    static void _set_ENDPOINT_TTS(::StringW value);
    // static field const value: static public System.String ENDPOINT_TTS_PARAM
    static constexpr const char* ENDPOINT_TTS_PARAM = "q";
    // Get static field: static public System.String ENDPOINT_TTS_PARAM
    static ::StringW _get_ENDPOINT_TTS_PARAM();
    // Set static field: static public System.String ENDPOINT_TTS_PARAM
    static void _set_ENDPOINT_TTS_PARAM(::StringW value);
    // static field const value: static public System.String ENDPOINT_TTS_NO_TEXT
    static constexpr const char* ENDPOINT_TTS_NO_TEXT = "No text provided";
    // Get static field: static public System.String ENDPOINT_TTS_NO_TEXT
    static ::StringW _get_ENDPOINT_TTS_NO_TEXT();
    // Set static field: static public System.String ENDPOINT_TTS_NO_TEXT
    static void _set_ENDPOINT_TTS_NO_TEXT(::StringW value);
    // static field const value: static public System.Int32 ENDPOINT_TTS_CHANNELS
    static constexpr const int ENDPOINT_TTS_CHANNELS = 1;
    // Get static field: static public System.Int32 ENDPOINT_TTS_CHANNELS
    static int _get_ENDPOINT_TTS_CHANNELS();
    // Set static field: static public System.Int32 ENDPOINT_TTS_CHANNELS
    static void _set_ENDPOINT_TTS_CHANNELS(int value);
    // static field const value: static public System.Int32 ENDPOINT_TTS_SAMPLE_RATE
    static constexpr const int ENDPOINT_TTS_SAMPLE_RATE = 24000;
    // Get static field: static public System.Int32 ENDPOINT_TTS_SAMPLE_RATE
    static int _get_ENDPOINT_TTS_SAMPLE_RATE();
    // Set static field: static public System.Int32 ENDPOINT_TTS_SAMPLE_RATE
    static void _set_ENDPOINT_TTS_SAMPLE_RATE(int value);
    // static field const value: static public System.Int32 ENDPOINT_TTS_TIMEOUT
    static constexpr const int ENDPOINT_TTS_TIMEOUT = 10000;
    // Get static field: static public System.Int32 ENDPOINT_TTS_TIMEOUT
    static int _get_ENDPOINT_TTS_TIMEOUT();
    // Set static field: static public System.Int32 ENDPOINT_TTS_TIMEOUT
    static void _set_ENDPOINT_TTS_TIMEOUT(int value);
    // static field const value: static public System.Int32 ENDPOINT_TTS_MAX_TEXT_LENGTH
    static constexpr const int ENDPOINT_TTS_MAX_TEXT_LENGTH = 280;
    // Get static field: static public System.Int32 ENDPOINT_TTS_MAX_TEXT_LENGTH
    static int _get_ENDPOINT_TTS_MAX_TEXT_LENGTH();
    // Set static field: static public System.Int32 ENDPOINT_TTS_MAX_TEXT_LENGTH
    static void _set_ENDPOINT_TTS_MAX_TEXT_LENGTH(int value);
    // static field const value: static public System.String ERROR_TTS_CACHE_DOWNLOAD
    static constexpr const char* ERROR_TTS_CACHE_DOWNLOAD = "File is not Preloaded";
    // Get static field: static public System.String ERROR_TTS_CACHE_DOWNLOAD
    static ::StringW _get_ERROR_TTS_CACHE_DOWNLOAD();
    // Set static field: static public System.String ERROR_TTS_CACHE_DOWNLOAD
    static void _set_ERROR_TTS_CACHE_DOWNLOAD(::StringW value);
    // static field const value: static public System.String ENDPOINT_DICTATION
    static constexpr const char* ENDPOINT_DICTATION = "dictation";
    // Get static field: static public System.String ENDPOINT_DICTATION
    static ::StringW _get_ENDPOINT_DICTATION();
    // Set static field: static public System.String ENDPOINT_DICTATION
    static void _set_ENDPOINT_DICTATION(::StringW value);
    // static field const value: static public System.String ENDPOINT_COMPOSER_SPEECH
    static constexpr const char* ENDPOINT_COMPOSER_SPEECH = "converse";
    // Get static field: static public System.String ENDPOINT_COMPOSER_SPEECH
    static ::StringW _get_ENDPOINT_COMPOSER_SPEECH();
    // Set static field: static public System.String ENDPOINT_COMPOSER_SPEECH
    static void _set_ENDPOINT_COMPOSER_SPEECH(::StringW value);
    // static field const value: static public System.String ENDPOINT_COMPOSER_MESSAGE
    static constexpr const char* ENDPOINT_COMPOSER_MESSAGE = "event";
    // Get static field: static public System.String ENDPOINT_COMPOSER_MESSAGE
    static ::StringW _get_ENDPOINT_COMPOSER_MESSAGE();
    // Set static field: static public System.String ENDPOINT_COMPOSER_MESSAGE
    static void _set_ENDPOINT_COMPOSER_MESSAGE(::StringW value);
    // static field const value: static public System.String CANCEL_ERROR
    static constexpr const char* CANCEL_ERROR = "Cancelled";
    // Get static field: static public System.String CANCEL_ERROR
    static ::StringW _get_CANCEL_ERROR();
    // Set static field: static public System.String CANCEL_ERROR
    static void _set_CANCEL_ERROR(::StringW value);
    // static field const value: static public System.String CANCEL_MESSAGE_DEFAULT
    static constexpr const char* CANCEL_MESSAGE_DEFAULT = "Request was cancelled.";
    // Get static field: static public System.String CANCEL_MESSAGE_DEFAULT
    static ::StringW _get_CANCEL_MESSAGE_DEFAULT();
    // Set static field: static public System.String CANCEL_MESSAGE_DEFAULT
    static void _set_CANCEL_MESSAGE_DEFAULT(::StringW value);
    // static field const value: static public System.String CANCEL_MESSAGE_PRE_SEND
    static constexpr const char* CANCEL_MESSAGE_PRE_SEND = "Request cancelled prior to transmission";
    // Get static field: static public System.String CANCEL_MESSAGE_PRE_SEND
    static ::StringW _get_CANCEL_MESSAGE_PRE_SEND();
    // Set static field: static public System.String CANCEL_MESSAGE_PRE_SEND
    static void _set_CANCEL_MESSAGE_PRE_SEND(::StringW value);
    // static field const value: static public System.Int32 ERROR_CODE_GENERAL
    static constexpr const int ERROR_CODE_GENERAL = -1;
    // Get static field: static public System.Int32 ERROR_CODE_GENERAL
    static int _get_ERROR_CODE_GENERAL();
    // Set static field: static public System.Int32 ERROR_CODE_GENERAL
    static void _set_ERROR_CODE_GENERAL(int value);
    // static field const value: static public System.Int32 ERROR_CODE_NO_CONFIGURATION
    static constexpr const int ERROR_CODE_NO_CONFIGURATION = -2;
    // Get static field: static public System.Int32 ERROR_CODE_NO_CONFIGURATION
    static int _get_ERROR_CODE_NO_CONFIGURATION();
    // Set static field: static public System.Int32 ERROR_CODE_NO_CONFIGURATION
    static void _set_ERROR_CODE_NO_CONFIGURATION(int value);
    // static field const value: static public System.Int32 ERROR_CODE_NO_CLIENT_TOKEN
    static constexpr const int ERROR_CODE_NO_CLIENT_TOKEN = -3;
    // Get static field: static public System.Int32 ERROR_CODE_NO_CLIENT_TOKEN
    static int _get_ERROR_CODE_NO_CLIENT_TOKEN();
    // Set static field: static public System.Int32 ERROR_CODE_NO_CLIENT_TOKEN
    static void _set_ERROR_CODE_NO_CLIENT_TOKEN(int value);
    // static field const value: static public System.Int32 ERROR_CODE_NO_DATA_FROM_SERVER
    static constexpr const int ERROR_CODE_NO_DATA_FROM_SERVER = -4;
    // Get static field: static public System.Int32 ERROR_CODE_NO_DATA_FROM_SERVER
    static int _get_ERROR_CODE_NO_DATA_FROM_SERVER();
    // Set static field: static public System.Int32 ERROR_CODE_NO_DATA_FROM_SERVER
    static void _set_ERROR_CODE_NO_DATA_FROM_SERVER(int value);
    // static field const value: static public System.Int32 ERROR_CODE_INVALID_DATA_FROM_SERVER
    static constexpr const int ERROR_CODE_INVALID_DATA_FROM_SERVER = -5;
    // Get static field: static public System.Int32 ERROR_CODE_INVALID_DATA_FROM_SERVER
    static int _get_ERROR_CODE_INVALID_DATA_FROM_SERVER();
    // Set static field: static public System.Int32 ERROR_CODE_INVALID_DATA_FROM_SERVER
    static void _set_ERROR_CODE_INVALID_DATA_FROM_SERVER(int value);
    // static field const value: static public System.Int32 ERROR_CODE_ABORTED
    static constexpr const int ERROR_CODE_ABORTED = -6;
    // Get static field: static public System.Int32 ERROR_CODE_ABORTED
    static int _get_ERROR_CODE_ABORTED();
    // Set static field: static public System.Int32 ERROR_CODE_ABORTED
    static void _set_ERROR_CODE_ABORTED(int value);
    // static field const value: static public System.Int32 ERROR_CODE_TIMEOUT
    static constexpr const int ERROR_CODE_TIMEOUT = 14;
    // Get static field: static public System.Int32 ERROR_CODE_TIMEOUT
    static int _get_ERROR_CODE_TIMEOUT();
    // Set static field: static public System.Int32 ERROR_CODE_TIMEOUT
    static void _set_ERROR_CODE_TIMEOUT(int value);
  }; // Meta.WitAi.WitConstants
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"