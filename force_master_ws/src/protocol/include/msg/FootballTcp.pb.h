// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FootballTcp.proto

#ifndef PROTOBUF_INCLUDED_FootballTcp_2eproto
#define PROTOBUF_INCLUDED_FootballTcp_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_FootballTcp_2eproto 

namespace protobuf_FootballTcp_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_FootballTcp_2eproto
namespace FootballTcp {
class Ubuntu2Unity;
class Ubuntu2UnityDefaultTypeInternal;
extern Ubuntu2UnityDefaultTypeInternal _Ubuntu2Unity_default_instance_;
class Unity2Ubuntu;
class Unity2UbuntuDefaultTypeInternal;
extern Unity2UbuntuDefaultTypeInternal _Unity2Ubuntu_default_instance_;
}  // namespace FootballTcp
namespace google {
namespace protobuf {
template<> ::FootballTcp::Ubuntu2Unity* Arena::CreateMaybeMessage<::FootballTcp::Ubuntu2Unity>(Arena*);
template<> ::FootballTcp::Unity2Ubuntu* Arena::CreateMaybeMessage<::FootballTcp::Unity2Ubuntu>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace FootballTcp {

enum Unity2Ubuntu_DataRequireEnum {
  Unity2Ubuntu_DataRequireEnum_data_not_require = 0,
  Unity2Ubuntu_DataRequireEnum_data_require = 1,
  Unity2Ubuntu_DataRequireEnum_Unity2Ubuntu_DataRequireEnum_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Unity2Ubuntu_DataRequireEnum_Unity2Ubuntu_DataRequireEnum_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Unity2Ubuntu_DataRequireEnum_IsValid(int value);
const Unity2Ubuntu_DataRequireEnum Unity2Ubuntu_DataRequireEnum_DataRequireEnum_MIN = Unity2Ubuntu_DataRequireEnum_data_not_require;
const Unity2Ubuntu_DataRequireEnum Unity2Ubuntu_DataRequireEnum_DataRequireEnum_MAX = Unity2Ubuntu_DataRequireEnum_data_require;
const int Unity2Ubuntu_DataRequireEnum_DataRequireEnum_ARRAYSIZE = Unity2Ubuntu_DataRequireEnum_DataRequireEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* Unity2Ubuntu_DataRequireEnum_descriptor();
inline const ::std::string& Unity2Ubuntu_DataRequireEnum_Name(Unity2Ubuntu_DataRequireEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    Unity2Ubuntu_DataRequireEnum_descriptor(), value);
}
inline bool Unity2Ubuntu_DataRequireEnum_Parse(
    const ::std::string& name, Unity2Ubuntu_DataRequireEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Unity2Ubuntu_DataRequireEnum>(
    Unity2Ubuntu_DataRequireEnum_descriptor(), name, value);
}
enum Ubuntu2Unity_GameReplayEnum {
  Ubuntu2Unity_GameReplayEnum_game_ing = 0,
  Ubuntu2Unity_GameReplayEnum_game_back = 1,
  Ubuntu2Unity_GameReplayEnum_game_replay = 2,
  Ubuntu2Unity_GameReplayEnum_game_pause = 3,
  Ubuntu2Unity_GameReplayEnum_Ubuntu2Unity_GameReplayEnum_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Ubuntu2Unity_GameReplayEnum_Ubuntu2Unity_GameReplayEnum_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Ubuntu2Unity_GameReplayEnum_IsValid(int value);
const Ubuntu2Unity_GameReplayEnum Ubuntu2Unity_GameReplayEnum_GameReplayEnum_MIN = Ubuntu2Unity_GameReplayEnum_game_ing;
const Ubuntu2Unity_GameReplayEnum Ubuntu2Unity_GameReplayEnum_GameReplayEnum_MAX = Ubuntu2Unity_GameReplayEnum_game_pause;
const int Ubuntu2Unity_GameReplayEnum_GameReplayEnum_ARRAYSIZE = Ubuntu2Unity_GameReplayEnum_GameReplayEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* Ubuntu2Unity_GameReplayEnum_descriptor();
inline const ::std::string& Ubuntu2Unity_GameReplayEnum_Name(Ubuntu2Unity_GameReplayEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    Ubuntu2Unity_GameReplayEnum_descriptor(), value);
}
inline bool Ubuntu2Unity_GameReplayEnum_Parse(
    const ::std::string& name, Ubuntu2Unity_GameReplayEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Ubuntu2Unity_GameReplayEnum>(
    Ubuntu2Unity_GameReplayEnum_descriptor(), name, value);
}
enum Ubuntu2Unity_GameDeviceEnum {
  Ubuntu2Unity_GameDeviceEnum_vr = 0,
  Ubuntu2Unity_GameDeviceEnum_screen = 1,
  Ubuntu2Unity_GameDeviceEnum_Ubuntu2Unity_GameDeviceEnum_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Ubuntu2Unity_GameDeviceEnum_Ubuntu2Unity_GameDeviceEnum_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Ubuntu2Unity_GameDeviceEnum_IsValid(int value);
const Ubuntu2Unity_GameDeviceEnum Ubuntu2Unity_GameDeviceEnum_GameDeviceEnum_MIN = Ubuntu2Unity_GameDeviceEnum_vr;
const Ubuntu2Unity_GameDeviceEnum Ubuntu2Unity_GameDeviceEnum_GameDeviceEnum_MAX = Ubuntu2Unity_GameDeviceEnum_screen;
const int Ubuntu2Unity_GameDeviceEnum_GameDeviceEnum_ARRAYSIZE = Ubuntu2Unity_GameDeviceEnum_GameDeviceEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* Ubuntu2Unity_GameDeviceEnum_descriptor();
inline const ::std::string& Ubuntu2Unity_GameDeviceEnum_Name(Ubuntu2Unity_GameDeviceEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    Ubuntu2Unity_GameDeviceEnum_descriptor(), value);
}
inline bool Ubuntu2Unity_GameDeviceEnum_Parse(
    const ::std::string& name, Ubuntu2Unity_GameDeviceEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Ubuntu2Unity_GameDeviceEnum>(
    Ubuntu2Unity_GameDeviceEnum_descriptor(), name, value);
}
// ===================================================================

class Unity2Ubuntu : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:FootballTcp.Unity2Ubuntu) */ {
 public:
  Unity2Ubuntu();
  virtual ~Unity2Ubuntu();

