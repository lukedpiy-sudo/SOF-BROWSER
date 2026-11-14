// rea decompile_all
// name: FUN_30010a00
// address: 0x30010a00
// body: available
// range: 0x30010a00-0x30010c5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_30010a00(void *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  char *pcVar9;
  uint *puVar10;
  byte *local_40;
  undefined1 local_3c [4];
  char *pcStack_38;
  uint uStack_34;
  undefined1 auStack_2c [4];
  uint *puStack_28;
  uint uStack_24;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3002b818;
  pvStack_c = ExceptionList;
  local_3c[0] = param_1._0_1_;
  ExceptionList = &pvStack_c;
  FUN_300033d0(local_3c,'\0');
  local_1c[0] = param_1._0_1_;
  local_4 = 0;
  FUN_300033d0(local_1c,'\0');
  local_4._0_1_ = 1;
  iVar3 = (*DAT_3008fdf4)(s_drivers_cards_txt_3002f7d8,&local_40,0);
  if (iVar3 == -1) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_300033d0(local_1c,'\x01');
    local_4 = 0xffffffff;
    uVar4 = FUN_300033d0(local_3c,'\x01');
    ExceptionList = pvStack_c;
    return uVar4 & 0xffffff00;
  }
  pcVar5 = (char *)FUN_30020a90(local_40,(byte *)";\r\n\t ");
  this = param_1;
  do {
    if (pcVar5 == (char *)0x0) {
      (*DAT_3008fdf8)(local_40);
      if (iStack_18 != 0) {
        if (*(char *)(iStack_18 + -1) == '\0') {
          FUN_3001f8bc((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = *(char *)(iStack_18 + -1) + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uVar6 = 0;
      if (pcStack_38 != (char *)0x0) {
        pcVar5 = pcStack_38 + -1;
        if (pcStack_38[-1] != '\0') {
          *pcVar5 = pcStack_38[-1] + -1;
          ExceptionList = pvStack_c;
          return CONCAT31((int3)((uint)pcVar5 >> 8),1);
        }
        uVar6 = FUN_3001f8bc(pcVar5);
      }
      ExceptionList = pvStack_c;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar5;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    uVar6 = FUN_30003420(local_3c,uVar4,'\x01');
    if ((char)uVar6 != '\0') {
      pcVar9 = pcStack_38;
      for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar9 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar9 = pcVar9 + 1;
      }
      pcStack_38[uVar4] = '\0';
      uStack_34 = uVar4;
    }
    puVar7 = (uint *)FUN_30020a90((byte *)0x0,(byte *)";\r\n\t ");
    if (puVar7 != (uint *)0x0) {
      FUN_3002b3fc(puVar7);
      auStack_2c[0] = param_1._0_1_;
      FUN_300033d0(auStack_2c,'\0');
      uVar4 = 0xffffffff;
      puVar10 = puVar7;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        uVar8 = *puVar10;
        puVar10 = (uint *)((int)puVar10 + 1);
      } while ((char)uVar8 != '\0');
      uVar4 = ~uVar4 - 1;
      uVar6 = FUN_30003420(auStack_2c,uVar4,'\x01');
      if ((char)uVar6 != '\0') {
        puVar10 = puStack_28;
        for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(char *)puVar10 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        *(undefined1 *)((int)puStack_28 + uVar4) = 0;
        uStack_24 = uVar4;
      }
      local_4._0_1_ = 2;
      FUN_300119d0(this,&param_1,*(int *)((int)this + 4),auStack_2c);
      local_4._0_1_ = 1;
      FUN_300033d0(auStack_2c,'\x01');
      puVar2 = *(undefined4 **)((int)this + 4);
      iVar3 = FUN_30011a30(puVar2,puVar2[1]);
      puVar2[1] = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      FUN_30011a60((undefined1 *)(iVar3 + 8),local_3c);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
    pcVar5 = (char *)FUN_30020a90((byte *)0x0,(byte *)";\r\n\t ");
  } while( true );
}

