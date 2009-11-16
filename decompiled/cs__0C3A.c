/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Structure_ConnectWall()
 *
 * @name emu_Structure_ConnectWall
 * @implements 0C3A:076E:0027:991C ()
 * @implements 0C3A:0795:006E:9E9F
 * @implements 0C3A:07B2:0051:87EE
 * @implements 0C3A:07F1:0012:933B
 * @implements 0C3A:0803:000B:6F5D
 * @implements 0C3A:080E:000D:8F66
 * @implements 0C3A:0810:000B:1B67
 * @implements 0C3A:081B:001C:F0D4
 * @implements 0C3A:0837:0010:3D22
 * @implements 0C3A:0847:0026:655A
 * @implements 0C3A:0849:0024:0393
 * @implements 0C3A:086D:0018:8737
 * @implements 0C3A:087D:0008:590A
 * @implements 0C3A:0885:0027:1361
 * @implements 0C3A:08A0:000C:8E12
 * @implements 0C3A:08A3:0009:7EEA
 * @implements 0C3A:08AC:006C:A802
 * @implements 0C3A:0918:0008:4D72
 * @implements 0C3A:091E:0002:C23A
 * @implements 0C3A:0920:0004:9539
 * @implements 0C3A:0924:0006:F7CE
 *
 * Called From: 0C3A:02C9:000A:8909
 * Called From: 0C3A:02C9:0020:834B
 * Called From: 0C3A:0844:0010:3D22
 * Called From: B4CD:1D40:002C:E5A9
 * Called From: B4CD:1D40:000A:9499
 */
void emu_Structure_ConnectWall()
{
l__076E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3562), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3562) != 0x0) goto l__07F1;
	emu_get_memory16(emu_ds, 0x00, 0x3562) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x3462;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	goto l__07B2;
l__0795:
	emu_ax = 0x2DC9;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_es = emu_ax;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x4);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__07B2:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4A);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x4) < (int16)0x4A) goto l__0795;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory8(emu_es, emu_bx, 0xA) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory8(emu_es, emu_bx, 0x8) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory8(emu_es, emu_bx, 0x1) = 0x3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory8(emu_es, emu_bx, 0x5) = 0x3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory8(emu_es, emu_bx, 0x22) = 0xD;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory8(emu_es, emu_bx, 0x88) = 0xE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory8(emu_es, emu_bx, 0x44) = 0x11;
l__07F1:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0803); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0803:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xD);
	if (emu_ax != 0xD) goto l__080E;
	emu_ax = 0x1;
	goto l__0810;
l__080E:
	emu_xorw(&emu_ax, emu_ax);
l__0810:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	goto l__08A3;
l__081B:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x345A));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x0) goto l__0849;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0837); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0837:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xB);
	if (emu_ax != 0xB) goto l__0849;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x0847); emu_Structure_ConnectWall();
l__0847:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0849:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) goto l__08A0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x086D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__086D:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xB);
	if (emu_ax == 0xB) {
		emu_ax = 0x1;
		emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x4);
		emu_shlw(&emu_ax, emu_cl);
		emu_orw(&emu_di, emu_ax);
	}
l__087D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0885); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0885:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xD);
	if (emu_ax == 0xD) {
		emu_ax = 0x1;
		emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x4);
		emu_shlw(&emu_ax, emu_cl);
		emu_orw(&emu_di, emu_ax);
		emu_ax = 0x1;
		emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x4);
		emu_shlw(&emu_ax, emu_cl);
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	}
l__08A0:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__08A3:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x4) >= (int16)0x4) goto l__08AC;
	goto l__081B;
l__08AC:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) goto l__0920;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_bx, emu_di);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3462);
	emu_ah = 0x0;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39FA);
	emu_addw(&emu_dx, emu_ax);
	emu_incw(&emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__0920;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_es = emu_ax;
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x323F), 0x8000);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0918); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
l__0918:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
l__091E:
	goto l__0924;
l__0920:
	emu_xorw(&emu_ax, emu_ax);
	goto l__091E;
l__0924:
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
 * Decompiled function emu_Structure_UpdateMap()
 *
 * @name emu_Structure_UpdateMap
 * @implements 0C3A:092A:0013:A4A8 ()
 * @implements 0C3A:093D:000E:250F
 * @implements 0C3A:094B:000E:A510
 * @implements 0C3A:0959:0028:6D6C
 * @implements 0C3A:0981:0061:F8F6
 * @implements 0C3A:09E2:001D:98C0
 * @implements 0C3A:09FF:00E7:CC50
 * @implements 0C3A:0AC6:0020:3555
 * @implements 0C3A:0AD8:000E:24E3
 * @implements 0C3A:0AE6:000C:CB80
 * @implements 0C3A:0AEA:0008:C20B
 * @implements 0C3A:0AF2:001A:CFD7
 * @implements 0C3A:0B0C:0038:BBC8
 * @implements 0C3A:0B0F:0035:03CC
 * @implements 0C3A:0B29:001B:8966
 * @implements 0C3A:0B44:0040:CFBF
 * @implements 0C3A:0B4E:0036:3381
 * @implements 0C3A:0B84:000F:E7B4
 * @implements 0C3A:0B8D:0006:F7CE
 *
 * Called From: 0C3A:072F:000B:E349
 * Called From: 0C3A:072F:000C:E6D9
 * Called From: 0C3A:13B6:0014:7F45
 * Called From: 0F78:03C5:000C:C461
 * Called From: 10E4:21A1:000B:C1F1
 * Called From: 1A34:2F3B:000C:0C19
 */
void emu_Structure_UpdateMap()
{
l__092A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__093D;
	goto l__0B8D;
l__093D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x1) != 0) goto l__094B;
	goto l__0B8D;
l__094B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) == 0) goto l__0959;
	goto l__0B8D;
l__0959:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0981); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0981:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2D52);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3C);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39F0);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x39EE);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_bx;
	emu_xorw(&emu_di, emu_di);
	goto l__0AEA;
l__09E2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x09FF); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__09FF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xF8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x20);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_incb(&emu_al);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39F2);
	emu_subw(&emu_dx, 0xF);
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_ax >= emu_dx) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
		emu_shrw(&emu_ax, 0x1);
		emu_andw(&emu_ax, 0x7F);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F2));
		if (emu_ax <= emu_get_memory16(emu_ds, 0x00, 0x39F2)) goto l__0AD8;
	}
l__0AC6:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
l__0AD8:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0AE6); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
l__0AE6:
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_di);
l__0AEA:
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((int16)emu_di >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__0AF2;
	goto l__09E2;
l__0AF2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x54) < (int16)0x0) goto l__0B44;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x54);
	emu_cmpw(&emu_di, 0x2);
	if ((int16)emu_di >= (int16)0x2) goto l__0B0C;
	emu_ax = emu_di;
	goto l__0B0F;
l__0B0C:
	emu_ax = 0x2;
l__0B0F:
	emu_di = emu_ax;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3E);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x40));
	if (emu_ax == 0) {
		emu_andw(&emu_di, 0x1);
	}
l__0B29:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x40);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x3E);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	goto l__0B4E;
l__0B44:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2C70;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
l__0B4E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1000);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x3A));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0B84); emu_cs = 0x151A; f__151A_000E_0013_5840();
l__0B84:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x37A4) = 0x0;
l__0B8D:
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
 * Decompiled function f__0C3A_0B93_0034_3B6D()
 *
 * @name f__0C3A_0B93_0034_3B6D
 * @implements 0C3A:0B93:0034:3B6D ()
 * @implements 0C3A:0BC7:0008:E857
 * @implements 0C3A:0BCF:0004:D579
 * @implements 0C3A:0BD3:0021:C4A1
 * @implements 0C3A:0BF4:0017:6A02
 * @implements 0C3A:0C0B:0028:CFFD
 * @implements 0C3A:0C2C:0007:DB95
 * @implements 0C3A:0C33:0016:4F85
 * @implements 0C3A:0C36:0013:31B9
 * @implements 0C3A:0C3E:000B:B878
 * @implements 0C3A:0C44:0005:D37A
 * @implements 0C3A:0C47:0002:C6BA
 * @implements 0C3A:0C49:000B:85B7
 * @implements 0C3A:0C4A:000A:45BF
 * @implements 0C3A:0C54:0002:B73A
 * @implements 0C3A:0C56:0006:F7CE
 *
 * Called From: 0C3A:1897:001E:1AEF
 */
void f__0C3A_0B93_0034_3B6D()
{
l__0B93:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_di;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2D52);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__0BC7;
	goto l__0C54;
l__0BC7:
	emu_cmpw(&emu_di, 0x1);
	if (emu_di != 0x1) goto l__0BCF;
	goto l__0C54;
l__0BCF:
	emu_xorw(&emu_si, emu_si);
	goto l__0C4A;
l__0BD3:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__0C36;
l__0BF4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0C0B); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0C0B:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xA);
	if (emu_ax == 0xA) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
		emu_ah = 0x0;
		emu_andw(&emu_ax, 0x7);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
		if (emu_ax == emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__0C33;
	}
l__0C2C:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	goto l__0C3E;
l__0C33:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__0C36:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__0BF4;
l__0C3E:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x0) goto l__0C49;
l__0C44:
	emu_ax = 0x1;
l__0C47:
	goto l__0C56;
l__0C49:
	emu_incw(&emu_si);
l__0C4A:
	emu_cmpw(&emu_si, 0x1000);
	if ((int16)emu_si < (int16)0x1000) goto l__0BD3;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0C47;
l__0C54:
	goto l__0C44;
