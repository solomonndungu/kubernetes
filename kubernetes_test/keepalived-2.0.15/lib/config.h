/* lib/config.h.  Generated from config.h.in by configure.  */
/* lib/config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef _CONFIG_H
#define _CONFIG_H
  

/* Define if need to check for EINTR errno */
#define CHECK_EINTR 1 

/* The configuration options from which the package is built */
#define CONFIGURATION_OPTIONS " LVS VRRP VRRP_AUTH OLD_CHKSUM_COMPAT FIB_ROUTING EINTR_CHECK"

/* Define to 1 if need to call g_type_init() */
/* #undef DBUS_NEED_G_TYPE_INIT */

/* Define to test for and log errno == EINTR when no asynchronous signal
   handlers */
/* #undef DEBUG_EINTR */

/* The default configuration file */
#define DEFAULT_CONFIG_FILE "/etc/keepalived/keepalived.conf"

/* Define if appending to log files is allowed */
/* #undef ENABLE_LOG_FILE_APPEND */

/* Define if enabling logging to files */
/* #undef ENABLE_LOG_TO_FILE */

/* Defined here if not found in <net/ethernet.h>. */
/* #undef ETHERTYPE_IPV6 */

/* set to enforce GNU standard paths, for .pid files etc */
/* #undef GNU_STD_PATHS */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <asm/types.h> header file. */
#define HAVE_ASM_TYPES_H 1

/* Define to 1 if you have the declaration of `CLONE_NEWNET', and to 0 if you
   don't. */
#define HAVE_DECL_CLONE_NEWNET 1

/* Define to 1 if you have the declaration of `ETHERTYPE_IPV6', and to 0 if
   you don't. */
#define HAVE_DECL_ETHERTYPE_IPV6 1

/* Define to 1 if you have the declaration of `FRA_DPORT_RANGE', and to 0 if
   you don't. */
#define HAVE_DECL_FRA_DPORT_RANGE 0

/* Define to 1 if you have the declaration of `FRA_IP_PROTO', and to 0 if you
   don't. */
#define HAVE_DECL_FRA_IP_PROTO 0

/* Define to 1 if you have the declaration of `FRA_L3MDEV', and to 0 if you
   don't. */
#define HAVE_DECL_FRA_L3MDEV 1

/* Define to 1 if you have the declaration of `FRA_OIFNAME', and to 0 if you
   don't. */
#define HAVE_DECL_FRA_OIFNAME 1

/* Define to 1 if you have the declaration of `FRA_PROTOCOL', and to 0 if you
   don't. */
#define HAVE_DECL_FRA_PROTOCOL 0

/* Define to 1 if you have the declaration of `FRA_SPORT_RANGE', and to 0 if
   you don't. */
#define HAVE_DECL_FRA_SPORT_RANGE 0

/* Define to 1 if you have the declaration of `FRA_SUPPRESS_IFGROUP', and to 0
   if you don't. */
#define HAVE_DECL_FRA_SUPPRESS_IFGROUP 1

/* Define to 1 if you have the declaration of `FRA_SUPPRESS_PREFIXLEN', and to
   0 if you don't. */
#define HAVE_DECL_FRA_SUPPRESS_PREFIXLEN 1

/* Define to 1 if you have the declaration of `FRA_TUN_ID', and to 0 if you
   don't. */
#define HAVE_DECL_FRA_TUN_ID 1

/* Define to 1 if you have the declaration of `FRA_UID_RANGE', and to 0 if you
   don't. */
#define HAVE_DECL_FRA_UID_RANGE 1

/* Define to 1 if you have the declaration of `GLOB_BRACE', and to 0 if you
   don't. */
#define HAVE_DECL_GLOB_BRACE 1

/* Define to 1 if you have the declaration of `IFA_FLAGS', and to 0 if you
   don't. */
#define HAVE_DECL_IFA_FLAGS 1

