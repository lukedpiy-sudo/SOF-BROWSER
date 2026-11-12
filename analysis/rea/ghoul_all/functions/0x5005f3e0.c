// rea decompile_all
// name: FUN_5005f3e0
// address: 0x5005f3e0
// body: available
// range: 0x5005f3e0-0x5005f807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5005f3e0(void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  float fStack_34;
  
  if (*(int *)((int)param_1 + 0x18) == 0) {
    local_64 = 0;
  }
  else {
    local_64 = (*(int *)((int)param_1 + 0x1c) - *(int *)((int)param_1 + 0x18)) / 0x34;
  }
  if (*(float *)(DAT_5015c978 + 0x18) != 0.0) {
    local_44 = -10.0;
    local_40 = 0xc1200000;
    local_3c = 0xc1200000;
    local_50 = 0x41200000;
    local_4c = 0x41200000;
    local_48 = 0x41200000;
    if (local_64 <= *(int *)((int)param_1 + 0x30)) {
      *(undefined4 *)((int)param_1 + 0x30) = 0;
    }
    iVar3 = *(int *)((int)param_1 + 0x30);
    local_60 = 0;
    local_68 = 0xfa000000;
    while ((iVar3 < local_64 && (local_60 < 2))) {
      local_68._2_2_ = (ushort)(local_68 >> 0x10) & 0xff00;
      uVar2 = (uint)local_68._2_2_ << 0x10;
      iVar3 = FUN_5004f8a0((undefined4 *)(DAT_5015cca0 + 0x468),
                           (undefined4 *)
                           (*(int *)((int)param_1 + 0x18) + *(int *)((int)param_1 + 0x30) * 0x34),
                           DAT_5015cca0 + 0x464);
      if (iVar3 == 0) {
LAB_5005f7ef:
        local_68 = uVar2;
        iVar3 = *(int *)((int)param_1 + 0x30) + 1;
        *(int *)((int)param_1 + 0x30) = iVar3;
      }
      else {
        local_60 = local_60 + 1;
        if (((*(ushort *)((int)param_1 + 0x8e) == 0) || (*(ushort *)((int)param_1 + 0x90) == 0)) ||
           ((iVar3 = *(int *)((int)param_1 + 0x30),
            (int)(uint)*(ushort *)((int)param_1 + 0x8e) <= iVar3 &&
            (iVar3 <= (int)(uint)*(ushort *)((int)param_1 + 0x90))))) {
          if (*(float *)(DAT_5015d9ac + 0x18) == 0.0) {
            uVar4 = FUN_50060b30(param_1,*(short *)((int)param_1 + 0x30));
            if ((char)uVar4 != '\0') {
              FUN_50084b00(*(int *)((int)param_1 + 0x18) + *(int *)((int)param_1 + 0x30) * 0x34,3);
            }
            uVar5 = *(uint *)((int)param_1 + 0x30);
            if (uVar5 != local_64 - 1U) goto LAB_5005f5da;
            iVar3 = 0;
            pfVar9 = (float *)(*(int *)((int)param_1 + 0x18) + uVar5 * 0x34);
          }
          else {
            uVar4 = FUN_50060b30(param_1,*(short *)((int)param_1 + 0x30));
            if ((char)uVar4 != '\0') {
              FUN_50084b00(*(int *)((int)param_1 + 0x18) + *(int *)((int)param_1 + 0x30) * 0x34,3);
            }
            uVar5 = *(uint *)((int)param_1 + 0x30);
            if (uVar5 == *(ushort *)(*(int *)(DAT_5015cca0 + 0x8c0) + 0x408)) {
              iVar3 = 0;
              pfVar9 = (float *)(*(int *)((int)param_1 + 0x18) + uVar5 * 0x34);
            }
            else {
LAB_5005f5da:
              iVar3 = *(int *)(*(int *)((int)param_1 + 0x18) + 0x10 + uVar5 * 0x34) + 1;
              pfVar9 = (float *)(*(int *)((int)param_1 + 0x18) + uVar5 * 0x34);
            }
          }
          FUN_500cee40(0,pfVar9,&local_44,&local_50,iVar3);
          iVar3 = *(int *)((int)param_1 + 0x30);
          if (iVar3 < local_64 + -1) {
            iVar8 = iVar3 + 1;
          }
          else {
            iVar8 = 0;
          }
          iVar7 = iVar8 * 0x34;
          (*DAT_5015cac0)(*(int *)((int)param_1 + 0x18) + iVar3 * 0x34,&DAT_5018bf0c,&DAT_5018bf0c,
                          iVar7 + *(int *)((int)param_1 + 0x18),DAT_5015cca0 + 0x464,0x2010003,
                          local_38);
          if (fStack_34 == 1.0) {
            if (*(int *)((int)param_1 + 0x30) == 0) goto LAB_5005f7ef;
            if (iVar8 != 0) {
              iVar8 = *(int *)((int)param_1 + 0x18);
              iVar3 = iVar8 + *(int *)((int)param_1 + 0x30) * 0x34;
              for (puVar1 = *(undefined4 **)(iVar3 + 0x30); puVar1 != (undefined4 *)0x0;
                  puVar1 = (undefined4 *)*puVar1) {
                if ((DAT_50159a78 == 0) ||
                   ((uint)((DAT_50159a7c - DAT_50159a78) / 0x34) <=
                    (*(ushort *)(puVar1 + 1) & 0x7fff))) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = DAT_50159a78 + (*(ushort *)(puVar1 + 1) & 0x7fff) * 0x34;
                }
                if (iVar6 == iVar7 + iVar8) {
                  if ((*(int *)(iVar3 + 0x10) != 10) ||
                     (local_68 = CONCAT22(local_68._2_2_,0xff00), uVar2 = local_68,
                     *(int *)(iVar7 + 0x10 + iVar8) != 0xb)) {
                    local_68 = uVar2;
                    local_68 = local_68 & 0xffff0000;
                  }
                  uVar2 = local_68;
                  local_68 = CONCAT31(local_68._1_3_,0xff);
                  uVar4 = local_68;
                  local_68._3_1_ = SUB41(uVar2,3);
                  local_68._0_3_ = (uint3)(ushort)uVar4;
                  FUN_50084460(iVar3,iVar7 + iVar8,local_68,1,0);
                  local_68 = (uint)local_68._3_1_ << 0x18;
                  uVar2 = local_68;
                  break;
                }
              }
            }
          }
          local_68 = uVar2;
          iVar3 = *(int *)((int)param_1 + 0x30);
          uVar2 = local_68;
          if (iVar3 != 0) {
            iVar8 = *(int *)((int)param_1 + 0x18);
            iVar7 = *(int *)(iVar8 + 0x28 + iVar3 * 0x34);
            if ((iVar7 != 0) &&
               ((*DAT_5015cac0)(iVar8 + iVar3 * 0x34,&DAT_5018bf0c,&DAT_5018bf0c,
                                iVar8 + iVar7 * 0x34,DAT_5015cca0 + 0x464,0x2010003,local_38),
               fStack_34 == 1.0)) {
              uVar2 = CONCAT13((char)(local_68 >> 0x18),0xff0000);
              iVar3 = *(int *)((int)param_1 + 0x18) + *(int *)((int)param_1 + 0x30) * 0x34;
              FUN_50084460(iVar3,*(int *)((int)param_1 + 0x18) + *(int *)(iVar3 + 0x28) * 0x34,uVar2
                           ,1,0);
            }
          }
          goto LAB_5005f7ef;
        }
        iVar3 = iVar3 + 1;
        *(int *)((int)param_1 + 0x30) = iVar3;
        local_68 = uVar2;
      }
    }
  }
  return;
}

