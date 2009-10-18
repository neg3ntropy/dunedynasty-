/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__176C_000E_000E_633D()
 *
 * @name f__176C_000E_000E_633D
 * @implements 176C:000E:000E:633D ()
 * @implements 176C:001C:001D:EB93
 * @implements 176C:0036:0003:1D14
 * @implements 176C:0039:0025:526C
 * @implements 176C:0061:001A:F455
 * @implements 176C:007B:003E:BA74
 * @implements 176C:00B9:0025:6898
 * @implements 176C:00DE:0002:D13A
 * @implements 176C:0102:0005:85EE
 * @implements 176C:0109:0002:2597
 *
 * Called From: 06F7:017E:0011:74B6
 * Called From: 06F7:0275:0032:1BCC
 * Called From: 0972:1685:0028:49BE
 * Called From: 0972:1699:000F:4845
 * Called From: 0AEC:03EA:0013:2700
 * Called From: 1423:0B8C:001F:C162
 * Called From: 16C5:063E:001C:37C4
 * Called From: 16C5:063E:000F:6841
 * Called From: 16C5:0696:000F:6849
 * Called From: 16C5:08D7:0018:C08E
 * Called From: 176C:07B4:002F:3687
 * Called From: 176C:07B4:0037:8F26
 * Called From: 176C:17C9:003E:0F49
 * Called From: 176C:1C44:000D:7589
 * Called From: 176C:1C63:0017:E375
 * Called From: 176C:2459:003D:580D
 * Called From: 176C:2A7B:0028:B0C0
 * Called From: 1A34:0206:001A:B3E0
 * Called From: 1A34:0B48:000B:1D44
 * Called From: 1A34:0B48:0012:C7F2
 * Called From: 1A34:0CB7:000F:8015
 * Called From: 1A34:0CB7:0010:804C
 * Called From: 1A34:0D24:002A:8079
 * Called From: 1A34:0D57:0019:C8A8
 * Called From: 1A34:0DE4:0029:C1D4
 * Called From: 1A34:191C:0012:298E
 * Called From: 1A34:1A11:000B:F53C
 * Called From: 1A34:1A11:0012:298E
 * Called From: 1A34:1DFC:002D:D435
 * Called From: 1A34:2A73:000B:F53C
 * Called From: 1A34:2A73:0012:2F8E
 * Called From: B4B5:05B0:001F:757D
 */
void f__176C_000E_000E_633D()
{
l__000E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__001C;
	goto l__0109;
l__001C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0xD);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0xD) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0xA);
		if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0xA) {
			emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFFFF);
			if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0xFFFF) goto l__0039;
		}
	}
	goto l__0036;
l__0036:
	goto l__0109;
l__0039:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x74);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0061;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__007B;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) { /* Unresolved jump */ emu_ip = 0x005E; emu_last_cs = 0x176C; emu_last_ip = 0x0059; emu_last_length = 0x0025; emu_last_crc = 0x526C; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x00E0; emu_last_cs = 0x176C; emu_last_ip = 0x005B; emu_last_length = 0x0025; emu_last_crc = 0x526C; emu_call();
l__0061:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x49);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4B));
	if (emu_ax == 0) goto l__007B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_get_memory8(emu_es, emu_bx, 0x50) = emu_al;
	goto l__0109;
l__007B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_get_memory8(emu_es, emu_bx, 0x4F) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x50) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x4B) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x49) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x10) = 0x0;
	emu_push(emu_ds);
	emu_ax = 0x3902;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00B9); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	goto l__00B9;
l__00B9:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x1E) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00DE); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	goto l__00DE;
l__00DE:
	goto l__0102;
l__0102:
	emu_addw(&emu_sp, 0x6);
	goto l__0109;
l__0109:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_010B_002F_7FAE()
 *
 * @name f__176C_010B_002F_7FAE
 * @implements 176C:010B:002F:7FAE ()
 * @implements 176C:013A:0055:6C8A
 * @implements 176C:014F:0040:7270
 * @implements 176C:0166:0029:F66B
 * @implements 176C:017B:0014:5245
 * @implements 176C:018F:0113:0405
 * @implements 176C:01AA:00F8:FA80
 * @implements 176C:01BF:00E3:C733
 * @implements 176C:01D8:00CA:9CA5
 * @implements 176C:01ED:00B5:53EB
 * @implements 176C:0206:009C:C4F1
 * @implements 176C:021B:0087:F6C5
 * @implements 176C:0234:006E:13E8
 * @implements 176C:0249:0059:3F67
 * @implements 176C:0262:0040:5621
 * @implements 176C:0277:002B:0503
 * @implements 176C:0290:0012:9B52
 * @implements 176C:02A2:0006:558B
 * @implements 176C:02A8:000F:9BB6
 * @implements 176C:02B7:000A:2CB1
 * @implements 176C:02C1:0037:7973
 * @implements 176C:02F8:0039:0847
 * @implements 176C:0331:0014:B1B8
 * @implements 176C:0345:0011:5754
 * @implements 176C:0356:000A:1C0C
 * @implements 176C:0359:0007:36AE
 * @implements 176C:0360:000D:D0BA
 * @implements 176C:036D:0010:DF03
 * @implements 176C:037D:000E:7DC2
 * @implements 176C:038B:000F:CB1C
 * @implements 176C:039A:000D:9950
 * @implements 176C:03A7:0013:F833
 * @implements 176C:03BA:0031:621B
 * @implements 176C:03EB:0005:E1F7
 * @implements 176C:03F0:0023:D191
 * @implements 176C:0402:0011:2BE9
 * @implements 176C:0413:0011:5754
 * @implements 176C:0424:001F:6A65
 * @implements 176C:0427:001C:3F74
 * @implements 176C:042F:0014:F073
 * @implements 176C:0443:0020:60D4
 * @implements 176C:0463:0033:A1D5
 * @implements 176C:0466:0030:B284
 * @implements 176C:0496:001B:C865
 * @implements 176C:04A0:0011:B562
 * @implements 176C:04B1:001A:EC5B
 * @implements 176C:04B4:0017:CAF9
 * @implements 176C:04CB:001F:EDCB
 * @implements 176C:04CE:001C:D8DA
 * @implements 176C:04EA:0008:475C
 * @implements 176C:04F2:0016:FC92
 * @implements 176C:0508:000C:5826
 * @implements 176C:050B:0009:D18E
 * @implements 176C:0514:000E:EDA0
 * @implements 176C:0522:004F:CC5C
 * @implements 176C:0538:0039:2AA4
 * @implements 176C:0544:002D:282D
 * @implements 176C:0571:0090:E5FF
 * @implements 176C:05BD:0044:F2CF
 * @implements 176C:0601:005E:FA7A
 * @implements 176C:061B:0044:69AA
 * @implements 176C:063D:0022:E86D
 * @implements 176C:065F:000F:4F56
 * @implements 176C:066E:001C:F5FE
 * @implements 176C:068A:000E:C98D
 * @implements 176C:0696:0002:C43A
 * @implements 176C:0698:0011:6178
 * @implements 176C:06A0:0009:1116
 * @implements 176C:06A9:000E:2DCF
 * @implements 176C:06B7:0010:03D5
 * @implements 176C:06C7:0009:779A
 * @implements 176C:06D0:0029:3063
 * @implements 176C:06F9:0014:AFD4
 * @implements 176C:0700:000D:6A2B
 * @implements 176C:070D:0013:3361
 * @implements 176C:0713:000D:8DB9
 * @implements 176C:0720:0040:2E37
 * @implements 176C:0750:0010:F3D2
 * @implements 176C:0760:0008:E8CF
 * @implements 176C:0768:0018:7CF1
 * @implements 176C:077E:0002:C43A
 * @implements 176C:0780:0037:8F26
 * @implements 176C:0788:002F:3687
 * @implements 176C:07B7:0016:E5D0
 * @implements 176C:07C3:000A:B112
 * @implements 176C:07CD:0015:AED4
 * @implements 176C:07CF:0013:3C19
 * @implements 176C:07E2:0006:F7CE
 *
 * Called From: 0642:03C2:0005:BF6B
 */
void f__176C_010B_002F_7FAE()
{
l__010B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__013A;
	goto l__07E2;
l__013A:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6272);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6270);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__0166;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__0166;
	}
	goto l__014F;
l__014F:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x3);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x6272) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6270) = emu_dx;
	emu_si = 0x1;
	goto l__0166;
l__0166:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6276);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6274);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__01AA;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__01AA;
	}
	goto l__017B;
l__017B:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x018F); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	goto l__018F;
l__018F:
	emu_addw(&emu_sp, 0x8);
	emu_cwd();
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ds, 0x00, 0x6276) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x6274) = emu_cx;
	emu_di = 0x1;
	goto l__01AA;
l__01AA:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x627A);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6278);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__01D8;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__01D8;
	}
	goto l__01BF;
l__01BF:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x3);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x627A) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6278) = emu_dx;
	goto l__01D8;
l__01D8:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x627E);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x627C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__0206;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__0206;
	}
	goto l__01ED;
l__01ED:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x14);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x627E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x627C) = emu_dx;
	goto l__0206;
l__0206:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6282);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6280);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__0234;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__0234;
	}
	goto l__021B;
l__021B:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x5);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x6282) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6280) = emu_dx;
	goto l__0234;
l__0234:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6286);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6284);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__0262;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__0262;
	}
	goto l__0249;
l__0249:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x5);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x6286) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6284) = emu_dx;
	goto l__0262;
l__0262:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x628A);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6288);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__0290;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__0290;
	}
	goto l__0277;
l__0277:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x3C);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x628A) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6288) = emu_dx;
	goto l__0290;
l__0290:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__02A2;
l__02A2:
	emu_addw(&emu_sp, 0x8);
	goto l__07CF;
l__02A8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) == 0) goto l__02B7;
	goto l__07C3;
l__02B7:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__02C1;
	goto l__07C3;
l__02C1:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x626A);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_get_memory16(emu_ds, 0x00, 0x3950) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x394E) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x626E) = 0x2D07;
	emu_get_memory16(emu_ds, 0x00, 0x626C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	goto l__02F8;
l__02F8:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x394C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x394A) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) == 0x0) goto l__0359;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == 0x0) goto l__0359;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x40);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x40) == 0) goto l__0359;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_push(emu_cs); emu_push(0x0331); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__0331;
l__0331:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0345); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__0345;
l__0345:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x0356); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__0356;
l__0356:
	emu_addw(&emu_sp, 0xA);
	goto l__0359;
l__0359:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0360;
	goto l__042F;
l__0360:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x036D); emu_cs = 0x1A34; f__1A34_2134_001E_3E9A();
	goto l__036D;
l__036D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x51), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x51) != 0x0) goto l__037D;
	goto l__042F;
l__037D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__038B;
	goto l__0427;
l__038B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x8000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x8000) == 0) goto l__039A;
	goto l__0427;
l__039A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_push(emu_cs); emu_push(0x03A7); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	goto l__03A7;
l__03A7:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__03F0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_push(emu_cs); emu_push(0x03BA); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	goto l__03BA;
l__03BA:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x4) goto l__03F0;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_push(emu_cs); emu_push(0x03EB); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__03EB;
l__03EB:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	goto l__0402;
l__03F0:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x49));
	goto l__0402;
l__0402:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0413); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__0413;
l__0413:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x0424); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__0424;
l__0424:
	emu_addw(&emu_sp, 0xA);
	goto l__0427;
l__0427:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_decb(&emu_get_memory8(emu_es, emu_bx, 0x51));
	goto l__042F;
l__042F:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0466;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x1A34; f__1A34_1F55_0019_98DF();
	goto l__0443;
l__0443:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x40);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x40) == 0) goto l__0466;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x0463); emu_cs = 0x1A34; f__1A34_1F55_0019_98DF();
	goto l__0463;
l__0463:
	emu_addw(&emu_sp, 0x6);
	goto l__0466;
l__0466:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) goto l__04B4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6E), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x6E) == 0x0) goto l__04B4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_decb(&emu_get_memory8(emu_es, emu_bx, 0x6E));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x6E), 0x1);
	if ((emu_get_memory8(emu_es, emu_bx, 0x6E) & 0x1) == 0) goto l__0496;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x800);
	goto l__04A0;
l__0496:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xF7FF);
	goto l__04A0;
l__04A0:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__04B1;
l__04B1:
	emu_addw(&emu_sp, 0x6);
	goto l__04B4;
l__04B4:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) == 0x0) goto l__04CE;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x04CB); emu_cs = 0x1A34; f__1A34_193F_0013_FA4D();
	goto l__04CB;
l__04CB:
	emu_addw(&emu_sp, 0x6);
	goto l__04CE;
