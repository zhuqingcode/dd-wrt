/* $Id: bsd-base64.h 3666 2006-10-26 23:11:51Z ckuethe $ */
#ifndef _BSD_BASE64_H
#define _BSD_BASE64_H

#ifndef HAVE___B64_NTOP
# ifndef HAVE_B64_NTOP
int b64_ntop(u_char const *src, size_t srclength, char *target, 
    size_t targsize);
int b64_pton(char const *src, u_char *target, size_t targsize);
# endif /* !HAVE_B64_NTOP */
# define __b64_ntop b64_ntop
# define __b64_pton b64_pton
#endif /* HAVE___B64_NTOP */

#endif /* _BSD_BINRESVPORT_H */
