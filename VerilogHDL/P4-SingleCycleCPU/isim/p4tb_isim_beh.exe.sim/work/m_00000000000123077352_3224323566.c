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
static const char *ng0 = "F:/ProgrammingProjects/VHDL/P4-SingleCycleCPU/IFU.v";
static int ng1[] = {4, 0};
static const char *ng2 = "code.txt";
static unsigned int ng3[] = {12288U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {14, 0};
static int ng7[] = {15, 0};
static int ng8[] = {0, 0};



static void Cont_33_0(char *t0)
{
    char t5[8];
    char t12[8];
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
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1564);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1564);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t13 = (t0 + 1656);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 2);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1023U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1023U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 10, 2);
    t24 = (t0 + 3020);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t5, 8);
    xsi_driver_vfirst_trans(t24, 0, 31);
    t29 = (t0 + 2952);
    *((int *)t29) = 1;

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3056);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 2960);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_35_2(char *t0)
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
    char *t10;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3092);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2968);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_36_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1564);
    xsi_vlogfile_readmemh(ng2, 0, t1, 0, 0, 0, 0);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_40_4(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t35[8];
    char t38[8];
    char t45[8];
    char t57[8];
    char t66[8];
    char t71[8];
    char t78[8];
    char t90[8];
    char t97[8];
    char t102[8];
    char t103[8];
    char t105[8];
    char t136[8];
    char t141[8];
    char t142[8];
    char t145[8];
    char t178[8];
    char t182[8];
    char t189[8];
    char t201[8];
    char t210[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t104;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t143;
    char *t144;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t179;
    char *t180;
    char *t181;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    char *t187;
    char *t188;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t211;
    char *t212;
    char *t213;
    char *t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t222;

LAB0:    t1 = (t0 + 2756U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2976);
    *((int *)t2) = 1;
    t3 = (t0 + 2784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
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

LAB11:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t31, 0, 8);
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
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t31) = 1;

LAB17:    memset(t30, 0, 8);
    t8 = (t31 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t31);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t8) != 0)
        goto LAB20;

LAB21:    t22 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t22);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB22;

LAB23:    t98 = *((unsigned int *)t30);
    t99 = (~(t98));
    t100 = *((unsigned int *)t22);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t22) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t30) > 0)
        goto LAB28;

LAB29:    memcpy(t6, t102, 8);

LAB30:    t222 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t222, t6, 0, 0, 32, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB20:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB22:    t28 = ((char*)((ng5)));
    t29 = (t0 + 1564);
    t36 = (t29 + 36U);
    t37 = *((char **)t36);
    t39 = (t0 + 1564);
    t40 = (t39 + 44U);
    t41 = *((char **)t40);
    t42 = (t0 + 1564);
    t43 = (t42 + 40U);
    t44 = *((char **)t43);
    t46 = (t0 + 1656);
    t47 = (t46 + 36U);
    t48 = *((char **)t47);
    memset(t45, 0, 8);
    t49 = (t45 + 4);
    t50 = (t48 + 4);
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 2);
    *((unsigned int *)t45) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 2);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t55 & 1023U);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 & 1023U);
    xsi_vlog_generic_get_array_select_value(t38, 32, t37, t41, t44, 2, 1, t45, 10, 2);
    memset(t57, 0, 8);
    t58 = (t57 + 4);
    t59 = (t38 + 4);
    t60 = *((unsigned int *)t38);
    t61 = (t60 >> 0);
    *((unsigned int *)t57) = t61;
    t62 = *((unsigned int *)t59);
    t63 = (t62 >> 0);
    *((unsigned int *)t58) = t63;
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t64 & 65535U);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 & 65535U);
    t67 = ((char*)((ng6)));
    t68 = (t0 + 1564);
    t69 = (t68 + 36U);
    t70 = *((char **)t69);
    t72 = (t0 + 1564);
    t73 = (t72 + 44U);
    t74 = *((char **)t73);
    t75 = (t0 + 1564);
    t76 = (t75 + 40U);
    t77 = *((char **)t76);
    t79 = (t0 + 1656);
    t80 = (t79 + 36U);
    t81 = *((char **)t80);
    memset(t78, 0, 8);
    t82 = (t78 + 4);
    t83 = (t81 + 4);
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 2);
    *((unsigned int *)t78) = t85;
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 2);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t88 & 1023U);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t89 & 1023U);
    xsi_vlog_generic_get_array_select_value(t71, 32, t70, t74, t77, 2, 1, t78, 10, 2);
    t91 = (t0 + 1564);
    t92 = (t91 + 44U);
    t93 = *((char **)t92);
    t94 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t90, 1, t71, t93, 2, t94, 32, 1);
    xsi_vlog_mul_concat(t66, 14, 1, t67, 1U, t90, 1);
    xsi_vlogtype_concat(t35, 32, 32, 3U, t66, 14, t57, 16, t28, 2);
    t95 = (t0 + 1244U);
    t96 = *((char **)t95);
    memset(t97, 0, 8);
    xsi_vlog_unsigned_add(t97, 32, t35, 32, t96, 32);
    goto LAB23;

