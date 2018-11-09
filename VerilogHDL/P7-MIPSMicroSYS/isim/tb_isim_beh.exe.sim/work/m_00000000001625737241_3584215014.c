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
static const char *ng0 = "F:/ProgrammingProjects/VerilogHDL/P7-MIPSMicroSYS/COCOTimerCounter.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {32528U, 0U};
static int ng3[] = {4, 0};
static int ng4[] = {8, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {1U, 0U};



static void Cont_34_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1736);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = (t0 + 3588);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 3U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 1);
    t27 = (t0 + 3504);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_35_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1736);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 3624);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 3512);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_36_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2732U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1736);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 3660);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 3520);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_37_3(char *t0)
{
    char t7[8];
    char t23[8];
    char t57[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
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
    unsigned int t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;

LAB0:    t1 = (t0 + 2876U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1416U);
    t3 = *((char **)t2);
    t2 = (t0 + 1920);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    t24 = *((unsigned int *)t3);
    t25 = *((unsigned int *)t7);
    t26 = (t24 & t25);
    *((unsigned int *)t23) = t26;
    t27 = (t3 + 4);
    t28 = (t7 + 4);
    t29 = (t23 + 4);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB8;

LAB9:
LAB10:    t55 = (t0 + 1324U);
    t56 = *((char **)t55);
    t55 = ((char*)((ng1)));
    memset(t57, 0, 8);
    t58 = (t56 + 4);
    t59 = (t55 + 4);
    t60 = *((unsigned int *)t56);
    t61 = *((unsigned int *)t55);
    t62 = (t60 ^ t61);
    t63 = *((unsigned int *)t58);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = (t62 | t65);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB14;

LAB11:    if (t69 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t57) = 1;

LAB14:    t74 = *((unsigned int *)t23);
    t75 = *((unsigned int *)t57);
    t76 = (t74 & t75);
    *((unsigned int *)t73) = t76;
    t77 = (t23 + 4);
    t78 = (t57 + 4);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t77);
    t81 = *((unsigned int *)t78);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = *((unsigned int *)t79);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB15;

LAB16:
LAB17:    t105 = (t0 + 3696);
    t106 = (t105 + 32U);
    t107 = *((char **)t106);
    t108 = (t107 + 40U);
    t109 = *((char **)t108);
    memset(t109, 0, 8);
    t110 = 1U;
    t111 = t110;
    t112 = (t73 + 4);
    t113 = *((unsigned int *)t73);
    t110 = (t110 & t113);
    t114 = *((unsigned int *)t112);
    t111 = (t111 & t114);
    t115 = (t109 + 4);
    t116 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t116 | t110);
    t117 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t117 | t111);
    xsi_driver_vfirst_trans(t105, 0, 0);
    t118 = (t0 + 3528);
    *((int *)t118) = 1;

LAB1:    return;
LAB6:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB7;

LAB8:    t35 = *((unsigned int *)t23);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t35 | t36);
    t37 = (t3 + 4);
    t38 = (t7 + 4);
    t39 = *((unsigned int *)t3);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (~(t41));
    t43 = *((unsigned int *)t7);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t49);
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t50);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & t49);
    t54 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t54 & t50);
    goto LAB10;

LAB13:    t72 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB14;

LAB15:    t85 = *((unsigned int *)t73);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t73) = (t85 | t86);
    t87 = (t23 + 4);
    t88 = (t57 + 4);
    t89 = *((unsigned int *)t23);
    t90 = (~(t89));
    t91 = *((unsigned int *)t87);
    t92 = (~(t91));
    t93 = *((unsigned int *)t57);
    t94 = (~(t93));
    t95 = *((unsigned int *)t88);
    t96 = (~(t95));
    t97 = (t90 & t92);
    t98 = (t94 & t96);
    t99 = (~(t97));
    t100 = (~(t98));
    t101 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t101 & t99);
    t102 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t102 & t100);
    t103 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t103 & t99);
    t104 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t104 & t100);
    goto LAB17;

}

static void Cont_38_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t8[8];
    char t42[8];
    char t43[8];
    char t46[8];
    char t48[8];
    char t82[8];
    char t83[8];
    char t86[8];
    char t88[8];
    char *t1;
    char *t2;
    char *t5;
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
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
    char *t45;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t84;
    char *t85;
    char *t87;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;

LAB0:    t1 = (t0 + 3020U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 864U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t5, 32, t2, 32);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
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
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t123 = (t0 + 3732);
    t124 = (t123 + 32U);
    t125 = *((char **)t124);
    t126 = (t125 + 40U);
    t127 = *((char **)t126);
    memcpy(t127, t3, 8);
    xsi_driver_vfirst_trans(t123, 0, 31);
    t128 = (t0 + 3536);
    *((int *)t128) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 1736);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    goto LAB13;

LAB14:    t44 = (t0 + 864U);
    t45 = *((char **)t44);
    t44 = ((char*)((ng2)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_minus(t46, 32, t45, 32, t44, 32);
    t47 = ((char*)((ng3)));
    memset(t48, 0, 8);
    t49 = (t46 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB24;

LAB21:    if (t60 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t48) = 1;

LAB24:    memset(t43, 0, 8);
    t64 = (t48 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t48);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t64) != 0)
        goto LAB27;

LAB28:    t71 = (t43 + 4);
    t72 = *((unsigned int *)t43);
    t73 = *((unsigned int *)t71);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB29;

LAB30:    t78 = *((unsigned int *)t43);
    t79 = (~(t78));
    t80 = *((unsigned int *)t71);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t71) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t43) > 0)
        goto LAB35;

LAB36:    memcpy(t42, t82, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t37, 32, t42, 32);
    goto LAB20;

LAB18:    memcpy(t3, t37, 8);
    goto LAB20;

LAB23:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t43) = 1;
    goto LAB28;

LAB27:    t70 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB28;

LAB29:    t75 = (t0 + 1828);
    t76 = (t75 + 36U);
    t77 = *((char **)t76);
    goto LAB30;

LAB31:    t84 = (t0 + 864U);
    t85 = *((char **)t84);
    t84 = ((char*)((ng2)));
    memset(t86, 0, 8);
    xsi_vlog_unsigned_minus(t86, 32, t85, 32, t84, 32);
    t87 = ((char*)((ng4)));
    memset(t88, 0, 8);
    t89 = (t86 + 4);
    t90 = (t87 + 4);
    t91 = *((unsigned int *)t86);
    t92 = *((unsigned int *)t87);
    t93 = (t91 ^ t92);
    t94 = *((unsigned int *)t89);
    t95 = *((unsigned int *)t90);
    t96 = (t94 ^ t95);
    t97 = (t93 | t96);
    t98 = *((unsigned int *)t89);
    t99 = *((unsigned int *)t90);
    t100 = (t98 | t99);
    t101 = (~(t100));
    t102 = (t97 & t101);
    if (t102 != 0)
        goto LAB41;

LAB38:    if (t100 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t88) = 1;

LAB41:    memset(t83, 0, 8);
    t104 = (t88 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t88);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t104) != 0)
        goto LAB44;

LAB45:    t111 = (t83 + 4);
    t112 = *((unsigned int *)t83);
    t113 = *((unsigned int *)t111);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB46;

LAB47:    t118 = *((unsigned int *)t83);
    t119 = (~(t118));
    t120 = *((unsigned int *)t111);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t111) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t83) > 0)
        goto LAB52;

LAB53:    memcpy(t82, t122, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t42, 32, t77, 32, t82, 32);
    goto LAB37;

LAB35:    memcpy(t42, t77, 8);
    goto LAB37;

LAB40:    t103 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t83) = 1;
    goto LAB45;

LAB44:    t110 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB45;

LAB46:    t115 = (t0 + 1920);
    t116 = (t115 + 36U);
    t117 = *((char **)t116);
    goto LAB47;

LAB48:    t122 = ((char*)((ng1)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t82, 32, t117, 32, t122, 32);
    goto LAB54;

LAB52:    memcpy(t82, t117, 8);
    goto LAB54;

}

static void Initial_41_5(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1736);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_46_6(char *t0)
{
    char t13[8];
    char t28[8];
    char t52[8];
    char t74[8];
    char t75[8];
    char t80[8];
    char t99[8];
    char t104[8];
    char t105[8];
    char t110[8];
    char t126[8];
    char t142[8];
    char t158[8];
    char t166[8];
    char t216[8];
    char t217[8];
    char t222[8];
    char t238[8];
    char t254[8];
    char t270[8];
    char t278[8];
    char t330[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    int t190;
    int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    char *t209;
    char *t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t218;
    char *t219;
    char *t220;
    char *t221;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    char *t252;
    char *t253;
    char *t255;
    char *t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    char *t269;
    char *t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    char *t277;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    char *t282;
    char *t283;
    char *t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    char *t292;
    char *t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    int t302;
    int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    char *t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    char *t316;
    char *t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    char *t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    char *t326;
    char *t327;
    char *t328;
    char *t329;
    char *t331;

LAB0:    t1 = (t0 + 3308U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3544);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 772U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1736);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(52, ng0);

LAB17:    xsi_set_current_line(53, ng0);
    t26 = (t0 + 1324U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng5)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t26);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB21;

