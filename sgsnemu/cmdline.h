/* cmdline.h */

/* File autogenerated by gengetopt version 2.17  */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_VERSION
#define CMDLINE_PARSER_VERSION VERSION
#endif

struct gengetopt_args_info
{
  const char *help_help; /* Print help and exit help description.  */
  const char *version_help; /* Print version and exit help description.  */
  int debug_flag;	/* Run in debug mode (default=off).  */
  const char *debug_help; /* Run in debug mode help description.  */
  char * conf_arg;	/* Read configuration file.  */
  char * conf_orig;	/* Read configuration file original value given at command line.  */
  const char *conf_help; /* Read configuration file help description.  */
  char * pidfile_arg;	/* Filename of process id file (default='./sgsnemu.pid').  */
  char * pidfile_orig;	/* Filename of process id file original value given at command line.  */
  const char *pidfile_help; /* Filename of process id file help description.  */
  char * statedir_arg;	/* Directory of nonvolatile data (default='./').  */
  char * statedir_orig;	/* Directory of nonvolatile data original value given at command line.  */
  const char *statedir_help; /* Directory of nonvolatile data help description.  */
  char * dns_arg;	/* DNS Server to use.  */
  char * dns_orig;	/* DNS Server to use original value given at command line.  */
  const char *dns_help; /* DNS Server to use help description.  */
  char * listen_arg;	/* Local interface.  */
  char * listen_orig;	/* Local interface original value given at command line.  */
  const char *listen_help; /* Local interface help description.  */
  char * remote_arg;	/* Remote host.  */
  char * remote_orig;	/* Remote host original value given at command line.  */
  const char *remote_help; /* Remote host help description.  */
  int contexts_arg;	/* Number of contexts (default='1').  */
  char * contexts_orig;	/* Number of contexts original value given at command line.  */
  const char *contexts_help; /* Number of contexts help description.  */
  int timelimit_arg;	/* Exit after timelimit seconds (default='0').  */
  char * timelimit_orig;	/* Exit after timelimit seconds original value given at command line.  */
  const char *timelimit_help; /* Exit after timelimit seconds help description.  */
  int gtpversion_arg;	/* GTP version to use (default='1').  */
  char * gtpversion_orig;	/* GTP version to use original value given at command line.  */
  const char *gtpversion_help; /* GTP version to use help description.  */
  char * apn_arg;	/* Access point name (default='internet').  */
  char * apn_orig;	/* Access point name original value given at command line.  */
  const char *apn_help; /* Access point name help description.  */
  int selmode_arg;	/* Selection mode (default='0x01').  */
  char * selmode_orig;	/* Selection mode original value given at command line.  */
  const char *selmode_help; /* Selection mode help description.  */
  char * imsi_arg;	/* IMSI (default='240010123456789').  */
  char * imsi_orig;	/* IMSI original value given at command line.  */
  const char *imsi_help; /* IMSI help description.  */
  int nsapi_arg;	/* NSAPI (default='0').  */
  char * nsapi_orig;	/* NSAPI original value given at command line.  */
  const char *nsapi_help; /* NSAPI help description.  */
  char * msisdn_arg;	/* Mobile Station ISDN number (default='46702123456').  */
  char * msisdn_orig;	/* Mobile Station ISDN number original value given at command line.  */
  const char *msisdn_help; /* Mobile Station ISDN number help description.  */
  int qos_arg;	/* Requested quality of service (default='0x0b921f').  */
  char * qos_orig;	/* Requested quality of service original value given at command line.  */
  const char *qos_help; /* Requested quality of service help description.  */
  int charging_arg;	/* Charging characteristics (default='0x0800').  */
  char * charging_orig;	/* Charging characteristics original value given at command line.  */
  const char *charging_help; /* Charging characteristics help description.  */
  char * uid_arg;	/* Login user ID (default='mig').  */
  char * uid_orig;	/* Login user ID original value given at command line.  */
  const char *uid_help; /* Login user ID help description.  */
  char * pwd_arg;	/* Login password (default='hemmelig').  */
  char * pwd_orig;	/* Login password original value given at command line.  */
  const char *pwd_help; /* Login password help description.  */
  int createif_flag;	/* Create local network interface (default=off).  */
  const char *createif_help; /* Create local network interface help description.  */
  char * net_arg;	/* Network address for local interface.  */
  char * net_orig;	/* Network address for local interface original value given at command line.  */
  const char *net_help; /* Network address for local interface help description.  */
  int defaultroute_flag;	/* Create default route (default=off).  */
  const char *defaultroute_help; /* Create default route help description.  */
  char * ipup_arg;	/* Script to run after link-up.  */
  char * ipup_orig;	/* Script to run after link-up original value given at command line.  */
  const char *ipup_help; /* Script to run after link-up help description.  */
  char * ipdown_arg;	/* Script to run after link-down.  */
  char * ipdown_orig;	/* Script to run after link-down original value given at command line.  */
  const char *ipdown_help; /* Script to run after link-down help description.  */
  char * pinghost_arg;	/* Ping remote host.  */
  char * pinghost_orig;	/* Ping remote host original value given at command line.  */
  const char *pinghost_help; /* Ping remote host help description.  */
  int pingrate_arg;	/* Number of ping req per second (default='1').  */
  char * pingrate_orig;	/* Number of ping req per second original value given at command line.  */
  const char *pingrate_help; /* Number of ping req per second help description.  */
  int pingsize_arg;	/* Number of ping data bytes (default='56').  */
  char * pingsize_orig;	/* Number of ping data bytes original value given at command line.  */
  const char *pingsize_help; /* Number of ping data bytes help description.  */
  int pingcount_arg;	/* Number of ping req to send (default='0').  */
  char * pingcount_orig;	/* Number of ping req to send original value given at command line.  */
  const char *pingcount_help; /* Number of ping req to send help description.  */
  int pingquiet_flag;	/* Do not print ping packet info (default=off).  */
  const char *pingquiet_help; /* Do not print ping packet info help description.  */
  
