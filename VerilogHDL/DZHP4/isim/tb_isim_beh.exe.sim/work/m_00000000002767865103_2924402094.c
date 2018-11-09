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
static const char *ng0 = "F:/ProgrammingProjects/VHDL/DZHP4/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {1024, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {24, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {2, 0};
static const char *ng10 = "@%h: *%h <= %h";



static void Initial_34_0(char *t0)
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

LAB0:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB2:    t1 = (t0 + 1656);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB3;

LAB4:
LAB1:    return;
LAB3:    xsi_set_current_line(36, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 1564);
    t16 = (t0 + 1564);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1564);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1656);
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
        goto LAB5;

LAB6:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1656);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1656);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB2;

LAB5:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB6;

}

static void Cont_37_1(char *t0)
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1564);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1564);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t13 = (t0 + 968U);
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
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 30, 2);
    t22 = (t0 + 2868);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 2808);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_38_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char t69[8];
    char t70[8];
    char t71[8];
    char t82[8];
    char t109[8];
    char t110[8];
    char t120[8];
    char t124[8];
    char t136[8];
    char t137[8];
    char t138[8];
    char t149[8];
    char t176[8];
    char t177[8];
    char t187[8];
    char t191[8];
    char t203[8];
    char t204[8];
    char t205[8];
    char t216[8];
    char t243[8];
    char t244[8];
    char t254[8];
    char t258[8];
    char t270[8];
    char t271[8];
    char t272[8];
    char t283[8];
    char t310[8];
    char t311[8];
    char t321[8];
    char t325[8];
    char t342[8];
    char t343[8];
    char t346[8];
    char t373[8];
    char t374[8];
    char t375[8];
    char t386[8];
    char t413[8];
    char t414[8];
    char t429[8];
    char t430[8];
    char t431[8];
    char t442[8];
    char t469[8];
    char t470[8];
    char t485[8];
    char t486[8];
    char t487[8];
    char t498[8];
    char t525[8];
    char t526[8];
    char t541[8];
    char t542[8];
    char t543[8];
    char t554[8];
    char t581[8];
    char t582[8];
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
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t83;
    char *t84;
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
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t121;
    char *t122;
    char *t123;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t178;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t188;
    char *t189;
    char *t190;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    char *t215;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t238;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t245;
    char *t246;
    char *t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    char *t255;
    char *t256;
    char *t257;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    char *t273;
    char *t274;
    char *t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    char *t282;
    char *t284;
    char *t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    char *t298;
    char *t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    char *t305;
    char *t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    char *t312;
    char *t313;
    char *t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    char *t322;
    char *t323;
    char *t324;
    char *t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    char *t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    char *t344;
    char *t345;
    char *t347;
    char *t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    char *t361;
    char *t362;
    unsigned int t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    char *t368;
    char *t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    char *t376;
    char *t377;
    char *t378;
    unsigned int t379;
    unsigned int t380;
    unsigned int t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    char *t385;
    char *t387;
    char *t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    unsigned int t395;
    unsigned int t396;
    unsigned int t397;
    unsigned int t398;
    unsigned int t399;
    unsigned int t400;
    char *t401;
    char *t402;
    unsigned int t403;
    unsigned int t404;
    unsigned int t405;
    unsigned int t406;
    unsigned int t407;
    char *t408;
    char *t409;
    unsigned int t410;
    unsigned int t411;
    unsigned int t412;
    char *t415;
    char *t416;
    char *t417;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    unsigned int t422;
    unsigned int t423;
    char *t424;
    unsigned int t425;
    unsigned int t426;
    unsigned int t427;
    unsigned int t428;
    char *t432;
    char *t433;
    char *t434;
    unsigned int t435;
    unsigned int t436;
    unsigned int t437;
    unsigned int t438;
    unsigned int t439;
    unsigned int t440;
    char *t441;
    char *t443;
    char *t444;
    unsigned int t445;
    unsigned int t446;
    unsigned int t447;
    unsigned int t448;
    unsigned int t449;
    unsigned int t450;
    unsigned int t451;
    unsigned int t452;
    unsigned int t453;
    unsigned int t454;
    unsigned int t455;
    unsigned int t456;
    char *t457;
    char *t458;
    unsigned int t459;
    unsigned int t460;
    unsigned int t461;
    unsigned int t462;
    unsigned int t463;
    char *t464;
    char *t465;
    unsigned int t466;
    unsigned int t467;
    unsigned int t468;
    char *t471;
    char *t472;
    char *t473;
    unsigned int t474;
    unsigned int t475;
    unsigned int t476;
    unsigned int t477;
    unsigned int t478;
    unsigned int t479;
    char *t480;
    unsigned int t481;
    unsigned int t482;
    unsigned int t483;
    unsigned int t484;
    char *t488;
    char *t489;
    char *t490;
    unsigned int t491;
    unsigned int t492;
    unsigned int t493;
    unsigned int t494;
    unsigned int t495;
    unsigned int t496;
    char *t497;
    char *t499;
    char *t500;
    unsigned int t501;
    unsigned int t502;
    unsigned int t503;
    unsigned int t504;
    unsigned int t505;
    unsigned int t506;
    unsigned int t507;
    unsigned int t508;
    unsigned int t509;
    unsigned int t510;
    unsigned int t511;
    unsigned int t512;
    char *t513;
    char *t514;
    unsigned int t515;
    unsigned int t516;
    unsigned int t517;
    unsigned int t518;
    unsigned int t519;
    char *t520;
    char *t521;
    unsigned int t522;
    unsigned int t523;
    unsigned int t524;
    char *t527;
    char *t528;
    char *t529;
    unsigned int t530;
    unsigned int t531;
    unsigned int t532;
    unsigned int t533;
    unsigned int t534;
    unsigned int t535;
    char *t536;
    unsigned int t537;
    unsigned int t538;
    unsigned int t539;
    unsigned int t540;
    char *t544;
    char *t545;
    char *t546;
    unsigned int t547;
    unsigned int t548;
    unsigned int t549;
    unsigned int t550;
    unsigned int t551;
    unsigned int t552;
    char *t553;
    char *t555;
    char *t556;
    unsigned int t557;
    unsigned int t558;
    unsigned int t559;
    unsigned int t560;
    unsigned int t561;
    unsigned int t562;
    unsigned int t563;
    unsigned int t564;
    unsigned int t565;
    unsigned int t566;
    unsigned int t567;
    unsigned int t568;
    char *t569;
    char *t570;
    unsigned int t571;
    unsigned int t572;
    unsigned int t573;
    unsigned int t574;
    unsigned int t575;
    char *t576;
    char *t577;
    unsigned int t578;
    unsigned int t579;
    unsigned int t580;
    char *t583;
    char *t584;
    char *t585;
    unsigned int t586;
    unsigned int t587;
    unsigned int t588;
    unsigned int t589;
    unsigned int t590;
    unsigned int t591;
    char *t592;
    unsigned int t593;
    unsigned int t594;
    unsigned int t595;
    unsigned int t596;
    char *t597;
    unsigned int t598;
    unsigned int t599;
    unsigned int t600;
    unsigned int t601;
    char *t602;
    char *t603;
    char *t604;
    char *t605;
    char *t606;
    char *t607;
    char *t608;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1152U);
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