LAB18:    if (t40 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t28) = 1;

LAB21:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1324U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB290;

LAB287:    if (t18 != 0)
        goto LAB289;

LAB288:    *((unsigned int *)t13) = 1;

LAB290:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB291;

LAB292:
LAB293:    goto LAB16;

LAB20:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(53, ng0);

LAB25:    xsi_set_current_line(54, ng0);
    t50 = (t0 + 1508U);
    t51 = *((char **)t50);
    t50 = ((char*)((ng6)));
    memset(t52, 0, 8);
    t53 = (t51 + 4);
    t54 = (t50 + 4);
    t55 = *((unsigned int *)t51);
    t56 = *((unsigned int *)t50);
    t57 = (t55 ^ t56);
    t58 = *((unsigned int *)t53);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t54);
    t64 = (t62 | t63);
    t65 = (~(t64));
    t66 = (t61 & t65);
    if (t66 != 0)
        goto LAB29;

LAB26:    if (t64 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t52) = 1;

LAB29:    t68 = (t52 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t52);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1508U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB212;

LAB209:    if (t18 != 0)
        goto LAB211;

LAB210:    *((unsigned int *)t13) = 1;

LAB212:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB213;

LAB214:
LAB215:
LAB32:    goto LAB24;

LAB28:    t67 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(54, ng0);

LAB33:    xsi_set_current_line(55, ng0);
    t76 = (t0 + 1920);
    t77 = (t76 + 36U);
    t78 = *((char **)t77);
    t79 = ((char*)((ng1)));
    memset(t80, 0, 8);
    t81 = (t78 + 4);
    if (*((unsigned int *)t81) != 0)
        goto LAB35;

LAB34:    t82 = (t79 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t78) > *((unsigned int *)t79))
        goto LAB36;

LAB37:    memset(t75, 0, 8);
    t84 = (t80 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t84) != 0)
        goto LAB41;

LAB42:    t91 = (t75 + 4);
    t92 = *((unsigned int *)t75);
    t93 = *((unsigned int *)t91);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB43;

LAB44:    t100 = *((unsigned int *)t75);
    t101 = (~(t100));
    t102 = *((unsigned int *)t91);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t91) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t75) > 0)
        goto LAB49;

LAB50:    memcpy(t74, t104, 8);

LAB51:    t331 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t331, t74, 0, 0, 32, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 956U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t52, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB125;

LAB122:    if (t18 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t52) = 1;

LAB125:    memset(t74, 0, 8);
    t12 = (t52 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t52);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t12) != 0)
        goto LAB128;

LAB129:    t27 = (t74 + 4);
    t31 = *((unsigned int *)t74);
    t32 = *((unsigned int *)t27);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB130;

LAB131:    memcpy(t104, t74, 8);

LAB132:    memset(t28, 0, 8);
    t79 = (t104 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t113 = *((unsigned int *)t104);
    t114 = (t113 & t103);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t79) != 0)
        goto LAB146;

LAB147:    t82 = (t28 + 4);
    t116 = *((unsigned int *)t28);
    t117 = *((unsigned int *)t82);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB148;

LAB149:    t119 = *((unsigned int *)t28);
    t120 = (~(t119));
    t121 = *((unsigned int *)t82);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t82) > 0)
        goto LAB152;

LAB153:    if (*((unsigned int *)t28) > 0)
        goto LAB154;

LAB155:    memcpy(t13, t105, 8);

LAB156:    t140 = (t0 + 1736);
    xsi_vlogvar_wait_assign_value(t140, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 956U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t52, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB177;

LAB174:    if (t18 != 0)
        goto LAB176;

LAB175:    *((unsigned int *)t52) = 1;

LAB177:    memset(t74, 0, 8);
    t12 = (t52 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t52);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t12) != 0)
        goto LAB180;

LAB181:    t27 = (t74 + 4);
    t31 = *((unsigned int *)t74);
    t32 = *((unsigned int *)t27);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB182;

LAB183:    memcpy(t104, t74, 8);

LAB184:    memset(t28, 0, 8);
    t79 = (t104 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t113 = *((unsigned int *)t104);
    t114 = (t113 & t103);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t79) != 0)
        goto LAB198;

LAB199:    t82 = (t28 + 4);
    t116 = *((unsigned int *)t28);
    t117 = *((unsigned int *)t82);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB200;

LAB201:    t119 = *((unsigned int *)t28);
    t120 = (~(t119));
    t121 = *((unsigned int *)t82);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB202;

LAB203:    if (*((unsigned int *)t82) > 0)
        goto LAB204;

LAB205:    if (*((unsigned int *)t28) > 0)
        goto LAB206;

LAB207:    memcpy(t13, t91, 8);

LAB208:    t95 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t95, t13, 0, 0, 32, 0LL);
    goto LAB32;

LAB35:    t83 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t80) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t75) = 1;
    goto LAB42;

LAB41:    t90 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB42;

LAB43:    t95 = (t0 + 1920);
    t96 = (t95 + 36U);
    t97 = *((char **)t96);
    t98 = ((char*)((ng6)));
    memset(t99, 0, 8);
    xsi_vlog_unsigned_minus(t99, 32, t97, 32, t98, 32);
    goto LAB44;

LAB45:    t106 = (t0 + 1920);
    t107 = (t106 + 36U);
    t108 = *((char **)t107);
    t109 = ((char*)((ng1)));
    memset(t110, 0, 8);
    t111 = (t108 + 4);
    t112 = (t109 + 4);
    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t109);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t111);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = (t115 | t118);
    t120 = *((unsigned int *)t111);
    t121 = *((unsigned int *)t112);
    t122 = (t120 | t121);
    t123 = (~(t122));
    t124 = (t119 & t123);
    if (t124 != 0)
        goto LAB55;

LAB52:    if (t122 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t110) = 1;

LAB55:    memset(t126, 0, 8);
    t127 = (t110 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t110);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t127) != 0)
        goto LAB58;

LAB59:    t134 = (t126 + 4);
    t135 = *((unsigned int *)t126);
    t136 = *((unsigned int *)t134);
    t137 = (t135 || t136);
    if (t137 > 0)
        goto LAB60;

LAB61:    memcpy(t166, t126, 8);

LAB62:    memset(t105, 0, 8);
    t198 = (t166 + 4);
    t199 = *((unsigned int *)t198);
    t200 = (~(t199));
    t201 = *((unsigned int *)t166);
    t202 = (t201 & t200);
    t203 = (t202 & 1U);
    if (t203 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t198) != 0)
        goto LAB76;

LAB77:    t205 = (t105 + 4);
    t206 = *((unsigned int *)t105);
    t207 = *((unsigned int *)t205);
    t208 = (t206 || t207);
    if (t208 > 0)
        goto LAB78;

LAB79:    t212 = *((unsigned int *)t105);
    t213 = (~(t212));
    t214 = *((unsigned int *)t205);
    t215 = (t213 || t214);
    if (t215 > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t205) > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t105) > 0)
        goto LAB84;

LAB85:    memcpy(t104, t216, 8);

LAB86:    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t74, 32, t99, 32, t104, 32);
    goto LAB51;

LAB49:    memcpy(t74, t99, 8);
    goto LAB51;

LAB54:    t125 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t126) = 1;
    goto LAB59;

LAB58:    t133 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB59;

LAB60:    t138 = (t0 + 1736);
    t139 = (t138 + 36U);
    t140 = *((char **)t139);
    t141 = ((char*)((ng6)));
    memset(t142, 0, 8);
    t143 = (t140 + 4);
    t144 = (t141 + 4);
    t145 = *((unsigned int *)t140);
    t146 = *((unsigned int *)t141);
    t147 = (t145 ^ t146);
    t148 = *((unsigned int *)t143);
    t149 = *((unsigned int *)t144);
    t150 = (t148 ^ t149);
    t151 = (t147 | t150);
    t152 = *((unsigned int *)t143);
    t153 = *((unsigned int *)t144);
    t154 = (t152 | t153);
    t155 = (~(t154));
    t156 = (t151 & t155);
    if (t156 != 0)
        goto LAB66;

LAB63:    if (t154 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t142) = 1;

LAB66:    memset(t158, 0, 8);
    t159 = (t142 + 4);
    t160 = *((unsigned int *)t159);
    t161 = (~(t160));
    t162 = *((unsigned int *)t142);
    t163 = (t162 & t161);
    t164 = (t163 & 1U);
    if (t164 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t159) != 0)
        goto LAB69;

