#pragma once

#include <glib.h>

gboolean network_rtnetlink_init(void);
void network_rtnetlink_clearipv4addr(int ifidx);
void rtnetlink_ipv4_addr_add(int ifidx, const char* addrstr);
void network_rtnetlink_setipv4defaultfw(int ifidx, const guint8* ip);
