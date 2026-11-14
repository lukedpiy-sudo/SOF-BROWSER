// rea decompile_all
// name: FUN_300045b0
// address: 0x300045b0
// body: available
// range: 0x300045b0-0x3000493e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_300045b0(void)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  int iStack00000004;
  undefined1 in_stack_00000010;
  undefined1 in_stack_00000011;
  undefined1 in_stack_00000012;
  undefined1 in_stack_00000013;
  undefined1 in_stack_00000014;
  undefined1 in_stack_00000015;
  undefined1 in_stack_00000016;
  undefined1 in_stack_00000017;
  char in_stack_00000018;
  char *in_stack_ffffffac;
  float in_stack_ffffffb0;
  undefined4 uVar10;
  undefined1 local_1c [8];
  int iStack_14;
  int iStack_10;
  void *local_c;
  char *pcStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = &LAB_3002b698;
  local_c = ExceptionList;
  if (in_stack_00000018 == '\0') {
    DAT_30034de4 = (char *)CONCAT13(in_stack_00000013,
                                    CONCAT12(in_stack_00000012,
                                             CONCAT11(in_stack_00000011,in_stack_00000010)));
  }
  else {
    in_stack_00000012 = (undefined1)((uint)DAT_30034de4 >> 0x10);
    in_stack_00000013 = (undefined1)((uint)DAT_30034de4 >> 0x18);
  }
  puVar4 = (undefined1 *)
           CONCAT13(in_stack_00000017,
                    CONCAT12(in_stack_00000016,CONCAT11(in_stack_00000015,in_stack_00000014)));
  local_1c[0] = *puVar4;
  ExceptionList = &local_c;
  FUN_300033d0(local_1c,'\0');
  FUN_30004c90(local_1c,puVar4,0,0xffffffff);
  local_4 = 0;
  puVar6 = (undefined4 *)FUN_30004b80(&DAT_30034dd0,local_1c);
  piVar2 = (int *)*puVar6;
  local_4 = 0xffffffff;
  FUN_300033d0(local_1c,'\x01');
  if (piVar2 != (int *)0x0) {
    iVar7 = piVar2[5];
    if (piVar2[5] == 0) {
      iVar7 = DAT_3008fc64;
    }
    FUN_30006400(iVar7);
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffffd;
    if (((byte)DAT_300a4588 & 2) == 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    uVar10 = CONCAT13(in_stack_00000015,
                      CONCAT12(in_stack_00000014,CONCAT11(in_stack_00000013,in_stack_00000012)));
    (*DAT_300a4718)();
    FUN_300062a0(0x2100);
    DAT_300a4610 = 0x302;
    DAT_300a43fc = 0x303;
    if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a46e0 = DAT_300a46e0 | 1;
    if (((byte)DAT_300a4588 & 1) != 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    FUN_3001b650();
    (*DAT_300a4710)();
    cVar1 = *pcStack_8;
    pvVar9 = (void *)((int)local_c + piVar2[3]);
    local_4 = CONCAT31(local_4._1_3_,cVar1);
    local_c = pvVar9;
    iStack00000004 = iStack_10;
    while (cVar1 != '\0') {
      pcStack_8 = pcStack_8 + 1;
      uVar8 = local_4 & 0xff;
      switch(uVar8) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
        DAT_30034de4 = *(char **)(&DAT_3008fba0 + uVar8 * 4);
        in_stack_ffffffb0 =
             (float)(uint)CONCAT11((char)((uint)DAT_30034de4 >> 0x18),
                                   (char)((uint)DAT_30034de4 >> 8));
        in_stack_ffffffac = DAT_30034de4;
        (*DAT_300a4718)();
        break;
      case 10:
        pvVar9 = (void *)((int)pvVar9 + piVar2[2]);
        iStack00000004 = iStack_10;
        local_c = pvVar9;
        break;
      case 0xd:
        break;
      case 0x20:
        iStack00000004 = iStack00000004 + (piVar2[2] >> 1);
        break;
      default:
        if ((*piVar2 <= (int)uVar8) && ((int)uVar8 < piVar2[1])) {
          iVar7 = piVar2[4];
          if (iVar7 == 0) {
            FUN_30004990(&stack0xffffffac,(undefined1 *)(piVar2 + 6));
            iVar7 = FUN_300037b0(in_stack_ffffffac,(int)in_stack_ffffffb0);
            iVar7 = FUN_300039e0(iVar7);
          }
          puVar6 = (undefined4 *)(iVar7 + (uVar8 - *piVar2) * 0x1c);
          if (*(int *)(iVar7 + 0x10 + (uVar8 - *piVar2) * 0x1c) == 0) {
            iVar7 = piVar2[4];
            if (iVar7 == 0) {
              FUN_30004990(&stack0xffffffac,(undefined1 *)(piVar2 + 6));
              iVar7 = FUN_300037b0(in_stack_ffffffac,(int)in_stack_ffffffb0);
              iVar7 = FUN_300039e0(iVar7);
            }
            puVar6 = (undefined4 *)(iVar7 + (0x2e - *piVar2) * 0x1c);
          }
          iVar7 = puVar6[6];
          (*DAT_300a42f4)();
          fVar3 = (float)(int)pcStack_8;
          in_stack_ffffffac = (char *)(float)(int)local_4;
          in_stack_ffffffb0 = fVar3;
          pcStack_8 = in_stack_ffffffac;
          (*DAT_300a4670)();
          (*DAT_300a42f4)(puVar6[2],puVar6[1]);
          iVar5 = iStack_14;
          iStack_14 = puVar6[4] + iStack_14;
          (*DAT_300a4670)((float)iStack_14,fVar3);
          (*DAT_300a42f4)(puVar6[2],puVar6[3]);
          (*DAT_300a4670)((float)(puVar6[4] + iVar5),(float)((int)pvVar9 + (puVar6[5] - iVar7)));
          (*DAT_300a42f4)(*puVar6,puVar6[3]);
          (*DAT_300a4670)(uVar10,(float)((int)pvVar9 + (puVar6[5] - iVar7)));
          pvVar9 = local_c;
          iStack00000004 = iVar5 + puVar6[4];
        }
      }
      cVar1 = *pcStack_8;
      local_4 = CONCAT31(local_4._1_3_,cVar1);
    }
    (*DAT_300a45f4)();
  }
  ExceptionList = local_c;
  return;
}