LAB24:    t95 = (t0 + 600U);
    t104 = *((char **)t95);
    t95 = ((char*)((ng8)));
    memset(t105, 0, 8);
    t106 = (t104 + 4);
    t107 = (t95 + 4);
    t108 = *((unsigned int *)t104);
    t109 = *((unsigned int *)t95);
    t110 = (t108 ^ t109);
    t111 = *((unsigned int *)t106);
    t112 = *((unsigned int *)t107);
    t113 = (t111 ^ t112);
    t114 = (t110 | t113);
    t115 = *((unsigned int *)t106);
    t116 = *((unsigned int *)t107);
    t117 = (t115 | t116);
    t118 = (~(t117));
    t119 = (t114 & t118);
    if (t119 != 0)
        goto LAB34;

LAB31:    if (t117 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t105) = 1;

LAB34:    memset(t103, 0, 8);
    t121 = (t105 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t105);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t121) != 0)
        goto LAB37;

LAB38:    t128 = (t103 + 4);
    t129 = *((unsigned int *)t103);
    t130 = *((unsigned int *)t128);
    t131 = (t129 || t130);
    if (t131 > 0)
        goto LAB39;

LAB40:    t137 = *((unsigned int *)t103);
    t138 = (~(t137));
    t139 = *((unsigned int *)t128);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t128) > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t103) > 0)
        goto LAB45;

LAB46:    memcpy(t102, t141, 8);

LAB47:    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t6, 32, t97, 32, t102, 32);
    goto LAB30;

LAB28:    memcpy(t6, t97, 8);
    goto LAB30;

LAB33:    t120 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t103) = 1;
    goto LAB38;

LAB37:    t127 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB38;

LAB39:    t132 = (t0 + 1656);
    t133 = (t132 + 36U);
    t134 = *((char **)t133);
    t135 = ((char*)((ng1)));
    memset(t136, 0, 8);
    xsi_vlog_unsigned_add(t136, 32, t134, 32, t135, 32);
    goto LAB40;

LAB41:    t143 = (t0 + 692U);
    t144 = *((char **)t143);
    t143 = ((char*)((ng8)));
    memset(t145, 0, 8);
    t146 = (t144 + 4);
    t147 = (t143 + 4);
    t148 = *((unsigned int *)t144);
    t149 = *((unsigned int *)t143);
    t150 = (t148 ^ t149);
    t151 = *((unsigned int *)t146);
    t152 = *((unsigned int *)t147);
    t153 = (t151 ^ t152);
    t154 = (t150 | t153);
    t155 = *((unsigned int *)t146);
    t156 = *((unsigned int *)t147);
    t157 = (t155 | t156);
    t158 = (~(t157));
    t159 = (t154 & t158);
    if (t159 != 0)
        goto LAB51;

LAB48:    if (t157 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t145) = 1;

LAB51:    memset(t142, 0, 8);
    t161 = (t145 + 4);
    t162 = *((unsigned int *)t161);
    t163 = (~(t162));
    t164 = *((unsigned int *)t145);
    t165 = (t164 & t163);
    t166 = (t165 & 1U);
    if (t166 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t161) != 0)
        goto LAB54;