LAB70:    t167 = *((unsigned int *)t126);
    t168 = *((unsigned int *)t158);
    t169 = (t167 & t168);
    *((unsigned int *)t166) = t169;
    t170 = (t126 + 4);
    t171 = (t158 + 4);
    t172 = (t166 + 4);
    t173 = *((unsigned int *)t170);
    t174 = *((unsigned int *)t171);
    t175 = (t173 | t174);
    *((unsigned int *)t172) = t175;
    t176 = *((unsigned int *)t172);
    t177 = (t176 != 0);
    if (t177 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB62;

LAB65:    t157 = (t142 + 4);
    *((unsigned int *)t142) = 1;
    *((unsigned int *)t157) = 1;
    goto LAB66;

LAB67:    *((unsigned int *)t158) = 1;
    goto LAB70;

LAB69:    t165 = (t158 + 4);
    *((unsigned int *)t158) = 1;
    *((unsigned int *)t165) = 1;
    goto LAB70;

LAB71:    t178 = *((unsigned int *)t166);
    t179 = *((unsigned int *)t172);
    *((unsigned int *)t166) = (t178 | t179);
    t180 = (t126 + 4);
    t181 = (t158 + 4);
    t182 = *((unsigned int *)t126);
    t183 = (~(t182));
    t184 = *((unsigned int *)t180);
    t185 = (~(t184));
    t186 = *((unsigned int *)t158);
    t187 = (~(t186));
    t188 = *((unsigned int *)t181);
    t189 = (~(t188));
    t190 = (t183 & t185);
    t191 = (t187 & t189);
    t192 = (~(t190));
    t193 = (~(t191));
    t194 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t194 & t192);
    t195 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t195 & t193);
    t196 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t196 & t192);
    t197 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t197 & t193);
    goto LAB73;

LAB74:    *((unsigned int *)t105) = 1;
    goto LAB77;

LAB76:    t204 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t204) = 1;
    goto LAB77;

LAB78:    t209 = (t0 + 1828);
    t210 = (t209 + 36U);
    t211 = *((char **)t210);
    goto LAB79;

LAB80:    t218 = (t0 + 1920);
    t219 = (t218 + 36U);
    t220 = *((char **)t219);
    t221 = ((char*)((ng1)));
    memset(t222, 0, 8);
    t223 = (t220 + 4);
    t224 = (t221 + 4);
    t225 = *((unsigned int *)t220);
    t226 = *((unsigned int *)t221);
    t227 = (t225 ^ t226);
    t228 = *((unsigned int *)t223);
    t229 = *((unsigned int *)t224);
    t230 = (t228 ^ t229);
    t231 = (t227 | t230);
    t232 = *((unsigned int *)t223);
    t233 = *((unsigned int *)t224);
    t234 = (t232 | t233);
    t235 = (~(t234));
    t236 = (t231 & t235);
    if (t236 != 0)
        goto LAB90;

LAB87:    if (t234 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t222) = 1;

LAB90:    memset(t238, 0, 8);
    t239 = (t222 + 4);
    t240 = *((unsigned int *)t239);
    t241 = (~(t240));
    t242 = *((unsigned int *)t222);
    t243 = (t242 & t241);
    t244 = (t243 & 1U);
    if (t244 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t239) != 0)
        goto LAB93;

LAB94:    t246 = (t238 + 4);
    t247 = *((unsigned int *)t238);
    t248 = *((unsigned int *)t246);
    t249 = (t247 || t248);
    if (t249 > 0)
        goto LAB95;

LAB96:    memcpy(t278, t238, 8);

LAB97:    memset(t217, 0, 8);
    t310 = (t278 + 4);
    t311 = *((unsigned int *)t310);
    t312 = (~(t311));
    t313 = *((unsigned int *)t278);
    t314 = (t313 & t312);
    t315 = (t314 & 1U);
    if (t315 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t310) != 0)
        goto LAB111;

LAB112:    t317 = (t217 + 4);
    t318 = *((unsigned int *)t217);
    t319 = *((unsigned int *)t317);
    t320 = (t318 || t319);
    if (t320 > 0)
        goto LAB113;

LAB114:    t322 = *((unsigned int *)t217);
    t323 = (~(t322));
    t324 = *((unsigned int *)t317);
    t325 = (t323 || t324);
    if (t325 > 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t317) > 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t217) > 0)
        goto LAB119;

LAB120:    memcpy(t216, t330, 8);

LAB121:    goto LAB81;

LAB82:    xsi_vlog_unsigned_bit_combine(t104, 32, t211, 32, t216, 32);
    goto LAB86;

LAB84:    memcpy(t104, t211, 8);
    goto LAB86;

LAB89:    t237 = (t222 + 4);
    *((unsigned int *)t222) = 1;
    *((unsigned int *)t237) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t238) = 1;
    goto LAB94;

LAB93:    t245 = (t238 + 4);
    *((unsigned int *)t238) = 1;
    *((unsigned int *)t245) = 1;
    goto LAB94;

LAB95:    t250 = (t0 + 1736);
    t251 = (t250 + 36U);
    t252 = *((char **)t251);
    t253 = ((char*)((ng1)));
    memset(t254, 0, 8);
    t255 = (t252 + 4);
    t256 = (t253 + 4);
    t257 = *((unsigned int *)t252);
    t258 = *((unsigned int *)t253);
    t259 = (t257 ^ t258);
    t260 = *((unsigned int *)t255);
    t261 = *((unsigned int *)t256);
    t262 = (t260 ^ t261);
    t263 = (t259 | t262);
    t264 = *((unsigned int *)t255);
    t265 = *((unsigned int *)t256);
    t266 = (t264 | t265);
    t267 = (~(t266));
    t268 = (t263 & t267);
    if (t268 != 0)
        goto LAB101;

LAB98:    if (t266 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t254) = 1;

LAB101:    memset(t270, 0, 8);
    t271 = (t254 + 4);
    t272 = *((unsigned int *)t271);
    t273 = (~(t272));
    t274 = *((unsigned int *)t254);
    t275 = (t274 & t273);
    t276 = (t275 & 1U);
    if (t276 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t271) != 0)
        goto LAB104;

LAB105:    t279 = *((unsigned int *)t238);
    t280 = *((unsigned int *)t270);
    t281 = (t279 & t280);
    *((unsigned int *)t278) = t281;
    t282 = (t238 + 4);
    t283 = (t270 + 4);
    t284 = (t278 + 4);
    t285 = *((unsigned int *)t282);
    t286 = *((unsigned int *)t283);
    t287 = (t285 | t286);
    *((unsigned int *)t284) = t287;
    t288 = *((unsigned int *)t284);
    t289 = (t288 != 0);
    if (t289 == 1)
        goto LAB106;

LAB107:
LAB108:    goto LAB97;

LAB100:    t269 = (t254 + 4);
    *((unsigned int *)t254) = 1;
    *((unsigned int *)t269) = 1;
    goto LAB101;

LAB102:    *((unsigned int *)t270) = 1;
    goto LAB105;

LAB104:    t277 = (t270 + 4);
    *((unsigned int *)t270) = 1;
    *((unsigned int *)t277) = 1;
    goto LAB105;

LAB106:    t290 = *((unsigned int *)t278);
    t291 = *((unsigned int *)t284);
    *((unsigned int *)t278) = (t290 | t291);
    t292 = (t238 + 4);
    t293 = (t270 + 4);
    t294 = *((unsigned int *)t238);
    t295 = (~(t294));
    t296 = *((unsigned int *)t292);
    t297 = (~(t296));
    t298 = *((unsigned int *)t270);
    t299 = (~(t298));
    t300 = *((unsigned int *)t293);
    t301 = (~(t300));
    t302 = (t295 & t297);
    t303 = (t299 & t301);
    t304 = (~(t302));
    t305 = (~(t303));
    t306 = *((unsigned int *)t284);
    *((unsigned int *)t284) = (t306 & t304);
    t307 = *((unsigned int *)t284);
    *((unsigned int *)t284) = (t307 & t305);
    t308 = *((unsigned int *)t278);
    *((unsigned int *)t278) = (t308 & t304);
    t309 = *((unsigned int *)t278);
    *((unsigned int *)t278) = (t309 & t305);
    goto LAB108;

LAB109:    *((unsigned int *)t217) = 1;
    goto LAB112;

LAB111:    t316 = (t217 + 4);
    *((unsigned int *)t217) = 1;
    *((unsigned int *)t316) = 1;
    goto LAB112;

LAB113:    t321 = ((char*)((ng1)));
    goto LAB114;

