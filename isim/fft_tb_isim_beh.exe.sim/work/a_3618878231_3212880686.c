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
static const char *ng0 = "C:/Users/Srivatsan/Desktop/4051/fft_8_point/fft_8_point.vhd";
extern char *WORK_P_1837030442;
extern char *IEEE_P_0774719531;

unsigned char ieee_p_0774719531_sub_4042748798_2162500114(char *, char *, char *, char *, char *);
char *work_p_1837030442_sub_260708590_2837944575(char *, char *, char *);


static void work_a_3618878231_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(129, ng0);
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
LAB3:    t2 = (t0 + 6060);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(130, ng0);
    t7 = (t0 + 776U);
    t8 = *((char **)t7);
    t9 = (0 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    t13 = (t0 + 6152);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 32U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t9 = (4 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t2 = (t3 + t12);
    t7 = (t0 + 6188);
    t8 = (t7 + 32U);
    t13 = *((char **)t8);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t2 = (t3 + t12);
    t7 = (t0 + 6224);
    t8 = (t7 + 32U);
    t13 = *((char **)t8);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t9 = (5 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t2 = (t3 + t12);
    t7 = (t0 + 6260);
    t8 = (t7 + 32U);
    t13 = *((char **)t8);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t9 = (2 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t2 = (t3 + t12);
    t7 = (t0 + 6296);
    t8 = (t7 + 32U);
    t13 = *((char **)t8);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t9 = (6 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t2 = (t3 + t12);
    t7 = (t0 + 6332);
    t8 = (t7 + 32U);
    t13 = *((char **)t8);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t9 = (3 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t2 = (t3 + t12);
    t7 = (t0 + 6368);
    t8 = (t7 + 32U);
    t13 = *((char **)t8);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t9 = (7 - 0);
    t10 = (t9 * 1);
    t11 = (32U * t10);
    t12 = (0 + t11);
    t2 = (t3 + t12);
    t7 = (t0 + 6404);
    t8 = (t7 + 32U);
    t13 = *((char **)t8);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 6440);
    t3 = (t2 + 32U);
    t7 = *((char **)t3);
    t8 = (t7 + 40U);
    t13 = *((char **)t8);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 568U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

}

static void work_a_3618878231_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(172, ng0);
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
LAB3:    t2 = (t0 + 6068);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(174, ng0);
    t7 = (t0 + 1696U);
    t8 = *((char **)t7);
    t7 = (t0 + 4444U);
    t9 = *((char **)t7);
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t12 = (32U * t11);
    t13 = (0 + t12);
    t7 = (t9 + t13);
    t14 = work_p_1837030442_sub_260708590_2837944575(WORK_P_1837030442, t8, t7);
    t15 = (t0 + 6476);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t14, 32U);
    xsi_driver_first_trans_delta(t15, 0U, 32U, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t2 = (t0 + 4444U);
    t7 = *((char **)t2);
    t10 = (1 - 0);
    t11 = (t10 * 1);
    t12 = (32U * t11);
    t13 = (0 + t12);
    t2 = (t7 + t13);
    t8 = work_p_1837030442_sub_260708590_2837944575(WORK_P_1837030442, t3, t2);
    t9 = (t0 + 6476);
    t14 = (t9 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 32U);
    xsi_driver_first_trans_delta(t9, 32U, 32U, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 2432U);
    t3 = *((char **)t2);
    t2 = (t0 + 4444U);
    t7 = *((char **)t2);
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t12 = (32U * t11);
    t13 = (0 + t12);
    t2 = (t7 + t13);
    t8 = work_p_1837030442_sub_260708590_2837944575(WORK_P_1837030442, t3, t2);
    t9 = (t0 + 6476);
    t14 = (t9 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 32U);
    xsi_driver_first_trans_delta(t9, 64U, 32U, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = (t0 + 4444U);
    t7 = *((char **)t2);
    t10 = (3 - 0);
    t11 = (t10 * 1);
    t12 = (32U * t11);
    t13 = (0 + t12);
    t2 = (t7 + t13);
    t8 = work_p_1837030442_sub_260708590_2837944575(WORK_P_1837030442, t3, t2);
    t9 = (t0 + 6476);
    t14 = (t9 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 32U);
    xsi_driver_first_trans_delta(t9, 96U, 32U, 0LL);
    goto LAB3;

LAB5:    t2 = (t0 + 568U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

}

static void work_a_3618878231_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;

LAB0:    xsi_set_current_line(221, ng0);
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
LAB3:    t2 = (t0 + 6076);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(222, ng0);
    t7 = (t0 + 1604U);
    t8 = *((char **)t7);
    t7 = (t0 + 6512);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 2340U);
    t3 = *((char **)t2);
    t2 = (t0 + 6548);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 32U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t2 = (t0 + 6584);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 32U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 2708U);
    t3 = *((char **)t2);
    t2 = (t0 + 6620);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 32U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 1236U);
    t3 = *((char **)t2);
    t13 = (0 - 0);
    t14 = (t13 * 1);
    t15 = (32U * t14);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t7 = (t0 + 6656);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 1236U);
    t3 = *((char **)t2);
    t13 = (1 - 0);
    t14 = (t13 * 1);
    t15 = (32U * t14);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t7 = (t0 + 6692);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 1236U);
    t3 = *((char **)t2);
    t13 = (2 - 0);
    t14 = (t13 * 1);
    t15 = (32U * t14);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t7 = (t0 + 6728);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 1236U);
    t3 = *((char **)t2);
    t13 = (3 - 0);
    t14 = (t13 * 1);
    t15 = (32U * t14);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t7 = (t0 + 6764);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    t2 = (t0 + 568U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

}