/* Define to 1 if you have the declaration of `IFLA_INET6_ADDR_GEN_MODE', and
   to 0 if you don't. */
#define HAVE_DECL_IFLA_INET6_ADDR_GEN_MODE 1

/* Define to 1 if you have the declaration of `IFLA_MACVLAN_MODE', and to 0 if
   you don't. */
#define HAVE_DECL_IFLA_MACVLAN_MODE 1

/* Define to 1 if you have the declaration of `IFLA_VRF_MAX', and to 0 if you
   don't. */
#define HAVE_DECL_IFLA_VRF_MAX 1

/* Define to 1 if you have the declaration of `IPV4_DEVCONF_ACCEPT_LOCAL', and
   to 0 if you don't. */
#define HAVE_DECL_IPV4_DEVCONF_ACCEPT_LOCAL 1

/* Define to 1 if you have the declaration of `IPV4_DEVCONF_ARPFILTER', and to
   0 if you don't. */
#define HAVE_DECL_IPV4_DEVCONF_ARPFILTER 1

/* Define to 1 if you have the declaration of `IPV4_DEVCONF_ARP_IGNORE', and
   to 0 if you don't. */
#define HAVE_DECL_IPV4_DEVCONF_ARP_IGNORE 1

/* Define to 1 if you have the declaration of `IPV4_DEVCONF_RP_FILTER', and to
   0 if you don't. */
#define HAVE_DECL_IPV4_DEVCONF_RP_FILTER 1

/* Define to 1 if you have the declaration of `IPV6_RECVHOPLIMIT', and to 0 if
   you don't. */
#define HAVE_DECL_IPV6_RECVHOPLIMIT 1

/* Define to 1 if you have the declaration of `IPV6_RECVPKTINFO', and to 0 if
   you don't. */
#define HAVE_DECL_IPV6_RECVPKTINFO 1

/* Define to 1 if you have the declaration of `IPVS_DAEMON_ATTR_MCAST_GROUP',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DAEMON_ATTR_MCAST_GROUP 1

/* Define to 1 if you have the declaration of `IPVS_DAEMON_ATTR_MCAST_GROUP6',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DAEMON_ATTR_MCAST_GROUP6 1

/* Define to 1 if you have the declaration of `IPVS_DAEMON_ATTR_MCAST_PORT',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DAEMON_ATTR_MCAST_PORT 1

/* Define to 1 if you have the declaration of `IPVS_DAEMON_ATTR_MCAST_TTL',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DAEMON_ATTR_MCAST_TTL 1

/* Define to 1 if you have the declaration of `IPVS_DAEMON_ATTR_SYNC_MAXLEN',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DAEMON_ATTR_SYNC_MAXLEN 1

/* Define to 1 if you have the declaration of `IPVS_DEST_ATTR_ADDR_FAMILY',
   and to 0 if you don't. */
#define HAVE_DECL_IPVS_DEST_ATTR_ADDR_FAMILY 1

/* Define to 1 if you have the declaration of `IPVS_DEST_ATTR_STATS64', and to
   0 if you don't. */
#define HAVE_DECL_IPVS_DEST_ATTR_STATS64 1

/* Define to 1 if you have the declaration of `IPVS_SVC_ATTR_STATS64', and to
   0 if you don't. */
#define HAVE_DECL_IPVS_SVC_ATTR_STATS64 1

/* Define to 1 if you have the declaration of `IP_MULTICAST_ALL', and to 0 if
   you don't. */
#define HAVE_DECL_IP_MULTICAST_ALL 1

/* Define to 1 if you have the declaration of `IP_VS_SVC_F_ONEPACKET', and to
   0 if you don't. */
#define HAVE_DECL_IP_VS_SVC_F_ONEPACKET 1

/* Define to 1 if you have the declaration of `LWTUNNEL_ENCAP_ILA', and to 0
   if you don't. */
#define HAVE_DECL_LWTUNNEL_ENCAP_ILA 1

