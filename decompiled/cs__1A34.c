/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1A34_0005_001F_38E2()
 *
 * @name f__1A34_0005_001F_38E2
 * @implements 1A34:0005:001F:38E2 ()
 * @implements 1A34:001F:0005:5880
 * @implements 1A34:0021:0003:5914
 * @implements 1A34:0024:000D:C868
 * @implements 1A34:0031:0035:A18F
 * @implements 1A34:0066:0020:ECD3
 * @implements 1A34:0086:0014:BCC7
 * @implements 1A34:009A:0031:7529
 * @implements 1A34:00CB:0016:183D
 * @implements 1A34:00E1:0005:8D6E
 * @implements 1A34:00E6:000B:2449
 * @implements 1A34:00F1:0005:8CD6
 * @implements 1A34:00F6:0020:5691
 * @implements 1A34:0116:0008:87CF
 * @implements 1A34:011E:0023:DCFE
 * @implements 1A34:0141:001F:F414
 * @implements 1A34:014A:0016:17F2
 * @implements 1A34:0160:0011:25DB
 * @implements 1A34:0171:0012:C55C
 * @implements 1A34:0183:0009:9146
 * @implements 1A34:018C:0006:22E8
 * @implements 1A34:0192:0052:7BDF
 * @implements 1A34:01E4:000D:CC00
 * @implements 1A34:01E6:000B:0192
 * @implements 1A34:01F1:001A:B3E0
 * @implements 1A34:020B:0005:B1EE
 * @implements 1A34:0210:0006:12E4
 * @implements 1A34:0216:004F:3313
 * @implements 1A34:0222:0043:57C5
 * @implements 1A34:0265:0012:2E23
 * @implements 1A34:0277:0011:DFCD
 * @implements 1A34:027A:000E:8289
 * @implements 1A34:0288:0037:505C
 * @implements 1A34:029D:0022:BC63
 * @implements 1A34:02BF:0013:C5DB
 * @implements 1A34:02D2:001A:690B
 * @implements 1A34:02EC:003D:F117
 * @implements 1A34:0329:0006:571D
 * @implements 1A34:032C:0003:DD3F
 * @implements 1A34:032F:0006:62E9
 * @implements 1A34:0335:0020:A3AA
 * @implements 1A34:0355:0005:AF2E
 * @implements 1A34:035A:0006:12E4
 * @implements 1A34:0360:0019:3EE6
 * @implements 1A34:0379:001A:4C8B
 * @implements 1A34:0393:000A:CE9E
 * @implements 1A34:039D:000D:0906
 * @implements 1A34:03AA:0049:EA77
 * @implements 1A34:03AC:0047:AA6E
 * @implements 1A34:03AE:0045:6B7B
 * @implements 1A34:03CA:0029:43E6
 * @implements 1A34:03F3:0005:0DC9
 * @implements 1A34:03F5:0003:9F04
 * @implements 1A34:03F8:000D:6192
 * @implements 1A34:0405:000B:4959
 * @implements 1A34:0410:0008:5756
 * @implements 1A34:0418:0019:BEE7
 * @implements 1A34:0425:000C:09F0
 * @implements 1A34:0431:0011:C8E7
 * @implements 1A34:0442:007F:6425
 * @implements 1A34:0467:005A:1EF0
 * @implements 1A34:0476:004B:AB24
 * @implements 1A34:04C1:0006:0905
 * @implements 1A34:04C7:0017:222F
 * @implements 1A34:04D9:0005:D4FA
 * @implements 1A34:04DE:000E:A6CC
 * @implements 1A34:04E0:000C:A606
 * @implements 1A34:04EC:000E:19A4
 * @implements 1A34:04FA:001A:5B9C
 * @implements 1A34:0514:0015:C50E
 * @implements 1A34:0529:0010:4789
 * @implements 1A34:0539:0009:3786
 * @implements 1A34:0542:0028:49FE
 * @implements 1A34:056A:0010:2A49
 * @implements 1A34:057A:000C:6289
 * @implements 1A34:057E:0008:E802
 * @implements 1A34:0586:000D:0128
 * @implements 1A34:0593:001B:8929
 * @implements 1A34:05AE:0023:F92D
 * @implements 1A34:05D1:0008:5756
 * @implements 1A34:05D9:0022:D8CF
 * @implements 1A34:05FB:0005:ABEE
 * @implements 1A34:0600:0020:17AB
 * @implements 1A34:0620:0005:992E
 * @implements 1A34:0625:0035:322D
 * @implements 1A34:065A:000E:C47C
 * @implements 1A34:065D:000B:E6D6
 * @implements 1A34:0668:0005:0ECD
 * @implements 1A34:066D:0003:9C26
 * @implements 1A34:0670:000E:98BE
 * @implements 1A34:067E:005F:83A6
 * @implements 1A34:0692:004B:4188
 * @implements 1A34:06DD:0017:2B44
 * @implements 1A34:06F4:0023:A822
 * @implements 1A34:06F7:0020:BC73
 * @implements 1A34:0717:0013:97BE
 * @implements 1A34:072A:001E:C73B
 * @implements 1A34:0732:0016:30F8
 * @implements 1A34:0748:000E:BB12
 * @implements 1A34:0756:0003:6186
 * @implements 1A34:0759:000B:4959
 * @implements 1A34:0764:0008:5756
 * @implements 1A34:076C:0008:BA07
 * @implements 1A34:0774:000E:6A0F
 * @implements 1A34:0782:000D:9925
 * @implements 1A34:078F:001A:619C
 * @implements 1A34:07A3:0006:62E9
 * @implements 1A34:07A9:0036:8D87
 * @implements 1A34:07DF:0009:8575
 * @implements 1A34:07E2:0006:C124
 * @implements 1A34:07E8:000D:998F
 * @implements 1A34:07F5:00BF:B2A7
 * @implements 1A34:083E:0076:0B27
 * @implements 1A34:088A:002A:0918
 * @implements 1A34:08B4:0014:A574
 * @implements 1A34:08C8:0009:0B67
 * @implements 1A34:08D1:0013:42D2
 * @implements 1A34:08D3:0011:09E4
 * @implements 1A34:08E4:0009:EB67
 * @implements 1A34:08ED:0008:9124
 * @implements 1A34:08EF:0006:C896
 * @implements 1A34:08F5:0006:F7CE
 *
 * Called From: 1A34:21C7:000B:7C30
 * Called From: 1A34:21C7:001C:C286
 */
void f__1A34_0005_001F_38E2()
{
l__0005:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0024;
l__001F:
	emu_xorw(&emu_ax, emu_ax);
l__0021:
	goto l__08F5;
l__0024:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x1) != 0) goto l__0031;
	goto l__001F;
l__0031:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0066); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
l__0066:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__0086;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__0086;
	goto l__001F;
l__0086:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_andw(&emu_dx, 0xC000);
	emu_andw(&emu_ax, 0xC000);
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx != 0) goto l__009A;
	goto l__011E;
l__009A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x80);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x80) == 0) goto l__00E6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00CB); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__00CB:
	emu_andw(&emu_ax, 0xF);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_andw(&emu_dx, 0xFF);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00E1); f__1A34_1E99_0012_1117();
l__00E1:
	emu_addw(&emu_sp, 0xA);
	goto l__00F6;
l__00E6:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00F1); f__1A34_10EC_000E_A326();
l__00F1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__07E2;
l__00F6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x200) == 0) goto l__011E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__011E;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0116); emu_cs = 0x0C10; emu_Object_IsScriptVariable4NotNull();
l__0116:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__011E;
	goto l__00E6;
l__011E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x6C) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x10) == 0) goto l__014A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x80);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x80) == 0) goto l__014A;
	emu_push(emu_cs); emu_push(0x0141); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__0141:
	emu_andb(&emu_al, 0x7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x6C) = emu_al;
l__014A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0160); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__0160:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0171); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0171:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x20);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x20) != 0) goto l__0183;
	goto l__027A;
l__0183:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x30);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x30) goto l__018C;
	goto l__027A;
l__018C:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0192); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
l__0192:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == 0) goto l__0210;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x0) goto l__0210;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) goto l__0210;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__01E6;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0x18)) goto l__01E6;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x01E4); f__1A34_0F48_0018_0DB8();
l__01E4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__01E6:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs);
	emu_push(0x01F1); emu_Unit_UntargetMe();
l__01F1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_get_memory16(emu_es, emu_bx, 0x20) = 0x1;
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x020B); emu_cs = 0x176C; emu_Unit_SetAction();
l__020B:
	emu_addw(&emu_sp, 0x6);
	goto l__027A;
l__0210:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0216); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0216:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) {
		emu_cmpw(&emu_si, 0x2);
		if (emu_si != 0x2) goto l__027A;
	}
l__0222:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__027A;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0265); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
l__0265:
	emu_pop(&emu_cx);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = 0x33C8;
	emu_addw(&emu_ax, 0x0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0277); emu_cs = 0x151A; f__151A_000E_0013_5840();
l__0277:
	emu_addw(&emu_sp, 0xE);
l__027A:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0288); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__0288:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_xorw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x20);
	}
l__029D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4B);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x49);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02BF); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__02BF:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x18);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x18) goto l__02D2;
	goto l__03F8;
l__02D2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x02EC); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
l__02EC:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == 0) goto l__032F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x8) != 0) goto l__032C;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs);
	emu_push(0x0329); emu_Unit_Damage();
l__0329:
	emu_addw(&emu_sp, 0x8);
l__032C:
	goto l__03AE;
l__032F:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0335); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__0335:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (emu_ax == 0) goto l__035A;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x0355); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
l__0355:
	emu_addw(&emu_sp, 0x8);
	goto l__03AE;
l__035A:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0360); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0360:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xB);
	if (emu_ax != 0xB) goto l__03AE;
	emu_ax = 0x2C94;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, 0x00, 0x55A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp, -0x1E)) goto l__0379;
	emu_ax = 0x1;
	/* Unresolved jump */ emu_ip = 0x037B; emu_last_cs = 0x1A34; emu_last_ip = 0x0377; emu_last_length = 0x0019; emu_last_crc = 0x3EE6; emu_call();
l__0379:
	emu_xorw(&emu_ax, emu_ax);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__03AE;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_ax = 0x2C94;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x55A));
	emu_push(emu_cs); emu_push(0x0393); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_ValueToPercent();
l__0393:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_push(emu_cs); emu_push(0x039D); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__039D:
	emu_andw(&emu_ax, 0xFF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x20)) goto l__03AA;
	emu_ax = 0x1;
	goto l__03AC;
l__03AA:
	emu_xorw(&emu_ax, emu_ax);
l__03AC:
	emu_si = emu_ax;
l__03AE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x52);
	emu_sarw(&emu_ax, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xE) < (int16)emu_ax) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	}
l__03CA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xE) == 0x0) { /* Unresolved jump */ emu_ip = 0x03E8; emu_last_cs = 0x1A34; emu_last_ip = 0x03D9; emu_last_length = 0x0029; emu_last_crc = 0x43E6; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x51);
	emu_ah = 0x0;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__03F5;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x03F3); f__1A34_10EC_000E_A326();
l__03F3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__03F5:
	goto l__088A;
l__03F8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x17);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x17) goto l__0405;
	goto l__04C7;
l__0405:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0410); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0410:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0418:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xB);
	if (emu_si != 0xB) {
		emu_cmpw(&emu_si, 0xC);
		if (emu_si != 0xC) goto l__0467;
	}
l__0425:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_push(emu_cs); emu_push(0x0431); emu_cs = 0x167E; emu_Tools_Index_GetType();
l__0431:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax != 0x3) goto l__0467;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0442); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0442:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ah = 0x0;
	emu_andw(&emu_ax, 0x7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx == emu_ax) {
		emu_xorw(&emu_si, emu_si);
	}
l__0467:
	emu_cmpw(&emu_si, 0xB);
	if (emu_si != 0xB) {
		emu_cmpw(&emu_si, 0xC);
		if (emu_si != 0xC) {
			emu_cmpw(&emu_si, 0x6);
			if (emu_si != 0x6) goto l__04C7;
		}
	}
l__0476:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x54);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_bx = 0xA;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_andw(&emu_dx, 0x3);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x04C1); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
l__04C1:
	emu_addw(&emu_sp, 0xA);
	goto l__00E6;
l__04C7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x52);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x10);
		if ((int16)emu_get_memory16(emu_ss, emu_bp,  0xA) >= (int16)0x10) goto l__04DE;
	}
l__04D9:
	emu_ax = 0x1;
	goto l__04E0;
l__04DE:
	emu_xorw(&emu_ax, emu_ax);
l__04E0:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) goto l__04EC;
	goto l__088A;
l__04EC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x2) != 0) goto l__04FA;
	goto l__0670;
l__04FA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x51);
	emu_ah = 0x0;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0514;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x14);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x14) goto l__0514;
	goto l__066D;
l__0514:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x12);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x12) goto l__0586;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0529); emu_cs = 0x0F3F; emu_Tile_GetX();
l__0529:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0539); emu_cs = 0x0F3F; emu_Tile_GetY();
l__0539:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__057E;
l__0542:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC8;
	emu_push(emu_ax);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6296));
	emu_push(emu_ax);
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6294));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x056A); emu_cs = 0x0F3F; emu_Tile_GetXY();
l__056A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_push(emu_cs); emu_push(0x057A); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
l__057A:
	emu_addw(&emu_sp, 0xA);
	emu_incw(&emu_si);
l__057E:
	emu_cmpw(&emu_si, 0x11);
	if ((int16)emu_si < (int16)0x11) goto l__0542;
	goto l__065D;
l__0586:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0xFFFF) goto l__0593;
	goto l__065D;
l__0593:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x800);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x800) == 0) goto l__0600;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x05AE); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__05AE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0x0) goto l__0600;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x05D1); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__05D1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05D9); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__05D9:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0600;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05FB); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
l__05FB:
	emu_addw(&emu_sp, 0xA);
	goto l__065D;
l__0600:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x15);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x15) goto l__0625;
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_push(emu_cs); emu_push(0x0620); emu_cs = 0x06F7; emu_Map_DeviateArea();
l__0620:
	emu_addw(&emu_sp, 0x8);
	goto l__065D;
l__0625:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x54);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_bx = 0x14;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_andw(&emu_dx, 0x3);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x065A); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
l__065A:
	emu_addw(&emu_sp, 0xA);
l__065D:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0668); f__1A34_10EC_000E_A326();
l__0668:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__08EF;
l__066D:
	goto l__088A;
l__0670:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x40);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x40) != 0) goto l__067E;
	goto l__088A;
