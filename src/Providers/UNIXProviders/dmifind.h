
#ifndef DMIFIND_H
#define DMIFIND_H

#ifdef __cplusplus
extern "C" {
#endif

struct DMI_FIND {
  char           dmi_sig[5]; /* 0 - 4 */
  char           dmi_res1;   /* 5 */
  unsigned short dmi_len;    /* 6 - 7 */
  unsigned       dmi_base;   /* 8 - 11 */
  unsigned short dmi_num;    /* 12 - 13 */
  unsigned char  dmi_ver;    /* 14 */
  char           dmi_res2;   /* 15 */
};

#ifdef __cplusplus
}
#endif

#endif