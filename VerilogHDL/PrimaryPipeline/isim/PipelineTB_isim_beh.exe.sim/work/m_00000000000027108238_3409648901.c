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
static const char *ng0 = "F:/Programming Projects/VHDL/PrimaryPipeline/pipeline.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_30_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1196);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

}

static void Always_35_1(char *t0)
{
    char t7[8];
    char t8[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2152);
    *((int *)t2) = 1;
    t3 = (t0 + 1984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t0 + 784U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t5, 32, t6, 32);
    t4 = (t0 + 1288);
    t10 = (t0 + 1288);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t13 = (t0 + 1288);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t8, t9, t12, t15, 2, 1, t16, 32, 1);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t9 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t3, 32, t4, 32);
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t10 = *((char **)t6);
    t11 = (t0 + 1288);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t8, t9, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t8 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (!(t18));
    t16 = (t9 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (!(t21));
    t23 = (t19 && t22);
    if (t23 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t10 = *((char **)t6);
    t11 = (t0 + 1288);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t4, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t0 + 1288);
    t16 = (t15 + 36U);
    t17 = *((char **)t16);
    t20 = (t0 + 1288);
    t28 = (t20 + 44U);
    t29 = *((char **)t28);
    t30 = (t0 + 1288);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t17, t29, t32, 2, 1, t33, 32, 1);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t7, 32, t8, 32);
    t34 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t34, t9, 0, 0, 32, 0LL);
    goto LAB2;

LAB6:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t9);
    t26 = (t24 - t25);
    t27 = (t26 + 1);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, *((unsigned int *)t9), t27, 0LL);
    goto LAB7;

LAB8:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t9);
    t26 = (t24 - t25);
    t27 = (t26 + 1);
    xsi_vlogvar_wait_assign_value(t2, t7, 0, *((unsigned int *)t9), t27, 0LL);
    goto LAB9;

}


extern void work_m_00000000000027108238_3409648901_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_35_1};
	xsi_register_didat("work_m_00000000000027108238_3409648901", "isim/PipelineTB_isim_beh.exe.sim/work/m_00000000000027108238_3409648901.didat");
	xsi_register_executes(pe);
}