LAB115:    t326 = (t0 + 1920);
    t327 = (t326 + 36U);
    t328 = *((char **)t327);
    t329 = ((char*)((ng6)));
    memset(t330, 0, 8);
    xsi_vlog_unsigned_minus(t330, 32, t328, 32, t329, 32);
    goto LAB116;

LAB117:    xsi_vlog_unsigned_bit_combine(t216, 32, t321, 32, t330, 32);
    goto LAB121;

LAB119:    memcpy(t216, t321, 8);
    goto LAB121;

LAB124:    t11 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB125;

LAB126:    *((unsigned int *)t74) = 1;
    goto LAB129;

LAB128:    t26 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB129;

LAB130:    t29 = (t0 + 864U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t30, 32, t29, 32);
    t43 = ((char*)((ng1)));
    memset(t80, 0, 8);
    t44 = (t75 + 4);
    t50 = (t43 + 4);
    t34 = *((unsigned int *)t75);
    t35 = *((unsigned int *)t43);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t44);
    t38 = *((unsigned int *)t50);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t44);
    t42 = *((unsigned int *)t50);
    t45 = (t41 | t42);
    t46 = (~(t45));
    t47 = (t40 & t46);
    if (t47 != 0)
        goto LAB136;

LAB133:    if (t45 != 0)
        goto LAB135;

LAB134:    *((unsigned int *)t80) = 1;

LAB136:    memset(t99, 0, 8);
    t53 = (t80 + 4);
    t48 = *((unsigned int *)t53);
    t49 = (~(t48));
    t55 = *((unsigned int *)t80);
    t56 = (t55 & t49);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t53) != 0)
        goto LAB139;

LAB140:    t58 = *((unsigned int *)t74);
    t59 = *((unsigned int *)t99);
    t60 = (t58 & t59);
    *((unsigned int *)t104) = t60;
    t67 = (t74 + 4);
    t68 = (t99 + 4);
    t76 = (t104 + 4);
    t61 = *((unsigned int *)t67);
    t62 = *((unsigned int *)t68);
    t63 = (t61 | t62);
    *((unsigned int *)t76) = t63;
    t64 = *((unsigned int *)t76);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB141;

LAB142:
LAB143:    goto LAB132;

LAB135:    t51 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB136;

LAB137:    *((unsigned int *)t99) = 1;
    goto LAB140;

LAB139:    t54 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB140;

LAB141:    t66 = *((unsigned int *)t104);
    t69 = *((unsigned int *)t76);
    *((unsigned int *)t104) = (t66 | t69);
    t77 = (t74 + 4);
    t78 = (t99 + 4);
    t70 = *((unsigned int *)t74);
    t71 = (~(t70));
    t72 = *((unsigned int *)t77);
    t73 = (~(t72));
    t85 = *((unsigned int *)t99);
    t86 = (~(t85));
    t87 = *((unsigned int *)t78);
    t88 = (~(t87));
    t190 = (t71 & t73);
    t191 = (t86 & t88);
    t89 = (~(t190));
    t92 = (~(t191));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t89);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    t100 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t100 & t89);
    t101 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t101 & t92);
    goto LAB143;

LAB144:    *((unsigned int *)t28) = 1;
    goto LAB147;

LAB146:    t81 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB147;

LAB148:    t83 = (t0 + 1048U);
    t84 = *((char **)t83);
    goto LAB149;

LAB150:    t83 = (t0 + 1920);
    t90 = (t83 + 36U);
    t91 = *((char **)t90);
    t95 = ((char*)((ng6)));
    memset(t126, 0, 8);
    t96 = (t91 + 4);
    t97 = (t95 + 4);
    t123 = *((unsigned int *)t91);
    t124 = *((unsigned int *)t95);
    t128 = (t123 ^ t124);
    t129 = *((unsigned int *)t96);
    t130 = *((unsigned int *)t97);
    t131 = (t129 ^ t130);
    t132 = (t128 | t131);
    t135 = *((unsigned int *)t96);
    t136 = *((unsigned int *)t97);
    t137 = (t135 | t136);
    t145 = (~(t137));
    t146 = (t132 & t145);
    if (t146 != 0)
        goto LAB160;

LAB157:    if (t137 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t126) = 1;

LAB160:    memset(t110, 0, 8);
    t106 = (t126 + 4);
    t147 = *((unsigned int *)t106);
    t148 = (~(t147));
    t149 = *((unsigned int *)t126);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t106) != 0)
        goto LAB163;

LAB164:    t108 = (t110 + 4);
    t152 = *((unsigned int *)t110);
    t153 = *((unsigned int *)t108);
    t154 = (t152 || t153);
    if (t154 > 0)
        goto LAB165;

LAB166:    t164 = *((unsigned int *)t110);
    t167 = (~(t164));
    t168 = *((unsigned int *)t108);
    t169 = (t167 || t168);
    if (t169 > 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t108) > 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t110) > 0)
        goto LAB171;

LAB172:    memcpy(t105, t139, 8);

LAB173:    goto LAB151;

LAB152:    xsi_vlog_unsigned_bit_combine(t13, 32, t84, 32, t105, 32);
    goto LAB156;

LAB154:    memcpy(t13, t84, 8);
    goto LAB156;

LAB159:    t98 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB160;

LAB161:    *((unsigned int *)t110) = 1;
    goto LAB164;

LAB163:    t107 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB164;

LAB165:    t109 = ((char*)((ng5)));
    t111 = (t0 + 1736);
    t112 = (t111 + 36U);
    t125 = *((char **)t112);
    memset(t158, 0, 8);
    t127 = (t158 + 4);
    t133 = (t125 + 4);
    t155 = *((unsigned int *)t125);
    t156 = (t155 >> 1);
    *((unsigned int *)t158) = t156;
    t160 = *((unsigned int *)t133);
    t161 = (t160 >> 1);
    *((unsigned int *)t127) = t161;
    t162 = *((unsigned int *)t158);
    *((unsigned int *)t158) = (t162 & 2147483647U);
    t163 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t163 & 2147483647U);
    xsi_vlogtype_concat(t142, 32, 32, 2U, t158, 31, t109, 1);
    goto LAB166;

LAB167:    t134 = (t0 + 1736);
    t138 = (t134 + 36U);
    t139 = *((char **)t138);
    goto LAB168;

LAB169:    xsi_vlog_unsigned_bit_combine(t105, 32, t142, 32, t139, 32);
    goto LAB173;

LAB171:    memcpy(t105, t142, 8);
    goto LAB173;

LAB176:    t11 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB177;

LAB178:    *((unsigned int *)t74) = 1;
    goto LAB181;

LAB180:    t26 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB181;

LAB182:    t29 = (t0 + 864U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t30, 32, t29, 32);
    t43 = ((char*)((ng3)));
    memset(t80, 0, 8);
    t44 = (t75 + 4);
    t50 = (t43 + 4);
    t34 = *((unsigned int *)t75);
    t35 = *((unsigned int *)t43);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t44);
    t38 = *((unsigned int *)t50);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t44);
    t42 = *((unsigned int *)t50);
    t45 = (t41 | t42);
    t46 = (~(t45));
    t47 = (t40 & t46);
    if (t47 != 0)
        goto LAB188;

LAB185:    if (t45 != 0)
        goto LAB187;

LAB186:    *((unsigned int *)t80) = 1;

LAB188:    memset(t99, 0, 8);
    t53 = (t80 + 4);
    t48 = *((unsigned int *)t53);
    t49 = (~(t48));
    t55 = *((unsigned int *)t80);
    t56 = (t55 & t49);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB189;

LAB190:    if (*((unsigned int *)t53) != 0)
        goto LAB191;

LAB192:    t58 = *((unsigned int *)t74);
    t59 = *((unsigned int *)t99);
    t60 = (t58 & t59);
    *((unsigned int *)t104) = t60;
    t67 = (t74 + 4);
    t68 = (t99 + 4);
    t76 = (t104 + 4);
    t61 = *((unsigned int *)t67);
    t62 = *((unsigned int *)t68);
    t63 = (t61 | t62);
    *((unsigned int *)t76) = t63;
    t64 = *((unsigned int *)t76);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB193;

LAB194:
LAB195:    goto LAB184;

LAB187:    t51 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB188;

LAB189:    *((unsigned int *)t99) = 1;
    goto LAB192;

LAB191:    t54 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB192;

LAB193:    t66 = *((unsigned int *)t104);
    t69 = *((unsigned int *)t76);
    *((unsigned int *)t104) = (t66 | t69);
    t77 = (t74 + 4);
    t78 = (t99 + 4);
    t70 = *((unsigned int *)t74);
    t71 = (~(t70));
    t72 = *((unsigned int *)t77);
    t73 = (~(t72));
    t85 = *((unsigned int *)t99);
    t86 = (~(t85));
    t87 = *((unsigned int *)t78);
    t88 = (~(t87));
    t190 = (t71 & t73);
    t191 = (t86 & t88);
    t89 = (~(t190));
    t92 = (~(t191));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t89);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    t100 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t100 & t89);
    t101 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t101 & t92);
    goto LAB195;

