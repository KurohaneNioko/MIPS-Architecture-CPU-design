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
static const char *ng0 = "F:/ProgrammingProjects/VHDL/P4-SingleCycleCPU/GRF.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {31, 0};
static int ng5[] = {32, 0};
static unsigned int ng6[] = {0U, 0U};
static const char *ng7 = "@%h: $%d <= %h";



static void Cont_37_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t35[8];
    char t40[8];
    char t41[8];
    char t43[8];
    char t72[8];
    char t77[8];
    char t78[8];
    char t80[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t44;
    char *t45;
    unsigned int t46;
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
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t79;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1244U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t113 = (t0 + 3296);
    t114 = (t113 + 32U);
    t115 = *((char **)t114);
    t116 = (t115 + 40U);
    t117 = *((char **)t116);
    memset(t117, 0, 8);
    t118 = 31U;
    t119 = t118;
    t120 = (t3 + 4);
    t121 = *((unsigned int *)t3);
    t118 = (t118 & t121);
    t122 = *((unsigned int *)t120);
    t119 = (t119 & t122);
    t123 = (t117 + 4);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t124 | t118);
    t125 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t125 | t119);
    xsi_driver_vfirst_trans(t113, 0, 4);
    t126 = (t0 + 3228);
    *((int *)t126) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 692U);
    t34 = *((char **)t33);
    memcpy(t35, t34, 8);
    goto LAB13;

LAB14:    t33 = (t0 + 1244U);
    t42 = *((char **)t33);
    t33 = ((char*)((ng2)));
    memset(t43, 0, 8);
    t44 = (t42 + 4);
    t45 = (t33 + 4);
    t46 = *((unsigned int *)t42);
    t47 = *((unsigned int *)t33);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB24;

LAB21:    if (t55 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t43) = 1;

LAB24:    memset(t41, 0, 8);
    t59 = (t43 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t43);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t59) != 0)
        goto LAB27;

LAB28:    t66 = (t41 + 4);
    t67 = *((unsigned int *)t41);
    t68 = *((unsigned int *)t66);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB29;

LAB30:    t73 = *((unsigned int *)t41);
    t74 = (~(t73));
    t75 = *((unsigned int *)t66);
    t76 = (t74 || t75);
    if (t76 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t66) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t77, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t58 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t65 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB28;

LAB29:    t70 = (t0 + 784U);
    t71 = *((char **)t70);
    memcpy(t72, t71, 8);
    goto LAB30;

LAB31:    t70 = (t0 + 1244U);
    t79 = *((char **)t70);
    t70 = ((char*)((ng3)));
    memset(t80, 0, 8);
    t81 = (t79 + 4);
    t82 = (t70 + 4);
    t83 = *((unsigned int *)t79);
    t84 = *((unsigned int *)t70);
    t85 = (t83 ^ t84);
    t86 = *((unsigned int *)t81);
    t87 = *((unsigned int *)t82);
    t88 = (t86 ^ t87);
    t89 = (t85 | t88);
    t90 = *((unsigned int *)t81);
    t91 = *((unsigned int *)t82);
    t92 = (t90 | t91);
    t93 = (~(t92));
    t94 = (t89 & t93);
    if (t94 != 0)
        goto LAB41;

LAB38:    if (t92 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t80) = 1;

LAB41:    memset(t78, 0, 8);
    t96 = (t80 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t80);
    t100 = (t99 & t98);
    t101 = (t100 & 1U);
    if (t101 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t96) != 0)
        goto LAB44;

LAB45:    t103 = (t78 + 4);
    t104 = *((unsigned int *)t78);
    t105 = *((unsigned int *)t103);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB46;

LAB47:    t108 = *((unsigned int *)t78);
    t109 = (~(t108));
    t110 = *((unsigned int *)t103);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t103) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t78) > 0)
        goto LAB52;

LAB53:    memcpy(t77, t112, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t72, 32, t77, 32);
    goto LAB37;

LAB35:    memcpy(t40, t72, 8);
    goto LAB37;

LAB40:    t95 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t78) = 1;
    goto LAB45;

LAB44:    t102 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB45;

LAB46:    t107 = ((char*)((ng4)));
    goto LAB47;

LAB48:    t112 = ((char*)((ng1)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t77, 32, t107, 32, t112, 32);
    goto LAB54;

LAB52:    memcpy(t77, t107, 8);
    goto LAB54;

}

static void Cont_40_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 2600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 600U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t48 = (t0 + 3332);
    t50 = (t48 + 32U);
    t51 = *((char **)t50);
    t52 = (t51 + 40U);
    t53 = *((char **)t52);
    memcpy(t53, t3, 8);
    xsi_driver_vfirst_trans(t48, 0, 31);
    t54 = (t0 + 3236);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t38 = (t0 + 1840);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t42 = (t0 + 1840);
    t43 = (t42 + 44U);
    t44 = *((char **)t43);
    t45 = (t0 + 1840);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    t48 = (t0 + 600U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_array_select_value(t41, 32, t40, t44, t47, 2, 1, t49, 5, 2);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t41, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void Cont_41_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 2744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 692U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t48 = (t0 + 3368);
    t50 = (t48 + 32U);
    t51 = *((char **)t50);
    t52 = (t51 + 40U);
    t53 = *((char **)t52);
    memcpy(t53, t3, 8);
    xsi_driver_vfirst_trans(t48, 0, 31);
    t54 = (t0 + 3244);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t38 = (t0 + 1840);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    t42 = (t0 + 1840);
    t43 = (t42 + 44U);
    t44 = *((char **)t43);
    t45 = (t0 + 1840);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    t48 = (t0 + 692U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_array_select_value(t41, 32, t40, t44, t47, 2, 1, t49, 5, 2);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t41, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void Initial_42_3(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1932);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1932);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);
    t12 = ((char*)((ng6)));
    t13 = (t0 + 1840);
    t16 = (t0 + 1840);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1840);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1932);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1932);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1932);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Always_46_4(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t60[8];
    char t66[8];
    char t101[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
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
    unsigned int t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    int t117;

LAB0:    t1 = (t0 + 3032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3252);
    *((int *)t2) = 1;
    t3 = (t0 + 3060);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t6) = 1;

LAB22:    memset(t30, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t8) != 0)
        goto LAB25;