LAB55:    t168 = (t142 + 4);
    t169 = *((unsigned int *)t142);
    t170 = *((unsigned int *)t168);
    t171 = (t169 || t170);
    if (t171 > 0)
        goto LAB56;

LAB57:    t174 = *((unsigned int *)t142);
    t175 = (~(t174));
    t176 = *((unsigned int *)t168);
    t177 = (t175 || t176);
    if (t177 > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t168) > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t142) > 0)
        goto LAB62;

LAB63:    memcpy(t141, t178, 8);

LAB64:    goto LAB42;

LAB43:    xsi_vlog_unsigned_bit_combine(t102, 32, t136, 32, t141, 32);
    goto LAB47;

LAB45:    memcpy(t102, t136, 8);
    goto LAB47;

LAB50:    t160 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t142) = 1;
    goto LAB55;

LAB54:    t167 = (t142 + 4);
    *((unsigned int *)t142) = 1;
    *((unsigned int *)t167) = 1;
    goto LAB55;

LAB56:    t172 = (t0 + 784U);
    t173 = *((char **)t172);
    goto LAB57;

LAB58:    t172 = ((char*)((ng5)));
    t179 = (t0 + 1564);
    t180 = (t179 + 36U);
    t181 = *((char **)t180);
    t183 = (t0 + 1564);
    t184 = (t183 + 44U);
    t185 = *((char **)t184);
    t186 = (t0 + 1564);
    t187 = (t186 + 40U);
    t188 = *((char **)t187);
    t190 = (t0 + 1656);
    t191 = (t190 + 36U);
    t192 = *((char **)t191);
    memset(t189, 0, 8);
    t193 = (t189 + 4);
    t194 = (t192 + 4);
    t195 = *((unsigned int *)t192);
    t196 = (t195 >> 2);
    *((unsigned int *)t189) = t196;
    t197 = *((unsigned int *)t194);
    t198 = (t197 >> 2);
    *((unsigned int *)t193) = t198;
    t199 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t199 & 1023U);
    t200 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t200 & 1023U);
    xsi_vlog_generic_get_array_select_value(t182, 32, t181, t185, t188, 2, 1, t189, 10, 2);
    memset(t201, 0, 8);
    t202 = (t201 + 4);
    t203 = (t182 + 4);
    t204 = *((unsigned int *)t182);
    t205 = (t204 >> 0);
    *((unsigned int *)t201) = t205;
    t206 = *((unsigned int *)t203);
    t207 = (t206 >> 0);
    *((unsigned int *)t202) = t207;
    t208 = *((unsigned int *)t201);
    *((unsigned int *)t201) = (t208 & 67108863U);
    t209 = *((unsigned int *)t202);
    *((unsigned int *)t202) = (t209 & 67108863U);
    t211 = (t0 + 1656);
    t212 = (t211 + 36U);
    t213 = *((char **)t212);
    memset(t210, 0, 8);
    t214 = (t210 + 4);
    t215 = (t213 + 4);
    t216 = *((unsigned int *)t213);
    t217 = (t216 >> 28);
    *((unsigned int *)t210) = t217;
    t218 = *((unsigned int *)t215);
    t219 = (t218 >> 28);
    *((unsigned int *)t214) = t219;
    t220 = *((unsigned int *)t210);
    *((unsigned int *)t210) = (t220 & 15U);
    t221 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t221 & 15U);
    xsi_vlogtype_concat(t178, 32, 32, 3U, t210, 4, t201, 26, t172, 2);
    goto LAB59;

LAB60:    xsi_vlog_unsigned_bit_combine(t141, 32, t173, 32, t178, 32);
    goto LAB64;

LAB62:    memcpy(t141, t173, 8);
    goto LAB64;

}


extern void work_m_00000000000123077352_3224323566_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_34_1,(void *)Cont_35_2,(void *)Initial_36_3,(void *)Always_40_4};
	xsi_register_didat("work_m_00000000000123077352_3224323566", "isim/p4tb_isim_beh.exe.sim/work/m_00000000000123077352_3224323566.didat");
	xsi_register_executes(pe);
}
