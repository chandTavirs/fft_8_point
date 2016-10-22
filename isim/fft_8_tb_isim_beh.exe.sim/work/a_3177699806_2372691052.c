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
static const char *ng0 = "C:/Users/Srivatsan/Desktop/4051/Project/fft_8_tb.vhd";



static void work_a_3177699806_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;

LAB0:    t1 = (t0 + 1344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 1244);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);
    t2 = xsi_get_transient_memory(256U);
    memset(t2, 0, 256U);
    t4 = t2;
    t5 = t4;
    t6 = (t0 + 3392);
    memcpy(t5, t6, 16U);
    t8 = (t4 + 16U);
    t9 = (t0 + 3408);
    memcpy(t8, t9, 16U);
    t4 = (t4 + 32U);
    t11 = t4;
    t12 = (t0 + 3424);
    memcpy(t11, t12, 16U);
    t14 = (t4 + 16U);
    t15 = (t0 + 3440);
    memcpy(t14, t15, 16U);
    t4 = (t4 + 32U);
    t17 = t4;
    t18 = (t0 + 3456);
    memcpy(t17, t18, 16U);
    t20 = (t4 + 16U);
    t21 = (t0 + 3472);
    memcpy(t20, t21, 16U);
    t4 = (t4 + 32U);
    t23 = t4;
    t24 = (t0 + 3488);
    memcpy(t23, t24, 16U);
    t26 = (t4 + 16U);
    t27 = (t0 + 3504);
    memcpy(t26, t27, 16U);
    t4 = (t4 + 32U);
    t29 = t4;
    t30 = (t0 + 3520);
    memcpy(t29, t30, 16U);
    t32 = (t4 + 16U);
    t33 = (t0 + 3536);
    memcpy(t32, t33, 16U);
    t4 = (t4 + 32U);
    t35 = t4;
    t36 = (t0 + 3552);
    memcpy(t35, t36, 16U);
    t38 = (t4 + 16U);
    t39 = (t0 + 3568);
    memcpy(t38, t39, 16U);
    t4 = (t4 + 32U);
    t41 = t4;
    t42 = (t0 + 3584);
    memcpy(t41, t42, 16U);
    t44 = (t4 + 16U);
    t45 = (t0 + 3600);
    memcpy(t44, t45, 16U);
    t4 = (t4 + 32U);
    t47 = t4;
    t48 = (t0 + 3616);
    memcpy(t47, t48, 16U);
    t50 = (t4 + 16U);
    t51 = (t0 + 3632);
    memcpy(t50, t51, 16U);
    t53 = (t0 + 1576);
    t54 = (t53 + 32U);
    t55 = *((char **)t54);
    t56 = (t55 + 40U);
    t57 = *((char **)t56);
    memcpy(t57, t2, 256U);
    xsi_driver_first_trans_fast(t53);
    xsi_set_current_line(100, ng0);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}


extern void work_a_3177699806_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3177699806_2372691052_p_0};
	xsi_register_didat("work_a_3177699806_2372691052", "isim/fft_8_tb_isim_beh.exe.sim/work/a_3177699806_2372691052.didat");
	xsi_register_executes(pe);
}
