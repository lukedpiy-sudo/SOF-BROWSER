// rea decompile_all
// name: FUN_200b8e00
// address: 0x200b8e00
// body: available
// range: 0x200b8e00-0x200b8faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200b8e00(undefined4 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_ECX;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  puVar3 = param_1;
  FUN_200692e0(param_1,*in_ECX);
  FUN_200692e0(param_1,in_ECX[1]);
  if (in_ECX[5] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(in_ECX[6] - in_ECX[5]) >> 2;
  }
  FUN_200692e0(param_1,iVar4);
  for (uVar6 = 0; (iVar4 = in_ECX[5], iVar4 != 0 && (uVar6 < (uint)(in_ECX[6] - iVar4 >> 2)));
      uVar6 = uVar6 + 1) {
    FUN_200692e0(param_1,*(undefined4 *)(iVar4 + uVar6 * 4));
  }
  FUN_200692e0(param_1,in_ECX[2]);
  pbVar2 = (byte *)*param_1;
  iVar4 = in_ECX[2];
  local_c = in_ECX[0xd];
  pbVar1 = pbVar2 + 0x14;
  iVar5 = FUN_200facde(pbVar1,4,1,*(undefined4 *)(pbVar2 + 4));
  *pbVar2 = *pbVar2 | iVar5 != 1;
  local_8 = local_c;
  local_4 = iVar4;
  FUN_200bb430(&local_c,*(undefined4 *)(pbVar2 + 0xc),&local_8);
  *(int *)pbVar1 = *(int *)pbVar1 + iVar4;
  uVar6 = 0;
  if (in_ECX[9] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(in_ECX[10] - in_ECX[9]) / 0x38;
  }
  FUN_200692e0(param_1,iVar4);
  param_1 = (undefined4 *)0x0;
  while( true ) {
    if (in_ECX[9] == 0) {
      return 0;
    }
    iVar4 = in_ECX[10] - in_ECX[9];
    if ((uint)(iVar4 / 0x38) <= uVar6) break;
    puVar7 = (undefined4 *)(in_ECX[9] + (int)param_1);
    FUN_200692e0(puVar3,*puVar7);
    FUN_200692e0(puVar3,puVar7[1]);
    FUN_200692b0(puVar3,puVar7 + 2);
    FUN_200692b0(puVar3,puVar7 + 5);
    FUN_20069310(puVar3,*(undefined1 *)(puVar7 + 8));
    FUN_20069310(puVar3,*(undefined1 *)((int)puVar7 + 0x21));
    FUN_20069310(puVar3,*(undefined1 *)((int)puVar7 + 0x22));
    FUN_200692e0(puVar3,puVar7[9]);
    FUN_200692e0(puVar3,puVar7[0xb]);
    uVar6 = uVar6 + 1;
    param_1 = (undefined4 *)((int)param_1 + 0x38);
  }
  return iVar4 * -0x6db6db6d;
}