  Unity2Ubuntu(const Unity2Ubuntu& from);

  inline Unity2Ubuntu& operator=(const Unity2Ubuntu& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Unity2Ubuntu(Unity2Ubuntu&& from) noexcept
    : Unity2Ubuntu() {
    *this = ::std::move(from);
  }

  inline Unity2Ubuntu& operator=(Unity2Ubuntu&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Unity2Ubuntu& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Unity2Ubuntu* internal_default_instance() {
    return reinterpret_cast<const Unity2Ubuntu*>(
               &_Unity2Ubuntu_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Unity2Ubuntu* other);
  friend void swap(Unity2Ubuntu& a, Unity2Ubuntu& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Unity2Ubuntu* New() const final {
    return CreateMaybeMessage<Unity2Ubuntu>(NULL);
  }

  Unity2Ubuntu* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Unity2Ubuntu>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Unity2Ubuntu& from);
  void MergeFrom(const Unity2Ubuntu& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Unity2Ubuntu* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Unity2Ubuntu_DataRequireEnum DataRequireEnum;
  static const DataRequireEnum data_not_require =
    Unity2Ubuntu_DataRequireEnum_data_not_require;
  static const DataRequireEnum data_require =
    Unity2Ubuntu_DataRequireEnum_data_require;
  static inline bool DataRequireEnum_IsValid(int value) {
    return Unity2Ubuntu_DataRequireEnum_IsValid(value);
  }
  static const DataRequireEnum DataRequireEnum_MIN =
    Unity2Ubuntu_DataRequireEnum_DataRequireEnum_MIN;
  static const DataRequireEnum DataRequireEnum_MAX =
    Unity2Ubuntu_DataRequireEnum_DataRequireEnum_MAX;
  static const int DataRequireEnum_ARRAYSIZE =
    Unity2Ubuntu_DataRequireEnum_DataRequireEnum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  DataRequireEnum_descriptor() {
    return Unity2Ubuntu_DataRequireEnum_descriptor();
  }
  static inline const ::std::string& DataRequireEnum_Name(DataRequireEnum value) {
    return Unity2Ubuntu_DataRequireEnum_Name(value);
  }
  static inline bool DataRequireEnum_Parse(const ::std::string& name,
      DataRequireEnum* value) {
    return Unity2Ubuntu_DataRequireEnum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .FootballTcp.Unity2Ubuntu.DataRequireEnum DataRequire = 1;
  void clear_datarequire();
  static const int kDataRequireFieldNumber = 1;
  ::FootballTcp::Unity2Ubuntu_DataRequireEnum datarequire() const;
  void set_datarequire(::FootballTcp::Unity2Ubuntu_DataRequireEnum value);

  // @@protoc_insertion_point(class_scope:FootballTcp.Unity2Ubuntu)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int datarequire_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_FootballTcp_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Ubuntu2Unity : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:FootballTcp.Ubuntu2Unity) */ {
 public:
  Ubuntu2Unity();
  virtual ~Ubuntu2Unity();

  Ubuntu2Unity(const Ubuntu2Unity& from);

  inline Ubuntu2Unity& operator=(const Ubuntu2Unity& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Ubuntu2Unity(Ubuntu2Unity&& from) noexcept
    : Ubuntu2Unity() {
    *this = ::std::move(from);
  }

  inline Ubuntu2Unity& operator=(Ubuntu2Unity&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Ubuntu2Unity& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Ubuntu2Unity* internal_default_instance() {
    return reinterpret_cast<const Ubuntu2Unity*>(
               &_Ubuntu2Unity_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Ubuntu2Unity* other);
  friend void swap(Ubuntu2Unity& a, Ubuntu2Unity& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Ubuntu2Unity* New() const final {
    return CreateMaybeMessage<Ubuntu2Unity>(NULL);
  }

  Ubuntu2Unity* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Ubuntu2Unity>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Ubuntu2Unity& from);
  void MergeFrom(const Ubuntu2Unity& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Ubuntu2Unity* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Ubuntu2Unity_GameReplayEnum GameReplayEnum;
  static const GameReplayEnum game_ing =
    Ubuntu2Unity_GameReplayEnum_game_ing;
  static const GameReplayEnum game_back =
    Ubuntu2Unity_GameReplayEnum_game_back;
  static const GameReplayEnum game_replay =
    Ubuntu2Unity_GameReplayEnum_game_replay;
  static const GameReplayEnum game_pause =
    Ubuntu2Unity_GameReplayEnum_game_pause;
  static inline bool GameReplayEnum_IsValid(int value) {
    return Ubuntu2Unity_GameReplayEnum_IsValid(value);
  }
  static const GameReplayEnum GameReplayEnum_MIN =
    Ubuntu2Unity_GameReplayEnum_GameReplayEnum_MIN;
  static const GameReplayEnum GameReplayEnum_MAX =
    Ubuntu2Unity_GameReplayEnum_GameReplayEnum_MAX;
  static const int GameReplayEnum_ARRAYSIZE =
    Ubuntu2Unity_GameReplayEnum_GameReplayEnum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  GameReplayEnum_descriptor() {
    return Ubuntu2Unity_GameReplayEnum_descriptor();
  }
  static inline const ::std::string& GameReplayEnum_Name(GameReplayEnum value) {
    return Ubuntu2Unity_GameReplayEnum_Name(value);
  }
  static inline bool GameReplayEnum_Parse(const ::std::string& name,
      GameReplayEnum* value) {
    return Ubuntu2Unity_GameReplayEnum_Parse(name, value);
  }

  typedef Ubuntu2Unity_GameDeviceEnum GameDeviceEnum;
  static const GameDeviceEnum vr =
    Ubuntu2Unity_GameDeviceEnum_vr;
  static const GameDeviceEnum screen =
    Ubuntu2Unity_GameDeviceEnum_screen;
  static inline bool GameDeviceEnum_IsValid(int value) {
    return Ubuntu2Unity_GameDeviceEnum_IsValid(value);
  }
  static const GameDeviceEnum GameDeviceEnum_MIN =
    Ubuntu2Unity_GameDeviceEnum_GameDeviceEnum_MIN;
  static const GameDeviceEnum GameDeviceEnum_MAX =
    Ubuntu2Unity_GameDeviceEnum_GameDeviceEnum_MAX;
  static const int GameDeviceEnum_ARRAYSIZE =
    Ubuntu2Unity_GameDeviceEnum_GameDeviceEnum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  GameDeviceEnum_descriptor() {
    return Ubuntu2Unity_GameDeviceEnum_descriptor();
  }
  static inline const ::std::string& GameDeviceEnum_Name(GameDeviceEnum value) {
    return Ubuntu2Unity_GameDeviceEnum_Name(value);
  }
  static inline bool GameDeviceEnum_Parse(const ::std::string& name,
      GameDeviceEnum* value) {
    return Ubuntu2Unity_GameDeviceEnum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated float TCPGesture = 1;
  int tcpgesture_size() const;
  void clear_tcpgesture();
  static const int kTCPGestureFieldNumber = 1;
  float tcpgesture(int index) const;
  void set_tcpgesture(int index, float value);
  void add_tcpgesture(float value);
  const ::google::protobuf::RepeatedField< float >&
      tcpgesture() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_tcpgesture();

  // repeated float TCPSpeed = 2;
  int tcpspeed_size() const;
  void clear_tcpspeed();
  static const int kTCPSpeedFieldNumber = 2;
  float tcpspeed(int index) const;
  void set_tcpspeed(int index, float value);
  void add_tcpspeed(float value);
  const ::google::protobuf::RepeatedField< float >&
      tcpspeed() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_tcpspeed();

  // .FootballTcp.Ubuntu2Unity.GameReplayEnum GameReplay = 3;
  void clear_gamereplay();
  static const int kGameReplayFieldNumber = 3;
  ::FootballTcp::Ubuntu2Unity_GameReplayEnum gamereplay() const;
  void set_gamereplay(::FootballTcp::Ubuntu2Unity_GameReplayEnum value);

  // .FootballTcp.Ubuntu2Unity.GameDeviceEnum GameDevice = 4;
  void clear_gamedevice();
  static const int kGameDeviceFieldNumber = 4;
  ::FootballTcp::Ubuntu2Unity_GameDeviceEnum gamedevice() const;
  void set_gamedevice(::FootballTcp::Ubuntu2Unity_GameDeviceEnum value);

  // @@protoc_insertion_point(class_scope:FootballTcp.Ubuntu2Unity)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< float > tcpgesture_;
  mutable int _tcpgesture_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > tcpspeed_;
  mutable int _tcpspeed_cached_byte_size_;
  int gamereplay_;
  int gamedevice_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_FootballTcp_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Unity2Ubuntu

// .FootballTcp.Unity2Ubuntu.DataRequireEnum DataRequire = 1;
inline void Unity2Ubuntu::clear_datarequire() {
  datarequire_ = 0;
}
inline ::FootballTcp::Unity2Ubuntu_DataRequireEnum Unity2Ubuntu::datarequire() const {
  // @@protoc_insertion_point(field_get:FootballTcp.Unity2Ubuntu.DataRequire)
  return static_cast< ::FootballTcp::Unity2Ubuntu_DataRequireEnum >(datarequire_);
}
inline void Unity2Ubuntu::set_datarequire(::FootballTcp::Unity2Ubuntu_DataRequireEnum value) {
  
  datarequire_ = value;
  // @@protoc_insertion_point(field_set:FootballTcp.Unity2Ubuntu.DataRequire)
}

// -------------------------------------------------------------------

// Ubuntu2Unity

// repeated float TCPGesture = 1;
inline int Ubuntu2Unity::tcpgesture_size() const {
  return tcpgesture_.size();
}
inline void Ubuntu2Unity::clear_tcpgesture() {
  tcpgesture_.Clear();
}
inline float Ubuntu2Unity::tcpgesture(int index) const {
  // @@protoc_insertion_point(field_get:FootballTcp.Ubuntu2Unity.TCPGesture)
  return tcpgesture_.Get(index);
}
inline void Ubuntu2Unity::set_tcpgesture(int index, float value) {
  tcpgesture_.Set(index, value);
  // @@protoc_insertion_point(field_set:FootballTcp.Ubuntu2Unity.TCPGesture)
}
inline void Ubuntu2Unity::add_tcpgesture(float value) {
  tcpgesture_.Add(value);
  // @@protoc_insertion_point(field_add:FootballTcp.Ubuntu2Unity.TCPGesture)
}
inline const ::google::protobuf::RepeatedField< float >&
Ubuntu2Unity::tcpgesture() const {
  // @@protoc_insertion_point(field_list:FootballTcp.Ubuntu2Unity.TCPGesture)
  return tcpgesture_;
}
inline ::google::protobuf::RepeatedField< float >*
Ubuntu2Unity::mutable_tcpgesture() {
  // @@protoc_insertion_point(field_mutable_list:FootballTcp.Ubuntu2Unity.TCPGesture)
  return &tcpgesture_;
}

// repeated float TCPSpeed = 2;
inline int Ubuntu2Unity::tcpspeed_size() const {
  return tcpspeed_.size();
}
inline void Ubuntu2Unity::clear_tcpspeed() {
  tcpspeed_.Clear();
}
inline float Ubuntu2Unity::tcpspeed(int index) const {
  // @@protoc_insertion_point(field_get:FootballTcp.Ubuntu2Unity.TCPSpeed)
  return tcpspeed_.Get(index);
}
inline void Ubuntu2Unity::set_tcpspeed(int index, float value) {
  tcpspeed_.Set(index, value);
  // @@protoc_insertion_point(field_set:FootballTcp.Ubuntu2Unity.TCPSpeed)
}
inline void Ubuntu2Unity::add_tcpspeed(float value) {
  tcpspeed_.Add(value);
  // @@protoc_insertion_point(field_add:FootballTcp.Ubuntu2Unity.TCPSpeed)
}
inline const ::google::protobuf::RepeatedField< float >&
Ubuntu2Unity::tcpspeed() const {
  // @@protoc_insertion_point(field_list:FootballTcp.Ubuntu2Unity.TCPSpeed)
  return tcpspeed_;
}
inline ::google::protobuf::RepeatedField< float >*
Ubuntu2Unity::mutable_tcpspeed() {
  // @@protoc_insertion_point(field_mutable_list:FootballTcp.Ubuntu2Unity.TCPSpeed)
  return &tcpspeed_;
}

// .FootballTcp.Ubuntu2Unity.GameReplayEnum GameReplay = 3;
inline void Ubuntu2Unity::clear_gamereplay() {
  gamereplay_ = 0;
}
inline ::FootballTcp::Ubuntu2Unity_GameReplayEnum Ubuntu2Unity::gamereplay() const {
  // @@protoc_insertion_point(field_get:FootballTcp.Ubuntu2Unity.GameReplay)
  return static_cast< ::FootballTcp::Ubuntu2Unity_GameReplayEnum >(gamereplay_);
}
inline void Ubuntu2Unity::set_gamereplay(::FootballTcp::Ubuntu2Unity_GameReplayEnum value) {
  
  gamereplay_ = value;
  // @@protoc_insertion_point(field_set:FootballTcp.Ubuntu2Unity.GameReplay)
}

// .FootballTcp.Ubuntu2Unity.GameDeviceEnum GameDevice = 4;
inline void Ubuntu2Unity::clear_gamedevice() {
  gamedevice_ = 0;
}
inline ::FootballTcp::Ubuntu2Unity_GameDeviceEnum Ubuntu2Unity::gamedevice() const {
  // @@protoc_insertion_point(field_get:FootballTcp.Ubuntu2Unity.GameDevice)
  return static_cast< ::FootballTcp::Ubuntu2Unity_GameDeviceEnum >(gamedevice_);
}
inline void Ubuntu2Unity::set_gamedevice(::FootballTcp::Ubuntu2Unity_GameDeviceEnum value) {
  
  gamedevice_ = value;
  // @@protoc_insertion_point(field_set:FootballTcp.Ubuntu2Unity.GameDevice)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace FootballTcp

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::FootballTcp::Unity2Ubuntu_DataRequireEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::FootballTcp::Unity2Ubuntu_DataRequireEnum>() {
  return ::FootballTcp::Unity2Ubuntu_DataRequireEnum_descriptor();
}
template <> struct is_proto_enum< ::FootballTcp::Ubuntu2Unity_GameReplayEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::FootballTcp::Ubuntu2Unity_GameReplayEnum>() {
  return ::FootballTcp::Ubuntu2Unity_GameReplayEnum_descriptor();
}
template <> struct is_proto_enum< ::FootballTcp::Ubuntu2Unity_GameDeviceEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::FootballTcp::Ubuntu2Unity_GameDeviceEnum>() {
  return ::FootballTcp::Ubuntu2Unity_GameDeviceEnum_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_FootballTcp_2eproto