#include <zephyr/device.h>
#include <zephyr/toolchain.h>

/* 1 : /soc/rcc@40023800:
 * Supported:
 *    - /soc/pin-controller@40020000/gpio@40021c00
 *    - /soc/pin-controller@40020000/gpio@40021800
 *    - /soc/pin-controller@40020000/gpio@40021400
 *    - /soc/pin-controller@40020000/gpio@40021000
 *    - /soc/pin-controller@40020000/gpio@40020c00
 *    - /soc/pin-controller@40020000/gpio@40020800
 *    - /soc/pin-controller@40020000/gpio@40020400
 *    - /soc/pin-controller@40020000/gpio@40020000
 *    - /soc/timers@40000000/feedback
 *    - /soc/adc@40012000/currsmp
 *    - /soc/timers@40010000/svpwm
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_8[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, DEVICE_HANDLE_ENDS };

/* 2 : /soc/interrupt-controller@40013c00:
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_28[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 3 : /soc/pin-controller@40020000/gpio@40021c00:
 * Direct Dependencies:
 *    - /soc/rcc@40023800
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_52[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 4 : /soc/pin-controller@40020000/gpio@40021800:
 * Direct Dependencies:
 *    - /soc/rcc@40023800
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_51[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : /soc/pin-controller@40020000/gpio@40021400:
 * Direct Dependencies:
 *    - /soc/rcc@40023800
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_50[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 6 : /soc/pin-controller@40020000/gpio@40021000:
 * Direct Dependencies:
 *    - /soc/rcc@40023800
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_49[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 7 : /soc/pin-controller@40020000/gpio@40020c00:
 * Direct Dependencies:
 *    - /soc/rcc@40023800
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_48[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 8 : /soc/pin-controller@40020000/gpio@40020800:
 * Direct Dependencies:
 *    - /soc/rcc@40023800
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_47[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 9 : /soc/pin-controller@40020000/gpio@40020400:
 * Direct Dependencies:
 *    - /soc/rcc@40023800
 * Supported:
 *    - /soc/timers@40000000/feedback
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_58[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 11, DEVICE_HANDLE_ENDS };

/* 10 : /soc/pin-controller@40020000/gpio@40020000:
 * Direct Dependencies:
 *    - /soc/rcc@40023800
 * Supported:
 *    - /soc/timers@40000000/feedback
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_57[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 11, DEVICE_HANDLE_ENDS };

/* 11 : /soc/timers@40000000/feedback:
 * Direct Dependencies:
 *    - /soc/rcc@40023800
 *    - /soc/pin-controller@40020000/gpio@40020400
 *    - /soc/pin-controller@40020000/gpio@40020000
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_62[] = { 1, 9, 10, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 12 : /soc/adc@40012000/currsmp:
 * Direct Dependencies:
 *    - /soc/rcc@40023800
 * Supported:
 *    - /soc/timers@40010000/svpwm
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_85[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 13, DEVICE_HANDLE_ENDS };

/* 13 : /soc/timers@40010000/svpwm:
 * Direct Dependencies:
 *    - /soc/rcc@40023800
 *    - /soc/adc@40012000/currsmp
 */
const Z_DECL_ALIGN(device_handle_t) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_dts_ord_90[] = { 1, 12, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
