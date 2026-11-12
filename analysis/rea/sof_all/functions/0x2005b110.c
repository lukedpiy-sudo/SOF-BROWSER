// rea decompile_all
// name: FUN_2005b110
// address: 0x2005b110
// body: available
// range: 0x2005b110-0x2005b96a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2005b583) */

void FUN_2005b110(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  int *piVar7;
  int *piVar8;
  uint local_d4;
  uint local_d0;
  int local_c8 [50];
  
  piVar1 = (int *)(param_2 + 0x24);
  if (param_1 == 0) {
    piVar7 = local_c8;
    piVar8 = local_c8;
    for (iVar4 = 0x32; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
  }
  else {
    piVar7 = (int *)(param_1 + 0x24);
  }
  uVar5 = 0;
  if (*(short *)(param_2 + 0x94) != (short)piVar7[0x1c]) {
    uVar5 = 0x10000;
  }
  if (*(short *)(param_2 + 0x98) != (short)piVar7[0x1d]) {
    uVar5 = uVar5 | 0x20000;
  }
  if (*(short *)(param_2 + 0x9a) != *(short *)((int)piVar7 + 0x76)) {
    uVar5 = uVar5 | 0x40000;
  }
  if (*(char *)(param_2 + 0x9c) != (char)piVar7[0x1e]) {
    uVar5 = uVar5 | 0x40000000;
  }
  if (*(char *)(param_2 + 0x9d) != *(char *)((int)piVar7 + 0x79)) {
    uVar5 = uVar5 | 0x10000000;
  }
  if (*(char *)(param_2 + 0x9e) != *(char *)((int)piVar7 + 0x7a)) {
    uVar5 = uVar5 | 0x20000000;
  }
  if (*piVar1 != *piVar7) {
    uVar5 = uVar5 | 1;
  }
  if (((*(short *)(param_2 + 0x28) != (short)piVar7[1]) ||
      (*(short *)(param_2 + 0x2a) != *(short *)((int)piVar7 + 6))) ||
     (*(short *)(param_2 + 0x2c) != (short)piVar7[2])) {
    uVar5 = uVar5 | 2;
  }
  if (((*(short *)(param_2 + 0x2e) != *(short *)((int)piVar7 + 10)) ||
      (*(short *)(param_2 + 0x30) != (short)piVar7[3])) ||
     (*(short *)(param_2 + 0x32) != *(short *)((int)piVar7 + 0xe))) {
    uVar5 = uVar5 | 4;
  }
  if (*(char *)(param_2 + 0x35) != *(char *)((int)piVar7 + 0x11)) {
    uVar5 = uVar5 | 8;
  }
  if (*(char *)(param_2 + 0x34) != (char)piVar7[4]) {
    uVar5 = uVar5 | 0x10;
  }
  if (*(short *)(param_2 + 0x36) != *(short *)((int)piVar7 + 0x12)) {
    uVar5 = uVar5 | 0x20;
  }
  if (((*(short *)(param_2 + 0x38) != (short)piVar7[5]) ||
      (*(short *)(param_2 + 0x3a) != *(short *)((int)piVar7 + 0x16))) ||
     (*(short *)(param_2 + 0x3c) != (short)piVar7[6])) {
    uVar5 = uVar5 | 0x40;
  }
  if (*(char *)(param_2 + 0x3e) != *(char *)((int)piVar7 + 0x1a)) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (((*(float *)(param_2 + 0x4c) != (float)piVar7[10]) ||
      (*(float *)(param_2 + 0x50) != (float)piVar7[0xb])) ||
     (*(float *)(param_2 + 0x54) != (float)piVar7[0xc])) {
    uVar5 = uVar5 | 0x80;
  }
  if (((*(float *)(param_2 + 0x40) != (float)piVar7[7]) ||
      (*(float *)(param_2 + 0x44) != (float)piVar7[8])) ||
     (*(float *)(param_2 + 0x48) != (float)piVar7[9])) {
    uVar5 = uVar5 | 0x100;
  }
  if (((*(float *)(param_2 + 0x58) != (float)piVar7[0xd]) ||
      (*(float *)(param_2 + 0x5c) != (float)piVar7[0xe])) ||
     (*(float *)(param_2 + 0x60) != (float)piVar7[0xf])) {
    uVar5 = uVar5 | 0x200;
  }
  if (((*(float *)(param_2 + 100) != (float)piVar7[0x10]) ||
      (*(float *)(param_2 + 0x68) != (float)piVar7[0x11])) ||
     (*(float *)(param_2 + 0x6c) != (float)piVar7[0x12])) {
    uVar5 = uVar5 | 0x80000;
  }
  if (((*(float *)(param_2 + 0x7c) != (float)piVar7[0x16]) ||
      (*(float *)(param_2 + 0x80) != (float)piVar7[0x17])) ||
     (*(float *)(param_2 + 0x84) != (float)piVar7[0x18])) {
    uVar5 = uVar5 | 0x8000;
  }
  if (((*(float *)(param_2 + 0x70) != (float)piVar7[0x13]) ||
      (*(float *)(param_2 + 0x74) != (float)piVar7[0x14])) ||
     (*(float *)(param_2 + 0x78) != (float)piVar7[0x15])) {
    uVar5 = uVar5 | 0x1000;
  }
  if ((*(char *)(param_2 + 0x8c) != (char)piVar7[0x1a]) ||
     (*(int *)(param_2 + 0x88) != piVar7[0x19])) {
    uVar5 = uVar5 | 0x2000;
  }
  if ((((*(float *)(param_2 + 0xa8) != (float)piVar7[0x21]) ||
       (*(float *)(param_2 + 0xac) != (float)piVar7[0x22])) ||
      (*(float *)(param_2 + 0xb0) != (float)piVar7[0x23])) ||
     (*(float *)(param_2 + 0xb4) != (float)piVar7[0x24])) {
    uVar5 = uVar5 | 0x400;
  }
  if (*(float *)(param_2 + 0xb8) != (float)piVar7[0x25]) {
    uVar5 = uVar5 | 0x800;
  }
  if (*(int *)(param_2 + 0xbc) != piVar7[0x26]) {
    uVar5 = uVar5 | 0x4000;
  }
  local_d4 = 0;
  if (*(char *)(param_2 + 0xeb) != *(char *)((int)piVar7 + 199)) {
    uVar5 = uVar5 | 0x400000;
    local_d4 = uVar5;
  }
  if (*(char *)(param_2 + 0xc2) != *(char *)((int)piVar7 + 0x9e)) {
    uVar5 = uVar5 | 0x800000;
    local_d4 = uVar5;
  }
  if (*(short *)(param_2 + 0xc0) != (short)piVar7[0x27]) {
    uVar5 = uVar5 | 0x1000000;
    local_d4 = uVar5;
  }
  if ((*(char *)(param_2 + 0xe8) != (char)piVar7[0x31]) ||
     (*(char *)(param_2 + 0xe9) != *(char *)((int)piVar7 + 0xc5))) {
    uVar5 = uVar5 | 0x2000000;
    local_d4 = uVar5;
  }
  if (*(char *)(param_2 + 0xea) != *(char *)((int)piVar7 + 0xc6)) {
    uVar5 = uVar5 | 0x4000000;
    local_d4 = uVar5;
  }
  FUN_2001cb00(param_3,0x14);
  FUN_2001cbf0(param_3,uVar5);
  if ((uVar5 & 0x10000) != 0) {
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x94));
    FUN_2001cb00(param_3,(int)*(short *)(param_2 + 0x96));
  }
  if ((uVar5 & 0x20000) != 0) {
    FUN_2001cb00(param_3,(int)*(short *)(param_2 + 0x98));
  }
  if ((uVar5 & 0x40000) != 0) {
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x9a));
  }
  if ((uVar5 & 0x40000000) != 0) {
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0x9c));
  }
  if ((uVar5 & 0x10000000) != 0) {
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0x9d));
  }
  if ((uVar5 & 0x20000000) != 0) {
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0x9e));
  }
  if ((uVar5 & 1) != 0) {
    FUN_2001cb00(param_3,*piVar1);
  }
  if ((uVar5 & 2) != 0) {
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x28));
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x2a));
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x2c));
  }
  if ((uVar5 & 4) != 0) {
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x2e));
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x30));
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x32));
  }
  if ((uVar5 & 8) != 0) {
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0x35));
  }
  if ((uVar5 & 0x10) != 0) {
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0x34));
  }
  if ((uVar5 & 0x20) != 0) {
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x36));
  }
  if ((uVar5 & 0x40) != 0) {
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x38));
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x3a));
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0x3c));
  }
  if ((uVar5 & 0x8000000) != 0) {
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0x3e));
  }
  if ((char)uVar5 < '\0') {
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
  }
  if ((uVar5 & 0x100) != 0) {
    FUN_2001cff0(param_3,*(undefined4 *)(param_2 + 0x40));
    FUN_2001cff0(param_3,*(undefined4 *)(param_2 + 0x44));
    FUN_2001cff0(param_3,*(undefined4 *)(param_2 + 0x48));
  }
  if ((char)(uVar5 >> 8) < '\0') {
    FUN_2001cff0(param_3,*(undefined4 *)(param_2 + 0x7c));
    FUN_2001cff0(param_3,*(undefined4 *)(param_2 + 0x80));
    FUN_2001cff0(param_3,*(undefined4 *)(param_2 + 0x84));
  }
  if ((uVar5 & 0x1000) != 0) {
    uVar2 = __ftol();
    FUN_2001cb70(param_3,uVar2);
    uVar2 = __ftol();
    FUN_2001cb70(param_3,uVar2);
    uVar2 = __ftol();
    FUN_2001cb70(param_3,uVar2);
  }
  if ((uVar5 & 0x2000) != 0) {
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0x8c));
    FUN_2001cb00(param_3,*(undefined4 *)(param_2 + 0x88));
  }
  if ((uVar5 & 0x200) != 0) {
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
  }
  if ((uVar5 & 0x80000) != 0) {
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
  }
  if ((uVar5 & 0x400) != 0) {
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
  }
  if ((uVar5 & 0x800) != 0) {
    uVar2 = __ftol();
    FUN_2001cb00(param_3,uVar2);
  }
  if ((uVar5 & 0x4000) != 0) {
    FUN_2001cb00(param_3,*(undefined4 *)(param_2 + 0xbc));
  }
  iVar4 = 0;
  psVar6 = (short *)(param_2 + 200);
  local_d0 = 0;
  psVar3 = psVar6;
  do {
    if (*psVar3 != *(short *)((int)psVar3 + ((int)piVar7 - (int)piVar1))) {
      local_d0 = local_d0 | 1 << ((byte)iVar4 & 0x1f);
    }
    iVar4 = iVar4 + 1;
    psVar3 = psVar3 + 1;
  } while (iVar4 < 0x10);
  FUN_2001cbf0(param_3,local_d0);
  iVar4 = 0;
  do {
    if ((1 << ((byte)iVar4 & 0x1f) & local_d0) != 0) {
      FUN_2001cb70(param_3,(int)*psVar6);
    }
    iVar4 = iVar4 + 1;
    psVar6 = psVar6 + 1;
  } while (iVar4 < 0x10);
  if ((local_d4 & 0x400000) != 0) {
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0xeb));
  }
  if ((local_d4 & 0x800000) != 0) {
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0xc2));
  }
  if ((local_d4 & 0x1000000) != 0) {
    FUN_2001cb70(param_3,(int)*(short *)(param_2 + 0xc0));
  }
  if ((local_d4 & 0x2000000) != 0) {
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0xe8));
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0xe9));
  }
  if ((local_d4 & 0x4000000) != 0) {
    FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0xea));
  }
  return;
}

