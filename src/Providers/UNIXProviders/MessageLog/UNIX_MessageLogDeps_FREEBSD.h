#if defined(PEGASUS_OS_FREEBSD)

#define MAXLINE         1024            /* maximum line length */
#define MAXSVLINE       120             /* maximum saved line length */

#define SYSLOG_NAMES
#include <sys/syslog.h>

#define MAXUNAMES       20      /* maximum number of user names */

struct filed {
        char    f_fullname[300];		/* full log entry name */
        short   f_type;                 /* entry type, see below */
        short   f_file;                 /* file descriptor */
        char    *f_filename;            /* target filename */
        char 	f_facility[100];			/* facility string used */
        time_t  f_time;                 /* time this was last written */
        char    *f_host;                /* host from which to recd. */
        u_char  f_pmask[LOG_NFACILITIES+1];     /* priority mask */
        u_char  f_pcmp[LOG_NFACILITIES+1];      /* compare priority */
#define PRI_LT  0x1
#define PRI_EQ  0x2
#define PRI_GT  0x4
        char    *f_program;             /* program this applies to */
        union {
                char    f_uname[MAXUNAMES][MAXLOGNAME];
                struct {
                        char    f_hname[MAXHOSTNAMELEN];
                        struct addrinfo *f_addr;

                } f_forw;               /* forwarding address */
                char    f_fname[MAXPATHLEN];
                struct {
                        char    f_pname[MAXPATHLEN];
                        pid_t   f_pid;
                } f_pipe;
        } f_un;
        char    f_prevline[MAXSVLINE];          /* last message logged */
        char    f_lasttime[16];                 /* time of last occurrence */
        char    f_prevhost[MAXHOSTNAMELEN];     /* host from which recd. */
        int     f_prevpri;                      /* pri of f_prevline */
        int     f_prevlen;                      /* length of f_prevline */
        int     f_prevcount;                    /* repetition cnt of prevline */
        u_int   f_repeatcount;                  /* number of "repeated" msgs */
        int     f_flags;                        /* file-specific flags */
#define FFLAG_SYNC 0x01
#define FFLAG_NEEDSYNC  0x02
};

#endif