LAB20:    t603 = (t0 + 2904);
    t604 = (t603 + 32U);
    t605 = *((char **)t604);
    t606 = (t605 + 40U);
    t607 = *((char **)t606);
    memcpy(t607, t3, 8);
    xsi_driver_vfirst_trans(t603, 0, 31);
    t608 = (t0 + 2816);
    *((int *)t608) = 1;

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

LAB12:    t33 = (t0 + 1336U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 1152U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng3)));
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

LAB30:    t338 = *((unsigned int *)t40);
    t339 = (~(t338));
    t340 = *((unsigned int *)t65);
    t341 = (t339 || t340);
    if (t341 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t342, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t34, 32, t39, 32);
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

LAB29:    t72 = (t0 + 968U);
    t73 = *((char **)t72);
    memset(t71, 0, 8);
    t72 = (t71 + 4);
    t74 = (t73 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (t75 >> 0);
    *((unsigned int *)t71) = t76;
    t77 = *((unsigned int *)t74);
    t78 = (t77 >> 0);
    *((unsigned int *)t72) = t78;
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & 3U);
    t80 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t80 & 3U);
    t81 = ((char*)((ng4)));
    memset(t82, 0, 8);
    t83 = (t71 + 4);
    t84 = (t81 + 4);
    t85 = *((unsigned int *)t71);
    t86 = *((unsigned int *)t81);
    t87 = (t85 ^ t86);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = (t87 | t90);
    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t84);
    t94 = (t92 | t93);
    t95 = (~(t94));
    t96 = (t91 & t95);
    if (t96 != 0)
        goto LAB41;

LAB38:    if (t94 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t82) = 1;

LAB41:    memset(t70, 0, 8);
    t98 = (t82 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t82);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t98) != 0)
        goto LAB44;

LAB45:    t105 = (t70 + 4);
    t106 = *((unsigned int *)t70);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB46;

LAB47:    t132 = *((unsigned int *)t70);
    t133 = (~(t132));
    t134 = *((unsigned int *)t105);
    t135 = (t133 || t134);
    if (t135 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t105) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t70) > 0)
        goto LAB52;

LAB53:    memcpy(t69, t136, 8);

LAB54:    goto LAB30;

LAB31:    t344 = (t0 + 1152U);
    t345 = *((char **)t344);
    t344 = ((char*)((ng9)));
    memset(t346, 0, 8);
    t347 = (t345 + 4);
    t348 = (t344 + 4);
    t349 = *((unsigned int *)t345);
    t350 = *((unsigned int *)t344);
    t351 = (t349 ^ t350);
    t352 = *((unsigned int *)t347);
    t353 = *((unsigned int *)t348);
    t354 = (t352 ^ t353);
    t355 = (t351 | t354);
    t356 = *((unsigned int *)t347);
    t357 = *((unsigned int *)t348);
    t358 = (t356 | t357);
    t359 = (~(t358));
    t360 = (t355 & t359);
    if (t360 != 0)
        goto LAB109;

LAB106:    if (t358 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t346) = 1;

LAB109:    memset(t343, 0, 8);
    t362 = (t346 + 4);
    t363 = *((unsigned int *)t362);
    t364 = (~(t363));
    t365 = *((unsigned int *)t346);
    t366 = (t365 & t364);
    t367 = (t366 & 1U);
    if (t367 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t362) != 0)
        goto LAB112;

