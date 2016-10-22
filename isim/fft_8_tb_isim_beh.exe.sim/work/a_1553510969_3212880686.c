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
static const char *ng0 = "C:/Users/Srivatsan/Desktop/4051/Project/radix_2_butterfly.vhd";
extern char *WORK_P_1837030442;

char *work_p_1837030442_sub_1612176599_2837944575(char *, char *, char *);
char *work_p_1837030442_sub_1787935808_2837944575(char *, char *, char *);


static void work_a_1553510969_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(44, ng0);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t1 = work_p_1837030442_sub_1612176599_2837944575(WORK_P_1837030442, t2, t3);
    t4 = (t0 + 1920);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast_port(t4);

LAB2:    t9 = (t0 + 1868);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1553510969_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(45, ng0);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t1 = work_p_1837030442_sub_1787935808_2837944575(WORK_P_1837030442, t2, t3);
    t4 = (t0 + 1956);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast_port(t4);

LAB2:    t9 = (t0 + 1876);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1553510969_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1553510969_3212880686_p_0,(void *)work_a_1553510969_3212880686_p_1};
	xsi_register_didat("work_a_1553510969_3212880686", "isim/fft_8_tb_isim_beh.exe.sim/work/a_1553510969_3212880686.didat");
	xsi_register_executes(pe);
}
