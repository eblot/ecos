#ifndef CYGONCE_LIBM_ERFCF_H
#define CYGONCE_LIBM_ERFCF_H
//===========================================================================
//
//      erfcf.h
//
//      Test vectors for testing of erfcf() math library function
//
//===========================================================================
// ####ECOSGPLCOPYRIGHTBEGIN####
// -------------------------------------------
// This file is part of eCos, the Embedded Configurable Operating System.
// Copyright (C) 2012 Free Software Foundation, Inc.
//
// eCos is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 2 or (at your option) any later
// version.
//
// eCos is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License
// along with eCos; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//
// As a special exception, if other files instantiate templates or use
// macros or inline functions from this file, or you compile this file
// and link it with other works to produce a work based on this file,
// this file does not by itself cause the resulting work to be covered by
// the GNU General Public License. However the source code for this file
// must still be made available in accordance with section (3) of the GNU
// General Public License v2.
//
// This exception does not invalidate any other reasons why a work based
// on this file might be covered by the GNU General Public License.
// -------------------------------------------
// ####EERFCFGPLCOPYRIGHTEND####
//===========================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):
// Contributors:  visar, ilijak
// Date:        1998-02-13
// Purpose:
// Description:
// Usage:       #include "vectors/erfcf.h"
//
//####DESCRIPTIONEND####
//
//===========================================================================


// CONFIGURATION

#include <pkgconf/libm.h>   // Configuration header


// INCLUDES

#include <cyg/infra/cyg_type.h>    // Common type definitions and support
#include "vectors/vector_support_float.h"// extra support for math tests

#define ERFCF_TOLERANCE 1.0E-04