LAB113:    t369 = (t343 + 4);
    t370 = *((unsigned int *)t343);
    t371 = *((unsigned int *)t369);
    t372 = (t370 || t371);
    if (t372 > 0)
        goto LAB114;

LAB115:    t598 = *((unsigned int *)t343);
    t599 = (~(t598));
    t600 = *((unsigned int *)t369);
    t601 = (t599 || t600);
    if (t601 > 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t369) > 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t343) > 0)
        goto LAB120;

LAB121:    memcpy(t342, t602, 8);

LAB122:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 32, t69, 32, t342, 32);
    goto LAB37;

LAB35:    memcpy(t39, t69, 8);
    goto LAB37;

LAB40:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t70) = 1;
    goto LAB45;

LAB44:    t104 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB45;

LAB46:    t111 = (t0 + 1336U);
    t112 = *((char **)t111);
    memset(t110, 0, 8);
    t111 = (t110 + 4);
    t113 = (t112 + 4);
    t114 = *((unsigned int *)t112);
    t115 = (t114 >> 0);
    *((unsigned int *)t110) = t115;
    t116 = *((unsigned int *)t113);
    t117 = (t116 >> 0);
    *((unsigned int *)t111) = t117;
    t118 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t118 & 255U);
    t119 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t119 & 255U);
    t121 = ((char*)((ng5)));
    t122 = (t0 + 1336U);
    t123 = *((char **)t122);
    memset(t124, 0, 8);
    t122 = (t124 + 4);
    t125 = (t123 + 4);
    t126 = *((unsigned int *)t123);
    t127 = (t126 >> 7);
    t128 = (t127 & 1);
    *((unsigned int *)t124) = t128;
    t129 = *((unsigned int *)t125);
    t130 = (t129 >> 7);
    t131 = (t130 & 1);
    *((unsigned int *)t122) = t131;
    xsi_vlog_mul_concat(t120, 24, 1, t121, 1U, t124, 1);
    xsi_vlogtype_concat(t109, 32, 32, 2U, t120, 24, t110, 8);
    goto LAB47;

LAB48:    t139 = (t0 + 968U);
    t140 = *((char **)t139);
    memset(t138, 0, 8);
    t139 = (t138 + 4);
    t141 = (t140 + 4);
    t142 = *((unsigned int *)t140);
    t143 = (t142 >> 0);
    *((unsigned int *)t138) = t143;
    t144 = *((unsigned int *)t141);
    t145 = (t144 >> 0);
    *((unsigned int *)t139) = t145;
    t146 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t146 & 3U);
    t147 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t147 & 3U);
    t148 = ((char*)((ng6)));
    memset(t149, 0, 8);
    t150 = (t138 + 4);
    t151 = (t148 + 4);
    t152 = *((unsigned int *)t138);
    t153 = *((unsigned int *)t148);
    t154 = (t152 ^ t153);
    t155 = *((unsigned int *)t150);
    t156 = *((unsigned int *)t151);
    t157 = (t155 ^ t156);
    t158 = (t154 | t157);
    t159 = *((unsigned int *)t150);
    t160 = *((unsigned int *)t151);
    t161 = (t159 | t160);
    t162 = (~(t161));
    t163 = (t158 & t162);
    if (t163 != 0)
        goto LAB58;

LAB55:    if (t161 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t149) = 1;

LAB58:    memset(t137, 0, 8);
    t165 = (t149 + 4);
    t166 = *((unsigned int *)t165);
    t167 = (~(t166));
    t168 = *((unsigned int *)t149);
    t169 = (t168 & t167);
    t170 = (t169 & 1U);
    if (t170 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t165) != 0)
        goto LAB61;

LAB62:    t172 = (t137 + 4);
    t173 = *((unsigned int *)t137);
    t174 = *((unsigned int *)t172);
    t175 = (t173 || t174);
    if (t175 > 0)
        goto LAB63;

LAB64:    t199 = *((unsigned int *)t137);
    t200 = (~(t199));
    t201 = *((unsigned int *)t172);
    t202 = (t200 || t201);
    if (t202 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t172) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t137) > 0)
        goto LAB69;

LAB70:    memcpy(t136, t203, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t69, 32, t109, 32, t136, 32);
    goto LAB54;

LAB52:    memcpy(t69, t109, 8);
    goto LAB54;

LAB57:    t164 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t137) = 1;
    goto LAB62;

LAB61:    t171 = (t137 + 4);
    *((unsigned int *)t137) = 1;
    *((unsigned int *)t171) = 1;
    goto LAB62;

LAB63:    t178 = (t0 + 1336U);
    t179 = *((char **)t178);
    memset(t177, 0, 8);
    t178 = (t177 + 4);
    t180 = (t179 + 4);
    t181 = *((unsigned int *)t179);
    t182 = (t181 >> 8);
    *((unsigned int *)t177) = t182;
    t183 = *((unsigned int *)t180);
    t184 = (t183 >> 8);
    *((unsigned int *)t178) = t184;
    t185 = *((unsigned int *)t177);
    *((unsigned int *)t177) = (t185 & 255U);
    t186 = *((unsigned int *)t178);
    *((unsigned int *)t178) = (t186 & 255U);
    t188 = ((char*)((ng5)));
    t189 = (t0 + 1336U);
    t190 = *((char **)t189);
    memset(t191, 0, 8);
    t189 = (t191 + 4);
    t192 = (t190 + 4);
    t193 = *((unsigned int *)t190);
    t194 = (t193 >> 15);
    t195 = (t194 & 1);
    *((unsigned int *)t191) = t195;
    t196 = *((unsigned int *)t192);
    t197 = (t196 >> 15);
    t198 = (t197 & 1);
    *((unsigned int *)t189) = t198;
    xsi_vlog_mul_concat(t187, 24, 1, t188, 1U, t191, 1);
    xsi_vlogtype_concat(t176, 32, 32, 2U, t187, 24, t177, 8);
    goto LAB64;

