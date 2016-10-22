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
extern char *IEEE_P_0774719531;

char *ieee_p_0774719531_sub_767632659_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767740470_2162500114(char *, char *, char *, char *, char *, char *);


char *work_p_1837030442_sub_1612176599_2837944575(char *t1, char *t2, char *t3)
{
    char t4[72];
    char t5[16];
    char t9[32];
    char t16[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2572);
    t8 = (t6 + 52U);
    *((char **)t8) = t7;
    t10 = (t6 + 36U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 48U);
    *((unsigned int *)t11) = 32U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t17 = (0 + 0U);
    t18 = (t2 + t17);
    t19 = (t1 + 2572);
    t20 = xsi_record_get_element_type(t19, 0);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t23 = (0 + 0U);
    t24 = (t3 + t23);
    t25 = (t1 + 2572);
    t26 = xsi_record_get_element_type(t25, 0);
    t27 = (t26 + 44U);
    t28 = *((char **)t27);
    t29 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t16, t18, t22, t24, t28);
    t30 = (t6 + 36U);
    t31 = *((char **)t30);
    t32 = (0 + 0U);
    t30 = (t31 + t32);
    t33 = (t16 + 12U);
    t34 = *((unsigned int *)t33);
    t35 = (1U * t34);
    memcpy(t30, t29, t35);
    t17 = (0 + 16U);
    t7 = (t2 + t17);
    t8 = (t1 + 2572);
    t10 = xsi_record_get_element_type(t8, 1);
    t11 = (t10 + 44U);
    t18 = *((char **)t11);
    t23 = (0 + 16U);
    t19 = (t3 + t23);
    t20 = (t1 + 2572);
    t21 = xsi_record_get_element_type(t20, 1);
    t22 = (t21 + 44U);
    t24 = *((char **)t22);
    t25 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t16, t7, t18, t19, t24);
    t26 = (t6 + 36U);
    t27 = *((char **)t26);
    t32 = (0 + 16U);
    t26 = (t27 + t32);
    t28 = (t16 + 12U);
    t34 = *((unsigned int *)t28);
    t35 = (1U * t34);
    memcpy(t26, t25, t35);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(32U);
    memcpy(t0, t8, 32U);

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t14) = t3;
    goto LAB4;

LAB6:;
}

char *work_p_1837030442_sub_1787935808_2837944575(char *t1, char *t2, char *t3)
{
    char t4[72];
    char t5[16];
    char t9[32];
    char t16[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2572);
    t8 = (t6 + 52U);
    *((char **)t8) = t7;
    t10 = (t6 + 36U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 48U);
    *((unsigned int *)t11) = 32U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t17 = (0 + 0U);
    t18 = (t2 + t17);
    t19 = (t1 + 2572);
    t20 = xsi_record_get_element_type(t19, 0);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t23 = (0 + 0U);
    t24 = (t3 + t23);
    t25 = (t1 + 2572);
    t26 = xsi_record_get_element_type(t25, 0);
    t27 = (t26 + 44U);
    t28 = *((char **)t27);
    t29 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t16, t18, t22, t24, t28);
    t30 = (t6 + 36U);
    t31 = *((char **)t30);
    t32 = (0 + 0U);
    t30 = (t31 + t32);
    t33 = (t16 + 12U);
    t34 = *((unsigned int *)t33);
    t35 = (1U * t34);
    memcpy(t30, t29, t35);
    t17 = (0 + 16U);
    t7 = (t2 + t17);
    t8 = (t1 + 2572);
    t10 = xsi_record_get_element_type(t8, 1);
    t11 = (t10 + 44U);
    t18 = *((char **)t11);
    t23 = (0 + 16U);
    t19 = (t3 + t23);
    t20 = (t1 + 2572);
    t21 = xsi_record_get_element_type(t20, 1);
    t22 = (t21 + 44U);
    t24 = *((char **)t22);
    t25 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t16, t7, t18, t19, t24);
    t26 = (t6 + 36U);
    t27 = *((char **)t26);
    t32 = (0 + 16U);
    t26 = (t27 + t32);
    t28 = (t16 + 12U);
    t34 = *((unsigned int *)t28);
    t35 = (1U * t34);
    memcpy(t26, t25, t35);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(32U);
    memcpy(t0, t8, 32U);

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t14) = t3;
    goto LAB4;

