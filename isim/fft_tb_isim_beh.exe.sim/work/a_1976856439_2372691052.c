/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Srivatsan/Desktop/4051/Project/fft_tb.vhd";



static void work_a_1976856439_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1596U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1972);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1040U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1496);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1972);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1040U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1496);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1976856439_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 1740U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 1640);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1040U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 1640);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(91, ng0);
    t2 = xsi_get_transient_memory(256U);
    memset(t2, 0, 256U);
    t4 = t2;
    t6 = t4;
    t7 = (t0 + 4064);
    memcpy(t6, t7, 16U);
    t9 = (t4 + 16U);
    t10 = (t0 + 4080);
    memcpy(t9, t10, 16U);
    t4 = (t4 + 32U);
    t12 = t4;
    t13 = (t0 + 4096);
    memcpy(t12, t13, 16U);
    t15 = (t4 + 16U);
    t16 = (t0 + 4112);
    memcpy(t15, t16, 16U);
    t4 = (t4 + 32U);
    t18 = t4;
    t19 = (t0 + 4128);
    memcpy(t18, t19, 16U);
    t21 = (t4 + 16U);
    t22 = (t0 + 4144);
    memcpy(t21, t22, 16U);
    t4 = (t4 + 32U);
    t24 = t4;
    t25 = (t0 + 4160);
    memcpy(t24, t25, 16U);
    t27 = (t4 + 16U);
    t28 = (t0 + 4176);
    memcpy(t27, t28, 16U);
    t4 = (t4 + 32U);
    t30 = t4;
    t31 = (t0 + 4192);
    memcpy(t30, t31, 16U);
    t33 = (t4 + 16U);
    t34 = (t0 + 4208);
    memcpy(t33, t34, 16U);
    t4 = (t4 + 32U);
    t36 = t4;
    t37 = (t0 + 4224);
    memcpy(t36, t37, 16U);
    t39 = (t4 + 16U);
    t40 = (t0 + 4240);
    memcpy(t39, t40, 16U);
    t4 = (t4 + 32U);
    t42 = t4;
    t43 = (t0 + 4256);
    memcpy(t42, t43, 16U);
    t45 = (t4 + 16U);
    t46 = (t0 + 4272);
    memcpy(t45, t46, 16U);
    t4 = (t4 + 32U);
    t48 = t4;
    t49 = (t0 + 4288);
    memcpy(t48, t49, 16U);
    t51 = (t4 + 16U);
    t52 = (t0 + 4304);
    memcpy(t51, t52, 16U);
    t54 = (t0 + 2008);
    t55 = (t54 + 32U);
    t56 = *((char **)t55);
    t57 = (t56 + 40U);
    t58 = *((char **)t57);
    memcpy(t58, t2, 256U);
    xsi_driver_first_trans_fast(t54);
    xsi_set_current_line(93, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}


extern void work_a_1976856439_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1976856439_2372691052_p_0,(void *)work_a_1976856439_2372691052_p_1};
	xsi_register_didat("work_a_1976856439_2372691052", "isim/fft_tb_isim_beh.exe.sim/work/a_1976856439_2372691052.didat");
	xsi_register_executes(pe);
}
