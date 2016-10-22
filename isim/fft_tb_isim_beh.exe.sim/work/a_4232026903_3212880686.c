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
static const char *ng0 = "C:/Users/Srivatsan/Desktop/4051/Project/add_16.vhd";
extern char *IEEE_P_0774719531;
extern char *WORK_P_1837030442;

char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);


static void work_a_4232026903_3212880686_p_0(char *t0)
{
    char t7[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    char *t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 1724);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t8 = (t0 + 684U);
    t9 = *((char **)t8);
    t10 = (0 + 0U);
    t8 = (t9 + t10);
    t11 = ((WORK_P_1837030442) + 2572);
    t12 = xsi_record_get_element_type(t11, 0);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t15 = (t0 + 776U);
    t16 = *((char **)t15);
    t17 = (0 + 0U);
    t15 = (t16 + t17);
    t18 = ((WORK_P_1837030442) + 2572);
    t19 = xsi_record_get_element_type(t18, 0);
    t20 = (t19 + 44U);
    t21 = *((char **)t20);
    t22 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t7, t8, t14, t15, t21);
    t23 = (t7 + 12U);
    t24 = *((unsigned int *)t23);
    t25 = (1U * t24);
    t26 = (16U != t25);
    if (t26 == 1)
        goto LAB8;

LAB9:    t27 = (t0 + 1768);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 16U);
    xsi_driver_first_trans_delta(t27, 0U, 16U, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t10 = (0 + 16U);
    t2 = (t3 + t10);
    t8 = ((WORK_P_1837030442) + 2572);
    t9 = xsi_record_get_element_type(t8, 1);
    t11 = (t9 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 776U);
    t14 = *((char **)t13);
    t17 = (0 + 16U);
    t13 = (t14 + t17);
    t15 = ((WORK_P_1837030442) + 2572);
    t16 = xsi_record_get_element_type(t15, 1);
    t18 = (t16 + 44U);
    t19 = *((char **)t18);
    t20 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t7, t2, t12, t13, t19);
    t21 = (t7 + 12U);
    t24 = *((unsigned int *)t21);
    t25 = (1U * t24);
    t1 = (16U != t25);
    if (t1 == 1)
        goto LAB10;

LAB11:    t22 = (t0 + 1768);
    t23 = (t22 + 32U);
    t27 = *((char **)t23);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memcpy(t29, t20, 16U);
    xsi_driver_first_trans_delta(t22, 16U, 16U, 0LL);
    goto LAB3;

LAB5:    t2 = (t0 + 568U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t25, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(16U, t25, 0);
    goto LAB11;

}


extern void work_a_4232026903_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4232026903_3212880686_p_0};
	xsi_register_didat("work_a_4232026903_3212880686", "isim/fft_tb_isim_beh.exe.sim/work/a_4232026903_3212880686.didat");
	xsi_register_executes(pe);
}