l__067E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
		emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	}
l__0692:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x5C);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x5A);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x60) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x5E) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x5C) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x5A) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4B) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x49) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x400);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x400) == 0) goto l__06F7;
	emu_push(emu_cs); emu_push(0x06DD); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__06DD:
	emu_testw(&emu_ax, 0x3);
	if ((emu_ax & 0x3) != 0) goto l__06F7;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x06F4); emu_Unit_Damage();
l__06F4:
	emu_addw(&emu_sp, 0x8);
l__06F7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__0774;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) == 0x0) goto l__0759;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x0717); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__0717:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x072A); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__072A:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, 0x20);
	if ((int16)emu_ax >= (int16)0x20) goto l__0759;
l__0732:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1F4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0748); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
l__0748:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0756); emu_cs = 0x0FE4; emu_Unit_Free();
l__0756:
	goto l__00F1;
l__0759:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0764); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0764:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x076C); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__076C:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xB);
	if (emu_ax != 0xB) goto l__0774;
	goto l__0732;
l__0774:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0782); f__1A34_204C_0043_B1ED();
l__0782:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x078F); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__078F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x56));
	if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0x56)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	}
l__07A3:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x07A9); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__07A9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__07E8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_get_memory16(emu_es, emu_bx, 0x60) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x5E) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x5C) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x5A) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x07DF); f__1A34_2C95_001B_89A2();
l__07DF:
	emu_addw(&emu_sp, 0x8);
l__07E2:
	emu_ax = 0x1;
	goto l__0021;
l__07E8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__07F5;
	goto l__088A;
l__07F5:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F4));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x39F4)) {
		emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3A02);
		emu_shlw(&emu_bx, 0x1);
		emu_ax = 0x2E9C;
		emu_es = emu_ax;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x323F);
		emu_andw(&emu_ax, 0x7FFF);
		emu_andw(&emu_ax, 0x1FF);
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A02);
		emu_cl = 0x2;
		emu_shlw(&emu_dx, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_dx);
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
		emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x1;
	}
l__083E:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39F4);
	emu_incw(&emu_dx);
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_ax == emu_dx) {
		emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3A02);
		emu_shlw(&emu_bx, 0x1);
		emu_ax = 0x2E9C;
		emu_es = emu_ax;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x323F);
		emu_andw(&emu_ax, 0x7FFF);
		emu_andw(&emu_ax, 0x1FF);
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A02);
		emu_cl = 0x2;
		emu_shlw(&emu_dx, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_dx);
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
		emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x1;
	}
l__088A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x52) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08B4); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__08B4:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x14) == 0x0) goto l__08D3;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08C8); emu_Unit_GetHouseID();
l__08C8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x08D1); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_160C_0014_FAD7();
l__08D1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__08D3:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) == 0x0) goto l__08EF;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08E4); emu_Unit_GetHouseID();
l__08E4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x08ED); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_14CA_0013_F579();
l__08ED:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__08EF:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__0021;
l__08F5:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Unit_Damage()
 *
 * @name emu_Unit_Damage
 * @implements 1A34:0B71:0033:9787 ()
 * @implements 1A34:0BA4:000E:E505
 * @implements 1A34:0BB2:0018:BF6D
 * @implements 1A34:0BCA:0021:5172
 * @implements 1A34:0BD9:0012:EB24
 * @implements 1A34:0BEB:0017:66F8
 * @implements 1A34:0BF4:000E:A0B2
 * @implements 1A34:0C02:0010:350C
 * @implements 1A34:0C12:000B:7668
 * @implements 1A34:0C1D:0029:43CA
 * @implements 1A34:0C46:0008:175C
 * @implements 1A34:0C4E:0015:9140
 * @implements 1A34:0C50:0013:038D
 * @implements 1A34:0C63:0003:E89A
 * @implements 1A34:0C66:001C:BBBA
 * @implements 1A34:0C82:001A:65BC
 * @implements 1A34:0C91:000B:3756
 * @implements 1A34:0C9C:0007:4521
 * @implements 1A34:0CA3:0009:33AF
 * @implements 1A34:0CA6:0006:3EF3
 * @implements 1A34:0CAC:0010:804C
 * @implements 1A34:0CAD:000F:8015
 * @implements 1A34:0CBC:0009:79FF
 * @implements 1A34:0CC2:0003:DDB8
 * @implements 1A34:0CC8:0020:EC24
 * @implements 1A34:0CF4:000B:F77E
 * @implements 1A34:0CFF:002A:8079
 * @implements 1A34:0D29:001A:6D1B
 * @implements 1A34:0D2C:0017:4BB9
 * @implements 1A34:0D43:0019:C8A8
 * @implements 1A34:0D5C:005C:6208
 * @implements 1A34:0D5F:0059:EBA0
 * @implements 1A34:0D73:0045:61A0
 * @implements 1A34:0DB8:0008:CBF5
 * @implements 1A34:0DC0:0029:C1D4
 * @implements 1A34:0DE9:003F:3AD3
 * @implements 1A34:0DEC:003C:0FC2
 * @implements 1A34:0E0A:001E:5369
 * @implements 1A34:0E23:0005:E392
 * @implements 1A34:0E28:0006:F7CE
 *
 * Called From: 06F7:00D2:0026:6889
 * Called From: 06F7:00D2:0035:5769
 * Called From: 1A34:0326:003D:F117
 * Called From: 1A34:06F1:0017:2B44
 */
void emu_Unit_Damage()
{
l__0B71:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0BA4;
	goto l__0E23;
l__0BA4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) != 0) goto l__0BB2;
	goto l__0E23;
l__0BB2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x8000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x8000) != 0) goto l__0BCA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x19) goto l__0BCA;
	goto l__0E23;
l__0BCA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xE) != 0x0) {
		emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	}
l__0BD9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_di);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xE) < (int16)emu_di) goto l__0BEB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_di);
	goto l__0BF4;
l__0BEB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x0;
l__0BF4:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C02); emu_Unit_Deviation_Descrease();
l__0C02:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xE) == 0x0) goto l__0C12;
	goto l__0CC8;
l__0C12:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C1D); f__1A34_379B_0015_B07B();
l__0C1D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__0C50;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_ax = (int8)emu_al;
	emu_cl = 0x5;
	emu_sarw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0C46); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0C46:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C4E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_154C_0015_B7FB();
l__0C4E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0C50:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__0C66;
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C63); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__0C63:
	emu_pop(&emu_cx);
	goto l__0CAD;
l__0C66:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x200);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x200) != 0) goto l__0CAD;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) goto l__0CAD;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C82); emu_Unit_GetHouseID();
l__0C82:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x3);
		if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38B2) <= (int16)0x3) goto l__0CA3;
	}
l__0C91:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C9C); emu_Unit_GetHouseID();
l__0C9C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0xE);
	goto l__0CA6;
l__0CA3:
	emu_ax = 0xD;
l__0CA6:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CAC); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__0CAC:
	emu_pop(&emu_cx);
l__0CAD:
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0CBC); emu_cs = 0x176C; emu_Unit_SetAction();
l__0CBC:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
l__0CC2:
	goto l__0E28;
l__0CC8:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) goto l__0CF4;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_cmpw(&emu_di, 0x19);
	if ((int16)emu_di >= (int16)0x19) { /* Unresolved jump */ emu_ip = 0x0CE8; emu_last_cs = 0x1A34; emu_last_ip = 0x0CE2; emu_last_length = 0x0020; emu_last_crc = 0xEC24; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x0CEB; emu_last_cs = 0x1A34; emu_last_ip = 0x0CE6; emu_last_length = 0x0020; emu_last_crc = 0xEC24; emu_call();
l__0CF4:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0CFF); emu_Unit_GetHouseID();
l__0CFF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0D2C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x8) goto l__0D2C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x10) goto l__0D2C;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0D29); emu_cs = 0x176C; emu_Unit_SetAction();
l__0D29:
	emu_addw(&emu_sp, 0x6);
l__0D2C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x10);
	emu_sarw(&emu_ax, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xE) < (int16)emu_ax) goto l__0D43;
	goto l__0E23;
l__0D43:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__0D5F;
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0D5C); emu_cs = 0x176C; emu_Unit_SetAction();
l__0D5C:
	emu_addw(&emu_sp, 0x6);
l__0D5F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x3);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x3) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x2) goto l__0DEC;
	}
l__0D73:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_addb(&emu_al, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x2) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DB8); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__0DB8:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0DC0); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__0DC0:
	emu_andw(&emu_ax, 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_pop(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x37FC));
	if (emu_ax >= emu_get_memory16(emu_ds, emu_bx, 0x37FC)) goto l__0DEC;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0DE9); emu_cs = 0x176C; emu_Unit_SetAction();
l__0DE9:
	emu_addw(&emu_sp, 0x6);
l__0DEC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x2);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x2) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x1);
		if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x1) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x3);
			if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x3) goto l__0E23;
		}
	}
l__0E0A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x6D) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x70) = 0x0;
l__0E23:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0CC2;
l__0E28:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_0E2E_0015_7E65()
 *
 * @name f__1A34_0E2E_0015_7E65
 * @implements 1A34:0E2E:0015:7E65 ()
 * @implements 1A34:0E3D:0006:FDAA
 * @implements 1A34:0E40:0003:1DA0
 * @implements 1A34:0E43:0028:1D74
 * @implements 1A34:0E6B:000A:0A68
 * @implements 1A34:0E75:002C:EBA6
 * @implements 1A34:0EA1:0018:9569
 * @implements 1A34:0EB9:0006:26E8
 * @implements 1A34:0EBF:002A:B01D
 * @implements 1A34:0EE9:000E:D462
 * @implements 1A34:0EF7:0008:9688
 * @implements 1A34:0EFF:002F:81D1
 * @implements 1A34:0F2B:0003:A2A3
 * @implements 1A34:0F2E:0006:66E9
 * @implements 1A34:0F34:000A:9457
 * @implements 1A34:0F3E:0005:238B
 * @implements 1A34:0F43:0005:8BCF
 *
 * Called From: 176C:2822:0017:D1B6
 * Called From: 1A34:0AD4:000B:CA1A
 * Called From: 1A34:29CA:0013:0581
 * Called From: 1A34:29CA:0015:974C
 */
void f__1A34_0E2E_0015_7E65()
{
l__0E2E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0E43;
l__0E3D:
	emu_ax = 0x1;
l__0E40:
	goto l__0F43;
l__0E43:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0E6B); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0E6B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E75); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0E75:
	emu_pop(&emu_cx);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_bx = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx, 0x3A42), 0x0);
	if (emu_get_memory8(emu_ds, emu_bx, 0x3A42) != 0x0) goto l__0EA1;
	goto l__0E3D;
l__0EA1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x19) { /* Unresolved jump */ emu_ip = 0x0EB5; emu_last_cs = 0x1A34; emu_last_ip = 0x0EA9; emu_last_length = 0x0018; emu_last_crc = 0x9569; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x4) goto l__0EB9;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0E40;
l__0EB9:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0EBF); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
l__0EBF:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0F2E;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0x8)) { /* Unresolved jump */ emu_ip = 0x0EDE; emu_last_cs = 0x1A34; emu_last_ip = 0x0ED7; emu_last_length = 0x002A; emu_last_crc = 0xB01D; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_dx == emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__0F2E;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0EE9); emu_Unit_GetHouseID();
l__0EE9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0EF7); emu_Unit_GetHouseID();
l__0EF7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EFF); emu_cs = 0x1423; emu_House_AreAllied();
l__0EFF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x1);
		if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x1) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
			emu_ax = (int8)emu_al;
			emu_dx = 0x5A;
			emu_imuluw(&emu_ax, emu_dx);
			emu_dx = 0x2D07;
			emu_bx = emu_ax;
			emu_es = emu_dx;
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
			if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x0) goto l__0F2E;
		}
	}
l__0F2B:
	goto l__0E3D;
l__0F2E:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0F34); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__0F34:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__0F3E;
	emu_ax = 0x1;
	/* Unresolved jump */ emu_ip = 0x0F40; emu_last_cs = 0x1A34; emu_last_ip = 0x0F3C; emu_last_length = 0x000A; emu_last_crc = 0x9457; emu_call();
l__0F3E:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0E40;
l__0F43:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_0F48_0018_0DB8()
 *
 * @name f__1A34_0F48_0018_0DB8
 * @implements 1A34:0F48:0018:0DB8 ()
 * @implements 1A34:0F60:006D:240C
 * @implements 1A34:0F84:0049:4084
 * @implements 1A34:0FB3:001A:8ABB
 * @implements 1A34:0FCD:000E:16C2
 * @implements 1A34:0FD0:000B:34A8
 * @implements 1A34:0FDB:000B:B0F8
 * @implements 1A34:0FE6:0029:2E9A
 * @implements 1A34:100F:0009:1DAE
 * @implements 1A34:1012:0006:0EF2
 * @implements 1A34:1018:0038:DAAE
 * @implements 1A34:1050:0027:BC2E
 * @implements 1A34:1052:0025:D89D
 * @implements 1A34:1077:0018:960E
 * @implements 1A34:108F:0002:D1BA
 * @implements 1A34:1091:000B:E874
 * @implements 1A34:109C:0018:C7EE
 * @implements 1A34:10B4:0012:6E18
 * @implements 1A34:10C6:000C:746E
 * @implements 1A34:10D2:0002:CABA
 * @implements 1A34:10D4:0015:80BA
 * @implements 1A34:10E9:0003:2EB7
 * @implements 1A34:10EA:0002:2597
 *
 * Called From: 0F78:0403:0025:77BC
 * Called From: 0F78:041B:0014:EE7E
 * Called From: 176C:0EA8:001D:190A
 * Called From: 1A34:01E1:0052:7BDF
 * Called From: 1A34:1128:001E:722B
 * Called From: 1A34:2CC9:001C:F555
 * Called From: 1A34:3814:000A:AA19
 * Called From: 1A34:3814:000B:8A12
 * Called From: B4E9:0299:000B:C287
 */
void f__1A34_0F48_0018_0DB8()
{
l__0F48:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A0C)) goto l__0F60;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3A0A)) goto l__0F60;
	goto l__10EA;
l__0F60:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
		if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) {
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
			if (emu_get_memory16(emu_ds, 0x00, 0x379C) == 0x0) {
				emu_get_memory16(emu_ss, emu_bp,  0x8) = 0x0;
				emu_get_memory16(emu_ss, emu_bp,  0x6) = 0x0;
			}
		}
	}
