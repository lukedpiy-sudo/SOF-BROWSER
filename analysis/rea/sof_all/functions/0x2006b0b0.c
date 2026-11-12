// rea decompile_all
// name: FUN_2006b0b0
// address: 0x2006b0b0
// body: available
// range: 0x2006b0b0-0x2006b1e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006b0b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  if (*(int *)(in_ECX + 0xcc) == 0) {
    if (0 < (short)param_2) {
      FUN_20076e50(param_2);
    }
  }
  else {
    FUN_20070d70(&param_2);
    piVar1 = *(int **)(in_ECX + 0xc0);
    piVar3 = (int *)*piVar1;
    while (piVar3 != piVar1) {
      iVar2 = piVar3[4];
      local_1c = param_2;
      FUN_20071e30(&local_18,&local_1c);
      if (local_18 == *(int *)(iVar2 + 0x34)) {
        FUN_2006eb60(local_10,&local_1c);
      }
      else {
        FUN_2006ec20(local_14,local_18);
      }
      FUN_200722e0(local_8,piVar3 + 3);
      FUN_20085230();
      piVar1 = *(int **)(in_ECX + 0xc0);
    }
  }
  FUN_20074650(&local_1c,&param_2);
  if ((local_1c == *(int *)(in_ECX + 0x40)) || ((short)param_2 < *(short *)(local_1c + 0xc))) {
    local_18 = *(int *)(in_ECX + 0x40);
    piVar3 = &local_18;
  }
  else {
    piVar3 = &local_1c;
  }
  if ((*piVar3 != *(int *)(in_ECX + 0x40)) && (FUN_20072720(local_14,*piVar3), param_1 != 0)) {
    FUN_2006b1f0();
    FUN_200f9f75(param_1);
  }
  return;
}

