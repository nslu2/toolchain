/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED
#define CONFIG_ARM 1
#undef  CONFIG_EISA
#undef  CONFIG_SBUS
#undef  CONFIG_MCA
#define CONFIG_UID16 1
#define CONFIG_RWSEM_GENERIC_SPINLOCK 1
#undef  CONFIG_RWSEM_XCHGADD_ALGORITHM
#undef  CONFIG_GENERIC_BUST_SPINLOCK
#undef  CONFIG_GENERIC_ISA_DMA
/*
 * Code maturity level options
 */
#define CONFIG_EXPERIMENTAL 1
#undef  CONFIG_ADVANCED_OPTIONS
#undef  CONFIG_OBSOLETE
/*
 * Loadable module support
 */
#define CONFIG_MODULES 1
#undef  CONFIG_MODVERSIONS
#undef  CONFIG_KMOD
/*
 * System Type
 */
#undef  CONFIG_ARCH_ADIFCC
#undef  CONFIG_ARCH_ANAKIN
#undef  CONFIG_ARCH_ARCA5K
#undef  CONFIG_ARCH_CLPS7500
#undef  CONFIG_ARCH_CLPS711X
#undef  CONFIG_ARCH_CO285
#undef  CONFIG_ARCH_EBSA110
#undef  CONFIG_ARCH_CAMELOT
#undef  CONFIG_ARCH_FOOTBRIDGE
#undef  CONFIG_ARCH_INTEGRATOR
#undef  CONFIG_ARCH_IOP3XX
#undef  CONFIG_ARCH_IXP1200
#undef  CONFIG_ARCH_IXP2000
#define CONFIG_ARCH_IXP425 1
#undef  CONFIG_ARCH_OMAHA
#undef  CONFIG_ARCH_L7200
#undef  CONFIG_ARCH_MX1ADS
#undef  CONFIG_ARCH_RPC
#undef  CONFIG_ARCH_RISCSTATION
#undef  CONFIG_ARCH_SA1100
#undef  CONFIG_ARCH_SHARK
/*
 * Archimedes/A5000 Implementations
 */
/*
 * Archimedes/A5000 Implementations (select only ONE)
 */
/*
 * Footbridge Implementations
 */
/*
 * SA11x0 Implementations
 */
#undef  CONFIG_SA1100_H3XXX
/*
 * IXP425 Implementation Options
 */
#undef  CONFIG_IXP425_CSR
#define CONFIG_IXP425_CSR_MODULE 1
/*
 * IXP425 Board Types
 */
#define CONFIG_ARCH_IXDP425 1
#undef  CONFIG_ARCH_IXCDP1100
#undef  CONFIG_ARCH_PRPMC1100
/*
 * IXP425 Options
 */
#define CONFIG_IXP425_SDRAM_SIZE (64)
#undef  CONFIG_IXP425_LARGE_SDRAM
#define CONFIG_IXP425_PCI_ERRATA 1
#define CONFIG_IXP425_OS_TIMER1 1
#undef  CONFIG_XSCALE_PMU_TIMER
#define CONFIG_IXP425_OS_TIMER1 1
/*
 * IXP4XX Access library  - ENABLED
 */
/*
 * CLPS711X/EP721X Implementations
 */
#undef  CONFIG_ARCH_EP7211
#undef  CONFIG_ARCH_EP7212
#undef  CONFIG_ARCH_ACORN
#undef  CONFIG_FOOTBRIDGE
#undef  CONFIG_FOOTBRIDGE_HOST
#undef  CONFIG_FOOTBRIDGE_ADDIN
/*
 * Processor Type
 */
#define CONFIG_CPU_32 1
#undef  CONFIG_CPU_26
#undef  CONFIG_CPU_ARM610
#undef  CONFIG_CPU_ARM710
#undef  CONFIG_CPU_ARM720T
#undef  CONFIG_CPU_ARM920T
#undef  CONFIG_CPU_ARM922T
#undef  CONFIG_PLD
#undef  CONFIG_CPU_ARM926T
#undef  CONFIG_CPU_ARM1020
#undef  CONFIG_CPU_ARM1026
#undef  CONFIG_CPU_SA110
#undef  CONFIG_CPU_SA1100
#undef  CONFIG_CPU_32v3
#undef  CONFIG_CPU_32v4
#define CONFIG_CPU_32v5 1
#define CONFIG_CPU_XSCALE 1
#define CONFIG_ARM_THUMB 1
/*
 * Processor Features
 */
