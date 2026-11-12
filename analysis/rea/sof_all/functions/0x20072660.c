// rea decompile_all
// name: FUN_20072660
// address: 0x20072660
// body: available
// range: 0x20072660-0x2007271c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20072660(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(in_ECX + 4);
  bVar2 = true;
  piVar3 = piVar1;
  piVar4 = (int *)piVar1[1];
  while (piVar4 != *(int **)(in_ECX + 8)) {
    bVar2 = *param_2 < piVar4[3];
    piVar3 = piVar4;
    if (bVar2) {
      piVar4 = (int *)*piVar4;
    }
    else {
      piVar4 = (int *)piVar4[2];
    }
  }
  if (*(char *)(in_ECX + 0xc) == '\0') {
    if (bVar2) {
      if (piVar3 == (int *)*piVar1) {
        puVar5 = (undefined4 *)FUN_200753a0(local_4,piVar4,piVar3,param_2);
        *param_1 = *puVar5;
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      }
      FUN_2008e140();
    }
    if (*param_2 <= piVar3[3]) {
      *param_1 = piVar3;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  puVar5 = (undefined4 *)FUN_200753a0(local_4,piVar4,piVar3,param_2);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

