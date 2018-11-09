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
static const char *ng0 = "F:/ProgrammingProjects/VHDL/P4-SingleCycleCPU/mips.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};
static int ng8[] = {5, 0};
static int ng9[] = {6, 0};



static void Cont_31_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t42[8];
    char t43[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
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
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2164U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t54 = *((unsigned int *)t4);
    t55 = (~(t54));
    t56 = *((unsigned int *)t38);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t58, 8);

LAB20:    t68 = (t0 + 4776);
    t69 = (t68 + 32U);
    t70 = *((char **)t69);
    t71 = (t70 + 40U);
    t72 = *((char **)t71);
    memset(t72, 0, 8);
    t73 = 63U;
    t74 = t73;
    t75 = (t3 + 4);
    t76 = *((unsigned int *)t3);
    t73 = (t73 & t76);
    t77 = *((unsigned int *)t75);
    t74 = (t74 & t77);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t79 | t73);
    t80 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t80 | t74);
    xsi_driver_vfirst_trans(t68, 0, 5);
    t81 = (t0 + 4700);
    *((int *)t81) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t44 = (t0 + 2164U);
    t45 = *((char **)t44);
    memset(t43, 0, 8);
    t44 = (t43 + 4);
    t46 = (t45 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 16);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 16);
    *((unsigned int *)t44) = t50;
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 31U);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 31U);
    t53 = ((char*)((ng2)));
    xsi_vlogtype_concat(t42, 6, 6, 2U, t53, 1, t43, 5);
    goto LAB13;

LAB14:    t59 = (t0 + 2164U);
    t60 = *((char **)t59);
    memset(t58, 0, 8);
    t59 = (t58 + 4);
    t61 = (t60 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (t62 >> 0);
    *((unsigned int *)t58) = t63;
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 0);
    *((unsigned int *)t59) = t65;
    t66 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t66 & 63U);
    t67 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t67 & 63U);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 6, t42, 6, t58, 6);
    goto LAB20;

LAB18:    memcpy(t3, t42, 8);
    goto LAB20;

}

static void Cont_32_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t47[8];
    char t48[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
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
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    unsigned int t54;
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
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2164U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t47, 8);

LAB20:    t78 = (t0 + 4812);
    t85 = (t78 + 32U);
    t86 = *((char **)t85);
    t87 = (t86 + 40U);
    t88 = *((char **)t87);
    memcpy(t88, t3, 8);
    xsi_driver_vfirst_trans(t78, 0, 31);
    t89 = (t0 + 4708);
    *((int *)t89) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t42 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t49 = (t0 + 1244U);
    t50 = *((char **)t49);
    t49 = ((char*)((ng3)));
    memset(t51, 0, 8);
    t52 = (t50 + 4);
    t53 = (t49 + 4);
    t54 = *((unsigned int *)t50);
    t55 = *((unsigned int *)t49);
    t56 = (t54 ^ t55);
    t57 = *((unsigned int *)t52);
    t58 = *((unsigned int *)t53);
    t59 = (t57 ^ t58);
    t60 = (t56 | t59);
    t61 = *((unsigned int *)t52);
    t62 = *((unsigned int *)t53);
    t63 = (t61 | t62);
    t64 = (~(t63));
    t65 = (t60 & t64);
    if (t65 != 0)
        goto LAB24;

LAB21:    if (t63 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t51) = 1;

LAB24:    memset(t48, 0, 8);
    t67 = (t51 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t51);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t67) != 0)
        goto LAB27;

LAB28:    t74 = (t48 + 4);
    t75 = *((unsigned int *)t48);
    t76 = *((unsigned int *)t74);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB29;

LAB30:    t80 = *((unsigned int *)t48);
    t81 = (~(t80));
    t82 = *((unsigned int *)t74);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t74) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t48) > 0)
        goto LAB35;

LAB36:    memcpy(t47, t84, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t42, 32, t47, 32);
    goto LAB20;

LAB18:    memcpy(t3, t42, 8);
    goto LAB20;

LAB23:    t66 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t48) = 1;
    goto LAB28;

LAB27:    t73 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB28;

LAB29:    t78 = (t0 + 1888U);
    t79 = *((char **)t78);
    goto LAB30;

LAB31:    t78 = (t0 + 2348U);
    t84 = *((char **)t78);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t47, 32, t79, 32, t84, 32);
    goto LAB37;

