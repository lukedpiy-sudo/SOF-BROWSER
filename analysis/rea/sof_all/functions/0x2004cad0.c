// rea decompile_all
// name: FUN_2004cad0
// address: 0x2004cad0
// body: available
// range: 0x2004cad0-0x2004d145 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004cad0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_40 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = *param_1;
  uVar3 = param_1[2];
  uVar5 = param_1[3];
  uVar9 = param_1[1];
  iVar4 = -2 - (int)param_2;
  puVar6 = (undefined2 *)((int)param_2 + 2);
  param_2 = local_40;
  do {
    puVar7 = puVar6 + 2;
    *param_2 = CONCAT31(CONCAT21(*puVar6,*(undefined1 *)((int)puVar6 + -1)),
                        *(undefined1 *)(puVar6 + -1));
    param_2 = param_2 + 1;
    puVar6 = puVar7;
  } while ((uint)(iVar4 + (int)puVar7) < 0x40);
  uVar2 = iVar1 + (~uVar9 & uVar5 | uVar3 & uVar9) + local_40[0];
  uVar2 = uVar2 >> 0x1d | uVar2 * 8;
  uVar5 = uVar5 + (~uVar2 & uVar3 | uVar9 & uVar2) + local_40[1];
  uVar5 = uVar5 >> 0x19 | uVar5 * 0x80;
  uVar3 = uVar3 + (~uVar5 & uVar9 | uVar5 & uVar2) + local_40[2];
  uVar3 = uVar3 >> 0x15 | uVar3 * 0x800;
  uVar9 = uVar9 + (~uVar3 & uVar2 | uVar5 & uVar3) + local_40[3];
  uVar9 = uVar9 * 0x80000 | uVar9 >> 0xd;
  uVar2 = uVar2 + (~uVar9 & uVar5 | uVar3 & uVar9) + local_30;
  uVar2 = uVar2 >> 0x1d | uVar2 * 8;
  uVar5 = uVar5 + (~uVar2 & uVar3 | uVar9 & uVar2) + local_2c;
  uVar8 = uVar5 >> 0x19 | uVar5 * 0x80;
  uVar3 = uVar3 + (~uVar8 & uVar9 | uVar8 & uVar2) + local_28;
  uVar3 = uVar3 >> 0x15 | uVar3 * 0x800;
  uVar9 = uVar9 + (~uVar3 & uVar2 | uVar8 & uVar3) + local_24;
  uVar5 = uVar9 * 0x80000 | uVar9 >> 0xd;
  uVar2 = uVar2 + (~uVar5 & uVar8 | uVar3 & uVar5) + local_20;
  uVar2 = uVar2 >> 0x1d | uVar2 * 8;
  uVar8 = uVar8 + (~uVar2 & uVar3 | uVar5 & uVar2) + local_1c;
  uVar9 = uVar8 >> 0x19 | uVar8 * 0x80;
  uVar3 = uVar3 + (~uVar9 & uVar5 | uVar9 & uVar2) + local_18;
  uVar8 = uVar3 >> 0x15 | uVar3 * 0x800;
  uVar5 = uVar5 + (~uVar8 & uVar2 | uVar9 & uVar8) + local_14;
  uVar3 = uVar5 * 0x80000 | uVar5 >> 0xd;
  uVar2 = uVar2 + (~uVar3 & uVar9 | uVar8 & uVar3) + local_10;
  uVar10 = uVar2 >> 0x1d | uVar2 * 8;
  uVar9 = uVar9 + (~uVar10 & uVar8 | uVar3 & uVar10) + local_c;
  uVar2 = uVar9 >> 0x19 | uVar9 * 0x80;
  uVar8 = uVar8 + (~uVar2 & uVar3 | uVar2 & uVar10) + local_8;
  uVar5 = uVar8 >> 0x15 | uVar8 * 0x800;
  uVar3 = uVar3 + (~uVar5 & uVar10 | uVar2 & uVar5) + local_4;
  uVar9 = uVar3 * 0x80000 | uVar3 >> 0xd;
  uVar3 = uVar10 + 0x5a827999 + ((uVar5 | uVar9) & uVar2 | uVar5 & uVar9) + local_40[0];
  uVar8 = uVar3 >> 0x1d | uVar3 * 8;
  uVar3 = uVar2 + 0x5a827999 + ((uVar9 | uVar8) & uVar5 | uVar9 & uVar8) + local_30;
  uVar10 = uVar3 >> 0x1b | uVar3 * 0x20;
  uVar3 = uVar5 + 0x5a827999 + ((uVar9 | uVar8) & uVar10 | uVar9 & uVar8) + local_20;
  uVar5 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar3 = uVar9 + 0x5a827999 + ((uVar5 | uVar8) & uVar10 | uVar5 & uVar8) + local_10;
  uVar9 = uVar3 >> 0x13 | uVar3 * 0x2000;
  uVar3 = uVar8 + 0x5a827999 + ((uVar5 | uVar9) & uVar10 | uVar5 & uVar9) + local_40[1];
  uVar2 = uVar3 >> 0x1d | uVar3 * 8;
  uVar3 = uVar10 + 0x5a827999 + ((uVar9 | uVar2) & uVar5 | uVar9 & uVar2) + local_2c;
  uVar8 = uVar3 >> 0x1b | uVar3 * 0x20;
  uVar3 = uVar5 + 0x5a827999 + ((uVar9 | uVar2) & uVar8 | uVar9 & uVar2) + local_1c;
  uVar5 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar3 = uVar9 + 0x5a827999 + ((uVar5 | uVar2) & uVar8 | uVar5 & uVar2) + local_c;
  uVar9 = uVar3 >> 0x13 | uVar3 * 0x2000;
  uVar3 = uVar2 + 0x5a827999 + ((uVar5 | uVar9) & uVar8 | uVar5 & uVar9) + local_40[2];
  uVar2 = uVar3 >> 0x1d | uVar3 * 8;
  uVar3 = uVar8 + 0x5a827999 + ((uVar9 | uVar2) & uVar5 | uVar9 & uVar2) + local_28;
  uVar8 = uVar3 >> 0x1b | uVar3 * 0x20;
  uVar3 = uVar5 + 0x5a827999 + ((uVar9 | uVar2) & uVar8 | uVar9 & uVar2) + local_18;
  uVar5 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar3 = uVar9 + 0x5a827999 + ((uVar5 | uVar2) & uVar8 | uVar5 & uVar2) + local_8;
  uVar9 = uVar3 >> 0x13 | uVar3 * 0x2000;
  uVar3 = uVar2 + 0x5a827999 + ((uVar5 | uVar9) & uVar8 | uVar5 & uVar9) + local_40[3];
  uVar2 = uVar3 >> 0x1d | uVar3 * 8;
  uVar3 = uVar8 + 0x5a827999 + ((uVar9 | uVar2) & uVar5 | uVar9 & uVar2) + local_24;
  uVar8 = uVar3 >> 0x1b | uVar3 * 0x20;
  uVar3 = uVar5 + 0x5a827999 + ((uVar9 | uVar2) & uVar8 | uVar9 & uVar2) + local_14;
  uVar5 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar3 = uVar9 + 0x5a827999 + ((uVar5 | uVar2) & uVar8 | uVar5 & uVar2) + local_4;
  uVar10 = uVar3 >> 0x13 | uVar3 * 0x2000;
  uVar3 = uVar2 + 0x6ed9eba1 + (uVar8 ^ uVar5 ^ uVar10) + local_40[0];
  uVar9 = uVar3 >> 0x1d | uVar3 * 8;
  uVar3 = uVar8 + 0x6ed9eba1 + (uVar5 ^ uVar10 ^ uVar9) + local_20;
  uVar2 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar3 = uVar5 + 0x6ed9eba1 + (uVar2 ^ uVar10 ^ uVar9) + local_30;
  uVar8 = uVar3 >> 0x15 | uVar3 * 0x800;
  uVar3 = uVar10 + 0x6ed9eba1 + (uVar2 ^ uVar8 ^ uVar9) + local_10;
  uVar5 = uVar3 >> 0x11 | uVar3 * 0x8000;
  uVar3 = uVar9 + 0x6ed9eba1 + (uVar2 ^ uVar8 ^ uVar5) + local_40[2];
  uVar9 = uVar3 >> 0x1d | uVar3 * 8;
  uVar3 = uVar2 + 0x6ed9eba1 + (uVar8 ^ uVar5 ^ uVar9) + local_18;
  uVar2 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar3 = uVar8 + 0x6ed9eba1 + (uVar2 ^ uVar5 ^ uVar9) + local_28;
  uVar8 = uVar3 >> 0x15 | uVar3 * 0x800;
  uVar3 = uVar5 + 0x6ed9eba1 + (uVar2 ^ uVar8 ^ uVar9) + local_8;
  uVar5 = uVar3 >> 0x11 | uVar3 * 0x8000;
  uVar3 = uVar9 + 0x6ed9eba1 + (uVar2 ^ uVar8 ^ uVar5) + local_40[1];
  uVar9 = uVar3 >> 0x1d | uVar3 * 8;
  uVar3 = uVar2 + 0x6ed9eba1 + (uVar8 ^ uVar5 ^ uVar9) + local_1c;
  uVar2 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar3 = uVar8 + 0x6ed9eba1 + (uVar2 ^ uVar5 ^ uVar9) + local_2c;
  uVar8 = uVar3 >> 0x15 | uVar3 * 0x800;
  uVar3 = uVar5 + 0x6ed9eba1 + (uVar2 ^ uVar8 ^ uVar9) + local_c;
  uVar5 = uVar3 >> 0x11 | uVar3 * 0x8000;
  uVar3 = uVar9 + 0x6ed9eba1 + (uVar2 ^ uVar8 ^ uVar5) + local_40[3];
  uVar9 = uVar3 >> 0x1d | uVar3 * 8;
  uVar3 = uVar2 + 0x6ed9eba1 + (uVar8 ^ uVar5 ^ uVar9) + local_14;
  uVar2 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar3 = uVar8 + 0x6ed9eba1 + (uVar2 ^ uVar5 ^ uVar9) + local_24;
  uVar8 = uVar3 >> 0x15 | uVar3 * 0x800;
  uVar3 = uVar5 + 0x6ed9eba1 + (uVar2 ^ uVar8 ^ uVar9) + local_4;
  *param_1 = *param_1 + uVar9;
  param_1[1] = (uVar3 >> 0x11 | uVar3 * 0x8000) + param_1[1];
  param_1[2] = param_1[2] + uVar8;
  param_1[3] = param_1[3] + uVar2;
  return;
}

