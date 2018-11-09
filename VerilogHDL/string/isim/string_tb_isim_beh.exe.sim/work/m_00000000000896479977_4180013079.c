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
static const char *ng0 = "F:/Programming Projects/VHDL/string/string.v";
static int ng1[] = {0, 0};
static int ng2[] = {58, 0};
static int ng3[] = {47, 0};
static int ng4[] = {1, 0};
static int ng5[] = {42, 0};
static int ng6[] = {43, 0};



static void Initial_34_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1504);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1596);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Cont_38_1(char *t0)
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

LAB0:    t1 = (t0 + 2264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1596);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2656);
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
    t18 = (t0 + 2604);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_39_2(char *t0)
{
    char t4[8];
    char t25[8];
    char t26[8];
    char t28[8];
    char t32[8];
    char t46[8];
    char t50[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
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

LAB0:    t1 = (t0 + 2408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2612);
    *((int *)t2) = 1;
    t3 = (t0 + 2436);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t5 = (t0 + 1092U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1092U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB209;

LAB210:
LAB211:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(40, ng0);

LAB13:    xsi_set_current_line(41, ng0);
    t19 = (t0 + 1504);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);

LAB14:    t22 = (t0 + 264);
    t23 = *((char **)t22);
    t24 = xsi_vlog_unsigned_case_compare(t21, 3, t23, 32);
    if (t24 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 344);
    t3 = *((char **)t2);
    t24 = xsi_vlog_unsigned_case_compare(t21, 3, t3, 32);
    if (t24 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 424);
    t3 = *((char **)t2);
    t24 = xsi_vlog_unsigned_case_compare(t21, 3, t3, 32);
    if (t24 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 504);
    t3 = *((char **)t2);
    t24 = xsi_vlog_unsigned_case_compare(t21, 3, t3, 32);
    if (t24 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 584);
    t3 = *((char **)t2);
    t24 = xsi_vlog_unsigned_case_compare(t21, 3, t3, 32);
    if (t24 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB15:    xsi_set_current_line(42, ng0);

LAB26:    xsi_set_current_line(43, ng0);
    t22 = (t0 + 1184U);
    t27 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB28;

LAB27:    t30 = (t22 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t27) < *((unsigned int *)t22))
        goto LAB29;

LAB30:    memset(t32, 0, 8);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t33) != 0)
        goto LAB34;

LAB35:    t40 = (t32 + 4);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB36;

LAB37:    memcpy(t58, t32, 8);

LAB38:    memset(t26, 0, 8);
    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t90) != 0)
        goto LAB53;

LAB54:    t97 = (t26 + 4);
    t98 = *((unsigned int *)t26);
    t99 = *((unsigned int *)t97);
    t100 = (t98 || t99);
    if (t100 > 0)
        goto LAB55;

LAB56:    t103 = *((unsigned int *)t26);
    t104 = (~(t103));
    t105 = *((unsigned int *)t97);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t97) > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t26) > 0)
        goto LAB61;

LAB62:    memcpy(t25, t107, 8);

LAB63:    t101 = (t0 + 1504);
    xsi_vlogvar_assign_value(t101, t25, 0, 0, 3);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1504);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 344);
    t12 = *((char **)t6);
    memset(t26, 0, 8);
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t34 = (~(t18));
    t35 = (t15 & t34);
    if (t35 != 0)
        goto LAB67;

LAB64:    if (t18 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t26) = 1;

LAB67:    memset(t25, 0, 8);
    t20 = (t26 + 4);
    t36 = *((unsigned int *)t20);
    t37 = (~(t36));
    t38 = *((unsigned int *)t26);
    t41 = (t38 & t37);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t20) != 0)
        goto LAB70;

LAB71:    t23 = (t25 + 4);
    t43 = *((unsigned int *)t25);
    t52 = *((unsigned int *)t23);
    t53 = (t43 || t52);
    if (t53 > 0)
        goto LAB72;

LAB73:    t54 = *((unsigned int *)t25);
    t55 = (~(t54));
    t56 = *((unsigned int *)t23);
    t59 = (t55 || t56);
    if (t59 > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t23) > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t25) > 0)
        goto LAB78;

LAB79:    memcpy(t4, t29, 8);

LAB80:    t30 = (t0 + 1596);
    xsi_vlogvar_assign_value(t30, t4, 0, 0, 1);
    goto LAB25;

LAB17:    xsi_set_current_line(46, ng0);

