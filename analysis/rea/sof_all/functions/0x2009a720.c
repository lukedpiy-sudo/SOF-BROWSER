// rea decompile_all
// name: FUN_2009a720
// address: 0x2009a720
// body: available
// range: 0x2009a720-0x2009ab62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2009ab2c) */
/* WARNING: Removing unreachable block (ram,0x2009ab3d) */
/* WARNING: Removing unreachable block (ram,0x2009ab3f) */

void FUN_2009a720(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                 char *param_6)

{
  char cVar1;
  undefined1 *puVar2;
  char *in_ECX;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_519;
  char *local_518;
  float local_514;
  float local_510;
  float local_50c;
  float local_508;
  float local_504;
  float local_500;
  float local_4fc;
  undefined1 local_4f8 [64];
  undefined4 local_4b8;
  undefined1 local_4b4 [64];
  undefined4 local_474;
  undefined1 local_470 [64];
  undefined4 local_430;
  undefined1 local_42c [64];
  undefined4 local_3ec;
  undefined1 local_3e8 [1000];
  
  if (*in_ECX == '\0') {
    *in_ECX = '\x01';
    FUN_2000a3a0(param_5,0,0xffffffff);
    in_ECX[0x15] = param_6[0x71];
    in_ECX[0x16] = param_6[0x72];
    in_ECX[0x14] = param_6[0x70];
    in_ECX[0x84] = '\x01';
    in_ECX[0x88] = '\0';
    in_ECX[0x89] = '\0';
    in_ECX[0x8a] = '\0';
    in_ECX[0x8b] = '\0';
    if (*(float *)(param_6 + 0x68) < 0.01) {
      *param_6 = '\0';
    }
    in_ECX[0x8c] = *param_6;
  }
  else {
    puVar2 = *(undefined1 **)(param_5 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_201116cc;
    }
    iVar3 = FUN_20023c90(0,*(undefined4 *)(in_ECX + 0xc),puVar2,*(undefined4 *)(param_5 + 8));
    if (iVar3 != 0) {
      puVar2 = *(undefined1 **)(param_5 + 4);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_201116cc;
      }
      puVar5 = *(undefined1 **)(in_ECX + 8);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_201116cc;
      }
      FUN_200fabac(local_3e8,s__Texture_name_change_in_sequence_2015725b + 1,puVar5,puVar2);
      FUN_2008ea00(local_3e8,0);
    }
  }
  local_519 = param_6[0x6c];
  if (in_ECX[0x19] == '\0') {
    in_ECX[0x18] = '\x01';
    in_ECX[0x19] = '\x01';
    in_ECX[0x1a] = local_519;
LAB_2009a81b:
    if (in_ECX[0x1a] != local_519) goto LAB_2009a827;
    cVar1 = '\x01';
  }
  else {
    if (in_ECX[0x18] != '\0') goto LAB_2009a81b;
LAB_2009a827:
    cVar1 = '\0';
  }
  in_ECX[0x18] = cVar1;
  if (cVar1 == '\0') {
    FUN_2009ff60(param_3,in_ECX + 0x1a);
    FUN_2009dd40(*(undefined4 *)(in_ECX + 0x24),1,&local_519);
  }
  local_504 = 0.5;
  local_500 = 0.5;
  local_4fc = 0.5;
  if (*(float *)(param_6 + 0x80) == 0.0) {
    param_6[0x80] = '\0';
    param_6[0x81] = '\0';
    param_6[0x82] = -0x80;
    param_6[0x83] = '?';
  }
  if (*(float *)(param_6 + 0x84) == 0.0) {
    param_6[0x84] = '\0';
    param_6[0x85] = '\0';
    param_6[0x86] = -0x80;
    param_6[0x87] = '?';
  }
  if (((((*(float *)(param_6 + 0x78) == 0.0) && (*(float *)(param_6 + 0x7c) == 0.0)) &&
       (param_6[0x73] == '\0')) &&
      ((param_6[0x74] == '\0' && (*(int *)(param_6 + 0x80) == 0x3f800000)))) &&
     ((*(int *)(param_6 + 0x84) == 0x3f800000 && (*(float *)(param_6 + 0x88) == 0.0)))) {
    local_518 = in_ECX + 0x94;
    FUN_200a0cc0();
    pcVar6 = in_ECX + 0x94;
  }
  else {
    in_ECX[0x84] = '\0';
    local_474 = 0;
    local_3ec = 0;
    local_430 = 0;
    local_4b8 = 0;
    FUN_200a0dd0(2,*(undefined4 *)(param_6 + 0x88));
    if (param_6[0x74] == '\0') {
      local_518 = *(char **)(param_6 + 0x84);
    }
    else {
      local_518 = (char *)-*(float *)(param_6 + 0x84);
    }
    if (param_6[0x73] == '\0') {
      local_508 = *(float *)(param_6 + 0x80);
    }
    else {
      local_508 = -*(float *)(param_6 + 0x80);
    }
    FUN_200a0f40(local_508,local_518,0x3f800000);
    FUN_200a1100(local_4b4,local_42c);
    FUN_200a1410(&local_514,&local_504);
    local_514 = local_504 + local_514 * -1.0;
    local_510 = local_510 * -1.0 + local_500;
    local_50c = local_50c * -1.0 + local_4fc;
    FUN_200a15d0(3,&local_514);
    FUN_200a0c70();
    FUN_200a0d50(-*(float *)(param_6 + 0x78),*(undefined4 *)(param_6 + 0x7c),0);
    local_518 = in_ECX + 0x94;
    FUN_200a1100(local_470,local_4f8);
    pcVar6 = local_518;
  }
  if (in_ECX[0x2d] == '\0') {
    in_ECX[0x2c] = '\x01';
    in_ECX[0x2d] = '\x01';
    pcVar7 = pcVar6;
    pcVar8 = in_ECX + 0x30;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
LAB_2009aa7a:
    cVar1 = FUN_200a10a0(pcVar6);
    if (cVar1 != '\0') {
      cVar1 = '\x01';
      goto LAB_2009aa90;
    }
  }
  else if (in_ECX[0x2c] != '\0') goto LAB_2009aa7a;
  cVar1 = '\0';
LAB_2009aa90:
  in_ECX[0x2c] = cVar1;
  if (cVar1 == '\0') {
    iVar3 = *(int *)(in_ECX + 0x78);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(int *)(in_ECX + 0x7c) - iVar3) / 0x44;
    }
    if (uVar4 < param_3) {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 0x7c) - iVar3) / 0x44;
      }
      FUN_200932c0(*(undefined4 *)(in_ECX + 0x7c),param_3 - iVar3,in_ECX + 0x30);
    }
    else if ((iVar3 != 0) && (param_3 < (uint)((*(int *)(in_ECX + 0x7c) - iVar3) / 0x44))) {
      *(uint *)(in_ECX + 0x7c) = iVar3 + param_3 * 0x44;
    }
    FUN_200932c0(*(undefined4 *)(in_ECX + 0x7c),1,local_518);
  }
  return;
}