LAB196:    *((unsigned int *)t28) = 1;
    goto LAB199;

LAB198:    t81 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB199;

LAB200:    t83 = (t0 + 1048U);
    t84 = *((char **)t83);
    goto LAB201;

LAB202:    t83 = (t0 + 1828);
    t90 = (t83 + 36U);
    t91 = *((char **)t90);
    goto LAB203;

LAB204:    xsi_vlog_unsigned_bit_combine(t13, 32, t84, 32, t91, 32);
    goto LAB208;

LAB206:    memcpy(t13, t84, 8);
    goto LAB208;

LAB211:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB212;

LAB213:    xsi_set_current_line(62, ng0);

LAB216:    xsi_set_current_line(63, ng0);
    t26 = (t0 + 1920);
    t27 = (t26 + 36U);
    t29 = *((char **)t27);
    t30 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 956U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t52, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB220;

LAB217:    if (t18 != 0)
        goto LAB219;

LAB218:    *((unsigned int *)t52) = 1;

LAB220:    memset(t74, 0, 8);
    t12 = (t52 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t52);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB221;

LAB222:    if (*((unsigned int *)t12) != 0)
        goto LAB223;

LAB224:    t27 = (t74 + 4);
    t31 = *((unsigned int *)t74);
    t32 = *((unsigned int *)t27);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB225;

LAB226:    memcpy(t104, t74, 8);

LAB227:    memset(t28, 0, 8);
    t79 = (t104 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t113 = *((unsigned int *)t104);
    t114 = (t113 & t103);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB239;

LAB240:    if (*((unsigned int *)t79) != 0)
        goto LAB241;

LAB242:    t82 = (t28 + 4);
    t116 = *((unsigned int *)t28);
    t117 = *((unsigned int *)t82);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB243;

LAB244:    t119 = *((unsigned int *)t28);
    t120 = (~(t119));
    t121 = *((unsigned int *)t82);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB245;

LAB246:    if (*((unsigned int *)t82) > 0)
        goto LAB247;

LAB248:    if (*((unsigned int *)t28) > 0)
        goto LAB249;

LAB250:    memcpy(t13, t91, 8);

LAB251:    t95 = (t0 + 1736);
    xsi_vlogvar_wait_assign_value(t95, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 956U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t52, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB255;

LAB252:    if (t18 != 0)
        goto LAB254;

LAB253:    *((unsigned int *)t52) = 1;

LAB255:    memset(t74, 0, 8);
    t12 = (t52 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t52);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB256;

LAB257:    if (*((unsigned int *)t12) != 0)
        goto LAB258;

LAB259:    t27 = (t74 + 4);
    t31 = *((unsigned int *)t74);
    t32 = *((unsigned int *)t27);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB260;

LAB261:    memcpy(t104, t74, 8);

LAB262:    memset(t28, 0, 8);
    t79 = (t104 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t113 = *((unsigned int *)t104);
    t114 = (t113 & t103);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB274;

LAB275:    if (*((unsigned int *)t79) != 0)
        goto LAB276;

LAB277:    t82 = (t28 + 4);
    t116 = *((unsigned int *)t28);
    t117 = *((unsigned int *)t82);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB278;

LAB279:    t119 = *((unsigned int *)t28);
    t120 = (~(t119));
    t121 = *((unsigned int *)t82);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB280;

LAB281:    if (*((unsigned int *)t82) > 0)
        goto LAB282;

LAB283:    if (*((unsigned int *)t28) > 0)
        goto LAB284;

LAB285:    memcpy(t13, t91, 8);

LAB286:    t95 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t95, t13, 0, 0, 32, 0LL);
    goto LAB215;

LAB219:    t11 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB220;

LAB221:    *((unsigned int *)t74) = 1;
    goto LAB224;

LAB223:    t26 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB224;

LAB225:    t29 = (t0 + 864U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t30, 32, t29, 32);
    t43 = ((char*)((ng1)));
    memset(t80, 0, 8);
    t44 = (t75 + 4);
    t50 = (t43 + 4);
    t34 = *((unsigned int *)t75);
    t35 = *((unsigned int *)t43);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t44);
    t38 = *((unsigned int *)t50);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t44);
    t42 = *((unsigned int *)t50);
    t45 = (t41 | t42);
    t46 = (~(t45));
    t47 = (t40 & t46);
    if (t47 != 0)
        goto LAB231;

LAB228:    if (t45 != 0)
        goto LAB230;

LAB229:    *((unsigned int *)t80) = 1;

LAB231:    memset(t99, 0, 8);
    t53 = (t80 + 4);
    t48 = *((unsigned int *)t53);
    t49 = (~(t48));
    t55 = *((unsigned int *)t80);
    t56 = (t55 & t49);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB232;

LAB233:    if (*((unsigned int *)t53) != 0)
        goto LAB234;

LAB235:    t58 = *((unsigned int *)t74);
    t59 = *((unsigned int *)t99);
    t60 = (t58 & t59);
    *((unsigned int *)t104) = t60;
    t67 = (t74 + 4);
    t68 = (t99 + 4);
    t76 = (t104 + 4);
    t61 = *((unsigned int *)t67);
    t62 = *((unsigned int *)t68);
    t63 = (t61 | t62);
    *((unsigned int *)t76) = t63;
    t64 = *((unsigned int *)t76);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB236;

LAB237:
LAB238:    goto LAB227;

LAB230:    t51 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB231;

LAB232:    *((unsigned int *)t99) = 1;
    goto LAB235;

LAB234:    t54 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB235;

LAB236:    t66 = *((unsigned int *)t104);
    t69 = *((unsigned int *)t76);
    *((unsigned int *)t104) = (t66 | t69);
    t77 = (t74 + 4);
    t78 = (t99 + 4);
    t70 = *((unsigned int *)t74);
    t71 = (~(t70));
    t72 = *((unsigned int *)t77);
    t73 = (~(t72));
    t85 = *((unsigned int *)t99);
    t86 = (~(t85));
    t87 = *((unsigned int *)t78);
    t88 = (~(t87));
    t190 = (t71 & t73);
    t191 = (t86 & t88);
    t89 = (~(t190));
    t92 = (~(t191));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t89);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    t100 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t100 & t89);
    t101 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t101 & t92);
    goto LAB238;

LAB239:    *((unsigned int *)t28) = 1;
    goto LAB242;

LAB241:    t81 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB242;

LAB243:    t83 = (t0 + 1048U);
    t84 = *((char **)t83);
    goto LAB244;

LAB245:    t83 = (t0 + 1736);
    t90 = (t83 + 36U);
    t91 = *((char **)t90);
    goto LAB246;

LAB247:    xsi_vlog_unsigned_bit_combine(t13, 32, t84, 32, t91, 32);
    goto LAB251;

LAB249:    memcpy(t13, t84, 8);
    goto LAB251;

LAB254:    t11 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB255;

LAB256:    *((unsigned int *)t74) = 1;
    goto LAB259;

LAB258:    t26 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB259;

LAB260:    t29 = (t0 + 864U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t30, 32, t29, 32);
    t43 = ((char*)((ng3)));
    memset(t80, 0, 8);
    t44 = (t75 + 4);
    t50 = (t43 + 4);
    t34 = *((unsigned int *)t75);
    t35 = *((unsigned int *)t43);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t44);
    t38 = *((unsigned int *)t50);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t44);
    t42 = *((unsigned int *)t50);
    t45 = (t41 | t42);
    t46 = (~(t45));
    t47 = (t40 & t46);
    if (t47 != 0)
        goto LAB266;

LAB263:    if (t45 != 0)
        goto LAB265;

LAB264:    *((unsigned int *)t80) = 1;

LAB266:    memset(t99, 0, 8);
    t53 = (t80 + 4);
    t48 = *((unsigned int *)t53);
    t49 = (~(t48));
    t55 = *((unsigned int *)t80);
    t56 = (t55 & t49);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB267;

LAB268:    if (*((unsigned int *)t53) != 0)
        goto LAB269;

LAB270:    t58 = *((unsigned int *)t74);
    t59 = *((unsigned int *)t99);
    t60 = (t58 & t59);
    *((unsigned int *)t104) = t60;
    t67 = (t74 + 4);
    t68 = (t99 + 4);
    t76 = (t104 + 4);
    t61 = *((unsigned int *)t67);
    t62 = *((unsigned int *)t68);
    t63 = (t61 | t62);
    *((unsigned int *)t76) = t63;
    t64 = *((unsigned int *)t76);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB271;