l__0F84:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
		emu_ah = 0x0;
		emu_dx = 0x1;
		emu_cl = emu_get_memory8(emu_ds, 0x00, 0x3A38);
		emu_shlw(&emu_dx, emu_cl);
		emu_testw(&emu_ax, emu_dx);
		if ((emu_ax & emu_dx) == 0) {
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
			if (emu_get_memory16(emu_ds, 0x00, 0x379C) == 0x0) {
				emu_get_memory16(emu_ss, emu_bp,  0x8) = 0x0;
				emu_get_memory16(emu_ss, emu_bp,  0x6) = 0x0;
			}
		}
	}
l__0FB3:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax == 0) goto l__0FD0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FCD); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__0FCD:
	emu_addw(&emu_sp, 0x6);
l__0FD0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0FDB;
	goto l__10D4;
l__0FDB:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0FE6); emu_Unit_GetHouseID();
l__0FE6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1052;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x0) goto l__100F;
	emu_ax = 0x12;
	goto l__1012;
l__100F:
	emu_ax = 0x13;
l__1012:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1018); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0156_0019_AEFE();
l__1018:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2B));
	emu_push(emu_cs); emu_push(0x1050); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
l__1050:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__1052:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax == 0) goto l__1091;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0x8)) { /* Unresolved jump */ emu_ip = 0x106C; emu_last_cs = 0x1A34; emu_last_ip = 0x1065; emu_last_length = 0x0025; emu_last_crc = 0xD89D; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_dx == emu_get_memory16(emu_ss, emu_bp,  0x6)) { /* Unresolved jump */ emu_ip = 0x1079; emu_last_cs = 0x1A34; emu_last_ip = 0x106A; emu_last_length = 0x0025; emu_last_crc = 0xD89D; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1077); f__1A34_27A8_0012_7198();
l__1077:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x3A0C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3A0A) = emu_dx;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x108F); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
l__108F:
	goto l__10B4;
l__1091:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x109C); f__1A34_27A8_0012_7198();
l__109C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x3A0C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3A0A) = emu_dx;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10B4); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__10B4:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10C6); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__10C6:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10D2); emu_cs = 0x0F78; emu_Map_SetSelectionObjectPosition();
l__10D2:
	goto l__10E9;
l__10D4:
	emu_get_memory16(emu_ds, 0x00, 0x3A0C) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x3A0A) = 0x0;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10E9); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__10E9:
	emu_pop(&emu_cx);
l__10EA:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_10EC_000E_A326()
 *
 * @name f__1A34_10EC_000E_A326
 * @implements 1A34:10EC:000E:A326 ()
 * @implements 1A34:10FA:0013:0DCB
 * @implements 1A34:110D:001E:722B
 * @implements 1A34:112B:0018:CAAC
 * @implements 1A34:112D:0016:931E
 * @implements 1A34:1143:0012:391F
 * @implements 1A34:1155:0017:75C8
 * @implements 1A34:116C:000E:BB32
 * @implements 1A34:117A:0004:BEB2
 * @implements 1A34:117C:0002:2597
 *
 * Called From: 0C3A:06E3:0008:D276
 * Called From: 0C3A:0F15:001D:C1AF
 * Called From: 176C:12DA:0011:A5C5
 * Called From: 176C:173C:000E:1BB6
 * Called From: 176C:2B86:000D:5697
 * Called From: 1A34:00EE:000B:2449
 * Called From: 1A34:03F0:0029:43E6
 * Called From: 1A34:0665:000E:C47C
 * Called From: 1A34:0665:000B:E6D6
 * Called From: 1A34:24BC:000A:D0CF
 * Called From: B4CD:14E0:0008:D276
 */
void f__1A34_10EC_000E_A326()
{
l__10EC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__10FA;
	goto l__117C;
l__10FA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x110D); emu_Unit_UntargetMe();
l__110D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A0C)) goto l__112D;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3A0A)) goto l__112D;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x112B); f__1A34_0F48_0018_0DB8();
l__112B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__112D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1143); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__1143:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1155); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
l__1155:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_ax = 0x3902;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x116C); emu_cs = 0x15C2; emu_Script_Reset();
l__116C:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x117A); emu_cs = 0x0FE4; emu_Unit_Free();
l__117A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__117C:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_117E_001D_E17B()
 *
 * @name f__1A34_117E_001D_E17B
 * @implements 1A34:117E:001D:E17B ()
 * @implements 1A34:1196:0005:DC15
 * @implements 1A34:1198:0003:DD81
 * @implements 1A34:119B:000D:4469
 * @implements 1A34:11A8:0015:4615
 * @implements 1A34:11BD:0010:4E96
 * @implements 1A34:11CD:000B:31E5
 * @implements 1A34:11D8:000E:4D9C
 * @implements 1A34:11E6:0008:9688
 * @implements 1A34:11EE:0008:A3CF
 * @implements 1A34:11F6:0012:6DCF
 * @implements 1A34:1208:003E:8F72
 * @implements 1A34:1246:0018:EC6E
 * @implements 1A34:125E:0010:14B9
 * @implements 1A34:126E:0008:9754
 * @implements 1A34:1276:0016:9125
 * @implements 1A34:128C:0010:14B9
 * @implements 1A34:129C:0008:3755
 * @implements 1A34:12A4:0008:88A7
 * @implements 1A34:12AC:001B:E25C
 * @implements 1A34:12C7:0015:EDBF
 * @implements 1A34:12DC:0008:3755
 * @implements 1A34:12E4:0011:5611
 * @implements 1A34:12F5:0028:478E
 * @implements 1A34:1312:000B:BD26
 * @implements 1A34:131D:0005:8669
 * @implements 1A34:1322:0006:F7CE
 *
 * Called From: 1A34:148E:0013:5581
 * Called From: 1A34:148E:001B:2CE0
 * Called From: 1A34:35CD:0029:C135
 */
void f__1A34_117E_001D_E17B()
{
l__117E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != 0) goto l__119B;
	}
l__1196:
	emu_xorw(&emu_ax, emu_ax);
l__1198:
	goto l__1322;
l__119B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) != 0) goto l__11A8;
	goto l__1196;
l__11A8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x11BD); emu_Unit_GetHouseID();
l__11BD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x1;
	emu_cl = emu_al;
	emu_shlw(&emu_dx, emu_cl);
	emu_pop(&emu_ax);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) != 0) goto l__11CD;
	goto l__1196;
l__11CD:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x11D8); emu_Unit_GetHouseID();
l__11D8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x11E6); emu_Unit_GetHouseID();
l__11E6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11EE); emu_cs = 0x1423; emu_House_AreAllied();
l__11EE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__11F6;
	goto l__1196;
l__11F6:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__1208;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__1208;
	goto l__1196;
l__1208:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2000);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x2000) != 0) goto l__1246;
	goto l__1196;
l__1246:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x4) goto l__128C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x1000);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x1000) != 0) goto l__125E;
	goto l__1196;
l__125E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x126E); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__126E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1276); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1BC4_0013_1AB3();
l__1276:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__128C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__128C;
	goto l__1196;
l__128C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x129C); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__129C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12A4); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0F8B_0015_1689();
l__12A4:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__12AC;
	goto l__1196;
l__12AC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x12C7); emu_cs = 0x0F3F; emu_Tile_GetDistanceRoundedUp();
l__12C7:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x12DC); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__12DC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12E4); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0F8B_0015_1689();
l__12E4:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__12F5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), emu_di);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x50) < (int16)emu_di) goto l__12F5;
	goto l__1196;
l__12F5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2F);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2D));
	emu_si = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_ax = emu_si;
		emu_xorw(&emu_dx, emu_dx);
		emu_divw(&emu_ax, emu_di);
		emu_si = emu_ax;
		emu_incw(&emu_si);
	}
l__1312:
	emu_cmpw(&emu_si, 0x7D00);
	if (emu_si <= 0x7D00) goto l__131D;
	emu_ax = 0x7D00;
	/* Unresolved jump */ emu_ip = 0x131F; emu_last_cs = 0x1A34; emu_last_ip = 0x131B; emu_last_length = 0x000B; emu_last_crc = 0xBD26; emu_call();
l__131D:
	emu_ax = emu_si;
	goto l__1198;
l__1322:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_1328_0026_C398()
 *
 * @name f__1A34_1328_0026_C398
 * @implements 1A34:1328:0026:C398 ()
 * @implements 1A34:134B:0003:9D84
 * @implements 1A34:134E:002A:789C
 * @implements 1A34:1378:0008:A673
 * @implements 1A34:1380:000B:4473
 * @implements 1A34:138B:000C:39D3
 * @implements 1A34:1397:0047:54FE
 * @implements 1A34:139E:0040:DAC0
 * @implements 1A34:13C6:0018:2009
 * @implements 1A34:13DE:0006:9737
 * @implements 1A34:13E4:000B:F2FA
 * @implements 1A34:13EF:000E:56E0
 * @implements 1A34:13FD:0008:9688
 * @implements 1A34:1405:0009:B79E
 * @implements 1A34:140E:001C:B892
 * @implements 1A34:142A:0029:435F
 * @implements 1A34:1453:0023:D010
 * @implements 1A34:145B:001B:B989
 * @implements 1A34:1476:001B:2CE0
 * @implements 1A34:147E:0013:5581
 * @implements 1A34:1491:0025:A83B
 * @implements 1A34:14AB:000B:799F
 * @implements 1A34:14B6:0013:DD61
 * @implements 1A34:14B8:0011:9657
 * @implements 1A34:14C9:0017:5D64
 * @implements 1A34:14D7:0009:DBB6
 * @implements 1A34:14E0:0006:F7CE
 *
 * Called From: 1A34:355D:000B:BD8C
 * Called From: 1A34:3585:000B:BD96
 */
void f__1A34_1328_0026_C398()
{
l__1328:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__134E;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__134B:
	goto l__14E0;
l__134E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4D), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x4D) != 0x0) goto l__138B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x1378); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__1378:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1380); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__1380:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4D) = emu_ax;
	goto l__139E;
l__138B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_push(emu_cs); emu_push(0x1397); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__1397:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
l__139E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_cl = 0x8;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_cmpw(&emu_si, 0x2);
	if (emu_si == 0x2) {
		emu_shlw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	}
l__13C6:
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x13DE); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__13DE:
	emu_addw(&emu_sp, 0x8);
	goto l__14B8;
l__13E4:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x13EF); emu_Unit_GetHouseID();
l__13EF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x13FD); emu_Unit_GetHouseID();
l__13FD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1405); emu_cs = 0x1423; emu_House_AreAllied();
l__1405:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__140E;
	goto l__14AB;
l__140E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) != 0) goto l__142A;
	goto l__14AB;
l__142A:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__147E;
	emu_cmpw(&emu_si, 0x4);
	if (emu_si == 0x4) goto l__147E;
	emu_cmpw(&emu_si, 0x1);
	if (emu_si != 0x1) goto l__145B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1453); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__1453:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__147E;
l__145B:
	emu_cmpw(&emu_si, 0x2);
	if (emu_si != 0x2) goto l__14AB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x1476); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__1476:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__14AB;
l__147E:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1491); f__1A34_117E_001D_E17B();
l__1491:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) > (int16)emu_di) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
		emu_di = emu_get_memory16(emu_ss, emu_bp, -0xA);
	}
l__14AB:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x14B6); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__14B6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__14B8:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__14C9;
	goto l__13E4;
l__14C9:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) {
		emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
		emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	}
l__14D7:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__134B;
l__14E0:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_14E6_001F_FB1E()
 *
 * @name f__1A34_14E6_001F_FB1E
 * @implements 1A34:14E6:001F:FB1E ()
 * @implements 1A34:1500:0005:5C8C
 * @implements 1A34:1502:0003:5D18
 * @implements 1A34:1505:0010:14B9
 * @implements 1A34:1515:0008:9754
 * @implements 1A34:151D:0008:77B2
 * @implements 1A34:1525:002A:E54A
 * @implements 1A34:154F:0008:5756
 * @implements 1A34:1557:0022:94AA
 * @implements 1A34:1579:0005:42A4
 * @implements 1A34:157E:0005:814C
 * @implements 1A34:1583:0005:45A2
 * @implements 1A34:1588:0004:EEF9
 * @implements 1A34:158C:0033:7AA7
 * @implements 1A34:15A0:001F:1633
 * @implements 1A34:15A4:001B:E25C
 * @implements 1A34:15BF:0027:2F0F
 * @implements 1A34:15D3:0013:2DC6
 * @implements 1A34:15E1:0005:06F3
 * @implements 1A34:15E6:0006:F7CE
 *
 * Called From: 1A34:162C:0010:7C7F
 */
void f__1A34_14E6_001F_FB1E()
{
l__14E6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != 0) goto l__1505;
	}
l__1500:
	emu_xorw(&emu_ax, emu_ax);
l__1502:
	goto l__15E6;
l__1505:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1515); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__1515:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x151D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1BC4_0013_1AB3();
l__151D:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1525;
	goto l__15E1;
l__1525:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x154F); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__154F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1557); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__1557:
	emu_pop(&emu_cx);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A4C), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A4C) == 0x0) goto l__15E1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3C);
	emu_cmpw(&emu_bx, 0x3);
	if (emu_bx > 0x3) goto l__1588;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x15EC);
	switch (emu_ip) {
		case 0x1579: goto l__1579;
		case 0x157E: goto l__157E;
		case 0x1583: goto l__1583;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1A34; emu_last_ip = 0x1574; emu_last_length = 0x0022; emu_last_crc = 0x94AA;
			emu_call();
			return;
	}
l__1579:
	emu_si = 0x3E8;
	goto l__158C;
l__157E:
	emu_si = 0x64;
	goto l__158C;
l__1583:
	emu_si = 0x1388;
	goto l__158C;
l__1588:
	emu_xorw(&emu_si, emu_si);
	goto l__158C;
l__158C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6A), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x6A) == 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x51), 0x0);
		if (emu_get_memory8(emu_es, emu_bx, 0x51) == 0x0) goto l__15A4;
	}
l__15A0:
	emu_cl = 0x2;
	emu_shlw(&emu_si, emu_cl);
l__15A4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x15BF); emu_cs = 0x0F3F; emu_Tile_GetDistanceRoundedUp();
l__15BF:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_orw(&emu_si, emu_si);
		if (emu_si != 0) {
			emu_ax = emu_si;
			emu_cwd();
			emu_idivw(&emu_ax, emu_di);
			emu_si = emu_ax;
		}
	}