LAB81:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1184U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t26, 0, 8);
    t6 = (t5 + 4);
    t12 = (t2 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t12);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t34 = (~(t18));
    t35 = (t15 & t34);
    if (t35 != 0)
        goto LAB85;

LAB82:    if (t18 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t26) = 1;

LAB85:    memset(t28, 0, 8);
    t19 = (t26 + 4);
    t36 = *((unsigned int *)t19);
    t37 = (~(t36));
    t38 = *((unsigned int *)t26);
    t41 = (t38 & t37);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t19) != 0)
        goto LAB88;

LAB89:    t22 = (t28 + 4);
    t43 = *((unsigned int *)t28);
    t52 = (!(t43));
    t53 = *((unsigned int *)t22);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB90;

LAB91:    memcpy(t50, t28, 8);

LAB92:    memset(t25, 0, 8);
    t49 = (t50 + 4);
    t106 = *((unsigned int *)t49);
    t108 = (~(t106));
    t109 = *((unsigned int *)t50);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t49) != 0)
        goto LAB106;

LAB107:    t57 = (t25 + 4);
    t112 = *((unsigned int *)t25);
    t113 = *((unsigned int *)t57);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB108;

LAB109:    t115 = *((unsigned int *)t25);
    t116 = (~(t115));
    t117 = *((unsigned int *)t57);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t57) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t25) > 0)
        goto LAB114;

LAB115:    memcpy(t4, t64, 8);

LAB116:    t62 = (t0 + 1504);
    xsi_vlogvar_assign_value(t62, t4, 0, 0, 3);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1596);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB19:    xsi_set_current_line(50, ng0);

LAB117:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1184U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t26, 0, 8);
    t6 = (t5 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB119;

LAB118:    t12 = (t2 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB119;

LAB122:    if (*((unsigned int *)t5) < *((unsigned int *)t2))
        goto LAB120;

LAB121:    memset(t28, 0, 8);
    t19 = (t26 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t26);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t19) != 0)
        goto LAB125;

LAB126:    t22 = (t28 + 4);
    t14 = *((unsigned int *)t28);
    t15 = *((unsigned int *)t22);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB127;

LAB128:    memcpy(t50, t28, 8);

LAB129:    memset(t25, 0, 8);
    t49 = (t50 + 4);
    t78 = *((unsigned int *)t49);
    t79 = (~(t78));
    t80 = *((unsigned int *)t50);
    t81 = (t80 & t79);
    t84 = (t81 & 1U);
    if (t84 != 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t49) != 0)
        goto LAB144;

LAB145:    t57 = (t25 + 4);
    t85 = *((unsigned int *)t25);
    t86 = *((unsigned int *)t57);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB146;

LAB147:    t88 = *((unsigned int *)t25);
    t89 = (~(t88));
    t91 = *((unsigned int *)t57);
    t92 = (t89 || t91);
    if (t92 > 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t57) > 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t25) > 0)
        goto LAB152;

LAB153:    memcpy(t4, t64, 8);

LAB154:    t62 = (t0 + 1504);
    xsi_vlogvar_assign_value(t62, t4, 0, 0, 3);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1504);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 504);
    t12 = *((char **)t6);
    memset(t26, 0, 8);
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t34 = (~(t18));
    t35 = (t15 & t34);
    if (t35 != 0)
        goto LAB158;

LAB155:    if (t18 != 0)
        goto LAB157;

LAB156:    *((unsigned int *)t26) = 1;

LAB158:    memset(t25, 0, 8);
    t20 = (t26 + 4);
    t36 = *((unsigned int *)t20);
    t37 = (~(t36));
    t38 = *((unsigned int *)t26);
    t41 = (t38 & t37);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t20) != 0)
        goto LAB161;

LAB162:    t23 = (t25 + 4);
    t43 = *((unsigned int *)t25);
    t52 = *((unsigned int *)t23);
    t53 = (t43 || t52);
    if (t53 > 0)
        goto LAB163;

LAB164:    t54 = *((unsigned int *)t25);
    t55 = (~(t54));
    t56 = *((unsigned int *)t23);
    t59 = (t55 || t56);
    if (t59 > 0)
        goto LAB165;

LAB166:    if (*((unsigned int *)t23) > 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t25) > 0)
        goto LAB169;

LAB170:    memcpy(t4, t29, 8);

LAB171:    t30 = (t0 + 1596);
    xsi_vlogvar_assign_value(t30, t4, 0, 0, 1);
    goto LAB25;

LAB21:    xsi_set_current_line(54, ng0);