l__04CE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__050B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x04EA); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__04EA;
l__04EA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04F2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
	goto l__04F2;
l__04F2:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__050B;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0508); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__0508;
l__0508:
	emu_addw(&emu_sp, 0x6);
	goto l__050B;
l__050B:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) != 0x0) goto l__0514;
	goto l__06A0;
l__0514:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x70), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x70) == 0x0) goto l__0522;
	goto l__0698;
l__0522:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6A), 0x0);
		if (emu_get_memory8(emu_es, emu_bx, 0x6A) != 0x0) goto l__0544;
	}
	goto l__0538;
l__0538:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x8) == 0) goto l__05BD;
	goto l__0544;
l__0544:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6D), 0x0);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x6D) < (int8)0x0) goto l__05BD;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0571); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__0571;
l__0571:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3E);
	emu_bx = 0x5;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x70) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x8) != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_get_memory16(emu_es, emu_bx, 0x70) = 0x3;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6D), 0x20);
		if ((int8)emu_get_memory8(emu_es, emu_bx, 0x6D) > (int8)0x20) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
			emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFF7);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
			emu_get_memory8(emu_es, emu_bx, 0x6D) = 0x0;
		}
	}
	goto l__05BD;
l__05BD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x1);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x1) goto l__061B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) goto l__061B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6D), 0x0);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x6D) < (int8)0x0) goto l__061B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0601); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__0601;
l__0601:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x8;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_bx = 0x5;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x70) = emu_ax;
	goto l__061B;
l__061B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__0696;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x5);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x5) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
		if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x8) == 0) goto l__066E;
	}
	goto l__063D;
l__063D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x6D), 0x3F);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0x6D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x065F); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__065F;
l__065F:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x70) = 0x4;
	goto l__0696;
l__066E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6D), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x6D) == 0x0) goto l__0696;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x068A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__068A;
l__068A:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x6D) = 0x0;
	goto l__0696;
l__0696:
	goto l__06A0;
l__0698:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x70));
	goto l__06A0;
l__06A0:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) != 0x0) goto l__06A9;
	goto l__0788;
l__06A9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x10), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x10) == 0x0) goto l__06B7;
	goto l__0780;
l__06B7:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06C7); emu_cs = 0x15C2; f__15C2_0526_000F_EA1E();
	goto l__06C7;
l__06C7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__06D0;
	goto l__077E;
l__06D0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x800);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x800) != 0) goto l__0700;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x06F9); emu_cs = 0x07D4; f__07D4_196B_0073_56C1();
	goto l__06F9;
l__06F9:
	emu_addw(&emu_sp, 0xC);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__070D;
	goto l__0700;
l__0700:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3944);
	emu_dx = 0x5;
	emu_imuluw(&emu_ax, emu_dx);
	emu_get_memory16(emu_ds, 0x00, 0x3948) = emu_ax;
	goto l__0713;
l__070D:
	emu_get_memory16(emu_ds, 0x00, 0x3948) = 0x1;
	goto l__0713;
l__0713:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_get_memory16(emu_es, emu_bx, 0x24) = emu_ax;
	goto l__0768;
l__0720:
	emu_get_memory16(emu_ds, 0x00, 0x37A4) = 0x0;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x37A2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1D);
	emu_ax = (int8)emu_al;
	emu_dx = 0xF;
	emu_subw(&emu_dx, emu_ax);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x37A8));
	if ((int16)emu_dx > (int16)emu_get_memory16(emu_ds, 0x00, 0x37A8)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x1D);
		emu_ax = (int8)emu_al;
		emu_dx = 0xF;
		emu_subw(&emu_dx, emu_ax);
		emu_get_memory16(emu_ds, 0x00, 0x37A8) = emu_dx;
	}
	goto l__0750;
l__0750:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0760); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	goto l__0760;
l__0760:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0768;
	goto l__077E;
l__0768:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3948);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x3948));
	emu_orw(&emu_ax, emu_ax);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x10), 0x0);
		if (emu_get_memory16(emu_es, emu_bx, 0x10) == 0x0) goto l__0720;
	}
	goto l__077E;
l__077E:
	goto l__0788;
l__0780:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x10));
	goto l__0788;
l__0788:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x50), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x50) == 0xFF) goto l__07C3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x49);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4B));
	if (emu_ax != 0) goto l__07C3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x50);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs);
	emu_push(0x07B7); f__176C_000E_000E_633D();
	goto l__07B7;
l__07B7:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x50) = 0xFF;
	goto l__07C3;
l__07C3:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07CD); emu_cs = 0x0FE4; emu_Unit_FindNext();
	goto l__07CD;
l__07CD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__07CF;
l__07CF:
	emu_get_memory16(emu_ds, 0x00, 0x626A) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x6268) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x626A));
	if (emu_ax == 0) goto l__07E2;
	goto l__02A8;
l__07E2:
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
 * Decompiled function f__176C_0858_0023_E780()
 *
 * @name f__176C_0858_0023_E780
 * @implements 176C:0858:0023:E780 ()
 * @implements 176C:087B:0005:84EE
 * @implements 176C:0880:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_0858_0023_E780()
{
l__0858:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x087B); emu_cs = 0x1A34; f__1A34_350F_0021_9B04();
	goto l__087B;
l__087B:
	emu_addw(&emu_sp, 0x6);
	goto l__0880;
l__0880:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_0882_0014_0C6A()
 *
 * @name f__176C_0882_0014_0C6A
 * @implements 176C:0882:0014:0C6A ()
 * @implements 176C:0896:000D:9150
 * @implements 176C:08A3:0009:5312
 * @implements 176C:08AC:0008:133E
 * @implements 176C:08B4:0008:D336
 * @implements 176C:08BC:000D:F112
 * @implements 176C:08C9:002C:6C7F
 * @implements 176C:08F5:000D:F932
 * @implements 176C:0902:003C:5819
 * @implements 176C:093E:0018:57AE
 * @implements 176C:0956:0012:2597
 * @implements 176C:0968:0010:0DA8
 * @implements 176C:0978:0012:0E45
 * @implements 176C:0984:0006:BC27
 * @implements 176C:0987:0003:5C2D
 * @implements 176C:09A8:0018:9FF3
 * @implements 176C:09C0:000D:B934
 * @implements 176C:09CD:000D:819D
 * @implements 176C:09DA:0015:CD26
 * @implements 176C:09EF:0018:247E
 * @implements 176C:0A07:0008:45F1
 * @implements 176C:0A0F:0010:0D90
 * @implements 176C:0A1F:0039:07D4
 * @implements 176C:0A58:0006:888B
 * @implements 176C:0A7F:000F:3D0A
 * @implements 176C:0A8E:0018:34CB
 * @implements 176C:0AA6:0009:3ADE
 * @implements 176C:0AAF:000D:F571
 * @implements 176C:0ABC:0008:77A0
 * @implements 176C:0AC4:0011:2B8C
 * @implements 176C:0AD5:000F:6094
 * @implements 176C:0AE4:000A:860D
 * @implements 176C:0AEE:0023:4B7B
 * @implements 176C:0B11:0020:7404
 * @implements 176C:0B14:001D:FC9E
 * @implements 176C:0B31:0021:373B
 * @implements 176C:0B52:0011:575D
 * @implements 176C:0B63:0046:5A28
 * @implements 176C:0BA9:000F:7600
 * @implements 176C:0BB5:0003:6393
 * @implements 176C:0BB8:0002:C03A
 * @implements 176C:0BBA:0005:6206
 * @implements 176C:0BBF:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_0882_0014_0C6A()
{
l__0882:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0896;
	goto l__0BBA;
l__0896:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x08A3); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	goto l__08A3;
l__08A3:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) goto l__08AC;
	goto l__0A7F;
l__08AC:
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__08B4;
	/* Unresolved jump */ emu_ip = 0x0A7C; emu_last_cs = 0x176C; emu_last_ip = 0x08B1; emu_last_length = 0x0008; emu_last_crc = 0x133E; emu_call();
l__08B4:
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__08BC;
	goto l__0A7F;
l__08BC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x08C9); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	goto l__08C9;
l__08C9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xB) goto l__08F5;
	goto l__09A8;
l__08F5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x1);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == 0x1) goto l__0902;
	/* Unresolved jump */ emu_ip = 0x098C; emu_last_cs = 0x176C; emu_last_ip = 0x08FF; emu_last_length = 0x000D; emu_last_crc = 0xF932; emu_call();
l__0902:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFEFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x58) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x093E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__093E;
l__093E:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0956); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	goto l__0956;
l__0956:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0968); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	goto l__0968;
l__0968:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0978); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__0978;
l__0978:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	goto l__0984;
l__0984:
	emu_ax = 0x1;
	goto l__0987;
l__0987:
	goto l__0BBF;
l__09A8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == 0x0) goto l__09CD;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x10) != 0) goto l__09C0;
	/* Unresolved jump */ emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09BD; emu_last_length = 0x0018; emu_last_crc = 0x9FF3; emu_call();
l__09C0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x1);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == 0x1) goto l__09CD;
	/* Unresolved jump */ emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09CA; emu_last_length = 0x000D; emu_last_crc = 0xB934; emu_call();
l__09CD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__09DA;
	/* Unresolved jump */ emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09D7; emu_last_length = 0x000D; emu_last_crc = 0x819D; emu_call();
l__09DA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09EF); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	goto l__09EF;
l__09EF:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A07); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__0A07;
l__0A07:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A0F); emu_cs = 0x1A34; f__1A34_2C95_001B_89A2();
	goto l__0A0F;
l__0A0F:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0A1F); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__0A1F;
l__0A1F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFEFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x58) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A58); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__0A58;
l__0A58:
	emu_addw(&emu_sp, 0x6);
	goto l__0984;
l__0A7F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A8E); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__0A8E;
l__0A8E:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0AA6); emu_cs = 0x0F3F; emu_Tile_Center();
	goto l__0AA6;
l__0AA6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AAF); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__0AAF;
l__0AAF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0ABC); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0F8B_0015_1689();
	goto l__0ABC;
l__0ABC:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0AC4;
	goto l__0BB8;
l__0AC4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0AD5); emu_cs = 0x0F3F; emu_Tile_Center();
	goto l__0AD5;
l__0AD5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0AE4); emu_cs = 0x1A34; f__1A34_2958_0013_3A47();
	goto l__0AE4;
l__0AE4:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0AEE;
	goto l__0BB8;
l__0AEE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0B14;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B11); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	goto l__0B11;
l__0B11:
	emu_addw(&emu_sp, 0x6);
	goto l__0B14;
l__0B14:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0B31); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__0B31;
l__0B31:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0B52); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__0B52;
l__0B52:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0B63); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	goto l__0B63;
l__0B63:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0BB5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFEFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0BA9); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__0BA9;
l__0BA9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	goto l__0BB5;
l__0BB5:
	goto l__0984;
l__0BB8:
	goto l__0BBA;
l__0BBA:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0987;
l__0BBF:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_0BC3_002A_A6DE()
 *
 * @name f__176C_0BC3_002A_A6DE
 * @implements 176C:0BC3:002A:A6DE ()
 * @implements 176C:0BED:000D:9150
 * @implements 176C:0BFA:0009:D33D
 * @implements 176C:0C03:0008:9224
 * @implements 176C:0C0B:000D:F112
 * @implements 176C:0C18:0014:84D5
 * @implements 176C:0C2C:0017:BC9C
 * @implements 176C:0C43:001A:6D30
 * @implements 176C:0C5D:0045:05CB
 * @implements 176C:0CA2:0024:C63E
 * @implements 176C:0CA5:0021:6EB7
 * @implements 176C:0CC6:0008:A673
 * @implements 176C:0CCE:000C:69E6
 * @implements 176C:0CDA:0015:6485
 * @implements 176C:0CEF:0015:42E9
 * @implements 176C:0D04:0018:47A5
 * @implements 176C:0D1C:0008:375A
 * @implements 176C:0D24:0012:9ABF
 * @implements 176C:0D36:001B:0C57
 * @implements 176C:0D40:0011:B562
 * @implements 176C:0D51:0009:3877
 * @implements 176C:0D57:0003:9C30
 * @implements 176C:0D5C:000D:8532
 * @implements 176C:0D69:000F:C9B4
 * @implements 176C:0D78:000D:5110
 * @implements 176C:0D85:0015:D31C
 * @implements 176C:0D9A:001D:9C4C
 * @implements 176C:0DB7:000E:DA27
 * @implements 176C:0DC5:0006:D728
 * @implements 176C:0DCB:001C:A05B
 * @implements 176C:0DE7:0048:EED5
 * @implements 176C:0E1E:0011:1026
 * @implements 176C:0E2F:0002:DB3A
 * @implements 176C:0E31:0041:189F
 * @implements 176C:0E58:001A:6BE3
 * @implements 176C:0E67:000B:166D
 * @implements 176C:0E72:0013:9D76
 * @implements 176C:0E74:0011:D640
 * @implements 176C:0E85:000B:7C6A
 * @implements 176C:0E90:001D:190A
 * @implements 176C:0EAD:002A:9574
 * @implements 176C:0EAF:0028:0318
 * @implements 176C:0ED7:000E:44F7
 * @implements 176C:0EE5:0011:8A0E
 * @implements 176C:0EF6:0013:75C0
 * @implements 176C:0F09:0008:9B67
 * @implements 176C:0F11:000F:9658
 * @implements 176C:0F20:001B:0C57
 * @implements 176C:0F3B:0018:FF7D
 * @implements 176C:0F53:0017:D921
 * @implements 176C:0F6A:0008:375A
 * @implements 176C:0F72:0023:12BA
 * @implements 176C:0F93:0002:C13A
 * @implements 176C:0F95:0002:C03A
 * @implements 176C:0F97:0005:A21A
 * @implements 176C:0F9C:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_0BC3_002A_A6DE()
{
l__0BC3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__0BED;
	goto l__0F97;
l__0BED:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x0BFA); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	goto l__0BFA;
l__0BFA:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__0C03;
	goto l__0D78;