LAB35:    memcpy(t47, t79, 8);
    goto LAB37;

}

static void Cont_33_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char t72[8];
    char t103[8];
    char t104[8];
    char t107[8];
    char t140[8];
    char t141[8];
    char t143[8];
    char t173[8];
    char t204[8];
    char t205[8];
    char t208[8];
    char t241[8];
    char t242[8];
    char t244[8];
    char t274[8];
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t43;
    char *t44;
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
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
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
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t142;
    char *t144;
    char *t145;
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
    unsigned int t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    char *t172;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t206;
    char *t207;
    char *t209;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t243;
    char *t245;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    char *t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    char *t266;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    char *t271;
    char *t272;
    char *t273;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    char *t278;
    char *t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    char *t287;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    char *t305;
    char *t306;
    char *t307;
    char *t308;
    char *t309;
    char *t310;
    unsigned int t311;
    unsigned int t312;
    char *t313;
    unsigned int t314;
    unsigned int t315;
    char *t316;
    unsigned int t317;
    unsigned int t318;
    char *t319;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2900U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng4)));
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

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t306 = (t0 + 4848);
    t307 = (t306 + 32U);
    t308 = *((char **)t307);
    t309 = (t308 + 40U);
    t310 = *((char **)t309);
    memset(t310, 0, 8);
    t311 = 1U;
    t312 = t311;
    t313 = (t3 + 4);
    t314 = *((unsigned int *)t3);
    t311 = (t311 & t314);
    t315 = *((unsigned int *)t313);
    t312 = (t312 & t315);
    t316 = (t310 + 4);
    t317 = *((unsigned int *)t310);
    *((unsigned int *)t310) = (t317 | t311);
    t318 = *((unsigned int *)t316);
    *((unsigned int *)t316) = (t318 | t312);
    xsi_driver_vfirst_trans(t306, 0, 0);
    t319 = (t0 + 4716);
    *((int *)t319) = 1;

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

LAB12:    t33 = (t0 + 1520U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 2900U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng5)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t33 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t33);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB24;

LAB21:    if (t54 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t40, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB28:    t65 = (t40 + 4);
    t66 = *((unsigned int *)t40);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t99 = *((unsigned int *)t40);
    t100 = (~(t99));
    t101 = *((unsigned int *)t65);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t103, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t34, 1, t39, 1);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB27:    t64 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t69 = (t0 + 1520U);
    t70 = *((char **)t69);
    t69 = (t0 + 1336U);
    t71 = *((char **)t69);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t69 = (t70 + 4);
    t76 = (t71 + 4);
    t77 = (t72 + 4);
    t78 = *((unsigned int *)t69);
    t79 = *((unsigned int *)t76);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB30;

LAB31:    t105 = (t0 + 2900U);
    t106 = *((char **)t105);
    t105 = ((char*)((ng6)));
    memset(t107, 0, 8);
    t108 = (t106 + 4);
    t109 = (t105 + 4);
    t110 = *((unsigned int *)t106);
    t111 = *((unsigned int *)t105);
    t112 = (t110 ^ t111);
    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t109);
    t115 = (t113 ^ t114);
    t116 = (t112 | t115);
    t117 = *((unsigned int *)t108);
    t118 = *((unsigned int *)t109);
    t119 = (t117 | t118);
    t120 = (~(t119));
    t121 = (t116 & t120);
    if (t121 != 0)
        goto LAB44;

LAB41:    if (t119 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t107) = 1;

LAB44:    memset(t104, 0, 8);
    t123 = (t107 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t107);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t123) != 0)
        goto LAB47;

LAB48:    t130 = (t104 + 4);
    t131 = *((unsigned int *)t104);
    t132 = *((unsigned int *)t130);
    t133 = (t131 || t132);
    if (t133 > 0)
        goto LAB49;

LAB50:    t136 = *((unsigned int *)t104);
    t137 = (~(t136));
    t138 = *((unsigned int *)t130);
    t139 = (t137 || t138);
    if (t139 > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t130) > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t104) > 0)
        goto LAB55;

LAB56:    memcpy(t103, t140, 8);

LAB57:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 1, t72, 1, t103, 1);
    goto LAB37;

LAB35:    memcpy(t39, t72, 8);
    goto LAB37;