l__0C56:
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
 * Decompiled function emu_Structure_IsValidBuildLocation()
 *
 * @name emu_Structure_IsValidBuildLocation
 * @implements 0C3A:0C5C:004D:2837 ()
 * @implements 0C3A:0CA9:0018:FD80
 * @implements 0C3A:0CC1:0020:9673
 * @implements 0C3A:0CDD:0004:D479
 * @implements 0C3A:0CE1:0002:EDBA
 * @implements 0C3A:0CE3:0008:0909
 * @implements 0C3A:0CEB:0007:CF4F
 * @implements 0C3A:0CF2:0025:5E43
 * @implements 0C3A:0D17:0002:D2BA
 * @implements 0C3A:0D19:001A:F51B
 * @implements 0C3A:0D35:0011:8902
 * @implements 0C3A:0D3E:0008:7900
 * @implements 0C3A:0D46:0007:E2DF
 * @implements 0C3A:0D4D:0009:FA80
 * @implements 0C3A:0D4E:0008:7AA3
 * @implements 0C3A:0D56:000A:F202
 * @implements 0C3A:0D60:0007:76B6
 * @implements 0C3A:0D67:0009:B0F0
 * @implements 0C3A:0D70:000A:6E17
 * @implements 0C3A:0D7A:0007:34F1
 * @implements 0C3A:0D81:0020:A84F
 * @implements 0C3A:0DA1:0011:5F85
 * @implements 0C3A:0DB2:001F:4E36
 * @implements 0C3A:0DD1:0002:DCBA
 * @implements 0C3A:0DD3:0008:690A
 * @implements 0C3A:0DDB:0031:69EF
 * @implements 0C3A:0DEB:0021:51DA
 * @implements 0C3A:0E07:0005:D14A
 * @implements 0C3A:0E0C:0009:138E
 * @implements 0C3A:0E0D:0008:93AD
 * @implements 0C3A:0E15:0011:01CC
 * @implements 0C3A:0E26:0005:D7FA
 * @implements 0C3A:0E29:0002:C23A
 * @implements 0C3A:0E2B:0004:9539
 * @implements 0C3A:0E2F:0006:F7CE
 *
 * Called From: 0AEC:10FD:002B:C27D
 * Called From: 0C3A:0224:000A:CE2B
 * Called From: 0C3A:033E:0017:3BFA
 * Called From: 0C3A:043B:0017:7B7B
 * Called From: 0C3A:0514:000F:9479
 * Called From: 0F78:02F5:0011:CCF5
 */
void emu_Structure_IsValidBuildLocation()
{
l__0C5C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_si = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2D52);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_xorw(&emu_di, emu_di);
	goto l__0D4E;
l__0CA9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0CC1); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0CC1:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__0CE3;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A4E), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A4E) != 0x0) goto l__0CE1;
l__0CDD:
	emu_xorw(&emu_si, emu_si);
	goto l__0D56;
l__0CE1:
	goto l__0D3E;
l__0CE3:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0CEB); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0F8B_0015_1689();
l__0CEB:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0CF2;
	goto l__0CDD;
l__0CF2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x8) == 0) goto l__0D19;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A4E), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A4E) != 0x0) goto l__0D17;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BC), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BC) != 0x0) goto l__0D17;
	goto l__0CDD;
l__0D17:
	goto l__0D3E;
l__0D19:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A4A), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A4A) != 0x0) goto l__0D35;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BC), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BC) != 0x0) goto l__0D35;
	goto l__0CDD;
l__0D35:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xA);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) != 0xA) {
		emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	}
l__0D3E:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0D46); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
l__0D46:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__0D4D;
	goto l__0CDD;
l__0D4D:
	emu_incw(&emu_di);
l__0D4E:
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((int16)emu_di >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__0D56;
	goto l__0CA9;
l__0D56:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BC), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BC) == 0x0) goto l__0D60;
	goto l__0E15;
l__0D60:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0D67;
	goto l__0E15;
l__0D67:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0x8) goto l__0D70;
	goto l__0E15;
l__0D70:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__0D7A;
	goto l__0E15;
l__0D7A:
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	goto l__0E0D;
l__0D81:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_cl = 0x5;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_di;
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2D60);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x16) != 0x0) goto l__0DA1;
	goto l__0E15;
l__0DA1:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0DB2); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_GetByPackedTile();
l__0DB2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_ax == 0) goto l__0DD3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0DD1;
	goto l__0E07;
l__0DD1:
	goto l__0E0C;
l__0DD3:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0DDB); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0DDB:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xA);
	if (emu_get_memory16(emu_ss, emu_bp, -0x14) != 0xA) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xB);
		if (emu_get_memory16(emu_ss, emu_bp, -0x14) != 0xB) goto l__0E0C;
	}
l__0DEB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ah = 0x0;
	emu_andw(&emu_ax, 0x3);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0E0C;
l__0E07:
	emu_si = 0x1;
	goto l__0E15;
l__0E0C:
	emu_incw(&emu_di);
l__0E0D:
	emu_cmpw(&emu_di, 0x10);
	if ((int16)emu_di >= (int16)0x10) goto l__0E15;
	goto l__0D81;
l__0E15:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0E2B;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) == 0x0) goto l__0E26;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_negw(&emu_ax, emu_ax);
	goto l__0E29;
l__0E26:
	emu_ax = 0x1;
l__0E29:
	goto l__0E2F;
l__0E2B:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0E29;
l__0E2F:
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
 * Decompiled function f__0C3A_0E35_0013_A551()
 *
 * @name f__0C3A_0E35_0013_A551
 * @implements 0C3A:0E35:0013:A551 ()
 * @implements 0C3A:0E48:0012:F3DE
 * @implements 0C3A:0E5F:002F:78FA
 * @implements 0C3A:0E8E:001B:2708
 * @implements 0C3A:0EA9:0017:48E7
 * @implements 0C3A:0EC0:0022:A2EF
 * @implements 0C3A:0EE2:0007:C8A0
 * @implements 0C3A:0EE9:000C:F099
 * @implements 0C3A:0EF5:0002:D43A
 * @implements 0C3A:0EF7:0006:8FC7
 * @implements 0C3A:0EFD:001D:C1AF
 * @implements 0C3A:0F1A:0018:7BD5
 * @implements 0C3A:0F1F:0013:ED9A
 * @implements 0C3A:0F24:000E:E431
 * @implements 0C3A:0F32:001A:0CFD
 * @implements 0C3A:0F4C:0023:AAA0
 * @implements 0C3A:0F6F:0011:D10A
 * @implements 0C3A:0F80:0052:C8F5
 * @implements 0C3A:0F87:004B:9036
 * @implements 0C3A:0FC4:000E:E431
 * @implements 0C3A:0FD2:0021:2D3D
 * @implements 0C3A:0FDB:0018:9CA0
 * @implements 0C3A:0FF3:000F:09D7
 * @implements 0C3A:0FFC:0006:F7CE
 *
 * Called From: 0C3A:0EE6:0007:C8A0
 * Called From: 0C3A:12E5:000A:2EA7
 * Called From: 0C3A:12E5:0012:C840
 */
void f__0C3A_0E35_0013_A551()
{
l__0E35:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0E48;
	goto l__0FFC;
l__0E48:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__0E5F;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0E5A); f__0C3A_1002_0013_651A();
	/* Unresolved jump */ emu_ip = 0x0E5A; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E5A; emu_last_length = 0x0012; emu_last_crc = 0xF3DE; emu_call();
l__0E5F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x1E) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xDFFD);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x10) = 0x0;
	emu_push(emu_ds);
	emu_ax = 0x3918;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E8E); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
l__0E8E:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EA9); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
l__0EA9:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x2C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EC0); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__0EC0:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__0F24;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x8) goto l__0EF5;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0EE2); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
l__0EE2:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0EE9); f__0C3A_0E35_0013_A551();
l__0EE9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	goto l__0F24;
l__0EF5:
	goto l__0F1F;
l__0EF7:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0EFD); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__0EFD:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0F1A); emu_cs = 0x1A34; f__1A34_10EC_000E_A326();
l__0F1A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x2);
l__0F1F:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) goto l__0EF7;
l__0F24:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F32); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__0F32:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x0F4C); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_ValueToPercent();
l__0F4C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x40));
	emu_push(emu_cs); emu_push(0x0F6F); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__0F6F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) <= emu_si) goto l__0F80;
	emu_ax = emu_si;
	goto l__0F87;
l__0F80:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
l__0F87:
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0FDB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x7);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38B2) > (int16)0x7) {
		emu_ax = emu_si;
		emu_sarw(&emu_ax, 0x1);
		emu_addw(&emu_si, emu_ax);
	}
l__0FC4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FD2); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__0FD2:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
l__0FDB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x9);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x9) goto l__0FFC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FF3); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__0FF3:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x1A));
l__0FFC:
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
 * Decompiled function f__0C3A_1002_0013_651A()
 *
 * @name f__0C3A_1002_0013_651A
 * @implements 0C3A:1002:0013:651A ()
 * @implements 0C3A:1015:0010:1489
 * @implements 0C3A:1025:0041:AB17
 * @implements 0C3A:1066:0015:2CC3
 * @implements 0C3A:107B:0092:3D1E
 * @implements 0C3A:10CD:0040:9962
 * @implements 0C3A:10CE:003F:9924
 * @implements 0C3A:110D:0011:B975
 * @implements 0C3A:111E:000B:268A
 * @implements 0C3A:1129:0039:970B
 * @implements 0C3A:1162:0013:466D
 * @implements 0C3A:1175:0011:F390
 * @implements 0C3A:1176:0010:D090
 * @implements 0C3A:117B:000B:C6E5
 * @implements 0C3A:1186:000D:A5C0
 * @implements 0C3A:1193:0010:123B
 * @implements 0C3A:11A3:0011:6CE1
 * @implements 0C3A:11B4:001D:6961
 * @implements 0C3A:11D1:001C:E0EE
 * @implements 0C3A:11ED:000E:67F9
 * @implements 0C3A:11FB:0003:C21A
 * @implements 0C3A:11FE:000E:8600
 * @implements 0C3A:120C:0002:B6BA
 * @implements 0C3A:120E:0002:C03A
 * @implements 0C3A:1210:0006:F7CE
 *
 * Called From: 0972:15C8:0012:FF55
 */
void f__0C3A_1002_0013_651A()
{
l__1002:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1015;
	goto l__1210;
l__1015:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1025); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__1025:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__10CE;
l__1066:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_di = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x107B); emu_cs = 0x151A; f__151A_0114_0022_0B6C();
l__107B:
	emu_pop(&emu_cx);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xDF);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) != 0x0) {
		emu_bx = emu_di;
		emu_shlw(&emu_bx, 0x1);
		emu_ax = 0x2E9C;
		emu_es = emu_ax;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x323F);
		emu_andw(&emu_ax, 0x7FFF);
		emu_andw(&emu_ax, 0x1FF);
		emu_dx = emu_di;
		emu_cl = 0x2;
		emu_shlw(&emu_dx, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_dx);
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
		emu_ax = emu_di;
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
	}