l__0C03:
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__0C0B;
	goto l__0F95;
l__0C0B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x0C18); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	goto l__0C18;
l__0C18:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x2);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == 0x2) goto l__0C2C;
	goto l__0D5C;
l__0C2C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x100);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0C43); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__0C43;
l__0C43:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C5D); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__0C5D;
l__0C5D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0CA5;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0CA2); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	goto l__0CA2;
l__0CA2:
	emu_addw(&emu_sp, 0x6);
	goto l__0CA5;
l__0CA5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x5A);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5C));
	if (emu_ax == 0) goto l__0CDA;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x5C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x5A));
	emu_push(emu_cs); emu_push(0x0CC6); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__0CC6;
l__0CC6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CCE); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__0CCE;
l__0CCE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	goto l__0D40;
l__0CDA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__0D40;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0CEF); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__0CEF;
l__0CEF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0D40;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x0D04); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__0D04;
l__0D04:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0D1C); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__0D1C;
l__0D1C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D24); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_08E7_002B_DC75();
	goto l__0D24;
l__0D24:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0D36); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__0D36;
l__0D36:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	goto l__0D40;
l__0D40:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D51); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__0D51;
l__0D51:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__0D57;
l__0D57:
	goto l__0F9C;
l__0D5C:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0D69); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__0D69;
l__0D69:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	goto l__0F97;
l__0D78:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x0D85); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	goto l__0D85;
l__0D85:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) != 0) goto l__0D9A;
	goto l__0F97;
l__0D9A:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_xorw(&emu_di, emu_di);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x0DB7); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__0DB7;
l__0DB7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0DC5); emu_cs = 0x1082; emu_Building_FindFirst();
	goto l__0DC5;
l__0DC5:
	emu_addw(&emu_sp, 0x8);
	goto l__0E74;
l__0DCB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0DE7); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	goto l__0DE7;
l__0DE7:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__0E31;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xC);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0xC) goto l__0E2F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) goto l__0E2F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x26) != 0x0) goto l__0E2F;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) >= (int16)emu_di) { /* Unresolved jump */ emu_ip = 0x0E2D; emu_last_cs = 0x176C; emu_last_ip = 0x0E1C; emu_last_length = 0x0048; emu_last_crc = 0xEED5; emu_call(); return; }
	}
	goto l__0E1E;
l__0E1E:
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	goto l__0E85;
l__0E2F:
	goto l__0E67;
l__0E31:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0xD) goto l__0E67;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) goto l__0E67;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x26) != 0x0) goto l__0E67;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) >= (int16)emu_di) goto l__0E67;
	}
	goto l__0E58;
l__0E58:
	emu_di = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	goto l__0E67;
l__0E67:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0E72); emu_cs = 0x1082; emu_Building_FindNext();
	goto l__0E72;
l__0E72:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0E74;
l__0E74:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0E85;
	goto l__0DCB;
l__0E85:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__0E90;
	goto l__0F93;
l__0E90:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A0C)) goto l__0EAF;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3A0A)) goto l__0EAF;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0EAD); emu_cs = 0x1A34; f__1A34_0F48_0018_0DB8();
	goto l__0EAD;
l__0EAD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0EAF;
l__0EAF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x100);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ED7); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__0ED7;
l__0ED7:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0EE5); emu_cs = 0x1A34; f__1A34_2AAA_000D_A3E6();
	goto l__0EE5;
l__0EE5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0EF6); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__0EF6;
l__0EF6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0F09); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__0F09;
l__0F09:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F11); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
	goto l__0F11;
l__0F11:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0F20); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	goto l__0F20;
l__0F20:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F3B); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__0F3B;
l__0F3B:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__0F93;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0F53); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__0F53;
l__0F53:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0F6A); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__0F6A;
l__0F6A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F72); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_08E7_002B_DC75();
	goto l__0F72;
l__0F72:
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
		emu_xorw(&emu_ax, emu_ax);
		emu_xorw(&emu_dx, emu_dx);
		emu_get_memory16(emu_es, emu_bx, 0x60) = emu_ax;
		emu_get_memory16(emu_es, emu_bx, 0x5E) = emu_dx;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
		emu_get_memory16(emu_es, emu_bx, 0x5C) = emu_ax;
		emu_get_memory16(emu_es, emu_bx, 0x5A) = emu_dx;
	}
	goto l__0F93;
l__0F93:
	goto l__0F97;
l__0F95:
	goto l__0F97;
l__0F97:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0D57;
l__0F9C:
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
 * Decompiled function f__176C_0FA2_0013_6D6D()
 *
 * @name f__176C_0FA2_0013_6D6D
 * @implements 176C:0FA2:0013:6D6D ()
 * @implements 176C:0FB5:0014:1DEB
 * @implements 176C:0FC9:0007:F90C
 * @implements 176C:0FD0:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_0FA2_0013_6D6D()
{
l__0FA2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x0FB5); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	goto l__0FB5;
l__0FB5:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FC9); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__0FC9;
l__0FC9:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0FD0;
l__0FD0:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_0FD2_001F_B15D()
 *
 * @name f__176C_0FD2_001F_B15D
 * @implements 176C:0FD2:001F:B15D ()
 * @implements 176C:0FF1:000E:4A08
 * @implements 176C:0FF3:000C:4AC2
 * @implements 176C:0FFF:001B:252E
 * @implements 176C:1002:0018:1AF9
 * @implements 176C:101A:001F:713B
 * @implements 176C:101E:001B:955B
 * @implements 176C:1039:0013:A51E
 * @implements 176C:104C:000F:5B17
 * @implements 176C:105B:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_0FD2_001F_B15D()
{
l__0FD2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__0FF1;
	emu_ax = emu_si;
	goto l__0FF3;
l__0FF1:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0FF3;
l__0FF3:
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFF);
	if ((int16)emu_si >= (int16)0xFF) goto l__0FFF;
	emu_ax = emu_si;
	goto l__1002;
l__0FFF:
	emu_ax = 0xFF;
	goto l__1002;
l__1002:
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x200) == 0) goto l__101E;
	emu_ax = 0xC0;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x101A); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0129_0028_FB8E();
	goto l__101A;
l__101A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	goto l__101E;
l__101E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x4) { /* Unresolved jump */ emu_ip = 0x103E; emu_last_cs = 0x176C; emu_last_ip = 0x1027; emu_last_length = 0x001B; emu_last_crc = 0x955B; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1039); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	goto l__1039;
l__1039:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x104C); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	goto l__104C;
l__104C:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6A);
	emu_ah = 0x0;
	goto l__105B;
l__105B:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_105E_0031_8B3F()
 *
 * @name f__176C_105E_0031_8B3F
 * @implements 176C:105E:0031:8B3F ()
 * @implements 176C:108F:0007:F90C
 * @implements 176C:1096:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_105E_0031_8B3F()
{
l__105E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x16);
	emu_negb(&emu_al, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x6D) = emu_al;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x108F); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__108F;
l__108F:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__1096;
l__1096:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1098_0021_667D()
 *
 * @name f__176C_1098_0021_667D
 * @implements 176C:1098:0021:667D ()
 * @implements 176C:10B9:001A:65A9
 * @implements 176C:10D3:0018:D147
 * @implements 176C:10EB:0010:E151
 * @implements 176C:10FB:0010:D1EF
 * @implements 176C:110B:000E:633F
 * @implements 176C:1119:0010:4ECA
 * @implements 176C:1129:0010:FEEC
 * @implements 176C:1139:0012:4512
 * @implements 176C:114B:0011:73D1
 * @implements 176C:115C:000E:25D4
 * @implements 176C:115E:000C:17FE
 * @implements 176C:116A:000E:5A3C
 * @implements 176C:116C:000C:6816
 * @implements 176C:1178:000E:ADD5
 * @implements 176C:117A:000C:97FF
 * @implements 176C:1186:0015:D5F9
 * @implements 176C:1188:0013:A1AD
 * @implements 176C:119B:001F:9F0A
 * @implements 176C:11BA:000F:87A7
 * @implements 176C:11C6:0003:DD1F
 * @implements 176C:11C9:0008:DA89
 * @implements 176C:11D1:0011:5E38
 * @implements 176C:11E2:001C:41F2
 * @implements 176C:11FE:0022:B914
 * @implements 176C:1220:001C:8822
 * @implements 176C:1223:0019:7B9A
 * @implements 176C:123C:0019:CAAD
 * @implements 176C:123F:0016:35F1
 * @implements 176C:1255:0015:ADBE
 * @implements 176C:126A:0010:E384
 * @implements 176C:127A:0018:BABE
 * @implements 176C:1292:0017:28E6
 * @implements 176C:1295:0014:2D96
 * @implements 176C:12A9:001F:68BF
 * @implements 176C:12AC:001C:5DAE
 * @implements 176C:12C3:0005:E38B
 * @implements 176C:12C8:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1098_0021_667D()
{
l__1098:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x56);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) != 0x0) goto l__10B9;
	goto l__12AC;
l__10B9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x10D3); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__10D3;
l__10D3:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x10EB); emu_cs = 0x0F3F; emu_Tile_GetDistance();
	goto l__10EB;
l__10EB:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x80);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x16) < (int16)0x80) goto l__10FB;
	goto l__11D1;
l__10FB:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x110B); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	goto l__110B;
l__110B:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1119); emu_cs = 0x0F3F; emu_Tile_GetX();
	goto l__1119;
l__1119:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1129); emu_cs = 0x0F3F; emu_Tile_GetY();
	goto l__1129;
l__1129:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1139); emu_cs = 0x0F3F; emu_Tile_GetX();
	goto l__1139;
l__1139:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x114B); emu_cs = 0x0F3F; emu_Tile_GetY();
	goto l__114B;
l__114B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_di = emu_ax;
	emu_cmpw(&emu_si, 0x10);
	if ((int16)emu_si <= (int16)0x10) goto l__115C;
	emu_ax = 0x10;
	goto l__115E;
l__115C:
	emu_ax = emu_si;
	goto l__115E;
l__115E:
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFF0);
	if ((int16)emu_si >= (int16)0xFFF0) goto l__116A;
	emu_ax = 0xFFF0;
	goto l__116C;
l__116A:
	emu_ax = emu_si;
	goto l__116C;
l__116C:
	emu_si = emu_ax;
	emu_cmpw(&emu_di, 0x10);
	if ((int16)emu_di <= (int16)0x10) goto l__1178;
	emu_ax = 0x10;
	goto l__117A;
l__1178:
	emu_ax = emu_di;
	goto l__117A;
l__117A:
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0xFFF0);
	if ((int16)emu_di >= (int16)0xFFF0) goto l__1186;
	emu_ax = 0xFFF0;
	goto l__1188;
l__1186:
	emu_ax = emu_di;
	goto l__1188;
l__1188:
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_ax, emu_di);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x119B); emu_cs = 0x0F3F; emu_Tile_GetXY();
	goto l__119B;
l__119B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11BA); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__11BA;
l__11BA:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x20);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x16) >= (int16)0x20) goto l__11C9;
	emu_ax = 0x1;
	goto l__11C6;
l__11C6:
	goto l__12C8;
l__11C9:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x2;
	goto l__12AC;