l__15D3:
	emu_cmpw(&emu_di, 0x2);
	if ((int16)emu_di < (int16)0x2) {
		emu_dx = 0x2;
		emu_ax = emu_si;
		emu_imuluw(&emu_ax, emu_dx);
		emu_si = emu_ax;
	}
l__15E1:
	emu_ax = emu_si;
	goto l__1502;
l__15E6:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_15F4_0026_EDA4()
 *
 * @name f__1A34_15F4_0026_EDA4
 * @implements 1A34:15F4:0026:EDA4 ()
 * @implements 1A34:161A:0005:9CAE
 * @implements 1A34:161F:0010:7C7F
 * @implements 1A34:162F:0021:E7E1
 * @implements 1A34:1646:000A:B112
 * @implements 1A34:1650:0026:68F6
 * @implements 1A34:1652:0024:0E3F
 * @implements 1A34:166E:0008:E189
 * @implements 1A34:1676:0006:F7CE
 *
 * Called From: 176C:2BA5:0013:B226
 */
void f__1A34_15F4_0026_EDA4()
{
l__15F4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x161A); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__161A:
	emu_addw(&emu_sp, 0x8);
	goto l__1652;
l__161F:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x162F); f__1A34_14E6_001F_FB1E();
l__162F:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, emu_si);
	if ((int16)emu_di >= (int16)emu_si) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
		emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
		emu_si = emu_di;
	}
l__1646:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1650); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__1650:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__1652:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax != 0) goto l__161F;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) {
		emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
		emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	}
l__166E:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	goto l__1676;
l__1676:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_167C_0015_AA25()
 *
 * @name f__1A34_167C_0015_AA25
 * @implements 1A34:167C:0015:AA25 ()
 * @implements 1A34:168C:0005:9C04
 * @implements 1A34:168E:0003:9D90
 * @implements 1A34:1691:003D:4150
 * @implements 1A34:16CE:0016:BD4A
 * @implements 1A34:16E4:0014:DAB1
 * @implements 1A34:16F8:0014:4C64
 * @implements 1A34:170C:0023:B77B
 * @implements 1A34:172F:0013:210D
 * @implements 1A34:173F:0003:E2B2
 * @implements 1A34:1742:0008:490A
 * @implements 1A34:174A:008E:D045
 * @implements 1A34:1759:007F:EC66
 * @implements 1A34:1785:0053:8778
 * @implements 1A34:17A8:0030:AD6E
 * @implements 1A34:17CC:000C:E29A
 * @implements 1A34:17D8:003E:03D1
 * @implements 1A34:1816:0034:D883
 * @implements 1A34:182A:0020:D9F7
 * @implements 1A34:184A:0009:0669
 * @implements 1A34:1853:0006:F7CE
 *
 * Called From: 176C:20DA:000D:565E
 */
void f__1A34_167C_0015_AA25()
{
l__167C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1691;
l__168C:
	emu_xorw(&emu_ax, emu_ax);
l__168E:
	goto l__1853;
l__1691:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_si = emu_ax;
	emu_addw(&emu_si, 0x10);
	emu_andw(&emu_si, 0xE0);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x16CE); f__1A34_1E99_0012_1117();
l__16CE:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x16E4); f__1A34_1E99_0012_1117();
l__16E4:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x16F8); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_00A5_0016_24FA();
l__16F8:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x170C); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__170C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x52) = 0x7FFF;
	emu_ax = emu_si;
	emu_cl = 0x5;
	emu_sarw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x172F); f__1A34_3146_0018_6887();
l__172F:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0xFF);
	if ((int16)emu_di <= (int16)0xFF) {
		emu_cmpw(&emu_di, 0xFFFF);
		if (emu_di != 0xFFFF) goto l__1742;
	}
l__173F:
	goto l__168C;
l__1742:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x174A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__174A:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xC);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0xC) {
		emu_get_memory16(emu_ss, emu_bp, -0x8) = 0xA;
	}
l__1759:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3A42);
	emu_ah = 0x0;
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x6) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xB);
		if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0xB) {
			emu_di = 0xFF;
		}
	}
l__1785:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFF7F);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A48), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A48) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x80);
	}
l__17A8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_sarw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_es, emu_bx, 0xE)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
		if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x4) {
			emu_ax = emu_di;
			emu_cl = 0x2;
			emu_sarw(&emu_ax, emu_cl);
			emu_subw(&emu_di, emu_ax);
		}
	}
l__17CC:
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17D8); f__1A34_204C_0043_B1ED();
l__17D8:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x5);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x5) goto l__182A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1816); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__1816:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_dx;
l__182A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_es, emu_bx, 0x4B) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x49) = emu_dx;
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x184A); emu_Unit_Deviation_Descrease();
l__184A:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__168E;
l__1853:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Unit_Deviate()
 *
 * @name emu_Unit_Deviate
 * @implements 1A34:1859:0017:DF09 ()
 * @implements 1A34:186B:0005:9C86
 * @implements 1A34:186D:0003:9D12
 * @implements 1A34:1870:0025:7CCC
 * @implements 1A34:1895:0017:BB1B
 * @implements 1A34:18AA:0002:9FBA
 * @implements 1A34:18AC:0032:1307
 * @implements 1A34:18D9:0005:517D
 * @implements 1A34:18DE:001E:1BAE
 * @implements 1A34:18FC:0013:6B82
 * @implements 1A34:190F:0012:298E
 * @implements 1A34:1916:000B:F53C
 * @implements 1A34:1921:000E:0F1A
 * @implements 1A34:192F:0008:5B15
 * @implements 1A34:1937:0003:22AC
 * @implements 1A34:193A:0005:8BCF
 *
 * Called From: 06F7:046D:0020:117E
 */
void emu_Unit_Deviate()
{
l__1859:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1870;
l__186B:
	emu_xorw(&emu_ax, emu_ax);
l__186D:
	goto l__193A;
l__1870:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x8000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x8000) != 0) goto l__1895;
	goto l__186B;
l__1895:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x59), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x59) == 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x1000);
		if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x1000) == 0) goto l__18AC;
	}
l__18AA:
	goto l__186B;
l__18AC:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) { /* Unresolved jump */ emu_ip = 0x18C3; emu_last_cs = 0x1A34; emu_last_ip = 0x18AE; emu_last_length = 0x0032; emu_last_crc = 0x1307; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_si = emu_get_memory16(emu_ds, emu_bx, 0x37FC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) {
		emu_ax = emu_si;
		emu_cl = 0x3;
		emu_shrw(&emu_ax, emu_cl);
		emu_subw(&emu_si, emu_ax);
	}
l__18D9:
	emu_push(emu_cs); emu_push(0x18DE); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__18DE:
	emu_andw(&emu_ax, 0xFF);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax >= emu_si) goto l__1937;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x59) = 0x78;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18FC); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__18FC:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A38) != 0x2) goto l__190F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x28));
	goto l__1916;
l__190F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x48));
l__1916:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1921); emu_cs = 0x176C; emu_Unit_SetAction();
l__1921:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x192F); emu_Unit_UntargetMe();
l__192F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__186D;
l__1937:
	goto l__186B;
l__193A:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Unit_Deviation_Descrease()
 *
 * @name emu_Unit_Deviation_Descrease
 * @implements 1A34:193F:0013:FA4D ()
 * @implements 1A34:194D:0005:1C30
 * @implements 1A34:194F:0003:1DA4
 * @implements 1A34:1952:000E:0518
 * @implements 1A34:1960:003B:E766
 * @implements 1A34:197C:001F:1ACF
 * @implements 1A34:199B:0028:94FA
 * @implements 1A34:19C3:001F:AC74
 * @implements 1A34:19E2:0022:72B7
 * @implements 1A34:1A04:0012:298E
 * @implements 1A34:1A0B:000B:F53C
 * @implements 1A34:1A16:000E:4F97
 * @implements 1A34:1A24:0010:D468
 * @implements 1A34:1A34:0011:6BF1
 * @implements 1A34:1A45:0009:86E7
 * @implements 1A34:1A4E:0014:6405
 * @implements 1A34:1A62:0004:893F
 *
 * Called From: 176C:04C6:0017:CAF9
 * Called From: 176C:04C6:001A:EC5B
 * Called From: 176C:185E:0014:9267
 * Called From: 1A34:0BFF:000E:A0B2
 * Called From: 1A34:0BFF:0017:66F8
 * Called From: 1A34:1847:0034:D883
 * Called From: 1A34:1847:0020:D9F7
 * Called From: 1A34:1D45:0042:3307
 * Called From: 1A34:1D45:001B:E5E3
 */
void emu_Unit_Deviation_Descrease()
{
l__193F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1952;
l__194D:
	emu_xorw(&emu_ax, emu_ax);
l__194F:
	goto l__1A62;
l__1952:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x59);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1960;
	goto l__194D;
l__1960:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
		emu_ax = (int8)emu_al;
		emu_dx = 0x1E;
		emu_imuluw(&emu_ax, emu_dx);
		emu_bx = emu_ax;
		emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x37FC);
		emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
	}
l__197C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x8000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x8000) != 0) goto l__199B;
	goto l__194D;
l__199B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x59);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__19C3;
	goto l__1A4E;
l__19C3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x59) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x19E2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__19E2:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFBF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1A04;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x28));
	goto l__1A0B;
l__1A04:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x48));
l__1A0B:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1A16); emu_cs = 0x176C; emu_Unit_SetAction();
l__1A16:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1A24); emu_Unit_UntargetMe();
l__1A24:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1A34); emu_Unit_SetTarget();
l__1A34:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1A45); emu_Unit_SetDestination();
l__1A45:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__194F;
l__1A4E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x59);
	emu_subb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x59) = emu_al;
	goto l__194D;
l__1A62:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Unit_SetTarget()
 *
 * @name emu_Unit_SetTarget
 * @implements 1A34:1A66:0011:34D4 ()
 * @implements 1A34:1A77:0010:017A
 * @implements 1A34:1A84:0003:DD16
 * @implements 1A34:1A87:000C:4A8C
 * @implements 1A34:1A93:0006:57C6
 * @implements 1A34:1A99:000C:77A4
 * @implements 1A34:1AA5:0009:2834
 * @implements 1A34:1AAE:001E:E8B0
 * @implements 1A34:1ACC:0006:1CFB
 * @implements 1A34:1AD2:0006:62E9
 * @implements 1A34:1AD8:001E:6C91
 * @implements 1A34:1AF6:0013:A8EA
 * @implements 1A34:1AFA:000F:A6AC
 * @implements 1A34:1B09:001A:C543
 * @implements 1A34:1B23:0008:A673
 * @implements 1A34:1B2B:003D:2B4B
 * @implements 1A34:1B2F:0039:BAC8
 * @implements 1A34:1B62:0006:F7CE
 *
 * Called From: 06F7:02E6:000E:1B8D
 * Called From: 06F7:02E6:0019:1195
 * Called From: 0AEC:042D:0010:A74E
 * Called From: 16C5:0981:0016:8E0F
 * Called From: 176C:14E7:002C:0682
 * Called From: 176C:14E7:0018:3AE7
 * Called From: 176C:157C:0013:7ED5
 * Called From: 1A34:1A31:0010:D468
 */
void emu_Unit_SetTarget()
{
l__1A66:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A77); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__1A77:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
		if (emu_ax != 0) goto l__1A87;
	}
l__1A84:
	goto l__1B62;
l__1A87:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != emu_si) goto l__1A93;
	goto l__1B62;
l__1A93:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A99); emu_cs = 0x167E; emu_Tools_Index_GetType();
l__1A99:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) goto l__1AFA;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AA5); emu_cs = 0x167E; emu_Tools_Index_Decode();
l__1AA5:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1AAE); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
l__1AAE:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__1AD2;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1ACC); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__1ACC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	goto l__1AFA;
l__1AD2:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1AD8); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__1AD8:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__1AFA;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1AF6); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__1AF6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
l__1AFA:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1B09); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__1B09:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax != emu_si) goto l__1B2F;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1B23); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__1B23:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B2B); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__1B2B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
l__1B2F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x54) = emu_si;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x40);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x40) == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_get_memory16(emu_es, emu_bx, 0x56) = emu_si;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_get_memory8(emu_es, emu_bx, 0x72) = 0xFF;
	}
l__1B62:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_Unit_Command()
 *
 * @name emu_GUI_Unit_Command
 * @implements 1A34:1CB1:003A:B457 ()
 * @implements 1A34:1CEB:005D:8082
 * @implements 1A34:1D06:0042:3307
 * @implements 1A34:1D2D:001B:E5E3
 * @implements 1A34:1D48:001E:39BF
 * @implements 1A34:1D66:0009:B9EE
 * @implements 1A34:1D69:0006:FDA3
 * @implements 1A34:1D6F:000E:514C
 * @implements 1A34:1D7D:0046:90CE
 * @implements 1A34:1DC3:0004:CD17
 * @implements 1A34:1DC7:000D:0971
 * @implements 1A34:1DD4:002D:D435
 * @implements 1A34:1E01:0038:A980
 * @implements 1A34:1E39:0015:EAB8
 * @implements 1A34:1E3A:0014:E870
 * @implements 1A34:1E4E:0028:9B00
 * @implements 1A34:1E76:0017:4275
 * @implements 1A34:1E8D:0006:8837
 * @implements 1A34:1E90:0003:E215
 * @implements 1A34:1E93:0006:F7CE
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_Unit_Command()
{
l__1CB1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_subw(&emu_ax, 0x8);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x22);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs);
	emu_push(0x1CEB); emu_Unit_GetHouseID();
l__1CEB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) {
			emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
			emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x3C2A;
		}
	}
l__1D06:
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x50);
	emu_ax = (int8)emu_al;
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x4F);
		emu_ax = (int8)emu_al;
		emu_di = emu_ax;
	}
l__1D2D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x59), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x59) == 0x0) goto l__1D6F;
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs);
	emu_push(0x1D48); emu_Unit_Deviation_Descrease();
l__1D48:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x59);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1D6F;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1D66); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
l__1D66:
	emu_addw(&emu_sp, 0x6);
l__1D69:
	emu_ax = 0x1;
	goto l__1E93;
l__1D6F:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1D7D); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_01CE_002B_7574();
l__1D7D:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x76);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0E));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A0E)) goto l__1DC7;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_get_memory16(emu_ds, 0x00, 0x38F4) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38F2) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x38F6) = emu_si;
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x76));
	emu_push(emu_cs); emu_push(0x1DC3); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__1DC3:
	emu_pop(&emu_cx);
	goto l__1E90;
