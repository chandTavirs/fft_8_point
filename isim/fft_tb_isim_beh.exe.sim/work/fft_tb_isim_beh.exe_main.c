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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_0774719531;
char *WORK_P_1837030442;
char *STD_TEXTIO;
char *IEEE_P_1242562249;
char *IEEE_PROPOSED_P_2011092313;
char *IEEE_P_3972351953;
char *IEEE_PROPOSED_P_0892474878;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_0774719531_init();
    work_p_1837030442_init();
    std_textio_init();
    ieee_p_1242562249_init();
    ieee_proposed_p_2011092313_init();
    ieee_p_3972351953_init();
    ieee_proposed_p_0892474878_init();
    ieee_p_3564397177_init();
    work_a_4232026903_3212880686_init();
    work_a_3558894211_3212880686_init();
    work_a_1553510969_3212880686_init();
    work_a_3618878231_3212880686_init();
    work_a_1976856439_2372691052_init();


    xsi_register_tops("work_a_1976856439_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    WORK_P_1837030442 = xsi_get_engine_memory("work_p_1837030442");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_PROPOSED_P_2011092313 = xsi_get_engine_memory("ieee_proposed_p_2011092313");
    IEEE_P_3972351953 = xsi_get_engine_memory("ieee_p_3972351953");
    IEEE_PROPOSED_P_0892474878 = xsi_get_engine_memory("ieee_proposed_p_0892474878");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