LAB65:    t206 = (t0 + 968U);
    t207 = *((char **)t206);
    memset(t205, 0, 8);
    t206 = (t205 + 4);
    t208 = (t207 + 4);
    t209 = *((unsigned int *)t207);
    t210 = (t209 >> 0);
    *((unsigned int *)t205) = t210;
    t211 = *((unsigned int *)t208);
    t212 = (t211 >> 0);
    *((unsigned int *)t206) = t212;
    t213 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t213 & 3U);
    t214 = *((unsigned int *)t206);
    *((unsigned int *)t206) = (t214 & 3U);
    t215 = ((char*)((ng7)));
    memset(t216, 0, 8);
    t217 = (t205 + 4);
    t218 = (t215 + 4);
    t219 = *((unsigned int *)t205);
    t220 = *((unsigned int *)t215);
    t221 = (t219 ^ t220);
    t222 = *((unsigned int *)t217);
    t223 = *((unsigned int *)t218);
    t224 = (t222 ^ t223);
    t225 = (t221 | t224);
    t226 = *((unsigned int *)t217);
    t227 = *((unsigned int *)t218);
    t228 = (t226 | t227);
    t229 = (~(t228));
    t230 = (t225 & t229);
    if (t230 != 0)
        goto LAB75;

LAB72:    if (t228 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t216) = 1;

LAB75:    memset(t204, 0, 8);
    t232 = (t216 + 4);
    t233 = *((unsigned int *)t232);
    t234 = (~(t233));
    t235 = *((unsigned int *)t216);
    t236 = (t235 & t234);
    t237 = (t236 & 1U);
    if (t237 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t232) != 0)
        goto LAB78;

LAB79:    t239 = (t204 + 4);
    t240 = *((unsigned int *)t204);
    t241 = *((unsigned int *)t239);
    t242 = (t240 || t241);
    if (t242 > 0)
        goto LAB80;

LAB81:    t266 = *((unsigned int *)t204);
    t267 = (~(t266));
    t268 = *((unsigned int *)t239);
    t269 = (t267 || t268);
    if (t269 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t239) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t204) > 0)
        goto LAB86;

LAB87:    memcpy(t203, t270, 8);

LAB88:    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t136, 32, t176, 32, t203, 32);
    goto LAB71;

LAB69:    memcpy(t136, t176, 8);
    goto LAB71;

LAB74:    t231 = (t216 + 4);
    *((unsigned int *)t216) = 1;
    *((unsigned int *)t231) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t204) = 1;
    goto LAB79;

LAB78:    t238 = (t204 + 4);
    *((unsigned int *)t204) = 1;
    *((unsigned int *)t238) = 1;
    goto LAB79;

LAB80:    t245 = (t0 + 1336U);
    t246 = *((char **)t245);
    memset(t244, 0, 8);
    t245 = (t244 + 4);
    t247 = (t246 + 4);
    t248 = *((unsigned int *)t246);
    t249 = (t248 >> 16);
    *((unsigned int *)t244) = t249;
    t250 = *((unsigned int *)t247);
    t251 = (t250 >> 16);
    *((unsigned int *)t245) = t251;
    t252 = *((unsigned int *)t244);
    *((unsigned int *)t244) = (t252 & 255U);
    t253 = *((unsigned int *)t245);
    *((unsigned int *)t245) = (t253 & 255U);
    t255 = ((char*)((ng5)));
    t256 = (t0 + 1336U);
    t257 = *((char **)t256);
    memset(t258, 0, 8);
    t256 = (t258 + 4);
    t259 = (t257 + 4);
    t260 = *((unsigned int *)t257);
    t261 = (t260 >> 23);
    t262 = (t261 & 1);
    *((unsigned int *)t258) = t262;
    t263 = *((unsigned int *)t259);
    t264 = (t263 >> 23);
    t265 = (t264 & 1);
    *((unsigned int *)t256) = t265;
    xsi_vlog_mul_concat(t254, 24, 1, t255, 1U, t258, 1);
    xsi_vlogtype_concat(t243, 32, 32, 2U, t254, 24, t244, 8);
    goto LAB81;

