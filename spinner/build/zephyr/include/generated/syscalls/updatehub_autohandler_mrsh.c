/* auto-generated by gen_syscalls.py, don't edit */

#include <syscalls/updatehub.h>

extern void z_vrfy_updatehub_autohandler();
uintptr_t z_mrsh_updatehub_autohandler(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg0;	/* unused */
	(void) arg1;	/* unused */
	(void) arg2;	/* unused */
	(void) arg3;	/* unused */
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	z_vrfy_updatehub_autohandler();
	_current->syscall_frame = NULL;
	return 0;
}

