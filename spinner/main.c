/*
 * Copyright (c) 2021 Teslabs Engineering S.L.
 * SPDX-License-Identifier: Apache-2.0
 */

//#include <spinner/control/cloop.h>
#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
//#include <zephyr/device.h>
//#include <zephyr/drivers/pwm.h>

void main(void)
{
	//cloop_start();
	//cloop_set_ref(0.0f, 0.25f);
	printk("Test af main - %s\r\n",CONFIG_BOARD);
	while(1) {
		//nothing
	}
}
