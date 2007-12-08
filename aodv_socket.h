/*****************************************************************************
 *
 * Copyright (C) 2001 Uppsala University & Ericsson AB.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors: Erik Nordstr�m, <erik.nordstrom@it.uu.se>
 *          
 *
 *****************************************************************************/
#ifndef _AODV_SOCKET_H
#define _AODV_SOCKET_H

#ifndef NS_NO_GLOBALS
#include <netinet/ip.h>

#include "defs.h"
#include "aodv_rerr.h"
#include "params.h"

#define IPHDR_SIZE sizeof(struct iphdr)

/* Set a maximun size for AODV msgs. The RERR is the potentially
   largest message, depending on how many unreachable destinations
   that are included. Lets limit them to 100 */
#define AODV_MSG_MAX_SIZE RERR_SIZE + 100 * RERR_UDEST_SIZE
#define RECV_BUF_SIZE AODV_MSG_MAX_SIZE
#define SEND_BUF_SIZE RECV_BUF_SIZE
#endif				/* NS_NO_GLOBALS */

#ifndef NS_NO_DECLARATIONS

struct timeval rreq_ratel[RREQ_RATELIMIT-1], rerr_ratel[RERR_RATELIMIT-1];
int num_rreq;
int num_rerr;

void aodv_socket_init();
void aodv_socket_send(AODV_msg * aodv_msg, u_int32_t dst, int len,
		      u_int8_t ttl, struct dev_info *dev);
AODV_msg *aodv_socket_new_msg();
AODV_msg *aodv_socket_queue_msg(AODV_msg * aodv_msg, int size);
void aodv_socket_cleanup(void);
void aodv_socket_process_packet(AODV_msg * aodv_msg, int len, u_int32_t src,
				u_int32_t dst, int ttl, unsigned int ifindex);

#ifdef NS_PORT
void recvAODVUUPacket(Packet * p);
#endif				/* NS_PORT */

#endif				/* NS_NO_DECLARATIONS */

#endif				/* AODV_SOCKET_H */