static void work_a_3618878231_3212880686_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(235, ng0);
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
LAB3:    t2 = (t0 + 6084);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(237, ng0);
    t7 = (t0 + 3168U);
    t8 = *((char **)t7);
    t7 = (t0 + 4444U);
    t9 = *((char **)t7);
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t12 = (32U * t11);
    t13 = (0 + t12);
    t7 = (t9 + t13);
    t14 = work_p_1837030442_sub_260708590_2837944575(WORK_P_1837030442, t8, t7);
    t15 = (t0 + 6800);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t14, 32U);
    xsi_driver_first_trans_delta(t15, 0U, 32U, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 3536U);
    t3 = *((char **)t2);
    t2 = (t0 + 4444U);
    t7 = *((char **)t2);
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t12 = (32U * t11);
    t13 = (0 + t12);
    t2 = (t7 + t13);
    t8 = work_p_1837030442_sub_260708590_2837944575(WORK_P_1837030442, t3, t2);
    t9 = (t0 + 6800);
    t14 = (t9 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 32U);
    xsi_driver_first_trans_delta(t9, 32U, 32U, 0LL);
    xsi_set_current_line(239, ng0);
    t2 = (t0 + 3904U);
    t3 = *((char **)t2);
    t2 = (t0 + 4444U);
    t7 = *((char **)t2);
    t10 = (0 - 0);
    t11 = (t10 * 1);
    t12 = (32U * t11);
    t13 = (0 + t12);
    t2 = (t7 + t13);
    t8 = work_p_1837030442_sub_260708590_2837944575(WORK_P_1837030442, t3, t2);
    t9 = (t0 + 6800);
    t14 = (t9 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 32U);
    xsi_driver_first_trans_delta(t9, 64U, 32U, 0LL);
    xsi_set_current_line(240, ng0);
    t2 = (t0 + 4272U);
    t3 = *((char **)t2);
    t2 = (t0 + 4444U);
    t7 = *((char **)t2);
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t12 = (32U * t11);
    t13 = (0 + t12);
    t2 = (t7 + t13);
    t8 = work_p_1837030442_sub_260708590_2837944575(WORK_P_1837030442, t3, t2);
    t9 = (t0 + 6800);
    t14 = (t9 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 32U);
    xsi_driver_first_trans_delta(t9, 96U, 32U, 0LL);
    goto LAB3;

LAB5:    t2 = (t0 + 568U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

}

static void work_a_3618878231_3212880686_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;