LAB38:    t83 = *((unsigned int *)t72);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t72) = (t83 | t84);
    t85 = (t70 + 4);
    t86 = (t71 + 4);
    t87 = *((unsigned int *)t85);
    t88 = (~(t87));
    t89 = *((unsigned int *)t70);
    t90 = (t89 & t88);
    t91 = *((unsigned int *)t86);
    t92 = (~(t91));
    t93 = *((unsigned int *)t71);
    t94 = (t93 & t92);
    t95 = (~(t90));
    t96 = (~(t94));
    t97 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t97 & t95);
    t98 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t98 & t96);
    goto LAB40;

LAB43:    t122 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t104) = 1;
    goto LAB48;

LAB47:    t129 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB48;

LAB49:    t134 = (t0 + 1336U);
    t135 = *((char **)t134);
    goto LAB50;

LAB51:    t134 = (t0 + 2900U);
    t142 = *((char **)t134);
    t134 = ((char*)((ng7)));
    memset(t143, 0, 8);
    t144 = (t142 + 4);
    t145 = (t134 + 4);
    t146 = *((unsigned int *)t142);
    t147 = *((unsigned int *)t134);
    t148 = (t146 ^ t147);
    t149 = *((unsigned int *)t144);
    t150 = *((unsigned int *)t145);
    t151 = (t149 ^ t150);
    t152 = (t148 | t151);
    t153 = *((unsigned int *)t144);
    t154 = *((unsigned int *)t145);
    t155 = (t153 | t154);
    t156 = (~(t155));
    t157 = (t152 & t156);
    if (t157 != 0)
        goto LAB61;

LAB58:    if (t155 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t143) = 1;

LAB61:    memset(t141, 0, 8);
    t159 = (t143 + 4);
    t160 = *((unsigned int *)t159);
    t161 = (~(t160));
    t162 = *((unsigned int *)t143);
    t163 = (t162 & t161);
    t164 = (t163 & 1U);
    if (t164 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t159) != 0)
        goto LAB64;

LAB65:    t166 = (t141 + 4);
    t167 = *((unsigned int *)t141);
    t168 = *((unsigned int *)t166);
    t169 = (t167 || t168);
    if (t169 > 0)
        goto LAB66;

LAB67:    t200 = *((unsigned int *)t141);
    t201 = (~(t200));
    t202 = *((unsigned int *)t166);
    t203 = (t201 || t202);
    if (t203 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t166) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t141) > 0)
        goto LAB72;

LAB73:    memcpy(t140, t204, 8);

LAB74:    goto LAB52;

LAB53:    xsi_vlog_unsigned_bit_combine(t103, 1, t135, 1, t140, 1);
    goto LAB57;

LAB55:    memcpy(t103, t135, 8);
    goto LAB57;

LAB60:    t158 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t158) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t141) = 1;
    goto LAB65;

LAB64:    t165 = (t141 + 4);
    *((unsigned int *)t141) = 1;
    *((unsigned int *)t165) = 1;
    goto LAB65;

LAB66:    t170 = (t0 + 1520U);
    t171 = *((char **)t170);
    t170 = (t0 + 1428U);
    t172 = *((char **)t170);
    t174 = *((unsigned int *)t171);
    t175 = *((unsigned int *)t172);
    t176 = (t174 | t175);
    *((unsigned int *)t173) = t176;
    t170 = (t171 + 4);
    t177 = (t172 + 4);
    t178 = (t173 + 4);
    t179 = *((unsigned int *)t170);
    t180 = *((unsigned int *)t177);
    t181 = (t179 | t180);
    *((unsigned int *)t178) = t181;
    t182 = *((unsigned int *)t178);
    t183 = (t182 != 0);
    if (t183 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB67;

LAB68:    t206 = (t0 + 2900U);
    t207 = *((char **)t206);
    t206 = ((char*)((ng8)));
    memset(t208, 0, 8);
    t209 = (t207 + 4);
    t210 = (t206 + 4);
    t211 = *((unsigned int *)t207);
    t212 = *((unsigned int *)t206);
    t213 = (t211 ^ t212);
    t214 = *((unsigned int *)t209);
    t215 = *((unsigned int *)t210);
    t216 = (t214 ^ t215);
    t217 = (t213 | t216);
    t218 = *((unsigned int *)t209);
    t219 = *((unsigned int *)t210);
    t220 = (t218 | t219);
    t221 = (~(t220));
    t222 = (t217 & t221);
    if (t222 != 0)
        goto LAB81;

LAB78:    if (t220 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t208) = 1;

LAB81:    memset(t205, 0, 8);
    t224 = (t208 + 4);
    t225 = *((unsigned int *)t224);
    t226 = (~(t225));
    t227 = *((unsigned int *)t208);
    t228 = (t227 & t226);
    t229 = (t228 & 1U);
    if (t229 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t224) != 0)
        goto LAB84;