LAB272:
LAB273:    goto LAB262;

LAB265:    t51 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB266;

LAB267:    *((unsigned int *)t99) = 1;
    goto LAB270;

LAB269:    t54 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB270;

LAB271:    t66 = *((unsigned int *)t104);
    t69 = *((unsigned int *)t76);
    *((unsigned int *)t104) = (t66 | t69);
    t77 = (t74 + 4);
    t78 = (t99 + 4);
    t70 = *((unsigned int *)t74);
    t71 = (~(t70));
    t72 = *((unsigned int *)t77);
    t73 = (~(t72));
    t85 = *((unsigned int *)t99);
    t86 = (~(t85));
    t87 = *((unsigned int *)t78);
    t88 = (~(t87));
    t190 = (t71 & t73);
    t191 = (t86 & t88);
    t89 = (~(t190));
    t92 = (~(t191));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t89);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    t100 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t100 & t89);
    t101 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t101 & t92);
    goto LAB273;

LAB274:    *((unsigned int *)t28) = 1;
    goto LAB277;

LAB276:    t81 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB277;

LAB278:    t83 = (t0 + 1048U);
    t84 = *((char **)t83);
    goto LAB279;

LAB280:    t83 = (t0 + 1828);
    t90 = (t83 + 36U);
    t91 = *((char **)t90);
    goto LAB281;

LAB282:    xsi_vlog_unsigned_bit_combine(t13, 32, t84, 32, t91, 32);
    goto LAB286;

LAB284:    memcpy(t13, t84, 8);
    goto LAB286;

LAB289:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB290;

LAB291:    xsi_set_current_line(68, ng0);

LAB294:    xsi_set_current_line(69, ng0);
    t26 = (t0 + 1508U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng6)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t27);
    t32 = *((unsigned int *)t26);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB298;

LAB295:    if (t40 != 0)
        goto LAB297;

LAB296:    *((unsigned int *)t28) = 1;

LAB298:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB299;

LAB300:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1508U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB411;

LAB408:    if (t18 != 0)
        goto LAB410;

LAB409:    *((unsigned int *)t13) = 1;

LAB411:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB412;

LAB413:
LAB414:
LAB301:    goto LAB293;

LAB297:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB298;

LAB299:    xsi_set_current_line(69, ng0);

LAB302:    xsi_set_current_line(70, ng0);
    t50 = (t0 + 1920);
    t51 = (t50 + 36U);
    t53 = *((char **)t51);
    t54 = ((char*)((ng1)));
    memset(t75, 0, 8);
    t67 = (t53 + 4);
    if (*((unsigned int *)t67) != 0)
        goto LAB304;

LAB303:    t68 = (t54 + 4);
    if (*((unsigned int *)t68) != 0)
        goto LAB304;

LAB307:    if (*((unsigned int *)t53) > *((unsigned int *)t54))
        goto LAB305;

LAB306:    memset(t74, 0, 8);
    t77 = (t75 + 4);
    t55 = *((unsigned int *)t77);
    t56 = (~(t55));
    t57 = *((unsigned int *)t75);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB308;

LAB309:    if (*((unsigned int *)t77) != 0)
        goto LAB310;

LAB311:    t79 = (t74 + 4);
    t60 = *((unsigned int *)t74);
    t61 = *((unsigned int *)t79);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB312;

LAB313:    t63 = *((unsigned int *)t74);
    t64 = (~(t63));
    t65 = *((unsigned int *)t79);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB314;

LAB315:    if (*((unsigned int *)t79) > 0)
        goto LAB316;

LAB317:    if (*((unsigned int *)t74) > 0)
        goto LAB318;

LAB319:    memcpy(t52, t99, 8);

LAB320:    t138 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t138, t52, 0, 0, 32, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 956U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t52, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB341;

LAB338:    if (t18 != 0)
        goto LAB340;

LAB339:    *((unsigned int *)t52) = 1;

LAB341:    memset(t74, 0, 8);
    t12 = (t52 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t52);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB342;

LAB343:    if (*((unsigned int *)t12) != 0)
        goto LAB344;

LAB345:    t27 = (t74 + 4);
    t31 = *((unsigned int *)t74);
    t32 = *((unsigned int *)t27);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB346;

LAB347:    memcpy(t104, t74, 8);

LAB348:    memset(t28, 0, 8);
    t79 = (t104 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t113 = *((unsigned int *)t104);
    t114 = (t113 & t103);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB360;

LAB361:    if (*((unsigned int *)t79) != 0)
        goto LAB362;

LAB363:    t82 = (t28 + 4);
    t116 = *((unsigned int *)t28);
    t117 = *((unsigned int *)t82);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB364;

LAB365:    t119 = *((unsigned int *)t28);
    t120 = (~(t119));
    t121 = *((unsigned int *)t82);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB366;

LAB367:    if (*((unsigned int *)t82) > 0)
        goto LAB368;

LAB369:    if (*((unsigned int *)t28) > 0)
        goto LAB370;

LAB371:    memcpy(t13, t91, 8);

LAB372:    t95 = (t0 + 1736);
    xsi_vlogvar_wait_assign_value(t95, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 956U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t52, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB376;

LAB373:    if (t18 != 0)
        goto LAB375;

LAB374:    *((unsigned int *)t52) = 1;

LAB376:    memset(t74, 0, 8);
    t12 = (t52 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t52);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB377;

LAB378:    if (*((unsigned int *)t12) != 0)
        goto LAB379;

LAB380:    t27 = (t74 + 4);
    t31 = *((unsigned int *)t74);
    t32 = *((unsigned int *)t27);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB381;

LAB382:    memcpy(t104, t74, 8);

LAB383:    memset(t28, 0, 8);
    t79 = (t104 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t113 = *((unsigned int *)t104);
    t114 = (t113 & t103);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB395;

LAB396:    if (*((unsigned int *)t79) != 0)
        goto LAB397;

LAB398:    t82 = (t28 + 4);
    t116 = *((unsigned int *)t28);
    t117 = *((unsigned int *)t82);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB399;

LAB400:    t119 = *((unsigned int *)t28);
    t120 = (~(t119));
    t121 = *((unsigned int *)t82);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB401;

LAB402:    if (*((unsigned int *)t82) > 0)
        goto LAB403;

LAB404:    if (*((unsigned int *)t28) > 0)
        goto LAB405;

LAB406:    memcpy(t13, t91, 8);

LAB407:    t95 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t95, t13, 0, 0, 32, 0LL);
    goto LAB301;

LAB304:    t76 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB306;

LAB305:    *((unsigned int *)t75) = 1;
    goto LAB306;

LAB308:    *((unsigned int *)t74) = 1;
    goto LAB311;

LAB310:    t78 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB311;

LAB312:    t81 = (t0 + 1920);
    t82 = (t81 + 36U);
    t83 = *((char **)t82);
    t84 = ((char*)((ng6)));
    memset(t80, 0, 8);
    xsi_vlog_unsigned_minus(t80, 32, t83, 32, t84, 32);
    goto LAB313;

LAB314:    t90 = (t0 + 1920);
    t91 = (t90 + 36U);
    t95 = *((char **)t91);
    t96 = ((char*)((ng1)));
    memset(t105, 0, 8);
    t97 = (t95 + 4);
    t98 = (t96 + 4);
    t69 = *((unsigned int *)t95);
    t70 = *((unsigned int *)t96);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t97);
    t73 = *((unsigned int *)t98);
    t85 = (t72 ^ t73);
    t86 = (t71 | t85);
    t87 = *((unsigned int *)t97);
    t88 = *((unsigned int *)t98);
    t89 = (t87 | t88);
    t92 = (~(t89));
    t93 = (t86 & t92);
    if (t93 != 0)
        goto LAB324;

LAB321:    if (t89 != 0)
        goto LAB323;

LAB322:    *((unsigned int *)t105) = 1;

LAB324:    memset(t104, 0, 8);
    t107 = (t105 + 4);
    t94 = *((unsigned int *)t107);
    t100 = (~(t94));
    t101 = *((unsigned int *)t105);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB325;

LAB326:    if (*((unsigned int *)t107) != 0)
        goto LAB327;

LAB328:    t109 = (t104 + 4);
    t113 = *((unsigned int *)t104);
    t114 = *((unsigned int *)t109);
    t115 = (t113 || t114);
    if (t115 > 0)
        goto LAB329;

LAB330:    t116 = *((unsigned int *)t104);
    t117 = (~(t116));
    t118 = *((unsigned int *)t109);
    t119 = (t117 || t118);
    if (t119 > 0)
        goto LAB331;

LAB332:    if (*((unsigned int *)t109) > 0)
        goto LAB333;

LAB334:    if (*((unsigned int *)t104) > 0)
        goto LAB335;

LAB336:    memcpy(t99, t134, 8);

LAB337:    goto LAB315;

LAB316:    xsi_vlog_unsigned_bit_combine(t52, 32, t80, 32, t99, 32);
    goto LAB320;

LAB318:    memcpy(t52, t80, 8);
    goto LAB320;

LAB323:    t106 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB324;

LAB325:    *((unsigned int *)t104) = 1;
    goto LAB328;

LAB327:    t108 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t108) = 1;
    goto LAB328;