l__11D1:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__11E2;
l__11E2:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x11FE); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__11FE;
l__11FE:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_subw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x14) >= (int16)0x0) goto l__1220;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_negw(&emu_ax, emu_ax);
	goto l__1223;
l__1220:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	goto l__1223;
l__1223:
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_cl = 0x3;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0xFF);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x18) >= (int16)0xFF) goto l__123C;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	goto l__123F;
l__123C:
	emu_ax = 0xFF;
	goto l__123F;
l__123F:
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x19;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x1255); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	goto l__1255;
l__1255:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_ax = 0xFF;
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x126A); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0129_0028_FB8E();
	goto l__126A;
l__126A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x127A); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	goto l__127A;
l__127A:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_cl = 0xA;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x10) <= (int16)0x1) goto l__1292;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	goto l__1295;
l__1292:
	emu_ax = 0x1;
	goto l__1295;
l__1295:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12A9); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__12A9;
l__12A9:
	emu_addw(&emu_sp, 0x6);
	goto l__12AC;
l__12AC:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
		emu_get_memory16(emu_es, emu_bx, 0xFFFE) = emu_ax;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x2);
	}
	goto l__12C3;
l__12C3:
	emu_xorw(&emu_ax, emu_ax);
	goto l__11C6;
l__12C8:
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
 * Decompiled function f__176C_12CE_0011_A5C5()
 *
 * @name f__176C_12CE_0011_A5C5
 * @implements 176C:12CE:0011:A5C5 ()
 * @implements 176C:12DF:0038:4D51
 * @implements 176C:1317:001E:37CF
 * @implements 176C:131A:001B:3D2F
 * @implements 176C:1335:0019:5069
 * @implements 176C:133D:0011:9DAE
 * @implements 176C:134E:002A:8194
 * @implements 176C:137B:0004:E839
 * @implements 176C:137F:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_12CE_0011_A5C5()
{
l__12CE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x12DF); emu_cs = 0x1A34; f__1A34_10EC_000E_A326();
	goto l__12DF;
l__12DF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__133D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_bx = 0x64;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x1);
	if ((int16)emu_si <= (int16)0x1) goto l__1317;
	emu_ax = emu_si;
	goto l__131A;
l__1317:
	emu_ax = 0x1;
	goto l__131A;
l__131A:
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1335;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8D37));
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x8CFF), emu_si);
	goto l__133D;
l__1335:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8D39));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x8CFF), emu_si);
	goto l__133D;
l__133D:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x134E); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
	goto l__134E;
l__134E:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__137B;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x12C;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1378); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	/* Unresolved jump */ emu_ip = 0x1378; emu_last_cs = 0x176C; emu_last_ip = 0x1378; emu_last_length = 0x002A; emu_last_crc = 0x8194; emu_call();
l__137B:
	emu_xorw(&emu_ax, emu_ax);
	goto l__137F;
l__137F:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1382_0013_AA74()
 *
 * @name f__176C_1382_0013_AA74
 * @implements 176C:1382:0013:AA74 ()
 * @implements 176C:1395:002F:7128
 * @implements 176C:13C4:0007:F96C
 * @implements 176C:13CB:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1382_0013_AA74()
{
l__1382:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1395); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__1395;
l__1395:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x13C4); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	goto l__13C4;
l__13C4:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	goto l__13CB;
l__13CB:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1458_0023_356A()
 *
 * @name f__176C_1458_0023_356A
 * @implements 176C:1458:0023:356A ()
 * @implements 176C:1476:0005:DE9C
 * @implements 176C:1478:0003:DF08
 * @implements 176C:147B:0006:83CE
 * @implements 176C:1481:0007:CDCF
 * @implements 176C:1488:0010:E9C6
 * @implements 176C:1498:0020:094B
 * @implements 176C:149A:001E:8979
 * @implements 176C:14B8:0008:A673
 * @implements 176C:14C0:002C:0682
 * @implements 176C:14D4:0018:3AE7
 * @implements 176C:14EC:0005:C66E
 * @implements 176C:14F1:002D:4995
 * @implements 176C:151E:0002:D33A
 * @implements 176C:1520:0026:43BF
 * @implements 176C:1546:0002:C6BA
 * @implements 176C:1548:0013:C8FF
 * @implements 176C:1555:0006:53C6
 * @implements 176C:155B:000C:2379
 * @implements 176C:1567:0007:1E5C
 * @implements 176C:156E:0013:7ED5
 * @implements 176C:1581:0014:7898
 * @implements 176C:1584:0011:D011
 * @implements 176C:1595:0006:63E5
 * @implements 176C:159B:0015:35C1
 * @implements 176C:15B0:001A:064D
 * @implements 176C:15CA:0017:0BB3
 * @implements 176C:15E1:001C:DDE4
 * @implements 176C:15FD:0027:EF5D
 * @implements 176C:1600:0024:F13A
 * @implements 176C:1613:0011:8B85
 * @implements 176C:161E:0006:53C6
 * @implements 176C:1624:000C:43CF
 * @implements 176C:1630:0032:F434
 * @implements 176C:1659:0009:B073
 * @implements 176C:1662:007D:0891
 * @implements 176C:16AF:0030:9605
 * @implements 176C:16C5:001A:A0DB
 * @implements 176C:16D1:000E:D3B3
 * @implements 176C:16DF:0007:64B7
 * @implements 176C:16E6:0010:64F9
 * @implements 176C:16F6:0009:D7CB
 * @implements 176C:16FF:0023:1E72
 * @implements 176C:1722:0011:EC1A
 * @implements 176C:1733:000E:1BB6
 * @implements 176C:1741:0021:1B31
 * @implements 176C:1762:0018:40AE
 * @implements 176C:177A:0014:1EEB
 * @implements 176C:178E:003E:0F49
 * @implements 176C:17CC:0013:7B96
 * @implements 176C:17CF:0010:68C7
 * @implements 176C:17DF:001B:7578
 * @implements 176C:17E9:0011:66A4
 * @implements 176C:17FA:0017:CD04
 * @implements 176C:1811:0021:E595
 * @implements 176C:1832:001D:2885
 * @implements 176C:184F:0014:9267
 * @implements 176C:1863:0005:85EE
 * @implements 176C:1866:0002:C13A
 * @implements 176C:186A:000B:2CC1
 * @implements 176C:1875:0020:D3D2
 * @implements 176C:1895:003D:E794
 * @implements 176C:18D2:000D:6F50
 * @implements 176C:18DD:0002:C4BA
 * @implements 176C:18DF:000E:B62B
 * @implements 176C:18E8:0005:517D
 * @implements 176C:18ED:0025:D2E2
 * @implements 176C:1912:0009:84F0
 * @implements 176C:191B:0003:60B6
 * @implements 176C:191E:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1458_0023_356A()
{
l__1458:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x26);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x54);
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__147B;
	goto l__1476;
l__1476:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1478;
l__1478:
	goto l__191E;
l__147B:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1481); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__1481;
l__1481:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1488;
	goto l__1476;
l__1488:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__1498;
	emu_ax = 0x1;
	goto l__149A;
l__1498:
	emu_xorw(&emu_ax, emu_ax);
	goto l__149A;
l__149A:
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x0) goto l__14D4;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x14B8); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__14B8;
l__14B8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14C0); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__14C0;
l__14C0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if (emu_di == emu_get_memory16(emu_ss, emu_bp, -0x1E)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_get_memory16(emu_es, emu_bx, 0x54) = 0x0;
	}
	goto l__14D4;
l__14D4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), emu_di);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == emu_di) goto l__14F1;
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x1A34; f__1A34_1A66_0011_34D4();
	goto l__14EC;
l__14EC:
	emu_addw(&emu_sp, 0x6);
	goto l__1476;
l__14F1:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x0) goto l__1548;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x40);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x40) == 0) goto l__1520;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x67);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x65), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x65) == 0x0) goto l__151E;
	goto l__1476;
l__151E:
	goto l__1546;
l__1520:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__1546;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x62), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x62) == 0x0) goto l__1546;
	goto l__1476;
l__1546:
	goto l__1555;
l__1548:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	goto l__1555;
l__1555:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x155B); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	goto l__155B;
l__155B:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) goto l__1584;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x167E; f__167E_0162_000D_A6D2();
	goto l__1567;
l__1567:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x156E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
	goto l__156E;
l__156E:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__1584;
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1581); emu_cs = 0x1A34; f__1A34_1A66_0011_34D4();
	goto l__1581;
l__1581:
	emu_addw(&emu_sp, 0x6);
	goto l__1584;
l__1584:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x51);
	emu_ah = 0x0;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1595;
	goto l__191B;
l__1595:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x159B); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__159B;
l__159B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x15B0); emu_cs = 0x167E; f__167E_0319_0010_B56F();
	goto l__15B0;
l__15B0:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_cl = 0x8;
	emu_shlw(&emu_ax, emu_cl);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x14)) goto l__15CA;
	goto l__191B;
l__15CA:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x15E1); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__15E1;
l__15E1:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x12) >= (int16)0x0) goto l__15FD;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_negw(&emu_ax, emu_ax);
	goto l__1600;
l__15FD:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	goto l__1600;
l__1600:
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) {
		emu_cl = 0x3;
		emu_sarw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_cl);
	}
	goto l__1613;
l__1613:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x0) {
		emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	}
	goto l__161E;
l__161E:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1624); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	goto l__1624;
l__1624:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__1659;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1630); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	goto l__1630;
l__1630:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) {
		emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	}
	goto l__1659;
l__1659:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x8);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x12) < (int16)0x8) goto l__1662;
	goto l__191B;
l__1662:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x52);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x58);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x56);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x400);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x400) != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_push(emu_es);
		emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x626C));
		emu_ax = emu_get_memory16(emu_es, emu_si, 0x10);
		emu_sarw(&emu_ax, 0x1);
		emu_pop(&emu_es);
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
		if ((int16)emu_get_memory16(emu_es, emu_bx, 0xE) > (int16)emu_ax) {
			emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x1;
		}
	}
	goto l__16AF;
l__16AF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x3);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x3) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x5);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x5) goto l__16D1;
	}
	goto l__16C5;
l__16C5:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x200);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x14) > (int16)0x200) {
		emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x16;
	}
	goto l__16D1;
l__16D1:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_subw(&emu_bx, 0x13);
	emu_cmpw(&emu_bx, 0x6);
	if (emu_bx <= 0x6) goto l__16DF;
	/* Unresolved jump */ emu_ip = 0x1868; emu_last_cs = 0x176C; emu_last_ip = 0x16DC; emu_last_length = 0x000E; emu_last_crc = 0xD3B3; emu_call();
l__16DF:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1924);
	switch (emu_ip) {
		case 0x16E6: goto l__16E6;
		case 0x17DF: goto l__17DF;
		case 0x17E9: goto l__17E9;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x176C; emu_last_ip = 0x16E1; emu_last_length = 0x0007; emu_last_crc = 0x64B7;
			emu_call();
			return;
	}
l__16E6:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16F6); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__16F6;
l__16F6:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x16FF); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	goto l__16FF;
l__16FF:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1743; emu_last_cs = 0x176C; emu_last_ip = 0x170C; emu_last_length = 0x0023; emu_last_crc = 0x1E72; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x20) = 0xFFFF;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1722); emu_cs = 0x1A34; f__1A34_379B_0015_B07B();
	goto l__1722;
l__1722:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1733); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
	goto l__1733;
l__1733:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1741); emu_cs = 0x1A34; f__1A34_10EC_000E_A326();
	goto l__1741;
l__1741:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_push(emu_cs); emu_push(0x1762); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	goto l__1762;
l__1762:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x3F;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x177A); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	goto l__177A;
l__177A:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x178E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__178E;
l__178E:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_decb(&emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_dx;
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0xC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x1);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x58) >= (int8)0x1) goto l__17CF;
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs);
	emu_push(0x17CC); f__176C_000E_000E_633D();
	goto l__17CC;
l__17CC:
	emu_addw(&emu_sp, 0x6);
	goto l__17CF;
l__17CF:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x626A);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__186A;
l__17DF:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax);
	goto l__17E9;
l__17E9:
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x17FA); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__17FA;
l__17FA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1811); emu_cs = 0x1A34; f__1A34_24FE_002F_672A();
	goto l__1811;
l__1811:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__1866;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1832); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__1832;
l__1832:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x4D) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x184F); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	goto l__184F;
l__184F:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1863); emu_cs = 0x1A34; f__1A34_193F_0013_FA4D();
	goto l__1863;
l__1863:
	emu_addw(&emu_sp, 0x6);
	goto l__1866;
l__1866:
	goto l__186A;
l__186A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__1875;
	goto l__191B;
