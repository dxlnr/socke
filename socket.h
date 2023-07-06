#ifndef	_SOCKE_SOCKET_H
#define	_SOCKE_SOCKET_H	1

/* Open a connection on socket FD to peer at ADDR (which LEN bytes long).
   For connectionless socket types, just set the default address to send to
   and the only address from which to accept transmissions.
   Return 0 on success, -1 for errors.
*/
extern int connect (int __fd, __CONST_SOCKADDR_ARG __addr, int socket_l);

/* Send N bytes of BUF to socket FD.  Returns the number sent or -1.

   This function is a cancellation point and therefore not marked with
*/
extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);

/* Read N bytes into BUF from socket FD.
   Returns the number read or -1 for errors.
*/
extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);

#endif
