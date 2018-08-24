#ifndef _UNAME_CONTROLLER_H
#define _UNAME_CONTROLLER_H
/*this file is generated automatically in the makefile */
/*NB: I always assume you are running the same kernel you are building!*/
#define VERSION_STRING "4.16.14-300.fc28.x86_64\0"
#define NEW_API 1
#define CONT_INIT_WORK kthread_init_work
#define CONT_INIT_WORKER kthread_init_worker
#define CONT_FLUSH_WORK kthread_flush_work
#define CONT_FLUSH_WORKER kthread_flush_worker
#define CONT_QUEUE_WORK kthread_queue_work
#define NEW_SOCK_API 1
#define SOCK_RECVMSG(s, m, z, f) sock_recvmsg((s), (m), (f))
#define SOCK_CREATE_KERN(i, f, t, p, r) sock_create_kern((i), (f), (t), (p), (r))
#define NEW_ACCEPT_API 1
#define SOCK_ACCEPT(s, ns, i) accept((s), (ns), (i), 1)
#define FRAME_CHECKING 1
#include <linux/frame.h>
#define MODERN_FILE_API 1
static const char *cont_api __attribute__((used)) = "new";
#endif /* _UNAME_CONTROLLER_H */