l__1875:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4E);
	emu_shlw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1895); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	goto l__1895;
l__1895:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x51) = emu_al;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) goto l__18DF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_xorw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x10) == 0) goto l__18DD;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18D2); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	goto l__18D2;
l__18D2:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x51) = emu_al;
	goto l__18DD;
l__18DD:
	goto l__18E8;
l__18DF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFEF);
	goto l__18E8;
l__18E8:
	emu_push(emu_cs); emu_push(0x18ED); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__18ED;
l__18ED:
	emu_andb(&emu_al, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x51);
	emu_addb(&emu_dl, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x51) = emu_dl;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1912); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__1912;
l__1912:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__1478;
l__191B:
	goto l__1476;
l__191E:
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
 * Decompiled function f__176C_1932_0029_D0CC()
 *
 * @name f__176C_1932_0029_D0CC
 * @implements 176C:1932:0029:D0CC ()
 * @implements 176C:195B:000F:3B67
 * @implements 176C:196A:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1932_0029_D0CC()
{
l__1932:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x195B); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__195B;
l__195B:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	goto l__196A;
l__196A:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_196C_0027_D87A()
 *
 * @name f__176C_196C_0027_D87A
 * @implements 176C:196C:0027:D87A ()
 * @implements 176C:198D:0006:3D03
 * @implements 176C:1990:0003:DD09
 * @implements 176C:1993:0011:A7DD
 * @implements 176C:19A4:0015:3A13
 * @implements 176C:19A6:0013:3B87
 * @implements 176C:19B9:000A:73C5
 * @implements 176C:19C3:000D:EF7A
 * @implements 176C:19D0:0020:1A9C
 * @implements 176C:19D8:0018:6478
 * @implements 176C:19F0:0007:A5CF
 * @implements 176C:19F7:0008:380B
 * @implements 176C:19FF:0014:B1B8
 * @implements 176C:1A13:001C:19A0
 * @implements 176C:1A2F:0006:C894
 * @implements 176C:1A35:0005:E321
 * @implements 176C:1A3A:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_196C_0027_D87A()
{
l__196C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__1993;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x49);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4B));
	if (emu_ax == 0) goto l__1993;
	goto l__198D;
l__198D:
	emu_ax = 0x1;
	goto l__1990;
l__1990:
	goto l__1A3A;
l__1993:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x40);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x40) == 0) goto l__19A4;
	emu_ax = 0x1;
	goto l__19A6;
l__19A4:
	emu_xorw(&emu_ax, emu_ax);
	goto l__19A6;
l__19A6:
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__19C3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x65), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x65) == 0x0) goto l__19B9;
	goto l__198D;
l__19B9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x67);
	goto l__19D8;
l__19C3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x62), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x62) == 0x0) goto l__19D0;
	goto l__198D;
l__19D0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	goto l__19D8;
l__19D8:
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x54);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x19F0); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__19F0;
l__19F0:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__19F7;
	goto l__1A35;
l__19F7:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x19FF); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__19FF;
l__19FF:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1A13); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__1A13;
l__1A13:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_si == emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__1A35;
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1A2F); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__1A2F;
l__1A2F:
	emu_addw(&emu_sp, 0xA);
	goto l__198D;
l__1A35:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1990;
l__1A3A:
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
 * Decompiled function f__176C_1A40_0020_8DC9()
 *
 * @name f__176C_1A40_0020_8DC9
 * @implements 176C:1A40:0020:8DC9 ()
 * @implements 176C:1A60:000B:311C
 * @implements 176C:1A6B:001E:596A
 * @implements 176C:1A89:0005:832E
 * @implements 176C:1A9A:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1A40_0020_8DC9()
{
l__1A40:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A60); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__1A60;
l__1A60:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1A8E; emu_last_cs = 0x176C; emu_last_ip = 0x1A63; emu_last_length = 0x000B; emu_last_crc = 0x311C; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A6B); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__1A6B;
l__1A6B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1A89); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__1A89;
l__1A89:
	emu_addw(&emu_sp, 0x8);
	goto l__1A9A;
l__1A9A:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1A9F_0024_813F()
 *
 * @name f__176C_1A9F_0024_813F
 * @implements 176C:1A9F:0024:813F ()
 * @implements 176C:1AC3:0016:C3C3
 * @implements 176C:1AD9:0022:3A4A
 * @implements 176C:1B1D:0002:C8BA
 * @implements 176C:1B1F:000E:16A7
 * @implements 176C:1B2D:0005:81EE
 * @implements 176C:1B30:0002:C53A
 * @implements 176C:1B32:000E:93EA
 * @implements 176C:1B3C:0004:E839
 * @implements 176C:1B40:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1A9F_0024_813F()
{
l__1A9F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__1B32;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AC3); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__1AC3;
l__1AC3:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1B32;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__1B1F;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AD9); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	goto l__1AD9;
l__1AD9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x1AFB; emu_last_cs = 0x176C; emu_last_ip = 0x1AE6; emu_last_length = 0x0022; emu_last_crc = 0x3A4A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_si;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x72) = 0xFF;
	goto l__1B1D;
l__1B1D:
	goto l__1B30;
l__1B1F:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1B2D); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
	goto l__1B2D;
l__1B2D:
	emu_addw(&emu_sp, 0x6);
	goto l__1B30;
l__1B30:
	goto l__1B3C;
l__1B32:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	goto l__1B3C;
l__1B3C:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1B40;
l__1B40:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1B45_0022_208C()
 *
 * @name f__176C_1B45_0022_208C
 * @implements 176C:1B45:0022:208C ()
 * @implements 176C:1B67:0014:1CF3
 * @implements 176C:1B6C:000F:B729
 * @implements 176C:1B78:0003:5D00
 * @implements 176C:1B7B:0006:67E5
 * @implements 176C:1B81:0014:B1B8
 * @implements 176C:1B95:001B:C960
 * @implements 176C:1BB0:0026:E434
 * @implements 176C:1BD6:0018:0010
 * @implements 176C:1BD9:0015:AA98
 * @implements 176C:1BEE:000E:CBCA
 * @implements 176C:1BFC:0004:DE52
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1B45_0022_208C()
{
l__1B45:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__1B6C;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B67); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__1B67;
l__1B67:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1B7B;
	goto l__1B6C;
l__1B6C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x54) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	goto l__1B78;
l__1B78:
	goto l__1BFC;
l__1B7B:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B81); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__1B81;
l__1B81:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1B95); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__1B95;
l__1B95:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x40);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x40) == 0) goto l__1BB0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x54) = emu_si;
	goto l__1BD9;
l__1BB0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_si;
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x54) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1BD6); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__1BD6;
l__1BD6:
	emu_addw(&emu_sp, 0xA);
	goto l__1BD9;
l__1BD9:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1BEE); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__1BEE;
l__1BEE:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x54);
	goto l__1B78;
l__1BFC:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1C00_003A_E6C7()
 *
 * @name f__176C_1C00_003A_E6C7
 * @implements 176C:1C00:003A:E6C7 ()
 * @implements 176C:1C36:0004:E139
 * @implements 176C:1C3A:000D:7589
 * @implements 176C:1C47:0005:F1EE
 * @implements 176C:1C4C:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1C00_003A_E6C7()
{
l__1C00:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1C3A;
	emu_cmpw(&emu_si, 0x5);
	if (emu_si != 0x5) goto l__1C3A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x50), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x50) == 0xFF) goto l__1C3A;
	goto l__1C36;
l__1C36:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1C4C;
l__1C3A:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs);
	emu_push(0x1C47); f__176C_000E_000E_633D();
	goto l__1C47;
l__1C47:
	emu_addw(&emu_sp, 0x6);
	goto l__1C36;
l__1C4C:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1C4F_0017_E375()
 *
 * @name f__176C_1C4F_0017_E375
 * @implements 176C:1C4F:0017:E375 ()
 * @implements 176C:1C66:0007:F90C
 * @implements 176C:1C6D:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1C4F_0017_E375()
{
l__1C4F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs);
	emu_push(0x1C66); f__176C_000E_000E_633D();
	goto l__1C66;
l__1C66:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__1C6D;
l__1C6D:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1C6F_001D_2E46()
 *
 * @name f__176C_1C6F_001D_2E46
 * @implements 176C:1C6F:001D:2E46 ()
 * @implements 176C:1C8C:0025:9AD8
 * @implements 176C:1CAB:0006:67E5
 * @implements 176C:1CB1:0030:808F
 * @implements 176C:1CE1:0011:5754
 * @implements 176C:1CF2:0005:856E
 * @implements 176C:1CF7:0004:E839
 * @implements 176C:1CFB:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1C6F_001D_2E46()
{
l__1C6F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1C8C); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__1C8C;
l__1C8C:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1CF7;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x49);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4B));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x8000);
		if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x8000) == 0) { /* Unresolved jump */ emu_ip = 0x1CBE; emu_last_cs = 0x176C; emu_last_ip = 0x1CA9; emu_last_length = 0x0025; emu_last_crc = 0x9AD8; emu_call(); return; }
	}
	goto l__1CAB;
l__1CAB:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1CB1); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__1CB1;
l__1CB1:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x4B) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x49) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1CE1); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__1CE1;
l__1CE1:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1CF2); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__1CF2;
l__1CF2:
	emu_addw(&emu_sp, 0xA);
	goto l__1CF7;
l__1CF7:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1CFB;
l__1CFB:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1CFE_0021_29C8()
 *
 * @name f__176C_1CFE_0021_29C8
 * @implements 176C:1CFE:0021:29C8 ()
 * @implements 176C:1D1F:0007:2700
 * @implements 176C:1D26:001C:20D8
 * @implements 176C:1D42:0007:59B8
 * @implements 176C:1D44:0005:59DD
 * @implements 176C:1D49:0011:A7DD
 * @implements 176C:1D5A:0004:9B39
 * @implements 176C:1D5C:0002:B33A
 * @implements 176C:1D5E:0015:6E8A
 * @implements 176C:1D73:0003:1D10
 * @implements 176C:1D76:000D:4158
 * @implements 176C:1D83:000F:8B05
 * @implements 176C:1D92:0005:BC21
 * @implements 176C:1D94:0003:DDB6
 * @implements 176C:1D97:000E:1C4C
 * @implements 176C:1DA5:000D:A25B
 * @implements 176C:1DB2:0003:5D00
 * @implements 176C:1DD5:000A:4B25
 * @implements 176C:1DDF:000B:97FD
 * @implements 176C:1DEA:0023:0DDB
 * @implements 176C:1E00:000D:B2F8
 * @implements 176C:1E0D:000D:CADA
 * @implements 176C:1E0F:000B:0748
 * @implements 176C:1E1A:000C:8FD9
 * @implements 176C:1E36:0005:B06F
 * @implements 176C:1E3B:000D:7848
 * @implements 176C:1E43:0005:67BF
 * @implements 176C:1E7B:0022:D1C1
 * @implements 176C:1E9D:0005:865C
 * @implements 176C:1E9F:0003:E208
 * @implements 176C:1EA2:0013:17AE
 * @implements 176C:1EB5:0005:E396
 * @implements 176C:1EB7:0003:E202
 * @implements 176C:1ECC:000E:0D6F
 * @implements 176C:1EDA:0011:AFFD
 * @implements 176C:1EEB:0005:63A1
 * @implements 176C:1EED:0003:6235
 * @implements 176C:1EF2:0004:68F2
 * @implements 176C:1EF6:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1CFE_0021_29C8()
{
l__1CFE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_cmpw(&emu_bx, 0x13);
	if (emu_bx <= 0x13) goto l__1D1F;
	/* Unresolved jump */ emu_ip = 0x1EF0; emu_last_cs = 0x176C; emu_last_ip = 0x1D1C; emu_last_length = 0x0021; emu_last_crc = 0x29C8; emu_call();
l__1D1F:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1EF9);
	switch (emu_ip) {
		case 0x1D26: goto l__1D26;
		case 0x1D49: goto l__1D49;
		case 0x1D5E: goto l__1D5E;
		case 0x1D76: goto l__1D76;
		case 0x1D97: goto l__1D97;
		case 0x1DA5: goto l__1DA5;
		case 0x1DD5: goto l__1DD5;
		case 0x1DDF: goto l__1DDF;
		case 0x1DEA: goto l__1DEA;
		case 0x1E1A: goto l__1E1A;
		case 0x1E3B: goto l__1E3B;
		case 0x1E7B: goto l__1E7B;
		case 0x1EA2: goto l__1EA2;
		case 0x1ECC: goto l__1ECC;
		case 0x1EDA: goto l__1EDA;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x176C; emu_last_ip = 0x1D21; emu_last_length = 0x0007; emu_last_crc = 0x2700;
			emu_call();
			return;
	}
