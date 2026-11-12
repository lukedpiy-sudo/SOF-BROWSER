// rea decompile_all
// name: FUN_200c92d0
// address: 0x200c92d0
// body: available
// range: 0x200c92d0-0x200c9492 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200c930a) */

int FUN_200c92d0(char *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int local_128;
  undefined1 local_11c [4];
  char *local_118;
  undefined4 local_114;
  undefined4 local_110;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e17b;
  local_c = ExceptionList;
  iVar4 = *(int *)(param_2 + 4);
  local_128 = 0;
  iVar1 = *(int *)(param_2 + 8);
  ExceptionList = &local_c;
  for (iVar7 = iVar4; iVar7 != iVar1; iVar7 = iVar7 + 0x10) {
    FUN_2000a5b0(1);
  }
  *(int *)(param_2 + 8) = iVar4;
  iVar4 = -(int)param_1;
  do {
    cVar2 = *param_1;
    param_1[(int)(local_10c + iVar4)] = cVar2;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  iVar4 = -1;
  pcVar9 = local_10c;
  do {
    pcVar8 = pcVar9;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar8;
  } while (cVar2 != '\0');
  *(undefined2 *)(pcVar8 + -1) = DAT_20136484;
  pcVar9 = local_10c;
  puVar3 = (undefined1 *)FUN_200faaf0(local_10c,0x2c);
  do {
    if (puVar3 == (undefined1 *)0x0) {
      ExceptionList = local_c;
      return local_128;
    }
    *puVar3 = 0;
    uVar5 = 0xffffffff;
    pcVar8 = pcVar9;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    local_118 = (char *)0x0;
    local_114 = 0;
    local_110 = 0;
    cVar2 = FUN_2000a6c0(uVar5,1);
    if (cVar2 != '\0') {
      pcVar8 = pcVar9;
      pcVar10 = local_118;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_2000a6a0(uVar5);
    }
    local_4 = 0;
    FUN_2008ce10(*(undefined4 *)(param_2 + 8),1,local_11c);
    local_4 = 0xffffffff;
    if (local_118 != (char *)0x0) {
      if (local_118[-1] == '\0') {
        FUN_200f9f75(local_118 + -1);
      }
      else {
        local_118[-1] = local_118[-1] + -1;
      }
    }
    local_118 = (char *)0x0;
    local_114 = 0;
    local_110 = 0;
    iVar4 = (*DAT_2040363c)(pcVar9,param_3);
    if (local_128 < iVar4) {
      local_128 = iVar4;
    }
    pcVar9 = puVar3 + 1;
    puVar3 = (undefined1 *)FUN_200faaf0(pcVar9,0x2c);
  } while( true );
}

