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
static const char *ng0 = "D:/Xilinx_programy/LAB5/Funkcja_G_Rownanie/funkcja_G_vhdl.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void work_a_3457574566_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(16, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 1032U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t1 = (t0 + 1512U);
    t11 = *((char **)t1);
    t12 = *((unsigned char *)t11);
    t13 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t12);
    t14 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t13);
    t15 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t7, t14);
    t1 = (t0 + 1032U);
    t16 = *((char **)t1);
    t17 = *((unsigned char *)t16);
    t1 = (t0 + 1512U);
    t18 = *((char **)t1);
    t19 = *((unsigned char *)t18);
    t20 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t17, t19);
    t21 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t15, t20);
    t1 = (t0 + 1032U);
    t22 = *((char **)t1);
    t23 = *((unsigned char *)t22);
    t24 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t23);
    t1 = (t0 + 1192U);
    t25 = *((char **)t1);
    t26 = *((unsigned char *)t25);
    t27 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t26);
    t28 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t24, t27);
    t1 = (t0 + 1352U);
    t29 = *((char **)t1);
    t30 = *((unsigned char *)t29);
    t31 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t28, t30);
    t32 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t21, t31);
    t1 = (t0 + 3232);
    t33 = (t1 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t32;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t37 = (t0 + 3152);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3457574566_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3457574566_3212880686_p_0};
	xsi_register_didat("work_a_3457574566_3212880686", "isim/funkcja_G_test_isim_beh.exe.sim/work/a_3457574566_3212880686.didat");
	xsi_register_executes(pe);
}