/* Define to 1 if you have the declaration of `LWTUNNEL_ENCAP_MPLS', and to 0
   if you don't. */
#define HAVE_DECL_LWTUNNEL_ENCAP_MPLS 1

/* Define to 1 if you have the declaration of `MACVLAN_MODE_PRIVATE', and to 0
   if you don't. */
#define HAVE_DECL_MACVLAN_MODE_PRIVATE 1

/* Define to 1 if you have the declaration of `O_PATH', and to 0 if you don't.
   */
#define HAVE_DECL_O_PATH 1

/* Define to 1 if you have the declaration of `PROC_EVENT_COMM', and to 0 if
   you don't. */
#define HAVE_DECL_PROC_EVENT_COMM 1

/* Define to 1 if you have the declaration of `PROC_EVENT_COREDUMP', and to 0
   if you don't. */
#define HAVE_DECL_PROC_EVENT_COREDUMP 1

/* Define to 1 if you have the declaration of `PROC_EVENT_PTRACE', and to 0 if
   you don't. */
#define HAVE_DECL_PROC_EVENT_PTRACE 1

/* Define to 1 if you have the declaration of `PROC_EVENT_SID', and to 0 if
   you don't. */
#define HAVE_DECL_PROC_EVENT_SID 1

/* Define to 1 if you have the declaration of `RLIMIT_RTTIME', and to 0 if you
   don't. */
#define HAVE_DECL_RLIMIT_RTTIME 1

/* Define to 1 if you have the declaration of `RTAX_CC_ALGO', and to 0 if you
   don't. */
#define HAVE_DECL_RTAX_CC_ALGO 1

/* Define to 1 if you have the declaration of `RTAX_FASTOPEN_NO_COOKIE', and
   to 0 if you don't. */
#define HAVE_DECL_RTAX_FASTOPEN_NO_COOKIE 1

/* Define to 1 if you have the declaration of `RTAX_QUICKACK', and to 0 if you
   don't. */
#define HAVE_DECL_RTAX_QUICKACK 1

/* Define to 1 if you have the declaration of `RTA_ENCAP', and to 0 if you
   don't. */
#define HAVE_DECL_RTA_ENCAP 1

/* Define to 1 if you have the declaration of `RTA_EXPIRES', and to 0 if you
   don't. */
#define HAVE_DECL_RTA_EXPIRES 1

/* Define to 1 if you have the declaration of `RTA_NEWDST', and to 0 if you
   don't. */
#define HAVE_DECL_RTA_NEWDST 1

/* Define to 1 if you have the declaration of `RTA_PREF', and to 0 if you
   don't. */
#define HAVE_DECL_RTA_PREF 1

/* Define to 1 if you have the declaration of `RTA_TTL_PROPAGATE', and to 0 if
   you don't. */
#define HAVE_DECL_RTA_TTL_PROPAGATE 1

/* Define to 1 if you have the declaration of `RTA_VIA', and to 0 if you
   don't. */
#define HAVE_DECL_RTA_VIA 1

/* Define to 1 if you have the declaration of `RTEXT_FILTER_SKIP_STATS', and
   to 0 if you don't. */
#define HAVE_DECL_RTEXT_FILTER_SKIP_STATS 1

/* Define to 1 if you have the declaration of `SCHED_RESET_ON_FORK', and to 0
   if you don't. */
#define HAVE_DECL_SCHED_RESET_ON_FORK 1

/* Define to 1 if you have the declaration of `SCHED_RR', and to 0 if you
   don't. */
#define HAVE_DECL_SCHED_RR 1

/* Define to 1 if you have the declaration of `SOCK_CLOEXEC', and to 0 if you
   don't. */
#define HAVE_DECL_SOCK_CLOEXEC 1

/* Define to 1 if you have the declaration of `SOCK_NONBLOCK', and to 0 if you
   don't. */
#define HAVE_DECL_SOCK_NONBLOCK 1

/* Define to 1 if you have the declaration of `SO_MARK', and to 0 if you
   don't. */
