// rea decompile_all
// name: FUN_2008cc10
// address: 0x2008cc10
// body: available
// range: 0x2008cc10-0x2008cccc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008cc10(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_ECX;
  bool bVar5;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(in_ECX + 4);
  bVar5 = true;
  piVar2 = piVar1;
  piVar3 = (int *)piVar1[1];
  while (piVar3 != *(int **)(in_ECX + 8)) {
    bVar5 = *param_2 < (uint)piVar3[3];
    piVar2 = piVar3;
    if (bVar5) {
      piVar3 = (int *)*piVar3;
    }
    else {
      piVar3 = (int *)piVar3[2];
    }
  }
  if (*(char *)(in_ECX + 0xc) == '\0') {
    if (bVar5) {
      if (piVar2 == (int *)*piVar1) {
        puVar4 = (undefined4 *)FUN_2009e4f0(local_4,piVar3,piVar2,param_2);
        *param_1 = *puVar4;
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      }
      FUN_2008e140();
    }
    if (*param_2 <= (uint)piVar2[3]) {
      *param_1 = piVar2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  puVar4 = (undefined4 *)FUN_2009e4f0(local_4,piVar3,piVar2,param_2);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

