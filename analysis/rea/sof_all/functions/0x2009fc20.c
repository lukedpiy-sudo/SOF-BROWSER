// rea decompile_all
// name: FUN_2009fc20
// address: 0x2009fc20
// body: available
// range: 0x2009fc20-0x2009fe09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2009fdf3) */
/* WARNING: Removing unreachable block (ram,0x2009fdbb) */
/* WARNING: Removing unreachable block (ram,0x2009fd91) */
/* WARNING: Removing unreachable block (ram,0x2009fda8) */
/* WARNING: Removing unreachable block (ram,0x2009fdb4) */
/* WARNING: Removing unreachable block (ram,0x2009fdc9) */

void FUN_2009fc20(uint param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  char *pcVar6;
  char *in_ECX;
  int iVar7;
  void *pvVar8;
  char *pcVar9;
  
  if (*in_ECX == '\0') {
    iVar3 = *(int *)(in_ECX + 8);
    pcVar1 = in_ECX + 2;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(in_ECX + 0xc) - iVar3;
    }
    if (uVar2 < param_1) {
      if (iVar3 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(in_ECX + 0xc) - iVar3;
      }
      pcVar9 = *(char **)(in_ECX + 0xc);
      param_1 = param_1 - iVar7;
      if ((uint)(*(int *)(in_ECX + 0x10) - (int)pcVar9) < param_1) {
        if ((iVar3 == 0) || (uVar2 = (int)pcVar9 - iVar3, (uint)((int)pcVar9 - iVar3) <= param_1)) {
          uVar2 = param_1;
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)pcVar9 - iVar3;
        }
        uVar2 = iVar3 + uVar2;
        uVar4 = uVar2;
        if ((int)uVar2 < 0) {
          uVar4 = 0;
        }
        pvVar5 = operator_new(uVar4);
        pvVar8 = pvVar5;
        for (pcVar6 = *(char **)(in_ECX + 8); pcVar6 != pcVar9; pcVar6 = pcVar6 + 1) {
          FUN_200a0430(pvVar8,pcVar6);
          pvVar8 = (void *)((int)pvVar8 + 1);
        }
        FUN_20082400(pvVar8,param_1,pcVar1);
        FUN_200823d0(pcVar9,*(undefined4 *)(in_ECX + 0xc),(int)pvVar8 + param_1);
        FUN_200f9f75(*(undefined4 *)(in_ECX + 8));
        iVar3 = *(int *)(in_ECX + 8);
        *(uint *)(in_ECX + 0x10) = (int)pvVar5 + uVar2;
        if (iVar3 == 0) {
          *(void **)(in_ECX + 8) = pvVar5;
          *(uint *)(in_ECX + 0xc) = (int)pvVar5 + param_1;
          return;
        }
        *(void **)(in_ECX + 8) = pvVar5;
        *(uint *)(in_ECX + 0xc) = (int)pvVar5 + param_1 + (*(int *)(in_ECX + 0xc) - iVar3);
        return;
      }
      if (param_1 != 0) {
        FUN_200823d0(pcVar9,pcVar9,pcVar9 + param_1);
        FUN_20082400(*(int *)(in_ECX + 0xc),pcVar9 + (param_1 - *(int *)(in_ECX + 0xc)),pcVar1);
        pcVar6 = *(char **)(in_ECX + 0xc);
        for (; pcVar9 != pcVar6; pcVar9 = pcVar9 + 1) {
          *pcVar9 = *pcVar1;
        }
        *(uint *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + param_1;
        return;
      }
    }
    else if ((iVar3 != 0) && (param_1 < (uint)(*(int *)(in_ECX + 0xc) - iVar3))) {
      *(uint *)(in_ECX + 0xc) = iVar3 + param_1;
    }
  }
  return;
}