#define HAVE_DECL_SO_MARK 1

/* Define to 1 if you have the `dup2' function. */
#define HAVE_DUP2 1

/* Define to 1 if you have the `epoll_create1' function. */
#define HAVE_EPOLL_CREATE1 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `inotify_init1' function. */
#define HAVE_INOTIFY_INIT1 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if ipset supports iface type */
/* #undef HAVE_IPSET_ATTR_IFACE */

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have the <libipset/data.h> header file. */
/* #undef HAVE_LIBIPSET_DATA_H */

/* Define to 1 if you have the <libipset/linux_ip_set.h> header file. */
/* #undef HAVE_LIBIPSET_LINUX_IP_SET_H */

/* Define to 1 if you have the <libipset/session.h> header file. */
/* #undef HAVE_LIBIPSET_SESSION_H */

/* Define to 1 if you have the <libipset/types.h> header file. */
/* #undef HAVE_LIBIPSET_TYPES_H */

/* Define to 1 if you have the <libiptc/libip6tc.h> header file. */
/* #undef HAVE_LIBIPTC_LIBIP6TC_H */

/* Define to 1 if you have the <libiptc/libiptc.h> header file. */
/* #undef HAVE_LIBIPTC_LIBIPTC_H */

/* Define to 1 if you have the <libiptc/libxtc.h> header file. */
/* #undef HAVE_LIBIPTC_LIBXTC_H */

/* Define to 1 if you have the `ssl' library (-lssl). */
#define HAVE_LIBSSL 1

/* Define to 1 if you have the `xtables' library (-lxtables). */
/* #undef HAVE_LIBXTABLES */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linux/ethtool.h> header file. */
#define HAVE_LINUX_ETHTOOL_H 1

/* Define to 1 if you have the <linux/fib_rules.h> header file. */
#define HAVE_LINUX_FIB_RULES_H 1

/* Define to 1 if you have the <linux/icmpv6.h> header file. */
#define HAVE_LINUX_ICMPV6_H 1

/* Define to 1 if you have the <linux/if_addr.h> header file. */
#define HAVE_LINUX_IF_ADDR_H 1

/* Define to 1 if you have the <linux/if_arp.h> header file. */
#define HAVE_LINUX_IF_ARP_H 1

/* Define to 1 if you have the <linux/if_ether.h> header file. */
#define HAVE_LINUX_IF_ETHER_H 1

/* Define to 1 if you have the <linux/if_link.h> header file. */
#define HAVE_LINUX_IF_LINK_H 1

/* Define to 1 if you have the <linux/if_packet.h> header file. */
#define HAVE_LINUX_IF_PACKET_H 1

/* Define to 1 if you have the <linux/ip.h> header file. */
#define HAVE_LINUX_IP_H 1

/* Define to 1 if you have the <linux/ip_vs.h> header file. */
#define HAVE_LINUX_IP_VS_H 1

/* Define to 1 if you have the <linux/netfilter/nf_tables.h> header file. */
#define HAVE_LINUX_NETFILTER_NF_TABLES_H 1

/* Define to 1 if you have the <linux/netfilter/xt_set.h> header file. */
/* #undef HAVE_LINUX_NETFILTER_XT_SET_H */

/* Define to 1 if you have the <linux/netfilter/x_tables.h> header file. */
#define HAVE_LINUX_NETFILTER_X_TABLES_H 1

/* Define to 1 if you have the <linux/rtnetlink.h> header file. */
#define HAVE_LINUX_RTNETLINK_H 1

/* Define to 1 if you have the <linux/sockios.h> header file. */
#define HAVE_LINUX_SOCKIOS_H 1

/* Define to 1 if you have the <linux/types.h> header file. */
#define HAVE_LINUX_TYPES_H 1

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netlink/genl/ctrl.h> header file. */
/* #undef HAVE_NETLINK_GENL_CTRL_H */