LAB0:    xsi_set_current_line(251, ng0);
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
LAB3:    t2 = (t0 + 6092);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(252, ng0);
    t7 = (t0 + 3076U);
    t8 = *((char **)t7);
    t7 = (t0 + 6836);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 32U);
    xsi_driver_first_trans_delta(t7, 0U, 32U, 0LL);
    xsi_set_current_line(253, ng0);
    t2 = (t0 + 3812U);
    t3 = *((char **)t2);
    t2 = (t0 + 6836);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 32U);
    xsi_driver_first_trans_delta(t2, 32U, 32U, 0LL);
    xsi_set_current_line(254, ng0);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t13 = (0 - 0);
    t14 = (t13 * 1);
    t15 = (32U * t14);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t7 = (t0 + 6836);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_delta(t7, 64U, 32U, 0LL);
    xsi_set_current_line(255, ng0);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t13 = (2 - 0);
    t14 = (t13 * 1);
    t15 = (32U * t14);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t7 = (t0 + 6836);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_delta(t7, 96U, 32U, 0LL);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 3444U);
    t3 = *((char **)t2);
    t2 = (t0 + 6836);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 32U);
    xsi_driver_first_trans_delta(t2, 128U, 32U, 0LL);
    xsi_set_current_line(257, ng0);
    t2 = (t0 + 4180U);
    t3 = *((char **)t2);
    t2 = (t0 + 6836);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 32U);
    xsi_driver_first_trans_delta(t2, 160U, 32U, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t13 = (1 - 0);
    t14 = (t13 * 1);
    t15 = (32U * t14);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t7 = (t0 + 6836);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_delta(t7, 192U, 32U, 0LL);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t13 = (3 - 0);
    t14 = (t13 * 1);
    t15 = (32U * t14);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t7 = (t0 + 6836);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_delta(t7, 224U, 32U, 0LL);
    goto LAB3;

LAB5:    t2 = (t0 + 568U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

}

static void work_a_3618878231_3212880686_p_5(char *t0)
{
    char t15[16];
    char t32[16];
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(266, ng0);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t4 = (0 - 0);
    t5 = (t4 * 1);
    t6 = (32U * t5);
    t7 = (0 + t6);
    t8 = (t7 + 0U);
    t2 = (t3 + t8);
    t9 = ((WORK_P_1837030442) + 2392);
    t10 = xsi_record_get_element_type(t9, 0);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 14664);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 15;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (15 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t20 = ieee_p_0774719531_sub_4042748798_2162500114(IEEE_P_0774719531, t2, t12, t13, t15);
    if (t20 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 6100);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(268, ng0);
    t34 = (t0 + 6872);
    t38 = (t34 + 32U);
    t39 = *((char **)t38);
    t40 = (t39 + 40U);
    t41 = *((char **)t40);
    *((unsigned char *)t41) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t34);
    goto LAB3;

LAB5:    t17 = (t0 + 1328U);
    t21 = *((char **)t17);
    t22 = (0 - 0);
    t19 = (t22 * 1);
    t23 = (32U * t19);
    t24 = (0 + t23);
    t25 = (t24 + 16U);
    t17 = (t21 + t25);
    t26 = ((WORK_P_1837030442) + 2392);
    t27 = xsi_record_get_element_type(t26, 1);
    t28 = (t27 + 44U);
    t29 = *((char **)t28);
    t30 = (t0 + 14680);
    t33 = (t32 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = 0;
    t34 = (t33 + 4U);
    *((int *)t34) = 15;
    t34 = (t33 + 8U);
    *((int *)t34) = 1;
    t35 = (15 - 0);
    t36 = (t35 * 1);
    t36 = (t36 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t36;
    t37 = ieee_p_0774719531_sub_4042748798_2162500114(IEEE_P_0774719531, t17, t29, t30, t32);
    t1 = t37;
    goto LAB7;

}

static void work_a_3618878231_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(274, ng0);
    t1 = (t0 + 3076U);
    t2 = *((char **)t1);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    t4 = (t0 + 14696);
    memcpy(t3, t4, 16U);
    t6 = (t1 + 16U);
    t7 = (t0 + 14712);
    memcpy(t6, t7, 16U);
    t9 = 1;
    if (32U == 32U)
        goto LAB5;

LAB6:    t9 = 0;

LAB7:    if ((!(t9)) != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6108);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(276, ng0);
    t13 = (t0 + 6908);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB5:    t10 = 0;

LAB8:    if (t10 < 32U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t11 = (t2 + t10);
    t12 = (t1 + t10);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB6;

LAB10:    t10 = (t10 + 1);
    goto LAB8;

}


extern void work_a_3618878231_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3618878231_3212880686_p_0,(void *)work_a_3618878231_3212880686_p_1,(void *)work_a_3618878231_3212880686_p_2,(void *)work_a_3618878231_3212880686_p_3,(void *)work_a_3618878231_3212880686_p_4,(void *)work_a_3618878231_3212880686_p_5,(void *)work_a_3618878231_3212880686_p_6};
	xsi_register_didat("work_a_3618878231_3212880686", "isim/fft_tb_isim_beh.exe.sim/work/a_3618878231_3212880686.didat");
	xsi_register_executes(pe);
}
