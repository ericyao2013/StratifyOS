/* Copyright 2011-2017 Tyler Gilbert;
 * This file is part of Stratify OS.
 *
 * Stratify OS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Stratify OS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Stratify OS.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 */

#ifndef POSIX_SYS_SOCKET_H_
#define POSIX_SYS_SOCKET_H_


/* Include the LWIP sockets header
 *
 * If LWIP isn't installed in the SDK, any apps that use sockets will get an error.
 *
 */

#if HAVE_LWIP_SOCKETS_H
#include <lwip/sockets.h>
#else
#include <sys/time.h>
#include "mcu/types.h"
typedef u32 socklen_t;
typedef u32 fd_set;
struct sockaddr;
struct msghdr;
struct iovec;
#endif //HAVE_LWIP_SOCKETS_H

//these functions are for sockets only
int accept(int s, struct sockaddr *addr, socklen_t *addrlen);
int bind(int s, const struct sockaddr *name, socklen_t namelen);
int shutdown(int s, int how);
int getpeername(int s, struct sockaddr *name, socklen_t *namelen);
int getsockname(int s, struct sockaddr *name, socklen_t *namelen);
int getsockopt(int s, int level, int optname, void *optval, socklen_t *optlen);
int setsockopt(int s, int level, int optname, const void *optval, socklen_t optlen);
int connect(int s, const struct sockaddr *name, socklen_t namelen);
int listen(int s, int backlog);
int recv(int s, void *mem, size_t len, int flags);
int recvfrom(int s, void *mem, size_t len, int flags,
		struct sockaddr *from, socklen_t *fromlen);
int send(int s, const void *dataptr, size_t size, int flags);
int sendmsg(int s, const struct msghdr *message, int flags);
int sendto(int s, const void *dataptr, size_t size, int flags,
		const struct sockaddr *to, socklen_t tolen);
int socket(int domain, int type, int protocol);

//these functions are currently only for sockets but should be supported on non-sockets as well
int writev(int s, const struct iovec *iov, int iovcnt);
int select(int maxfdp1, fd_set *readset, fd_set *writeset, fd_set *exceptset, struct timeval *timeout);

//these are support on both sockets and non-sockets
//int read(int s, void *mem, size_t len);
//int ioctl(int s, long cmd, void *argp);
//int fcntl(int s, int cmd, int val);
//int write(int s, const void *dataptr, size_t size);
//int close(int s);


typedef struct MCU_PACK {
	int (*accept)(int s, struct sockaddr *addr, socklen_t *addrlen);
	int (*bind)(int s, const struct sockaddr *name, socklen_t namelen);
	int (*shutdown)(int s, int how);
	int (*getpeername) (int s, struct sockaddr *name, socklen_t *namelen);
	int (*getsockname) (int s, struct sockaddr *name, socklen_t *namelen);
	int (*getsockopt) (int s, int level, int optname, void *optval, socklen_t *optlen);
	int (*setsockopt) (int s, int level, int optname, const void *optval, socklen_t optlen);
	int (*close)(int s);
	int (*connect)(int s, const struct sockaddr *name, socklen_t namelen);
	int (*listen)(int s, int backlog);
	int (*recv)(int s, void *mem, size_t len, int flags);
	int (*read)(int s, void *mem, size_t len);
	int (*recvfrom)(int s, void *mem, size_t len, int flags,
			struct sockaddr *from, socklen_t *fromlen);
	int (*send)(int s, const void *dataptr, size_t size, int flags);
	int (*sendmsg)(int s, const struct msghdr *message, int flags);
	int (*sendto)(int s, const void *dataptr, size_t size, int flags,
			const struct sockaddr *to, socklen_t tolen);
	int (*socket)(int domain, int type, int protocol);
	int (*write)(int s, const void *dataptr, size_t size);
	int (*writev)(int s, const struct iovec *iov, int iovcnt);
	int (*select)(int maxfdp1, fd_set *readset, fd_set *writeset, fd_set *exceptset,
			struct timeval *timeout);
	int (*ioctl)(int s, long cmd, void *argp);
	int (*fcntl)(int s, int cmd, int val);
} sos_socket_api_t;

extern const sos_socket_api_t lwip_socket_api;



#endif /* POSIX_SYS_SOCKET_H_ */