LAB329:    t111 = (t0 + 1828);
    t112 = (t111 + 36U);
    t125 = *((char **)t112);
    goto LAB330;

LAB331:    t127 = (t0 + 1920);
    t133 = (t127 + 36U);
    t134 = *((char **)t133);
    goto LAB332;

LAB333:    xsi_vlog_unsigned_bit_combine(t99, 32, t125, 32, t134, 32);
    goto LAB337;

LAB335:    memcpy(t99, t125, 8);
    goto LAB337;

LAB340:    t11 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB341;

LAB342:    *((unsigned int *)t74) = 1;
    goto LAB345;

LAB344:    t26 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB345;

LAB346:    t29 = (t0 + 864U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t30, 32, t29, 32);
    t43 = ((char*)((ng1)));
    memset(t80, 0, 8);
    t44 = (t75 + 4);
    t50 = (t43 + 4);
    t34 = *((unsigned int *)t75);
    t35 = *((unsigned int *)t43);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t44);
    t38 = *((unsigned int *)t50);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t44);
    t42 = *((unsigned int *)t50);
    t45 = (t41 | t42);
    t46 = (~(t45));
    t47 = (t40 & t46);
    if (t47 != 0)
        goto LAB352;

LAB349:    if (t45 != 0)
        goto LAB351;

LAB350:    *((unsigned int *)t80) = 1;

LAB352:    memset(t99, 0, 8);
    t53 = (t80 + 4);
    t48 = *((unsigned int *)t53);
    t49 = (~(t48));
    t55 = *((unsigned int *)t80);
    t56 = (t55 & t49);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB353;

LAB354:    if (*((unsigned int *)t53) != 0)
        goto LAB355;

LAB356:    t58 = *((unsigned int *)t74);
    t59 = *((unsigned int *)t99);
    t60 = (t58 & t59);
    *((unsigned int *)t104) = t60;
    t67 = (t74 + 4);
    t68 = (t99 + 4);
    t76 = (t104 + 4);
    t61 = *((unsigned int *)t67);
    t62 = *((unsigned int *)t68);
    t63 = (t61 | t62);
    *((unsigned int *)t76) = t63;
    t64 = *((unsigned int *)t76);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB357;

LAB358:
LAB359:    goto LAB348;

LAB351:    t51 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB352;

LAB353:    *((unsigned int *)t99) = 1;
    goto LAB356;

LAB355:    t54 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB356;

LAB357:    t66 = *((unsigned int *)t104);
    t69 = *((unsigned int *)t76);
    *((unsigned int *)t104) = (t66 | t69);
    t77 = (t74 + 4);
    t78 = (t99 + 4);
    t70 = *((unsigned int *)t74);
    t71 = (~(t70));
    t72 = *((unsigned int *)t77);
    t73 = (~(t72));
    t85 = *((unsigned int *)t99);
    t86 = (~(t85));
    t87 = *((unsigned int *)t78);
    t88 = (~(t87));
    t190 = (t71 & t73);
    t191 = (t86 & t88);
    t89 = (~(t190));
    t92 = (~(t191));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t89);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    t100 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t100 & t89);
    t101 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t101 & t92);
    goto LAB359;

LAB360:    *((unsigned int *)t28) = 1;
    goto LAB363;

LAB362:    t81 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB363;

LAB364:    t83 = (t0 + 1048U);
    t84 = *((char **)t83);
    goto LAB365;

LAB366:    t83 = (t0 + 1736);
    t90 = (t83 + 36U);
    t91 = *((char **)t90);
    goto LAB367;

LAB368:    xsi_vlog_unsigned_bit_combine(t13, 32, t84, 32, t91, 32);
    goto LAB372;

LAB370:    memcpy(t13, t84, 8);
    goto LAB372;

LAB375:    t11 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB376;

LAB377:    *((unsigned int *)t74) = 1;
    goto LAB380;

LAB379:    t26 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB380;

LAB381:    t29 = (t0 + 864U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t30, 32, t29, 32);
    t43 = ((char*)((ng3)));
    memset(t80, 0, 8);
    t44 = (t75 + 4);
    t50 = (t43 + 4);
    t34 = *((unsigned int *)t75);
    t35 = *((unsigned int *)t43);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t44);
    t38 = *((unsigned int *)t50);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t44);
    t42 = *((unsigned int *)t50);
    t45 = (t41 | t42);
    t46 = (~(t45));
    t47 = (t40 & t46);
    if (t47 != 0)
        goto LAB387;

LAB384:    if (t45 != 0)
        goto LAB386;

LAB385:    *((unsigned int *)t80) = 1;

LAB387:    memset(t99, 0, 8);
    t53 = (t80 + 4);
    t48 = *((unsigned int *)t53);
    t49 = (~(t48));
    t55 = *((unsigned int *)t80);
    t56 = (t55 & t49);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB388;

LAB389:    if (*((unsigned int *)t53) != 0)
        goto LAB390;

LAB391:    t58 = *((unsigned int *)t74);
    t59 = *((unsigned int *)t99);
    t60 = (t58 & t59);
    *((unsigned int *)t104) = t60;
    t67 = (t74 + 4);
    t68 = (t99 + 4);
    t76 = (t104 + 4);
    t61 = *((unsigned int *)t67);
    t62 = *((unsigned int *)t68);
    t63 = (t61 | t62);
    *((unsigned int *)t76) = t63;
    t64 = *((unsigned int *)t76);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB392;

LAB393:
LAB394:    goto LAB383;

LAB386:    t51 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB387;

LAB388:    *((unsigned int *)t99) = 1;
    goto LAB391;

LAB390:    t54 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB391;

LAB392:    t66 = *((unsigned int *)t104);
    t69 = *((unsigned int *)t76);
    *((unsigned int *)t104) = (t66 | t69);
    t77 = (t74 + 4);
    t78 = (t99 + 4);
    t70 = *((unsigned int *)t74);
    t71 = (~(t70));
    t72 = *((unsigned int *)t77);
    t73 = (~(t72));
    t85 = *((unsigned int *)t99);
    t86 = (~(t85));
    t87 = *((unsigned int *)t78);
    t88 = (~(t87));
    t190 = (t71 & t73);
    t191 = (t86 & t88);
    t89 = (~(t190));
    t92 = (~(t191));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t89);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    t100 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t100 & t89);
    t101 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t101 & t92);
    goto LAB394;

LAB395:    *((unsigned int *)t28) = 1;
    goto LAB398;

LAB397:    t81 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB398;

LAB399:    t83 = (t0 + 1048U);
    t84 = *((char **)t83);
    goto LAB400;

LAB401:    t83 = (t0 + 1828);
    t90 = (t83 + 36U);
    t91 = *((char **)t90);
    goto LAB402;

LAB403:    xsi_vlog_unsigned_bit_combine(t13, 32, t84, 32, t91, 32);
    goto LAB407;

LAB405:    memcpy(t13, t84, 8);
    goto LAB407;

LAB410:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB411;

LAB412:    xsi_set_current_line(75, ng0);

LAB415:    xsi_set_current_line(76, ng0);
    t26 = (t0 + 1920);
    t27 = (t26 + 36U);
    t29 = *((char **)t27);
    t30 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 956U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t52, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB419;

LAB416:    if (t18 != 0)
        goto LAB418;

LAB417:    *((unsigned int *)t52) = 1;

LAB419:    memset(t74, 0, 8);
    t12 = (t52 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t52);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB420;

LAB421:    if (*((unsigned int *)t12) != 0)
        goto LAB422;

LAB423:    t27 = (t74 + 4);
    t31 = *((unsigned int *)t74);
    t32 = *((unsigned int *)t27);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB424;

LAB425:    memcpy(t104, t74, 8);