static const Cyg_libm_test_float_vec_t erfcf_vec[] = {

// AUTOMATICALLY GENERATED VECTORS START

{0, 3214514586u, 2147493556u, 1072989483u, 0, ERFCF_TOLERANCE, 0},
{1, 3214430700u, 2147493556u, 1072966786u, 0, ERFCF_TOLERANCE, 0},
{2, 3214346813u, 2147493556u, 1072943542u, 0, ERFCF_TOLERANCE, 0},
{3, 3214262927u, 2147493556u, 1072919744u, 0, ERFCF_TOLERANCE, 0},
{4, 3214179041u, 2147493556u, 1072895382u, 0, ERFCF_TOLERANCE, 0},
{5, 3214095155u, 2147493556u, 1072870448u, 0, ERFCF_TOLERANCE, 0},
{6, 3214011269u, 2147493556u, 1072844934u, 0, ERFCF_TOLERANCE, 0},
{7, 3213927383u, 2147493556u, 1072818831u, 0, ERFCF_TOLERANCE, 0},
{8, 3213843497u, 2147493556u, 1072792132u, 0, ERFCF_TOLERANCE, 0},
{9, 3213759611u, 2147493556u, 1072764828u, 0, ERFCF_TOLERANCE, 0},
{10, 3213675725u, 2147493556u, 1072736911u, 0, ERFCF_TOLERANCE, 0},
{11, 3213591839u, 2147493556u, 1072708374u, 0, ERFCF_TOLERANCE, 0},
{12, 3213507953u, 2147493556u, 1072679207u, 0, ERFCF_TOLERANCE, 0},
{13, 3213424067u, 2147493556u, 1072649403u, 0, ERFCF_TOLERANCE, 0},
{14, 3213340180u, 2147493556u, 1072618955u, 0, ERFCF_TOLERANCE, 0},
{15, 3213256294u, 2147493556u, 1072587854u, 0, ERFCF_TOLERANCE, 0},
{16, 3213172408u, 2147493556u, 1072556094u, 0, ERFCF_TOLERANCE, 0},
{17, 3213088522u, 2147493556u, 1072523666u, 0, ERFCF_TOLERANCE, 0},
{18, 3213004636u, 2147493556u, 1072490563u, 0, ERFCF_TOLERANCE, 0},
{19, 3212920750u, 2147493556u, 1072456777u, 0, ERFCF_TOLERANCE, 0},
{20, 3212836864u, 2147493556u, 1072422303u, 0, ERFCF_TOLERANCE, 0},
{21, 3212669092u, 2147493556u, 1072387132u, 0, ERFCF_TOLERANCE, 0},
{22, 3212501320u, 2147493556u, 1072351257u, 0, ERFCF_TOLERANCE, 0},
{23, 3212333548u, 2147493556u, 1072314673u, 0, ERFCF_TOLERANCE, 0},
{24, 3212165775u, 2147493556u, 1072277371u, 0, ERFCF_TOLERANCE, 0},
{25, 3211998003u, 2147493556u, 1072239347u, 0, ERFCF_TOLERANCE, 0},
{26, 3211662459u, 2147493556u, 1072161105u, 0, ERFCF_TOLERANCE, 0},
{27, 3211494687u, 2147493556u, 1072120874u, 0, ERFCF_TOLERANCE, 0},
{28, 3211326915u, 2147493556u, 1072079897u, 0, ERFCF_TOLERANCE, 0},
{29, 3211159142u, 2147493556u, 1072038167u, 0, ERFCF_TOLERANCE, 0},
{30, 3210991370u, 2147493556u, 1071995679u, 0, ERFCF_TOLERANCE, 0},
{31, 3210823598u, 2147493556u, 1071952428u, 0, ERFCF_TOLERANCE, 0},
{32, 3210655826u, 2147493556u, 1071908409u, 0, ERFCF_TOLERANCE, 0},
{33, 3210488054u, 2147493556u, 1071863617u, 0, ERFCF_TOLERANCE, 0},
{34, 3210320282u, 2147493556u, 1071818048u, 0, ERFCF_TOLERANCE, 0},
{35, 3210152509u, 2147493556u, 1071771698u, 0, ERFCF_TOLERANCE, 0},
{36, 3209984737u, 2147493556u, 1071724563u, 0, ERFCF_TOLERANCE, 0},
{37, 3209816965u, 2147493556u, 1071676639u, 0, ERFCF_TOLERANCE, 0},
{38, 3209649193u, 2147493556u, 1071627922u, 0, ERFCF_TOLERANCE, 0},
{39, 3209481421u, 2147493556u, 1071578410u, 0, ERFCF_TOLERANCE, 0},
{40, 3209313649u, 2147493556u, 1071528099u, 0, ERFCF_TOLERANCE, 0},
{41, 3209145876u, 2147493556u, 1071476987u, 0, ERFCF_TOLERANCE, 0},
{42, 3208978104u, 2147493556u, 1071425072u, 0, ERFCF_TOLERANCE, 0},
{43, 3208810332u, 2147493556u, 1071372351u, 0, ERFCF_TOLERANCE, 0},
{44, 3208642560u, 2147493556u, 1071318822u, 0, ERFCF_TOLERANCE, 0},
{45, 3208474788u, 2147493556u, 1071264484u, 0, ERFCF_TOLERANCE, 0},
{46, 3208307016u, 2147493556u, 1071209336u, 0, ERFCF_TOLERANCE, 0},
{47, 3208139244u, 2147493556u, 1071153378u, 0, ERFCF_TOLERANCE, 0},
{48, 3207971471u, 2147493556u, 1071096607u, 0, ERFCF_TOLERANCE, 0},
{49, 3207803699u, 2147493556u, 1071039024u, 0, ERFCF_TOLERANCE, 0},
{50, 3207635927u, 2147493556u, 1070980630u, 0, ERFCF_TOLERANCE, 0},
{51, 3207468155u, 2147493556u, 1070921425u, 0, ERFCF_TOLERANCE, 0},
{52, 3207300383u, 2147493556u, 1070861409u, 0, ERFCF_TOLERANCE, 0},
{53, 3207132611u, 2147493556u, 1070800583u, 0, ERFCF_TOLERANCE, 0},
{54, 3206964838u, 2147493556u, 1070738948u, 0, ERFCF_TOLERANCE, 0},
{55, 3206797066u, 2147493556u, 1070676508u, 0, ERFCF_TOLERANCE, 0},
{56, 3206629294u, 2147493556u, 1070613263u, 0, ERFCF_TOLERANCE, 0},
{57, 3206461522u, 2147493556u, 1070549216u, 0, ERFCF_TOLERANCE, 0},
{58, 3206293750u, 2147493556u, 1070484370u, 0, ERFCF_TOLERANCE, 0},
{59, 3206125978u, 2147493556u, 1070418728u, 0, ERFCF_TOLERANCE, 0},
{60, 3205958205u, 2147493556u, 1070352294u, 0, ERFCF_TOLERANCE, 0},
{61, 3205790433u, 2147493556u, 1070285071u, 0, ERFCF_TOLERANCE, 0},
{62, 3205622661u, 2147493556u, 1070217063u, 0, ERFCF_TOLERANCE, 0},
{63, 3205454889u, 2147493556u, 1070148277u, 0, ERFCF_TOLERANCE, 0},
{64, 3205287117u, 2147493556u, 1070078715u, 0, ERFCF_TOLERANCE, 0},
{65, 3205119345u, 2147493556u, 1070008384u, 0, ERFCF_TOLERANCE, 0},
{66, 3204951572u, 2147493556u, 1069937289u, 0, ERFCF_TOLERANCE, 0},
{67, 3204783800u, 2147493556u, 1069865437u, 0, ERFCF_TOLERANCE, 0},
{68, 3204616028u, 2147493556u, 1069792833u, 0, ERFCF_TOLERANCE, 0},
{69, 3204448256u, 2147493556u, 1069719485u, 0, ERFCF_TOLERANCE, 0},
{70, 3204112712u, 2147493556u, 1069645401u, 0, ERFCF_TOLERANCE, 0},
{71, 3203777167u, 2147493556u, 1069570586u, 0, ERFCF_TOLERANCE, 0},
{72, 3203441623u, 2147493556u, 1069495050u, 0, ERFCF_TOLERANCE, 0},
{73, 3203106079u, 2147493556u, 1069418800u, 0, ERFCF_TOLERANCE, 0},
{74, 3202770534u, 2147493556u, 1069341846u, 0, ERFCF_TOLERANCE, 0},
{75, 3202434990u, 2147493556u, 1069264196u, 0, ERFCF_TOLERANCE, 0},
{76, 3202099446u, 2147493556u, 1069185859u, 0, ERFCF_TOLERANCE, 0},
{77, 3201763901u, 2147493556u, 1069106846u, 0, ERFCF_TOLERANCE, 0},
{78, 3201428357u, 2147493556u, 1069027167u, 0, ERFCF_TOLERANCE, 0},
{79, 3201092813u, 2147493556u, 1068946832u, 0, ERFCF_TOLERANCE, 0},
{80, 3200757268u, 2147493556u, 1068865851u, 0, ERFCF_TOLERANCE, 0},
{81, 3200421724u, 2147493556u, 1068784236u, 0, ERFCF_TOLERANCE, 0},
{82, 3200086180u, 2147493556u, 1068701999u, 0, ERFCF_TOLERANCE, 0},
{83, 3199750636u, 2147493556u, 1068619150u, 0, ERFCF_TOLERANCE, 0},
{84, 3199415091u, 2147493556u, 1068535703u, 0, ERFCF_TOLERANCE, 0},
{85, 3199079547u, 2147493556u, 1068451670u, 0, ERFCF_TOLERANCE, 0},
{86, 3198744003u, 2147493556u, 1068367064u, 0, ERFCF_TOLERANCE, 0},
{87, 3198408458u, 2147493556u, 1068281897u, 0, ERFCF_TOLERANCE, 0},
{88, 3198072914u, 2147493556u, 1068196184u, 0, ERFCF_TOLERANCE, 0},
{89, 3197737370u, 2147493556u, 1068109937u, 0, ERFCF_TOLERANCE, 0},
{90, 3197401825u, 2147493556u, 1068023171u, 0, ERFCF_TOLERANCE, 0},
{91, 3197066281u, 2147493556u, 1067935901u, 0, ERFCF_TOLERANCE, 0},
{92, 3196730737u, 2147493556u, 1067848141u, 0, ERFCF_TOLERANCE, 0},
{93, 3196395192u, 2147493556u, 1067759905u, 0, ERFCF_TOLERANCE, 0},
{94, 3196059648u, 2147493556u, 1067671210u, 0, ERFCF_TOLERANCE, 0},
{95, 3195388559u, 2147493556u, 1067582070u, 0, ERFCF_TOLERANCE, 0},
{96, 3194717471u, 2147493556u, 1067492501u, 0, ERFCF_TOLERANCE, 0},
{97, 3194046382u, 2147493556u, 1067402519u, 0, ERFCF_TOLERANCE, 0},
{98, 3193375293u, 2147493556u, 1067312140u, 0, ERFCF_TOLERANCE, 0},
{99, 3192704205u, 2147493556u, 1067221381u, 0, ERFCF_TOLERANCE, 0},
{100, 3192033116u, 2147493556u, 1067130258u, 0, ERFCF_TOLERANCE, 0},
{101, 3191362028u, 2147493556u, 1067038788u, 0, ERFCF_TOLERANCE, 0},
{102, 3190690939u, 2147493556u, 1066946988u, 0, ERFCF_TOLERANCE, 0},
{103, 3190019850u, 2147493556u, 1066854876u, 0, ERFCF_TOLERANCE, 0},
{104, 3189348762u, 2147493556u, 1066762468u, 0, ERFCF_TOLERANCE, 0},
{105, 3188677673u, 2147493556u, 1066669783u, 0, ERFCF_TOLERANCE, 0},
{106, 3188006584u, 2147493556u, 1066576838u, 0, ERFCF_TOLERANCE, 0},
{107, 3186999951u, 2147493556u, 1066483651u, 0, ERFCF_TOLERANCE, 0},
{108, 3185657774u, 2147493556u, 1066390240u, 0, ERFCF_TOLERANCE, 0},
{109, 3184315597u, 2147493556u, 1066296623u, 0, ERFCF_TOLERANCE, 0},
{110, 3182973420u, 2147493556u, 1066202819u, 0, ERFCF_TOLERANCE, 0},
{111, 3181631242u, 2147493556u, 1066108846u, 0, ERFCF_TOLERANCE, 0},
{112, 3180289065u, 2147493556u, 1066014723u, 0, ERFCF_TOLERANCE, 0},
{113, 3178611343u, 2147493556u, 1065920467u, 0, ERFCF_TOLERANCE, 0},
{114, 3175926989u, 2147493556u, 1065826098u, 0, ERFCF_TOLERANCE, 0},
{115, 3173242634u, 2147493556u, 1065731635u, 0, ERFCF_TOLERANCE, 0},
{116, 3170222735u, 2147493556u, 1065637097u, 0, ERFCF_TOLERANCE, 0},
{117, 3164854026u, 2147493556u, 1065542501u, 0, ERFCF_TOLERANCE, 0},
{118, 3156465418u, 2147493556u, 1065447868u, 0, ERFCF_TOLERANCE, 0},
{119, 646742016u, 2147493556u, 1065353216u, 0, ERFCF_TOLERANCE, 0},
{120, 1008981770u, 2147493556u, 1065163912u, 0, ERFCF_TOLERANCE, 0},
{121, 1017370378u, 2147493556u, 1064974645u, 0, ERFCF_TOLERANCE, 0},
{122, 1022739087u, 2147493556u, 1064785455u, 0, ERFCF_TOLERANCE, 0},
{123, 1025758986u, 2147493556u, 1064596377u, 0, ERFCF_TOLERANCE, 0},
{124, 1028443341u, 2147493556u, 1064407451u, 0, ERFCF_TOLERANCE, 0},
{125, 1031127695u, 2147493556u, 1064218714u, 0, ERFCF_TOLERANCE, 0},
{126, 1032805417u, 2147493556u, 1064030203u, 0, ERFCF_TOLERANCE, 0},
{127, 1034147594u, 2147493556u, 1063841956u, 0, ERFCF_TOLERANCE, 0},
{128, 1035489772u, 2147493556u, 1063654010u, 0, ERFCF_TOLERANCE, 0},
{129, 1036831949u, 2147493556u, 1063466401u, 0, ERFCF_TOLERANCE, 0},
{130, 1038174126u, 2147493556u, 1063279168u, 0, ERFCF_TOLERANCE, 0},
{131, 1039516303u, 2147493556u, 1063092346u, 0, ERFCF_TOLERANCE, 0},
{132, 1040522936u, 2147493556u, 1062905972u, 0, ERFCF_TOLERANCE, 0},
{133, 1041194025u, 2147493556u, 1062720082u, 0, ERFCF_TOLERANCE, 0},
{134, 1041865114u, 2147493556u, 1062534711u, 0, ERFCF_TOLERANCE, 0},
{135, 1042536202u, 2147493556u, 1062349896u, 0, ERFCF_TOLERANCE, 0},
{136, 1043207291u, 2147493556u, 1062165671u, 0, ERFCF_TOLERANCE, 0},
{137, 1043878380u, 2147493556u, 1061982072u, 0, ERFCF_TOLERANCE, 0},
{138, 1044549468u, 2147493556u, 1061799132u, 0, ERFCF_TOLERANCE, 0},
{139, 1045220557u, 2147493556u, 1061616887u, 0, ERFCF_TOLERANCE, 0},
{140, 1045891645u, 2147493556u, 1061435368u, 0, ERFCF_TOLERANCE, 0},
{141, 1046562734u, 2147493556u, 1061254611u, 0, ERFCF_TOLERANCE, 0},
{142, 1047233823u, 2147493556u, 1061074647u, 0, ERFCF_TOLERANCE, 0},
{143, 1047904911u, 2147493556u, 1060895509u, 0, ERFCF_TOLERANCE, 0},
{144, 1048576000u, 2147493556u, 1060717228u, 0, ERFCF_TOLERANCE, 0},
{145, 1048911544u, 2147493556u, 1060539838u, 0, ERFCF_TOLERANCE, 0},
{146, 1049247089u, 2147493556u, 1060363366u, 0, ERFCF_TOLERANCE, 0},
{147, 1049582633u, 2147493556u, 1060187846u, 0, ERFCF_TOLERANCE, 0},
{148, 1049918177u, 2147493556u, 1060013305u, 0, ERFCF_TOLERANCE, 0},
{149, 1050253722u, 2147493556u, 1059839774u, 0, ERFCF_TOLERANCE, 0},
{150, 1050589266u, 2147493556u, 1059667281u, 0, ERFCF_TOLERANCE, 0},
{151, 1050924810u, 2147493556u, 1059495854u, 0, ERFCF_TOLERANCE, 0},
{152, 1051260355u, 2147493556u, 1059325520u, 0, ERFCF_TOLERANCE, 0},
{153, 1051595899u, 2147493556u, 1059156307u, 0, ERFCF_TOLERANCE, 0},
{154, 1051931443u, 2147493556u, 1058988241u, 0, ERFCF_TOLERANCE, 0},
{155, 1052266988u, 2147493556u, 1058821347u, 0, ERFCF_TOLERANCE, 0},
{156, 1052602532u, 2147493556u, 1058655651u, 0, ERFCF_TOLERANCE, 0},
{157, 1052938076u, 2147493556u, 1058491176u, 0, ERFCF_TOLERANCE, 0},
{158, 1053273620u, 2147493556u, 1058327947u, 0, ERFCF_TOLERANCE, 0},
{159, 1053609165u, 2147493556u, 1058165985u, 0, ERFCF_TOLERANCE, 0},
{160, 1053944709u, 2147493556u, 1058005314u, 0, ERFCF_TOLERANCE, 0},
{161, 1054280253u, 2147493556u, 1057845955u, 0, ERFCF_TOLERANCE, 0},
{162, 1054615798u, 2147493556u, 1057687929u, 0, ERFCF_TOLERANCE, 0},
{163, 1054951342u, 2147493556u, 1057531257u, 0, ERFCF_TOLERANCE, 0},
{164, 1055286886u, 2147493556u, 1057375957u, 0, ERFCF_TOLERANCE, 0},
{165, 1055622431u, 2147493556u, 1057222048u, 0, ERFCF_TOLERANCE, 0},
{166, 1055957975u, 2147493556u, 1057069549u, 0, ERFCF_TOLERANCE, 0},
{167, 1056293519u, 2147493556u, 1056872345u, 0, ERFCF_TOLERANCE, 0},
{168, 1056629064u, 2147493556u, 1056573086u, 0, ERFCF_TOLERANCE, 0},
{169, 1056964608u, 2147493556u, 1056276746u, 0, ERFCF_TOLERANCE, 0},
{170, 1057132380u, 2147493556u, 1055983355u, 0, ERFCF_TOLERANCE, 0},
{171, 1057300152u, 2147493556u, 1055692942u, 0, ERFCF_TOLERANCE, 0},
{172, 1057467924u, 2147493556u, 1055405532u, 0, ERFCF_TOLERANCE, 0},
{173, 1057635697u, 2147493556u, 1055121152u, 0, ERFCF_TOLERANCE, 0},
{174, 1057803469u, 2147493556u, 1054839828u, 0, ERFCF_TOLERANCE, 0},
{175, 1057971241u, 2147493556u, 1054561582u, 0, ERFCF_TOLERANCE, 0},
{176, 1058139013u, 2147493556u, 1054286434u, 0, ERFCF_TOLERANCE, 0},
{177, 1058306785u, 2147493556u, 1054014405u, 0, ERFCF_TOLERANCE, 0},
{178, 1058474557u, 2147493556u, 1053745514u, 0, ERFCF_TOLERANCE, 0},
{179, 1058642330u, 2147493556u, 1053479775u, 0, ERFCF_TOLERANCE, 0},
{180, 1058810102u, 2147493556u, 1053217208u, 0, ERFCF_TOLERANCE, 0},
{181, 1058977874u, 2147493556u, 1052957824u, 0, ERFCF_TOLERANCE, 0},
{182, 1059145646u, 2147493556u, 1052701637u, 0, ERFCF_TOLERANCE, 0},
{183, 1059313418u, 2147493556u, 1052448657u, 0, ERFCF_TOLERANCE, 0},
{184, 1059481190u, 2147493556u, 1052198895u, 0, ERFCF_TOLERANCE, 0},
{185, 1059648963u, 2147493556u, 1051952357u, 0, ERFCF_TOLERANCE, 0},
{186, 1059816735u, 2147493556u, 1051709054u, 0, ERFCF_TOLERANCE, 0},
{187, 1059984507u, 2147493556u, 1051468989u, 0, ERFCF_TOLERANCE, 0},
{188, 1060152279u, 2147493556u, 1051232167u, 0, ERFCF_TOLERANCE, 0},
{189, 1060320051u, 2147493556u, 1050998590u, 0, ERFCF_TOLERANCE, 0},
{190, 1060487823u, 2147493556u, 1050768261u, 0, ERFCF_TOLERANCE, 0},
{191, 1060655596u, 2147493556u, 1050541178u, 0, ERFCF_TOLERANCE, 0},
{192, 1060823368u, 2147493556u, 1050317342u, 0, ERFCF_TOLERANCE, 0},
{193, 1060991140u, 2147493556u, 1050096751u, 0, ERFCF_TOLERANCE, 0},
{194, 1061158912u, 2147493556u, 1049879401u, 0, ERFCF_TOLERANCE, 0},
{195, 1061326684u, 2147493556u, 1049665286u, 0, ERFCF_TOLERANCE, 0},
{196, 1061494456u, 2147493556u, 1049454401u, 0, ERFCF_TOLERANCE, 0},
{197, 1061662228u, 2147493556u, 1049246739u, 0, ERFCF_TOLERANCE, 0},
{198, 1061830001u, 2147493556u, 1049042290u, 0, ERFCF_TOLERANCE, 0},
{199, 1061997773u, 2147493556u, 1048841047u, 0, ERFCF_TOLERANCE, 0},
{200, 1062165545u, 2147493556u, 1048642999u, 0, ERFCF_TOLERANCE, 0},
{201, 1062333317u, 2147493556u, 1048320265u, 0, ERFCF_TOLERANCE, 0},
{202, 1062501089u, 2147493556u, 1047936872u, 0, ERFCF_TOLERANCE, 0},
{203, 1062668861u, 2147493556u, 1047559791u, 0, ERFCF_TOLERANCE, 0},
{204, 1062836634u, 2147493556u, 1047188989u, 0, ERFCF_TOLERANCE, 0},
{205, 1063004406u, 2147493556u, 1046824440u, 0, ERFCF_TOLERANCE, 0},
{206, 1063172178u, 2147493556u, 1046466107u, 0, ERFCF_TOLERANCE, 0},
{207, 1063339950u, 2147493556u, 1046113956u, 0, ERFCF_TOLERANCE, 0},
{208, 1063507722u, 2147493556u, 1045767948u, 0, ERFCF_TOLERANCE, 0},
{209, 1063675494u, 2147493556u, 1045428044u, 0, ERFCF_TOLERANCE, 0},
{210, 1063843267u, 2147493556u, 1045094202u, 0, ERFCF_TOLERANCE, 0},
{211, 1064011039u, 2147493556u, 1044766382u, 0, ERFCF_TOLERANCE, 0},
{212, 1064178811u, 2147493556u, 1044444539u, 0, ERFCF_TOLERANCE, 0},
{213, 1064514355u, 2147493556u, 1043818599u, 0, ERFCF_TOLERANCE, 0},
{214, 1064682127u, 2147493556u, 1043514405u, 0, ERFCF_TOLERANCE, 0},
{215, 1064849900u, 2147493556u, 1043215994u, 0, ERFCF_TOLERANCE, 0},
{216, 1065017672u, 2147493556u, 1042923319u, 0, ERFCF_TOLERANCE, 0},
{217, 1065185444u, 2147493556u, 1042636324u, 0, ERFCF_TOLERANCE, 0},
{218, 1065353216u, 2147493556u, 1042354955u, 0, ERFCF_TOLERANCE, 0},
{219, 1065437102u, 2147493556u, 1042079158u, 0, ERFCF_TOLERANCE, 0},
{220, 1065520988u, 2147493556u, 1041808876u, 0, ERFCF_TOLERANCE, 0},
{221, 1065604874u, 2147493556u, 1041544051u, 0, ERFCF_TOLERANCE, 0},
{222, 1065688760u, 2147493556u, 1041284627u, 0, ERFCF_TOLERANCE, 0},
{223, 1065772646u, 2147493556u, 1041030542u, 0, ERFCF_TOLERANCE, 0},
{224, 1065856532u, 2147493556u, 1040781737u, 0, ERFCF_TOLERANCE, 0},
{225, 1065940419u, 2147493556u, 1040538149u, 0, ERFCF_TOLERANCE, 0},
{226, 1066024305u, 2147493556u, 1040299721u, 0, ERFCF_TOLERANCE, 0},
{227, 1066108191u, 2147493556u, 1039945382u, 0, ERFCF_TOLERANCE, 0},
{228, 1066192077u, 2147493556u, 1039488778u, 0, ERFCF_TOLERANCE, 0},
{229, 1066275963u, 2147493556u, 1039042110u, 0, ERFCF_TOLERANCE, 0},
{230, 1066359849u, 2147493556u, 1038605248u, 0, ERFCF_TOLERANCE, 0},
{231, 1066443735u, 2147493556u, 1038178063u, 0, ERFCF_TOLERANCE, 0},
{232, 1066527621u, 2147493556u, 1037760424u, 0, ERFCF_TOLERANCE, 0},
{233, 1066611507u, 2147493556u, 1037352199u, 0, ERFCF_TOLERANCE, 0},
{234, 1066695393u, 2147493556u, 1036953256u, 0, ERFCF_TOLERANCE, 0},
{235, 1066779279u, 2147493556u, 1036563462u, 0, ERFCF_TOLERANCE, 0},
{236, 1066863165u, 2147493556u, 1036182683u, 0, ERFCF_TOLERANCE, 0},
{237, 1066947052u, 2147493556u, 1035810780u, 0, ERFCF_TOLERANCE, 0},
{238, 3234402267u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{239, 3231108068u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{240, 3226013659u, 2147493556u, 1073741750u, 0, ERFCF_TOLERANCE, 0},
{241, 3217625051u, 2147493556u, 1073521027u, 0, ERFCF_TOLERANCE, 0},
{242, 0u, 2147493556u, 1065353216u, 0, ERFCF_TOLERANCE, 0},
{243, 1070141403u, 2147493556u, 1020763978u, 0, ERFCF_TOLERANCE, 0},
{244, 1078530011u, 2147493556u, 924117692u, 0, ERFCF_TOLERANCE, 0},
{245, 1083624420u, 2147493556u, 770301979u, 0, ERFCF_TOLERANCE, 0},
{246, 3253731328u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{247, 3252840038u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{248, 3251948749u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{249, 3251057459u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{250, 3250166170u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{251, 3249274880u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{252, 3248383590u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{253, 3247492301u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{254, 3246601011u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{255, 3245028147u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{256, 3243245568u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{257, 3241462989u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{258, 3239680410u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{259, 3237792973u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{260, 3234227814u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{261, 3230662656u, 2147493556u, 1073741824u, 0, ERFCF_TOLERANCE, 0},
{262, 3224580915u, 2147493556u, 1073741195u, 0, ERFCF_TOLERANCE, 0},
{263, 3213675725u, 2147493556u, 1072736911u, 0, ERFCF_TOLERANCE, 0},
{264, 1058642330u, 2147493556u, 1053479775u, 0, ERFCF_TOLERANCE, 0},
{265, 1075000115u, 2147493556u, 982898342u, 0, ERFCF_TOLERANCE, 0},
{266, 1082130432u, 2147493556u, 847539945u, 0, ERFCF_TOLERANCE, 0},
{267, 1085695590u, 2147493556u, 643437802u, 0, ERFCF_TOLERANCE, 0},
{268, 1089260749u, 2147493556u, 370838238u, 0, ERFCF_TOLERANCE, 0},
{269, 1091672474u, 2147493556u, 28724802u, 0, ERFCF_TOLERANCE, 0},
{270, 1093455053u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0},
{271, 1095237632u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0},
{272, 1097020211u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0},
{273, 1098802790u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0},
{274, 1099746509u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0},
{275, 1100637798u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0},
{276, 1101529088u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0},
{277, 1102420378u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0},
{278, 1103311667u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0},
{279, 1104202957u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0},
{280, 1105094246u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0},
{281, 1105985536u, 2147493556u, 0u, 0, ERFCF_TOLERANCE, 0}

// AUTOMATICALLY GENERATED VECTORS STOP

};

#endif // CYGONCE_LIBM_ERFCF_H multiple inclusion protection

// EOF erfcf.h
