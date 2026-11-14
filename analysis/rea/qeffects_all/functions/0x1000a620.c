// rea decompile_all
// name: FUN_1000a620
// address: 0x1000a620
// body: available
// range: 0x1000a620-0x1000ab0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1000a620(int param_1)

{
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 *puStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 *puStack_110;
  undefined4 uStack_10c;
  undefined4 *puStack_108;
  undefined4 uStack_104;
  undefined4 *puStack_100;
  undefined4 uStack_fc;
  undefined1 *puStack_f8;
  undefined4 uStack_f4;
  undefined1 *puStack_f0;
  undefined1 *puStack_ec;
  undefined1 *puStack_e8;
  undefined4 uStack_e4;
  undefined4 *puStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 *puStack_d4;
  undefined1 *puStack_d0;
  undefined4 uStack_cc;
  undefined1 *puStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_b4 [3];
  undefined1 uStack_b1;
  undefined1 uStack_af;
  undefined1 uStack_ad;
  undefined1 uStack_aa;
  undefined1 auStack_a8 [2];
  undefined1 uStack_a6;
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_44;
  
  local_44 = DAT_10027040 ^ (uint)auStack_b4;
  uStack_c4 = 0xde1;
  local_8c = 0;
  local_94 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_78 = 1;
  local_84 = 0;
  local_7c = 0x1700;
  local_74 = 0x84c0;
  local_90 = 0x2100;
  local_80[0] = 0;
  local_88 = 0;
  puStack_c8 = (undefined1 *)0x1000a686;
  auStack_9c[0] = (*DAT_100296d4)();
  puStack_c8 = auStack_98;
  uStack_cc = 0x8069;
  puStack_d0 = (undefined1 *)0x1000a69a;
  (*DAT_10029638)();
  if ((DAT_10029494 & 8) != 0) {
    puStack_d0 = (undefined1 *)0x84f5;
    puStack_d4 = (undefined4 *)0x1000a6ae;
    uStack_a6 = (*DAT_100296d4)();
    puStack_d4 = (undefined4 *)auStack_9c;
    uStack_d8 = 0x84f6;
    uStack_dc = 0x1000a6c2;
    (*DAT_10029638)();
  }
  if ((DAT_10029494 & 6) != 0) {
    puStack_d0 = (undefined1 *)0x8b40;
    puStack_d4 = (undefined4 *)0x1000a6d6;
    local_94 = (*DAT_10029a34)();
  }
  if ((DAT_10029494 & 1) != 0) {
    puStack_d0 = local_80;
    puStack_d4 = (undefined4 *)0x84e0;
    uStack_d8 = 0x1000a6f3;
    (*DAT_10029638)();
    uStack_d8 = 0x84c0;
    uStack_dc = 0x1000a6fe;
    (*DAT_10029a38)();
    if ((DAT_10029494 & 8) != 0) {
      puStack_d0 = (undefined1 *)0x84c1;
      puStack_d4 = (undefined4 *)0x1000a712;
      (*DAT_10029a38)();
      puStack_d4 = &local_7c;
      uStack_d8 = 0x84f6;
      uStack_dc = 0x1000a722;
      (*DAT_10029638)();
      uStack_dc = 0x84c2;
      puStack_e0 = (undefined4 *)0x1000a72d;
      (*DAT_10029a38)();
      puStack_e0 = &local_84;
      uStack_e4 = 0x84f6;
      puStack_e8 = (undefined1 *)0x1000a73d;
      (*DAT_10029638)();
      puStack_e8 = (undefined1 *)0x84c0;
      puStack_ec = (undefined1 *)0x1000a748;
      (*DAT_10029a38)();
      puStack_ec = auStack_98;
      puStack_f0 = (undefined1 *)0x84f6;
      uStack_f4 = 0x1000a758;
      (*DAT_10029638)();
    }
  }
  puStack_d0 = (undefined1 *)0xbe2;
  puStack_d4 = (undefined4 *)0x1000a763;
  uStack_aa = (*DAT_100296d4)();
  puStack_d4 = (undefined4 *)0xb44;
  uStack_d8 = 0x1000a772;
  uStack_ad = (*DAT_100296d4)();
  uStack_d8 = 0xb71;
  uStack_dc = 0x1000a781;
  uStack_af = (*DAT_100296d4)();
  uStack_dc = 0xc11;
  puStack_e0 = (undefined4 *)0x1000a790;
  uStack_b1 = (*DAT_100296d4)();
  puStack_e0 = &local_94;
  uStack_e4 = 0xbe1;
  puStack_e8 = (undefined1 *)0x1000a7a4;
  (*DAT_10029638)();
  puStack_e8 = auStack_a8;
  puStack_ec = (undefined1 *)0xbe0;
  puStack_f0 = (undefined1 *)0x1000a7b4;
  (*DAT_10029638)();
  puStack_f0 = auStack_a8;
  uStack_f4 = 0xba0;
  puStack_f8 = (undefined1 *)0x1000a7c4;
  (*DAT_10029638)();
  puStack_f8 = auStack_b4;
  uStack_fc = 0xb72;
  puStack_100 = (undefined4 *)0x1000a7d4;
  (*DAT_10029624)();
  puStack_100 = &local_90;
  uStack_104 = 0xb00;
  puStack_108 = (undefined4 *)0x1000a7e4;
  (*DAT_10029634)();
  if (*(int *)(param_1 + 0x80) == 0) {
    puStack_108 = (undefined4 *)auStack_a8;
    uStack_10c = 0xba2;
    puStack_110 = (undefined4 *)0x1000a7fc;
    (*DAT_10029638)();
  }
  uStack_10c = 0xc10;
  puStack_110 = (undefined4 *)0x1000a80b;
  puStack_108 = (undefined4 *)(param_1 + 0x5c);
  (*DAT_10029638)();
  puStack_110 = &uStack_dc;
  uStack_114 = 0x2200;
  uStack_118 = 0x2300;
  uStack_11c = 0x1000a820;
  (*DAT_10029674)();
  uStack_11c = 0xb44;
  uStack_120 = 0x1000a82b;
  (*DAT_10029594)();
  uStack_120 = 0xb71;
  uStack_124 = 0x1000a836;
  (*DAT_10029594)();
  uStack_124 = 0xbe2;
  uStack_128 = 0x1000a841;
  (*DAT_10029594)();
  uStack_128 = 0xde1;
  uStack_12c = 0x1000a84c;
  (*DAT_100295b8)();
  uStack_12c = 0x84f5;
  uStack_130 = 0x1000a857;
  (*DAT_100295b8)();
  uStack_130 = 0xc11;
  uStack_134 = 0x1000a862;
  (*DAT_100295b8)();
  uStack_134 = 0;
  uStack_138 = 0x1000a869;
  (*DAT_1002958c)();
  uStack_138 = 0x1701;
  uStack_140 = CONCAT44(0x1000a874,(undefined4)uStack_140);
  (*DAT_10029750)();
  uStack_140 = CONCAT44(0x1000a87a,(undefined4)uStack_140);
  (*DAT_100297e0)();
  uStack_140 = CONCAT44(0x1000a880,(undefined4)uStack_140);
  (*DAT_1002970c)();
  uStack_140 = 0x40f869f000000000;
  uStack_148 = 0xc0f869f000000000;
  uStack_150 = 0;
  uStack_158 = (double)*(int *)(param_1 + 0x24);
  uStack_160 = (double)*(int *)(param_1 + 0x20);
  uStack_168 = 0;
  uStack_16c = 0x1000a8b4;
  (*DAT_1002978c)();
  uStack_16c = 0x1700;
  uStack_170 = 0x1000a8bf;
  (*DAT_10029750)();
  uStack_170 = 0x1000a8c5;
  (*DAT_100297e0)();
  uStack_170 = 0x1000a8cb;
  (*DAT_1002970c)();
  uStack_170 = 0x3f800000;
  uStack_174 = 0x3f800000;
  uStack_178 = 0x3f800000;
  uStack_17c = 0x3f800000;
  uStack_180 = 0x1000a8e5;
  (*DAT_1002952c)();
  if (*(int *)(param_1 + 0x80) == 0) {
    uStack_180 = *(undefined4 *)(param_1 + 0x58);
    uStack_184 = *(undefined4 *)(param_1 + 0x54);
    uStack_188 = *(undefined4 *)(param_1 + 0x50);
    uStack_18c = *(undefined4 *)(param_1 + 0x4c);
    uStack_190 = 0x1000a903;
    (*DAT_100299d4)();
  }
  uStack_180 = *(undefined4 *)(param_1 + 0x58);
  uStack_184 = *(undefined4 *)(param_1 + 0x54);
  uStack_188 = *(undefined4 *)(param_1 + 0x50);
  uStack_18c = *(undefined4 *)(param_1 + 0x4c);
  uStack_190 = 0x1000a919;
  (*DAT_10029884)();
  if (*(char *)(param_1 + 0x6d) != '\0') {
    uStack_190 = 0x1000a923;
    FUN_1000ab10();
  }
  if (*(char *)(param_1 + 0x6f) != '\0') {
    uStack_190 = 0x1000a92d;
    FUN_1000b060();
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    uStack_190 = 0x1000a937;
    FUN_1000b0f0();
  }
  if (*(char *)(param_1 + 0x6e) != '\0') {
    uStack_190 = 0x1000a941;
    FUN_1000afa0();
  }
  if (*(char *)(param_1 + 0x6c) != '\0') {
    uStack_190 = 0x1000a94b;
    FUN_1000ad80();
  }
  uStack_190 = 0x1701;
  uStack_194 = 0x1000a956;
  (*DAT_10029750)();
  uStack_194 = 0x1000a95c;
  (*DAT_100297cc)();
  uStack_194 = 0x1700;
  uStack_198 = 0x1000a967;
  (*DAT_10029750)();
  uStack_198 = 0x1000a96d;
  (*DAT_100297cc)();
  if ((DAT_10029494 & 1) != 0) {
    if ((DAT_10029494 & 8) != 0) {
      uStack_198 = 0x84c1;
      uStack_19c = 0x1000a985;
      (*DAT_10029a38)();
      uStack_19c = uStack_148._4_4_;
      uStack_1a0 = 0x84f5;
      uStack_1a4 = 0x1000a995;
      (*DAT_100294ac)();
      uStack_1a4 = 0x84c2;
      puStack_1a8 = (undefined4 *)0x1000a9a0;
      (*DAT_10029a38)();
      puStack_1a8 = (undefined4 *)uStack_150._4_4_;
      uStack_1ac = 0x84f5;
      uStack_1b0 = 0x1000a9b0;
      (*DAT_100294ac)();
      uStack_1b0 = 0x84c0;
      uStack_1b4 = 0x1000a9bb;
      (*DAT_10029a38)();
      uStack_1b4 = (undefined4)uStack_160;
      uStack_1b8 = 0x84f5;
      uStack_1bc = 0x1000a9cb;
      (*DAT_100294ac)();
    }
    uStack_198 = (undefined4)uStack_148;
    uStack_19c = 0x1000a9d6;
    (*DAT_10029a38)();
  }
  if ((DAT_10029494 & 8) != 0) {
    uStack_198 = (undefined4)uStack_160;
    uStack_19c = 0x84f5;
    uStack_1a0 = 0x1000a9ef;
    (*DAT_100294ac)();
    if (uStack_16c._2_1_ == '\0') {
      uStack_198 = 0x84f5;
      uStack_19c = 0x1000aa00;
      (*DAT_10029594)();
    }
  }
  uStack_198 = (undefined4)uStack_168;
  uStack_19c = 0xde1;
  uStack_1a0 = 0x1000aa10;
  (*DAT_100294ac)();
  if ((char)uStack_174 == '\0') {
    uStack_1a0 = 0xde1;
    uStack_1a4 = 0x1000aa21;
    (*DAT_10029594)();
  }
  uStack_1a0 = (undefined4)uStack_160;
  uStack_1a4 = uStack_158._4_4_;
  puStack_1a8 = (undefined4 *)0x1000aa31;
  (*DAT_100294b4)();
  puStack_1a8 = &uStack_138;
  uStack_1ac = 0x1000aa3c;
  (*DAT_10029530)();
  uStack_1ac = uStack_168._4_4_;
  uStack_1b0 = 0x1000aa47;
  (*DAT_10029750)();
  uStack_1b0 = 0xbe2;
  if (uStack_188._2_1_ == '\0') {
    uStack_1b4 = 0x1000aa60;
    (*DAT_10029594)();
  }
  else {
    uStack_1b4 = 0x1000aa58;
    (*DAT_100295b8)();
  }
  if (uStack_18c._3_1_ != '\0') {
    uStack_1b4 = 0xb44;
    uStack_1b8 = 0x1000aa71;
    (*DAT_100295b8)();
  }
  if (uStack_188._1_1_ != '\0') {
    uStack_1b4 = 0xb71;
    uStack_1b8 = 0x1000aa82;
    (*DAT_100295b8)();
  }
  if (uStack_188._3_1_ == '\0') {
    uStack_1b4 = 0xc11;
    uStack_1b8 = 0x1000aa93;
    (*DAT_10029594)();
  }
  uStack_1b4 = *(undefined4 *)(param_1 + 0x68);
  uStack_1b8 = *(undefined4 *)(param_1 + 100);
  uStack_1bc = *(undefined4 *)(param_1 + 0x60);
  uStack_1c0 = *(undefined4 *)(param_1 + 0x5c);
  uStack_1c4 = 0x1000aaa8;
  (*DAT_10029884)();
  if (*(int *)(param_1 + 0x80) == 0) {
    uStack_1c4 = (undefined4)uStack_158;
    (*DAT_100299d4)(uStack_168._4_4_,(undefined4)uStack_160,uStack_160._4_4_);
  }
  uStack_1c4 = uStack_190;
  (*DAT_10029928)(0x2300,0x2200);
  if ((DAT_10029494 & 6) != 0) {
    (*DAT_10029a64)(uStack_194);
  }
  (*DAT_1002958c)(uStack_18c);
  __security_check_cookie(uStack_158._4_4_ ^ (uint)&uStack_1c4);
  return;
}