LAB6:;
}

char *work_p_1837030442_sub_260708590_2837944575(char *t1, char *t2, char *t3)
{
    char t4[72];
    char t5[16];
    char t9[32];
    char t16[16];
    char t17[16];
    char t31[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;

LAB0:    t6 = (t4 + 4U);
    t7 = (t1 + 2572);
    t8 = (t6 + 52U);
    *((char **)t8) = t7;
    t10 = (t6 + 36U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 48U);
    *((unsigned int *)t11) = 32U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 8U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t18 = (0 + 0U);
    t19 = (t2 + t18);
    t20 = (t1 + 2572);
    t21 = xsi_record_get_element_type(t20, 0);
    t22 = (t21 + 44U);
    t23 = *((char **)t22);
    t24 = (0 + 0U);
    t25 = (t3 + t24);
    t26 = (t1 + 2572);
    t27 = xsi_record_get_element_type(t26, 0);
    t28 = (t27 + 44U);
    t29 = *((char **)t28);
    t30 = ieee_p_0774719531_sub_767632659_2162500114(IEEE_P_0774719531, t17, t19, t23, t25, t29);
    t32 = (0 + 16U);
    t33 = (t2 + t32);
    t34 = (t1 + 2572);
    t35 = xsi_record_get_element_type(t34, 1);
    t36 = (t35 + 44U);
    t37 = *((char **)t36);
    t38 = (0 + 16U);
    t39 = (t3 + t38);
    t40 = (t1 + 2572);
    t41 = xsi_record_get_element_type(t40, 1);
    t42 = (t41 + 44U);
    t43 = *((char **)t42);
    t44 = ieee_p_0774719531_sub_767632659_2162500114(IEEE_P_0774719531, t31, t33, t37, t39, t43);
    t45 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t16, t30, t17, t44, t31);
    t46 = (t6 + 36U);
    t47 = *((char **)t46);
    t48 = (0 + 0U);
    t46 = (t47 + t48);
    t49 = (t16 + 12U);
    t50 = *((unsigned int *)t49);
    t51 = (1U * t50);
    memcpy(t46, t45, t51);
    t18 = (0 + 0U);
    t7 = (t2 + t18);
    t8 = (t1 + 2572);
    t10 = xsi_record_get_element_type(t8, 0);
    t11 = (t10 + 44U);
    t19 = *((char **)t11);
    t24 = (0 + 16U);
    t20 = (t3 + t24);
    t21 = (t1 + 2572);
    t22 = xsi_record_get_element_type(t21, 1);
    t23 = (t22 + 44U);
    t25 = *((char **)t23);
    t26 = ieee_p_0774719531_sub_767632659_2162500114(IEEE_P_0774719531, t17, t7, t19, t20, t25);
    t32 = (0 + 16U);
    t27 = (t2 + t32);
    t28 = (t1 + 2572);
    t29 = xsi_record_get_element_type(t28, 1);
    t30 = (t29 + 44U);
    t33 = *((char **)t30);
    t38 = (0 + 0U);
    t34 = (t3 + t38);
    t35 = (t1 + 2572);
    t36 = xsi_record_get_element_type(t35, 0);
    t37 = (t36 + 44U);
    t39 = *((char **)t37);
    t40 = ieee_p_0774719531_sub_767632659_2162500114(IEEE_P_0774719531, t31, t27, t33, t34, t39);
    t41 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t16, t26, t17, t40, t31);
    t42 = (t6 + 36U);
    t43 = *((char **)t42);
    t48 = (0 + 16U);
    t42 = (t43 + t48);
    t44 = (t16 + 12U);
    t50 = *((unsigned int *)t44);
    t51 = (1U * t50);
    memcpy(t42, t41, t51);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t0 = xsi_get_transient_memory(32U);
    memcpy(t0, t8, 32U);

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t14) = t3;
    goto LAB4;

LAB6:;
}


extern void work_p_1837030442_init()
{
	static char *se[] = {(void *)work_p_1837030442_sub_1612176599_2837944575,(void *)work_p_1837030442_sub_1787935808_2837944575,(void *)work_p_1837030442_sub_260708590_2837944575};
	xsi_register_didat("work_p_1837030442", "isim/fft_tb_isim_beh.exe.sim/work/p_1837030442.didat");
	xsi_register_subprogram_executes(se);
}