l__10CD:
	emu_incw(&emu_si);
l__10CE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x2D52), emu_si);
	if ((int16)emu_get_memory16(emu_ds, emu_bx, 0x2D52) > (int16)emu_si) goto l__1066;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) != 0x0) { /* Unresolved jump */ emu_ip = 0x1110; emu_last_cs = 0x0C3A; emu_last_ip = 0x10E2; emu_last_length = 0x003F; emu_last_crc = 0x9924; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x3A));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x2C6F;
	emu_push(emu_ax);
	emu_ax = 0x0;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x110D); emu_cs = 0x151A; f__151A_000E_0013_5840();
l__110D:
	emu_addw(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x111E); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__111E:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__1176;
l__1129:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x2E) != 0x0) goto l__1175;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_bx, emu_dx);
	emu_get_memory16(emu_es, emu_bx, 0x2E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1162); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__1162:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_bx, emu_dx);
	emu_get_memory16(emu_es, emu_bx, 0x30) = emu_ax;
	goto l__117B;
l__1175:
	emu_incw(&emu_si);
l__1176:
	emu_cmpw(&emu_si, 0x5);
	if ((int16)emu_si < (int16)0x5) goto l__1129;
l__117B:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1186); emu_cs = 0x1082; emu_Structure_Free();
l__1186:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1193); f__0C3A_2929_0012_B10B();
l__1193:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x11A3); emu_Structure_GetStructuresBuilt();
l__11A3:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11B4); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__11B4:
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
	emu_push(emu_cs); emu_push(0x11D1); emu_cs = 0x1423; f__1423_0DC3_0029_D1E2();
l__11D1:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) != 0x0) goto l__1210;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, 0x9);
	if (emu_ax == 0x9) goto l__11ED;
	emu_cmpw(&emu_ax, 0x12);
	if (emu_ax == 0x12) goto l__11FE;
	goto l__120E;
l__11ED:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x11FB); f__0C3A_1F70_0010_8DB3();
l__11FB:
	emu_pop(&emu_cx);
	goto l__1210;
l__11FE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x120C); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0D74_0020_7CC1();
l__120C:
	goto l__11FB;
l__120E:
	goto l__1210;
l__1210:
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
 * Decompiled function f__0C3A_1216_0013_E56D()
 *
 * @name f__0C3A_1216_0013_E56D
 * @implements 0C3A:1216:0013:E56D ()
 * @implements 0C3A:1229:0009:D04A
 * @implements 0C3A:1232:000D:F900
 * @implements 0C3A:123F:0030:4F84
 * @implements 0C3A:126F:0016:E805
 * @implements 0C3A:1278:000D:7D89
 * @implements 0C3A:1285:002A:34D0
 * @implements 0C3A:12AF:0017:53A0
 * @implements 0C3A:12B2:0014:56D0
 * @implements 0C3A:12C6:0010:70EE
 * @implements 0C3A:12D6:0012:C840
 * @implements 0C3A:12DE:000A:2EA7
 * @implements 0C3A:12E8:002B:6503
 * @implements 0C3A:1313:0005:A243
 * @implements 0C3A:1318:0005:B0C3
 * @implements 0C3A:131D:0005:4743
 * @implements 0C3A:1327:0006:22F3
 * @implements 0C3A:132D:0003:CE1A
 * @implements 0C3A:1330:0009:2BAF
 * @implements 0C3A:1339:000C:ECDE
 * @implements 0C3A:133A:000B:E94E
 * @implements 0C3A:1345:0007:9249
 * @implements 0C3A:134A:0002:E33A
 * @implements 0C3A:134E:002F:8FCE
 * @implements 0C3A:137D:000E:7330
 * @implements 0C3A:138B:0007:A56C
 * @implements 0C3A:138E:0004:B439
 * @implements 0C3A:1392:0006:F7CE
 *
 * Called From: 06F7:0372:0010:92A7
 * Called From: 0972:023A:005A:6804
 * Called From: 0C3A:21DD:003B:F488
 * Called From: 0C3A:21DD:0032:57F2
 * Called From: 1A34:0350:0020:A3AA
 * Called From: 1A34:2E50:001D:0BE3
 * Called From: 1A34:2F76:0012:F102
 * Called From: 1A34:2F76:0014:59EA
 */
void f__0C3A_1216_0013_E56D()
{
l__1216:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1229;
	goto l__138E;
l__1229:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0x0) goto l__1232;
	goto l__138E;
l__1232:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1E), 0x1);
	if (emu_get_memory16(emu_es, emu_bx, 0x1E) != 0x1) goto l__123F;
	goto l__138E;
l__123F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__126F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	goto l__1278;
l__126F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x0;
l__1278:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0xE) == 0x0) goto l__1285;
	goto l__134E;
l__1285:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_bx = 0x64;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x1);
	if ((int16)emu_si <= (int16)0x1) goto l__12AF;
	emu_ax = emu_si;
	goto l__12B2;
l__12AF:
	emu_ax = 0x1;
l__12B2:
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12C6); emu_cs = 0x1423; f__1423_0F34_0017_464D();
l__12C6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__12D6;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8D3B));
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x8CFF), emu_si);
	goto l__12DE;
l__12D6:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8D3D));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x8CFF), emu_si);
l__12DE:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x12E8); f__0C3A_0E35_0013_A551();
l__12E8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1330;
	emu_di = 0xFFFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1313;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__1318;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__131D;
	/* Unresolved jump */ emu_ip = 0x1322; emu_last_cs = 0x0C3A; emu_last_ip = 0x1311; emu_last_length = 0x002B; emu_last_crc = 0x6503; emu_call();
l__1313:
	emu_di = 0x16;
	goto l__1327;
l__1318:
	emu_di = 0x17;
	goto l__1327;
l__131D:
	emu_di = 0x18;
	goto l__1327;
l__1327:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x132D); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__132D:
	emu_pop(&emu_cx);
	goto l__133A;
l__1330:
	emu_ax = 0x15;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1339); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
l__1339:
	emu_pop(&emu_cx);
l__133A:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1345); f__0C3A_2929_0012_B10B();
l__1345:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
l__134A:
	goto l__1392;
l__134E:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) goto l__138E;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2E5E));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2E5C));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x137D); emu_cs = 0x0F3F; emu_Tile_AddTileDiff();
l__137D:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x138B); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
l__138B:
	emu_addw(&emu_sp, 0xA);
l__138E:
	emu_xorw(&emu_ax, emu_ax);
	goto l__134A;
l__1392:
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
 * Decompiled function f__0C3A_1398_000D_8766()
 *
 * @name f__0C3A_1398_000D_8766
 * @implements 0C3A:1398:000D:8766 ()
 * @implements 0C3A:13A5:0014:7F45
 * @implements 0C3A:13B9:0004:BEB2
 *
 * Called From: 0972:059C:001B:DC71
 * Called From: 0972:066D:0021:1BFA
 * Called From: 0972:0837:0030:99D4
 * Called From: 0972:0837:0026:7654
 * Called From: 0972:0C4B:000E:BD9B
 * Called From: 0972:0C4B:0010:51A9
 * Called From: 0972:0CEE:0039:4D11
 * Called From: 0972:0E2A:001D:966A
 * Called From: 0972:0E2A:001B:5BF8
 * Called From: 0972:1513:0010:3DB1
 * Called From: 0C10:012E:0015:46CA
 * Called From: 0C10:029F:0014:0758
 * Called From: 0C3A:1B08:004E:E6F7
 * Called From: 176C:0963:0012:2597
 * Called From: 176C:0C9D:0045:05CB
 * Called From: 1A34:2D61:000C:2FC2
 * Called From: 1A34:2D61:000F:5FC7
 * Called From: B511:0229:000F:97B3
 */
void f__0C3A_1398_000D_8766()
{
l__1398:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__13A5;
	/* Unresolved jump */ emu_ip = 0x13BB; emu_last_cs = 0x0C3A; emu_last_ip = 0x13A3; emu_last_length = 0x000D; emu_last_crc = 0x8766; emu_call();
l__13A5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x54) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x13B9); emu_Structure_UpdateMap();
l__13B9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Structure_GetStructuresBuilt()
 *
 * @name emu_Structure_GetStructuresBuilt
 * @implements 0C3A:13BD:0022:D6F0 ()
 * @implements 0C3A:13DF:0005:92AE
 * @implements 0C3A:13E4:001C:C40E
 * @implements 0C3A:1400:0011:5D2C
 * @implements 0C3A:1406:000B:166D
 * @implements 0C3A:1411:0018:26D2
 * @implements 0C3A:1413:0016:7F60
 * @implements 0C3A:1429:0004:893F
 *
 * Called From: 0C3A:073F:0010:5523
 * Called From: 0C3A:11A0:0010:123B
 * Called From: 1A34:2EA0:000F:90E3
 * Called From: 1A34:2EC6:001D:C6A0
 * Called From: B511:0317:000B:3CA9
 */
void emu_Structure_GetStructuresBuilt()
{
l__13BD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x13DF); emu_cs = 0x1082; emu_Structure_FindFirst();
l__13DF:
	emu_addw(&emu_sp, 0x8);
	goto l__1413;