l__1D26:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_dx = 0x1;
	emu_cl = emu_get_memory8(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__1D42;
	emu_ax = 0x1;
	goto l__1D44;
l__1D42:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1D44;
l__1D44:
	emu_si = emu_ax;
	goto l__1EF2;
l__1D49:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x40);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x40) == 0) goto l__1D5A;
	emu_ax = 0x1;
	goto l__1D5C;
l__1D5A:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1D5C;
l__1D5C:
	goto l__1D44;
l__1D5E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x1D73); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0155_002A_AC43();
	goto l__1D73;
l__1D73:
	goto l__1E36;
l__1D76:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x1D83); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__1D83;
l__1D83:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1D92;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x56);
	goto l__1D94;
l__1D92:
	emu_xorw(&emu_si, emu_si);
	goto l__1D94;
l__1D94:
	goto l__1EF2;
l__1D97:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_cl = 0x8;
	emu_shlw(&emu_ax, emu_cl);
	goto l__1D44;
l__1DA5:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1DB2); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__1DB2;
l__1DB2:
	goto l__1E36;
l__1DD5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	goto l__1E43;
l__1DDF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x54);
	goto l__1EF2;
l__1DEA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4D), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x4D) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__1E0F;
	}
	goto l__1E00;
l__1E00:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1E0D); emu_cs = 0x1A34; emu_Unit_FindBuilding();
	goto l__1E0D;
l__1E0D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__1E0F;
l__1E0F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x4D);
	goto l__1EF2;
l__1E1A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	goto l__1D44;
l__1E36:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__1D44;
l__1E3B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6B);
	goto l__1E43;
l__1E43:
	emu_ah = 0x0;
	goto l__1D44;
l__1E7B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x63);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_dh = 0x0;
	emu_subw(&emu_ax, emu_dx);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__1E9D;
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	goto l__1E9F;
l__1E9D:
	emu_ax = emu_si;
	goto l__1E9F;
l__1E9F:
	goto l__1D44;
l__1EA2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x49);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4B));
	if (emu_ax == 0) goto l__1EB5;
	emu_ax = 0x1;
	goto l__1EB7;
l__1EB5:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1EB7;
l__1EB7:
	goto l__1D44;
l__1ECC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x36);
	emu_andw(&emu_ax, 0x4);
	goto l__1D44;
l__1EDA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x200) == 0) goto l__1EEB;
	emu_ax = 0x1;
	goto l__1EED;
l__1EEB:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1EED;
l__1EED:
	goto l__1D44;
l__1EF2:
	emu_ax = emu_si;
	goto l__1EF6;
l__1EF6:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1F21_001C_8C6C()
 *
 * @name f__176C_1F21_001C_8C6C
 * @implements 176C:1F21:001C:8C6C ()
 * @implements 176C:1F3D:0011:CE3C
 * @implements 176C:1F4A:0004:68F2
 * @implements 176C:1F4E:0003:2E57
 *
 * Called From: 1319:00B3:000B:6FE3
 * Called From: 1319:0109:000B:6FD3
 * Called From: 1319:01BE:000B:6FD3
 * Called From: 1319:035B:000B:6FF3
 * Called From: 1319:0523:0006:FC3B
 * Called From: 1319:063A:0010:D054
 */
void f__176C_1F21_001C_8C6C()
{
l__1F21:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1F3D); emu_cs = 0x1A34; f__1A34_3146_0018_6887();
	goto l__1F3D;
l__1F3D:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) {
		emu_si = 0x100;
	}
	goto l__1F4A;
l__1F4A:
	emu_ax = emu_si;
	goto l__1F4E;
l__1F4E:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1F51_002F_CE9F()
 *
 * @name f__176C_1F51_002F_CE9F
 * @implements 176C:1F51:002F:CE9F ()
 * @implements 176C:1F80:0008:D020
 * @implements 176C:1F88:0008:F739
 * @implements 176C:1F90:0011:1BC3
 * @implements 176C:1FA1:000D:5C7A
 * @implements 176C:1FAE:0020:8494
 * @implements 176C:1FC9:0005:9C22
 * @implements 176C:1FCB:0003:9DB6
 * @implements 176C:1FCE:0013:2F1E
 * @implements 176C:1FE1:001E:A340
 * @implements 176C:1FFF:001C:EEB2
 * @implements 176C:201B:001F:0FEC
 * @implements 176C:201E:001C:7FD5
 * @implements 176C:203A:003D:C682
 * @implements 176C:2075:0002:D03A
 * @implements 176C:2077:0009:68BB
 * @implements 176C:2080:004D:941A
 * @implements 176C:2097:0036:E4C2
 * @implements 176C:20CD:0005:AD6E
 * @implements 176C:20D2:000D:565E
 * @implements 176C:20DF:0025:8BA8
 * @implements 176C:2104:0012:A12E
 * @implements 176C:2116:000C:BC69
 * @implements 176C:2122:0006:4202
 * @implements 176C:2128:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1F51_002F_CE9F()
{
l__1F51:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x49);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4B));
	if (emu_ax == 0) goto l__1F80;
	goto l__2122;
l__1F80:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1F88); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__1F88;
l__1F88:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1F90;
	goto l__2122;
l__1F90:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1FA1); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__1FA1;
l__1FA1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1FAE); emu_cs = 0x167E; f__167E_0162_000D_A6D2();
	goto l__1FAE;
l__1FAE:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_di != emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__1FCE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x72) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	goto l__1FC9;
l__1FC9:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1FCB;
l__1FCB:
	goto l__2128;
l__1FCE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x72);
	emu_ax = (int8)emu_al;
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__1FE1;
	goto l__2077;
l__1FE1:
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x176C;
	emu_push(emu_ax);
	emu_ax = 0x1F21;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x981E;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1FFF); emu_cs = 0x1319; f__1319_002D_0023_320C();
	goto l__1FFF;
l__1FFF:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xE);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x4) >= (int16)0xE) goto l__201B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	goto l__201E;
l__201B:
	emu_ax = 0xE;
	goto l__201E;
l__201E:
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_addw(&emu_ax, 0x72);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x203A); emu_cs = 0x01F7; emu_Tools_Memmove();
	goto l__203A;
l__203A:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x72), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x72) == 0xFF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x19) {
			emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
			emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
			emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
			emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
			emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
			emu_get_memory16(emu_es, emu_bx, 0x0) = 0x2D0;
		}
	}
	goto l__2075;
l__2075:
	goto l__2097;
l__2077:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2080); emu_cs = 0x0F3F; emu_Tile_GetDistanceOffset();
	goto l__2080;
l__2080:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xE);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0xE) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
		emu_get_memory8(emu_es, emu_bx, 0x72) = 0xFF;
	}
	goto l__2097;
l__2097:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x72);
	emu_ax = (int8)emu_al;
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__2122;
	emu_cl = 0x5;
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax == emu_si) goto l__20D2;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x20CD); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__20CD;
l__20CD:
	emu_addw(&emu_sp, 0xA);
	goto l__2122;
l__20D2:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x20DF); emu_cs = 0x1A34; f__1A34_167C_0015_AA25();
	goto l__20DF;
l__20DF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__2116;
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_addw(&emu_ax, 0x73);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_addw(&emu_ax, 0x72);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2104); emu_cs = 0x01F7; f__01F7_29B8_0016_B3E0();
	goto l__2104;
l__2104:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x7F) = 0xFF;
	emu_ax = 0x1;
	goto l__1FCB;
l__2116:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x72) = 0xFF;
	goto l__1FC9;
l__2122:
	emu_ax = 0x1;
	goto l__1FCB;
l__2128:
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
 * Decompiled function f__176C_212E_002E_9D89()
 *
 * @name f__176C_212E_002E_9D89
 * @implements 176C:212E:002E:9D89 ()
 * @implements 176C:215C:0011:BB28
 * @implements 176C:216D:001C:0800
 * @implements 176C:2189:0024:8100
 * @implements 176C:21E6:0005:7955
 * @implements 176C:21EB:0010:4D4C
 * @implements 176C:21FB:000E:DA27
 * @implements 176C:2209:0005:A22E
 * @implements 176C:220E:0015:1BD8
 * @implements 176C:2223:0015:0FEE
 * @implements 176C:2238:000B:9877
 * @implements 176C:2243:000C:1165
 * @implements 176C:225C:0013:F216
 * @implements 176C:226F:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_212E_002E_9D89()
{
l__212E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x215C); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__215C;
l__215C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x216D); emu_cs = 0x1A34; emu_Building_GetLinkedUnit();
	goto l__216D;
l__216D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == 0) goto l__21EB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_push(emu_cs); emu_push(0x2189); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	goto l__2189;
l__2189:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__21EB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) goto l__21EB;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x21AD); emu_cs = 0x0C10; f__0C10_013D_0016_8C5C();
	/* Unresolved jump */ emu_ip = 0x21AD; emu_last_cs = 0x176C; emu_last_ip = 0x21AD; emu_last_length = 0x0024; emu_last_crc = 0x8100; emu_call();
l__21E6:
	emu_ax = emu_si;
	goto l__226F;
l__21EB:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x21FB); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__21FB;
l__21FB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2209); emu_cs = 0x1082; emu_Building_FindFirst();
	goto l__2209;
l__2209:
	emu_addw(&emu_sp, 0x8);
	goto l__225C;
l__220E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) { /* Unresolved jump */ emu_ip = 0x224F; emu_last_cs = 0x176C; emu_last_ip = 0x2216; emu_last_length = 0x0015; emu_last_crc = 0x1BD8; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x2223); emu_cs = 0x0C10; f__0C10_013D_0016_8C5C();
	goto l__2223;
l__2223:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x224F; emu_last_cs = 0x176C; emu_last_ip = 0x2227; emu_last_length = 0x0015; emu_last_crc = 0x0FEE; emu_call(); return; }
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2238); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__2238;
l__2238:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2243); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
	goto l__2243;
l__2243:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_si;
	goto l__21E6;
l__225C:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__220E;
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x21E8; emu_last_cs = 0x176C; emu_last_ip = 0x226C; emu_last_length = 0x0013; emu_last_crc = 0xF216; emu_call();
l__226F:
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
 * Decompiled function f__176C_2275_001D_D22D()
 *
 * @name f__176C_2275_001D_D22D
 * @implements 176C:2275:001D:D22D ()
 * @implements 176C:229B:0003:D63A
 * @implements 176C:229E:000A:0725
 * @implements 176C:22A8:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2275_001D_D22D()
{
l__2275:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__229E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2292); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	/* Unresolved jump */ emu_ip = 0x2292; emu_last_cs = 0x176C; emu_last_ip = 0x2292; emu_last_length = 0x001D; emu_last_crc = 0xD22D; emu_call();
l__229B:
	emu_ax = (int8)emu_al;
	goto l__22A8;
l__229E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	goto l__229B;
l__22A8:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_22C4_0019_80C9()
 *
 * @name f__176C_22C4_0019_80C9
 * @implements 176C:22C4:0019:80C9 ()
 * @implements 176C:22DD:0009:3ADE
 * @implements 176C:22E6:000A:8EEA
 * @implements 176C:22F0:0012:5BD5
 * @implements 176C:2302:0008:5756
 * @implements 176C:230A:0013:714D
 * @implements 176C:231D:0033:026B
 * @implements 176C:2320:0030:556B
 * @implements 176C:2330:0020:5005
 * @implements 176C:2350:002F:540B
 * @implements 176C:235E:0021:D67F
 * @implements 176C:237F:0022:A116
 * @implements 176C:23A1:001D:4782
 * @implements 176C:23BE:0008:6F72
 * @implements 176C:23C6:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_22C4_0019_80C9()
{
l__22C4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x22DD); emu_cs = 0x0F3F; emu_Tile_Center();
	goto l__22DD;
l__22DD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x22E6); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__22E6;
l__22E6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x22F0); emu_cs = 0x151A; f__151A_0114_0022_0B6C();
	goto l__22F0;
l__22F0:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2302); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__2302;
l__2302:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x230A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
	goto l__230A;
l__230A:
	emu_pop(&emu_cx);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A4C), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A4C) == 0x0) goto l__231D;
	emu_xorw(&emu_ax, emu_ax);
	goto l__2320;
l__231D:
	emu_ax = 0x1;
	goto l__2320;
l__2320:
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x20), 0x1);
	if (emu_get_memory16(emu_es, emu_bx, 0x20) == 0x1) {
		emu_addw(&emu_si, 0x2);
	}
	goto l__2330;