#undef  CONFIG_XSCALE_PMU_TIMER
#undef  CONFIG_XSCALE_CACHE_ERRATA
#undef  CONFIG_XSCALE_BDI2000
#undef  CONFIG_DISCONTIGMEM
#define CONFIG_CPU_BIG_ENDIAN 1
/*
 * General setup
 */
#define CONFIG_PCI 1
#define CONFIG_PCI_AUTOCONFIG 1
#undef  CONFIG_ISA
#undef  CONFIG_ISA_DMA
#define CONFIG_KERNEL_START 0xc0000000
#undef  CONFIG_ZBOOT_ROM
#define CONFIG_ZBOOT_ROM_TEXT 0x0
#define CONFIG_ZBOOT_ROM_BSS 0x0
#define CONFIG_PCI_NAMES 1
#undef  CONFIG_HOTPLUG
#undef  CONFIG_PCMCIA
#define CONFIG_NET 1
#define CONFIG_SYSVIPC 1
#undef  CONFIG_BSD_PROCESS_ACCT
#define CONFIG_SYSCTL 1
/*
 * At least one math emulation must be selected
 */
#define CONFIG_FPE_NWFPE 1
#undef  CONFIG_FPE_FASTFPE
#define CONFIG_KCORE_ELF 1
#undef  CONFIG_KCORE_AOUT
#define CONFIG_BINFMT_AOUT 1
#define CONFIG_BINFMT_ELF 1
#undef  CONFIG_BINFMT_MISC
#undef  CONFIG_PM
#undef  CONFIG_ARTHUR
#define CONFIG_CMDLINE "console=ttyS0,115200 root=/dev/ram0 initrd=0x00800000,8M mem=64M@0x00000000"
#define CONFIG_ALIGNMENT_TRAP 1
/*
 * Parallel port support
 */
#undef  CONFIG_PARPORT
/*
 * Memory Technology Devices (MTD)
 */
#define CONFIG_MTD 1
#undef  CONFIG_MTD_DEBUG
#define CONFIG_MTD_PARTITIONS 1
#undef  CONFIG_MTD_CONCAT
#define CONFIG_MTD_CONCAT_MODULE 1
#define CONFIG_MTD_REDBOOT_PARTS 1
#undef  CONFIG_MTD_CMDLINE_PARTS
#undef  CONFIG_MTD_BOOTLDR_PARTS
#undef  CONFIG_MTD_AFS_PARTS
/*
 * User Modules And Translation Layers
 */
#define CONFIG_MTD_CHAR 1
#define CONFIG_MTD_BLOCK 1
#undef  CONFIG_FTL
#undef  CONFIG_NFTL
#undef  CONFIG_INFTL
/*
 * RAM/ROM/Flash chip drivers
 */
#define CONFIG_MTD_CFI 1
#undef  CONFIG_MTD_JEDECPROBE
#define CONFIG_MTD_GEN_PROBE 1
#undef  CONFIG_MTD_CFI_ADV_OPTIONS
#define CONFIG_MTD_CFI_INTELEXT 1
#undef  CONFIG_MTD_CFI_AMDSTD
#undef  CONFIG_MTD_RAM
#undef  CONFIG_MTD_ROM
#undef  CONFIG_MTD_ABSENT
#undef  CONFIG_MTD_OBSOLETE_CHIPS
/*
 * Mapping drivers for chip access
 */
#undef  CONFIG_MTD_PHYSMAP
#undef  CONFIG_MTD_UCLINUX
#undef  CONFIG_MTD_NETtel
#undef  CONFIG_MTD_SNAPGEODE
#undef  CONFIG_MTD_NETteluC
#undef  CONFIG_MTD_KeyTechnology
#undef  CONFIG_MTD_NORA
#undef  CONFIG_MTD_ARM_INTEGRATOR
#undef  CONFIG_MTD_IQ80310
#undef  CONFIG_MTD_IXP425
#undef  CONFIG_MTD_PCI
#undef  CONFIG_MTD_M5272C3
/*
 * Self-contained MTD device drivers
 */