LAB172:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1184U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t26, 0, 8);
    t6 = (t5 + 4);
    t12 = (t2 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t12);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t34 = (~(t18));
    t35 = (t15 & t34);
    if (t35 != 0)
        goto LAB176;

LAB173:    if (t18 != 0)
        goto LAB175;

LAB174:    *((unsigned int *)t26) = 1;

LAB176:    memset(t28, 0, 8);
    t19 = (t26 + 4);
    t36 = *((unsigned int *)t19);
    t37 = (~(t36));
    t38 = *((unsigned int *)t26);
    t41 = (t38 & t37);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB177;

LAB178:    if (*((unsigned int *)t19) != 0)
        goto LAB179;

LAB180:    t22 = (t28 + 4);
    t43 = *((unsigned int *)t28);
    t52 = (!(t43));
    t53 = *((unsigned int *)t22);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB181;

LAB182:    memcpy(t50, t28, 8);

LAB183:    memset(t25, 0, 8);
    t49 = (t50 + 4);
    t106 = *((unsigned int *)t49);
    t108 = (~(t106));
    t109 = *((unsigned int *)t50);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t49) != 0)
        goto LAB197;

LAB198:    t57 = (t25 + 4);
    t112 = *((unsigned int *)t25);
    t113 = *((unsigned int *)t57);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB199;

LAB200:    t115 = *((unsigned int *)t25);
    t116 = (~(t115));
    t117 = *((unsigned int *)t57);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB201;

LAB202:    if (*((unsigned int *)t57) > 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t25) > 0)
        goto LAB205;

LAB206:    memcpy(t4, t64, 8);

LAB207:    t62 = (t0 + 1504);
    xsi_vlogvar_assign_value(t62, t4, 0, 0, 3);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1596);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB23:    xsi_set_current_line(58, ng0);

LAB208:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1596);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB25;

LAB28:    t31 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB30;

LAB29:    *((unsigned int *)t28) = 1;
    goto LAB30;

LAB32:    *((unsigned int *)t32) = 1;
    goto LAB35;

LAB34:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB35;

LAB36:    t44 = (t0 + 1184U);
    t45 = *((char **)t44);
    t44 = ((char*)((ng3)));
    memset(t46, 0, 8);
    t47 = (t45 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB40;

LAB39:    t48 = (t44 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t45) > *((unsigned int *)t44))
        goto LAB41;

LAB42:    memset(t50, 0, 8);
    t51 = (t46 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t46);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t51) != 0)
        goto LAB46;

LAB47:    t59 = *((unsigned int *)t32);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t32 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB38;

LAB40:    t49 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB42;

LAB41:    *((unsigned int *)t46) = 1;
    goto LAB42;

LAB44:    *((unsigned int *)t50) = 1;
    goto LAB47;

LAB46:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB47;

LAB48:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t32 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t32);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB50;

LAB51:    *((unsigned int *)t26) = 1;
    goto LAB54;

LAB53:    t96 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB54;

LAB55:    t101 = (t0 + 344);
    t102 = *((char **)t101);
    goto LAB56;

LAB57:    t101 = (t0 + 584);
    t107 = *((char **)t101);
    goto LAB58;

LAB59:    xsi_vlog_unsigned_bit_combine(t25, 32, t102, 32, t107, 32);
    goto LAB63;

LAB61:    memcpy(t25, t102, 8);
    goto LAB63;

LAB66:    t19 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t25) = 1;
    goto LAB71;

LAB70:    t22 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB71;

LAB72:    t27 = ((char*)((ng4)));
    goto LAB73;

LAB74:    t29 = ((char*)((ng1)));
    goto LAB75;

LAB76:    xsi_vlog_unsigned_bit_combine(t4, 32, t27, 32, t29, 32);
    goto LAB80;

LAB78:    memcpy(t4, t27, 8);
    goto LAB80;

LAB84:    t13 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t28) = 1;
    goto LAB89;

LAB88:    t20 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB89;

LAB90:    t23 = (t0 + 1184U);
    t27 = *((char **)t23);
    t23 = ((char*)((ng6)));
    memset(t32, 0, 8);
    t29 = (t27 + 4);
    t30 = (t23 + 4);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t23);
    t59 = (t55 ^ t56);
    t60 = *((unsigned int *)t29);
    t61 = *((unsigned int *)t30);
    t65 = (t60 ^ t61);
    t66 = (t59 | t65);
    t67 = *((unsigned int *)t29);
    t68 = *((unsigned int *)t30);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB96;