/* Define to 1 if you have the <netlink/genl/genl.h> header file. */
/* #undef HAVE_NETLINK_GENL_GENL_H */

/* Define to 1 if you have the <netlink/netlink.h> header file. */
/* #undef HAVE_NETLINK_NETLINK_H */

/* Define to 1 if you have the `netsnmp_enable_subagent' function. */
/* #undef HAVE_NETSNMP_ENABLE_SUBAGENT */

/* Define to 1 if you have the <net-snmp/agent/agent_sysORTable.h> header
   file. */
/* #undef HAVE_NET_SNMP_AGENT_AGENT_SYSORTABLE_H */

/* Define to 1 if you have the <net-snmp/agent/snmp_vars.h> header file. */
/* #undef HAVE_NET_SNMP_AGENT_SNMP_VARS_H */

/* Define to 1 if you have the <net-snmp/agent/util_funcs.h> header file. */
/* #undef HAVE_NET_SNMP_AGENT_UTIL_FUNCS_H */

/* Define to 1 if NFTNL_EXPR_LOOKUP_FLAGS defined */
/* #undef HAVE_NFTNL_EXPR_LOOKUP_FLAGS */

/* Define to 1 if you have the <openssl/err.h> header file. */
#define HAVE_OPENSSL_ERR_H 1

/* Define to 1 if you have the `OPENSSL_init_crypto' function. */
#define HAVE_OPENSSL_INIT_CRYPTO 1

/* Define to 1 if OPENSSL_init_crypto(OPENSSL_INIT_NO_LOAD_CONFIG) bug) */
/* #undef HAVE_OPENSSL_INIT_NO_LOAD_CONFIG_BUG */

/* Define to 1 if you have the <openssl/md5.h> header file. */
#define HAVE_OPENSSL_MD5_H 1

/* Define to 1 if you have the <openssl/sha.h> header file. */
/* #undef HAVE_OPENSSL_SHA_H */

/* Define to 1 if you have the <openssl/ssl.h> header file. */
#define HAVE_OPENSSL_SSL_H 1

/* Define to 1 if you have the `pipe2' function. */
#define HAVE_PIPE2 1

/* Define to 1 if your system has a GNU libc compatible `realloc' function,
   and to 0 otherwise. */
#define HAVE_REALLOC 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `setns' function. */
#define HAVE_SETNS 1

/* Define to 1 if you have the `signalfd' function. */
#define HAVE_SIGNALFD 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if you have the `SSL_CTX_set_verify_depth' function. */
#define HAVE_SSL_CTX_SET_VERIFY_DEPTH 1

/* Define to 1 if you have the `SSL_set0_rbio' function. */
#define HAVE_SSL_SET0_RBIO 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strpbrk' function. */
#define HAVE_STRPBRK 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `TLS_method' function. */
#define HAVE_TLS_METHOD 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vsyslog' function. */
#define HAVE_VSYSLOG 1

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* Define to 1 if you have the <xtables.h> header file. */
/* #undef HAVE_XTABLES_H */

/* Define to 1 if have struct xt_set_info_match_v1 */
/* #undef HAVE_XT_SET_INFO_MATCH_V1 */

/* Define to 1 if have struct xt_set_info_match_v3 */
/* #undef HAVE_XT_SET_INFO_MATCH_V3 */

/* Define to 1 if have struct xt_set_info_match_v4 */
/* #undef HAVE_XT_SET_INFO_MATCH_V4 */

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define the ip4tc library name */
/* #undef IP4TC_LIB_NAME */

/* Define the ip6tc library name */
/* #undef IP6TC_LIB_NAME */

/* Define the ipset library name */
/* #undef IPSET_LIB_NAME */

/* Defined to value in <linux/in.h> if not in <netinet/in.h> */
/* #undef IP_MULTICAST_ALL */

/* configure options specified */
#define KEEPALIVED_CONFIGURE_OPTIONS ""