l__13E4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) != 0) goto l__1406;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_push(emu_cs); emu_push(0x1400); emu_cs = 0x01F7; emu_Tools_Shld();
l__1400:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
l__1406:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1411); emu_cs = 0x1082; emu_Structure_FindNext();
l__1411:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__1413:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__13E4;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__1429;
l__1429:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_142D_0018_6667()
 *
 * @name f__0C3A_142D_0018_6667
 * @implements 0C3A:142D:0018:6667 ()
 * @implements 0C3A:1440:0005:9F3F
 * @implements 0C3A:1442:0003:9EAB
 * @implements 0C3A:1445:0031:D8A7
 * @implements 0C3A:1476:0015:E07B
 * @implements 0C3A:148B:0014:8AFF
 * @implements 0C3A:149F:000B:C8FB
 * @implements 0C3A:14AA:000D:7C1F
 * @implements 0C3A:14B7:0010:2429
 * @implements 0C3A:14C7:005E:1A99
 * @implements 0C3A:14EC:0039:DBD9
 * @implements 0C3A:150B:001A:38D1
 * @implements 0C3A:151A:000B:E0E2
 * @implements 0C3A:1525:001C:FCB7
 * @implements 0C3A:1541:0021:9E80
 * @implements 0C3A:1562:000D:A32C
 * @implements 0C3A:156F:001E:FBF5
 * @implements 0C3A:158D:0010:94FA
 * @implements 0C3A:1594:0009:EDF2
 * @implements 0C3A:159D:0013:BD51
 * @implements 0C3A:15B0:0016:FB52
 * @implements 0C3A:15C6:0009:21F9
 * @implements 0C3A:15CF:000A:8E29
 * @implements 0C3A:15D9:0015:D074
 * @implements 0C3A:15EE:001E:4A47
 * @implements 0C3A:160C:0015:3D0B
 * @implements 0C3A:1621:0013:D5D9
 * @implements 0C3A:1634:005D:8B99
 * @implements 0C3A:1691:0027:CF71
 * @implements 0C3A:16B6:0002:CABA
 * @implements 0C3A:16B8:0021:D70D
 * @implements 0C3A:16CD:000C:34BD
 * @implements 0C3A:16D0:0009:C2C5
 * @implements 0C3A:16D9:0007:49AE
 * @implements 0C3A:16E0:0002:D6BA
 * @implements 0C3A:16E2:0008:5C29
 * @implements 0C3A:16EA:001D:2AE6
 * @implements 0C3A:1707:0010:EBF2
 * @implements 0C3A:170F:0008:571A
 * @implements 0C3A:1717:0011:CBA7
 * @implements 0C3A:1728:000D:A32C
 * @implements 0C3A:1735:002A:F1B0
 * @implements 0C3A:1750:000F:F56E
 * @implements 0C3A:175F:0015:5B5E
 * @implements 0C3A:1766:000E:1253
 * @implements 0C3A:176C:0008:9161
 * @implements 0C3A:1774:0005:4EFC
 * @implements 0C3A:1779:0019:CC8F
 * @implements 0C3A:1792:000B:DD7F
 * @implements 0C3A:179D:0009:AC45
 * @implements 0C3A:17A6:0013:9F23
 * @implements 0C3A:17B9:000C:D272
 * @implements 0C3A:17BB:000A:D15A
 * @implements 0C3A:17C5:000F:DABC
 * @implements 0C3A:17D4:0006:EAFC
 * @implements 0C3A:17DA:000D:A409
 * @implements 0C3A:17E7:0016:5077
 * @implements 0C3A:17FD:000C:309D
 * @implements 0C3A:1809:000A:F946
 * @implements 0C3A:1813:001B:AF52
 * @implements 0C3A:1819:0015:BE59
 * @implements 0C3A:182E:0006:C901
 * @implements 0C3A:1834:0009:D5AF
 * @implements 0C3A:183D:0008:BA0A
 * @implements 0C3A:1845:0014:DDE8
 * @implements 0C3A:1859:0023:A7FF
 * @implements 0C3A:187C:001E:1AEF
 * @implements 0C3A:189A:0022:9131
 * @implements 0C3A:18BC:0010:4512
 * @implements 0C3A:18CC:0003:9DA2
 * @implements 0C3A:18CF:002E:A926
 * @implements 0C3A:18FD:0018:72E4
 * @implements 0C3A:1915:0089:B408
 * @implements 0C3A:1940:005E:F367
 * @implements 0C3A:197A:0024:FB06
 * @implements 0C3A:199C:0002:DDBA
 * @implements 0C3A:19D9:000C:3FB9
 * @implements 0C3A:19DC:0009:CA41
 * @implements 0C3A:19E5:0002:C3BA
 * @implements 0C3A:19E7:0025:5D7B
 * @implements 0C3A:19EE:001E:E768
 * @implements 0C3A:1A0C:0004:5A9F
 * @implements 0C3A:1A0E:0002:C1BA
 * @implements 0C3A:1A10:0003:1DAD
 * @implements 0C3A:1A13:000D:4137
 * @implements 0C3A:1A20:0008:50E7
 * @implements 0C3A:1A28:0034:3030
 * @implements 0C3A:1A5C:001E:8BF9
 * @implements 0C3A:1A7A:0022:A4D7
 * @implements 0C3A:1A9C:0021:A062
 * @implements 0C3A:1AB8:0005:3367
 * @implements 0C3A:1ABD:004E:E6F7
 * @implements 0C3A:1B0B:001B:3C60
 * @implements 0C3A:1B26:000D:A042
 * @implements 0C3A:1B33:0011:8982
 * @implements 0C3A:1B44:0009:855A
 * @implements 0C3A:1B47:0006:C117
 * @implements 0C3A:1B4F:0016:D019
 * @implements 0C3A:1B65:0008:A466
 * @implements 0C3A:1B6D:0006:4B31
 * @implements 0C3A:1B70:0003:2113
 * @implements 0C3A:1B73:0006:F7CE
 *
 * Called From: 0972:0930:0017:403F
 * Called From: 0AEC:114C:0012:7EA1
 * Called From: 0AEC:11E6:0041:E018
 * Called From: 0C3A:0142:0021:1CAC
 * Called From: 0C3A:0142:0018:BE44
 * Called From: 0C3A:0142:001F:44AC
 */
void f__0C3A_142D_0018_6667()
{
l__142D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x60);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1445;
l__1440:
	emu_xorw(&emu_ax, emu_ax);
l__1442:
	goto l__1B73;
l__1445:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1476); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__1476:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x2) != 0) goto l__148B;
	goto l__1B70;
l__148B:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x149F); f__0C3A_2814_0015_76F0();
l__149F:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_di, 0xFFFD);
	if (emu_di != 0xFFFD) goto l__14AA;
	goto l__1819;
l__14AA:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__14B7;
	emu_cmpw(&emu_di, 0xFFFE);
	if (emu_di == 0xFFFE) goto l__14B7;
	goto l__19EE;
l__14B7:
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x14C7); emu_Structure_IsUpgradable();
l__14C7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
		if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0xE)) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
			emu_cwd();
			emu_subw(&emu_ax, emu_dx);
			emu_sarw(&emu_ax, 0x1);
			emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
		}
	}
l__14EC:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x5);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x5) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
			emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x0);
			if (emu_get_memory8(emu_es, emu_bx, 0x8) == 0x0) {
				emu_get_memory16(emu_ss, emu_bp, -0x1C) = 0x0;
			}
		}
	}
l__150B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xB) {
		emu_get_memory16(emu_ss, emu_bp, -0x1C) = 0x0;
	}
l__151A:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1525); f__0C3A_1B79_0021_8C40();
l__1525:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x22);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_ax != 0) goto l__1541;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4C) = 0x0;
	goto l__1440;
l__1541:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x8) goto l__159D;
	emu_get_memory16(emu_ds, 0x00, 0x8BE8) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0xA;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x0;
	goto l__1594;
l__1562:
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x1A);
	emu_push(emu_cs); emu_push(0x156F); emu_cs = 0x01F7; emu_Tools_Shld();
l__156F:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x22);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx == 0) goto l__158D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x1;
	emu_cmpw(&emu_di, 0xFFFE);
	if (emu_di != 0xFFFE) goto l__158D;
	goto l__1750;
l__158D:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x60);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x1A));
l__1594:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x13);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x1A) < (int16)0x13) goto l__1562;
	goto l__176C;
l__159D:
	emu_get_memory16(emu_ds, 0x00, 0x8BE8) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xB) goto l__15B0;
	goto l__1717;
l__15B0:
	emu_get_memory16(emu_ss, emu_bp, -0x24) = 0xFFFF;
	emu_ax = 0x36;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x60);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x15C6); emu_cs = 0x01F7; emu_Tools_Memset();
l__15C6:
	emu_addw(&emu_sp, 0x8);
	emu_si = 0x1;
	goto l__16D9;
l__15CF:
	emu_xorw(&emu_si, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x0;
	goto l__16D0;
l__15D9:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x97E7);
	emu_get_memory16(emu_ss, emu_bp, -0x2A) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2A) != 0x0) goto l__15EE;
	goto l__16B8;
l__15EE:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2A) >= (int16)0x0) goto l__160C;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0xFF;
	goto l__16B6;
l__160C:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x60);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2A));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x2A)) goto l__1621;
	goto l__16B6;
l__1621:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1634); emu_cs = 0x0FE4; emu_Unit_Allocate();
l__1634:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x28) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x28);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x26));
	if (emu_ax == 0) goto l__1691;
	emu_si = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x24);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x60);
	emu_addw(&emu_bx, emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x60);
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_ss, emu_bx, 0x0);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_get_memory8(emu_es, emu_bx, 0x2A) = emu_al;
	goto l__16B6;
l__1691:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x60);
	emu_addw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bx, 0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_bx, 0x0) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
		emu_dx = 0x5A;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2D07;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_get_memory8(emu_es, emu_bx, 0x2A) = 0xFF;
	}
l__16B6:
	goto l__16CD;
l__16B8:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x0;
l__16CD:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x1A));
l__16D0:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x1B);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x1A) >= (int16)0x1B) goto l__16D9;
	goto l__15D9;
l__16D9:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__16E0;
	goto l__15CF;
l__16E0:
	goto l__170F;
l__16E2:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_cs); emu_push(0x16EA); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__16EA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x28) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x2A) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_cs); emu_push(0x1707); emu_cs = 0x0FE4; emu_Unit_Free();
l__1707:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2A);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
l__170F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x24), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x24) != 0xFFFF) goto l__16E2;
	goto l__176C;
l__1717:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x0;
	goto l__1766;
l__1728:
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x1A);
	emu_push(emu_cs); emu_push(0x1735); emu_cs = 0x01F7; emu_Tools_Shld();
l__1735:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x22);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx == 0) goto l__175F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x1;
	emu_cmpw(&emu_di, 0xFFFE);
	if (emu_di != 0xFFFE) goto l__175F;
l__1750:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_di = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x4C) = emu_ax;
	goto l__1440;
l__175F:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x5A);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x1A));
l__1766:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x1B);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x1A) < (int16)0x1B) goto l__1728;
l__176C:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__1774;
	goto l__19E7;
