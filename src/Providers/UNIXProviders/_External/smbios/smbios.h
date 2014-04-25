#include <vector>
#include <cstdint>
#include <time.h>

#ifndef __SMBIOS_H__
#define __SMBIOS_H__

/* Use mmap or not */
#ifndef __BEOS__
#define USE_MMAP
#endif

/* Use memory alignment workaround or not */
#ifdef __ia64__
#define ALIGNMENT_WORKAROUND
#endif

typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short i16;
typedef unsigned int u32;

/*
 * You may use the following defines to adjust the type definitions
 * depending on the architecture:
 * - Define BIGENDIAN on big-endian systems. Untested, as all target
 *   systems to date are little-endian.
 * - Define ALIGNMENT_WORKAROUND if your system doesn't support
 *   non-aligned memory access. In this case, we use a slower, but safer,
 *   memory access method. This should be done automatically in config.h
 *   for architectures which need it.
 */

#ifdef BIGENDIAN
typedef struct {
        u32 h;
        u32 l;
} u64;
#else
typedef struct {
        u32 l;
        u32 h;
} u64;
#endif

#ifdef ALIGNMENT_WORKAROUND
static inline u64 U64(u32 low, u32 high)
{
        u64 self;
 
        self.l = low;
        self.h = high;
 
        return self;
}
#endif
 
#ifdef ALIGNMENT_WORKAROUND
#       ifdef BIGENDIAN
#       define WORD(x) (u16)((x)[1] + ((x)[0] << 8))
#       define DWORD(x) (u32)((x)[3] + ((x)[2] << 8) + ((x)[1] << 16) + ((x)[0] << 24))
#       define QWORD(x) (U64(DWORD(x + 4), DWORD(x)))
#       else /* BIGENDIAN */
#       define WORD(x) (u16)((x)[0] + ((x)[1] << 8))
#       define DWORD(x) (u32)((x)[0] + ((x)[1] << 8) + ((x)[2] << 16) + ((x)[3] << 24))
#       define QWORD(x) (U64(DWORD(x), DWORD(x + 4)))
#       endif /* BIGENDIAN */
#else /* ALIGNMENT_WORKAROUND */
#define WORD(x) (u16)(*(const u16 *)(x))
#define DWORD(x) (u32)(*(const u32 *)(x))
#define QWORD(x) (*(const u64 *)(x))
#endif /* ALIGNMENT_WORKAROUND */


