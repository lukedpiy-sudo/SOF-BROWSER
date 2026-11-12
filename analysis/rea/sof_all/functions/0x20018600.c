// rea decompile_all
// name: FUN_20018600
// address: 0x20018600
// body: available
// range: 0x20018600-0x20018732 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20018600(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int local_4;
  
  local_4 = 0;
  iVar2 = FUN_2001e9b0();
  if (0 < iVar2) {
    iVar2 = 2;
    iVar8 = 1;
    do {
      pcVar3 = (char *)FUN_2001e9c0(local_4);
      iVar6 = 5;
      bVar9 = true;
      pcVar5 = &DAT_2012010c;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar9 = *pcVar3 == *pcVar5;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar9);
      if (bVar9) {
        uVar4 = FUN_2001e9c0(iVar2,0x20);
        iVar6 = FUN_200faaf0(uVar4);
        if (iVar6 == 0) {
          uVar4 = FUN_2001e9c0(iVar2);
          uVar4 = FUN_2001e9c0(iVar8,uVar4);
          pcVar3 = s_set__s__s_201200f0;
        }
        else {
          uVar4 = FUN_2001e9c0(iVar2);
          uVar4 = FUN_2001e9c0(iVar8,uVar4);
          pcVar3 = s_set__s___s__201200fc;
        }
        pcVar5 = (char *)FUN_20055450(pcVar3,uVar4);
        uVar7 = 0xffffffff;
        pcVar3 = pcVar5;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if ((int)((~uVar7 - 1) + DAT_2023f830) < DAT_2023f82c) {
          uVar7 = 0xffffffff;
          pcVar3 = pcVar5;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          FUN_2001e7b0(&DAT_2023f824,pcVar5,~uVar7 - 1);
        }
        else {
          Com_Printf(s_Cbuf_AddText__overflow_201200b8);
        }
        if (param_1 != 0) {
          FUN_2001e9f0(local_4);
          FUN_2001e9f0(iVar8);
          FUN_2001e9f0(iVar2);
        }
        iVar8 = iVar8 + 2;
        local_4 = local_4 + 2;
        iVar2 = iVar2 + 2;
      }
      local_4 = local_4 + 1;
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + 1;
      iVar6 = FUN_2001e9b0();
    } while (local_4 < iVar6);
  }
  return;
}