l__1774:
	emu_push(emu_cs); emu_push(0x1779); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ECE_000B_BD2E();
l__1779:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_ds);
	emu_ax = 0x70A2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1792); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
l__1792:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x179D); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__179D:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x17A6); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0000_0013_DC68();
l__17A6:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0xB) goto l__17B9;
	emu_ax = 0x1;
	goto l__17BB;
l__17B9:
	emu_xorw(&emu_ax, emu_ax);
l__17BB:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8BE8));
	emu_push(emu_cs); emu_push(0x17C5); emu_cs = 0x3495; overlay(0x3495, 0); f__B495_0000_0022_1CF6();
l__17C5:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x17D4); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0000_0013_DC68();
l__17D4:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x17DA); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
l__17DA:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x17E7); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
l__17E7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x17FD); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
l__17FD:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1809); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__1809:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1E) != 0x0) goto l__1813;
	goto l__1440;
l__1813:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x2);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1E) != 0x2) goto l__1834;
l__1819:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x182E); f__0C3A_2714_0015_B6F6();
l__182E:
	emu_addw(&emu_sp, 0xA);
	goto l__1440;
l__1834:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1E) == 0x1) goto l__183D;
	goto l__19E5;
l__183D:
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x0;
	goto l__19DC;
l__1845:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx, 0x8BEC), 0x0);
	if (emu_get_memory8(emu_ds, emu_bx, 0x8BEC) != 0x0) goto l__1859;
	goto l__19D9;
l__1859:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_di = emu_get_memory16(emu_ds, emu_bx, 0x8BEA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xB) goto l__18CF;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x187C); f__0C3A_1E67_0011_E44A();
l__187C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4C) = emu_di;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8BE8), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x8BE8) != 0x1) goto l__18CC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x189A); f__0C3A_0B93_0034_3B6D();
l__189A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__18CC;
	emu_ax = emu_di;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18BC); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
l__18BC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__18CC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4C) = emu_di;
	goto l__1440;
l__18CC:
	goto l__19D9;
l__18CF:
	emu_ax = emu_di;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_dx = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18FD); emu_cs = 0x1A34; emu_Unit_Create();
l__18FD:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax != 0) goto l__1915;
	/* Unresolved jump */ emu_ip = 0x199E; emu_last_cs = 0x0C3A; emu_last_ip = 0x1912; emu_last_length = 0x0018; emu_last_crc = 0x72E4; emu_call();
l__1915:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x38EA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2A), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x2A) == 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
		emu_dx = 0x1E;
		emu_imuluw(&emu_ax, emu_dx);
		emu_bx = emu_ax;
		emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3806);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
		emu_get_memory16(emu_es, emu_bx, 0x2A) = emu_ax;
	}
l__1940:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2C);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory16(emu_es, emu_bx, 0x2C) = emu_ax;
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_decw(&emu_get_memory16(emu_ds, emu_bx, 0x97E7));
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x97E7), 0x0);
	if ((int16)emu_get_memory16(emu_ds, emu_bx, 0x97E7) <= (int16)0x0) {
		emu_bx = emu_di;
		emu_shlw(&emu_bx, 0x1);
		emu_get_memory16(emu_ds, emu_bx, 0x97E7) = 0xFFFF;
	}
l__197A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_decb(&emu_get_memory8(emu_ds, emu_bx, 0x8BEC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_dx = 0xB;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx, 0x8BEC), 0x0);
	if (emu_get_memory8(emu_ds, emu_bx, 0x8BEC) != 0x0) {
		emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	}
l__199C:
	goto l__19D9;
l__19D9:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
l__19DC:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x19);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x18) >= (int16)0x19) goto l__19E5;
	goto l__1845;
l__19E5:
	goto l__19EE;
l__19E7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4C) = emu_di;
l__19EE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xB) goto l__1A10;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4C), emu_di);
	if (emu_get_memory16(emu_es, emu_bx, 0x4C) == emu_di) goto l__1A0E;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1A0C); f__0C3A_1E67_0011_E44A();
l__1A0C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__1A0E:
	goto l__1A13;
l__1A10:
	goto l__1B47;
l__1A13:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__1A20;
	goto l__1B70;
l__1A20:
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di != 0xFFFF) goto l__1A28;
	goto l__1B70;
l__1A28:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x8) goto l__1A7A;
	emu_ax = emu_di;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_dx = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A5C); emu_cs = 0x1A34; emu_Unit_Create();
l__1A5C:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_di;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	goto l__1AB8;
l__1A7A:
	emu_ax = emu_di;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1A9C); emu_Structure_Create();
l__1A9C:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_di;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
l__1AB8:
	emu_push(emu_cs); emu_push(0x1ABD); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__1ABD:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xBFFF);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax == 0) goto l__1B4F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4C) = emu_di;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
	emu_cl = 0x8;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x50) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1B0B); f__0C3A_1398_000D_8766();
l__1B0B:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1B47;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_ax = 0x89;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B26); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__1B26:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B33); emu_cs = 0x01F7; emu_String_sprintf();
l__1B33:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B44); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__1B44:
	emu_addw(&emu_sp, 0x6);
l__1B47:
	emu_ax = 0x1;
	goto l__1442;
l__1B4F:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1B70;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B65); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__1B65:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B6D); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__1B6D:
	emu_addw(&emu_sp, 0x6);
l__1B70:
	goto l__1440;
l__1B73:
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
 * Decompiled function f__0C3A_1B79_0021_8C40()
 *
 * @name f__0C3A_1B79_0021_8C40
 * @implements 0C3A:1B79:0021:8C40 ()
 * @implements 0C3A:1B97:0003:5C0D
 * @implements 0C3A:1B9A:0026:93A4
 * @implements 0C3A:1BC0:0028:37B2
 * @implements 0C3A:1BE8:0007:272B
 * @implements 0C3A:1BEF:0019:E86F
 * @implements 0C3A:1C08:0069:2044
 * @implements 0C3A:1C4A:0027:2378
 * @implements 0C3A:1C60:0011:5C72
 * @implements 0C3A:1C71:0068:B126
 * @implements 0C3A:1C83:0056:A39E
 * @implements 0C3A:1CC3:0016:6D58
 * @implements 0C3A:1CD9:0045:61E9
 * @implements 0C3A:1D01:001D:9D99
 * @implements 0C3A:1D16:0008:1F0E
 * @implements 0C3A:1D1E:0003:5DA9
 * @implements 0C3A:1D21:0004:E479
 * @implements 0C3A:1D25:001F:E40E
 * @implements 0C3A:1D3A:000A:DFCB
 * @implements 0C3A:1D44:0019:8A47
 * @implements 0C3A:1D5D:009E:865A
 * @implements 0C3A:1D72:0089:930C
 * @implements 0C3A:1DA0:005B:730E
 * @implements 0C3A:1DFB:0008:5638
 * @implements 0C3A:1E03:0029:1BC2
 * @implements 0C3A:1E23:0009:F391
 * @implements 0C3A:1E24:0008:F3B2
 * @implements 0C3A:1E2C:0002:CC3A
 * @implements 0C3A:1E2E:000C:BB3D
 * @implements 0C3A:1E3A:000C:2DAD
 * @implements 0C3A:1E46:0009:5A36
 * @implements 0C3A:1E4F:0006:F7CE
 *
 * Called From: 0AEC:05EF:001A:1D41
 * Called From: 0C3A:1522:000B:E0E2
 * Called From: 0C3A:1522:001A:38D1
 * Called From: 1423:0CA4:0012:C249
 */
void f__0C3A_1B79_0021_8C40()
{
l__1B79:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1B9A;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__1B97:
	goto l__1E4F;
l__1B9A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1BC0); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__1BC0:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_subw(&emu_ax, 0x3);
	emu_bx = emu_ax;
	emu_cmpw(&emu_bx, 0x8);
	if (emu_bx <= 0x8) goto l__1BE8;
	goto l__1E3A;
l__1BE8:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1E55);
	switch (emu_ip) {
		case 0x1BEF: goto l__1BEF;
		case 0x1D21: goto l__1D21;
		case 0x1E2E: goto l__1E2E;
		case 0x1E3A: goto l__1E3A;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0C3A; emu_last_ip = 0x1BEA; emu_last_length = 0x0007; emu_last_crc = 0x272B;
			emu_call();
			return;
	}
l__1BEF:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0xA;
	emu_xorw(&emu_si, emu_si);
	goto l__1D16;
l__1C08:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x1A);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1E);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	emu_cmpw(&emu_si, 0x7);
	if (emu_si == 0x7) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x0);
		if (emu_get_memory8(emu_es, emu_bx, 0x8) == 0x0) {
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x1);
			if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38B2) >= (int16)0x1) {
				emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0xFBFF);
				emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0xFFFF);
				emu_di = 0x2;
			}
		}
	}
l__1C4A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_andw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_andw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x16)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x18));
		if (emu_dx == emu_get_memory16(emu_ss, emu_bp, -0x18)) goto l__1C71;
	}
l__1C60:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1C71;
	goto l__1D01;
l__1C71:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x8) != 0x0) {
		emu_cmpw(&emu_si, 0x3);
		if (emu_si == 0x3) {
			emu_di = 0x2;
		}
	}
l__1C83:
	emu_ax = emu_di;
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x38B2)) goto l__1D01;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x31);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__1D01;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x21);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4E));
	if (emu_al > emu_get_memory8(emu_es, emu_bx, 0x4E)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
		emu_ax = (int8)emu_al;
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
		if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1CD9;
	}
l__1CC3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x1;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	goto l__1D01;
l__1CD9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x21);
		emu_ax = (int8)emu_al;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_dl = emu_get_memory8(emu_es, emu_bx, 0x4E);
		emu_dh = 0x0;
		emu_incw(&emu_dx);
		emu_cmpw(&emu_ax, emu_dx);
		if ((int16)emu_ax <= (int16)emu_dx) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
			emu_get_memory8(emu_es, emu_bx, 0x2A) = 0xFF;
		}
	}
l__1D01:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_shlw(&emu_dx, 0x1);
	emu_rclw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x60);
	emu_incw(&emu_si);
l__1D16:
	emu_cmpw(&emu_si, 0x13);
	if ((int16)emu_si >= (int16)0x13) goto l__1D1E;
	goto l__1C08;
