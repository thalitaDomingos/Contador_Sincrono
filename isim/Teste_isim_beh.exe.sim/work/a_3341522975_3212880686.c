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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Samsung/Documents/E208/Projeto/VHDL/Modulo.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3341522975_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB24;

LAB25:
LAB3:    t1 = (t0 + 2832);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 2912);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t4 = (t9 == 0);
    if (t4 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 == 5);
    if (t3 != 0)
        goto LAB10;

LAB11:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 == 4);
    if (t3 != 0)
        goto LAB12;

LAB13:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 == 2);
    if (t3 != 0)
        goto LAB14;

LAB15:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 == 6);
    if (t3 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 == 3);
    if (t3 != 0)
        goto LAB18;

LAB19:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 == 1);
    if (t3 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 == 7);
    if (t3 != 0)
        goto LAB22;

LAB23:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2912);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = 5;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB10:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 2912);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 4;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB12:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2912);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB14:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2912);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB16:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2912);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB18:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2912);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 1;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB20:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2912);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB22:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2912);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 5;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB24:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t2 = (t0 + 2912);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = t9;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

}


extern void work_a_3341522975_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3341522975_3212880686_p_0};
	xsi_register_didat("work_a_3341522975_3212880686", "isim/Teste_isim_beh.exe.sim/work/a_3341522975_3212880686.didat");
	xsi_register_executes(pe);
}