l__1DC7:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs); emu_push(0x1DD4); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__1DD4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_get_memory16(emu_es, emu_bx, 0x54) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_get_memory8(emu_es, emu_bx, 0x72) = 0xFF;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs); emu_push(0x1E01); emu_cs = 0x176C; emu_Unit_SetAction();
l__1E01:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x0) goto l__1E3A;
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x78));
	emu_push(emu_cs); emu_push(0x1E39); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0156_0019_AEFE();
l__1E39:
	emu_pop(&emu_cx);
l__1E3A:
	emu_cmpw(&emu_di, emu_si);
	if (emu_di == emu_si) goto l__1E90;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1E4E); emu_cs = 0x01F7; f__01F7_286D_0023_9A13();
l__1E4E:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__1E90;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x1E76); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_00F2_0005_601A();
l__1E76:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp,  0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0x6) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1E8D); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
l__1E8D:
	emu_addw(&emu_sp, 0x6);
l__1E90:
	goto l__1D69;
l__1E93:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_1E99_0012_1117()
 *
 * @name f__1A34_1E99_0012_1117
 * @implements 1A34:1E99:0012:1117 ()
 * @implements 1A34:1EAB:0047:FBFA
 * @implements 1A34:1ECF:0023:1B0A
 * @implements 1A34:1EF2:0063:C627
 * @implements 1A34:1F3C:0019:F4A2
 * @implements 1A34:1F42:0013:6812
 * @implements 1A34:1F50:0005:8BCF
 *
 * Called From: 0972:0DCF:0012:86B3
 * Called From: 0972:0DEF:0020:86C2
 * Called From: 176C:0351:0011:5754
 * Called From: 176C:041F:0011:5754
 * Called From: 176C:0B2C:001D:FC9E
 * Called From: 176C:0B2C:0020:7404
 * Called From: 176C:0B4D:0021:373B
 * Called From: 176C:11F9:001C:41F2
 * Called From: 176C:1956:0029:D0CC
 * Called From: 176C:1A2A:001C:19A0
 * Called From: 176C:1BD1:0026:E434
 * Called From: 176C:1BE9:0018:0010
 * Called From: 176C:1BE9:0015:AA98
 * Called From: 176C:1CED:0011:5754
 * Called From: 176C:20C8:0036:E4C2
 * Called From: 176C:20C8:004D:941A
 * Called From: 176C:2996:000E:0610
 * Called From: 1A34:00DE:0016:183D
 * Called From: 1A34:0955:001D:C7A9
 * Called From: 1A34:096C:0017:BFB1
 * Called From: 1A34:16CB:003D:4150
 * Called From: 1A34:16E1:0016:BD4A
 * Called From: B4B5:05EE:001F:E8C6
 * Called From: B4B5:060E:0020:9640
 */
void f__1A34_1E99_0012_1117()
{
l__1E99:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1EAB;
	goto l__1F50;
l__1EAB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0x62);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xE) != 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
		emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
		emu_addw(&emu_dx, 0x65);
		emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	}
l__1ECF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_get_memory8(emu_es, emu_bx, 0x1) = emu_al;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) goto l__1EF2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_get_memory8(emu_es, emu_bx, 0x2) = emu_al;
	goto l__1F50;
l__1EF2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ah = 0x0;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__1F50;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x42);
	emu_cl = 0x2;
	emu_shlb(&emu_al, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ah = 0x0;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_subw(&emu_dx, emu_ax);
	emu_si = emu_dx;
	emu_cmpw(&emu_si, 0xFF80);
	if ((int16)emu_si > (int16)0xFF80) {
		emu_orw(&emu_si, emu_si);
		if ((emu_flags.sf != emu_flags.of)) goto l__1F42;
	}
l__1F3C:
	emu_cmpw(&emu_si, 0x80);
	if ((int16)emu_si <= (int16)0x80) goto l__1F50;
l__1F42:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_negb(&emu_al, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
l__1F50:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_1F55_0019_98DF()
 *
 * @name f__1A34_1F55_0019_98DF
 * @implements 1A34:1F55:0019:98DF ()
 * @implements 1A34:1F6E:0023:4692
 * @implements 1A34:1F77:001A:CB58
 * @implements 1A34:1F8A:0007:14FC
 * @implements 1A34:1F91:003D:BF07
 * @implements 1A34:1FBB:0013:3590
 * @implements 1A34:1FC4:000A:FFB0
 * @implements 1A34:1FCE:0016:113F
 * @implements 1A34:1FD0:0014:3B0D
 * @implements 1A34:1FE4:0025:4F2D
 * @implements 1A34:1FE6:0023:3B79
 * @implements 1A34:1FF7:0012:7060
 * @implements 1A34:2009:000A:8761
 * @implements 1A34:2013:000E:768B
 * @implements 1A34:2021:000A:B763
 * @implements 1A34:202B:0015:129A
 * @implements 1A34:2031:000F:8D11
 * @implements 1A34:2040:0006:0893
 * @implements 1A34:2043:0003:62B1
 * @implements 1A34:2046:0006:F7CE
 *
 * Called From: 176C:043E:0014:F073
 * Called From: 176C:043E:001F:6A65
 * Called From: 176C:043E:001C:3F74
 * Called From: 176C:045E:0020:60D4
 */
void f__1A34_1F55_0019_98DF()
{
l__1F55:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0x0) goto l__1F6E;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0x62);
	goto l__1F77;
l__1F6E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_dx, 0x65);
l__1F77:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__1F91;
l__1F8A:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__2046;
l__1F91:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x80);
	if ((int16)emu_si > (int16)0x80) {
		emu_subw(&emu_si, 0x100);
	}
l__1FBB:
	emu_cmpw(&emu_si, 0xFF80);
	if ((int16)emu_si < (int16)0xFF80) {
		emu_addw(&emu_si, 0x100);
	}
l__1FC4:
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__1FCE;
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	goto l__1FD0;
l__1FCE:
	emu_ax = emu_si;
l__1FD0:
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_ax, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__1FE4;
	emu_ax = emu_di;
	emu_negw(&emu_ax, emu_ax);
	goto l__1FE6;
l__1FE4:
	emu_ax = emu_di;
l__1FE6:
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax >= (int16)emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
		emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	}
l__1FF7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x6);
	emu_get_memory8(emu_es, emu_bx, 0x2) = emu_al;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x2009); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17F7_001D_1CA2();
l__2009:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x2013); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17F7_001D_1CA2();
l__2013:
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx != emu_ax) goto l__2031;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x2021); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
l__2021:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x202B); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
l__202B:
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx == emu_ax) goto l__2043;
l__2031:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2040); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__2040:
	emu_addw(&emu_sp, 0x6);
l__2043:
	goto l__1F8A;
l__2046:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_204C_0043_B1ED()
 *
 * @name f__1A34_204C_0043_B1ED
 * @implements 1A34:204C:0043:B1ED ()
 * @implements 1A34:208F:000E:1381
 * @implements 1A34:2094:0009:10FF
 * @implements 1A34:209D:000A:40EF
 * @implements 1A34:20A7:002B:1C86
 * @implements 1A34:20D2:0019:5DD9
 * @implements 1A34:20EB:0022:BFBA
 * @implements 1A34:210D:001B:F80B
 * @implements 1A34:2112:0016:0896
 * @implements 1A34:2128:000C:2E68
 * @implements 1A34:2130:0004:893F
 *
 * Called From: 176C:0B5E:0011:575D
 * Called From: 176C:0FB0:0013:6D6D
 * Called From: 176C:1047:0013:A51E
 * Called From: 176C:1106:0010:D1EF
 * Called From: 176C:1275:0010:E384
 * Called From: 1A34:077F:000E:6A0F
 * Called From: 1A34:097D:0011:5032
 * Called From: 1A34:0AEF:000F:F7E4
 * Called From: 1A34:17D5:000C:E29A
 * Called From: 1A34:17D5:0030:AD6E
 * Called From: 1A34:17D5:0053:8778
 * Called From: B4B5:061F:0011:7F5A
 */
void f__1A34_204C_0043_B1ED()
{
l__204C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x6A) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x69) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x68) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__2094;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_ax = (int8)emu_al;
	emu_dx = 0xFF;
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x208F); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__208F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
l__2094:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0x0) goto l__209D;
	goto l__2128;
l__209D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x100);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) < 0x100) goto l__20A7;
	goto l__2128;
l__20A7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_get_memory8(emu_es, emu_bx, 0x6B) = emu_al;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x40));
	emu_push(emu_cs); emu_push(0x20D2); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__20D2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x20EB); emu_cs = 0x07C9; emu_Tools_AdjustToGameSpeed();
l__20EB:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cl = 0x4;
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__210D;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0xFF;
	goto l__2112;
l__210D:
	emu_get_memory16(emu_ss, emu_bp,  0xA) = 0x1;
l__2112:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_get_memory8(emu_es, emu_bx, 0x6A) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_es, emu_bx, 0x68) = emu_al;
	goto l__2130;
l__2128:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x6B) = 0x0;
l__2130:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2134_001E_3E9A()
 *
 * @name f__1A34_2134_001E_3E9A
 * @implements 1A34:2134:001E:3E9A ()
 * @implements 1A34:214B:0007:54F3
 * @implements 1A34:2152:0029:FB3F
 * @implements 1A34:217B:0033:EFF3
 * @implements 1A34:21AE:001C:C286
 * @implements 1A34:21BF:000B:7C30
 * @implements 1A34:21CA:0010:2113
 * @implements 1A34:21CD:000D:A989
 * @implements 1A34:21DA:0006:F7CE
 *
 * Called From: 176C:0368:000D:D0BA
 */
void f__1A34_2134_001E_3E9A()
{
l__2134:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6A);
	emu_ah = 0x0;
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__2152;
l__214B:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__21DA;
l__2152:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x69);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x68);
	emu_ah = 0x0;
	emu_di = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x217B); emu_cs = 0x07C9; emu_Tools_AdjustToGameSpeed();
l__217B:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF00);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0xFF00) == 0) goto l__21CD;
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	emu_cl = 0x4;
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x21AE); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__21AE:
	emu_addw(&emu_sp, 0x8);
	emu_addw(&emu_ax, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) < emu_si) {
		emu_si = emu_get_memory16(emu_ss, emu_bp, -0x4);
	}
l__21BF:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x21CA); f__1A34_0005_001F_38E2();
l__21CA:
	emu_addw(&emu_sp, 0x6);
l__21CD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_es, emu_bx, 0x69) = emu_al;
	goto l__214B;
l__21DA:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_232C_0011_B7DE()
 *
 * @name f__1A34_232C_0011_B7DE
 * @implements 1A34:232C:0011:B7DE ()
 * @implements 1A34:233D:0009:1DF9
 * @implements 1A34:2346:0008:0AE5
 * @implements 1A34:234E:000D:9A60
 * @implements 1A34:235B:001A:C4B6
 * @implements 1A34:2375:0036:4CD2
 * @implements 1A34:23AB:0031:C28A
 * @implements 1A34:23DC:000C:AD88
 * @implements 1A34:23DF:0009:2420
 * @implements 1A34:23E5:0003:1DA4
 * @implements 1A34:23E8:0003:9DA1
 * @implements 1A34:23EB:0019:E7B1
 * @implements 1A34:2404:0018:8B26
 * @implements 1A34:241C:000A:D495
 * @implements 1A34:2426:000F:6B18
 * @implements 1A34:2435:002A:0C1B
 * @implements 1A34:243B:0024:40BE
 * @implements 1A34:2444:001B:86FD
 * @implements 1A34:245F:004E:C488
 * @implements 1A34:249A:0013:9FB3
 * @implements 1A34:24AD:0006:0889
 * @implements 1A34:24B0:0003:62AB
 * @implements 1A34:24B5:000A:D0CF
 * @implements 1A34:24BF:001B:B989
 * @implements 1A34:24D8:0002:CBBA
 * @implements 1A34:24DA:001E:4828
 * @implements 1A34:24F1:0007:6BEA
 * @implements 1A34:24F8:0006:F7CE
 *
 * Called From: 0AEC:058A:0010:F5AC
 * Called From: 1391:0655:0013:BF12
 * Called From: 1391:06DC:0013:BF12
 * Called From: 1A34:22EE:000D:82BF
 */
void f__1A34_232C_0011_B7DE()
{
l__232C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x233D); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__233D:
	emu_andw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2346); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1816_0033_B55B();
l__2346:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x234E); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__234E:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x235B); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__235B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_ax = 0x2000;
	emu_dx = 0x2000;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x2375); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__2375:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x4) goto l__23EB;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x23AB); emu_Unit_Create();
l__23AB:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__23E8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__23DF;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x23DC); emu_Unit_SetDestination();
l__23DC:
	emu_addw(&emu_sp, 0x6);
l__23DF:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
l__23E5:
	goto l__24F8;
l__23E8:
	goto l__24F1;
l__23EB:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2404); emu_Unit_Create();
l__2404:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__241C;
	goto l__24DA;
l__241C:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2426); emu_cs = 0x1423; emu_House_AreAllied();
l__2426:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__243B;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2435); emu_cs = 0x0FE4; emu_Unit_IsTypeOnMap();
l__2435:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__2444;
l__243B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
l__2444:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_dx = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x245F); emu_Unit_Create();
l__245F:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__24B5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x100);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x10);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x10) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory8(emu_es, emu_bx, 0x58) = 0x1;
	}
l__249A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__24B0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x24AD); emu_Unit_SetDestination();
l__24AD:
	emu_addw(&emu_sp, 0x6);
l__24B0:
	goto l__23DF;
l__24B5:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x24BF); f__1A34_10EC_000E_A326();
l__24BF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x10);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x10) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
		if (emu_get_memory16(emu_es, emu_bx, 0x2) == 0x0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
			emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x2));
		}
	}
l__24D8:
	goto l__24F1;
l__24DA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x10);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x10) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
		if (emu_get_memory16(emu_es, emu_bx, 0x2) == 0x0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
			emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x2));
		}
	}