l__1D1E:
	goto l__1E46;
l__1D21:
	emu_xorw(&emu_si, emu_si);
	goto l__1D3A;
l__1D25:
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x0;
	emu_incw(&emu_si);
l__1D3A:
	emu_cmpw(&emu_si, 0x1B);
	if ((int16)emu_si < (int16)0x1B) goto l__1D25;
	emu_xorw(&emu_si, emu_si);
	goto l__1E24;
l__1D44:
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4A);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) != 0xFFFF) goto l__1D5D;
	goto l__1E23;
l__1D5D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xD);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) == 0xD) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x47), 0x2);
		if (emu_get_memory16(emu_es, emu_bx, 0x47) == 0x2) {
			emu_get_memory16(emu_ss, emu_bp, -0x12) = 0xE;
		}
	}
l__1D72:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x21);
	emu_ax = (int8)emu_al;
	emu_di = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xA);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) == 0xA) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x47), 0x2);
		if (emu_get_memory16(emu_es, emu_bx, 0x47) == 0x2) {
			emu_decw(&emu_di);
		}
	}
l__1DA0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_andw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_andw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1E));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x1E)) goto l__1E23;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	if (emu_dx != emu_get_memory16(emu_es, emu_bx, 0x1C)) goto l__1E23;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x31);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x47);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__1E23;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4E);
	emu_ah = 0x0;
	emu_cmpw(&emu_ax, emu_di);
	if ((int16)emu_ax < (int16)emu_di) goto l__1E03;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x1;
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x12);
	emu_push(emu_cs); emu_push(0x1DFB); emu_cs = 0x01F7; emu_Tools_Shld();
l__1DFB:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	goto l__1E23;
l__1E03:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x4E);
		emu_ah = 0x0;
		emu_incw(&emu_ax);
		emu_cmpw(&emu_ax, emu_di);
		if ((int16)emu_ax >= (int16)emu_di) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
			emu_get_memory8(emu_es, emu_bx, 0x2A) = 0xFF;
		}
	}
l__1E23:
	emu_incw(&emu_si);
l__1E24:
	emu_cmpw(&emu_si, 0x8);
	if ((int16)emu_si >= (int16)0x8) goto l__1E2C;
	goto l__1D44;
l__1E2C:
	goto l__1E46;
l__1E2E:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0xFFFF;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0xFFFF;
	goto l__1E46;
l__1E3A:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	goto l__1E46;
l__1E46:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__1B97;
l__1E4F:
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
 * Decompiled function f__0C3A_1E67_0011_E44A()
 *
 * @name f__0C3A_1E67_0011_E44A
 * @implements 0C3A:1E67:0011:E44A ()
 * @implements 0C3A:1E78:000D:8192
 * @implements 0C3A:1E85:0018:6B6F
 * @implements 0C3A:1E9D:0012:F3F8
 * @implements 0C3A:1EAF:0019:AC4B
 * @implements 0C3A:1EC8:000E:0022
 * @implements 0C3A:1ED6:0012:8463
 * @implements 0C3A:1EE8:003B:2E58
 * @implements 0C3A:1EFF:0024:7F8D
 * @implements 0C3A:1F23:0014:9D7F
 * @implements 0C3A:1F37:0011:68E8
 * @implements 0C3A:1F48:0028:F5E4
 * @implements 0C3A:1F6C:0004:893F
 *
 * Called From: 0C3A:1879:0023:A7FF
 * Called From: 0C3A:1A09:001E:E768
 */
void f__0C3A_1E67_0011_E44A()
{
l__1E67:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1E78;
	goto l__1F6C;
l__1E78:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__1E85;
	goto l__1F6C;
l__1E85:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x8) goto l__1EC8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1E9D); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
l__1E9D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1EAF); emu_cs = 0x1082; emu_Structure_Free();
l__1EAF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	goto l__1EFF;
l__1EC8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1ED6); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__1ED6:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1EE8); emu_cs = 0x0FE4; emu_Unit_Free();
l__1EE8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2D07;
l__1EFF:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_cl = 0x8;
	emu_shrw(&emu_dx, emu_cl);
	emu_subw(&emu_ax, emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_cs); emu_push(0x1F23); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_ValueToPercent();
l__1F23:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x1F37); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__1F37:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1F48); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__1F48:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xBFFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x50) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
l__1F6C:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_1F70_0010_8DB3()
 *
 * @name f__0C3A_1F70_0010_8DB3
 * @implements 0C3A:1F70:0010:8DB3 ()
 * @implements 0C3A:1F80:0012:95B8
 * @implements 0C3A:1F92:0022:E6F2
 * @implements 0C3A:1FB4:0006:D729
 * @implements 0C3A:1FBA:0053:1870
 * @implements 0C3A:200D:000E:D0A4
 * @implements 0C3A:201B:000F:00C3
 * @implements 0C3A:201E:000C:72C2
 * @implements 0C3A:202D:0012:1AF4
 * @implements 0C3A:203F:0004:5F9F
 * @implements 0C3A:2043:000D:1BB4
 * @implements 0C3A:204C:0004:EA3A
 * @implements 0C3A:2050:0015:64A0
 * @implements 0C3A:205A:000B:166D
 * @implements 0C3A:2065:0013:9114
 * @implements 0C3A:2067:0011:DA22
 * @implements 0C3A:2078:002C:9F6D
 * @implements 0C3A:20A4:0008:A466
 * @implements 0C3A:20AC:002F:7D88
 * @implements 0C3A:20AF:002C:4899
 * @implements 0C3A:20D5:0006:F7CE
 *
 * Called From: 0C3A:0723:0015:4096
 * Called From: 0C3A:0723:001E:737A
 * Called From: 0C3A:11F8:000E:67F9
 * Called From: 1391:077C:000C:2418
 * Called From: 1A34:2F2F:0017:10C5
 * Called From: 1A34:2F2F:000E:591D
 * Called From: B511:033A:000C:E8B5
 */
void f__0C3A_1F70_0010_8DB3()
{
l__1F70:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1F80); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__1F80:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax != 0) goto l__1F92;
	goto l__20D5;
l__1F92:
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory16(emu_es, emu_bx, 0x14) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1FB4); emu_cs = 0x1082; emu_Structure_FindFirst();
l__1FB4:
	emu_addw(&emu_sp, 0x8);
	goto l__2067;
l__1FBA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x36);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x14), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x38), 0x0);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x38) >= (int16)0x0) goto l__2050;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_es, emu_bx, 0x10)) goto l__2043;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x200D); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_ValueToPercent();
l__200D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x80);
	if (emu_si <= 0x80) goto l__201B;
	emu_ax = emu_si;
	goto l__201E;
l__201B:
	emu_ax = 0x80;
l__201E:
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFF);
	if (emu_si >= 0xFF) { /* Unresolved jump */ emu_ip = 0x202A; emu_last_cs = 0x0C3A; emu_last_ip = 0x2024; emu_last_length = 0x000C; emu_last_crc = 0x72C2; emu_call(); return; }
	emu_ax = emu_si;
	goto l__202D;
l__202D:
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x38);
	emu_negw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x203F); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__203F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__204C;
l__2043:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x38);
	emu_negw(&emu_ax, emu_ax);
l__204C:
	emu_addw(&emu_di, emu_ax);
	goto l__205A;
l__2050:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x38);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
l__205A:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2065); emu_cs = 0x1082; emu_Structure_FindNext();
l__2065:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2067:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax == 0) goto l__2078;
	goto l__1FBA;
l__2078:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_di;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_es, emu_bx, 0x18) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__20AF;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) <= (int16)emu_di) goto l__20AF;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x10E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20A4); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__20A4:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x20AC); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__20AC:
	emu_addw(&emu_sp, 0x6);
l__20AF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
		emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
		if (emu_ax == 0) {
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BC), 0x0);
			if (emu_get_memory16(emu_ds, 0x00, 0x38BC) == 0x0) {
				emu_get_memory16(emu_ds, 0x00, 0x38B4) = 0x0;
			}
		}
	}
l__20D5:
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
 * Decompiled function f__0C3A_20DB_0011_DA16()
 *
 * @name f__0C3A_20DB_0011_DA16
 * @implements 0C3A:20DB:0011:DA16 ()
 * @implements 0C3A:20EC:0027:F812
 * @implements 0C3A:2113:000C:097D
 * @implements 0C3A:2114:000B:0CED
 * @implements 0C3A:211F:0011:B618
 * @implements 0C3A:2130:0016:7245
 * @implements 0C3A:2133:0013:8247
 * @implements 0C3A:2146:0006:972B
 * @implements 0C3A:214C:0033:3F6A
 * @implements 0C3A:217F:0026:4E19
 * @implements 0C3A:21A5:003B:F488
 * @implements 0C3A:21AE:0032:57F2
 * @implements 0C3A:21E0:000E:34E7
 * @implements 0C3A:21E3:000B:166D
 * @implements 0C3A:21EE:0013:EDF1
 * @implements 0C3A:21F0:0011:A6C7
 * @implements 0C3A:2201:0006:F7CE
 *
 * Called From: 1391:0789:000D:5BF0
 */
void f__0C3A_20DB_0011_DA16()
{
l__20DB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x20EC); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__20EC:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_di != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__2114;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2113); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0D74_0020_7CC1();
l__2113:
	emu_pop(&emu_cx);
l__2114:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x211F); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_ValueToPercent();
l__211F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x100);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) >= 0x100) goto l__2130;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__2133;
l__2130:
	emu_ax = 0x100;
l__2133:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2146); emu_cs = 0x1082; emu_Structure_FindFirst();
l__2146:
	emu_addw(&emu_sp, 0x8);
	goto l__21F0;
l__214C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax != emu_di) goto l__21E3;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x217F); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__217F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x10);
	emu_sarw(&emu_ax, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_ax);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x56) <= (int16)emu_ax) goto l__21A5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x56);
	goto l__21AE;
l__21A5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_sarw(&emu_ax, 0x1);
l__21AE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x56);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_es, emu_bx, 0xE)) goto l__21E3;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x1;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) <= (int16)0x0) goto l__21E3;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x21E0); f__0C3A_1216_0013_E56D();
l__21E0:
	emu_addw(&emu_sp, 0x8);
