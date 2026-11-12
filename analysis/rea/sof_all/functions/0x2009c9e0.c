// rea decompile_all
// name: FUN_2009c9e0
// address: 0x2009c9e0
// body: available
// range: 0x2009c9e0-0x2009cdfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009c9e0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 *puVar6;
  int in_ECX;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  char local_823;
  undefined1 local_822;
  undefined1 local_821;
  undefined1 local_820;
  void *local_81c;
  int local_818;
  int local_814;
  int local_810;
  uint local_80c;
  undefined1 local_808 [4];
  char *local_804;
  undefined1 local_7f8 [16];
  undefined4 local_7e8;
  undefined1 local_7e4 [8];
  char local_7dc [1000];
  undefined1 local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010d057;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_810 = in_ECX;
  FUN_2009e1f0();
  local_820 = *(undefined1 *)(in_ECX + 0x28);
  iVar2 = FUN_2008c740();
  uVar11 = 0;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  local_81c = operator_new(iVar2 * 4);
  local_818 = FUN_2008dea0(*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x30),local_81c);
  local_4 = 0;
  local_814 = local_818;
  FUN_2009e4c0(*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x30));
  FUN_20058cb0();
  pvVar5 = local_81c;
  iVar2 = local_818;
  iVar12 = in_ECX;
  for (; (pvVar5 != (void *)0x0 && (uVar11 < (uint)(iVar2 - (int)pvVar5 >> 2))); uVar11 = uVar11 + 1
      ) {
    if ((*(char *)(*(int *)(iVar12 + 0x3c) + uVar11) != '\0') &&
       (FUN_2009b2f0(&local_823,&local_822,&local_821), pvVar5 = local_81c, iVar2 = local_818,
       local_823 != '\0')) {
      FUN_2009e320(*(undefined4 *)(in_ECX + 0x30),(void *)((int)local_81c + uVar11 * 4));
      local_808[0] = local_822;
      FUN_2000a5b0(0);
      local_4._0_1_ = 1;
      pcVar10 = *(char **)(*(int *)((int)local_81c + uVar11 * 4) + 0xc);
      pcVar7 = "";
      if (pcVar10 != (char *)0x0) {
        pcVar7 = pcVar10;
      }
      pcVar10 = local_7dc;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        *pcVar10 = cVar1;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_20107ed2(local_7dc);
      uVar8 = 0xffffffff;
      pcVar10 = local_7dc;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600(local_7dc,~uVar8 - 1);
      if (*(int *)(in_ECX + 0x2c) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x2c) >> 2;
      }
      local_80c = 0;
      uVar3 = FUN_2009dbf0(local_808,&local_80c);
      local_4._0_1_ = 2;
      piVar4 = (int *)FUN_2003c140(local_7e4,uVar3);
      iVar12 = *piVar4;
      local_4._0_1_ = 1;
      FUN_2000a5b0(1);
      *(int *)(iVar12 + 0x1c) = iVar2 + -1;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_2000a5b0(1);
      pvVar5 = local_81c;
      iVar2 = local_818;
      iVar12 = local_810;
    }
  }
  uVar11 = 0;
  do {
    while( true ) {
      if ((pvVar5 == (void *)0x0) || ((uint)(iVar2 - (int)pvVar5 >> 2) <= uVar11)) {
        uVar3 = FUN_2009f410(*(undefined4 *)(iVar12 + 0x40),*(undefined4 *)(iVar12 + 0x40),
                             *(undefined4 *)(iVar12 + 0x3c));
        FUN_2008c730(uVar3,*(undefined4 *)(iVar12 + 0x40));
        *(undefined4 *)(iVar12 + 0x40) = uVar3;
        local_4 = 0xffffffff;
        FUN_2008c730(local_81c,local_818);
        FUN_200f9f75(local_81c);
        ExceptionList = local_c;
        return;
      }
      if (*(char *)(*(int *)(iVar12 + 0x3c) + uVar11) == '\0') break;
      FUN_2009b2f0(&local_823,&local_822,&local_821);
      if (local_823 == '\0') {
        FUN_2009e320(*(undefined4 *)(in_ECX + 0x30),(void *)((int)local_81c + uVar11 * 4));
        local_808[0] = local_822;
        FUN_2000a5b0(0);
        local_4 = CONCAT31(local_4._1_3_,3);
        pcVar10 = *(char **)(*(int *)((int)local_81c + uVar11 * 4) + 0xc);
        pcVar7 = "";
        if (pcVar10 != (char *)0x0) {
          pcVar7 = pcVar10;
        }
        pcVar10 = local_7dc;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          *pcVar10 = cVar1;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_20107ed2(local_7dc);
        uVar8 = 0xffffffff;
        pcVar10 = local_7dc;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8 - 1;
        local_80c = uVar8;
        cVar1 = FUN_2000a6c0(uVar8,1);
        if (cVar1 != '\0') {
          pcVar10 = local_7dc;
          pcVar7 = local_804;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar7 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar7 = pcVar7 + 1;
          }
          FUN_2000a6a0(uVar8);
        }
        if (*(int *)(in_ECX + 0x2c) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x2c) >> 2;
        }
        FUN_200234d0(local_808);
        local_7e8 = 0;
        local_4._0_1_ = 4;
        piVar4 = (int *)FUN_2003c140(local_7e4,local_7f8);
        iVar12 = *piVar4;
        local_4._0_1_ = 3;
        FUN_2000a5b0(1);
        *(int *)(iVar12 + 0x1c) = iVar2 + -1;
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_2000a5b0(1);
        iVar12 = local_810;
      }
LAB_2009cd8a:
      uVar11 = uVar11 + 1;
      pvVar5 = local_81c;
      iVar2 = local_818;
    }
    puVar6 = *(undefined1 **)(*(int *)((int)pvVar5 + uVar11 * 4) + 0xc);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_201116cc;
    }
    FUN_200fabac(local_3f4,s_Material__s_was_unused_and_remov_201573b0,puVar6);
    FUN_2008ea00(local_3f4,0);
    iVar2 = *(int *)((int)local_81c + uVar11 * 4);
    if (iVar2 == 0) goto LAB_2009cd8a;
    FUN_2009ce00();
    FUN_200f9f75(iVar2);
    uVar11 = uVar11 + 1;
    pvVar5 = local_81c;
    iVar2 = local_818;
  } while( true );
}