  int help_given ;	/* Whether help was given.  */
  int version_given ;	/* Whether version was given.  */
  int debug_given ;	/* Whether debug was given.  */
  int conf_given ;	/* Whether conf was given.  */
  int pidfile_given ;	/* Whether pidfile was given.  */
  int statedir_given ;	/* Whether statedir was given.  */
  int dns_given ;	/* Whether dns was given.  */
  int listen_given ;	/* Whether listen was given.  */
  int remote_given ;	/* Whether remote was given.  */
  int contexts_given ;	/* Whether contexts was given.  */
  int timelimit_given ;	/* Whether timelimit was given.  */
  int gtpversion_given ;	/* Whether gtpversion was given.  */
  int apn_given ;	/* Whether apn was given.  */
  int selmode_given ;	/* Whether selmode was given.  */
  int imsi_given ;	/* Whether imsi was given.  */
  int nsapi_given ;	/* Whether nsapi was given.  */
  int msisdn_given ;	/* Whether msisdn was given.  */
  int qos_given ;	/* Whether qos was given.  */
  int charging_given ;	/* Whether charging was given.  */
  int uid_given ;	/* Whether uid was given.  */
  int pwd_given ;	/* Whether pwd was given.  */
  int createif_given ;	/* Whether createif was given.  */
  int net_given ;	/* Whether net was given.  */
  int defaultroute_given ;	/* Whether defaultroute was given.  */
  int ipup_given ;	/* Whether ipup was given.  */
  int ipdown_given ;	/* Whether ipdown was given.  */
  int pinghost_given ;	/* Whether pinghost was given.  */
  int pingrate_given ;	/* Whether pingrate was given.  */
  int pingsize_given ;	/* Whether pingsize was given.  */
  int pingcount_given ;	/* Whether pingcount was given.  */
  int pingquiet_given ;	/* Whether pingquiet was given.  */

} ;

extern const char *gengetopt_args_info_purpose;
extern const char *gengetopt_args_info_usage;
extern const char *gengetopt_args_info_help[];

int cmdline_parser (int argc, char * const *argv,
  struct gengetopt_args_info *args_info);
int cmdline_parser2 (int argc, char * const *argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

void cmdline_parser_print_help(void);
void cmdline_parser_print_version(void);

void cmdline_parser_init (struct gengetopt_args_info *args_info);
void cmdline_parser_free (struct gengetopt_args_info *args_info);

int cmdline_parser_configfile (char * const filename,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