l__24F1:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__23E5;
l__24F8:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_24FE_002F_672A()
 *
 * @name f__1A34_24FE_002F_672A
 * @implements 1A34:24FE:002F:672A ()
 * @implements 1A34:252D:000F:5EE3
 * @implements 1A34:253C:0008:768F
 * @implements 1A34:2544:000D:FA55
 * @implements 1A34:2551:0007:FB98
 * @implements 1A34:2558:0011:ABE2
 * @implements 1A34:2569:001B:9AFF
 * @implements 1A34:2584:0014:41D6
 * @implements 1A34:2598:0012:84AB
 * @implements 1A34:25AA:0038:84DA
 * @implements 1A34:25E2:0016:9136
 * @implements 1A34:25F8:000D:9302
 * @implements 1A34:2605:0005:517D
 * @implements 1A34:260A:0017:79E6
 * @implements 1A34:260D:0014:85AF
 * @implements 1A34:2621:0024:2E24
 * @implements 1A34:262F:0016:7F42
 * @implements 1A34:2645:0061:62F8
 * @implements 1A34:2677:002F:A9D2
 * @implements 1A34:26A6:0006:773A
 * @implements 1A34:26A9:0003:1D18
 * @implements 1A34:26AC:0011:ABE2
 * @implements 1A34:26BD:0018:5400
 * @implements 1A34:26D5:001B:C457
 * @implements 1A34:26F0:001E:5D43
 * @implements 1A34:270E:0077:D7BC
 * @implements 1A34:2732:0053:7C9E
 * @implements 1A34:275B:002A:9B6E
 * @implements 1A34:2785:0005:85EE
 * @implements 1A34:2788:0002:C13A
 * @implements 1A34:278C:0008:C849
 * @implements 1A34:2794:0006:F7CE
 *
 * Called From: 0972:1302:001F:F082
 * Called From: 1423:0885:0012:A717
 * Called From: 176C:180C:0017:CD04
 */
void f__1A34_24FE_002F_672A()
{
l__24FE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x252D); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__252D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x253C); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__253C:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__2544;
	goto l__278C;
l__2544:
	emu_bx = emu_si;
	emu_subw(&emu_bx, 0x12);
	emu_cmpw(&emu_bx, 0x6);
	if (emu_bx <= 0x6) goto l__2551;
	/* Unresolved jump */ emu_ip = 0x278A; emu_last_cs = 0x1A34; emu_last_ip = 0x254E; emu_last_length = 0x000D; emu_last_crc = 0xFA55; emu_call();
l__2551:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x279A);
	switch (emu_ip) {
		case 0x2558: goto l__2558;
		case 0x26AC: goto l__26AC;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1A34; emu_last_ip = 0x2553; emu_last_length = 0x0007; emu_last_crc = 0xFB98;
			emu_call();
			return;
	}
l__2558:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2569); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__2569:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2584); emu_Unit_Create();
l__2584:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__2598;
	goto l__26A9;
l__2598:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x58));
	emu_push(emu_cs); emu_push(0x25AA); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__25AA:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_get_memory16(emu_es, emu_bx, 0x54) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_get_memory16(emu_es, emu_bx, 0x4B) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x49) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x4000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x4000) == 0) goto l__262F;
	emu_push(emu_cs); emu_push(0x25E2); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__25E2:
	emu_testw(&emu_ax, 0xF);
	if ((emu_ax & 0xF) == 0) goto l__2605;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x25F8); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__25F8:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_ax = emu_di;
	emu_cl = 0x8;
	emu_sarw(&emu_ax, emu_cl);
	goto l__260D;
l__2605:
	emu_push(emu_cs); emu_push(0x260A); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__260A:
	emu_andw(&emu_ax, 0xFF);
l__260D:
	emu_di = emu_ax;
	emu_addw(&emu_di, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x2621); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
l__2621:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x4B) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x49) = emu_ax;
l__262F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x50);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x51) = emu_al;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x2645); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__2645:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
		emu_ax = (int8)emu_al;
		emu_dx = 0x5A;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2D07;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
		if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_shlb(&emu_get_memory8(emu_es, emu_bx, 0x51), 0x1);
		}
	}
l__2677:
	emu_cmpw(&emu_si, 0x12);
	if (emu_si == 0x12) goto l__26A9;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_dx = 0x1;
	emu_cl = emu_get_memory8(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) != 0) goto l__26A9;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x26A6); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Tile_RemoveFogInRadius();
l__26A6:
	emu_addw(&emu_sp, 0x6);
l__26A9:
	goto l__278C;
l__26AC:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x26BD); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__26BD:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x26D5); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
l__26D5:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x26F0); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
l__26F0:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x270E); emu_Unit_Create();
l__270E:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2788;
	emu_cmpw(&emu_si, 0x18);
	if (emu_si == 0x18) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x50);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory8(emu_es, emu_bx, 0x51) = emu_al;
	}
l__2732:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_get_memory16(emu_es, emu_bx, 0x4B) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x49) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0xF);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0xE) > (int16)0xF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	}
l__275B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_dx = 0x1;
	emu_cl = emu_get_memory8(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) != 0) goto l__2788;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2785); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Tile_RemoveFogInRadius();
l__2785:
	emu_addw(&emu_sp, 0x6);
l__2788:
	goto l__278C;
l__278C:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__2794;
l__2794:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_27A8_0012_7198()
 *
 * @name f__1A34_27A8_0012_7198
 * @implements 1A34:27A8:0012:7198 ()
 * @implements 1A34:27BA:0023:C5D9
 * @implements 1A34:27DD:002C:C218
 * @implements 1A34:2809:0012:6CE1
 * @implements 1A34:281B:0005:A42E
 * @implements 1A34:2820:0018:A4D6
 * @implements 1A34:2838:0005:E2F7
 * @implements 1A34:283D:000B:5F7D
 * @implements 1A34:2848:0018:A7FE
 * @implements 1A34:2851:000F:3DA7
 * @implements 1A34:2860:0013:AF66
 * @implements 1A34:2863:0010:B737
 * @implements 1A34:2873:0027:D7D0
 * @implements 1A34:289A:0008:5756
 * @implements 1A34:28A2:000D:6A6E
 * @implements 1A34:28AF:0005:64CD
 * @implements 1A34:28B4:0002:C03A
 * @implements 1A34:28B6:0016:FFBA
 * @implements 1A34:28CC:000A:3F60
 * @implements 1A34:28D6:000B:C880
 * @implements 1A34:28E1:0023:135B
 * @implements 1A34:28EA:001A:42E4
 * @implements 1A34:2904:000C:5845
 * @implements 1A34:2906:000A:5B6D
 * @implements 1A34:2910:000D:2180
 * @implements 1A34:291D:000C:6F7F
 * @implements 1A34:2929:0005:846E
 * @implements 1A34:292E:0002:C03A
 * @implements 1A34:2930:000F:BC4B
 * @implements 1A34:293F:0011:8182
 * @implements 1A34:2950:0008:1147
 * @implements 1A34:2953:0005:8BCF
 *
 * Called From: 0642:035B:000D:A6BA
 * Called From: 0642:035B:002B:2F1D
 * Called From: 0AEC:0786:000E:A7DE
 * Called From: 1A34:1074:0025:D89D
 * Called From: 1A34:1074:0027:BC2E
 * Called From: 1A34:1099:000B:E874
 */
void f__1A34_27A8_0012_7198()
{
l__27A8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__27BA;
	goto l__2953;
l__27BA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x27DD); emu_Unit_GetHouseID();
l__27DD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x37FA);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x37F8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__2820;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2809); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__2809:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x62EA;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x281B); emu_cs = 0x01F7; emu_String_sprintf();
l__281B:
	emu_addw(&emu_sp, 0xC);
	goto l__2863;
l__2820:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x1) goto l__283D;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2838); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__2838:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	goto l__2851;
l__283D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2848); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__2848:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
l__2851:
	emu_push(emu_ds);
	emu_ax = 0x62ED;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2860); emu_cs = 0x01F7; emu_String_sprintf();
l__2860:
	emu_addw(&emu_sp, 0x10);
l__2863:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, 0x10);
	if (emu_ax == 0x10) goto l__2873;
	goto l__292E;
l__2873:
	emu_si = 0x79;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x5);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x5) goto l__28B6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x64);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x58) >= (int8)0x64) goto l__28B6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x289A); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__289A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x28A2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__28A2:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x8);
	if (emu_ax == 0x8) goto l__28AF;
	emu_cmpw(&emu_ax, 0x9);
	if (emu_ax == 0x9) goto l__28AF;
	goto l__28B4;
l__28AF:
	emu_si = 0x7A;
	goto l__28B6;
l__28B4:
	goto l__28B6;
l__28B6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x1);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x1) goto l__28D6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x28CC); emu_cs = 0x167E; emu_Tools_Index_GetStructure();
l__28CC:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__28D6;
	emu_si = 0x7B;
	goto l__28EA;
l__28D6:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x28E1); emu_cs = 0x0C10; emu_Object_IsScriptVariable4NotNull();
l__28E1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_si = 0x7C;
	}
l__28EA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__2904;
	emu_ax = 0x4;
	goto l__2906;
l__2904:
	emu_xorw(&emu_ax, emu_ax);
l__2906:
	emu_dx = emu_si;
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2910); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__2910:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x291D); emu_cs = 0x01F7; emu_String_strlen();
l__291D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x9939);
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2929); emu_cs = 0x01F7; emu_String_sprintf();
l__2929:
	emu_addw(&emu_sp, 0xA);
	goto l__2930;
l__292E:
	goto l__2930;
l__2930:
	emu_push(emu_ds);
	emu_ax = 0x62F3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x293F); emu_cs = 0x01F7; emu_String_strcat();
l__293F:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2950); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__2950:
	emu_addw(&emu_sp, 0x6);
l__2953:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2958_0013_3A47()
 *
 * @name f__1A34_2958_0013_3A47
 * @implements 1A34:2958:0013:3A47 ()
 * @implements 1A34:2966:0005:DC3A
 * @implements 1A34:2968:0003:DDAE
 * @implements 1A34:296B:002B:7552
 * @implements 1A34:2996:0022:D8ED
 * @implements 1A34:29B8:0015:974C
 * @implements 1A34:29BA:0013:0581
 * @implements 1A34:29CD:0009:B788
 * @implements 1A34:29D6:002C:34BE
 * @implements 1A34:2A02:0036:7718
 * @implements 1A34:2A38:002E:5D99
 * @implements 1A34:2A3B:002B:7FF3
 * @implements 1A34:2A5D:0009:7ADF
 * @implements 1A34:2A66:0012:2F8E
 * @implements 1A34:2A6D:000B:F53C
 * @implements 1A34:2A78:001A:5F59
 * @implements 1A34:2A92:0009:8654
 * @implements 1A34:2A9B:000B:AEAC
 * @implements 1A34:2AA6:0004:893F
 *
 * Called From: 0972:0CB5:0017:4EFB
 * Called From: 0972:0D79:000F:5891
 * Called From: 1391:03CD:000E:8A9D
 * Called From: 176C:0ADF:000F:6094
 */
void f__1A34_2958_0013_3A47()
{
l__2958:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__296B;
l__2966:
	emu_xorw(&emu_ax, emu_ax);
l__2968:
	goto l__2AA6;
l__296B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFFB);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2996); emu_cs = 0x0F3F; emu_Tile_Center();
l__2996:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4D), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x4D) != 0x0) goto l__29BA;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x29B8); emu_Unit_FindStructure();
l__29B8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__29BA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x26) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x29CD); f__1A34_0E2E_0015_7E65();
l__29CD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__29D6;
	goto l__2A9B;
l__29D6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4B) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x49) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x54) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2A02); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__2A02:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) == 0) goto l__2A3B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_notb(&emu_al, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2A38); emu_cs = 0x1423; f__1423_08CD_0012_0004();
l__2A38:
	emu_addw(&emu_sp, 0x6);
l__2A3B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
			emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
			if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__2A66;
		}
	}
l__2A5D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x48));
	goto l__2A6D;
l__2A66:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x28));
l__2A6D:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2A78); emu_cs = 0x176C; emu_Unit_SetAction();
l__2A78:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x6D) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2A92); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__2A92:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__2968;
l__2A9B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	goto l__2966;
l__2AA6:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2AAA_000D_A3E6()
 *
 * @name f__1A34_2AAA_000D_A3E6
 * @implements 1A34:2AAA:000D:A3E6 ()
 * @implements 1A34:2AB7:0016:931E
 * @implements 1A34:2ACD:001F:0A02
 * @implements 1A34:2AEC:000E:C4E8
 * @implements 1A34:2AFA:0019:3A5B
 * @implements 1A34:2B13:0005:6143
 *
 * Called From: 176C:0EE0:000E:44F7
 * Called From: 1A34:2D1D:0018:E247
 */
void f__1A34_2AAA_000D_A3E6()
{
l__2AAA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__2AB7;
	/* Unresolved jump */ emu_ip = 0x2B16; emu_last_cs = 0x1A34; emu_last_ip = 0x2AB5; emu_last_length = 0x000D; emu_last_crc = 0xA3E6; emu_call();
l__2AB7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2ACD); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__2ACD:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFBF);
	emu_push(emu_ds);
	emu_ax = 0x3902;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2AEC); emu_cs = 0x15C2; emu_Script_Reset();
l__2AEC:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2AFA); emu_Unit_UntargetMe();
l__2AFA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2B13); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
l__2B13:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Unit_RemoveFog()
 *
 * @name emu_Unit_RemoveFog
 * @implements 1A34:2B18:0011:E4D5 ()
 * @implements 1A34:2B29:0038:02DF
 * @implements 1A34:2B45:001C:B665
 * @implements 1A34:2B61:0008:9688
 * @implements 1A34:2B69:0045:736F
 * @implements 1A34:2BAE:0007:980A
 * @implements 1A34:2BB1:0004:893F
 *
 * Called From: 176C:26D8:0010:041C
 * Called From: B511:0171:0016:EAC5
 */
void emu_Unit_RemoveFog()
{
l__2B18:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__2B29;
	goto l__2BB1;
l__2B29:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) != 0) goto l__2BB1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0xC) == 0xFFFF) {
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0xFFFF);
		if (emu_get_memory16(emu_es, emu_bx, 0xA) == 0xFFFF) goto l__2BB1;
	}
l__2B45:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	if (emu_ax == 0) goto l__2BB1;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2B61); emu_Unit_GetHouseID();
l__2B61:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2B69); emu_cs = 0x1423; emu_House_AreAllied();
l__2B69:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__2BB1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) == 0x0) goto l__2BB1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2BAE); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Tile_RemoveFogInRadius();
l__2BAE:
	emu_addw(&emu_sp, 0x6);
l__2BB1:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2BB5_0025_30B8()
 *
 * @name f__1A34_2BB5_0025_30B8
 * @implements 1A34:2BB5:0025:30B8 ()
 * @implements 1A34:2BDA:0005:92AE
 * @implements 1A34:2BDF:0022:6DF3
 * @implements 1A34:2C01:000B:799F
 * @implements 1A34:2C0C:003A:3AF5
 * @implements 1A34:2C0E:0038:AC99
 * @implements 1A34:2C1C:002A:C573
 * @implements 1A34:2C46:003E:E039
 * @implements 1A34:2C64:0020:54FF
 * @implements 1A34:2C84:000B:89DA
 * @implements 1A34:2C87:0008:D8C9
 * @implements 1A34:2C8F:0006:F7CE
 *
 * Called From: 0972:0BBE:0015:DC2E
 * Called From: 176C:2509:000B:7D3A
 */