#undef  CONFIG_MTD_PMC551
#undef  CONFIG_MTD_SLRAM
#undef  CONFIG_MTD_MTDRAM
#undef  CONFIG_MTD_BLKMTD
/*
 * Disk-On-Chip Device Drivers
 */
#undef  CONFIG_MTD_DOC1000
#undef  CONFIG_MTD_DOC2000
#undef  CONFIG_MTD_DOC2001
#undef  CONFIG_MTD_DOC2001PLUS
#undef  CONFIG_MTD_DOCPROBE
/*
 * NAND Flash Device Drivers
 */
#undef  CONFIG_MTD_NAND
/*
 * Plug and Play configuration
 */
#undef  CONFIG_PNP
/*
 * Block devices
 */
#undef  CONFIG_BLK_DEV_FD
#undef  CONFIG_BLK_CPQ_DA
#undef  CONFIG_BLK_CPQ_CISS_DA
#undef  CONFIG_BLK_DEV_DAC960
#undef  CONFIG_BLK_DEV_UMEM
#undef  CONFIG_BLK_DEV_LOOP
#undef  CONFIG_BLK_DEV_NBD
#define CONFIG_BLK_DEV_RAM 1
#define CONFIG_BLK_DEV_RAM_SIZE (16384)
#define CONFIG_BLK_DEV_INITRD 1
#undef  CONFIG_BLK_DEV_RAMDISK_DATA
#undef  CONFIG_BLK_DEV_BLKMEM
#undef  CONFIG_BLK_STATS
/*
 * Multi-device support (RAID and LVM)
 */
#undef  CONFIG_MD
/*
 * Networking options
 */
#define CONFIG_PACKET 1
#undef  CONFIG_PACKET_MMAP
#undef  CONFIG_NETLINK_DEV
#define CONFIG_NETFILTER 1
#undef  CONFIG_NETFILTER_DEBUG
#define CONFIG_FILTER 1
#define CONFIG_UNIX 1
#define CONFIG_INET 1
#undef  CONFIG_IP_MULTICAST
#undef  CONFIG_IP_ADVANCED_ROUTER
#undef  CONFIG_IP_PNP
#undef  CONFIG_NET_ARP_LIMIT
#undef  CONFIG_NET_IPIP
#undef  CONFIG_NET_IPGRE
#undef  CONFIG_ARPD
#undef  CONFIG_INET_ECN
#undef  CONFIG_SYN_COOKIES
/*
 *   IP: Netfilter Configuration
 */
#define CONFIG_IP_NF_CONNTRACK 1
#define CONFIG_IP_NF_FTP 1
#define CONFIG_IP_NF_H323 1
#define CONFIG_IP_NF_IRC 1
#define CONFIG_IP_NF_CT_PROTO_GRE 1
#define CONFIG_IP_NF_PPTP 1
#undef  CONFIG_IP_NF_QUEUE
#define CONFIG_IP_NF_IPTABLES 1
#define CONFIG_IP_NF_MATCH_LIMIT 1
#define CONFIG_IP_NF_MATCH_MAC 1
#define CONFIG_IP_NF_MATCH_PKTTYPE 1
#define CONFIG_IP_NF_MATCH_MARK 1
#define CONFIG_IP_NF_MATCH_MULTIPORT 1
#define CONFIG_IP_NF_MATCH_TOS 1
#define CONFIG_IP_NF_MATCH_ECN 1
#define CONFIG_IP_NF_MATCH_DSCP 1
#define CONFIG_IP_NF_MATCH_AH_ESP 1
#define CONFIG_IP_NF_MATCH_LENGTH 1
#define CONFIG_IP_NF_MATCH_TTL 1
#define CONFIG_IP_NF_MATCH_TCPMSS 1
#define CONFIG_IP_NF_MATCH_HELPER 1
#define CONFIG_IP_NF_MATCH_STATE 1
#define CONFIG_IP_NF_MATCH_CONNTRACK 1
#define CONFIG_IP_NF_MATCH_UNCLEAN 1
#define CONFIG_IP_NF_MATCH_OWNER 1
#define CONFIG_IP_NF_FILTER 1
#define CONFIG_IP_NF_TARGET_REJECT 1
#define CONFIG_IP_NF_TARGET_MIRROR 1
#define CONFIG_IP_NF_NAT 1
#define CONFIG_IP_NF_NAT_NEEDED 1
#define CONFIG_IP_NF_TARGET_MASQUERADE 1
#define CONFIG_IP_NF_TARGET_REDIRECT 1
#define CONFIG_IP_NF_NAT_H323 1
#undef  CONFIG_IP_NF_NAT_LOCAL
#undef  CONFIG_IP_NF_NAT_SNMP_BASIC
#define CONFIG_IP_NF_NAT_IRC 1
#define CONFIG_IP_NF_NAT_FTP 1
#define CONFIG_IP_NF_NAT_PPTP 1
#define CONFIG_IP_NF_NAT_PROTO_GRE 1
#define CONFIG_IP_NF_MANGLE 1
#define CONFIG_IP_NF_TARGET_TOS 1
#undef  CONFIG_IP_NF_TARGET_ECN
#undef  CONFIG_IP_NF_TARGET_DSCP
#define CONFIG_IP_NF_TARGET_MARK 1
#define CONFIG_IP_NF_TARGET_LOG 1
#undef  CONFIG_IP_NF_TARGET_ULOG
#define CONFIG_IP_NF_TARGET_TCPMSS 1
#undef  CONFIG_IP_NF_ARPTABLES
#undef  CONFIG_IPV6
#undef  CONFIG_KHTTPD
#undef  CONFIG_ATM
#undef  CONFIG_VLAN_8021Q
/*
 *  
 */
