// rea decompile_all
// name: FUN_200c4fb0
// address: 0x200c4fb0
// body: available
// range: 0x200c4fb0-0x200c52bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c4fb0(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5
                 )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined1 auStack_824 [4];
  char *pcStack_820;
  uint uStack_81c;
  int iStack_814;
  int local_810;
  char acStack_80c [1024];
  char acStack_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010de0e;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_810 = in_ECX;
  uVar2 = FUN_200c59d0(*(undefined4 *)(param_5 + 8),*(undefined4 *)(param_5 + 8),
                       *(undefined4 *)(param_5 + 4));
  FUN_200716d0(uVar2,*(undefined4 *)(param_5 + 8));
  *(undefined4 *)(param_5 + 8) = uVar2;
  iStack_814 = (*DAT_2040363c)(&DAT_2011d72c,in_ECX + 0x8c);
  pcVar4 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar4 = "";
  }
  pcVar7 = acStack_40c;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar8 = 0;
  acStack_80c[0] = '\0';
  pcVar4 = (char *)FUN_200fb453(acStack_40c,&DAT_201582cc);
  while (pcVar4 != (char *)0x0) {
    iVar3 = (*DAT_2040363c)(pcVar4,in_ECX + 0x8c);
    iVar8 = iVar3 + iVar8 + iStack_814;
    if (iVar8 < *(int *)(in_ECX + 0x20)) {
      uVar5 = 0xffffffff;
      do {
        pcVar7 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar7 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar3 = -1;
      pcVar4 = acStack_80c;
      do {
        pcVar9 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar1 != '\0');
      pcVar4 = pcVar7 + -uVar5;
      pcVar7 = pcVar9 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar7 = pcVar7 + 1;
      }
      iVar3 = -1;
      pcVar4 = acStack_80c;
      do {
        pcVar7 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 != '\0');
      *(undefined2 *)(pcVar7 + -1) = DAT_2011d72c;
      pcVar4 = (char *)FUN_200fb453(0,&DAT_201582cc);
      in_ECX = local_810;
    }
    else {
      FUN_2000a5b0(0);
      uVar5 = 0xffffffff;
      pcVar7 = acStack_80c;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_2000a6c0(uVar5,1);
      if (cVar1 != '\0') {
        pcVar7 = acStack_80c;
        pcVar9 = pcStack_820;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        pcStack_820[uVar5] = '\0';
        uStack_81c = uVar5;
      }
      local_4._0_1_ = 1;
      FUN_2008ce10(*(undefined4 *)(param_5 + 8),1,auStack_824);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_2000a5b0(1);
      iVar8 = -1;
      pcVar7 = acStack_80c;
      do {
        pcVar9 = pcVar7;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      *(undefined2 *)(pcVar9 + -1) = DAT_2011d72c;
      iVar8 = -(int)pcVar4;
      do {
        cVar1 = *pcVar4;
        pcVar4[(int)(acStack_80c + iVar8)] = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar8 = -1;
      pcVar4 = acStack_80c;
      do {
        pcVar7 = pcVar4;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar7 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 != '\0');
      *(undefined2 *)(pcVar7 + -1) = DAT_2011d72c;
      iVar8 = iVar3 + iStack_814 * 2;
      pcVar4 = (char *)FUN_200fb453(0,&DAT_201582cc);
      in_ECX = local_810;
    }
  }
  FUN_2000a5b0(0);
  uVar5 = 0xffffffff;
  pcVar4 = acStack_80c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_2000a6c0(uVar5,1);
  if (cVar1 != '\0') {
    pcVar4 = acStack_80c;
    pcVar7 = pcStack_820;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar7 = pcVar7 + 1;
    }
    pcStack_820[uVar5] = '\0';
    uStack_81c = uVar5;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_2008ce10(*(undefined4 *)(param_5 + 8),1,auStack_824);
  if (pcStack_820 != (char *)0x0) {
    if (pcStack_820[-1] == '\0') {
      FUN_200f9f75(pcStack_820 + -1);
    }
    else {
      pcStack_820[-1] = pcStack_820[-1] + -1;
    }
  }
  if (param_2 != (char *)0x0) {
    if (param_2[-1] != '\0') {
      param_2[-1] = param_2[-1] + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_200f9f75(param_2 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