l__2330:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4A), 0x3);
	if (emu_get_memory16(emu_es, emu_bx, 0x4A) != 0x3) goto l__2350;
	emu_ax = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x80);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x33C8;
	goto l__235E;
l__2350:
	emu_ax = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0xC0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x33C8;
	goto l__235E;
l__235E:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xFC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x237F); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__237F;
l__237F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x23A1); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__23A1;
l__23A1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x23BE); emu_cs = 0x151A; f__151A_000E_0013_5840();
	goto l__23BE;
l__23BE:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x1;
	goto l__23C6;
l__23C6:
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
 * Decompiled function f__176C_23CC_000B_4119()
 *
 * @name f__176C_23CC_000B_4119
 * @implements 176C:23CC:000B:4119 ()
 * @implements 176C:23D7:000D:9466
 * @implements 176C:23E4:0005:517D
 * @implements 176C:23E9:001A:7B69
 * @implements 176C:2403:001C:C4D0
 * @implements 176C:241F:003D:580D
 * @implements 176C:245C:0008:4D72
 * @implements 176C:2462:0002:C23A
 * @implements 176C:2464:0004:9539
 * @implements 176C:2468:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_23CC_000B_4119()
{
l__23CC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_cs); emu_push(0x23D7); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__23D7;
l__23D7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_ax < emu_get_memory16(emu_es, emu_bx, 0xE)) goto l__23E4;
	goto l__2464;
l__23E4:
	emu_push(emu_cs); emu_push(0x23E9); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__23E9;
l__23E9:
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2403); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	goto l__2403;
l__2403:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x241F); emu_cs = 0x1A34; emu_Unit_Create();
	goto l__241F;
l__241F:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2464;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x59);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x59) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x245C); f__176C_000E_000E_633D();
	goto l__245C;
l__245C:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__2462;
l__2462:
	goto l__2468;
l__2464:
	emu_xorw(&emu_ax, emu_ax);
	goto l__2462;
l__2468:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_246C_0015_C163()
 *
 * @name f__176C_246C_0015_C163
 * @implements 176C:246C:0015:C163 ()
 * @implements 176C:2481:0013:8302
 * @implements 176C:2496:0003:DD0C
 * @implements 176C:2499:000F:7512
 * @implements 176C:24A8:000E:AD4A
 * @implements 176C:24B6:0010:16F6
 * @implements 176C:24C6:002D:83BF
 * @implements 176C:24F3:0010:1142
 * @implements 176C:2503:000B:7D3A
 * @implements 176C:250E:0020:614B
 * @implements 176C:252E:000B:9475
 * @implements 176C:2539:000E:3D36
 * @implements 176C:2547:0005:E326
 * @implements 176C:254C:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_246C_0015_C163()
{
l__246C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x2481); emu_cs = 0x0C10; f__0C10_013D_0016_8C5C();
	goto l__2481;
l__2481:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__2499;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x2494); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	/* Unresolved jump */ emu_ip = 0x2494; emu_last_cs = 0x176C; emu_last_ip = 0x2494; emu_last_length = 0x0013; emu_last_crc = 0x8302; emu_call();
l__2496:
	goto l__254C;
l__2499:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x100);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x100) != 0) goto l__24A8;
	goto l__2547;
l__24A8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x59), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x59) == 0x0) goto l__24B6;
	goto l__2547;
l__24B6:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x24C6); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__24C6;
l__24C6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x24F3); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__24F3;
l__24F3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2503); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__2503;
l__2503:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x250E); emu_cs = 0x1A34; f__1A34_2BB5_0025_30B8();
	goto l__250E;
l__250E:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2547;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x252E); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__252E;
l__252E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2539); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
	goto l__2539;
l__2539:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_si;
	emu_ax = emu_di;
	goto l__2496;
l__2547:
	emu_xorw(&emu_ax, emu_ax);
	goto l__2496;
l__254C:
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
 * Decompiled function f__176C_2552_0019_4894()
 *
 * @name f__176C_2552_0019_4894
 * @implements 176C:2552:0019:4894 ()
 * @implements 176C:256B:002F:8944
 * @implements 176C:259A:0006:8EF0
 * @implements 176C:259C:0004:E839
 * @implements 176C:25A0:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2552_0019_4894()
{
l__2552:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x26);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__259C;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x256B); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	goto l__256B;
l__256B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__259C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x0) goto l__259C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x259A); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__259A;
l__259A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__259C;
l__259C:
	emu_xorw(&emu_ax, emu_ax);
	goto l__25A0;
l__25A0:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_25A5_002C_AC04()
 *
 * @name f__176C_25A5_002C_AC04
 * @implements 176C:25A5:002C:AC04 ()
 * @implements 176C:25D1:000E:DA27
 * @implements 176C:25DF:0005:9A2E
 * @implements 176C:25E4:002D:1FC4
 * @implements 176C:2611:0004:549F
 * @implements 176C:2613:0002:CFBA
 * @implements 176C:2615:000B:166D
 * @implements 176C:2620:0014:5438
 * @implements 176C:2622:0012:CF1D
 * @implements 176C:2634:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_25A5_002C_AC04()
{
l__25A5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x25D1); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__25D1;
l__25D1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x25DF); emu_cs = 0x1082; emu_Building_FindFirst();
	goto l__25DF;
l__25DF:
	emu_addw(&emu_sp, 0x8);
	goto l__2622;
l__25E4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) goto l__2615;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__2615;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x26) != 0x0) goto l__2615;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2611); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__2611;
l__2611:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2613;
l__2613:
	goto l__2634;
l__2615:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2620); emu_cs = 0x1082; emu_Building_FindNext();
	goto l__2620;
l__2620:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2622;
l__2622:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__25E4;
	emu_xorw(&emu_ax, emu_ax);
	goto l__2613;
l__2634:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_2638_0017_CF4B()
 *
 * @name f__176C_2638_0017_CF4B
 * @implements 176C:2638:0017:CF4B ()
 * @implements 176C:2671:000C:1FEB
 * @implements 176C:267D:0010:0742
 * @implements 176C:268D:001A:8FC8
 * @implements 176C:26A7:000D:A042
 * @implements 176C:26B4:0010:DEE5
 * @implements 176C:26C4:0007:F90C
 * @implements 176C:26CB:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2638_0017_CF4B()
{
l__2638:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x1) goto l__2671;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x264F); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	/* Unresolved jump */ emu_ip = 0x264F; emu_last_cs = 0x176C; emu_last_ip = 0x264F; emu_last_length = 0x0017; emu_last_crc = 0xCF4B; emu_call();
l__2671:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x267D); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__267D;
l__267D:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x268D); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__268D;
l__268D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_ax = 0x13;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x26A7); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__26A7;
l__26A7:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x26B4); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	goto l__26B4;
l__26B4:
	emu_addw(&emu_sp, 0x10);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x26C4); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	goto l__26C4;
l__26C4:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__26CB;
l__26CB:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_26CD_0010_041C()
 *
 * @name f__176C_26CD_0010_041C
 * @implements 176C:26CD:0010:041C ()
 * @implements 176C:26DD:0006:8EF0
 * @implements 176C:26E3:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_26CD_0010_041C()
{
l__26CD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x26DD); emu_cs = 0x1A34; f__1A34_2B18_0011_E4D5();
	goto l__26DD;
l__26DD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__26E3;
l__26E3:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_26E5_0013_FF24()
 *
 * @name f__176C_26E5_0013_FF24
 * @implements 176C:26E5:0013:FF24 ()
 * @implements 176C:26F8:000E:BD09
 * @implements 176C:2706:0011:1BC3
 * @implements 176C:2717:000A:0E78
 * @implements 176C:2721:0012:03F6
 * @implements 176C:272E:0005:517D
 * @implements 176C:2733:002F:9271
 * @implements 176C:2762:001C:0B18
 * @implements 176C:2779:0005:517D
 * @implements 176C:277E:000F:C618
 * @implements 176C:278D:0006:8870
 * @implements 176C:278F:0004:EEB9
 * @implements 176C:2791:0002:C6BA
 * @implements 176C:2793:0002:C13A
 * @implements 176C:2795:0002:BC3A
 * @implements 176C:2797:0002:C13A
 * @implements 176C:2799:0002:BA3A
 * @implements 176C:279B:0005:AD7A
 * @implements 176C:27A0:0004:DE52
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_26E5_0013_FF24()
{
l__26E5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x10) goto l__26F8;
	goto l__2799;
l__26F8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x64);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x58) < (int8)0x64) goto l__2706;
	goto l__2799;
l__2706:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2717); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__2717;
l__2717:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2721); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
	goto l__2721;
l__2721:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x8);
	if (emu_si != 0x8) {
		emu_cmpw(&emu_si, 0x9);
		if (emu_si != 0x9) goto l__2795;
	}
	goto l__272E;
l__272E:
	emu_push(emu_cs); emu_push(0x2733); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__2733;
l__2733:
	emu_andb(&emu_al, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_addb(&emu_dl, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x58) = emu_dl;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x100);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2762); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__2762;
l__2762:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x64);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x58) > (int8)0x64) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_get_memory8(emu_es, emu_bx, 0x58) = 0x64;
	}
	goto l__2779;
l__2779:
	emu_push(emu_cs); emu_push(0x277E); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__277E;
l__277E:
	emu_testw(&emu_ax, 0x1F);
	if ((emu_ax & 0x1F) != 0) goto l__2793;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x278D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0AFA_0011_D5DB();
	goto l__278D;
l__278D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__278F;
l__278F:
	emu_xorw(&emu_ax, emu_ax);
	goto l__2791;
l__2791:
	goto l__27A0;
l__2793:
	goto l__2797;
l__2795:
	goto l__278F;
l__2797:
	goto l__279B;
l__2799:
	goto l__278F;
l__279B:
	emu_ax = 0x1;
	goto l__2791;
l__27A0:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_27A4_0021_7EE9()
 *
 * @name f__176C_27A4_0021_7EE9
 * @implements 176C:27A4:0021:7EE9 ()
 * @implements 176C:27C5:0009:5D1A
 * @implements 176C:27CE:000E:27C3
 * @implements 176C:27DC:0006:72E7
 * @implements 176C:27E2:000B:2AA2
 * @implements 176C:27E7:0006:7D05
 * @implements 176C:27EA:0003:9D0F
 * @implements 176C:27ED:000D:8210
 * @implements 176C:27FA:0016:9F64
 * @implements 176C:2810:0017:D1B6
 * @implements 176C:2827:0008:DBCF
 * @implements 176C:282F:0011:B905
 * @implements 176C:289F:0005:E325
 * @implements 176C:28A8:0003:62AF
 * @implements 176C:28AB:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_27A4_0021_7EE9()
{
l__27A4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x27C5); emu_cs = 0x167E; f__167E_00B7_0034_F3DA();
	goto l__27C5;
l__27C5:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x27CE); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	goto l__27CE;
l__27CE:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__27DC;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) { /* Unresolved jump */ emu_ip = 0x2840; emu_last_cs = 0x176C; emu_last_ip = 0x27D7; emu_last_length = 0x000E; emu_last_crc = 0x27C3; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x28A6; emu_last_cs = 0x176C; emu_last_ip = 0x27D9; emu_last_length = 0x000E; emu_last_crc = 0x27C3; emu_call();
l__27DC:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x27E2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0F8B_0015_1689();
	goto l__27E2;
l__27E2:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__27ED;
	goto l__27E7;
l__27E7:
	emu_ax = 0x1;
	goto l__27EA;
l__27EA:
	goto l__28AB;
l__27ED:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x27FA); emu_cs = 0x1A34; emu_Building_GetLinkedUnit();
	goto l__27FA;
l__27FA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x283E; emu_last_cs = 0x176C; emu_last_ip = 0x2808; emu_last_length = 0x0016; emu_last_crc = 0x9F64; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2810); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__2810;
l__2810:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x2827); emu_cs = 0x1A34; f__1A34_0E2E_0015_7E65();
	goto l__2827;
l__2827:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__282F;
	goto l__289F;
l__282F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xC) = 0xFFFF;
	emu_get_memory16(emu_es, emu_bx, 0xA) = 0xFFFF;
	goto l__28A8;
l__289F:
	emu_xorw(&emu_ax, emu_ax);
	goto l__27EA;
l__28A8:
	goto l__27E7;