void f__1A34_2BB5_0025_30B8()
{
l__2BB5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2BDA); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__2BDA:
	emu_addw(&emu_sp, 0x8);
	goto l__2C0E;
l__2BDF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__2C01;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) != 0x0) goto l__2C01;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	goto l__2C1C;
l__2C01:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2C0C); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__2C0C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2C0E:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__2BDF;
l__2C1C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) goto l__2C64;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__2C64;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__2C64;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = 0x60;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2C46); emu_Unit_Create();
l__2C46:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	}
l__2C64:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__2C87;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x2C84); emu_cs = 0x0C10; f__0C10_00D2_000F_D61E();
l__2C84:
	emu_addw(&emu_sp, 0x6);
l__2C87:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__2C8F;
l__2C8F:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2C95_001B_89A2()
 *
 * @name f__1A34_2C95_001B_89A2
 * @implements 1A34:2C95:001B:89A2 ()
 * @implements 1A34:2CB0:001C:F555
 * @implements 1A34:2CCC:0039:A882
 * @implements 1A34:2CCE:0037:71AE
 * @implements 1A34:2D08:0018:E247
 * @implements 1A34:2D20:000D:AA58
 * @implements 1A34:2D2D:0011:DBC6
 * @implements 1A34:2D3E:0009:B78D
 * @implements 1A34:2D47:0010:93D7
 * @implements 1A34:2D57:000F:5FC7
 * @implements 1A34:2D5A:000C:2FC2
 * @implements 1A34:2D66:0010:0111
 * @implements 1A34:2D76:0033:68C4
 * @implements 1A34:2DA9:0028:DC3E
 * @implements 1A34:2DD1:000D:5E93
 * @implements 1A34:2DDE:005A:6439
 * @implements 1A34:2DE1:0057:CA39
 * @implements 1A34:2E18:0020:ACCF
 * @implements 1A34:2E38:001D:0BE3
 * @implements 1A34:2E55:000E:BB32
 * @implements 1A34:2E63:0005:8F61
 * @implements 1A34:2E68:0019:2B5A
 * @implements 1A34:2E81:0015:C71B
 * @implements 1A34:2E96:000F:90E3
 * @implements 1A34:2EA5:0009:B45C
 * @implements 1A34:2EAE:001D:C6A0
 * @implements 1A34:2ECB:0011:6CE1
 * @implements 1A34:2EDC:0027:8321
 * @implements 1A34:2F03:001A:C46A
 * @implements 1A34:2F1D:0017:10C5
 * @implements 1A34:2F26:000E:591D
 * @implements 1A34:2F34:000C:0C19
 * @implements 1A34:2F40:0004:461F
 * @implements 1A34:2F44:0023:D47C
 * @implements 1A34:2F67:0014:59EA
 * @implements 1A34:2F69:0012:F102
 * @implements 1A34:2F7B:000E:2A03
 * @implements 1A34:2F7E:000B:0889
 * @implements 1A34:2F89:000D:542A
 * @implements 1A34:2F96:0008:AE7C
 * @implements 1A34:2F98:0006:F7CE
 *
 * Called From: 176C:0A0A:0008:45F1
 * Called From: 1A34:07DC:0036:8D87
 */
void f__1A34_2C95_001B_89A2()
{
l__2C95:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x2CAD; emu_last_cs = 0x1A34; emu_last_ip = 0x2CA3; emu_last_length = 0x001B; emu_last_crc = 0x89A2; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax != 0) goto l__2CB0;
	goto l__2F98;
l__2CB0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A0C)) goto l__2CCE;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3A0A)) goto l__2CCE;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x2CCC); f__1A34_0F48_0018_0DB8();
l__2CCC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2CCE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) { /* Unresolved jump */ emu_ip = 0x2CFB; emu_last_cs = 0x1A34; emu_last_ip = 0x2CEF; emu_last_length = 0x0037; emu_last_crc = 0x71AE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xE) != 0x0) goto l__2D08;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D05); f__1A34_10EC_000E_A326();
	/* Unresolved jump */ emu_ip = 0x2D05; emu_last_cs = 0x1A34; emu_last_ip = 0x2D05; emu_last_length = 0x0037; emu_last_crc = 0x71AE; emu_call();
l__2D08:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D20); f__1A34_2AAA_000D_A3E6();
l__2D20:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D2D); emu_Unit_GetHouseID();
l__2D2D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2D3E); emu_cs = 0x1423; emu_House_AreAllied();
l__2D3E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__2D47;
	goto l__2E38;
l__2D47:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x10) == 0) goto l__2D57;
	emu_ax = 0x2;
	goto l__2D5A;
l__2D57:
	emu_ax = 0x1;
l__2D5A:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2D66); emu_cs = 0x0C3A; emu_Structure_SetAnimation();
l__2D66:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xD) goto l__2D76;
	goto l__2E18;
l__2D76:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x2DA9); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_ValueToPercent();
l__2DA9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
	emu_cl = 0x6;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2DD1); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__2DD1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x1);
	if (emu_si <= 0x1) goto l__2DDE;
	emu_ax = emu_si;
	goto l__2DE1;
l__2DDE:
	emu_ax = 0x1;
l__2DE1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x50) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFF7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x6D) = 0x0;
l__2E18:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	goto l__2F98;
l__2E38:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__2E68;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1F4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2E55); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
l__2E55:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2E63); emu_cs = 0x0FE4; emu_Unit_Free();
l__2E63:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2F98;
l__2E68:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x10);
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xE) < (int16)emu_ax) goto l__2E81;
	goto l__2F44;
l__2E81:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2E96); emu_Unit_GetHouseID();
l__2E96:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x8) = emu_al;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2EA5); emu_cs = 0x0C3A; emu_Structure_GetStructuresBuilt();
l__2EA5:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2EAE); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__2EAE:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2ECB); emu_cs = 0x0C3A; emu_Structure_GetStructuresBuilt();
l__2ECB:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2EDC); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__2EDC:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__2F26;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2F03); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__2F03:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__2F26;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2F1D); emu_Unit_GetHouseID();
l__2F1D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x8) = emu_al;
l__2F26:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2F34); emu_cs = 0x0C3A; emu_Structure_CalculatePowerAndCredit();
l__2F34:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2F40); emu_cs = 0x0C3A; emu_Structure_UpdateMap();
l__2F40:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2F7E;
l__2F44:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_sarw(&emu_ax, 0x1);
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax >= emu_di) goto l__2F67;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_shlw(&emu_ax, 0x1);
	goto l__2F69;
l__2F67:
	emu_ax = emu_di;
l__2F69:
	emu_di = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2F7B); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
l__2F7B:
	emu_addw(&emu_sp, 0x8);
l__2F7E:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2F89); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__2F89:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2F96); emu_cs = 0x0FE4; emu_Unit_Free();
l__2F96:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2F98:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2F9E_0016_5A55()
 *
 * @name f__1A34_2F9E_0016_5A55
 * @implements 1A34:2F9E:0016:5A55 ()
 * @implements 1A34:2FB0:0004:45F2
 * @implements 1A34:2FB2:0002:ED3A
 * @implements 1A34:2FB4:0006:66E9
 * @implements 1A34:2FBA:0007:DD5F
 * @implements 1A34:2FC1:0006:16E4
 * @implements 1A34:2FC7:0008:8187
 * @implements 1A34:2FCF:0004:F5D9
 * @implements 1A34:2FD3:0010:0BCE
 * @implements 1A34:2FE3:001F:2746
 * @implements 1A34:3002:0004:0D1F
 * @implements 1A34:3006:0008:F390
 * @implements 1A34:3007:0007:B490
 * @implements 1A34:300E:0006:F7CE
 *
 * Called From: 0AEC:03C7:0035:696E
 * Called From: 0AEC:073B:0008:C3DB
 * Called From: 0AEC:07CE:000F:8BC4
 */
void f__1A34_2F9E_0016_5A55()
{
l__2F9E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x2) goto l__2FB4;
l__2FB0:
	emu_ax = emu_si;
l__2FB2:
	goto l__300E;
l__2FB4:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2FBA); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__2FBA:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__2FC1;
	goto l__2FB0;
l__2FC1:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2FC7); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__2FC7:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xE);
	if (emu_ax != 0xE) goto l__2FCF;
	goto l__2FB0;
l__2FCF:
	emu_xorw(&emu_di, emu_di);
	goto l__3007;
l__2FD3:
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x62D8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2FE3); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
l__2FE3:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__3006;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x3002); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__3002:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2FB2;
l__3006:
	emu_incw(&emu_di);
l__3007:
	emu_cmpw(&emu_di, 0x9);
	if ((int16)emu_di < (int16)0x9) goto l__2FD3;
	goto l__2FB0;
l__300E:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_3014_001B_858E()
 *
 * @name f__1A34_3014_001B_858E
 * @implements 1A34:3014:001B:858E ()
 * @implements 1A34:302A:0005:DC30
 * @implements 1A34:302C:0003:DDA4
 * @implements 1A34:302F:003F:CF75
 * @implements 1A34:306E:0014:5E5F
 * @implements 1A34:3082:0010:2E6C
 * @implements 1A34:3092:0028:4B4E
 * @implements 1A34:30BA:0024:9E02
 * @implements 1A34:30DE:000D:EC73
 * @implements 1A34:30ED:0002:E53A
 * @implements 1A34:30EF:0002:E73A
 * @implements 1A34:30F1:0011:EA5C
 * @implements 1A34:3102:001E:AED8
 * @implements 1A34:3120:000D:8B73
 * @implements 1A34:3127:0006:420D
 * @implements 1A34:312F:0010:5340
 * @implements 1A34:3139:0006:C211
 * @implements 1A34:313F:0003:621A
 * @implements 1A34:3142:0004:893F
 *
 * Called From: 1A34:1C4A:0018:2310
 * Called From: 1A34:3268:001F:93C6
 */
void f__1A34_3014_001B_858E()
{
l__3014:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != 0) goto l__302F;
	}
l__302A:
	emu_xorw(&emu_ax, emu_ax);
l__302C:
	goto l__3142;
l__302F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x306E); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__306E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3082); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__3082:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3092); emu_Unit_GetHouseID();
l__3092:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx == emu_ax) goto l__30F1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__30BA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x56);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__30BA;
	goto l__3127;
l__30BA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x0) goto l__30EF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x80);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x80) == 0) goto l__30EF;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x30DE); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__30DE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x56));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x56)) goto l__30ED;
	goto l__3127;
l__30ED:
	goto l__3139;
l__30EF:
	goto l__313F;
l__30F1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_push(emu_cs); emu_push(0x3102); emu_cs = 0x01F7; emu_Tools_Shld();
l__3102:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cx = emu_get_memory16(emu_es, emu_bx, 0x34);
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x32);
	emu_andw(&emu_bx, emu_ax);
	emu_andw(&emu_cx, emu_dx);
	emu_orw(&emu_bx, emu_cx);
	if (emu_bx == 0) goto l__313F;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x3120); emu_cs = 0x0C10; emu_Object_GetScriptVariable4();
l__3120:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__312F;
l__3127:
	emu_ax = 0x2;
	goto l__302C;
l__312F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__313F;
l__3139:
	emu_ax = 0x1;
	goto l__302C;
l__313F:
	goto l__302A;
l__3142:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_3146_0018_6887()
 *
 * @name f__1A34_3146_0018_6887
 * @implements 1A34:3146:0018:6887 ()
 * @implements 1A34:3159:0005:9C1F
 * @implements 1A34:315B:0003:9D8B
 * @implements 1A34:315E:001E:8618
 * @implements 1A34:317C:0012:0298
 * @implements 1A34:318E:0006:22E8
 * @implements 1A34:3194:0012:71A5
 * @implements 1A34:31A6:0013:CF39
 * @implements 1A34:31B9:000D:D98A
 * @implements 1A34:31C6:0019:2E66
 * @implements 1A34:31DF:000E:3622
 * @implements 1A34:31ED:000B:21FD
 * @implements 1A34:31F8:000E:95EC
 * @implements 1A34:3206:0008:9688
 * @implements 1A34:320E:0038:9680
 * @implements 1A34:3244:0002:DBBA
 * @implements 1A34:3246:0006:62E9
 * @implements 1A34:324C:001F:93C6
 * @implements 1A34:326B:0010:77A5
 * @implements 1A34:327D:0006:9214
 * @implements 1A34:3283:0006:12E4
 * @implements 1A34:3289:0051:2FE9
 * @implements 1A34:32DA:002A:8A6C
 * @implements 1A34:32E3:0021:3D72
 * @implements 1A34:3302:0002:C1BA
 * @implements 1A34:3304:0008:7C67
 * @implements 1A34:3307:0005:C667
 * @implements 1A34:330C:0006:F7CE
 *
 * Called From: 176C:1F38:001C:8C6C
 * Called From: 1A34:172C:0023:B77B
 */
void f__1A34_3146_0018_6887()
{
l__3146:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__315E;
l__3159:
	emu_xorw(&emu_ax, emu_ax);
l__315B:
	goto l__330C;
l__315E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x317C); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0F8B_0015_1689();
l__317C:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__318E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__318E;
	goto l__327D;
l__318E:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x3194); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
l__3194:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__31A6;
	goto l__3246;
l__31A6:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__31B9;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__31B9;
	goto l__3246;
l__31B9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__31C6;
	goto l__3246;
l__31C6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__31ED;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x31DF); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__31DF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x56));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x56)) goto l__31ED;
	goto l__3159;
l__31ED:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x31F8); emu_Unit_GetHouseID();
l__31F8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x3206); emu_Unit_GetHouseID();
l__3206:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x320E); emu_cs = 0x1423; emu_House_AreAllied();
l__320E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
		emu_ax = (int8)emu_al;
		emu_dx = 0x5A;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2D07;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
		if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x1);
			if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x1) goto l__3246;
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x2);
			if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x2) goto l__3246;
		}
	}
l__3244:
	goto l__327D;
l__3246:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x324C); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__324C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__3283;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x326B); f__1A34_3014_001B_858E();
l__326B:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__327D;
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	goto l__315B;
l__327D:
	emu_ax = 0x100;
	goto l__315B;