LAB82:    t273 = (t0 + 968U);
    t274 = *((char **)t273);
    memset(t272, 0, 8);
    t273 = (t272 + 4);
    t275 = (t274 + 4);
    t276 = *((unsigned int *)t274);
    t277 = (t276 >> 0);
    *((unsigned int *)t272) = t277;
    t278 = *((unsigned int *)t275);
    t279 = (t278 >> 0);
    *((unsigned int *)t273) = t279;
    t280 = *((unsigned int *)t272);
    *((unsigned int *)t272) = (t280 & 3U);
    t281 = *((unsigned int *)t273);
    *((unsigned int *)t273) = (t281 & 3U);
    t282 = ((char*)((ng8)));
    memset(t283, 0, 8);
    t284 = (t272 + 4);
    t285 = (t282 + 4);
    t286 = *((unsigned int *)t272);
    t287 = *((unsigned int *)t282);
    t288 = (t286 ^ t287);
    t289 = *((unsigned int *)t284);
    t290 = *((unsigned int *)t285);
    t291 = (t289 ^ t290);
    t292 = (t288 | t291);
    t293 = *((unsigned int *)t284);
    t294 = *((unsigned int *)t285);
    t295 = (t293 | t294);
    t296 = (~(t295));
    t297 = (t292 & t296);
    if (t297 != 0)
        goto LAB92;

LAB89:    if (t295 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t283) = 1;

LAB92:    memset(t271, 0, 8);
    t299 = (t283 + 4);
    t300 = *((unsigned int *)t299);
    t301 = (~(t300));
    t302 = *((unsigned int *)t283);
    t303 = (t302 & t301);
    t304 = (t303 & 1U);
    if (t304 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t299) != 0)
        goto LAB95;

LAB96:    t306 = (t271 + 4);
    t307 = *((unsigned int *)t271);
    t308 = *((unsigned int *)t306);
    t309 = (t307 || t308);
    if (t309 > 0)
        goto LAB97;

LAB98:    t333 = *((unsigned int *)t271);
    t334 = (~(t333));
    t335 = *((unsigned int *)t306);
    t336 = (t334 || t335);
    if (t336 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t306) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t271) > 0)
        goto LAB103;

LAB104:    memcpy(t270, t337, 8);

LAB105:    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t203, 32, t243, 32, t270, 32);
    goto LAB88;

LAB86:    memcpy(t203, t243, 8);
    goto LAB88;

LAB91:    t298 = (t283 + 4);
    *((unsigned int *)t283) = 1;
    *((unsigned int *)t298) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t271) = 1;
    goto LAB96;

LAB95:    t305 = (t271 + 4);
    *((unsigned int *)t271) = 1;
    *((unsigned int *)t305) = 1;
    goto LAB96;

LAB97:    t312 = (t0 + 1336U);
    t313 = *((char **)t312);
    memset(t311, 0, 8);
    t312 = (t311 + 4);
    t314 = (t313 + 4);
    t315 = *((unsigned int *)t313);
    t316 = (t315 >> 24);
    *((unsigned int *)t311) = t316;
    t317 = *((unsigned int *)t314);
    t318 = (t317 >> 24);
    *((unsigned int *)t312) = t318;
    t319 = *((unsigned int *)t311);
    *((unsigned int *)t311) = (t319 & 255U);
    t320 = *((unsigned int *)t312);
    *((unsigned int *)t312) = (t320 & 255U);
    t322 = ((char*)((ng5)));
    t323 = (t0 + 1336U);
    t324 = *((char **)t323);
    memset(t325, 0, 8);
    t323 = (t325 + 4);
    t326 = (t324 + 4);
    t327 = *((unsigned int *)t324);
    t328 = (t327 >> 31);
    t329 = (t328 & 1);
    *((unsigned int *)t325) = t329;
    t330 = *((unsigned int *)t326);
    t331 = (t330 >> 31);
    t332 = (t331 & 1);
    *((unsigned int *)t323) = t332;
    xsi_vlog_mul_concat(t321, 24, 1, t322, 1U, t325, 1);
    xsi_vlogtype_concat(t310, 32, 32, 2U, t321, 24, t311, 8);
    goto LAB98;

LAB99:    t337 = ((char*)((ng1)));
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t270, 32, t310, 32, t337, 32);
    goto LAB105;

LAB103:    memcpy(t270, t310, 8);
    goto LAB105;

LAB108:    t361 = (t346 + 4);
    *((unsigned int *)t346) = 1;
    *((unsigned int *)t361) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t343) = 1;
    goto LAB113;

LAB112:    t368 = (t343 + 4);
    *((unsigned int *)t343) = 1;
    *((unsigned int *)t368) = 1;
    goto LAB113;

LAB114:    t376 = (t0 + 968U);
    t377 = *((char **)t376);
    memset(t375, 0, 8);
    t376 = (t375 + 4);
    t378 = (t377 + 4);
    t379 = *((unsigned int *)t377);
    t380 = (t379 >> 0);
    *((unsigned int *)t375) = t380;
    t381 = *((unsigned int *)t378);
    t382 = (t381 >> 0);
    *((unsigned int *)t376) = t382;
    t383 = *((unsigned int *)t375);
    *((unsigned int *)t375) = (t383 & 3U);
    t384 = *((unsigned int *)t376);
    *((unsigned int *)t376) = (t384 & 3U);
    t385 = ((char*)((ng4)));
    memset(t386, 0, 8);
    t387 = (t375 + 4);
    t388 = (t385 + 4);
    t389 = *((unsigned int *)t375);
    t390 = *((unsigned int *)t385);
    t391 = (t389 ^ t390);
    t392 = *((unsigned int *)t387);
    t393 = *((unsigned int *)t388);
    t394 = (t392 ^ t393);
    t395 = (t391 | t394);
    t396 = *((unsigned int *)t387);
    t397 = *((unsigned int *)t388);
    t398 = (t396 | t397);
    t399 = (~(t398));
    t400 = (t395 & t399);
    if (t400 != 0)
        goto LAB126;

