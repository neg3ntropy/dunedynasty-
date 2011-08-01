/* $Id$ */

/** @file decompiled/cs__AB01.c Decompiled segment AB01. */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__AB01_15E1_0068_0B9B()
 *
 * @name f__AB01_15E1_0068_0B9B
 * @implements AB01:15E1:0068:0B9B ()
 * @implements AB01:15F9:0050:3CC3
 * @implements AB01:1616:0033:F430
 * @implements AB01:1649:001A:99A8
 * @implements AB01:1651:0012:241D
 * @implements AB01:1657:000C:1CBB
 *
 * Called From: AB01:16FF:000D:C42E
 * Called From: AB01:287C:000B:E6F7
 */
void f__AB01_15E1_0068_0B9B()
{
l__15E1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_cx = emu_get_memory16(emu_cs, 0x00, 0x1312);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_cx;
	if (emu_cx == 0) { /* Unresolved jump */ emu_ip = 0x165C; emu_last_cs = 0xAB01; emu_last_ip = 0x15F7; emu_last_length = 0x0068; emu_last_crc = 0x0B9B; emu_call(); return; }
l__15F9:
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	emu_cmpw(&emu_get_memory16(emu_cs, emu_di, 0x12F4), 0x0);
	if (emu_get_memory16(emu_cs, emu_di, 0x12F4) == 0x0) goto l__15F9;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_cs, emu_di, 0x12F2));
	emu_cmpw(&emu_get_memory16(emu_ds, emu_si, 0x20), 0x0);
	if (emu_get_memory16(emu_ds, emu_si, 0x20) == 0x0) goto l__1657;
	emu_bx = 0x0;
l__1616:
	emu_al = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148);
	emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0x6));
	if (emu_al != emu_get_memory8(emu_ss, emu_bp,  0x6)) goto l__1651;
	emu_get_memory8(emu_ds, emu_bx + emu_si, 0x148) = 0xFF;
	emu_cl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x168);
	emu_di = emu_bx;
	emu_bl = emu_al;
	emu_bh = 0x0;
	emu_bl = emu_get_memory8(emu_ds, emu_bx + emu_si, 0x68);
	emu_decb(&emu_get_memory8(emu_cs, emu_bx, 0x13DE));
	emu_orb(&emu_bl, 0x80);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_cx);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x1649); emu_MPU_Send();
l__1649:
	emu_addw(&emu_sp, 0x6);
	emu_decw(&emu_get_memory16(emu_ds, emu_si, 0x20));
	emu_bx = emu_di;
l__1651:
	emu_incw(&emu_bx);
	emu_cmpw(&emu_bx, 0x20);
	if (emu_bx < 0x20) goto l__1616;
l__1657:
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) != 0) goto l__15F9;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__AB01_289D_0017_6184()
 *
 * @name f__AB01_289D_0017_6184
 * @implements AB01:289D:0017:6184 ()
 * @implements AB01:28B4:0029:4C06
 * @implements AB01:28DD:001C:D2B9
 * @implements AB01:28F9:0028:DB24
 * @implements AB01:2904:001D:8BC7
 * @implements AB01:2921:002D:ECDF
 * @implements AB01:2925:0029:2E5B
 * @implements AB01:294E:0024:5A85
 * @implements AB01:2951:0021:F20C
 * @implements AB01:2972:000A:191F
 * @implements AB01:2975:0007:3FBD
 * @implements AB01:297C:0005:C48A
 *
 * Called From: AB01:1719:001A:15C8
 */
void f__AB01_289D_0017_6184()
{
l__289D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_pushf();
	emu_cli();
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_decw(&emu_si);
	emu_testb(&emu_get_memory8(emu_cs, emu_si, 0x13EE), 0x80);
	if ((emu_get_memory8(emu_cs, emu_si, 0x13EE) & 0x80) != 0) goto l__28B4;
	goto l__2975;
l__28B4:
	emu_andb(&emu_get_memory8(emu_cs, emu_si, 0x13EE), 0x7F);
	emu_get_memory8(emu_cs, emu_si, 0x13DE) = 0x0;
	emu_orw(&emu_si, 0xB0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x40;
	emu_pop(&emu_bp);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x28DD); emu_MPU_Send();
l__28DD:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x7B;
	emu_pop(&emu_bp);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x28F9); emu_MPU_Send();
l__28F9:
	emu_addw(&emu_sp, 0x6);
	emu_andw(&emu_si, 0xF);
	emu_bx = emu_si;
	emu_di = 0x0;
l__2904:
	emu_dl = emu_get_memory8(emu_cs, emu_bx, 0x131E);
	emu_cmpb(&emu_dl, 0xFF);
	if (emu_dl == 0xFF) goto l__2925;
	emu_push(emu_bx);
	emu_andb(&emu_bl, 0xF);
	emu_orb(&emu_bl, 0xB0);
	emu_al = emu_get_memory8(emu_cs, emu_di, 0x11D7);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cs);
	emu_push(0x2921); emu_MPU_Send();
l__2921:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bx);
l__2925:
	emu_addw(&emu_bx, 0x10);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x9);
	if (emu_di != 0x9) goto l__2904;
	emu_andw(&emu_si, 0xF);
	emu_al = emu_get_memory8(emu_cs, emu_si, 0x13AE);
	emu_cmpb(&emu_al, 0xFF);
	if (emu_al == 0xFF) goto l__2951;
	emu_orw(&emu_si, 0xC0);
	emu_push(emu_ax);
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ss, emu_bp,  0x2) = 0x0;
	emu_pop(&emu_bp);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x294E); emu_MPU_Send();
l__294E:
	emu_addw(&emu_sp, 0x6);
l__2951:
	emu_andw(&emu_si, 0xF);
	emu_al = emu_get_memory8(emu_cs, emu_si, 0x13BE);
	emu_cmpb(&emu_al, 0xFF);
	if (emu_al == 0xFF) goto l__2975;
	emu_dl = emu_get_memory8(emu_cs, emu_si, 0x13CE);
	emu_cmpb(&emu_dl, 0xFF);
	if (emu_dl == 0xFF) goto l__2975;
	emu_orw(&emu_si, 0xE0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x2972); emu_MPU_Send();
l__2972:
	emu_addw(&emu_sp, 0x6);
l__2975:
	emu_popf();
l__297C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