/* Define to add guard _IP_SET_H before including <libipset/linux_ip_set.h> */
/* #undef LIBIPSET_H_ADD_IP_SET_H_GUARD */

/* Define to add guard _UAPI_IP_SET_H before including
   <libipset/linux_ip_set.h> */
/* #undef LIBIPSET_H_ADD_UAPI_IP_SET_H_GUARD */

/* Define to 1 if libipset library version prior to v7 */
/* #undef LIBIPSET_PRE_V7_COMPAT */

/* Define to 1 if libipvs can use netlink */
/* #undef LIBIPVS_USE_NL */

/* The type of parameter __line passed to __assert_fail() */
#define LINE_type unsigned int

/* Define to 1 if <linux/netlink.h> needs <sys/socket.h> */
/* #undef NETLINK_H_NEEDS_SYS_SOCKET_H */

/* Define the nl-genl-3.0 library name */
/* #undef NL3_GENL_LIB_NAME */

/* Define the nl-3 library name */
/* #undef NL3_LIB_NAME */

/* Define the nl library name */
/* #undef NL_LIB_NAME */

/* Name of package */
#define PACKAGE "keepalived"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "keepalived-devel@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Keepalived"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Keepalived 2.0.15"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "keepalived"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.keepalived.org/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.0.15"

/* Define printf format specifier for rlim_t */
#define PRI_rlim_t "lu"

/* Define to 1 if <linux/rtnetlink.h> needs <sys/socket.h> */
/* #undef RTNETLINK_H_NEEDS_SYS_SOCKET_H */

/* Dummy definition if not defined in system headers */
/* #undef SCHED_RESET_ON_FORK */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* The system options from which the package is built */
#define SYSTEM_OPTIONS " PIPE2 SIGNALFD INOTIFY_INIT1 VSYSLOG EPOLL_CREATE1 IPV4_DEVCONF IPV6_ADVANCED_API RTA_ENCAP RTA_EXPIRES RTA_NEWDST RTA_PREF FRA_SUPPRESS_PREFIXLEN FRA_SUPPRESS_IFGROUP FRA_TUN_ID RTAX_CC_ALGO RTAX_QUICKACK RTEXT_FILTER_SKIP_STATS FRA_L3MDEV FRA_UID_RANGE RTAX_FASTOPEN_NO_COOKIE RTA_VIA FRA_OIFNAME RTA_TTL_PROPAGATE IFA_FLAGS IP_MULTICAST_ALL LWTUNNEL_ENCAP_MPLS LWTUNNEL_ENCAP_ILA NET_LINUX_IF_H_COLLISION LIBIPTC_LINUX_NET_IF_H_COLLISION IPVS_DEST_ATTR_ADDR_FAMILY IPVS_SYNCD_ATTRIBUTES IPVS_64BIT_STATS VRRP_VMAC CN_PROC SOCK_NONBLOCK SOCK_CLOEXEC O_PATH GLOB_BRACE INET6_ADDR_GEN_MODE VRF SO_MARK SCHED_RT SCHED_RESET_ON_FORK"

/* Define to 1 to build with thread dumping support */
/* #undef THREAD_DUMP */

/* Define to 1 if <linux/netfilter/xt_set.h> needs <libipset/linux_ip_set.h>
   */
/* #undef USE_LIBIPSET_LINUX_IP_SET_H */

/* Version number of package */
#define VERSION "2.0.15"

/* Define the xtables library name */
/* #undef XTABLES_LIB_NAME */

/* Define if <linux/netfilter/x_tables.h> doesnt define it */
/* #undef XT_EXTENSION_MAXNAMELEN */

/* Define to 1 to build with debugging support */
/* #undef _DEBUG_ */

/* Define to 1 to enable asserts */
/* #undef _ENABLE_ASSERT_ */

/* Define to 1 to build with epoll_wait() debugging support */
/* #undef _EPOLL_DEBUG_ */

/* Define to 1 to build with epoll thread dumping support */
/* #undef _EPOLL_THREAD_DUMP_ */