LAB93:    if (t69 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t32) = 1;

LAB96:    memset(t46, 0, 8);
    t33 = (t32 + 4);
    t74 = *((unsigned int *)t33);
    t75 = (~(t74));
    t76 = *((unsigned int *)t32);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t33) != 0)
        goto LAB99;

LAB100:    t79 = *((unsigned int *)t28);
    t80 = *((unsigned int *)t46);
    t81 = (t79 | t80);
    *((unsigned int *)t50) = t81;
    t40 = (t28 + 4);
    t44 = (t46 + 4);
    t45 = (t50 + 4);
    t84 = *((unsigned int *)t40);
    t85 = *((unsigned int *)t44);
    t86 = (t84 | t85);
    *((unsigned int *)t45) = t86;
    t87 = *((unsigned int *)t45);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB92;

LAB95:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB96;

LAB97:    *((unsigned int *)t46) = 1;
    goto LAB100;

LAB99:    t39 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB100;

LAB101:    t89 = *((unsigned int *)t50);
    t91 = *((unsigned int *)t45);
    *((unsigned int *)t50) = (t89 | t91);
    t47 = (t28 + 4);
    t48 = (t46 + 4);
    t92 = *((unsigned int *)t47);
    t93 = (~(t92));
    t94 = *((unsigned int *)t28);
    t82 = (t94 & t93);
    t95 = *((unsigned int *)t48);
    t98 = (~(t95));
    t99 = *((unsigned int *)t46);
    t83 = (t99 & t98);
    t100 = (~(t82));
    t103 = (~(t83));
    t104 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t104 & t100);
    t105 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t105 & t103);
    goto LAB103;

LAB104:    *((unsigned int *)t25) = 1;
    goto LAB107;

LAB106:    t51 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB107;

LAB108:    t62 = (t0 + 424);
    t63 = *((char **)t62);
    goto LAB109;

LAB110:    t62 = (t0 + 584);
    t64 = *((char **)t62);
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t4, 32, t63, 32, t64, 32);
    goto LAB116;

LAB114:    memcpy(t4, t63, 8);
    goto LAB116;

LAB119:    t13 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB121;

LAB120:    *((unsigned int *)t26) = 1;
    goto LAB121;

LAB123:    *((unsigned int *)t28) = 1;
    goto LAB126;

LAB125:    t20 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB126;

LAB127:    t23 = (t0 + 1184U);
    t27 = *((char **)t23);
    t23 = ((char*)((ng3)));
    memset(t32, 0, 8);
    t29 = (t27 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB131;

LAB130:    t30 = (t23 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB131;

LAB134:    if (*((unsigned int *)t27) > *((unsigned int *)t23))
        goto LAB132;

LAB133:    memset(t46, 0, 8);
    t33 = (t32 + 4);
    t17 = *((unsigned int *)t33);
    t18 = (~(t17));
    t34 = *((unsigned int *)t32);
    t35 = (t34 & t18);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t33) != 0)
        goto LAB137;

LAB138:    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t46);
    t41 = (t37 & t38);
    *((unsigned int *)t50) = t41;
    t40 = (t28 + 4);
    t44 = (t46 + 4);
    t45 = (t50 + 4);
    t42 = *((unsigned int *)t40);
    t43 = *((unsigned int *)t44);
    t52 = (t42 | t43);
    *((unsigned int *)t45) = t52;
    t53 = *((unsigned int *)t45);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB139;

LAB140:
LAB141:    goto LAB129;

LAB131:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB133;

LAB132:    *((unsigned int *)t32) = 1;
    goto LAB133;

LAB135:    *((unsigned int *)t46) = 1;
    goto LAB138;

LAB137:    t39 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB138;

LAB139:    t55 = *((unsigned int *)t50);
    t56 = *((unsigned int *)t45);
    *((unsigned int *)t50) = (t55 | t56);
    t47 = (t28 + 4);
    t48 = (t46 + 4);
    t59 = *((unsigned int *)t28);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t65 = (~(t61));
    t66 = *((unsigned int *)t46);
    t67 = (~(t66));
    t68 = *((unsigned int *)t48);
    t69 = (~(t68));
    t82 = (t60 & t65);
    t83 = (t67 & t69);
    t70 = (~(t82));
    t71 = (~(t83));
    t74 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t74 & t70);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t76 & t70);
    t77 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t77 & t71);
    goto LAB141;

LAB142:    *((unsigned int *)t25) = 1;
    goto LAB145;

LAB144:    t51 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB145;