LAB85:    t231 = (t205 + 4);
    t232 = *((unsigned int *)t205);
    t233 = *((unsigned int *)t231);
    t234 = (t232 || t233);
    if (t234 > 0)
        goto LAB86;

LAB87:    t237 = *((unsigned int *)t205);
    t238 = (~(t237));
    t239 = *((unsigned int *)t231);
    t240 = (t238 || t239);
    if (t240 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t231) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t205) > 0)
        goto LAB92;

LAB93:    memcpy(t204, t241, 8);

LAB94:    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t140, 1, t173, 1, t204, 1);
    goto LAB74;

LAB72:    memcpy(t140, t173, 8);
    goto LAB74;

LAB75:    t184 = *((unsigned int *)t173);
    t185 = *((unsigned int *)t178);
    *((unsigned int *)t173) = (t184 | t185);
    t186 = (t171 + 4);
    t187 = (t172 + 4);
    t188 = *((unsigned int *)t186);
    t189 = (~(t188));
    t190 = *((unsigned int *)t171);
    t191 = (t190 & t189);
    t192 = *((unsigned int *)t187);
    t193 = (~(t192));
    t194 = *((unsigned int *)t172);
    t195 = (t194 & t193);
    t196 = (~(t191));
    t197 = (~(t195));
    t198 = *((unsigned int *)t178);
    *((unsigned int *)t178) = (t198 & t196);
    t199 = *((unsigned int *)t178);
    *((unsigned int *)t178) = (t199 & t197);
    goto LAB77;

LAB80:    t223 = (t208 + 4);
    *((unsigned int *)t208) = 1;
    *((unsigned int *)t223) = 1;
    goto LAB81;

LAB82:    *((unsigned int *)t205) = 1;
    goto LAB85;

LAB84:    t230 = (t205 + 4);
    *((unsigned int *)t205) = 1;
    *((unsigned int *)t230) = 1;
    goto LAB85;

LAB86:    t235 = (t0 + 1428U);
    t236 = *((char **)t235);
    goto LAB87;

LAB88:    t235 = (t0 + 2900U);
    t243 = *((char **)t235);
    t235 = ((char*)((ng9)));
    memset(t244, 0, 8);
    t245 = (t243 + 4);
    t246 = (t235 + 4);
    t247 = *((unsigned int *)t243);
    t248 = *((unsigned int *)t235);
    t249 = (t247 ^ t248);
    t250 = *((unsigned int *)t245);
    t251 = *((unsigned int *)t246);
    t252 = (t250 ^ t251);
    t253 = (t249 | t252);
    t254 = *((unsigned int *)t245);
    t255 = *((unsigned int *)t246);
    t256 = (t254 | t255);
    t257 = (~(t256));
    t258 = (t253 & t257);
    if (t258 != 0)
        goto LAB98;

LAB95:    if (t256 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t244) = 1;

LAB98:    memset(t242, 0, 8);
    t260 = (t244 + 4);
    t261 = *((unsigned int *)t260);
    t262 = (~(t261));
    t263 = *((unsigned int *)t244);
    t264 = (t263 & t262);
    t265 = (t264 & 1U);
    if (t265 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t260) != 0)
        goto LAB101;

LAB102:    t267 = (t242 + 4);
    t268 = *((unsigned int *)t242);
    t269 = *((unsigned int *)t267);
    t270 = (t268 || t269);
    if (t270 > 0)
        goto LAB103;

LAB104:    t301 = *((unsigned int *)t242);
    t302 = (~(t301));
    t303 = *((unsigned int *)t267);
    t304 = (t302 || t303);
    if (t304 > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t267) > 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t242) > 0)
        goto LAB109;

LAB110:    memcpy(t241, t305, 8);

LAB111:    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t204, 1, t236, 1, t241, 1);
    goto LAB94;

