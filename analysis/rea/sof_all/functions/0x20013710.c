// rea decompile_all
// name: FUN_20013710
// address: 0x20013710
// body: available
// range: 0x20013710-0x2001395c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20013710(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  char *pcStack_18;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010ae18;
  local_c = ExceptionList;
  if ((*(float *)(DAT_2022fef0 + 0x18) != 0.0) && (*(float *)(DAT_202250a8 + 0x18) != 0.0)) {
    local_38 = 0x7f000000;
    ExceptionList = &local_c;
    (*DAT_204035f4)(&local_38);
    local_38 = FUN_20058110(0x408);
    FUN_2000a5b0(0);
    uVar2 = 0xffffffff;
    pcVar4 = s_title_2011d0d4;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_2000a6c0(uVar2,1);
    if (cVar1 != '\0') {
      pcVar4 = s_title_2011d0d4;
      pcVar5 = pcStack_28;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      pcStack_28[uVar2] = '\0';
      uStack_24 = uVar2;
    }
    uStack_4 = 0;
    iStack_30 = (*DAT_2040363c)(local_38,auStack_2c);
    uStack_4 = 0xffffffff;
    FUN_2000a5b0(1);
    uVar2 = 0xffffffff;
    pcStack_28 = (char *)0x0;
    pcVar4 = s_title_2011d0d4;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_2000a600(s_title_2011d0d4,~uVar2 - 1);
    uStack_4 = 1;
    iStack_34 = (*DAT_20403640)(auStack_2c);
    uStack_4 = 0xffffffff;
    if (pcStack_28 != (char *)0x0) {
      if (*(char *)((int)pcStack_28 + -1) == '\0') {
        FUN_200f9f75((char *)((int)pcStack_28 + -1));
      }
      else {
        *(char *)((int)pcStack_28 + -1) = *(char *)((int)pcStack_28 + -1) + -1;
      }
    }
    FUN_2000a5b0(0);
    uVar2 = 0xffffffff;
    pcVar4 = s_title_2011d0d4;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_2000a6c0(uVar2,1);
    if (cVar1 != '\0') {
      pcVar4 = s_title_2011d0d4;
      pcVar5 = pcStack_18;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      pcStack_18[uVar2] = '\0';
      uStack_14 = uVar2;
    }
    uStack_4 = 2;
    (*DAT_20403638)(DAT_2040365c - iStack_30 >> 1,DAT_20403660 - iStack_34 >> 1,local_38,0xff00ffff,
                    auStack_1c,0);
    if (pcStack_18 != (char *)0x0) {
      if (pcStack_18[-1] != '\0') {
        pcStack_18[-1] = pcStack_18[-1] + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_200f9f75(pcStack_18 + -1);
    }
  }
  ExceptionList = local_c;
  return;
}