LAB123:    if (t398 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t386) = 1;

LAB126:    memset(t374, 0, 8);
    t402 = (t386 + 4);
    t403 = *((unsigned int *)t402);
    t404 = (~(t403));
    t405 = *((unsigned int *)t386);
    t406 = (t405 & t404);
    t407 = (t406 & 1U);
    if (t407 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t402) != 0)
        goto LAB129;

LAB130:    t409 = (t374 + 4);
    t410 = *((unsigned int *)t374);
    t411 = *((unsigned int *)t409);
    t412 = (t410 || t411);
    if (t412 > 0)
        goto LAB131;

LAB132:    t425 = *((unsigned int *)t374);
    t426 = (~(t425));
    t427 = *((unsigned int *)t409);
    t428 = (t426 || t427);
    if (t428 > 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t409) > 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t374) > 0)
        goto LAB137;

LAB138:    memcpy(t373, t429, 8);

LAB139:    goto LAB115;

LAB116:    t602 = ((char*)((ng1)));
    goto LAB117;

LAB118:    xsi_vlog_unsigned_bit_combine(t342, 32, t373, 32, t602, 32);
    goto LAB122;

LAB120:    memcpy(t342, t373, 8);
    goto LAB122;

LAB125:    t401 = (t386 + 4);
    *((unsigned int *)t386) = 1;
    *((unsigned int *)t401) = 1;
    goto LAB126;

LAB127:    *((unsigned int *)t374) = 1;
    goto LAB130;

LAB129:    t408 = (t374 + 4);
    *((unsigned int *)t374) = 1;
    *((unsigned int *)t408) = 1;
    goto LAB130;

LAB131:    t415 = (t0 + 1336U);
    t416 = *((char **)t415);
    memset(t414, 0, 8);
    t415 = (t414 + 4);
    t417 = (t416 + 4);
    t418 = *((unsigned int *)t416);
    t419 = (t418 >> 0);
    *((unsigned int *)t414) = t419;
    t420 = *((unsigned int *)t417);
    t421 = (t420 >> 0);
    *((unsigned int *)t415) = t421;
    t422 = *((unsigned int *)t414);
    *((unsigned int *)t414) = (t422 & 255U);
    t423 = *((unsigned int *)t415);
    *((unsigned int *)t415) = (t423 & 255U);
    t424 = ((char*)((ng4)));
    xsi_vlogtype_concat(t413, 32, 32, 2U, t424, 24, t414, 8);
    goto LAB132;

LAB133:    t432 = (t0 + 968U);
    t433 = *((char **)t432);
    memset(t431, 0, 8);
    t432 = (t431 + 4);
    t434 = (t433 + 4);
    t435 = *((unsigned int *)t433);
    t436 = (t435 >> 0);
    *((unsigned int *)t431) = t436;
    t437 = *((unsigned int *)t434);
    t438 = (t437 >> 0);
    *((unsigned int *)t432) = t438;
    t439 = *((unsigned int *)t431);
    *((unsigned int *)t431) = (t439 & 3U);
    t440 = *((unsigned int *)t432);
    *((unsigned int *)t432) = (t440 & 3U);
    t441 = ((char*)((ng6)));
    memset(t442, 0, 8);
    t443 = (t431 + 4);
    t444 = (t441 + 4);
    t445 = *((unsigned int *)t431);
    t446 = *((unsigned int *)t441);
    t447 = (t445 ^ t446);
    t448 = *((unsigned int *)t443);
    t449 = *((unsigned int *)t444);
    t450 = (t448 ^ t449);
    t451 = (t447 | t450);
    t452 = *((unsigned int *)t443);
    t453 = *((unsigned int *)t444);
    t454 = (t452 | t453);
    t455 = (~(t454));
    t456 = (t451 & t455);
    if (t456 != 0)
        goto LAB143;

LAB140:    if (t454 != 0)
        goto LAB142;

LAB141:    *((unsigned int *)t442) = 1;

LAB143:    memset(t430, 0, 8);
    t458 = (t442 + 4);
    t459 = *((unsigned int *)t458);
    t460 = (~(t459));
    t461 = *((unsigned int *)t442);
    t462 = (t461 & t460);
    t463 = (t462 & 1U);
    if (t463 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t458) != 0)
        goto LAB146;

LAB147:    t465 = (t430 + 4);
    t466 = *((unsigned int *)t430);
    t467 = *((unsigned int *)t465);
    t468 = (t466 || t467);
    if (t468 > 0)
        goto LAB148;

LAB149:    t481 = *((unsigned int *)t430);
    t482 = (~(t481));
    t483 = *((unsigned int *)t465);
    t484 = (t482 || t483);
    if (t484 > 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t465) > 0)
        goto LAB152;

LAB153:    if (*((unsigned int *)t430) > 0)
        goto LAB154;

LAB155:    memcpy(t429, t485, 8);

LAB156:    goto LAB134;

LAB135:    xsi_vlog_unsigned_bit_combine(t373, 32, t413, 32, t429, 32);
    goto LAB139;

LAB137:    memcpy(t373, t413, 8);
    goto LAB139;

