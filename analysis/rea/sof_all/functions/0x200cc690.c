// rea decompile_all
// name: FUN_200cc690
// address: 0x200cc690
// body: available
// range: 0x200cc690-0x200cc9bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cc690(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char **ppcVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  char *in_stack_00000018;
  undefined4 auStack_d8 [4];
  undefined4 uStack_c8;
  char *apcStack_c4 [5];
  undefined1 local_a0 [4];
  int local_9c;
  undefined4 local_90 [6];
  int local_78;
  int local_4c;
  int local_48;
  uint local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e587;
  local_c = ExceptionList;
  ppcVar7 = apcStack_c4;
  puVar5 = (undefined4 *)register0x00000010;
  for (iVar4 = 5; puVar5 = puVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar7 = (char *)*puVar5;
    ppcVar7 = ppcVar7 + 1;
  }
  uStack_c8 = 0x200cc6cd;
  ExceptionList = &local_c;
  FUN_200e58d0();
  local_4 = 0;
  cVar2 = *in_stack_00000018;
  apcStack_c4[4] = in_stack_00000018;
  while (cVar2 == ' ') {
    pcVar1 = apcStack_c4[4] + 1;
    apcStack_c4[4] = apcStack_c4[4] + 1;
    cVar2 = *pcVar1;
  }
  apcStack_c4[3] = (char *)local_90;
  apcStack_c4[2] = (char *)0x200cc6fa;
  FUN_200cc2a0();
  puVar5 = *(undefined4 **)(in_ECX + 0x3c);
  if (puVar5 != *(undefined4 **)(in_ECX + 0x40)) {
    do {
      puVar6 = puVar5;
      ppcVar7 = apcStack_c4;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar7 = (char *)*puVar6;
        puVar6 = puVar6 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      puVar6 = local_90;
      puVar8 = auStack_d8;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      cVar2 = FUN_2004ddd0();
      if (cVar2 != '\0') {
        iVar9 = *(int *)(in_ECX + 0x48) - puVar5[0x11];
        *(int *)(in_ECX + 0x48) = iVar9;
        iVar4 = puVar5[0x12];
        apcStack_c4[3] = (char *)(iVar9 + local_4c);
        *(char **)(in_ECX + 0x48) = apcStack_c4[3];
        apcStack_c4[4] = (char *)(*(int *)(in_ECX + 0x4c) + (local_48 - iVar4));
        *(char **)(in_ECX + 0x4c) = apcStack_c4[4];
        apcStack_c4[2] = s__d__d_2011d118;
        apcStack_c4[1] = (char *)0x200cc7c0;
        apcStack_c4[1] = (char *)FUN_20055450();
        apcStack_c4[0] = s_player_summary_20158754;
        uStack_c8 = 0x200cc7cb;
        Cvar_Set();
        apcStack_c4[4] = local_a0;
        apcStack_c4[3] = (char *)0x200cc7dc;
        apcStack_c4[4] = (char *)FUN_200ce5c0();
        local_4._0_1_ = 1;
        apcStack_c4[3] = (char *)0x200cc7ec;
        FUN_200e5c10();
        apcStack_c4[4] = (char *)0x1;
        local_4._0_1_ = 0;
        apcStack_c4[3] = (char *)0x200cc7ff;
        FUN_2000a5b0();
        apcStack_c4[4] = local_a0;
        apcStack_c4[3] = (char *)0x200cc80d;
        apcStack_c4[2] = (char *)FUN_200ce480();
        apcStack_c4[4] = (char *)0xffffffff;
        apcStack_c4[3] = (char *)0x0;
        local_4._0_1_ = 2;
        apcStack_c4[1] = (char *)0x200cc822;
        FUN_2000a3a0();
        apcStack_c4[4] = (char *)0x1;
        local_4._0_1_ = 0;
        apcStack_c4[3] = (char *)0x200cc835;
        FUN_2000a5b0();
        apcStack_c4[4] = local_a0;
        apcStack_c4[3] = (char *)0x200cc843;
        apcStack_c4[2] = (char *)FUN_200c5b50();
        apcStack_c4[4] = (char *)0xffffffff;
        apcStack_c4[3] = (char *)0x0;
        local_4._0_1_ = 3;
        apcStack_c4[1] = (char *)0x200cc858;
        FUN_2000a3a0();
        apcStack_c4[4] = (char *)0x1;
        local_4._0_1_ = 0;
        apcStack_c4[3] = (char *)0x200cc86b;
        FUN_2000a5b0();
        apcStack_c4[4] = local_a0;
        apcStack_c4[3] = (char *)0x200cc879;
        apcStack_c4[2] = (char *)FUN_200ce700();
        apcStack_c4[4] = (char *)0xffffffff;
        apcStack_c4[3] = (char *)0x0;
        local_4 = CONCAT31(local_4._1_3_,4);
        apcStack_c4[1] = (char *)0x200cc88e;
        FUN_2000a3a0();
        if (local_9c != 0) {
          apcStack_c4[4] = (char *)(local_9c + -1);
          if (*(char *)(local_9c + -1) == '\0') {
            apcStack_c4[3] = (char *)0x200cc8aa;
            FUN_200f9f75();
          }
          else {
            *apcStack_c4[4] = *(char *)(local_9c + -1) + -1;
          }
        }
        apcStack_c4[4] = (char *)0x1;
        local_4 = 9;
        apcStack_c4[3] = (char *)0x200cc8c6;
        FUN_2000a5b0();
        apcStack_c4[4] = (char *)0x1;
        local_4._0_1_ = 8;
        apcStack_c4[3] = (char *)0x200cc8dc;
        FUN_2000a5b0();
        apcStack_c4[4] = (char *)0x1;
        local_4._0_1_ = 7;
        apcStack_c4[3] = (char *)0x200cc8ef;
        FUN_2000a5b0();
        apcStack_c4[4] = (char *)0x1;
        local_4._0_1_ = 6;
        apcStack_c4[3] = (char *)0x200cc902;
        FUN_2000a5b0();
        local_4 = CONCAT31(local_4._1_3_,5);
        goto LAB_200cc977;
      }
      puVar5 = puVar5 + 0x21;
    } while (puVar5 != *(undefined4 **)(in_ECX + 0x40));
  }
  apcStack_c4[4] = (char *)0x1;
  apcStack_c4[3] = (char *)0x200cc742;
  FUN_200216c0();
  apcStack_c4[3] = s_cl_violence_201373c0;
  apcStack_c4[2] = (char *)0x200cc74c;
  FUN_200216d0();
  apcStack_c4[2] = "j";
  uVar3 = __ftol();
  apcStack_c4[2] = (char *)0x0;
  apcStack_c4[1] = (char *)0x200cc75a;
  FUN_200216c0();
  bVar10 = (local_34 & uVar3) != uVar3;
  if (!bVar10) {
    apcStack_c4[3] = *(char **)(in_ECX + 0x40);
    apcStack_c4[4] = (char *)local_90;
    apcStack_c4[2] = (char *)0x200cc77f;
    FUN_200cd650();
  }
  apcStack_c4[3] = (char *)local_90;
  apcStack_c4[4] = (char *)(uint)bVar10;
  apcStack_c4[2] = (char *)0x200cc91a;
  FUN_200cc200();
  apcStack_c4[4] = (char *)0x1;
  local_4 = 0xe;
  apcStack_c4[3] = (char *)0x200cc933;
  FUN_2000a5b0();
  apcStack_c4[4] = (char *)0x1;
  local_4._0_1_ = 0xd;
  apcStack_c4[3] = (char *)0x200cc949;
  FUN_2000a5b0();
  apcStack_c4[4] = (char *)0x1;
  local_4._0_1_ = 0xc;
  apcStack_c4[3] = (char *)0x200cc95c;
  FUN_2000a5b0();
  apcStack_c4[4] = (char *)0x1;
  local_4._0_1_ = 0xb;
  apcStack_c4[3] = (char *)0x200cc96f;
  FUN_2000a5b0();
  local_4 = CONCAT31(local_4._1_3_,10);
LAB_200cc977:
  apcStack_c4[4] = (char *)0x1;
  apcStack_c4[3] = (char *)0x200cc982;
  FUN_2000a5b0();
  if (local_78 != 0) {
    apcStack_c4[4] = (char *)(local_78 + -1);
    if (*(char *)(local_78 + -1) == '\0') {
      apcStack_c4[3] = (char *)0x200cc99e;
      FUN_200f9f75();
    }
    else {
      *apcStack_c4[4] = *(char *)(local_78 + -1) + -1;
    }
  }
  ExceptionList = local_c;
  return;
}