#undef  CONFIG_IPX
#undef  CONFIG_ATALK
/*
 * Appletalk devices
 */
#undef  CONFIG_DECNET
#undef  CONFIG_BRIDGE
#undef  CONFIG_X25
#undef  CONFIG_LAPB
#undef  CONFIG_LLC
#undef  CONFIG_NET_DIVERT
#undef  CONFIG_ECONET
#undef  CONFIG_WAN_ROUTER
#undef  CONFIG_NET_FASTROUTE
#undef  CONFIG_NET_HW_FLOWCONTROL
/*
 * QoS and/or fair queueing
 */
#undef  CONFIG_NET_SCHED
#define CONFIG_IPSEC 1
/*
 * IPSec options (FreeS/WAN)
 */
#define CONFIG_IPSEC_IPIP 1
#define CONFIG_IPSEC_ALG 1
#define CONFIG_IPSEC_ALG_AES 1
#define CONFIG_IPSEC_AH 1
#define CONFIG_IPSEC_AUTH_HMAC_MD5 1
#define CONFIG_IPSEC_AUTH_HMAC_SHA1 1
#define CONFIG_IPSEC_ESP 1
#define CONFIG_IPSEC_ENC_DES 1
#define CONFIG_IPSEC_ENC_3DES 1
#define CONFIG_IPSEC_IPCOMP 1
#undef  CONFIG_IPSEC_IPCOMP_LZS
#define CONFIG_IPSEC_DEBUG 1
#define CONFIG_IPSEC_NAT_TRAVERSAL 1
/*
 * Network testing
 */
#undef  CONFIG_NET_PKTGEN
/*
 * Network device support
 */
#define CONFIG_NETDEVICES 1
/*
 * ARCnet devices
 */
#undef  CONFIG_ARCNET
#undef  CONFIG_DUMMY
#undef  CONFIG_BONDING
#undef  CONFIG_EQUALIZER
#undef  CONFIG_TUN
#undef  CONFIG_ETHERTAP
/*
 * Ethernet (10 or 100Mbit)
 */
#define CONFIG_NET_ETHERNET 1
#undef  CONFIG_IXP425_ETH
#define CONFIG_IXP425_ETH_MODULE 1
#undef  CONFIG_HAPPYMEAL
#undef  CONFIG_SUNGEM
#undef  CONFIG_NET_VENDOR_3COM
#undef  CONFIG_NET_VENDOR_SMC
#undef  CONFIG_NET_VENDOR_RACAL
#undef  CONFIG_HP100
#define CONFIG_NET_PCI 1
#undef  CONFIG_PCNET32
#undef  CONFIG_ADAPTEC_STARFIRE
#undef  CONFIG_TULIP
#undef  CONFIG_DE4X5
#undef  CONFIG_DGRS
#undef  CONFIG_DM9102
#undef  CONFIG_EEPRO100
#undef  CONFIG_E100
#undef  CONFIG_FEALNX
#undef  CONFIG_NATSEMI
#undef  CONFIG_NE2K_PCI
#undef  CONFIG_8139CP
#undef  CONFIG_8139TOO
#undef  CONFIG_RTL8139
#undef  CONFIG_SIS900
#undef  CONFIG_EPIC100
#undef  CONFIG_SUNDANCE
#undef  CONFIG_TLAN
#undef  CONFIG_TC35815
#undef  CONFIG_VIA_RHINE
#undef  CONFIG_VIA_RHINE_FET
#undef  CONFIG_WINBOND_840
#undef  CONFIG_NET_POCKET
#undef  CONFIG_FEC
#undef  CONFIG_CS89x0
#undef  CONFIG_UCCS8900
/*
 * Ethernet (1000 Mbit)
 */