namespace smbios {

namespace types { enum {
	bios_info                   =   0, // Required
	bios_info2                  =   85, // Required
	system_info                 =   1, // Required
	baseboard_info              =   2,
	module_info                 =   2,
	system_enclosure            =   3, // Required
	system_chassis              =   3, // Required
	processor_info              =   4, // Required
	memory_controller_info      =   5, // Obsolete
	memory_module_info          =   6, // Obsolete
	cache_info                  =   7, // Required
	port_connector_info         =   8,
	system_slots                =   9, // Required
	onboard_device_info         =  10, // Obsolete
	oem_strings                 =  11,
	system_config_options       =  12,
	language_info               =  13,
	group_associations          =  14,
	system_event_log            =  15,
	memory_array                =  16, // Required
	memory_device               =  17, // Required
	memory_error_info_32bit     =  18,
	memory_array_mapped_addr    =  19, // Required
	memory_device_mapped_addr   =  20,
	builtin_pointing_device     =  21,
	portable_battery            =  22,
	system_reset                =  23,
	hardware_security           =  24,
	system_power_controls       =  25,
	voltage_probe               =  26,
	cooling_device              =  27,
	temperature_probe           =  28,
	electrical_current_probe    =  29,
	out_of_band_remote_access   =  30,
	bis_entry_point             =  31, // Required
	system_boot_info            =  32, // Required
	memory_error_info_64bit     =  33,
	management_device           =  34,
	management_device_component =  35,
	management_device_threshold =  36,
	memory_channel              =  37,
	ipmi_device_info            =  38,
	system_power_supply         =  39,
	additional_info             =  40,
	onboard_device_extinfo      =  41,
	management_controller_host  =  42,
	inactive                    = 126,
	end_of_table                = 127, // Always last structure
}; }

typedef uint8_t   byte_t;
typedef uint16_t  word_t;
typedef uint32_t dword_t;

#ifdef _MSC_VER
	typedef __int64 qword_t;
#else
	#ifdef INT64_C
		typedef uint64_t qword_t;
	#else
		typedef unsigned long long int qword_t;
	#endif
#endif

typedef byte_t str_id;
typedef byte_t enum_t;

typedef std::vector<char *> string_array_t;

struct header;

//#pragma pack(push, 1)

struct header {
	byte_t type;
	byte_t length;
	word_t handle;
};

struct string_list:public header {
	byte_t count;
};

struct bios_info:public header {
	str_id  vendor;  /* 0 */
  	str_id  version; /* 1 */
  	str_id  date_idx;    /* 2 */
  	unsigned int  romsize;
  	unsigned int  runtimesize;
  	unsigned int buildnumber;
  	unsigned int revision;
  	unsigned int starting_address;
  	unsigned int ending_address;
  	qword_t characteristics;
/*
	// 2.0
	str_id  vendor;
	str_id  version;
	word_t  starting_segment;
	str_id  release_date;
	byte_t  rom_size;
	qword_t characteristics;
	// 2.4
	byte_t ext_char1;
	byte_t ext_char2;
	byte_t sb_major;
	byte_t sb_minor;
	byte_t ec_major;
	byte_t ec_minor;
*/
};

struct system_info:public header {
	// 2.0
	str_id manufacturer;
	str_id product_name;
	str_id version;
	str_id serial_number;
	// 2.1
	struct {
		dword_t time_low;
		word_t  time_mid;
		word_t  time_hi_and_version;
		byte_t  clock_seq_hi_and_reserved;
		byte_t  clock_seq_low;
		byte_t  node[6];
	} uuid;
	enum_t wakeup_type;
	// 2.4
	str_id sku;
	str_id family;
};

struct system_chassis:public header {
	// 2.0
	str_id  manufacturer;
	byte_t  type;
	str_id  version;
	str_id  serial_number;
	str_id  assert_tag;
	// 2.1
	enum_t  bootup_state;
	enum_t  power_supply_state;
	enum_t  thermal_state;
	enum_t  security_status;
	// 2.3
	dword_t oem;
	byte_t  height;
	byte_t  cords;
};

struct proc_info:public header {
	// 2.0
	str_id  socket_designation;
	enum_t  type;
	enum_t  family;
	str_id  manufacturer;
	qword_t id;
	str_id  version;
	byte_t  voltage;
	word_t  clock;
	word_t  speed_max;
	word_t  speed_cur;
	byte_t  status;
	enum_t  upgrade;
	// 2.1
	word_t  L1;
	word_t  L2;
	word_t  L3;
	// 2.3
	str_id  serial_number;
	str_id  assert_tag;
	str_id  part_number;
	// 2.5
	byte_t  cores;
	byte_t  cores_enabled;
	byte_t  threads;
	word_t  characteristics;
	enum_t  family2;
};

struct cache_info:public header {
	// 2.0
	str_id socket_designation;
	word_t config;
	word_t size_max;
	word_t size_cur;
	word_t sram_supported;
	word_t sram_cur;
	// 2.1
	byte_t speed;
	enum_t error_correction_type;
	enum_t system_cache_type;
	enum_t associativity;
};

struct slot:public header {
	// 2.0
	str_id slot_designation;
	enum_t type;
	enum_t data_bus_width;
	enum_t current_usage;
	enum_t length;
	word_t id;
	byte_t characteristics;
	// 2.1
	byte_t characteristics2;
	// 2.6
	word_t segment_group;
	byte_t bus;
	byte_t device;
};

typedef string_list oem_strings;
typedef string_list system_config_options;

struct lang_info:public header {
	byte_t installed_langs;
	byte_t flags;
	byte_t reserved[15];
	str_id current_lang;
};

struct mem_arr:public header {
	// 2.1
	enum_t  location;
	enum_t  use;
	enum_t  error_correction;
	dword_t capacity;
	word_t  error_info_handle;
	word_t  devices_number;
	// 2.7
	qword_t capacity_ext;
};

struct mem_device:public header {
	// 2.1
	word_t  mem_arr_handle;
	word_t  mem_arr_error_info_handle;
	word_t  total_width;
	word_t  data_width;
	word_t  size;
	enum_t  form_factor;
	byte_t  device_set;
	str_id  device_locator;
	str_id  bank_locator;
	enum_t  type;
	word_t  type_detail;
	// 2.3
	word_t  speed;
	str_id  manufacturer;
	str_id  serial_number;
	str_id  assert_tag;
	str_id  part_number;
	// 2.6
	byte_t  attributes;
	// 2.7
	dword_t size_ext;
	word_t  clock_speed;
	// 2.8
	word_t  voltage_min;
	word_t  voltage_max;
	word_t  voltage;
};

class parser {
protected:
	size_t  raw_size;
	int memfile;
	size_t address_len;
public:
	std::vector<header *> headers;

	//parser():raw_data(nullptr) {};
	//parser(const parser &x)    {raw_data = x.raw_data; raw_size = x.raw_size; init(raw_data, raw_size); };

	virtual ~parser()          {clear(NULL);};
	static byte_t *skip(byte_t *);
	static header *extract_strings(header *, string_array_t &);
	int init(byte_t *buff, size_t buff_size);
	void clear(byte_t *buf);

	proc_info * getproc(std::vector<header *>::iterator &);
};

//#pragma pack(pop)
} // namespace smbios
#endif