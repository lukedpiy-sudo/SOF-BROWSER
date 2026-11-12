// rea decompile_all
// name: FUN_200f0540
// address: 0x200f0540
// body: available
// range: 0x200f0540-0x200f05b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200f0540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5,char *param_6)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar2 = _malloc(0x130);
  iVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
    for (iVar3 = 0x4c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar3 = 0x30 - (int)param_6;
    puVar5 = puVar2;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *param_5;
      param_5 = param_5 + 1;
      puVar5 = puVar5 + 1;
    }
    do {
      cVar1 = *param_6;
      param_6[(int)puVar2 + iVar3] = cVar1;
      param_6 = param_6 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_200f0450(param_1,1,param_2,0,param_3,0,param_4,puVar2);
    if (iVar3 == 0) {
      FUN_200f9d32(puVar2);
    }
  }
  return iVar3;
}