#undef  CONFIG_ACENIC
#undef  CONFIG_DL2K
#undef  CONFIG_E1000
#define CONFIG_E1000_MODULE 1
#undef  CONFIG_NS83820
#undef  CONFIG_HAMACHI
#undef  CONFIG_YELLOWFIN
#undef  CONFIG_SK98LIN
#undef  CONFIG_TIGON3
#undef  CONFIG_FDDI
#undef  CONFIG_HIPPI
#define CONFIG_PPP 1
#undef  CONFIG_PPP_MULTILINK
#undef  CONFIG_PPP_FILTER
#define CONFIG_PPP_ASYNC 1
#undef  CONFIG_PPP_SYNC_TTY
#define CONFIG_PPP_DEFLATE 1
#define CONFIG_PPP_BSDCOMP 1
#define CONFIG_PPPOE 1
#define CONFIG_SLIP 1
#define CONFIG_SLIP_COMPRESSED 1
#undef  CONFIG_SLIP_SMART
#undef  CONFIG_SLIP_MODE_SLIP6
/*
 * Wireless LAN (non-hamradio)
 */
#undef  CONFIG_NET_RADIO
/*
 * Token Ring devices
 */
#undef  CONFIG_TR
#undef  CONFIG_NET_FC
#undef  CONFIG_RCPCI
#undef  CONFIG_SHAPER
/*
 * Wan interfaces
 */
#undef  CONFIG_WAN
/*
 * Amateur Radio support
 */
#undef  CONFIG_HAMRADIO
/*
 * IrDA (infrared) support
 */
#undef  CONFIG_IRDA
/*
 * ATA/ATAPI/MFM/RLL support
 */
#undef  CONFIG_IDE
#undef  CONFIG_BLK_DEV_IDE_MODES
#undef  CONFIG_BLK_DEV_HD
/*
 * SCSI support
 */
#undef  CONFIG_SCSI
/*
 * IEEE 1394 (FireWire) support (EXPERIMENTAL)
 */
#undef  CONFIG_IEEE1394
/*
 * I2O device support
 */
#undef  CONFIG_I2O
/*
 * ISDN subsystem
 */
#undef  CONFIG_ISDN
/*
 * Input core support
 */
#undef  CONFIG_INPUT
/*
 * Character devices
 */
#undef  CONFIG_LEDMAN
#undef  CONFIG_DS1302
#undef  CONFIG_VT
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_CONSOLE 1
#undef  CONFIG_SERIAL_EXTENDED
#undef  CONFIG_SERIAL_NONSTANDARD
#define CONFIG_UNIX98_PTYS 1
#define CONFIG_UNIX98_PTY_COUNT (256)
#undef  CONFIG_HVC_CONSOLE
/*
 * I2C support
 */
#undef  CONFIG_I2C
/*
 * Mice
 */
#undef  CONFIG_BUSMOUSE
#define CONFIG_MOUSE 1
#define CONFIG_PSMOUSE 1
#undef  CONFIG_82C710_MOUSE
#undef  CONFIG_PC110_PAD
#undef  CONFIG_MK712_MOUSE
/*
 * Joysticks
 */
#undef  CONFIG_INPUT_GAMEPORT
/*
 * Input core support is needed for gameports
 */
/*
 * Input core support is needed for joysticks
 */
#undef  CONFIG_QIC02_TAPE
/*
 * Watchdog Cards
 */
