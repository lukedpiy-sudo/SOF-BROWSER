// rea decompile_all
// name: FUN_200ef240
// address: 0x200ef240
// body: available
// range: 0x200ef240-0x200ef2f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ef240(int param_1,char *param_2,code *param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  char local_158 [344];
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_158 + -(int)param_2)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_200f9600(*(undefined4 *)(param_1 + 0x37c),local_158);
  if (iVar3 != 0) {
    local_168 = param_1;
    local_164 = 0;
    local_160 = 0;
    local_15c = 0;
    FUN_200f9650(*(undefined4 *)(iVar3 + 0xac),FUN_200ef300,&local_168);
    (*param_3)(param_1,param_2,local_164,local_160,local_15c,param_4);
    FUN_200f9d32(local_160);
    FUN_200f9d32(local_15c);
  }
  return;
}