LAB92:    memcpy(t204, t236, 8);
    goto LAB94;

LAB97:    t259 = (t244 + 4);
    *((unsigned int *)t244) = 1;
    *((unsigned int *)t259) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t242) = 1;
    goto LAB102;

LAB101:    t266 = (t242 + 4);
    *((unsigned int *)t242) = 1;
    *((unsigned int *)t266) = 1;
    goto LAB102;

LAB103:    t271 = (t0 + 1336U);
    t272 = *((char **)t271);
    t271 = (t0 + 1428U);
    t273 = *((char **)t271);
    t275 = *((unsigned int *)t272);
    t276 = *((unsigned int *)t273);
    t277 = (t275 | t276);
    *((unsigned int *)t274) = t277;
    t271 = (t272 + 4);
    t278 = (t273 + 4);
    t279 = (t274 + 4);
    t280 = *((unsigned int *)t271);
    t281 = *((unsigned int *)t278);
    t282 = (t280 | t281);
    *((unsigned int *)t279) = t282;
    t283 = *((unsigned int *)t279);
    t284 = (t283 != 0);
    if (t284 == 1)
        goto LAB112;

LAB113:
LAB114:    goto LAB104;

LAB105:    t305 = ((char*)((ng2)));
    goto LAB106;

LAB107:    xsi_vlog_unsigned_bit_combine(t241, 1, t274, 1, t305, 1);
    goto LAB111;

LAB109:    memcpy(t241, t274, 8);
    goto LAB111;

LAB112:    t285 = *((unsigned int *)t274);
    t286 = *((unsigned int *)t279);
    *((unsigned int *)t274) = (t285 | t286);
    t287 = (t272 + 4);
    t288 = (t273 + 4);
    t289 = *((unsigned int *)t287);
    t290 = (~(t289));
    t291 = *((unsigned int *)t272);
    t292 = (t291 & t290);
    t293 = *((unsigned int *)t288);
    t294 = (~(t293));
    t295 = *((unsigned int *)t273);
    t296 = (t295 & t294);
    t297 = (~(t292));
    t298 = (~(t296));
    t299 = *((unsigned int *)t279);
    *((unsigned int *)t279) = (t299 & t297);
    t300 = *((unsigned int *)t279);
    *((unsigned int *)t279) = (t300 & t298);
    goto LAB114;

}

static void Cont_39_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 4360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1704U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
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

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t33 = (t0 + 4884);
    t40 = (t33 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    memcpy(t43, t3, 8);
    xsi_driver_vfirst_trans(t33, 0, 31);
    t44 = (t0 + 4724);
    *((int *)t44) = 1;

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

LAB12:    t33 = (t0 + 2440U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 2532U);
    t39 = *((char **)t33);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t34, 32, t39, 32);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1060U);
    t5 = *((char **)t2);
    t2 = (t0 + 876U);
    t6 = *((char **)t2);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t2 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t4, 0, 8);
    t34 = (t7 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t34) != 0)
        goto LAB9;

LAB10:    t41 = (t4 + 4);
    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB11;

LAB12:    t47 = *((unsigned int *)t4);
    t48 = (~(t47));
    t49 = *((unsigned int *)t41);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t41) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) > 0)
        goto LAB17;

LAB18:    memcpy(t3, t51, 8);

LAB19:    t45 = (t0 + 4920);
    t52 = (t45 + 32U);
    t53 = *((char **)t52);
    t54 = (t53 + 40U);
    t55 = *((char **)t54);
    memcpy(t55, t3, 8);
    xsi_driver_vfirst_trans(t45, 0, 31);
    t56 = (t0 + 4732);
    *((int *)t56) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB6;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t40 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB10;

LAB11:    t45 = (t0 + 1980U);
    t46 = *((char **)t45);
    goto LAB12;

LAB13:    t45 = (t0 + 2072U);
    t51 = *((char **)t45);
    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 32, t46, 32, t51, 32);
    goto LAB19;

LAB17:    memcpy(t3, t46, 8);
    goto LAB19;

}


extern void work_m_00000000001570017729_3877310806_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Cont_32_1,(void *)Cont_33_2,(void *)Cont_39_3,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000001570017729_3877310806", "isim/p4tb_isim_beh.exe.sim/work/m_00000000001570017729_3877310806.didat");
	xsi_register_executes(pe);
}
