#ifndef scCorrections3D_h                                              
#define scCorrections3D_h                                              
#include "TH3F.h"				                       

Double_t applyScCorrections_3D(Double_t nt_em_br1, Double_t nt_em_eta, Double_t nt_emCorrEta_et){  
  	                                                               
  // read the Correction parameters
  //
  // 3D f(sigma_phi/sigma_eta, eta, ET ) from histogram 
  //
	
   Double_t xAxis1[20] = {0.8, 1, 1, 1.2, 1.2, 1.4, 1.4, 1.6, 1.6, 1.8, 1.8, 2, 2, 3, 3, 4, 4, 5, 5, 10}; 
   Double_t yAxis1[12] = {0.02, 0.42, 0.46, 0.77, 0.81, 1.13, 1.16, 1.44, 1.653, 2.2, 2.2, 2.5}; 
   Double_t zAxis1[14] = {5, 10, 10, 20, 20, 30, 30, 50, 50, 100, 100, 150, 150, 200}; 
   
   TH3F *hhh_CB3D = new TH3F("hhh_CB3D","hhh_CB3D",19, xAxis1,11, yAxis1,13, zAxis1);
   hhh_CB3D->SetBinContent(295,1);
   hhh_CB3D->SetBinContent(297,1);
   hhh_CB3D->SetBinContent(299,1);
   hhh_CB3D->SetBinContent(301,1);
   hhh_CB3D->SetBinContent(303,1);
   hhh_CB3D->SetBinContent(305,1);
   hhh_CB3D->SetBinContent(307,1);
   hhh_CB3D->SetBinContent(309,1);
   hhh_CB3D->SetBinContent(311,1);
   hhh_CB3D->SetBinContent(313,1);
   hhh_CB3D->SetBinContent(337,1);
   hhh_CB3D->SetBinContent(339,1);
   hhh_CB3D->SetBinContent(341,1);
   hhh_CB3D->SetBinContent(343,1);
   hhh_CB3D->SetBinContent(345,1);
   hhh_CB3D->SetBinContent(347,1);
   hhh_CB3D->SetBinContent(349,1);
   hhh_CB3D->SetBinContent(351,1);
   hhh_CB3D->SetBinContent(353,1);
   hhh_CB3D->SetBinContent(355,1);
   hhh_CB3D->SetBinContent(379,1);
   hhh_CB3D->SetBinContent(381,1);
   hhh_CB3D->SetBinContent(383,1);
   hhh_CB3D->SetBinContent(385,1);
   hhh_CB3D->SetBinContent(387,1);
   hhh_CB3D->SetBinContent(389,1);
   hhh_CB3D->SetBinContent(391,1);
   hhh_CB3D->SetBinContent(393,1);
   hhh_CB3D->SetBinContent(395,1);
   hhh_CB3D->SetBinContent(397,1);
   hhh_CB3D->SetBinContent(421,1);
   hhh_CB3D->SetBinContent(423,1);
   hhh_CB3D->SetBinContent(425,1);
   hhh_CB3D->SetBinContent(427,1);
   hhh_CB3D->SetBinContent(429,1);
   hhh_CB3D->SetBinContent(431,1);
   hhh_CB3D->SetBinContent(433,1);
   hhh_CB3D->SetBinContent(435,1);
   hhh_CB3D->SetBinContent(437,1);
   hhh_CB3D->SetBinContent(439,0.908557);
   hhh_CB3D->SetBinContent(463,1);
   hhh_CB3D->SetBinContent(465,0.995216);
   hhh_CB3D->SetBinContent(467,1);
   hhh_CB3D->SetBinContent(469,1);
   hhh_CB3D->SetBinContent(471,1);
   hhh_CB3D->SetBinContent(473,1);
   hhh_CB3D->SetBinContent(475,0.897569);
   hhh_CB3D->SetBinContent(477,0.851043);
   hhh_CB3D->SetBinContent(479,1);
   hhh_CB3D->SetBinContent(481,0.908557);
   hhh_CB3D->SetBinContent(505,1);
   hhh_CB3D->SetBinContent(507,0.995216);
   hhh_CB3D->SetBinContent(509,1);
   hhh_CB3D->SetBinContent(511,1);
   hhh_CB3D->SetBinContent(513,1);
   hhh_CB3D->SetBinContent(515,1);
   hhh_CB3D->SetBinContent(517,0.897569);
   hhh_CB3D->SetBinContent(519,0.851043);
   hhh_CB3D->SetBinContent(521,1);
   hhh_CB3D->SetBinContent(523,0.908557);
   hhh_CB3D->SetBinContent(841,1);
   hhh_CB3D->SetBinContent(843,1.0208);
   hhh_CB3D->SetBinContent(845,1.02074);
   hhh_CB3D->SetBinContent(847,1.02074);
   hhh_CB3D->SetBinContent(849,1.02074);
   hhh_CB3D->SetBinContent(851,1.02074);
   hhh_CB3D->SetBinContent(853,1.00218);
   hhh_CB3D->SetBinContent(855,0.994263);
   hhh_CB3D->SetBinContent(857,0.991898);
   hhh_CB3D->SetBinContent(859,0.990333);
   hhh_CB3D->SetBinContent(883,1);
   hhh_CB3D->SetBinContent(885,1);
   hhh_CB3D->SetBinContent(887,1.01472);
   hhh_CB3D->SetBinContent(889,1.01472);
   hhh_CB3D->SetBinContent(891,1.01472);
   hhh_CB3D->SetBinContent(893,1.01472);
   hhh_CB3D->SetBinContent(895,0.997316);
   hhh_CB3D->SetBinContent(897,0.997406);
   hhh_CB3D->SetBinContent(899,0.994767);
   hhh_CB3D->SetBinContent(901,0.982773);
   hhh_CB3D->SetBinContent(925,1);
   hhh_CB3D->SetBinContent(927,1);
   hhh_CB3D->SetBinContent(929,1.01472);
   hhh_CB3D->SetBinContent(931,1.01472);
   hhh_CB3D->SetBinContent(933,1.01472);
   hhh_CB3D->SetBinContent(935,1.01472);
   hhh_CB3D->SetBinContent(937,0.99274);
   hhh_CB3D->SetBinContent(939,0.985869);
   hhh_CB3D->SetBinContent(941,0.979432);
   hhh_CB3D->SetBinContent(943,0.9519);
   hhh_CB3D->SetBinContent(967,1);
   hhh_CB3D->SetBinContent(969,1);
   hhh_CB3D->SetBinContent(971,1.01472);
   hhh_CB3D->SetBinContent(973,1.01472);
   hhh_CB3D->SetBinContent(975,1.01472);
   hhh_CB3D->SetBinContent(977,1.01472);
   hhh_CB3D->SetBinContent(979,0.989986);
   hhh_CB3D->SetBinContent(981,0.9888);
   hhh_CB3D->SetBinContent(983,0.973425);
   hhh_CB3D->SetBinContent(985,0.884393);
   hhh_CB3D->SetBinContent(1009,0.988948);
   hhh_CB3D->SetBinContent(1011,0.991223);
   hhh_CB3D->SetBinContent(1013,0.977176);
   hhh_CB3D->SetBinContent(1015,0.943435);
   hhh_CB3D->SetBinContent(1017,0.925158);
   hhh_CB3D->SetBinContent(1019,0.928854);
   hhh_CB3D->SetBinContent(1021,0.921513);
   hhh_CB3D->SetBinContent(1023,0.892625);
   hhh_CB3D->SetBinContent(1025,0.857568);
   hhh_CB3D->SetBinContent(1027,0.884393);
   hhh_CB3D->SetBinContent(1051,1.00512);
   hhh_CB3D->SetBinContent(1053,0.98866);
   hhh_CB3D->SetBinContent(1055,0.974811);
   hhh_CB3D->SetBinContent(1057,0.955058);
   hhh_CB3D->SetBinContent(1059,0.946844);
   hhh_CB3D->SetBinContent(1061,0.959067);
   hhh_CB3D->SetBinContent(1063,0.934984);
   hhh_CB3D->SetBinContent(1065,0.892625);
   hhh_CB3D->SetBinContent(1067,0.857568);
   hhh_CB3D->SetBinContent(1069,0.884393);
   hhh_CB3D->SetBinContent(1387,1);
   hhh_CB3D->SetBinContent(1389,1.01071);
   hhh_CB3D->SetBinContent(1391,1.02225);
   hhh_CB3D->SetBinContent(1393,1.01727);
   hhh_CB3D->SetBinContent(1395,1.01727);
   hhh_CB3D->SetBinContent(1397,1.01727);
   hhh_CB3D->SetBinContent(1399,1.00284);
   hhh_CB3D->SetBinContent(1401,0.998094);
   hhh_CB3D->SetBinContent(1403,0.995905);
   hhh_CB3D->SetBinContent(1405,0.994395);
   hhh_CB3D->SetBinContent(1429,1);
   hhh_CB3D->SetBinContent(1431,1);
   hhh_CB3D->SetBinContent(1433,1);
   hhh_CB3D->SetBinContent(1435,1);
   hhh_CB3D->SetBinContent(1437,1);
   hhh_CB3D->SetBinContent(1439,1);
   hhh_CB3D->SetBinContent(1441,1.00132);
   hhh_CB3D->SetBinContent(1443,1.00052);
   hhh_CB3D->SetBinContent(1445,0.992454);
   hhh_CB3D->SetBinContent(1447,0.994518);
   hhh_CB3D->SetBinContent(1471,1);
   hhh_CB3D->SetBinContent(1473,1);
   hhh_CB3D->SetBinContent(1475,1);
   hhh_CB3D->SetBinContent(1477,1);
   hhh_CB3D->SetBinContent(1479,1);
   hhh_CB3D->SetBinContent(1481,1);
   hhh_CB3D->SetBinContent(1483,0.994858);
   hhh_CB3D->SetBinContent(1485,0.982866);
   hhh_CB3D->SetBinContent(1487,0.978909);
   hhh_CB3D->SetBinContent(1489,0.95439);
   hhh_CB3D->SetBinContent(1513,1);
   hhh_CB3D->SetBinContent(1515,1);
   hhh_CB3D->SetBinContent(1517,1);
   hhh_CB3D->SetBinContent(1519,1);
   hhh_CB3D->SetBinContent(1521,1);
   hhh_CB3D->SetBinContent(1523,1);
   hhh_CB3D->SetBinContent(1525,0.98655);
   hhh_CB3D->SetBinContent(1527,0.977565);
   hhh_CB3D->SetBinContent(1529,0.957616);
   hhh_CB3D->SetBinContent(1531,0.914421);
   hhh_CB3D->SetBinContent(1555,0.994391);
   hhh_CB3D->SetBinContent(1557,0.983491);
   hhh_CB3D->SetBinContent(1559,0.973748);
   hhh_CB3D->SetBinContent(1561,0.95828);
   hhh_CB3D->SetBinContent(1563,0.944976);
   hhh_CB3D->SetBinContent(1565,0.945634);
   hhh_CB3D->SetBinContent(1567,0.933401);
   hhh_CB3D->SetBinContent(1569,0.907975);
   hhh_CB3D->SetBinContent(1571,0.876325);
   hhh_CB3D->SetBinContent(1573,0.914421);
   hhh_CB3D->SetBinContent(1597,30.0585);
   hhh_CB3D->SetBinContent(1599,0.986918);
   hhh_CB3D->SetBinContent(1601,0.978246);
   hhh_CB3D->SetBinContent(1603,0.976074);
   hhh_CB3D->SetBinContent(1605,0.958119);
   hhh_CB3D->SetBinContent(1607,0.961662);
   hhh_CB3D->SetBinContent(1609,0.947763);
   hhh_CB3D->SetBinContent(1611,0.907975);
   hhh_CB3D->SetBinContent(1613,0.876325);
   hhh_CB3D->SetBinContent(1615,0.914421);
   hhh_CB3D->SetBinContent(1933,1);
   hhh_CB3D->SetBinContent(1935,1.00661);
   hhh_CB3D->SetBinContent(1937,1.00681);
   hhh_CB3D->SetBinContent(1939,1.00732);
   hhh_CB3D->SetBinContent(1941,1.007);
   hhh_CB3D->SetBinContent(1943,1.00648);
   hhh_CB3D->SetBinContent(1945,1.00207);
   hhh_CB3D->SetBinContent(1947,1.00502);
   hhh_CB3D->SetBinContent(1949,0.997608);
   hhh_CB3D->SetBinContent(1951,0.9972);
   hhh_CB3D->SetBinContent(1975,1);
   hhh_CB3D->SetBinContent(1977,1.00489);
   hhh_CB3D->SetBinContent(1979,1.00602);
   hhh_CB3D->SetBinContent(1981,1.0041);
   hhh_CB3D->SetBinContent(1983,1.00527);
   hhh_CB3D->SetBinContent(1985,1.00558);
   hhh_CB3D->SetBinContent(1987,1.00072);
   hhh_CB3D->SetBinContent(1989,0.999764);
   hhh_CB3D->SetBinContent(1991,0.994718);
   hhh_CB3D->SetBinContent(1993,0.995252);
   hhh_CB3D->SetBinContent(2017,1);
   hhh_CB3D->SetBinContent(2019,1.00489);
   hhh_CB3D->SetBinContent(2021,1.0013);
   hhh_CB3D->SetBinContent(2023,0.997151);
   hhh_CB3D->SetBinContent(2025,1.00022);
   hhh_CB3D->SetBinContent(2027,0.996831);
   hhh_CB3D->SetBinContent(2029,0.997771);
   hhh_CB3D->SetBinContent(2031,0.988104);
   hhh_CB3D->SetBinContent(2033,0.980437);
   hhh_CB3D->SetBinContent(2035,0.966983);
   hhh_CB3D->SetBinContent(2059,1);
   hhh_CB3D->SetBinContent(2061,1.00489);
   hhh_CB3D->SetBinContent(2063,1.0013);
   hhh_CB3D->SetBinContent(2065,0.993475);
   hhh_CB3D->SetBinContent(2067,0.993401);
   hhh_CB3D->SetBinContent(2069,0.993438);
   hhh_CB3D->SetBinContent(2071,0.990285);
   hhh_CB3D->SetBinContent(2073,0.9735);
   hhh_CB3D->SetBinContent(2075,0.962854);
   hhh_CB3D->SetBinContent(2077,0.929831);
   hhh_CB3D->SetBinContent(2101,0.983525);
   hhh_CB3D->SetBinContent(2103,0.974312);
   hhh_CB3D->SetBinContent(2105,0.968072);
   hhh_CB3D->SetBinContent(2107,0.960339);
   hhh_CB3D->SetBinContent(2109,0.950945);
   hhh_CB3D->SetBinContent(2111,0.955488);
   hhh_CB3D->SetBinContent(2113,0.941415);
   hhh_CB3D->SetBinContent(2115,0.909145);
   hhh_CB3D->SetBinContent(2117,0.876226);
   hhh_CB3D->SetBinContent(2119,0.929831);
   hhh_CB3D->SetBinContent(2143,71.9463);
   hhh_CB3D->SetBinContent(2145,0.975993);
   hhh_CB3D->SetBinContent(2147,0.969751);
   hhh_CB3D->SetBinContent(2149,0.965689);
   hhh_CB3D->SetBinContent(2151,0.969362);
   hhh_CB3D->SetBinContent(2153,0.973862);
   hhh_CB3D->SetBinContent(2155,0.952371);
   hhh_CB3D->SetBinContent(2157,0.909145);
   hhh_CB3D->SetBinContent(2159,0.876226);
   hhh_CB3D->SetBinContent(2161,0.929831);
   hhh_CB3D->SetBinContent(2479,1);
   hhh_CB3D->SetBinContent(2481,1.0013);
   hhh_CB3D->SetBinContent(2483,1.00377);
   hhh_CB3D->SetBinContent(2485,1.00495);
   hhh_CB3D->SetBinContent(2487,1.00504);
   hhh_CB3D->SetBinContent(2489,1.00408);
   hhh_CB3D->SetBinContent(2491,1.00351);
   hhh_CB3D->SetBinContent(2493,1.00237);
   hhh_CB3D->SetBinContent(2495,1.00318);
   hhh_CB3D->SetBinContent(2497,1.00318);
   hhh_CB3D->SetBinContent(2521,1);
   hhh_CB3D->SetBinContent(2523,1.00086);
   hhh_CB3D->SetBinContent(2525,1.00393);
   hhh_CB3D->SetBinContent(2527,1.00461);
   hhh_CB3D->SetBinContent(2529,1.005);
   hhh_CB3D->SetBinContent(2531,1.00396);
   hhh_CB3D->SetBinContent(2533,1.00249);
   hhh_CB3D->SetBinContent(2535,0.998777);
   hhh_CB3D->SetBinContent(2537,0.998495);
   hhh_CB3D->SetBinContent(2539,0.999225);
   hhh_CB3D->SetBinContent(2563,1);
   hhh_CB3D->SetBinContent(2565,0.998962);
   hhh_CB3D->SetBinContent(2567,0.999076);
   hhh_CB3D->SetBinContent(2569,0.998004);
   hhh_CB3D->SetBinContent(2571,1.00048);
   hhh_CB3D->SetBinContent(2573,0.998449);
   hhh_CB3D->SetBinContent(2575,0.994851);
   hhh_CB3D->SetBinContent(2577,0.98737);
   hhh_CB3D->SetBinContent(2579,0.984344);
   hhh_CB3D->SetBinContent(2581,0.977747);
   hhh_CB3D->SetBinContent(2605,1);
   hhh_CB3D->SetBinContent(2607,0.995876);
   hhh_CB3D->SetBinContent(2609,0.996411);
   hhh_CB3D->SetBinContent(2611,0.996178);
   hhh_CB3D->SetBinContent(2613,0.99509);
   hhh_CB3D->SetBinContent(2615,0.992353);
   hhh_CB3D->SetBinContent(2617,0.987613);
   hhh_CB3D->SetBinContent(2619,0.97243);
   hhh_CB3D->SetBinContent(2621,0.965542);
   hhh_CB3D->SetBinContent(2623,0.942744);
   hhh_CB3D->SetBinContent(2647,0.981777);
   hhh_CB3D->SetBinContent(2649,0.972892);
   hhh_CB3D->SetBinContent(2651,0.967833);
   hhh_CB3D->SetBinContent(2653,0.965574);
   hhh_CB3D->SetBinContent(2655,0.960907);
   hhh_CB3D->SetBinContent(2657,0.961282);
   hhh_CB3D->SetBinContent(2659,0.949834);
   hhh_CB3D->SetBinContent(2661,0.922658);
   hhh_CB3D->SetBinContent(2663,0.965542);
   hhh_CB3D->SetBinContent(2665,0.942744);
   hhh_CB3D->SetBinContent(2689,0.97292);
   hhh_CB3D->SetBinContent(2691,0.972513);
   hhh_CB3D->SetBinContent(2693,0.974495);
   hhh_CB3D->SetBinContent(2695,0.974451);
   hhh_CB3D->SetBinContent(2697,0.973123);
   hhh_CB3D->SetBinContent(2699,0.971867);
   hhh_CB3D->SetBinContent(2701,0.956513);
   hhh_CB3D->SetBinContent(2703,0.922658);
   hhh_CB3D->SetBinContent(2705,0.965542);
   hhh_CB3D->SetBinContent(2707,0.942744);
   hhh_CB3D->SetBinContent(3025,1);
   hhh_CB3D->SetBinContent(3027,1.0006);
   hhh_CB3D->SetBinContent(3029,1.00261);
   hhh_CB3D->SetBinContent(3031,1.00482);
   hhh_CB3D->SetBinContent(3033,1.00458);
   hhh_CB3D->SetBinContent(3035,1.00429);
   hhh_CB3D->SetBinContent(3037,1.00399);
   hhh_CB3D->SetBinContent(3039,1.00235);
   hhh_CB3D->SetBinContent(3041,1.00235);
   hhh_CB3D->SetBinContent(3043,1.00235);
   hhh_CB3D->SetBinContent(3067,1);
   hhh_CB3D->SetBinContent(3069,0.999779);
   hhh_CB3D->SetBinContent(3071,1.00226);
   hhh_CB3D->SetBinContent(3073,1.00268);
   hhh_CB3D->SetBinContent(3075,1.00374);
   hhh_CB3D->SetBinContent(3077,1.003);
   hhh_CB3D->SetBinContent(3079,1.00261);
   hhh_CB3D->SetBinContent(3081,1.00213);
   hhh_CB3D->SetBinContent(3083,1.00213);
   hhh_CB3D->SetBinContent(3085,1.00213);
   hhh_CB3D->SetBinContent(3109,1);
   hhh_CB3D->SetBinContent(3111,0.998764);
   hhh_CB3D->SetBinContent(3113,0.998611);
   hhh_CB3D->SetBinContent(3115,0.999027);
   hhh_CB3D->SetBinContent(3117,0.999642);
   hhh_CB3D->SetBinContent(3119,0.997553);
   hhh_CB3D->SetBinContent(3121,0.994817);
   hhh_CB3D->SetBinContent(3123,0.992068);
   hhh_CB3D->SetBinContent(3125,0.98342);
   hhh_CB3D->SetBinContent(3127,1.00213);
   hhh_CB3D->SetBinContent(3151,1);
   hhh_CB3D->SetBinContent(3153,0.996209);
   hhh_CB3D->SetBinContent(3155,0.995344);
   hhh_CB3D->SetBinContent(3157,0.995861);
   hhh_CB3D->SetBinContent(3159,0.995797);
   hhh_CB3D->SetBinContent(3161,0.993082);
   hhh_CB3D->SetBinContent(3163,0.985861);
   hhh_CB3D->SetBinContent(3165,0.977093);
   hhh_CB3D->SetBinContent(3167,0.966984);
   hhh_CB3D->SetBinContent(3169,0.954796);
   hhh_CB3D->SetBinContent(3193,0.973032);
   hhh_CB3D->SetBinContent(3195,0.972196);
   hhh_CB3D->SetBinContent(3197,0.971735);
   hhh_CB3D->SetBinContent(3199,0.969504);
   hhh_CB3D->SetBinContent(3201,0.96471);
   hhh_CB3D->SetBinContent(3203,0.964248);
   hhh_CB3D->SetBinContent(3205,0.951838);
   hhh_CB3D->SetBinContent(3207,0.933747);
   hhh_CB3D->SetBinContent(3209,0.966984);
   hhh_CB3D->SetBinContent(3211,0.954796);
   hhh_CB3D->SetBinContent(3235,0.973676);
   hhh_CB3D->SetBinContent(3237,0.972784);
   hhh_CB3D->SetBinContent(3239,0.974659);
   hhh_CB3D->SetBinContent(3241,0.97716);
   hhh_CB3D->SetBinContent(3243,0.977309);
   hhh_CB3D->SetBinContent(3245,0.964248);
   hhh_CB3D->SetBinContent(3247,0.951838);
   hhh_CB3D->SetBinContent(3249,0.933747);
   hhh_CB3D->SetBinContent(3251,0.966984);
   hhh_CB3D->SetBinContent(3253,0.954796);
   hhh_CB3D->SetBinContent(3571,1);
   hhh_CB3D->SetBinContent(3573,0.999824);
   hhh_CB3D->SetBinContent(3575,1.00258);
   hhh_CB3D->SetBinContent(3577,1.00417);
   hhh_CB3D->SetBinContent(3579,1.0047);
   hhh_CB3D->SetBinContent(3581,1.00477);
   hhh_CB3D->SetBinContent(3583,1.00342);
   hhh_CB3D->SetBinContent(3585,1.00342);
   hhh_CB3D->SetBinContent(3587,1.00342);
   hhh_CB3D->SetBinContent(3589,1.00342);
   hhh_CB3D->SetBinContent(3613,1);
   hhh_CB3D->SetBinContent(3615,1.0009);
   hhh_CB3D->SetBinContent(3617,1.00159);
   hhh_CB3D->SetBinContent(3619,1.00243);
   hhh_CB3D->SetBinContent(3621,1.00228);
   hhh_CB3D->SetBinContent(3623,1.00268);
   hhh_CB3D->SetBinContent(3625,1.00162);
   hhh_CB3D->SetBinContent(3627,1.00169);
   hhh_CB3D->SetBinContent(3629,1.00169);
   hhh_CB3D->SetBinContent(3631,1.00169);
   hhh_CB3D->SetBinContent(3655,1);
   hhh_CB3D->SetBinContent(3657,0.999214);
   hhh_CB3D->SetBinContent(3659,0.998297);
   hhh_CB3D->SetBinContent(3661,1.00056);
   hhh_CB3D->SetBinContent(3663,0.998492);
   hhh_CB3D->SetBinContent(3665,0.998454);
   hhh_CB3D->SetBinContent(3667,0.994717);
   hhh_CB3D->SetBinContent(3669,0.989569);
   hhh_CB3D->SetBinContent(3671,1.00169);
   hhh_CB3D->SetBinContent(3673,1.00169);
   hhh_CB3D->SetBinContent(3697,1);
   hhh_CB3D->SetBinContent(3699,0.997807);
   hhh_CB3D->SetBinContent(3701,0.996185);
   hhh_CB3D->SetBinContent(3703,0.994826);
   hhh_CB3D->SetBinContent(3705,0.993862);
   hhh_CB3D->SetBinContent(3707,0.992779);
   hhh_CB3D->SetBinContent(3709,0.987108);
   hhh_CB3D->SetBinContent(3711,0.978304);
   hhh_CB3D->SetBinContent(3713,0.969473);
   hhh_CB3D->SetBinContent(3715,1.00169);
   hhh_CB3D->SetBinContent(3739,0.971706);
   hhh_CB3D->SetBinContent(3741,0.973151);
   hhh_CB3D->SetBinContent(3743,0.97332);
   hhh_CB3D->SetBinContent(3745,0.971463);
   hhh_CB3D->SetBinContent(3747,0.972259);
   hhh_CB3D->SetBinContent(3749,0.967071);
   hhh_CB3D->SetBinContent(3751,0.957065);
   hhh_CB3D->SetBinContent(3753,0.978304);
   hhh_CB3D->SetBinContent(3755,0.969473);
   hhh_CB3D->SetBinContent(3757,1.00169);
   hhh_CB3D->SetBinContent(3781,0.971706);
   hhh_CB3D->SetBinContent(3783,0.97172);
   hhh_CB3D->SetBinContent(3785,0.97779);
   hhh_CB3D->SetBinContent(3787,0.977337);
   hhh_CB3D->SetBinContent(3789,0.972259);
   hhh_CB3D->SetBinContent(3791,0.967071);
   hhh_CB3D->SetBinContent(3793,0.957065);
   hhh_CB3D->SetBinContent(3795,0.978304);
   hhh_CB3D->SetBinContent(3797,0.969473);
   hhh_CB3D->SetBinContent(3799,1.00169);
   hhh_CB3D->SetBinError(439,0.0209863);
   hhh_CB3D->SetBinError(465,0.00630856);
   hhh_CB3D->SetBinError(475,0.0108039);
   hhh_CB3D->SetBinError(477,0.00804682);
   hhh_CB3D->SetBinError(481,0.0209863);
   hhh_CB3D->SetBinError(507,0.00630856);
   hhh_CB3D->SetBinError(517,0.0108039);
   hhh_CB3D->SetBinError(519,0.00804682);
   hhh_CB3D->SetBinError(523,0.0209863);
   hhh_CB3D->SetBinError(843,0.00163964);
   hhh_CB3D->SetBinError(845,0.00150164);
   hhh_CB3D->SetBinError(847,0.00150164);
   hhh_CB3D->SetBinError(849,0.00150164);
   hhh_CB3D->SetBinError(851,0.00150164);
   hhh_CB3D->SetBinError(853,0.00285857);
   hhh_CB3D->SetBinError(855,0.00285337);
   hhh_CB3D->SetBinError(857,0.00458218);
   hhh_CB3D->SetBinError(859,0.00255607);
   hhh_CB3D->SetBinError(887,0.00246816);
   hhh_CB3D->SetBinError(889,0.00246816);
   hhh_CB3D->SetBinError(891,0.00246816);
   hhh_CB3D->SetBinError(893,0.00246816);
   hhh_CB3D->SetBinError(895,0.00386202);
   hhh_CB3D->SetBinError(897,0.00240649);
   hhh_CB3D->SetBinError(899,0.00643558);
   hhh_CB3D->SetBinError(901,0.00420941);
   hhh_CB3D->SetBinError(929,0.00246816);
   hhh_CB3D->SetBinError(931,0.00246816);
   hhh_CB3D->SetBinError(933,0.00246816);
   hhh_CB3D->SetBinError(935,0.00246816);
   hhh_CB3D->SetBinError(937,0.00227738);
   hhh_CB3D->SetBinError(939,0.00423605);
   hhh_CB3D->SetBinError(941,0.00626859);
   hhh_CB3D->SetBinError(943,0.00379923);
   hhh_CB3D->SetBinError(971,0.00246816);
   hhh_CB3D->SetBinError(973,0.00246816);
   hhh_CB3D->SetBinError(975,0.00246816);
   hhh_CB3D->SetBinError(977,0.00246816);
   hhh_CB3D->SetBinError(979,0.00471185);
   hhh_CB3D->SetBinError(981,0.00358745);
   hhh_CB3D->SetBinError(983,0.0050174);
   hhh_CB3D->SetBinError(985,0.00283448);
   hhh_CB3D->SetBinError(1009,0.00207595);
   hhh_CB3D->SetBinError(1011,0.00221983);
   hhh_CB3D->SetBinError(1013,0.00336377);
   hhh_CB3D->SetBinError(1015,0.00862236);
   hhh_CB3D->SetBinError(1017,0.0066758);
   hhh_CB3D->SetBinError(1019,0.00663055);
   hhh_CB3D->SetBinError(1021,0.00349243);
   hhh_CB3D->SetBinError(1023,0.00398321);
   hhh_CB3D->SetBinError(1025,0.00436207);
   hhh_CB3D->SetBinError(1027,0.00283448);
   hhh_CB3D->SetBinError(1051,0.00323846);
   hhh_CB3D->SetBinError(1053,0.00319562);
   hhh_CB3D->SetBinError(1055,0.00482012);
   hhh_CB3D->SetBinError(1057,0.00460409);
   hhh_CB3D->SetBinError(1059,0.00444427);
   hhh_CB3D->SetBinError(1061,0.00782571);
   hhh_CB3D->SetBinError(1063,0.00338701);
   hhh_CB3D->SetBinError(1065,0.00398321);
   hhh_CB3D->SetBinError(1067,0.00436207);
   hhh_CB3D->SetBinError(1069,0.00283448);
   hhh_CB3D->SetBinError(1389,0.00124173);
   hhh_CB3D->SetBinError(1391,0.0028541);
   hhh_CB3D->SetBinError(1393,0.00204902);
   hhh_CB3D->SetBinError(1395,0.00204902);
   hhh_CB3D->SetBinError(1397,0.00204902);
   hhh_CB3D->SetBinError(1399,0.00182649);
   hhh_CB3D->SetBinError(1401,0.00201333);
   hhh_CB3D->SetBinError(1403,0.00227404);
   hhh_CB3D->SetBinError(1405,0.00236297);
   hhh_CB3D->SetBinError(1441,0.00134996);
   hhh_CB3D->SetBinError(1443,0.00160081);
   hhh_CB3D->SetBinError(1445,0.00174806);
   hhh_CB3D->SetBinError(1447,0.00212089);
   hhh_CB3D->SetBinError(1483,0.00239701);
   hhh_CB3D->SetBinError(1485,0.00186667);
   hhh_CB3D->SetBinError(1487,0.00583922);
   hhh_CB3D->SetBinError(1489,0.00210177);
   hhh_CB3D->SetBinError(1525,0.00177751);
   hhh_CB3D->SetBinError(1527,0.00264279);
   hhh_CB3D->SetBinError(1529,0.00574651);
   hhh_CB3D->SetBinError(1531,0.00328241);
   hhh_CB3D->SetBinError(1555,0.00222603);
   hhh_CB3D->SetBinError(1557,0.00222236);
   hhh_CB3D->SetBinError(1559,0.00397897);
   hhh_CB3D->SetBinError(1561,0.00405455);
   hhh_CB3D->SetBinError(1563,0.00294126);
   hhh_CB3D->SetBinError(1565,0.00525157);
   hhh_CB3D->SetBinError(1567,0.00255293);
   hhh_CB3D->SetBinError(1569,0.00499063);
   hhh_CB3D->SetBinError(1571,0.00613306);
   hhh_CB3D->SetBinError(1573,0.00328241);
   hhh_CB3D->SetBinError(1599,0.00547643);
   hhh_CB3D->SetBinError(1601,0.00264319);
   hhh_CB3D->SetBinError(1603,0.00419191);
   hhh_CB3D->SetBinError(1605,0.0041651);
   hhh_CB3D->SetBinError(1607,0.00654537);
   hhh_CB3D->SetBinError(1609,0.00469294);
   hhh_CB3D->SetBinError(1611,0.00499063);
   hhh_CB3D->SetBinError(1613,0.00613306);
   hhh_CB3D->SetBinError(1615,0.00328241);
   hhh_CB3D->SetBinError(1935,0.000875691);
   hhh_CB3D->SetBinError(1937,0.00100654);
   hhh_CB3D->SetBinError(1939,0.00136882);
   hhh_CB3D->SetBinError(1941,0.00208608);
   hhh_CB3D->SetBinError(1943,0.00127975);
   hhh_CB3D->SetBinError(1945,0.000618899);
   hhh_CB3D->SetBinError(1947,0.0020099);
   hhh_CB3D->SetBinError(1949,0.0010586);
   hhh_CB3D->SetBinError(1951,0.00130187);
   hhh_CB3D->SetBinError(1977,0.00110516);
   hhh_CB3D->SetBinError(1979,0.00135506);
   hhh_CB3D->SetBinError(1981,0.00109182);
   hhh_CB3D->SetBinError(1983,0.000903686);
   hhh_CB3D->SetBinError(1985,0.00168881);
   hhh_CB3D->SetBinError(1987,0.000587166);
   hhh_CB3D->SetBinError(1989,0.00104977);
   hhh_CB3D->SetBinError(1991,0.00131492);
   hhh_CB3D->SetBinError(1993,0.00183207);
   hhh_CB3D->SetBinError(2019,0.00110516);
   hhh_CB3D->SetBinError(2021,0.00142106);
   hhh_CB3D->SetBinError(2023,0.00145233);
   hhh_CB3D->SetBinError(2025,0.00122278);
   hhh_CB3D->SetBinError(2027,0.000879405);
   hhh_CB3D->SetBinError(2029,0.000768525);
   hhh_CB3D->SetBinError(2031,0.00127063);
   hhh_CB3D->SetBinError(2033,0.00230576);
   hhh_CB3D->SetBinError(2035,0.00282665);
   hhh_CB3D->SetBinError(2061,0.00110516);
   hhh_CB3D->SetBinError(2063,0.00142106);
   hhh_CB3D->SetBinError(2065,0.00118118);
   hhh_CB3D->SetBinError(2067,0.00144741);
   hhh_CB3D->SetBinError(2069,0.00108775);
   hhh_CB3D->SetBinError(2071,0.00128547);
   hhh_CB3D->SetBinError(2073,0.00269756);
   hhh_CB3D->SetBinError(2075,0.00227393);
   hhh_CB3D->SetBinError(2077,0.00161187);
   hhh_CB3D->SetBinError(2101,0.00205113);
   hhh_CB3D->SetBinError(2103,0.00116442);
   hhh_CB3D->SetBinError(2105,0.00127579);
   hhh_CB3D->SetBinError(2107,0.00187392);
   hhh_CB3D->SetBinError(2109,0.00333989);
   hhh_CB3D->SetBinError(2111,0.00255907);
   hhh_CB3D->SetBinError(2113,0.00167904);
   hhh_CB3D->SetBinError(2115,0.00221052);
   hhh_CB3D->SetBinError(2117,0.00535065);
   hhh_CB3D->SetBinError(2119,0.00161187);
   hhh_CB3D->SetBinError(2145,0.00213258);
   hhh_CB3D->SetBinError(2147,0.00163756);
   hhh_CB3D->SetBinError(2149,0.00157336);
   hhh_CB3D->SetBinError(2151,0.00266944);
   hhh_CB3D->SetBinError(2153,0.00261536);
   hhh_CB3D->SetBinError(2155,0.00407075);
   hhh_CB3D->SetBinError(2157,0.00221052);
   hhh_CB3D->SetBinError(2159,0.00535065);
   hhh_CB3D->SetBinError(2161,0.00161187);
   hhh_CB3D->SetBinError(2481,0.000435517);
   hhh_CB3D->SetBinError(2483,0.000523006);
   hhh_CB3D->SetBinError(2485,0.000462781);
   hhh_CB3D->SetBinError(2487,0.000441022);
   hhh_CB3D->SetBinError(2489,0.000468557);
   hhh_CB3D->SetBinError(2491,0.000339505);
   hhh_CB3D->SetBinError(2493,0.000599557);
   hhh_CB3D->SetBinError(2495,0.00121683);
   hhh_CB3D->SetBinError(2497,0.00121683);
   hhh_CB3D->SetBinError(2523,0.000574927);
   hhh_CB3D->SetBinError(2525,0.000633262);
   hhh_CB3D->SetBinError(2527,0.000495844);
   hhh_CB3D->SetBinError(2529,0.000619563);
   hhh_CB3D->SetBinError(2531,0.000543993);
   hhh_CB3D->SetBinError(2533,0.000340085);
   hhh_CB3D->SetBinError(2535,0.00054445);
   hhh_CB3D->SetBinError(2537,0.00087275);
   hhh_CB3D->SetBinError(2539,0.00129386);
   hhh_CB3D->SetBinError(2565,0.000800733);
   hhh_CB3D->SetBinError(2567,0.000563178);
   hhh_CB3D->SetBinError(2569,0.000534658);
   hhh_CB3D->SetBinError(2571,0.000961414);
   hhh_CB3D->SetBinError(2573,0.000729051);
   hhh_CB3D->SetBinError(2575,0.000391852);
   hhh_CB3D->SetBinError(2577,0.000936863);
   hhh_CB3D->SetBinError(2579,0.0014882);
   hhh_CB3D->SetBinError(2581,0.00405438);
   hhh_CB3D->SetBinError(2607,0.0010911);
   hhh_CB3D->SetBinError(2609,0.000897361);
   hhh_CB3D->SetBinError(2611,0.000868284);
   hhh_CB3D->SetBinError(2613,0.000607256);
   hhh_CB3D->SetBinError(2615,0.000659467);
   hhh_CB3D->SetBinError(2617,0.000544354);
   hhh_CB3D->SetBinError(2619,0.00069596);
   hhh_CB3D->SetBinError(2621,0.00129071);
   hhh_CB3D->SetBinError(2623,0.00115634);
   hhh_CB3D->SetBinError(2647,0.0014882);
   hhh_CB3D->SetBinError(2649,0.000709092);
   hhh_CB3D->SetBinError(2651,0.000812133);
   hhh_CB3D->SetBinError(2653,0.000902117);
   hhh_CB3D->SetBinError(2655,0.00107093);
   hhh_CB3D->SetBinError(2657,0.0013802);
   hhh_CB3D->SetBinError(2659,0.001274);
   hhh_CB3D->SetBinError(2661,0.00254979);
   hhh_CB3D->SetBinError(2663,0.00129071);
   hhh_CB3D->SetBinError(2665,0.00115634);
   hhh_CB3D->SetBinError(2689,0.0018335);
   hhh_CB3D->SetBinError(2691,0.00175958);
   hhh_CB3D->SetBinError(2693,0.0011406);
   hhh_CB3D->SetBinError(2695,0.00132516);
   hhh_CB3D->SetBinError(2697,0.00150764);
   hhh_CB3D->SetBinError(2699,0.00250362);
   hhh_CB3D->SetBinError(2701,0.00301277);
   hhh_CB3D->SetBinError(2703,0.00254979);
   hhh_CB3D->SetBinError(2705,0.00129071);
   hhh_CB3D->SetBinError(2707,0.00115634);
   hhh_CB3D->SetBinError(3027,0.000408012);
   hhh_CB3D->SetBinError(3029,0.000376032);
   hhh_CB3D->SetBinError(3031,0.00038493);
   hhh_CB3D->SetBinError(3033,0.000357506);
   hhh_CB3D->SetBinError(3035,0.000358244);
   hhh_CB3D->SetBinError(3037,0.000575756);
   hhh_CB3D->SetBinError(3039,0.000622029);
   hhh_CB3D->SetBinError(3041,0.000622029);
   hhh_CB3D->SetBinError(3043,0.000622029);
   hhh_CB3D->SetBinError(3069,0.000968269);
   hhh_CB3D->SetBinError(3071,0.00037763);
   hhh_CB3D->SetBinError(3073,0.000339496);
   hhh_CB3D->SetBinError(3075,0.000504344);
   hhh_CB3D->SetBinError(3077,0.000375017);
   hhh_CB3D->SetBinError(3079,0.000338287);
   hhh_CB3D->SetBinError(3081,0.000640195);
   hhh_CB3D->SetBinError(3083,0.000640195);
   hhh_CB3D->SetBinError(3085,0.000640195);
   hhh_CB3D->SetBinError(3111,0.000545028);
   hhh_CB3D->SetBinError(3113,0.000452426);
   hhh_CB3D->SetBinError(3115,0.000404121);
   hhh_CB3D->SetBinError(3117,0.000566185);
   hhh_CB3D->SetBinError(3119,0.000478119);
   hhh_CB3D->SetBinError(3121,0.000648081);
   hhh_CB3D->SetBinError(3123,0.0011377);
   hhh_CB3D->SetBinError(3125,0.00143631);
   hhh_CB3D->SetBinError(3127,0.000640195);
   hhh_CB3D->SetBinError(3153,0.00188893);
   hhh_CB3D->SetBinError(3155,0.000560654);
   hhh_CB3D->SetBinError(3157,0.000532078);
   hhh_CB3D->SetBinError(3159,0.000570031);
   hhh_CB3D->SetBinError(3161,0.000535142);
   hhh_CB3D->SetBinError(3163,0.000358725);
   hhh_CB3D->SetBinError(3165,0.000453936);
   hhh_CB3D->SetBinError(3167,0.000905669);
   hhh_CB3D->SetBinError(3169,0.00237956);
   hhh_CB3D->SetBinError(3193,0.000925683);
   hhh_CB3D->SetBinError(3195,0.000658004);
   hhh_CB3D->SetBinError(3197,0.000572385);
   hhh_CB3D->SetBinError(3199,0.000684488);
   hhh_CB3D->SetBinError(3201,0.000818804);
   hhh_CB3D->SetBinError(3203,0.00107895);
   hhh_CB3D->SetBinError(3205,0.000815659);
   hhh_CB3D->SetBinError(3207,0.00308678);
   hhh_CB3D->SetBinError(3209,0.000905669);
   hhh_CB3D->SetBinError(3211,0.00237956);
   hhh_CB3D->SetBinError(3235,0.00253208);
   hhh_CB3D->SetBinError(3237,0.00158194);
   hhh_CB3D->SetBinError(3239,0.00160214);
   hhh_CB3D->SetBinError(3241,0.00167829);
   hhh_CB3D->SetBinError(3243,0.00217778);
   hhh_CB3D->SetBinError(3245,0.00107895);
   hhh_CB3D->SetBinError(3247,0.000815659);
   hhh_CB3D->SetBinError(3249,0.00308678);
   hhh_CB3D->SetBinError(3251,0.000905669);
   hhh_CB3D->SetBinError(3253,0.00237956);
   hhh_CB3D->SetBinError(3573,0.000540248);
   hhh_CB3D->SetBinError(3575,0.000333558);
   hhh_CB3D->SetBinError(3577,0.000351709);
   hhh_CB3D->SetBinError(3579,0.00116396);
   hhh_CB3D->SetBinError(3581,0.000398631);
   hhh_CB3D->SetBinError(3583,0.000331747);
   hhh_CB3D->SetBinError(3585,0.000331747);
   hhh_CB3D->SetBinError(3587,0.000331747);
   hhh_CB3D->SetBinError(3589,0.000331747);
   hhh_CB3D->SetBinError(3615,0.000525226);
   hhh_CB3D->SetBinError(3617,0.000391164);
   hhh_CB3D->SetBinError(3619,0.000346117);
   hhh_CB3D->SetBinError(3621,0.000372173);
   hhh_CB3D->SetBinError(3623,0.000506304);
   hhh_CB3D->SetBinError(3625,0.000332951);
   hhh_CB3D->SetBinError(3627,0.000739972);
   hhh_CB3D->SetBinError(3629,0.000739972);
   hhh_CB3D->SetBinError(3631,0.000739972);
   hhh_CB3D->SetBinError(3657,0.000588642);
   hhh_CB3D->SetBinError(3659,0.000395194);
   hhh_CB3D->SetBinError(3661,0.000511062);
   hhh_CB3D->SetBinError(3663,0.000451673);
   hhh_CB3D->SetBinError(3665,0.000435507);
   hhh_CB3D->SetBinError(3667,0.000311783);
   hhh_CB3D->SetBinError(3669,0.000708402);
   hhh_CB3D->SetBinError(3671,0.000739972);
   hhh_CB3D->SetBinError(3673,0.000739972);
   hhh_CB3D->SetBinError(3699,0.000943833);
   hhh_CB3D->SetBinError(3701,0.000499515);
   hhh_CB3D->SetBinError(3703,0.000456777);
   hhh_CB3D->SetBinError(3705,0.000498084);
   hhh_CB3D->SetBinError(3707,0.000472016);
   hhh_CB3D->SetBinError(3709,0.000282955);
   hhh_CB3D->SetBinError(3711,0.000484901);
   hhh_CB3D->SetBinError(3713,0.00109701);
   hhh_CB3D->SetBinError(3715,0.000739972);
   hhh_CB3D->SetBinError(3739,0.000913744);
   hhh_CB3D->SetBinError(3741,0.000620186);
   hhh_CB3D->SetBinError(3743,0.000909176);
   hhh_CB3D->SetBinError(3745,0.000596156);
   hhh_CB3D->SetBinError(3747,0.000958346);
   hhh_CB3D->SetBinError(3749,0.00111499);
   hhh_CB3D->SetBinError(3751,0.00113388);
   hhh_CB3D->SetBinError(3753,0.000484901);
   hhh_CB3D->SetBinError(3755,0.00109701);
   hhh_CB3D->SetBinError(3757,0.000739972);
   hhh_CB3D->SetBinError(3781,0.000913744);
   hhh_CB3D->SetBinError(3783,0.0017715);
   hhh_CB3D->SetBinError(3785,0.00156551);
   hhh_CB3D->SetBinError(3787,0.00176832);
   hhh_CB3D->SetBinError(3789,0.000958346);
   hhh_CB3D->SetBinError(3791,0.00111499);
   hhh_CB3D->SetBinError(3793,0.00113388);
   hhh_CB3D->SetBinError(3795,0.000484901);
   hhh_CB3D->SetBinError(3797,0.00109701);
   hhh_CB3D->SetBinError(3799,0.000739972);
   hhh_CB3D->SetEntries(420);
  
   const Int_t    nBinsEta              = 6;
   Double_t       leftEta  [nBinsEta]   = { 0.02,  0.46, 0.81, 1.16,           1.653,  2.2, }; 
   Double_t       rightEta [nBinsEta]   = { 0.42,  0.77, 1.13, 1.44,    2.2,    2.5 }; 
   
   const Int_t    nBinsET             = 7;
   Double_t       leftET  [nBinsET]   = {5.,  
					 10., 20., 30., 50., 
					 100., 150.};
   Double_t       rightET [nBinsET]   = {10., 20., 30., 50.,
					 100., 150., 
					 200.};

   const Int_t    nBinsBr            = 10;
   Double_t       leftBr  [nBinsBr]  = {0.8,
					1.0, 1.2, 1.4, 1.6, 1.8,
					2.0, 
					3.0, 
					4.0, 5.0 };
   Double_t       rightBr [nBinsBr]  = {1.0, 1.2, 1.4, 1.6, 1.8,
					2.0, 
					3.0, 
					4.0, 5.0, 
					10.0};

  // Find the correct (br,eta,ET) bin for the h_ErecEgen_3D[nBinsBr][nBinsEta][nBinsET]
  Int_t iEta    = -1;
  Int_t iBr     = -1;
  Int_t iET     = -1;
  //
  for (Int_t iiEta = 0; iiEta < nBinsEta; ++iiEta){ 
    if ( leftEta[iiEta] <= TMath::Abs(nt_em_eta) && TMath::Abs(nt_em_eta) <rightEta[iiEta]) {
      iEta = iiEta; 
      // cout << "ETA " << leftEta[iiEta]  << " " << TMath::Abs(nt_em_eta) << " " << rightEta[iiEta] << " " << iEta << endl;
    }
  }
  for (Int_t iiBr  = 0; iiBr  < nBinsBr;  ++iiBr ){ 
    if ( leftBr [iiBr]  <= nt_em_br1             &&             nt_em_br1 <rightBr [iiBr] ) {
      iBr  = iiBr;  
      // cout << "BR " << leftBr[iiBr]  << " " << nt_em_br1 << " " << rightBr[iiBr] << " " << iBr << endl;
    }
  }
  // Find the correct (ET) bin for the h_ETcorrBrEta_EX[nBinsET]
  for (Int_t iiET  = 0; iiET  < nBinsET;  ++iiET ){ 
    if ( leftET [iiET]  <= nt_emCorrEta_et      &&       nt_emCorrEta_et < rightET[iiET] ) 
      iET  = iiET;  
    // cout << "ET " << leftBr[iiET]  << " " << nt_emCorrEta_et << " " << rightBr[iiET] << " " << nt_emCorrEta_et << endl;
  }		
  if (iEta == -1 || iBr == -1 || iET == -1) return 1;
  
  // Initialize the correction factors
  Double_t corr3D = 1.; 
  
  corr3D  = hhh_CB3D->GetBinContent(2*iBr+1, 2*iEta+1, 2*iET+1);

  return corr3D;

}
  


#endif
