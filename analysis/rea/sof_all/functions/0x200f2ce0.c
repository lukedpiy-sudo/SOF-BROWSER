// rea decompile_all
// name: FUN_200f2ce0
// address: 0x200f2ce0
// body: available
// range: 0x200f2ce0-0x200f2df5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f2ce0(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = param_1;
  if (*(int *)(param_1 + 0x1c) == 1) {
    pcVar1 = param_1 + 0x18;
    FUN_200f36d0(pcVar1);
    if (*(int *)(pcVar2 + 0x1c) == 2) {
      iVar5 = *(int *)(pcVar2 + 0x36c);
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2[4] = '\0';
      pcVar2[5] = '\0';
      pcVar2[6] = '\0';
      pcVar2[7] = '\0';
      if (iVar5 != 0) {
        param_1 = s_Disconnected_20159b68;
        FUN_200edf60(pcVar2,1,iVar5,&param_1,*(undefined4 *)(pcVar2 + 0x378),0,0,4);
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_200f3d20(pcVar1);
      while (puVar3 != (undefined4 *)0x0) {
        if (*(int *)(pcVar2 + 0x368) != 0) {
          param_1 = (char *)*puVar3;
          FUN_200edf60(pcVar2,0,*(int *)(pcVar2 + 0x368),&param_1,*(undefined4 *)(pcVar2 + 0x378),0,
                       0,4);
        }
        iVar5 = 0;
        if (0 < DAT_201599b0) {
          do {
            iVar4 = __strcmpi((char *)puVar3[5],(&PTR_s_PRIVMSG_20159868)[iVar5 * 2]);
            if (iVar4 == 0) {
              if ((code *)(&PTR_FUN_2015986c)[iVar5 * 2] != (code *)0x0) {
                (*(code *)(&PTR_FUN_2015986c)[iVar5 * 2])(pcVar2,puVar3);
              }
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < DAT_201599b0);
        }
        puVar3 = (undefined4 *)FUN_200f3d20(pcVar1);
      }
    }
  }
  FUN_200efc70(pcVar2);
  FUN_200eed30(pcVar2,param_2);
  return;
}

