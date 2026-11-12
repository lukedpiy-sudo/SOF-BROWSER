// rea decompile_all
// name: FUN_200f7bd0
// address: 0x200f7bd0
// body: available
// range: 0x200f7bd0-0x200f7c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f7bd0(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  undefined4 local_8 [2];
  
  iVar3 = 9;
  bVar6 = true;
  pcVar4 = param_2;
  pcVar5 = s_hostaddr_2015a908;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *pcVar4 == *pcVar5;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    uVar1 = Ordinal_11(*param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_200f9600(param_1[4],&param_2);
  if (puVar2 != (undefined4 *)0x0) {
    local_8[0] = *puVar2;
    iVar3 = FUN_200f9600(param_1[3],local_8);
    if (iVar3 != 0) {
      return *(undefined4 *)(iVar3 + 4);
    }
  }
  return param_3;
}