LAB426:    memset(t28, 0, 8);
    t79 = (t104 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t113 = *((unsigned int *)t104);
    t114 = (t113 & t103);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB438;

LAB439:    if (*((unsigned int *)t79) != 0)
        goto LAB440;

LAB441:    t82 = (t28 + 4);
    t116 = *((unsigned int *)t28);
    t117 = *((unsigned int *)t82);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB442;

LAB443:    t119 = *((unsigned int *)t28);
    t120 = (~(t119));
    t121 = *((unsigned int *)t82);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB444;

LAB445:    if (*((unsigned int *)t82) > 0)
        goto LAB446;

LAB447:    if (*((unsigned int *)t28) > 0)
        goto LAB448;

LAB449:    memcpy(t13, t91, 8);

LAB450:    t95 = (t0 + 1736);
    xsi_vlogvar_wait_assign_value(t95, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 956U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t52, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB454;

LAB451:    if (t18 != 0)
        goto LAB453;

LAB452:    *((unsigned int *)t52) = 1;

LAB454:    memset(t74, 0, 8);
    t12 = (t52 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t52);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB455;

LAB456:    if (*((unsigned int *)t12) != 0)
        goto LAB457;

LAB458:    t27 = (t74 + 4);
    t31 = *((unsigned int *)t74);
    t32 = *((unsigned int *)t27);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB459;

LAB460:    memcpy(t104, t74, 8);

LAB461:    memset(t28, 0, 8);
    t79 = (t104 + 4);
    t102 = *((unsigned int *)t79);
    t103 = (~(t102));
    t113 = *((unsigned int *)t104);
    t114 = (t113 & t103);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB473;

LAB474:    if (*((unsigned int *)t79) != 0)
        goto LAB475;

LAB476:    t82 = (t28 + 4);
    t116 = *((unsigned int *)t28);
    t117 = *((unsigned int *)t82);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB477;

LAB478:    t119 = *((unsigned int *)t28);
    t120 = (~(t119));
    t121 = *((unsigned int *)t82);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB479;

LAB480:    if (*((unsigned int *)t82) > 0)
        goto LAB481;

LAB482:    if (*((unsigned int *)t28) > 0)
        goto LAB483;

LAB484:    memcpy(t13, t91, 8);

LAB485:    t95 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t95, t13, 0, 0, 32, 0LL);
    goto LAB414;

LAB418:    t11 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB419;

LAB420:    *((unsigned int *)t74) = 1;
    goto LAB423;

LAB422:    t26 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB423;

LAB424:    t29 = (t0 + 864U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t30, 32, t29, 32);
    t43 = ((char*)((ng1)));
    memset(t80, 0, 8);
    t44 = (t75 + 4);
    t50 = (t43 + 4);
    t34 = *((unsigned int *)t75);
    t35 = *((unsigned int *)t43);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t44);
    t38 = *((unsigned int *)t50);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t44);
    t42 = *((unsigned int *)t50);
    t45 = (t41 | t42);
    t46 = (~(t45));
    t47 = (t40 & t46);
    if (t47 != 0)
        goto LAB430;

LAB427:    if (t45 != 0)
        goto LAB429;

LAB428:    *((unsigned int *)t80) = 1;

LAB430:    memset(t99, 0, 8);
    t53 = (t80 + 4);
    t48 = *((unsigned int *)t53);
    t49 = (~(t48));
    t55 = *((unsigned int *)t80);
    t56 = (t55 & t49);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB431;

LAB432:    if (*((unsigned int *)t53) != 0)
        goto LAB433;

LAB434:    t58 = *((unsigned int *)t74);
    t59 = *((unsigned int *)t99);
    t60 = (t58 & t59);
    *((unsigned int *)t104) = t60;
    t67 = (t74 + 4);
    t68 = (t99 + 4);
    t76 = (t104 + 4);
    t61 = *((unsigned int *)t67);
    t62 = *((unsigned int *)t68);
    t63 = (t61 | t62);
    *((unsigned int *)t76) = t63;
    t64 = *((unsigned int *)t76);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB435;

LAB436:
LAB437:    goto LAB426;

LAB429:    t51 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB430;

LAB431:    *((unsigned int *)t99) = 1;
    goto LAB434;

LAB433:    t54 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB434;

LAB435:    t66 = *((unsigned int *)t104);
    t69 = *((unsigned int *)t76);
    *((unsigned int *)t104) = (t66 | t69);
    t77 = (t74 + 4);
    t78 = (t99 + 4);
    t70 = *((unsigned int *)t74);
    t71 = (~(t70));
    t72 = *((unsigned int *)t77);
    t73 = (~(t72));
    t85 = *((unsigned int *)t99);
    t86 = (~(t85));
    t87 = *((unsigned int *)t78);
    t88 = (~(t87));
    t190 = (t71 & t73);
    t191 = (t86 & t88);
    t89 = (~(t190));
    t92 = (~(t191));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t89);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    t100 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t100 & t89);
    t101 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t101 & t92);
    goto LAB437;

LAB438:    *((unsigned int *)t28) = 1;
    goto LAB441;

LAB440:    t81 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB441;

LAB442:    t83 = (t0 + 1048U);
    t84 = *((char **)t83);
    goto LAB443;

LAB444:    t83 = (t0 + 1736);
    t90 = (t83 + 36U);
    t91 = *((char **)t90);
    goto LAB445;

LAB446:    xsi_vlog_unsigned_bit_combine(t13, 32, t84, 32, t91, 32);
    goto LAB450;

LAB448:    memcpy(t13, t84, 8);
    goto LAB450;

LAB453:    t11 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB454;

LAB455:    *((unsigned int *)t74) = 1;
    goto LAB458;

LAB457:    t26 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB458;

LAB459:    t29 = (t0 + 864U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t75, 0, 8);
    xsi_vlog_unsigned_minus(t75, 32, t30, 32, t29, 32);
    t43 = ((char*)((ng3)));
    memset(t80, 0, 8);
    t44 = (t75 + 4);
    t50 = (t43 + 4);
    t34 = *((unsigned int *)t75);
    t35 = *((unsigned int *)t43);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t44);
    t38 = *((unsigned int *)t50);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t44);
    t42 = *((unsigned int *)t50);
    t45 = (t41 | t42);
    t46 = (~(t45));
    t47 = (t40 & t46);
    if (t47 != 0)
        goto LAB465;

LAB462:    if (t45 != 0)
        goto LAB464;

LAB463:    *((unsigned int *)t80) = 1;

LAB465:    memset(t99, 0, 8);
    t53 = (t80 + 4);
    t48 = *((unsigned int *)t53);
    t49 = (~(t48));
    t55 = *((unsigned int *)t80);
    t56 = (t55 & t49);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB466;

LAB467:    if (*((unsigned int *)t53) != 0)
        goto LAB468;

LAB469:    t58 = *((unsigned int *)t74);
    t59 = *((unsigned int *)t99);
    t60 = (t58 & t59);
    *((unsigned int *)t104) = t60;
    t67 = (t74 + 4);
    t68 = (t99 + 4);
    t76 = (t104 + 4);
    t61 = *((unsigned int *)t67);
    t62 = *((unsigned int *)t68);
    t63 = (t61 | t62);
    *((unsigned int *)t76) = t63;
    t64 = *((unsigned int *)t76);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB470;

LAB471:
LAB472:    goto LAB461;

LAB464:    t51 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB465;

LAB466:    *((unsigned int *)t99) = 1;
    goto LAB469;

LAB468:    t54 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB469;

LAB470:    t66 = *((unsigned int *)t104);
    t69 = *((unsigned int *)t76);
    *((unsigned int *)t104) = (t66 | t69);
    t77 = (t74 + 4);
    t78 = (t99 + 4);
    t70 = *((unsigned int *)t74);
    t71 = (~(t70));
    t72 = *((unsigned int *)t77);
    t73 = (~(t72));
    t85 = *((unsigned int *)t99);
    t86 = (~(t85));
    t87 = *((unsigned int *)t78);
    t88 = (~(t87));
    t190 = (t71 & t73);
    t191 = (t86 & t88);
    t89 = (~(t190));
    t92 = (~(t191));
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t89);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t92);
    t100 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t100 & t89);
    t101 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t101 & t92);
    goto LAB472;

LAB473:    *((unsigned int *)t28) = 1;
    goto LAB476;

LAB475:    t81 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB476;

LAB477:    t83 = (t0 + 1048U);
    t84 = *((char **)t83);
    goto LAB478;

LAB479:    t83 = (t0 + 1828);
    t90 = (t83 + 36U);
    t91 = *((char **)t90);
    goto LAB480;

LAB481:    xsi_vlog_unsigned_bit_combine(t13, 32, t84, 32, t91, 32);
    goto LAB485;

LAB483:    memcpy(t13, t84, 8);
    goto LAB485;

}


extern void work_m_00000000001625737241_3584215014_init()
{
	static char *pe[] = {(void *)Cont_34_0,(void *)Cont_35_1,(void *)Cont_36_2,(void *)Cont_37_3,(void *)Cont_38_4,(void *)Initial_41_5,(void *)Always_46_6};
	xsi_register_didat("work_m_00000000001625737241_3584215014", "isim/tb_isim_beh.exe.sim/work/m_00000000001625737241_3584215014.didat");
	xsi_register_executes(pe);
}
