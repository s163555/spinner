#ifndef _KERNEL_VERSION_H_
#define _KERNEL_VERSION_H_

/* KERNEL and ZEPHYR_VERSION  values come from cmake/version.cmake
 * BUILD_VERSION  will be 'git describe', alternatively user defined BUILD_VERSION.
 */

#define ZEPHYR_VERSION_CODE 197475
#define ZEPHYR_VERSION(a,b,c) (((a) << 16) + ((b) << 8) + (c))

#define KERNELVERSION          0x3036300
#define KERNEL_VERSION_NUMBER  0x30363
#define KERNEL_VERSION_MAJOR   3
#define KERNEL_VERSION_MINOR   3
#define KERNEL_PATCHLEVEL      99
#define KERNEL_VERSION_STRING  "3.3.99"

#define BUILD_VERSION          zephyr-v3.3.0-953-gf19e6d481164

#endif /* _KERNEL_VERSION_H_ */
