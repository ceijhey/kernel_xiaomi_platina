/* thread_info.h: common low-level thread information accessors
 *
 * Copyright (C) 2002  David Howells (dhowells@redhat.com)
 * - Incorporating suggestions made by Linus Torvalds
 */

#ifndef _LINUX_THREAD_INFO_H
#define _LINUX_THREAD_INFO_H

#include <linux/types.h>
#include <linux/bug.h>
#include <linux/restart_block.h>


#ifdef CONFIG_THREAD_INFO_IN_TASK

struct timespec;
struct compat_timespec;

#ifdef CONFIG_THREAD_INFO_IN_TASK
#define current_thread_info() ((struct thread_info *)current)
#endif
