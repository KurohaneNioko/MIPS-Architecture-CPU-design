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
static const char *ng0 = "F:/ProgrammingProjects/VHDL/DZHP4/IM.v";
static const char *ng1 = "code.txt";
static unsigned int ng2[] = {3072U, 0U};



static void Initial_27_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 920);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Cont_29_1(char *t0)
{
    char t5[8];
    char t12[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 1588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 920);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 920);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 1073741823U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1073741823U);
    t22 = ((char*)((ng2)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_minus(t23, 32, t12, 32, t22, 32);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t23, 32, 2);
    t24 = (t0 + 1828);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t5, 8);
    xsi_driver_vfirst_trans(t24, 0, 31);
    t29 = (t0 + 1784);
    *((int *)t29) = 1;

LAB1:    return;
}


extern void work_m_00000000004101600572_0467708899_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Cont_29_1};
	xsi_register_didat("work_m_00000000004101600572_0467708899", "isim/tb_isim_beh.exe.sim/work/m_00000000004101600572_0467708899.didat");
	xsi_register_executes(pe);
}