LAB146:    t62 = (t0 + 504);
    t63 = *((char **)t62);
    goto LAB147;

LAB148:    t62 = (t0 + 584);
    t64 = *((char **)t62);
    goto LAB149;

LAB150:    xsi_vlog_unsigned_bit_combine(t4, 32, t63, 32, t64, 32);
    goto LAB154;

LAB152:    memcpy(t4, t63, 8);
    goto LAB154;

LAB157:    t19 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB158;

LAB159:    *((unsigned int *)t25) = 1;
    goto LAB162;

LAB161:    t22 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB162;

LAB163:    t27 = ((char*)((ng4)));
    goto LAB164;

LAB165:    t29 = ((char*)((ng1)));
    goto LAB166;

LAB167:    xsi_vlog_unsigned_bit_combine(t4, 32, t27, 32, t29, 32);
    goto LAB171;

LAB169:    memcpy(t4, t27, 8);
    goto LAB171;

LAB175:    t13 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB176;

LAB177:    *((unsigned int *)t28) = 1;
    goto LAB180;

LAB179:    t20 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB180;

LAB181:    t23 = (t0 + 1184U);
    t27 = *((char **)t23);
    t23 = ((char*)((ng6)));
    memset(t32, 0, 8);
    t29 = (t27 + 4);
    t30 = (t23 + 4);
    t55 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t23);
    t59 = (t55 ^ t56);
    t60 = *((unsigned int *)t29);
    t61 = *((unsigned int *)t30);
    t65 = (t60 ^ t61);
    t66 = (t59 | t65);
    t67 = *((unsigned int *)t29);
    t68 = *((unsigned int *)t30);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB187;

LAB184:    if (t69 != 0)
        goto LAB186;

LAB185:    *((unsigned int *)t32) = 1;

LAB187:    memset(t46, 0, 8);
    t33 = (t32 + 4);
    t74 = *((unsigned int *)t33);
    t75 = (~(t74));
    t76 = *((unsigned int *)t32);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB188;

LAB189:    if (*((unsigned int *)t33) != 0)
        goto LAB190;

LAB191:    t79 = *((unsigned int *)t28);
    t80 = *((unsigned int *)t46);
    t81 = (t79 | t80);
    *((unsigned int *)t50) = t81;
    t40 = (t28 + 4);
    t44 = (t46 + 4);
    t45 = (t50 + 4);
    t84 = *((unsigned int *)t40);
    t85 = *((unsigned int *)t44);
    t86 = (t84 | t85);
    *((unsigned int *)t45) = t86;
    t87 = *((unsigned int *)t45);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB192;

LAB193:
LAB194:    goto LAB183;

LAB186:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB187;

LAB188:    *((unsigned int *)t46) = 1;
    goto LAB191;

LAB190:    t39 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB191;

LAB192:    t89 = *((unsigned int *)t50);
    t91 = *((unsigned int *)t45);
    *((unsigned int *)t50) = (t89 | t91);
    t47 = (t28 + 4);
    t48 = (t46 + 4);
    t92 = *((unsigned int *)t47);
    t93 = (~(t92));
    t94 = *((unsigned int *)t28);
    t82 = (t94 & t93);
    t95 = *((unsigned int *)t48);
    t98 = (~(t95));
    t99 = *((unsigned int *)t46);
    t83 = (t99 & t98);
    t100 = (~(t82));
    t103 = (~(t83));
    t104 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t104 & t100);
    t105 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t105 & t103);
    goto LAB194;

LAB195:    *((unsigned int *)t25) = 1;
    goto LAB198;

LAB197:    t51 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB198;

LAB199:    t62 = (t0 + 424);
    t63 = *((char **)t62);
    goto LAB200;

LAB201:    t62 = (t0 + 584);
    t64 = *((char **)t62);
    goto LAB202;

LAB203:    xsi_vlog_unsigned_bit_combine(t4, 32, t63, 32, t64, 32);
    goto LAB207;

LAB205:    memcpy(t4, t63, 8);
    goto LAB207;

LAB209:    xsi_set_current_line(63, ng0);

LAB212:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 264);
    t6 = *((char **)t5);
    t5 = (t0 + 1504);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 3);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1596);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB211;

}


extern void work_m_00000000000896479977_4180013079_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Cont_38_1,(void *)Always_39_2};
	xsi_register_didat("work_m_00000000000896479977_4180013079", "isim/string_tb_isim_beh.exe.sim/work/m_00000000000896479977_4180013079.didat");
	xsi_register_executes(pe);
}