l__21E3:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x21EE); emu_cs = 0x1082; emu_Structure_FindNext();
l__21EE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__21F0:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax == 0) goto l__2201;
	goto l__214C;
l__2201:
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
 * Decompiled function f__0C3A_2207_001D_EDF2()
 *
 * @name f__0C3A_2207_001D_EDF2
 * @implements 0C3A:2207:001D:EDF2 ()
 * @implements 0C3A:221F:0005:DC9C
 * @implements 0C3A:2221:0003:DD08
 * @implements 0C3A:2224:0014:B608
 * @implements 0C3A:2238:0008:9688
 * @implements 0C3A:2240:0008:984F
 * @implements 0C3A:2248:001B:BBAA
 * @implements 0C3A:2263:0043:67B1
 * @implements 0C3A:22A6:001C:0224
 * @implements 0C3A:22C2:0005:86E2
 * @implements 0C3A:22C7:0006:F7CE
 *
 * Called From: 0C3A:23D3:0010:BC47
 * Called From: 0C3A:23D3:001C:D2B1
 * Called From: 1A34:35E0:0015:9E61
 */
void f__0C3A_2207_001D_EDF2()
{
l__2207:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != 0) goto l__2224;
	}
l__221F:
	emu_xorw(&emu_ax, emu_ax);
l__2221:
	goto l__22C7;
l__2224:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2238); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__2238:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2240); emu_cs = 0x1423; f__1423_0F34_0017_464D();
l__2240:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__2248;
	goto l__221F;
l__2248:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) != 0) goto l__2263;
	goto l__221F;
l__2263:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2D);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2F));
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x22A6); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
l__22A6:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) { /* Unresolved jump */ emu_ip = 0x22B7; emu_last_cs = 0x0C3A; emu_last_ip = 0x22AD; emu_last_length = 0x001C; emu_last_crc = 0x0224; emu_call(); return; }
	emu_ax = emu_si;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_di);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x7D00);
	if (emu_si <= 0x7D00) goto l__22C2;
	emu_ax = 0x7D00;
	/* Unresolved jump */ emu_ip = 0x22C4; emu_last_cs = 0x0C3A; emu_last_ip = 0x22C0; emu_last_length = 0x001C; emu_last_crc = 0x0224; emu_call();
l__22C2:
	emu_ax = emu_si;
	goto l__2221;
l__22C7:
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
 * Decompiled function f__0C3A_22CD_0029_8F46()
 *
 * @name f__0C3A_22CD_0029_8F46
 * @implements 0C3A:22CD:0029:8F46 ()
 * @implements 0C3A:22F3:0003:DDAD
 * @implements 0C3A:22F6:000C:39D3
 * @implements 0C3A:2302:003A:85DA
 * @implements 0C3A:233C:0006:D732
 * @implements 0C3A:2342:005A:53AA
 * @implements 0C3A:239C:001E:17E0
 * @implements 0C3A:23A4:0016:3ADC
 * @implements 0C3A:23BA:001C:D2B1
 * @implements 0C3A:23C6:0010:BC47
 * @implements 0C3A:23D6:002B:25DC
 * @implements 0C3A:23F6:000B:166D
 * @implements 0C3A:2401:0013:9D6C
 * @implements 0C3A:2403:0011:D65A
 * @implements 0C3A:2414:0019:1EF3
 * @implements 0C3A:2424:0009:9B9D
 * @implements 0C3A:242D:0006:F7CE
 *
 * Called From: 1A34:353C:0011:412D
 * Called From: 1A34:35A2:001F:BC73
 */
void f__0C3A_22CD_0029_8F46()
{
l__22CD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__22F6;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__22F3:
	goto l__242D;
l__22F6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_push(emu_cs); emu_push(0x2302); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
l__2302:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
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
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x233C); emu_cs = 0x1082; emu_Structure_FindFirst();
l__233C:
	emu_addw(&emu_sp, 0x8);
	goto l__2403;
l__2342:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x44);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_si, 0xA);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x2E5C));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2E5E));
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__23C6;
	emu_cmpw(&emu_di, 0x4);
	if (emu_di == 0x4) goto l__23C6;
	emu_cmpw(&emu_di, 0x1);
	if (emu_di != 0x1) goto l__23A4;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x239C); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__239C:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__23C6;
l__23A4:
	emu_cmpw(&emu_di, 0x2);
	if (emu_di != 0x2) goto l__23F6;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x23BA); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__23BA:
	emu_addw(&emu_sp, 0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_shlw(&emu_dx, 0x1);
	emu_cmpw(&emu_ax, emu_dx);
	if ((int16)emu_ax > (int16)emu_dx) goto l__23F6;
l__23C6:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x23D6); f__0C3A_2207_001D_EDF2();
l__23D6:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xC)) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
		emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	}
l__23F6:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2401); emu_cs = 0x1082; emu_Structure_FindNext();
l__2401:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2403:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2414;
	goto l__2342;
l__2414:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x0) {
		emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
		emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	}
l__2424:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__22F3;
l__242D:
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
 * Decompiled function f__0C3A_2433_0042_DBC6()
 *
 * @name f__0C3A_2433_0042_DBC6
 * @implements 0C3A:2433:0042:DBC6 ()
 * @implements 0C3A:2475:0005:6143
 * @implements 0C3A:2478:0002:2597
 *
 * Called From: B511:01D2:000B:5450
 */
void f__0C3A_2433_0042_DBC6()
{
l__2433:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__2478;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__2478;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2475); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_RemoveFogAroundTile();
l__2475:
	emu_addw(&emu_sp, 0x6);
l__2478:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_247A_0015_EA04()
 *
 * @name f__0C3A_247A_0015_EA04
 * @implements 0C3A:247A:0015:EA04 ()
 * @implements 0C3A:248C:0003:DDB5
 * @implements 0C3A:248F:0028:5D23
 * @implements 0C3A:24B7:0009:3ADE
 * @implements 0C3A:24C0:0039:31C8
 * @implements 0C3A:24F9:0015:A882
 * @implements 0C3A:24FF:000F:8F80
 * @implements 0C3A:250E:000D:6849
 * @implements 0C3A:251B:0012:24A4
 * @implements 0C3A:252D:0017:AE9B
 * @implements 0C3A:2544:001D:434D
 * @implements 0C3A:2561:000B:44D7
 * @implements 0C3A:256C:0027:DC19
 * @implements 0C3A:2593:0013:A3B5
 * @implements 0C3A:259A:000C:9CB0
 * @implements 0C3A:25A6:0007:DC45
 * @implements 0C3A:25AB:0002:C2BA
 * @implements 0C3A:25AD:0005:2D35
 * @implements 0C3A:25B2:0024:F4A5
 * @implements 0C3A:25CA:000C:BCCD
 * @implements 0C3A:25D6:000A:7F43
 * @implements 0C3A:25D7:0009:6EC3
 * @implements 0C3A:25E0:0006:EC34
 * @implements 0C3A:25E6:0006:F7CE
 *
 * Called From: 0972:0B41:0026:CA0B
 * Called From: 0972:0D41:000E:9B6D
 * Called From: 0972:0D41:0010:1B5F
 * Called From: 1423:0713:000E:39E4
 */
void f__0C3A_247A_0015_EA04()
{
l__247A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__248F;
	emu_xorw(&emu_ax, emu_ax);
l__248C:
	goto l__25E6;
l__248F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x24B7); emu_cs = 0x0F3F; emu_Tile_Center();
l__24B7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x24C0); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__24C0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x2D60);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__24FF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x24F9); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_08E7_002B_DC75();
l__24F9:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
l__24FF:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	emu_push(emu_cs); emu_push(0x250E); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
l__250E:
	emu_andw(&emu_ax, 0xF);
	emu_si = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x10;
	goto l__25D7;
l__251B:
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0x0) goto l__252D;
	goto l__25B2;
l__252D:
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2544); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__2544:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x30);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x30) != 0) goto l__25B2;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2561); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0F8B_0015_1689();
l__2561:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__25B2;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x256C); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__256C:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xB);
	if (emu_ax == 0xB) goto l__25B2;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x6);
	if (emu_get_memory16(emu_ss, emu_bp, -0x14) == 0x6) goto l__25B2;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x7);
	if (emu_get_memory16(emu_ss, emu_bp, -0x14) == 0x7) goto l__25B2;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__25AD;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) == 0x0) goto l__259A;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2593); emu_cs = 0x0F3F; emu_Tile_GetDistanceOffset();
l__2593:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__25AB;
l__259A:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_di;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x25A6); emu_cs = 0x0F3F; emu_Tile_GetDistanceOffset();
l__25A6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
l__25AB:
	goto l__25B2;
l__25AD:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_di;
	goto l__25E0;
l__25B2:
	emu_incw(&emu_si);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpw(&emu_si, 0xF);
	if ((int16)emu_si <= (int16)0xF) {
		emu_ax = emu_si;
		emu_shlw(&emu_ax, 0x1);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_addw(&emu_bx, emu_ax);
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
		if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0x0) goto l__25D6;
	}
l__25CA:
	emu_ax = 0x10;
	emu_subw(&emu_ax, emu_si);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_xorw(&emu_si, emu_si);
	goto l__25D7;
l__25D6:
	emu_incw(&emu_si);
l__25D7:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x12) <= (int16)0x0) goto l__25E0;
	goto l__251B;
l__25E0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	goto l__248C;
l__25E6:
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
 * Decompiled function emu_Structure_IsUpgradable()
 *
 * @name emu_Structure_IsUpgradable
 * @implements 0C3A:25EC:0011:E453 ()
 * @implements 0C3A:25FD:0031:9CBA
 * @implements 0C3A:2629:0005:9C8C
 * @implements 0C3A:262B:0003:9D18
 * @implements 0C3A:262E:002D:6AAB
 * @implements 0C3A:265B:0053:01A6
 * @implements 0C3A:26AE:0032:E53D
 * @implements 0C3A:26DD:0003:22B2
 * @implements 0C3A:26E0:0002:D2BA
 * @implements 0C3A:26E2:002B:23E9
 * @implements 0C3A:2707:0006:02AD
 * @implements 0C3A:270D:0003:22A6
 * @implements 0C3A:2710:0004:893F
 *
 * Called From: 0972:02DF:000D:FA04
 * Called From: 0972:02DF:006D:68DA
 * Called From: 0C3A:0117:0016:49D5
 * Called From: 0C3A:0117:0045:1FBC
 * Called From: 0C3A:016B:000B:9990
 * Called From: 0C3A:016B:0012:C547
 * Called From: 0C3A:14C4:0010:2429
 * Called From: 10E4:1128:001C:695F
 * Called From: 10E4:1128:001A:6A77
 * Called From: B4C4:04B0:0018:10C7
 */