/* Consider ${with_fixed_if_type} interfaces to be unchangeable */
/* #undef _FIXED_IF_TYPE_ */

/* Define to 1 if can have _Pragma GCC diagnostic push/pop */
#define _HAVE_DIAGNOSTIC_PUSH_POP_PRAGMAS_ 1 

/* Define to 1 if have FIB routing support */
#define _HAVE_FIB_ROUTING_ 1 

/* Define to 1 if can have _Pragma GCC diagnostic in functions */
#define _HAVE_FUNCTION_DIAGNOSTIC_PRAGMAS_ 1 

/* Define to 1 if have IPv4 netlink device configuration */
#define _HAVE_IPV4_DEVCONF_ 1 

/* Define to 1 if have IPVS syncd attributes */
#define _HAVE_IPVS_SYNCD_ATTRIBUTES_ 1 

/* Define to 1 if have ipset library */
/* #undef _HAVE_LIBIPSET_ */

/* Define to 1 if have iptables libraries */
/* #undef _HAVE_LIBIPTC_ */

/* Define to 1 if have libiptc/libiptc.h linux/if.h and net/if.h namespace
   collision */
#define _HAVE_LIBIPTC_LINUX_NET_IF_H_COLLISION_ 1 

/* Define to 1 if have magic library */
/* #undef _HAVE_LIBMAGIC_ */

/* Define to 1 if using libnl-1 */
/* #undef _HAVE_LIBNL1_ */

/* Define to 1 if using libnl-3 */
/* #undef _HAVE_LIBNL3_ */

/* Define to 1 if have linux/if_ether.h then netinet/if_ether.h namespace
   collision */
/* #undef _HAVE_NETINET_LINUX_IF_ETHER_H_COLLISION_ */

/* Define to 1 if have linux/if.h followed by net/if.h namespace collision */
#define _HAVE_NET_LINUX_IF_H_COLLISION_ 1 

/* Define to 1 if have pe selection support */
#define _HAVE_PE_NAME_ 1 

/* Define to 1 if _Pragma("GCC diagnostic warning \"-Wstrict-overflow=1\"")
   supported */
#define _HAVE_PRAGMA_WARN_STRICT_OVERFLOW_1_ 1 

/* Define to 1 if have SCHED_RR */
#define _HAVE_SCHED_RT_ 1 

/* Define to 1 if have SSL_set_tlsext_host_name() */
#define _HAVE_SSL_SET_TLSEXT_HOST_NAME_ 1 

/* Define to 1 if have kernel VRF support */
#define _HAVE_VRF_ 1 

/* Define to 1 if have MAC VLAN support */
#define _HAVE_VRRP_VMAC_ 1 

/* Define to 1 if building with libipset dynamic linking */
/* #undef _LIBIPSET_DYNAMIC_ */

/* Define to 1 if building with libiptc dynamic linking */
/* #undef _LIBIPTC_DYNAMIC_ */

/* Define to 1 if building with libnl dynamic linking */
/* #undef _LIBNL_DYNAMIC_ */

/* Define to 1 if building with libxtables dynamic linking */
/* #undef _LIBXTABLES_DYNAMIC_ */

/* Define to 1 to build with malloc/free checks */
/* #undef _MEM_CHECK_ */

/* Define to 1 to log malloc/free checks to syslog */
/* #undef _MEM_CHECK_LOG_ */

/* Define to 1 to build with netlink command timers support */
/* #undef _NETLINK_TIMERS_ */

/* Define to 1 if unaligned memory access not supported */
/* #undef _NO_UNALIGNED_ACCESS_ */

/* Define to 1 to build with regex debugging support */
/* #undef _REGEX_DEBUG_ */

/* Define to 1 to build with smtp-alert debugging support */
/* #undef _SMTP_ALERT_DEBUG_ */

/* Define to 1 to have keepalived send RFC6527 SNMP responses for VRRPv2
   instances */
