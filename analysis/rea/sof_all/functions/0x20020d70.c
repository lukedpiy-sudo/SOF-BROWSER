// rea decompile_all
// name: FUN_20020d70
// address: 0x20020d70
// body: available
// range: 0x20020d70-0x20020f84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20020d70(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  uint local_4;
  
  iVar5 = 0;
  iVar6 = DAT_2024af88 + -3;
  iVar4 = DAT_2024af88;
  if (iVar6 <= DAT_2024af88) {
    do {
      if (((-1 < iVar6) && (iVar2 = __ftol(), iVar2 != 0)) &&
         (local_4 = DAT_201c1f0c - iVar2,
         (float)(int)local_4 <= *(float *)(DAT_2024af68 + 0x18) * 1000.0)) {
        (*DAT_204035d0)(8,iVar5,*(int *)(DAT_2024af74 + (iVar6 % DAT_2024af78) * 4) + DAT_2024af7c,
                        DAT_2024af98);
        iVar5 = iVar5 + 8;
        iVar4 = DAT_2024af88;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar4);
  }
  if (DAT_201c1f04 == 2) {
    if (DAT_20367ea0 == 0) {
      pcVar3 = (char *)FUN_20058110(0x400);
      (*DAT_204035d0)(8,iVar5,pcVar3,0x400);
      local_4 = 0xffffffff;
      do {
        if (local_4 == 0) break;
        local_4 = local_4 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar3 = (char *)FUN_20058110(0x401);
      (*DAT_204035d0)(8,iVar5,pcVar3,0x400);
      local_4 = 0xffffffff;
      do {
        if (local_4 == 0) break;
        local_4 = local_4 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    local_4 = ~local_4;
    pcVar3 = &DAT_20364b70;
    if ((int)(((DAT_2040365c >> 3) - local_4) + -1) < DAT_20367eac) {
      pcVar3 = &DAT_20364b71 + local_4 + (DAT_20367eac - (DAT_2040365c >> 3));
    }
    iVar6 = 0;
    if (*pcVar3 != '\0') {
      iVar4 = local_4 * 8;
      do {
        if (DAT_20367ea0 == 0) {
          cVar1 = pcVar3[iVar6];
          puVar7 = &uStack_8;
          uStack_8 = 0;
          uStack_7 = 0xff;
          uStack_6 = 0xff;
          uStack_5 = 0xff;
        }
        else {
          cVar1 = pcVar3[iVar6];
          puVar7 = &uStack_c;
          uStack_c = 0;
          uStack_b = 0xff;
          uStack_a = 0;
          uStack_9 = 0xff;
        }
        (*DAT_204035c8)(iVar4,iVar5,(int)cVar1,puVar7);
        iVar2 = iVar6 + 1;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 8;
      } while (pcVar3[iVar2] != '\0');
    }
    uStack_5 = 0xff;
    uStack_7 = 0xff;
    uStack_8 = 0;
    uStack_6 = 0;
    if (DAT_20367ea0 == 0) {
      uStack_6 = 0xff;
    }
    (*DAT_204035c8)((iVar6 + local_4) * 8,iVar5,(DAT_201c1f0c >> 8 & 1U) + 10,&uStack_8);
    iVar5 = iVar5 + 8;
  }
  if (iVar5 != 0) {
    FUN_200140b0(0,0);
    FUN_200140b0(DAT_2040365c + -1,iVar5);
  }
  return;
}