void emu_Structure_IsUpgradable()
{
l__25EC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__25FD;
	goto l__270D;
l__25FD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x8) != 0x0) goto l__262E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x5);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x5) goto l__262E;
l__2629:
	emu_xorw(&emu_ax, emu_ax);
l__262B:
	goto l__2710;
l__262E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x2);
	if (emu_get_memory8(emu_es, emu_bx, 0x8) != 0x2) goto l__265B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x4);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x4) goto l__265B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4E), 0x1);
	if (emu_get_memory8(emu_es, emu_bx, 0x4E) != 0x1) goto l__265B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x5E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B2));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x38B2)) goto l__265B;
	goto l__2629;
l__265B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4E);
	emu_ah = 0x0;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x5A), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x5A) == 0x0) goto l__26E2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4E);
	emu_ah = 0x0;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_incw(&emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x5A), emu_ax);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x5A) > (int16)emu_ax) goto l__26E2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x8) goto l__26E0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4E), 0x1);
	if (emu_get_memory8(emu_es, emu_bx, 0x4E) != 0x1) goto l__26E0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x26AE); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__26AE:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_bx = 0x2C94;
	emu_es = emu_bx;
	emu_andw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x626));
	emu_andw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x628));
	emu_bx = 0x2C94;
	emu_es = emu_bx;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, 0x00, 0x628));
	if (emu_ax == emu_get_memory16(emu_es, 0x00, 0x628)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_es, 0x00, 0x626));
		if (emu_dx == emu_get_memory16(emu_es, 0x00, 0x626)) goto l__26E0;
	}
l__26DD:
	goto l__2629;
l__26E0:
	goto l__2707;
l__26E2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x7);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x7) goto l__270D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x8) != 0x0) goto l__270D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4E), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4E) != 0x0) goto l__270D;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x3);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38B2) < (int16)0x3) goto l__270D;
l__2707:
	emu_ax = 0x1;
	goto l__262B;
l__270D:
	goto l__2629;
l__2710:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_2714_0015_B6F6()
 *
 * @name f__0C3A_2714_0015_B6F6
 * @implements 0C3A:2714:0015:B6F6 ()
 * @implements 0C3A:2726:0003:DD19
 * @implements 0C3A:2729:0017:EFBB
 * @implements 0C3A:2740:002E:3CAB
 * @implements 0C3A:2742:002C:3C61
 * @implements 0C3A:2744:002A:34CF
 * @implements 0C3A:276E:0008:A466
 * @implements 0C3A:2776:0022:81DF
 * @implements 0C3A:2798:003A:C97D
 * @implements 0C3A:279E:0034:EAA1
 * @implements 0C3A:27D2:0008:A466
 * @implements 0C3A:27DA:002B:0599
 * @implements 0C3A:2805:000B:78E0
 * @implements 0C3A:280B:0005:96F1
 * @implements 0C3A:2810:0004:DE52
 *
 * Called From: 0AEC:1238:001C:8D4B
 * Called From: 0C3A:182B:001B:AF52
 * Called From: 0C3A:182B:0015:BE59
 */
void f__0C3A_2714_0015_B6F6()
{
l__2714:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__2729;
	emu_xorw(&emu_ax, emu_ax);
l__2726:
	goto l__2810;
l__2729:
	emu_xorw(&emu_di, emu_di);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__2744;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x2) != 0) goto l__2740;
	emu_ax = 0x1;
	goto l__2742;
l__2740:
	emu_xorw(&emu_ax, emu_ax);
l__2742:
	emu_si = emu_ax;
l__2744:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__279E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x2) == 0) goto l__279E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) { /* Unresolved jump */ emu_ip = 0x2779; emu_last_cs = 0x0C3A; emu_last_ip = 0x275F; emu_last_length = 0x002A; emu_last_crc = 0x34CF; emu_call(); return; }
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x276E); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__276E:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2776); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__2776:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0xFFFD);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xBFFF);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x2798); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
l__2798:
	emu_addw(&emu_sp, 0x6);
	emu_di = 0x1;
l__279E:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__280B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x2) != 0) goto l__280B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) == 0x0) goto l__280B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) { /* Unresolved jump */ emu_ip = 0x27DD; emu_last_cs = 0x0C3A; emu_last_ip = 0x27C3; emu_last_length = 0x0034; emu_last_crc = 0xEAA1; emu_call(); return; }
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x27D2); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__27D2:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x27DA); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__27DA:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xDFFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x2805); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_01CE_002B_7574();
l__2805:
	emu_addw(&emu_sp, 0x6);
	emu_di = 0x1;
l__280B:
	emu_ax = emu_di;
	goto l__2726;
l__2810:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_2814_0015_76F0()
 *
 * @name f__0C3A_2814_0015_76F0
 * @implements 0C3A:2814:0015:76F0 ()
 * @implements 0C3A:2826:0003:1D1F
 * @implements 0C3A:2829:0024:5E4A
 * @implements 0C3A:2838:0015:335F
 * @implements 0C3A:284D:002E:3E5B
 * @implements 0C3A:284F:002C:3E91
 * @implements 0C3A:2851:002A:363F
 * @implements 0C3A:287B:0008:A466
 * @implements 0C3A:2883:0023:35DC
 * @implements 0C3A:28A6:0052:D8B0
 * @implements 0C3A:28AC:004C:0493
 * @implements 0C3A:28F8:0008:A466
 * @implements 0C3A:2900:001A:5465
 * @implements 0C3A:2903:0017:72C7
 * @implements 0C3A:291A:000B:B8E5
 * @implements 0C3A:2920:0005:56F4
 * @implements 0C3A:2925:0004:DE52
 *
 * Called From: 0972:08E5:0038:5CE7
 * Called From: 0AEC:121C:001C:6F1D
 * Called From: 0C3A:149C:0014:8AFF
 */
void f__0C3A_2814_0015_76F0()
{
l__2814:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__2829;
	emu_xorw(&emu_ax, emu_ax);
l__2826:
	goto l__2925;
l__2829:
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) {
		emu_xorw(&emu_si, emu_si);
	}
l__2838:
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__2851;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2000) != 0) goto l__284D;
	emu_ax = 0x1;
	goto l__284F;
l__284D:
	emu_xorw(&emu_ax, emu_ax);
l__284F:
	emu_si = emu_ax;
l__2851:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__28AC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2000) == 0) goto l__28AC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) { /* Unresolved jump */ emu_ip = 0x2886; emu_last_cs = 0x0C3A; emu_last_ip = 0x286C; emu_last_length = 0x002A; emu_last_crc = 0x363F; emu_call(); return; }
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x287B); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__287B:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2883); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__2883:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xDFFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xBFFF);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x28A6); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_0127_000E_E325();
l__28A6:
	emu_addw(&emu_sp, 0x6);
	emu_di = 0x1;
l__28AC:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__2920;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2000) != 0) goto l__2920;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1A);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0xE)) goto l__2920;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__2903;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x28F8); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
l__28F8:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2900); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__2900:
	emu_addw(&emu_sp, 0x6);
l__2903:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x6000);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x291A); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_01CE_002B_7574();
l__291A:
	emu_addw(&emu_sp, 0x6);
	emu_di = 0x1;
l__2920:
	emu_ax = emu_di;
	goto l__2826;
l__2925:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_2929_0012_B10B()
 *
 * @name f__0C3A_2929_0012_B10B
 * @implements 0C3A:2929:0012:B10B ()
 * @implements 0C3A:293B:000F:A6A8
 * @implements 0C3A:294A:000F:DCEB
 * @implements 0C3A:2959:0015:CD4B
 * @implements 0C3A:296E:0005:A2AE
 * @implements 0C3A:2973:000B:70FD
 * @implements 0C3A:297E:0011:21E1
 * @implements 0C3A:2991:002F:3744
 * @implements 0C3A:29A3:001D:217F
 * @implements 0C3A:29B5:000B:799F
 * @implements 0C3A:29C0:001F:D4DD
 * @implements 0C3A:29C2:001D:67B9
 * @implements 0C3A:29DF:0005:8B6E
 * @implements 0C3A:29E4:001D:DF36
 * @implements 0C3A:29F6:000B:0673
 * @implements 0C3A:2A01:0015:922F
 * @implements 0C3A:2A03:0013:00E2
 *
 * Called From: 0C3A:1190:000D:A5C0
 * Called From: 0C3A:1342:000B:E94E
 * Called From: 0C3A:1342:000C:ECDE
 */
void f__0C3A_2929_0012_B10B()
{
l__2929:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__293B;
	/* Unresolved jump */ emu_ip = 0x2A11; emu_last_cs = 0x0C3A; emu_last_ip = 0x2938; emu_last_length = 0x0012; emu_last_crc = 0xB10B; emu_call();
l__293B:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x294A); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
l__294A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2959); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__2959:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x296E); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__296E:
	emu_addw(&emu_sp, 0x8);
	goto l__29C2;
l__2973:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x297E); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
l__297E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax != emu_si) goto l__2991;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x298F); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	/* Unresolved jump */ emu_ip = 0x298F; emu_last_cs = 0x0C3A; emu_last_ip = 0x298F; emu_last_length = 0x0011; emu_last_crc = 0x21E1; emu_call();
l__2991:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) == emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	}
l__29A3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x54) = 0x0;
	}
l__29B5:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x29C0); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__29C0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__29C2:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__2973;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x29DF); emu_cs = 0x104B; emu_AirUnit_FindFirst();
l__29DF:
	emu_addw(&emu_sp, 0x6);
	goto l__2A03;
l__29E4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x1A) == emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_get_memory16(emu_es, emu_bx, 0x1A) = 0x0;
	}
l__29F6:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2A01); emu_cs = 0x104B; emu_AirUnit_FindNext();
l__2A01:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2A03:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__29E4;
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