l__3283:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x3289); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__3289:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3A42);
	emu_ah = 0x0;
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__32E3;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xB);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) != 0xB) goto l__32E3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ah = 0x0;
	emu_andw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x32DA); emu_cs = 0x1423; emu_House_AreAllied();
l__32DA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_si = 0xFF;
	}
l__32E3:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__3304;
	emu_xorw(&emu_si, 0xFF);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x1);
	if ((emu_get_memory16(emu_ss, emu_bp,  0xC) & 0x1) != 0) {
		emu_ax = emu_si;
		emu_cl = 0x2;
		emu_sarw(&emu_ax, emu_cl);
		emu_dx = emu_si;
		emu_cl = 0x3;
		emu_sarw(&emu_dx, emu_cl);
		emu_addw(&emu_ax, emu_dx);
		emu_subw(&emu_si, emu_ax);
	}
l__3302:
	goto l__3307;
l__3304:
	emu_si = 0x100;
l__3307:
	emu_ax = emu_si;
	goto l__315B;
l__330C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Unit_FindStructure()
 *
 * @name emu_Unit_FindStructure
 * @implements 1A34:3312:0017:29E8 ()
 * @implements 1A34:3329:0012:5256
 * @implements 1A34:332B:0010:F25A
 * @implements 1A34:333B:001B:415B
 * @implements 1A34:3356:000E:DA27
 * @implements 1A34:3364:0005:A3AE
 * @implements 1A34:3369:0025:D9FB
 * @implements 1A34:338E:0026:4EDC
 * @implements 1A34:339B:0019:4CA8
 * @implements 1A34:33A9:000B:166D
 * @implements 1A34:33B4:0027:6A44
 * @implements 1A34:33B6:0025:0EF7
 * @implements 1A34:33DB:000E:DA27
 * @implements 1A34:33E9:0005:A4AE
 * @implements 1A34:33EE:001B:E20F
 * @implements 1A34:3409:0026:4EDC
 * @implements 1A34:3416:0019:4CA8
 * @implements 1A34:3424:000B:166D
 * @implements 1A34:342F:0027:51AB
 * @implements 1A34:3431:0025:3518
 * @implements 1A34:343F:0017:3A91
 * @implements 1A34:3456:000B:5F73
 * @implements 1A34:345F:0002:D2BA
 * @implements 1A34:3461:0014:BCA2
 * @implements 1A34:3475:0008:A673
 * @implements 1A34:347D:000E:0297
 * @implements 1A34:3486:0005:BBA6
 * @implements 1A34:348B:0006:F7CE
 *
 * Called From: 176C:1E08:000D:B2F8
 * Called From: 176C:1E08:0023:0DDB
 * Called From: 1A34:09D6:000B:5F01
 * Called From: 1A34:09D6:0059:0B58
 * Called From: 1A34:29B5:0022:D8ED
 */
void emu_Unit_FindStructure()
{
l__3312:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4D), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x4D) == 0x0) goto l__3329;
	emu_ax = 0x1;
	goto l__332B;
l__3329:
	emu_xorw(&emu_ax, emu_ax);
l__332B:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x10) goto l__333B;
	goto l__3461;
l__333B:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_xorw(&emu_si, emu_si);
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3356); emu_Unit_GetHouseID();
l__3356:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x3364); emu_cs = 0x1082; emu_Structure_FindFirst();
l__3364:
	emu_addw(&emu_sp, 0x8);
	goto l__33B6;
l__3369:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x1);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x1) goto l__33A9;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x338E); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__338E:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) {
		emu_cmpw(&emu_di, emu_si);
		if ((int16)emu_di >= (int16)emu_si) goto l__33A9;
	}
l__339B:
	emu_si = emu_di;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
l__33A9:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x33B4); emu_cs = 0x1082; emu_Structure_FindNext();
l__33B4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__33B6:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__3369;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax != 0) goto l__343F;
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x33DB); emu_Unit_GetHouseID();
l__33DB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x33E9); emu_cs = 0x1082; emu_Structure_FindFirst();
l__33E9:
	emu_addw(&emu_sp, 0x8);
	goto l__3431;
l__33EE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x3409); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__3409:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) {
		emu_cmpw(&emu_di, emu_si);
		if ((int16)emu_di >= (int16)emu_si) goto l__3424;
	}
l__3416:
	emu_si = emu_di;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
l__3424:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x342F); emu_cs = 0x1082; emu_Structure_FindNext();
l__342F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__3431:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__33EE;
l__343F:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == 0) goto l__345F;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3456); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__3456:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4D) = emu_ax;
l__345F:
	goto l__3486;
l__3461:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x3475); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__3475:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x347D); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__347D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4D) = emu_ax;
l__3486:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__348B;
l__348B:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Structure_GetLinkedUnit()
 *
 * @name emu_Structure_GetLinkedUnit
 * @implements 1A34:3491:0032:AFF8 ()
 * @implements 1A34:34C3:0003:C81A
 * @implements 1A34:34C4:0002:C33A
 * @implements 1A34:34C6:0006:5EA9
 * @implements 1A34:34CC:0004:893F
 *
 * Called From: 0972:07B7:0011:81A2
 * Called From: 0972:07B7:000D:B89A
 * Called From: 0972:0B53:0012:0F5D
 * Called From: 0972:0C77:000D:A320
 * Called From: 0C10:0119:003D:FEA4
 * Called From: 0C10:028B:003C:67AC
 * Called From: 10E4:1823:000B:CD5F
 * Called From: 176C:2168:0011:BB28
 * Called From: 176C:27F5:000D:8210
 * Called From: 1A34:2211:0015:FCE4
 * Called From: 1A34:226B:000B:D285
 */
void emu_Structure_GetLinkedUnit()
{
l__3491:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__34C6;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__34C6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x34C3); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__34C3:
	emu_pop(&emu_cx);
l__34C4:
	goto l__34CC;
l__34C6:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__34C4;
l__34CC:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Unit_GetLinkedStructure()
 *
 * @name emu_Unit_GetLinkedStructure
 * @implements 1A34:34D0:0032:E0A4 ()
 * @implements 1A34:3502:0003:C81A
 * @implements 1A34:350B:0004:893F
 *
 * Called From: 0972:064C:000D:B324
 */
void emu_Unit_GetLinkedStructure()
{
l__34D0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x3505; emu_last_cs = 0x1A34; emu_last_ip = 0x34DC; emu_last_length = 0x0032; emu_last_crc = 0xE0A4; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) { /* Unresolved jump */ emu_ip = 0x3505; emu_last_cs = 0x1A34; emu_last_ip = 0x34F2; emu_last_length = 0x0032; emu_last_crc = 0xE0A4; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x3502); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
l__3502:
	emu_pop(&emu_cx);
	goto l__350B;
l__350B:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_350F_0021_9B04()
 *
 * @name f__1A34_350F_0021_9B04
 * @implements 1A34:350F:0021:9B04 ()
 * @implements 1A34:352B:0005:9C8F
 * @implements 1A34:352D:0003:9D1B
 * @implements 1A34:3530:0011:412D
 * @implements 1A34:3541:0014:1936
 * @implements 1A34:3555:000B:BD8C
 * @implements 1A34:3560:001B:39A9
 * @implements 1A34:3571:000A:2159
 * @implements 1A34:357D:000B:BD96
 * @implements 1A34:3588:001F:BC73
 * @implements 1A34:35A7:0029:C135
 * @implements 1A34:35B0:0020:EEF4
 * @implements 1A34:35D0:0015:9E61
 * @implements 1A34:35E5:000A:236B
 * @implements 1A34:35EF:0002:803A
 * @implements 1A34:35F3:0002:C93A
 * @implements 1A34:35F5:000A:3979
 * @implements 1A34:35FF:0017:BAEA
 * @implements 1A34:3607:000F:A6D7
 * @implements 1A34:360E:0008:443E
 * @implements 1A34:3616:0005:7069
 * @implements 1A34:361B:0003:22A3
 * @implements 1A34:361E:0005:8BCF
 *
 * Called From: 16C5:0714:000C:2071
 * Called From: 16C5:0714:000E:20BB
 * Called From: 176C:0876:0023:E780
 */
void f__1A34_350F_0021_9B04()
{
l__350F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__3530;
l__352B:
	emu_xorw(&emu_ax, emu_ax);
l__352D:
	goto l__361E;
l__3530:
	emu_cmpw(&emu_si, 0x4);
	if (emu_si != 0x4) goto l__357D;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x3541); emu_cs = 0x0C3A; f__0C3A_22CD_0029_8F46();
l__3541:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__3555;
	goto l__3607;
l__3555:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3560); f__1A34_1328_0026_C398();
l__3560:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x357B; emu_last_cs = 0x1A34; emu_last_ip = 0x356F; emu_last_length = 0x001B; emu_last_crc = 0x39A9; emu_call(); return; }
l__3571:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__360E;
l__357D:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3588); f__1A34_1328_0026_C398();
l__3588:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x8) goto l__35B0;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x35A7); emu_cs = 0x0C3A; f__0C3A_22CD_0029_8F46();
l__35A7:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
l__35B0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__35F5;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__35F5;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x35D0); f__1A34_117E_001D_E17B();
l__35D0:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x35E5); emu_cs = 0x0C3A; f__0C3A_2207_001D_EDF2();
l__35E5:
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx <= emu_ax) goto l__35F3;
	goto l__3571;
l__35EF:
	goto l__3571;
l__35F3:
	goto l__3607;
l__35F5:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__35FF;
	goto l__35EF;
l__35FF:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__361B;
l__3607:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
l__360E:
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3616); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__3616:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__352D;
l__361B:
	goto l__352B;
l__361E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Unit_UntargetMe()
 *
 * @name emu_Unit_UntargetMe
 * @implements 1A34:364E:0012:61B3 ()
 * @implements 1A34:3660:000F:A6AC
 * @implements 1A34:366F:000F:DCEB
 * @implements 1A34:367E:0014:005F
 * @implements 1A34:3692:0005:A22E
 * @implements 1A34:3697:002F:3E26
 * @implements 1A34:36A9:001D:281D
 * @implements 1A34:36BB:000B:70FD
 * @implements 1A34:36C6:0011:21E1
 * @implements 1A34:36D7:000C:94A1
 * @implements 1A34:36D9:000A:B13A
 * @implements 1A34:36E3:0022:7EB7
 * @implements 1A34:36E5:0020:1221
 * @implements 1A34:3705:0005:9C2E
 * @implements 1A34:370A:0030:FE88
 * @implements 1A34:371E:001C:757B
 * @implements 1A34:3730:000A:DEC8
 * @implements 1A34:373A:001B:D4DB
 * @implements 1A34:373C:0019:E290
 * @implements 1A34:3755:0010:2991
 * @implements 1A34:3765:0005:8BEE
 * @implements 1A34:376A:001C:4064
 * @implements 1A34:377C:000A:CED6
 * @implements 1A34:3786:0015:041E
 * @implements 1A34:3788:0013:96D3
 *
 * Called From: 1A34:01EE:000B:0192
 * Called From: 1A34:01EE:000D:CC00
 * Called From: 1A34:110A:0013:0DCB
 * Called From: 1A34:192C:000E:0F1A
 * Called From: 1A34:1A21:000E:4F97
 * Called From: 1A34:2AF7:000E:C4E8
 */
void emu_Unit_UntargetMe()
{
l__364E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__3660;
	/* Unresolved jump */ emu_ip = 0x3796; emu_last_cs = 0x1A34; emu_last_ip = 0x365D; emu_last_length = 0x0012; emu_last_crc = 0x61B3; emu_call();
l__3660:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x366F); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__366F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x367E); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__367E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x3692); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__3692:
	emu_addw(&emu_sp, 0x8);
	goto l__36E5;
l__3697:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) == emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	}
l__36A9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x54) = 0x0;
	}
l__36BB:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x36C6); emu_cs = 0x0C10; emu_Object_GetScriptVariable4();
l__36C6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax != emu_si) goto l__36D9;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x36D7); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__36D7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__36D9:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x36E3); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__36E3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__36E5:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__3697;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x3705); emu_cs = 0x1082; emu_Structure_FindFirst();
l__3705:
	emu_addw(&emu_sp, 0x8);
	goto l__373C;
l__370A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0xF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__3730;
	}
l__371E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x22), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x22) == emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_get_memory16(emu_es, emu_bx, 0x22) = 0x0;
	}
l__3730:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x373A); emu_cs = 0x1082; emu_Structure_FindNext();
l__373A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__373C:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__370A;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x3755); emu_cs = 0x16BC; emu_Unit_RemoveFromTeam();
l__3755:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x3765); emu_cs = 0x104B; emu_Team_FindFirst();
l__3765:
	emu_addw(&emu_sp, 0x6);
	goto l__3788;
l__376A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x1A) == emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_get_memory16(emu_es, emu_bx, 0x1A) = 0x0;
	}
l__377C:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x3786); emu_cs = 0x104B; emu_Team_FindNext();
l__3786:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__3788:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != 0) goto l__376A;
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_379B_0015_B07B()
 *
 * @name f__1A34_379B_0015_B07B
 * @implements 1A34:379B:0015:B07B ()
 * @implements 1A34:37B0:0026:D835
 * @implements 1A34:37D6:0036:C636
 * @implements 1A34:380C:000B:8A12
 * @implements 1A34:380D:000A:AA19
 * @implements 1A34:3817:0007:B349
 * @implements 1A34:3819:0005:D7FA
 * @implements 1A34:381C:0002:C23A
 * @implements 1A34:381E:0004:9539
 * @implements 1A34:3822:0002:2597
 *
 * Called From: 176C:171D:0023:1E72
 * Called From: 1A34:0C1A:000B:7668
 */
void f__1A34_379B_0015_B07B()
{
l__379B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__381E;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x37B0); emu_Unit_GetHouseID();
l__37B0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__381E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) goto l__381E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFFD);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x37D6); emu_cs = 0x16BC; emu_Unit_RemoveFromTeam();
l__37D6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A0C)) goto l__3819;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3A0A)) goto l__3819;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x1) goto l__380D;
	emu_get_memory16(emu_ds, 0x00, 0x38F4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F6) = 0xFFFF;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x380C); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__380C:
	emu_pop(&emu_cx);
l__380D:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x3817); f__1A34_0F48_0018_0DB8();
l__3817:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__3819:
	emu_ax = 0x1;
l__381C:
	goto l__3822;
l__381E:
	emu_xorw(&emu_ax, emu_ax);
	goto l__381C;
l__3822:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
