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
static const char *ng0 = "C:/Users/Srivatsan/Desktop/4051/fft_8_point/fft_tb.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_2889341154_91900896(char *, char *, char *, char *, char *);


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

LAB0:    t1 = (t0 + 2788U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3452);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1408U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3452);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1408U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2688);
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
    char *t8;

LAB0:    t1 = (t0 + 2932U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2832);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 2832);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3488);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(108, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_1976856439_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int64 t25;

LAB0:    t1 = (t0 + 3076U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1408U);
    t3 = *((char **)t2);
    t25 = *((int64 *)t3);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, t25);

LAB15:    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB4:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2004U);
    t7 = std_textio_endfile(t2);
    t8 = (!(t7));
    if (t8 == 1)
        goto LAB10;

LAB11:    t6 = (unsigned char)0;

LAB12:    if (t6 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB5;

LAB7:    xsi_set_current_line(122, ng0);
    t12 = (t0 + 2976);
    t13 = (t0 + 2004U);
    t14 = (t0 + 2300U);
    std_textio_readline(STD_TEXTIO, t12, t13, t14);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2976);
    t3 = (t0 + 2068U);
    t9 = (t0 + 2340U);
    std_textio_readline(STD_TEXTIO, t2, t3, t9);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2976);
    t3 = (t0 + 2300U);
    t9 = (t0 + 1476U);
    t12 = *((char **)t9);
    t9 = (t0 + 6524U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t12, t9);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2976);
    t3 = (t0 + 2340U);
    t9 = (t0 + 1544U);
    t12 = *((char **)t9);
    t9 = (t0 + 6540U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t12, t9);
    xsi_set_current_line(126, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t3 = t2;
    t9 = (t0 + 1476U);
    t12 = *((char **)t9);
    memcpy(t3, t12, 16U);
    t9 = (t2 + 16U);
    t13 = (t0 + 1544U);
    t14 = *((char **)t13);
    memcpy(t9, t14, 16U);
    t13 = (t0 + 1612U);
    t15 = *((char **)t13);
    t16 = *((int *)t15);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (32U * t18);
    t20 = (0U + t19);
    t13 = (t0 + 3524);
    t21 = (t13 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memcpy(t24, t2, 32U);
    xsi_driver_first_trans_delta(t13, t20, 32U, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1612U);
    t3 = *((char **)t2);
    t16 = *((int *)t3);
    t17 = (t16 + 1);
    t2 = (t0 + 1612U);
    t9 = *((char **)t2);
    t2 = (t9 + 0);
    *((int *)t2) = t17;
    goto LAB8;

LAB10:    t9 = (t0 + 2068U);
    t10 = std_textio_endfile(t9);
    t11 = (!(t10));
    t6 = t11;
    goto LAB12;

LAB13:    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}

static void work_a_1976856439_2372691052_p_3(char *t0)
{
    char t6[16];
    char t19[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    int t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3220U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);
    t3 = (400 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2132U);
    t4 = (t0 + 7400);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 15;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (15 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    std_textio_file_open1(t2, t4, t6, (unsigned char)1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2196U);
    t4 = (t0 + 7415);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 15;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (15 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    std_textio_file_open1(t2, t4, t6, (unsigned char)1);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 7430);
    *((int *)t2) = 0;
    t4 = (t0 + 7434);
    *((int *)t4) = 7;
    t9 = 0;
    t11 = 7;

LAB8:    if (t9 <= t11)
        goto LAB9;

LAB11:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 2132U);
    std_textio_file_close(t2);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2196U);
    std_textio_file_close(t2);
    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(150, ng0);
    t5 = (t0 + 960U);
    t7 = *((char **)t5);
    t5 = (t0 + 7430);
    t12 = *((int *)t5);
    t13 = (t12 - 0);
    t10 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t5));
    t14 = (32U * t10);
    t15 = (0 + t14);
    t16 = (t15 + 0U);
    t8 = (t7 + t16);
    t17 = (t0 + 1680U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    memcpy(t17, t8, 16U);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t2 = (t0 + 7430);
    t12 = *((int *)t2);
    t13 = (t12 - 0);
    t10 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 7, 1, *((int *)t2));
    t14 = (32U * t10);
    t15 = (0 + t14);
    t16 = (t15 + 16U);
    t5 = (t4 + t16);
    t7 = (t0 + 1748U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    memcpy(t7, t5, 16U);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3120);
    t4 = (t0 + 2380U);
    t5 = (t0 + 1680U);
    t7 = *((char **)t5);
    memcpy(t6, t7, 16U);
    t5 = (t0 + 6556U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t4, t6, t5, (unsigned char)0, 0);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3120);
    t4 = (t0 + 2420U);
    t5 = (t0 + 1748U);
    t7 = *((char **)t5);
    memcpy(t19, t7, 16U);
    t5 = (t0 + 6572U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t4, t19, t5, (unsigned char)0, 0);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3120);
    t4 = (t0 + 2132U);
    t5 = (t0 + 2380U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 3120);
    t4 = (t0 + 2196U);
    t5 = (t0 + 2420U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);

LAB10:    t2 = (t0 + 7430);
    t9 = *((int *)t2);
    t4 = (t0 + 7434);
    t11 = *((int *)t4);
    if (t9 == t11)
        goto LAB11;

LAB12:    t12 = (t9 + 1);
    t9 = t12;
    t5 = (t0 + 7430);
    *((int *)t5) = t9;
    goto LAB8;

}


extern void work_a_1976856439_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1976856439_2372691052_p_0,(void *)work_a_1976856439_2372691052_p_1,(void *)work_a_1976856439_2372691052_p_2,(void *)work_a_1976856439_2372691052_p_3};
	xsi_register_didat("work_a_1976856439_2372691052", "isim/fft_tb_isim_beh.exe.sim/work/a_1976856439_2372691052.didat");
	xsi_register_executes(pe);
}