LAB142:    t457 = (t442 + 4);
    *((unsigned int *)t442) = 1;
    *((unsigned int *)t457) = 1;
    goto LAB143;

LAB144:    *((unsigned int *)t430) = 1;
    goto LAB147;

LAB146:    t464 = (t430 + 4);
    *((unsigned int *)t430) = 1;
    *((unsigned int *)t464) = 1;
    goto LAB147;

LAB148:    t471 = (t0 + 1336U);
    t472 = *((char **)t471);
    memset(t470, 0, 8);
    t471 = (t470 + 4);
    t473 = (t472 + 4);
    t474 = *((unsigned int *)t472);
    t475 = (t474 >> 8);
    *((unsigned int *)t470) = t475;
    t476 = *((unsigned int *)t473);
    t477 = (t476 >> 8);
    *((unsigned int *)t471) = t477;
    t478 = *((unsigned int *)t470);
    *((unsigned int *)t470) = (t478 & 255U);
    t479 = *((unsigned int *)t471);
    *((unsigned int *)t471) = (t479 & 255U);
    t480 = ((char*)((ng4)));
    xsi_vlogtype_concat(t469, 32, 32, 2U, t480, 24, t470, 8);
    goto LAB149;

LAB150:    t488 = (t0 + 968U);
    t489 = *((char **)t488);
    memset(t487, 0, 8);
    t488 = (t487 + 4);
    t490 = (t489 + 4);
    t491 = *((unsigned int *)t489);
    t492 = (t491 >> 0);
    *((unsigned int *)t487) = t492;
    t493 = *((unsigned int *)t490);
    t494 = (t493 >> 0);
    *((unsigned int *)t488) = t494;
    t495 = *((unsigned int *)t487);
    *((unsigned int *)t487) = (t495 & 3U);
    t496 = *((unsigned int *)t488);
    *((unsigned int *)t488) = (t496 & 3U);
    t497 = ((char*)((ng7)));
    memset(t498, 0, 8);
    t499 = (t487 + 4);
    t500 = (t497 + 4);
    t501 = *((unsigned int *)t487);
    t502 = *((unsigned int *)t497);
    t503 = (t501 ^ t502);
    t504 = *((unsigned int *)t499);
    t505 = *((unsigned int *)t500);
    t506 = (t504 ^ t505);
    t507 = (t503 | t506);
    t508 = *((unsigned int *)t499);
    t509 = *((unsigned int *)t500);
    t510 = (t508 | t509);
    t511 = (~(t510));
    t512 = (t507 & t511);
    if (t512 != 0)
        goto LAB160;

LAB157:    if (t510 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t498) = 1;

LAB160:    memset(t486, 0, 8);
    t514 = (t498 + 4);
    t515 = *((unsigned int *)t514);
    t516 = (~(t515));
    t517 = *((unsigned int *)t498);
    t518 = (t517 & t516);
    t519 = (t518 & 1U);
    if (t519 != 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t514) != 0)
        goto LAB163;

LAB164:    t521 = (t486 + 4);
    t522 = *((unsigned int *)t486);
    t523 = *((unsigned int *)t521);
    t524 = (t522 || t523);
    if (t524 > 0)
        goto LAB165;

LAB166:    t537 = *((unsigned int *)t486);
    t538 = (~(t537));
    t539 = *((unsigned int *)t521);
    t540 = (t538 || t539);
    if (t540 > 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t521) > 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t486) > 0)
        goto LAB171;

LAB172:    memcpy(t485, t541, 8);

LAB173:    goto LAB151;

LAB152:    xsi_vlog_unsigned_bit_combine(t429, 32, t469, 32, t485, 32);
    goto LAB156;

LAB154:    memcpy(t429, t469, 8);
    goto LAB156;

LAB159:    t513 = (t498 + 4);
    *((unsigned int *)t498) = 1;
    *((unsigned int *)t513) = 1;
    goto LAB160;

LAB161:    *((unsigned int *)t486) = 1;
    goto LAB164;

LAB163:    t520 = (t486 + 4);
    *((unsigned int *)t486) = 1;
    *((unsigned int *)t520) = 1;
    goto LAB164;

LAB165:    t527 = (t0 + 1336U);
    t528 = *((char **)t527);
    memset(t526, 0, 8);
    t527 = (t526 + 4);
    t529 = (t528 + 4);
    t530 = *((unsigned int *)t528);
    t531 = (t530 >> 16);
    *((unsigned int *)t526) = t531;
    t532 = *((unsigned int *)t529);
    t533 = (t532 >> 16);
    *((unsigned int *)t527) = t533;
    t534 = *((unsigned int *)t526);
    *((unsigned int *)t526) = (t534 & 255U);
    t535 = *((unsigned int *)t527);
    *((unsigned int *)t527) = (t535 & 255U);
    t536 = ((char*)((ng4)));
    xsi_vlogtype_concat(t525, 32, 32, 2U, t536, 24, t526, 8);
    goto LAB166;

