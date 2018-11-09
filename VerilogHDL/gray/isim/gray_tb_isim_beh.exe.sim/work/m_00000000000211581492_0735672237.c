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
static const char *ng0 = "F:/Programming Projects/VHDL/gray/gray.v";
static int ng1[] = {8, 0};
static int ng2[] = {2, 0};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {7, 0};



static void Cont_31_0(char *t0)
{
    char t6[8];
    char t8[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_mod(t6, 32, t4, 32, t5, 32);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 1288);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_mod(t13, 32, t11, 32, t12, 32);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    *((unsigned int *)t14) = t17;
    t18 = (t8 + 4);
    t19 = (t13 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB4;

LAB5:
LAB6:    t28 = (t0 + 2628);
    t29 = (t28 + 32U);
    t30 = *((char **)t29);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    memset(t32, 0, 8);
    t33 = 7U;
    t34 = t33;
    t35 = (t14 + 4);
    t36 = *((unsigned int *)t14);
    t33 = (t33 & t36);
    t37 = *((unsigned int *)t35);
    t34 = (t34 & t37);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 | t33);
    t40 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t40 | t34);
    xsi_driver_vfirst_trans(t28, 0, 2);
    t41 = (t0 + 2592);
    t42 = (t41 + 32U);
    t43 = *((char **)t42);
    t44 = (t43 + 40U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 4294967288U;
    t47 = t46;
    t48 = (t14 + 4);
    t49 = *((unsigned int *)t14);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t46 = (t46 >> 3);
    t47 = (t47 >> 3);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 28);
    t54 = (t0 + 2532);
    *((int *)t54) = 1;

LAB1:    return;
LAB4:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    goto LAB6;

}

static void Cont_32_1(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2664);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 2540);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_33_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(33, ng0);

LAB2:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1380);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_37_3(char *t0)
{
    char t4[8];
    char t5[8];
    char t8[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t75[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;

LAB0:    t1 = (t0 + 2336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2548);
    *((int *)t2) = 1;
    t3 = (t0 + 2364);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t6 = (t0 + 692U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t5, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t24) != 0)
        goto LAB12;

LAB13:    t31 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t5) > 0)
        goto LAB20;

LAB21:    memcpy(t4, t40, 8);

LAB22:    t83 = (t0 + 1288);
    xsi_vlogvar_assign_value(t83, t4, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t6 = (t3 + 4);
    t7 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB43;

LAB40:    if (t20 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t8) = 1;

LAB43:    memset(t5, 0, 8);
    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t10) != 0)
        goto LAB46;

LAB47:    t24 = (t5 + 4);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t24);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB48;

LAB49:    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t24);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t24) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t5) > 0)
        goto LAB54;

LAB55:    memcpy(t4, t40, 8);

LAB56:    t73 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t73, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t5) = 1;
    goto LAB13;

LAB12:    t30 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    t35 = ((char*)((ng3)));
    goto LAB15;

LAB16:    t42 = (t0 + 784U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng4)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB26;

LAB23:    if (t56 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t44) = 1;

LAB26:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t60) != 0)
        goto LAB29;

LAB30:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB31;

LAB32:    t76 = *((unsigned int *)t41);
    t77 = (~(t76));
    t78 = *((unsigned int *)t67);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t67) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t41) > 0)
        goto LAB37;

LAB38:    memcpy(t40, t82, 8);

LAB39:    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t4, 32, t35, 32, t40, 32);
    goto LAB22;

LAB20:    memcpy(t4, t35, 8);
    goto LAB22;

LAB25:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t41) = 1;
    goto LAB30;

LAB29:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB30;

LAB31:    t71 = (t0 + 1288);
    t72 = (t71 + 36U);
    t73 = *((char **)t72);
    t74 = ((char*)((ng4)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_add(t75, 32, t73, 32, t74, 32);
    goto LAB32;

LAB33:    t80 = (t0 + 1288);
    t81 = (t80 + 36U);
    t82 = *((char **)t81);
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t40, 32, t75, 32, t82, 32);
    goto LAB39;

LAB37:    memcpy(t40, t75, 8);
    goto LAB39;

LAB42:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t5) = 1;
    goto LAB47;

LAB46:    t23 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB47;

LAB48:    t30 = ((char*)((ng3)));
    goto LAB49;

LAB50:    t31 = (t0 + 1288);
    t35 = (t31 + 36U);
    t42 = *((char **)t35);
    t43 = ((char*)((ng5)));
    memset(t44, 0, 8);
    t45 = (t42 + 4);
    if (*((unsigned int *)t45) != 0)
        goto LAB58;

LAB57:    t46 = (t43 + 4);
    if (*((unsigned int *)t46) != 0)
        goto LAB58;

LAB61:    if (*((unsigned int *)t42) > *((unsigned int *)t43))
        goto LAB59;

LAB60:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t47 = *((unsigned int *)t60);
    t48 = (~(t47));
    t49 = *((unsigned int *)t44);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t60) != 0)
        goto LAB64;

LAB65:    t67 = (t41 + 4);
    t52 = *((unsigned int *)t41);
    t53 = *((unsigned int *)t67);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB66;

LAB67:    t55 = *((unsigned int *)t41);
    t56 = (~(t55));
    t57 = *((unsigned int *)t67);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t67) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t41) > 0)
        goto LAB72;

LAB73:    memcpy(t40, t72, 8);

LAB74:    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t4, 32, t30, 32, t40, 32);
    goto LAB56;

LAB54:    memcpy(t4, t30, 8);
    goto LAB56;

LAB58:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB60;

LAB59:    *((unsigned int *)t44) = 1;
    goto LAB60;

LAB62:    *((unsigned int *)t41) = 1;
    goto LAB65;

LAB64:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB65;

LAB66:    t71 = ((char*)((ng4)));
    goto LAB67;

LAB68:    t72 = ((char*)((ng3)));
    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t40, 32, t71, 32, t72, 32);
    goto LAB74;

LAB72:    memcpy(t40, t71, 8);
    goto LAB74;

}


extern void work_m_00000000000211581492_0735672237_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Cont_32_1,(void *)Initial_33_2,(void *)Always_37_3};
	xsi_register_didat("work_m_00000000000211581492_0735672237", "isim/gray_tb_isim_beh.exe.sim/work/m_00000000000211581492_0735672237.didat");
	xsi_register_executes(pe);
}
