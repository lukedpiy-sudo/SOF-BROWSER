// rea decompile_all
// name: FUN_200efa80
// address: 0x200efa80
// body: available
// range: 0x200efa80-0x200efb94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200efa80(int param_1,char *param_2,char *param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *local_220;
  char *local_21c;
  uint local_218;
  char local_214 [188];
  char local_158 [344];
  
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_158 + -(int)param_3)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_200f9600(*(undefined4 *)(param_1 + 0x37c),local_158);
  if (iVar3 != 0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)(local_214 + -(int)param_2)] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_200f9600(*(undefined4 *)(iVar3 + 0xac),local_214);
    if (iVar4 != 0) {
      if (param_4 == 2) {
        *(undefined4 *)(iVar4 + 0xb8) = param_5;
      }
      else if (param_4 == 1) {
        *(undefined4 *)(iVar4 + 0xb4) = param_5;
      }
      if (*(int *)(iVar3 + 0x9c) != 0) {
        local_220 = param_3;
        local_21c = param_2;
        if (*(int *)(iVar4 + 0xb8) == 0) {
          local_218 = (uint)(*(int *)(iVar4 + 0xb4) != 0);
        }
        else {
          local_218 = 2;
        }
        FUN_200edf60(param_1,0xb,*(undefined4 *)(iVar3 + 0x9c),&local_220,
                     *(undefined4 *)(iVar3 + 0xa8),0,param_3,0xc);
      }
    }
  }
  return;
}