LAB167:    t544 = (t0 + 968U);
    t545 = *((char **)t544);
    memset(t543, 0, 8);
    t544 = (t543 + 4);
    t546 = (t545 + 4);
    t547 = *((unsigned int *)t545);
    t548 = (t547 >> 0);
    *((unsigned int *)t543) = t548;
    t549 = *((unsigned int *)t546);
    t550 = (t549 >> 0);
    *((unsigned int *)t544) = t550;
    t551 = *((unsigned int *)t543);
    *((unsigned int *)t543) = (t551 & 3U);
    t552 = *((unsigned int *)t544);
    *((unsigned int *)t544) = (t552 & 3U);
    t553 = ((char*)((ng8)));
    memset(t554, 0, 8);
    t555 = (t543 + 4);
    t556 = (t553 + 4);
    t557 = *((unsigned int *)t543);
    t558 = *((unsigned int *)t553);
    t559 = (t557 ^ t558);
    t560 = *((unsigned int *)t555);
    t561 = *((unsigned int *)t556);
    t562 = (t560 ^ t561);
    t563 = (t559 | t562);
    t564 = *((unsigned int *)t555);
    t565 = *((unsigned int *)t556);
    t566 = (t564 | t565);
    t567 = (~(t566));
    t568 = (t563 & t567);
    if (t568 != 0)
        goto LAB177;

LAB174:    if (t566 != 0)
        goto LAB176;

LAB175:    *((unsigned int *)t554) = 1;

LAB177:    memset(t542, 0, 8);
    t570 = (t554 + 4);
    t571 = *((unsigned int *)t570);
    t572 = (~(t571));
    t573 = *((unsigned int *)t554);
    t574 = (t573 & t572);
    t575 = (t574 & 1U);
    if (t575 != 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t570) != 0)
        goto LAB180;

LAB181:    t577 = (t542 + 4);
    t578 = *((unsigned int *)t542);
    t579 = *((unsigned int *)t577);
    t580 = (t578 || t579);
    if (t580 > 0)
        goto LAB182;

LAB183:    t593 = *((unsigned int *)t542);
    t594 = (~(t593));
    t595 = *((unsigned int *)t577);
    t596 = (t594 || t595);
    if (t596 > 0)
        goto LAB184;

LAB185:    if (*((unsigned int *)t577) > 0)
        goto LAB186;

LAB187:    if (*((unsigned int *)t542) > 0)
        goto LAB188;

LAB189:    memcpy(t541, t597, 8);

LAB190:    goto LAB168;

LAB169:    xsi_vlog_unsigned_bit_combine(t485, 32, t525, 32, t541, 32);
    goto LAB173;

LAB171:    memcpy(t485, t525, 8);
    goto LAB173;

LAB176:    t569 = (t554 + 4);
    *((unsigned int *)t554) = 1;
    *((unsigned int *)t569) = 1;
    goto LAB177;

LAB178:    *((unsigned int *)t542) = 1;
    goto LAB181;

LAB180:    t576 = (t542 + 4);
    *((unsigned int *)t542) = 1;
    *((unsigned int *)t576) = 1;
    goto LAB181;

LAB182:    t583 = (t0 + 1336U);
    t584 = *((char **)t583);
    memset(t582, 0, 8);
    t583 = (t582 + 4);
    t585 = (t584 + 4);
    t586 = *((unsigned int *)t584);
    t587 = (t586 >> 24);
    *((unsigned int *)t582) = t587;
    t588 = *((unsigned int *)t585);
    t589 = (t588 >> 24);
    *((unsigned int *)t583) = t589;
    t590 = *((unsigned int *)t582);
    *((unsigned int *)t582) = (t590 & 255U);
    t591 = *((unsigned int *)t583);
    *((unsigned int *)t583) = (t591 & 255U);
    t592 = ((char*)((ng4)));
    xsi_vlogtype_concat(t581, 32, 32, 2U, t592, 24, t582, 8);
    goto LAB183;

LAB184:    t597 = ((char*)((ng1)));
    goto LAB185;

LAB186:    xsi_vlog_unsigned_bit_combine(t541, 32, t581, 32, t597, 32);
    goto LAB190;

LAB188:    memcpy(t541, t581, 8);
    goto LAB190;

}

static void Always_48_3(char *t0)
{
    char t15[8];
    char t16[8];
    char t17[8];
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
    char *t13;
    char *t14;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 2612U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2824);
    *((int *)t2) = 1;
    t3 = (t0 + 2640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(49, ng0);

LAB8:    xsi_set_current_line(50, ng0);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    t11 = (t0 + 968U);
    t13 = *((char **)t11);
    t11 = (t0 + 1060U);
    t14 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng10, 4, t0, (char)118, t12, 32, (char)118, t13, 32, (char)118, t14, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 1564);
    t4 = (t0 + 1564);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = (t0 + 1564);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    t18 = (t0 + 968U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (t6 >> 2);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t20);
    t9 = (t8 >> 2);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 1073741823U);
    t21 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t21 & 1073741823U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t11, t14, 2, 1, t17, 30, 2);
    t22 = (t15 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t16 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB9;

LAB10:    goto LAB7;

LAB9:    t29 = *((unsigned int *)t15);
    t30 = *((unsigned int *)t16);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t16), t32, 0LL);
    goto LAB10;

}


extern void work_m_00000000002767865103_2924402094_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Cont_37_1,(void *)Cont_38_2,(void *)Always_48_3};
	xsi_register_didat("work_m_00000000002767865103_2924402094", "isim/tb_isim_beh.exe.sim/work/m_00000000002767865103_2924402094.didat");
	xsi_register_executes(pe);
}