#undef  CONFIG_WATCHDOG
#undef  CONFIG_AMD_PM768
#undef  CONFIG_NVRAM
#undef  CONFIG_RTC
#undef  CONFIG_DTLK
#undef  CONFIG_R3964
#undef  CONFIG_APPLICOM
/*
 * Ftape, the floppy tape device driver
 */
#undef  CONFIG_FTAPE
#undef  CONFIG_AGP
#undef  CONFIG_DRM
/*
 * Multimedia devices
 */
#undef  CONFIG_VIDEO_DEV
/*
 * File systems
 */
#undef  CONFIG_QUOTA
#undef  CONFIG_AUTOFS_FS
#undef  CONFIG_AUTOFS4_FS
#undef  CONFIG_REISERFS_FS
#undef  CONFIG_ADFS_FS
#undef  CONFIG_AFFS_FS
#undef  CONFIG_HFS_FS
#undef  CONFIG_BEFS_FS
#undef  CONFIG_BFS_FS
#undef  CONFIG_EXT3_FS
#undef  CONFIG_JBD
#undef  CONFIG_FAT_FS
#undef  CONFIG_EFS_FS
#undef  CONFIG_JFFS_FS
#define CONFIG_JFFS2_FS 1
#define CONFIG_JFFS2_FS_DEBUG (0)
#undef  CONFIG_CRAMFS
#undef  CONFIG_TMPFS
#define CONFIG_RAMFS 1
#undef  CONFIG_ISO9660_FS
#undef  CONFIG_JFS_FS
#undef  CONFIG_MINIX_FS
#undef  CONFIG_VXFS_FS
#undef  CONFIG_NTFS_FS
#undef  CONFIG_HPFS_FS
#define CONFIG_PROC_FS 1
#undef  CONFIG_DEVFS_FS
#define CONFIG_DEVPTS_FS 1
#undef  CONFIG_QNX4FS_FS
#undef  CONFIG_ROMFS_FS
#define CONFIG_EXT2_FS 1
#undef  CONFIG_SYSV_FS
#undef  CONFIG_UDF_FS
#undef  CONFIG_UFS_FS
/*
 * Network File Systems
 */
#undef  CONFIG_CODA_FS
#undef  CONFIG_INTERMEZZO_FS
#define CONFIG_NFS_FS 1
#undef  CONFIG_NFS_V3
#undef  CONFIG_NFSD
#define CONFIG_SUNRPC 1
#define CONFIG_LOCKD 1
#undef  CONFIG_SMB_FS
#undef  CONFIG_NCP_FS
#undef  CONFIG_ZISOFS_FS
#undef  CONFIG_COREDUMP_PRINTK
/*
 * Partition Types
 */
#define CONFIG_PARTITION_ADVANCED 1
#undef  CONFIG_ACORN_PARTITION
#undef  CONFIG_OSF_PARTITION
#undef  CONFIG_AMIGA_PARTITION
#undef  CONFIG_ATARI_PARTITION
#undef  CONFIG_MAC_PARTITION
#undef  CONFIG_MSDOS_PARTITION
#undef  CONFIG_LDM_PARTITION
#undef  CONFIG_SGI_PARTITION
#undef  CONFIG_ULTRIX_PARTITION
#undef  CONFIG_SUN_PARTITION
#undef  CONFIG_EFI_PARTITION
#undef  CONFIG_SMB_NLS
#undef  CONFIG_NLS
/*
 * Sound
 */
#undef  CONFIG_SOUND
/*
 * Misc devices
 */
/*
 * USB support
 */
#undef  CONFIG_USB
/*
 * Bluetooth support
 */
#undef  CONFIG_BLUEZ
/*
 * Kernel hacking
 */
#define CONFIG_FRAME_POINTER 1
#undef  CONFIG_DEBUG_USER
#undef  CONFIG_DEBUG_INFO
#define CONFIG_DEBUG_KERNEL 1
#undef  CONFIG_DEBUG_SLAB
#undef  CONFIG_MAGIC_SYSRQ
#undef  CONFIG_DEBUG_SPINLOCK
#undef  CONFIG_DEBUG_WAITQ
#undef  CONFIG_DEBUG_BUGVERBOSE
#undef  CONFIG_DEBUG_ERRORS
#define CONFIG_DEBUG_LL 1
/*
 * Library routines
 */
#define CONFIG_ZLIB_INFLATE 1
#define CONFIG_ZLIB_DEFLATE 1