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
static const char *ng0 = "F:/ProgrammingProjects/VHDL/DZHP4/EXT.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {2, 0};



static void Cont_26_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t34[8];
    char t44[8];
    char t48[8];
    char t60[8];
    char t61[8];
    char t64[8];
    char t91[8];
    char t92[8];
    char t107[8];
    char t108[8];
    char t111[8];
    char t138[8];
    char t140[8];
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
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
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
    char *t62;
    char *t63;
    char *t65;
    char *t66;
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
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t109;
    char *t110;
    char *t112;
    char *t113;
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
    unsigned int t125;
    char *t126;
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
    char *t139;
    char *t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
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

LAB13:    t56 = *((unsigned int *)t4);
    t57 = (~(t56));
    t58 = *((unsigned int *)t29);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t60, 8);

LAB20:    t155 = (t0 + 1684);
    t156 = (t155 + 32U);
    t157 = *((char **)t156);
    t158 = (t157 + 40U);
    t159 = *((char **)t158);
    memcpy(t159, t3, 8);
    xsi_driver_vfirst_trans(t155, 0, 31);
    t160 = (t0 + 1640);
    *((int *)t160) = 1;

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

LAB12:    t35 = (t0 + 600U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    *((unsigned int *)t35) = t41;
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 65535U);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 65535U);
    t45 = ((char*)((ng2)));
    t46 = (t0 + 600U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t46 = (t48 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 15);
    t52 = (t51 & 1);
    *((unsigned int *)t48) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 15);
    t55 = (t54 & 1);
    *((unsigned int *)t46) = t55;
    xsi_vlog_mul_concat(t44, 16, 1, t45, 1U, t48, 1);
    xsi_vlogtype_concat(t33, 32, 32, 2U, t44, 16, t34, 16);
    goto LAB13;

LAB14:    t62 = (t0 + 692U);
    t63 = *((char **)t62);
    t62 = ((char*)((ng3)));
    memset(t64, 0, 8);
    t65 = (t63 + 4);
    t66 = (t62 + 4);
    t67 = *((unsigned int *)t63);
    t68 = *((unsigned int *)t62);
    t69 = (t67 ^ t68);
    t70 = *((unsigned int *)t65);
    t71 = *((unsigned int *)t66);
    t72 = (t70 ^ t71);
    t73 = (t69 | t72);
    t74 = *((unsigned int *)t65);
    t75 = *((unsigned int *)t66);
    t76 = (t74 | t75);
    t77 = (~(t76));
    t78 = (t73 & t77);
    if (t78 != 0)
        goto LAB24;

LAB21:    if (t76 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t64) = 1;

LAB24:    memset(t61, 0, 8);
    t80 = (t64 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t64);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t80) != 0)
        goto LAB27;

LAB28:    t87 = (t61 + 4);
    t88 = *((unsigned int *)t61);
    t89 = *((unsigned int *)t87);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB29;

LAB30:    t103 = *((unsigned int *)t61);
    t104 = (~(t103));
    t105 = *((unsigned int *)t87);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t87) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t61) > 0)
        goto LAB35;

LAB36:    memcpy(t60, t107, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t60, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t79 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t61) = 1;
    goto LAB28;

LAB27:    t86 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB28;

LAB29:    t93 = (t0 + 600U);
    t94 = *((char **)t93);
    memset(t92, 0, 8);
    t93 = (t92 + 4);
    t95 = (t94 + 4);
    t96 = *((unsigned int *)t94);
    t97 = (t96 >> 0);
    *((unsigned int *)t92) = t97;
    t98 = *((unsigned int *)t95);
    t99 = (t98 >> 0);
    *((unsigned int *)t93) = t99;
    t100 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t100 & 65535U);
    t101 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t101 & 65535U);
    t102 = ((char*)((ng4)));
    xsi_vlogtype_concat(t91, 32, 32, 2U, t102, 16, t92, 16);
    goto LAB30;

LAB31:    t109 = (t0 + 692U);
    t110 = *((char **)t109);
    t109 = ((char*)((ng5)));
    memset(t111, 0, 8);
    t112 = (t110 + 4);
    t113 = (t109 + 4);
    t114 = *((unsigned int *)t110);
    t115 = *((unsigned int *)t109);
    t116 = (t114 ^ t115);
    t117 = *((unsigned int *)t112);
    t118 = *((unsigned int *)t113);
    t119 = (t117 ^ t118);
    t120 = (t116 | t119);
    t121 = *((unsigned int *)t112);
    t122 = *((unsigned int *)t113);
    t123 = (t121 | t122);
    t124 = (~(t123));
    t125 = (t120 & t124);
    if (t125 != 0)
        goto LAB41;

LAB38:    if (t123 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t111) = 1;

LAB41:    memset(t108, 0, 8);
    t127 = (t111 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t111);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t127) != 0)
        goto LAB44;

LAB45:    t134 = (t108 + 4);
    t135 = *((unsigned int *)t108);
    t136 = *((unsigned int *)t134);
    t137 = (t135 || t136);
    if (t137 > 0)
        goto LAB46;

LAB47:    t150 = *((unsigned int *)t108);
    t151 = (~(t150));
    t152 = *((unsigned int *)t134);
    t153 = (t151 || t152);
    if (t153 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t134) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t108) > 0)
        goto LAB52;

LAB53:    memcpy(t107, t154, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t60, 32, t91, 32, t107, 32);
    goto LAB37;

LAB35:    memcpy(t60, t91, 8);
    goto LAB37;

LAB40:    t126 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t108) = 1;
    goto LAB45;

LAB44:    t133 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB45;

LAB46:    t139 = ((char*)((ng4)));
    t141 = (t0 + 600U);
    t142 = *((char **)t141);
    memset(t140, 0, 8);
    t141 = (t140 + 4);
    t143 = (t142 + 4);
    t144 = *((unsigned int *)t142);
    t145 = (t144 >> 0);
    *((unsigned int *)t140) = t145;
    t146 = *((unsigned int *)t143);
    t147 = (t146 >> 0);
    *((unsigned int *)t141) = t147;
    t148 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t148 & 65535U);
    t149 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t149 & 65535U);
    xsi_vlogtype_concat(t138, 32, 32, 2U, t140, 16, t139, 16);
    goto LAB47;

LAB48:    t154 = ((char*)((ng1)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t107, 32, t138, 32, t154, 32);
    goto LAB54;

LAB52:    memcpy(t107, t138, 8);
    goto LAB54;

}


extern void work_m_00000000001885754584_1785967555_init()
{
	static char *pe[] = {(void *)Cont_26_0};
	xsi_register_didat("work_m_00000000001885754584_1785967555", "isim/tb_isim_beh.exe.sim/work/m_00000000001885754584_1785967555.didat");
	xsi_register_executes(pe);
}
