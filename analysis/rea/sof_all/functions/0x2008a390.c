// rea decompile_all
// name: FUN_2008a390
// address: 0x2008a390
// body: available
// range: 0x2008a390-0x2008a513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008a390(uint param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int in_ECX;
  undefined1 *puVar9;
  uint uVar10;
  int local_24;
  int *local_20;
  uint local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 local_8;
  undefined1 local_4;
  
  uVar6 = param_4;
  local_1c = 0;
  local_18 = in_ECX;
  do {
    while( true ) {
      if (*(int *)(local_18 + 0x80) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (*(int *)(local_18 + 0x84) - *(int *)(local_18 + 0x80)) / 0x18;
      }
      uVar7 = local_1c & 0xffff;
      if (uVar10 <= uVar7) {
        return;
      }
      if (*(char *)(uVar7 + *(int *)(param_2 + 4)) == '\0') break;
LAB_2008a4f8:
      local_1c = local_1c + 1;
    }
    piVar2 = (int *)(*(int *)(local_18 + 0x5c) + -8 + (param_1 & 0xffff) * 8);
    iVar1 = *(int *)(local_18 + 0x80) + uVar7 * 0x18;
    if ((*(short *)(*(int *)(*(int *)(local_18 + 0x80) + 0xc + uVar7 * 0x18) + *piVar2 * 2) < 0) ||
       (*(int *)(iVar1 + 4) != param_3)) goto LAB_2008a4f8;
    bVar3 = true;
    local_24 = (int)*(short *)(*(int *)(iVar1 + 0xc) + *piVar2 * 2);
    piVar2 = *(int **)(uVar6 + 4);
    piVar4 = piVar2;
    piVar5 = (int *)piVar2[1];
    while (piVar5 != *(int **)(uVar6 + 8)) {
      bVar3 = local_24 < piVar5[3];
      piVar4 = piVar5;
      if (bVar3) {
        piVar5 = (int *)*piVar5;
      }
      else {
        piVar5 = (int *)piVar5[2];
      }
    }
    if (*(char *)(uVar6 + 0xc) == '\0') {
      local_20 = piVar4;
      if (bVar3) {
        if (piVar4 == (int *)*piVar2) {
          puVar9 = local_10;
          goto LAB_2008a471;
        }
        FUN_20086f30();
      }
      if (local_24 <= local_20[3]) {
        param_4 = param_4 & 0xffffff00;
        FUN_2008c5b0(&local_20,&param_4);
        goto LAB_2008a4f8;
      }
      puVar8 = (undefined4 *)FUN_20073fb0(local_c,piVar5,piVar4,&local_24);
      local_8 = *puVar8;
    }
    else {
      puVar9 = local_14;
LAB_2008a471:
      puVar8 = (undefined4 *)FUN_20073fb0(puVar9,piVar5,piVar4,&local_24);
      local_8 = *puVar8;
    }
    local_1c = local_1c + 1;
    local_4 = 1;
  } while( true );
}