l__28AB:
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
 * Decompiled function f__176C_28B1_0024_58C9()
 *
 * @name f__176C_28B1_0024_58C9
 * @implements 176C:28B1:0024:58C9 ()
 * @implements 176C:28D5:0008:C487
 * @implements 176C:28DD:001D:FB78
 * @implements 176C:28FA:000A:CB50
 * @implements 176C:2904:0008:A673
 * @implements 176C:290C:0004:581F
 * @implements 176C:2916:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_28B1_0024_58C9()
{
l__28B1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x28D5); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	goto l__28D5;
l__28D5:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__28DD;
	/* Unresolved jump */ emu_ip = 0x2910; emu_last_cs = 0x176C; emu_last_ip = 0x28DB; emu_last_length = 0x0008; emu_last_crc = 0xC487; emu_call();
l__28DD:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x28FA); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	goto l__28FA;
l__28FA:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2904); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__2904;
l__2904:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x290C); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__290C;
l__290C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2916;
l__2916:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_291A_0010_8A93()
 *
 * @name f__176C_291A_0010_8A93
 * @implements 176C:291A:0010:8A93 ()
 * @implements 176C:292A:001C:964A
 * @implements 176C:2946:000A:F53E
 * @implements 176C:2950:001B:65D6
 * @implements 176C:296B:000D:0B78
 * @implements 176C:296E:000A:DF3C
 * @implements 176C:2978:0009:B8CC
 * @implements 176C:2981:000C:0854
 * @implements 176C:2984:0009:23D4
 * @implements 176C:298D:000E:0610
 * @implements 176C:299B:0005:846E
 * @implements 176C:299E:0002:C13A
 * @implements 176C:29A2:0004:E839
 * @implements 176C:29A6:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_291A_0010_8A93()
{
l__291A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x292A); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	goto l__292A;
l__292A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3C);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__2946;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__296E;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__296E;
	/* Unresolved jump */ emu_ip = 0x29A0; emu_last_cs = 0x176C; emu_last_ip = 0x2944; emu_last_length = 0x001C; emu_last_crc = 0x964A; emu_call();
l__2946:
	emu_cmpw(&emu_si, 0x8);
	if ((int16)emu_si <= (int16)0x8) goto l__296E;
	emu_push(emu_cs); emu_push(0x2950); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__2950;
l__2950:
	emu_andb(&emu_al, 0x3F);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x6D) = emu_al;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x296B); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__296B;
l__296B:
	emu_addw(&emu_sp, 0x6);
	goto l__296E;
l__296E:
	emu_cmpw(&emu_si, 0x2);
	if ((int16)emu_si > (int16)0x2) goto l__299E;
	emu_push(emu_cs); emu_push(0x2978); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__2978;
l__2978:
	emu_testw(&emu_ax, 0x1);
	if ((emu_ax & 0x1) == 0) goto l__2981;
	emu_xorw(&emu_ax, emu_ax);
	goto l__2984;
l__2981:
	emu_ax = 0x1;
	goto l__2984;
l__2984:
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x298D); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__298D;
l__298D:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x299B); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__299B;
l__299B:
	emu_addw(&emu_sp, 0xA);
	goto l__299E;
l__299E:
	goto l__29A2;
l__29A2:
	emu_xorw(&emu_ax, emu_ax);
	goto l__29A6;
l__29A6:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_29A9_003A_8DEF()
 *
 * @name f__176C_29A9_003A_8DEF
 * @implements 176C:29A9:003A:8DEF ()
 * @implements 176C:29E3:000E:DA27
 * @implements 176C:29F1:0005:B42E
 * @implements 176C:29F6:003A:2332
 * @implements 176C:2A30:0026:C654
 * @implements 176C:2A3D:0019:4CA8
 * @implements 176C:2A4B:000B:166D
 * @implements 176C:2A56:0028:B0C0
 * @implements 176C:2A58:0026:E972
 * @implements 176C:2A7E:0012:04F6
 * @implements 176C:2A90:0010:A4E6
 * @implements 176C:2AA0:0008:4D72
 * @implements 176C:2AAC:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_29A9_003A_8DEF()
{
l__29A9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x29E3); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__29E3;
l__29E3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x29F1); emu_cs = 0x1082; emu_Building_FindFirst();
	goto l__29F1;
l__29F1:
	emu_addw(&emu_sp, 0x8);
	goto l__2A58;
l__29F6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) goto l__2A4B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__2A4B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x26) != 0x0) goto l__2A4B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2A30); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	goto l__2A30;
l__2A30:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, emu_si);
	if ((int16)emu_di >= (int16)emu_si) {
		emu_orw(&emu_si, emu_si);
		if (emu_si != 0) goto l__2A4B;
	}
	goto l__2A3D;
l__2A3D:
	emu_si = emu_di;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	goto l__2A4B;
l__2A4B:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2A56); emu_cs = 0x1082; emu_Building_FindNext();
	goto l__2A56;
l__2A56:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2A58;
l__2A58:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__29F6;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x2AA8; emu_last_cs = 0x176C; emu_last_ip = 0x2A6C; emu_last_length = 0x0026; emu_last_crc = 0xE972; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs);
	emu_push(0x2A7E); f__176C_000E_000E_633D();
	goto l__2A7E;
l__2A7E:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2A90); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__2A90;
l__2A90:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2AA0); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
	goto l__2AA0;
l__2AA0:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__2AAC;
l__2AAC:
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
 * Decompiled function f__176C_2AB2_0021_82CD()
 *
 * @name f__176C_2AB2_0021_82CD
 * @implements 176C:2AB2:0021:82CD ()
 * @implements 176C:2AD3:0014:B34A
 * @implements 176C:2AE7:0009:3796
 * @implements 176C:2AF0:0019:4CEF
 * @implements 176C:2B09:0010:CBE1
 * @implements 176C:2B19:0013:3522
 * @implements 176C:2B2C:001B:CD26
 * @implements 176C:2B2D:001A:0D2E
 * @implements 176C:2B32:0015:D16B
 * @implements 176C:2B7C:0002:CA3A
 * @implements 176C:2B7E:000D:5697
 * @implements 176C:2B8B:0007:C449
 * @implements 176C:2B92:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2AB2_0021_82CD()
{
l__2AB2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2AD3); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	goto l__2AD3;
l__2AD3:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2AE7); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__2AE7;
l__2AE7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__2B2D;
l__2AF0:
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x628C));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2B09); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__2B09;
l__2B09:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2B19); emu_cs = 0x0C3A; f__0C3A_0009_0029_BF94();
	goto l__2B19;
l__2B19:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2B2C;
	goto l__2B32;
l__2B2C:
	emu_incw(&emu_si);
	goto l__2B2D;
l__2B2D:
	emu_cmpw(&emu_si, 0x4);
	if ((int16)emu_si < (int16)0x4) goto l__2AF0;
	goto l__2B32;
l__2B32:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__2B7E;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2B47); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	/* Unresolved jump */ emu_ip = 0x2B47; emu_last_cs = 0x176C; emu_last_ip = 0x2B47; emu_last_length = 0x0015; emu_last_crc = 0xD16B; emu_call();
l__2B7C:
	goto l__2B92;
l__2B7E:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2B8B); emu_cs = 0x1A34; f__1A34_10EC_000E_A326();
	goto l__2B8B;
l__2B8B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__2B7C;
l__2B92:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_2B97_0013_B226()
 *
 * @name f__176C_2B97_0013_B226
 * @implements 176C:2B97:0013:B226 ()
 * @implements 176C:2BAA:001F:5AB6
 * @implements 176C:2BC9:0004:591F
 * @implements 176C:2BCB:0002:C23A
 * @implements 176C:2BCD:0004:9539
 * @implements 176C:2BD1:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2B97_0013_B226()
{
l__2B97:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2BAA); emu_cs = 0x1A34; f__1A34_15F4_0026_EDA4();
	goto l__2BAA;
l__2BAA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2BCD;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2BC9); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__2BC9;
l__2BC9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2BCB;
l__2BCB:
	goto l__2BD1;
l__2BCD:
	emu_xorw(&emu_ax, emu_ax);
	goto l__2BCB;
l__2BD1:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_2BD5_0014_2C56()
 *
 * @name f__176C_2BD5_0014_2C56
 * @implements 176C:2BD5:0014:2C56 ()
 * @implements 176C:2BE9:000A:4B0F
 * @implements 176C:2BF3:001F:0151
 * @implements 176C:2C12:0022:0EC9
 * @implements 176C:2C52:0004:E439
 * @implements 176C:2C54:0002:CC3A
 * @implements 176C:2C56:0005:A97A
 * @implements 176C:2C5D:000D:8532
 * @implements 176C:2C6A:0004:291F
 * @implements 176C:2C6E:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2BD5_0014_2C56()
{
l__2BD5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x2BE9); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	goto l__2BE9;
l__2BE9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2BF3); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
	goto l__2BF3;
l__2BF3:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2C5D;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2C12); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__2C12;
l__2C12:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x26));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x26)) { /* Unresolved jump */ emu_ip = 0x2C2E; emu_last_cs = 0x176C; emu_last_ip = 0x2C1B; emu_last_length = 0x0022; emu_last_crc = 0x0EC9; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	if (emu_al == emu_get_memory8(emu_es, emu_bx, 0x8)) goto l__2C56;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2C34); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	/* Unresolved jump */ emu_ip = 0x2C34; emu_last_cs = 0x176C; emu_last_ip = 0x2C34; emu_last_length = 0x0022; emu_last_crc = 0x0EC9; emu_call();
l__2C52:
	emu_xorw(&emu_ax, emu_ax);
	goto l__2C54;
l__2C54:
	goto l__2C6E;
l__2C56:
	emu_ax = 0x1;
	goto l__2C54;
l__2C5D:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x2C6A); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__2C6A;
l__2C6A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2C52;
l__2C6E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_7E2C_0030_42B8()
 *
 * @name f__176C_7E2C_0030_42B8
 * @implements 176C:7E2C:0030:42B8 ()
 * @implements 176C:7E55:0007:D4FE
 * @implements 176C:7E5C:0022:7E35
 * @implements 176C:7E7E:0012:C53A
 * @implements 176C:7E90:0017:F7B8
 * @implements 176C:7EA7:000D:017E
 * @implements 176C:7EB4:0031:E88B
 * @implements 176C:7EE5:0012:B53A
 * @implements 176C:7EF7:000D:017E
 * @implements 176C:7F04:0009:8823
 * @implements 176C:7F1A:0002:2597
 *
 * Called From: 176C:6E5C:0010:4C3C
 * Called From: 176C:800E:0021:1C0F
 */
void f__176C_7E2C_0030_42B8()
{
l__7E2C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != 0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
			if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) goto l__7E5C;
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
			emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
			emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
			if (emu_ax != 0) goto l__7E5C;
		}
	}
	goto l__7E55;
l__7E55:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__7F1A;
l__7E5C:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x7E7E); emu_cs = 0x01F7; f__01F7_2562_0026_6AD7();
	goto l__7E7E;
l__7E7E:
	emu_addw(&emu_sp, 0x14);
	emu_push(emu_ds);
	emu_ax = 0x6606;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x7E90); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	goto l__7E90;
l__7E90:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_ax, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x7EA7); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	goto l__7EA7;
l__7EA7:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x7EB4); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	goto l__7EB4;
l__7EB4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x7F12; emu_last_cs = 0x176C; emu_last_ip = 0x7EB8; emu_last_length = 0x0031; emu_last_crc = 0xE88B; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0xFFFF) { /* Unresolved jump */ emu_ip = 0x7F0F; emu_last_cs = 0x176C; emu_last_ip = 0x7EC1; emu_last_length = 0x0031; emu_last_crc = 0xE88B; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x7EE5); emu_cs = 0x01F7; f__01F7_2562_0026_6AD7();
	goto l__7EE5;
l__7EE5:
	emu_addw(&emu_sp, 0x14);
	emu_push(emu_ds);
	emu_ax = 0x6608;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x7EF7); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	goto l__7EF7;
l__7EF7:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ds);
	emu_ax = 0x984A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x7F04); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	goto l__7F04;
l__7F04:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x7F0D; emu_last_cs = 0x176C; emu_last_ip = 0x7F08; emu_last_length = 0x0009; emu_last_crc = 0x8823; emu_call(); return; }
	goto l__7E55;
l__7F1A:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_7FF0_0021_1C0F()
 *
 * @name f__176C_7FF0_0021_1C0F
 * @implements 176C:7FF0:0021:1C0F ()
 * @implements 176C:8011:0018:A313
 * @implements 176C:825F:0005:8BCF
 *
 * Called From: 176C:6EF3:001B:24E3
 */
void f__176C_7FF0_0021_1C0F()
{
l__7FF0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x8011); f__176C_7E2C_0030_42B8();
	goto l__8011;
l__8011:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x8029; emu_last_cs = 0x176C; emu_last_ip = 0x8020; emu_last_length = 0x0018; emu_last_crc = 0xA313; emu_call(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__825F;
l__825F:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