LAB26:    t22 = (t30 + 4);
    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t22);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB27;

LAB28:    memcpy(t66, t30, 8);

LAB29:    t93 = (t66 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t66);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB41;

LAB42:
LAB43:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(47, ng0);

LAB13:    xsi_set_current_line(48, ng0);
    xsi_set_current_line(48, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1932);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(49, ng0);
    t8 = ((char*)((ng6)));
    t21 = (t0 + 1840);
    t22 = (t0 + 1840);
    t28 = (t22 + 44U);
    t29 = *((char **)t28);
    t32 = (t0 + 1840);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t0 + 1932);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t29, t34, 2, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t14 = *((unsigned int *)t38);
    t39 = (!(t14));
    t40 = (t31 + 4);
    t15 = *((unsigned int *)t40);
    t41 = (!(t15));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1932);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB17:    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t43 = (t16 - t17);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, *((unsigned int *)t31), t44, 0LL);
    goto LAB18;

LAB21:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t30) = 1;
    goto LAB26;

LAB25:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB26;

LAB27:    t28 = (t0 + 1152U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng2)));
    memset(t31, 0, 8);
    t32 = (t29 + 4);
    t33 = (t28 + 4);
    t48 = *((unsigned int *)t29);
    t49 = *((unsigned int *)t28);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t32);
    t52 = *((unsigned int *)t33);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t32);
    t56 = *((unsigned int *)t33);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB33;

LAB30:    if (t57 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t31) = 1;

LAB33:    memset(t60, 0, 8);
    t35 = (t31 + 4);
    t61 = *((unsigned int *)t35);
    t62 = (~(t61));
    t63 = *((unsigned int *)t31);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t35) != 0)
        goto LAB36;

LAB37:    t67 = *((unsigned int *)t30);
    t68 = *((unsigned int *)t60);
    t69 = (t67 & t68);
    *((unsigned int *)t66) = t69;
    t37 = (t30 + 4);
    t38 = (t60 + 4);
    t40 = (t66 + 4);
    t70 = *((unsigned int *)t37);
    t71 = *((unsigned int *)t38);
    t72 = (t70 | t71);
    *((unsigned int *)t40) = t72;
    t73 = *((unsigned int *)t40);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB32:    t34 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t60) = 1;
    goto LAB37;

LAB36:    t36 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB37;

LAB38:    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t40);
    *((unsigned int *)t66) = (t75 | t76);
    t77 = (t30 + 4);
    t78 = (t60 + 4);
    t79 = *((unsigned int *)t30);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t60);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t39 = (t80 & t82);
    t41 = (t84 & t86);
    t87 = (~(t39));
    t88 = (~(t41));
    t89 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t89 & t87);
    t90 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t90 & t88);
    t91 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t91 & t87);
    t92 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t92 & t88);
    goto LAB40;

LAB41:    xsi_set_current_line(51, ng0);

LAB44:    xsi_set_current_line(52, ng0);
    t99 = (t0 + 876U);
    t100 = *((char **)t99);
    t99 = (t0 + 1840);
    t103 = (t0 + 1840);
    t104 = (t103 + 44U);
    t105 = *((char **)t104);
    t106 = (t0 + 1840);
    t107 = (t106 + 40U);
    t108 = *((char **)t107);
    t109 = (t0 + 1612U);
    t110 = *((char **)t109);
    xsi_vlog_generic_convert_array_indices(t101, t102, t105, t108, 2, 1, t110, 5, 2);
    t109 = (t101 + 4);
    t111 = *((unsigned int *)t109);
    t42 = (!(t111));
    t112 = (t102 + 4);
    t113 = *((unsigned int *)t112);
    t43 = (!(t113));
    t44 = (t42 && t43);
    if (t44 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    t2 = (t0 + 1612U);
    t4 = *((char **)t2);
    t2 = (t0 + 876U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng7, 4, t0, (char)118, t3, 32, (char)118, t4, 5, (char)118, t5, 32);
    goto LAB43;

LAB45:    t114 = *((unsigned int *)t101);
    t115 = *((unsigned int *)t102);
    t116 = (t114 - t115);
    t117 = (t116 + 1);
    xsi_vlogvar_wait_assign_value(t99, t100, 0, *((unsigned int *)t102), t117, 0LL);
    goto LAB46;

}


extern void work_m_00000000004070699818_1621229167_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Cont_40_1,(void *)Cont_41_2,(void *)Initial_42_3,(void *)Always_46_4};
	xsi_register_didat("work_m_00000000004070699818_1621229167", "isim/p4tb_isim_beh.exe.sim/work/m_00000000004070699818_1621229167.didat");
	xsi_register_executes(pe);
}