/* #undef _SNMP_REPLY_V3_FOR_V2_ */

/* Define to 1 if want stricter configuration checking */
/* #undef _STRICT_CONFIG_ */

/* Define to 1 to build with set time logging */
/* #undef _TIMER_CHECK_ */

/* Define to 1 to build with TSM debugging support */
/* #undef _TSM_DEBUG_ */

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Define to 1 if using iptables command enabled */
#define _USE_IPTABLES_CMD_ 1 

/* Define to 1 to build with vrrp fd debugging support */
/* #undef _VRRP_FD_DEBUG_ */

/* Define to 1 if have BFD support */
/* #undef _WITH_BFD_ */

/* Define to 1 if have linux/cn_proc.h and track-process not disabled */
#define _WITH_CN_PROC_ 1 

/* Define to 1 to have DBUS support */
/* #undef _WITH_DBUS_ */

/* Define to 1 to have DBus create instance support */
/* #undef _WITH_DBUS_CREATE_INSTANCE_ */

/* Define to 1 to build with thread dumping support */
/* #undef _WITH_DUMP_THREADS_ */

/* Define to 1 if using iptables or nftables */
#define _WITH_FIREWALL_ 1 

/* Define to 1 if want iptables support */
#define _WITH_IPTABLES_ 1 

/* Define to 1 to build with JSON output support */
/* #undef _WITH_JSON_ */

/* Define to 1 if have linkbeat support */
#define _WITH_LINKBEAT_ 1 

/* Define to 1 if have IPVS support */
#define _WITH_LVS_ 1 

/* Define to 1 if have IPVS 64 bit stats */
#define _WITH_LVS_64BIT_STATS_ 1 

/* Define to 1 if want nftables support */
/* #undef _WITH_NFTABLES_ */

/* Define to 1 to build with perf support */
/* #undef _WITH_PERF_ */

/* Define to 1 if using pthreads */
/* #undef _WITH_PTHREADS_ */

/* Define to 1 to build with HTTP_GET regex checking */
/* #undef _WITH_REGEX_CHECK_ */

/* Define to 1 to include regex timers */
/* #undef _WITH_REGEX_TIMERS_ */

/* Define to 1 to have SHA1 support */
/* #undef _WITH_SHA1_ */

/* Define to 1 to have SNMP support */
/* #undef _WITH_SNMP_ */

/* Define to 1 to have keepalived SNMP checker support */
/* #undef _WITH_SNMP_CHECKER_ */

/* Define to 1 to have keepalived SNMP support */
/* #undef _WITH_SNMP_KEEPALIVED_ */

/* Define to 1 to have RFCv2 SNMP support */
/* #undef _WITH_SNMP_RFCV2_ */

/* Define to 1 to have RFCv3 SNMP support */
/* #undef _WITH_SNMP_RFCV3_ */

/* Define to 1 to have RFC SNMP support */
/* #undef _WITH_SNMP_RFC_ */

/* Define to 1 to have keepalived SNMP VRRP support */
/* #undef _WITH_SNMP_VRRP_ */

/* Define to 1 if have SO_MARK */
#define _WITH_SO_MARK_ 1 

/* Define to 1 to build with stacktrace support */
/* #undef _WITH_STACKTRACE_ */

/* Define to 1 to enable v1.3.6 and earlier VRRPv3 unicast checksum
   compatibility */
#define _WITH_UNICAST_CHKSUM_COMPAT_ 1 

/* Define to 1 if have VRRP support */
#define _WITH_VRRP_ 1 

/* Define to 1 if want ARRP authentication support */
#define _WITH_VRRP_AUTH_ 1 

/* Define __always_inline if libc does not define it */
/* #undef __always_inline */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to rpl_malloc if the replacement function should be used. */
/* #undef malloc */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to rpl_realloc if the replacement function should be used. */
/* #undef realloc */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */


#include "config_warnings.h"

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#endif
