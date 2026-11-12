// rea decompile_all
// name: FUN_200117f0
// address: 0x200117f0
// body: available
// range: 0x200117f0-0x200119b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200117f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5,int param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  char local_70;
  char local_6f;
  float local_6c;
  int *local_40;
  undefined1 local_38 [56];
  
  local_90 = 0;
  if (0 < DAT_201e7f5c) {
    do {
      uVar3 = local_90 + DAT_201e7f60 & 0x3ff;
      uVar2 = *(uint *)(&DAT_201ca568 + uVar3 * 0x74);
      iVar7 = uVar3 * 0x74;
      if ((uVar2 != 0) && (*(int *)(&DAT_201ca530 + iVar7) != DAT_201e94c4 + 1)) {
        if (uVar2 == 0x1f) {
          if (*(int *)(&DAT_2022118c + *(int *)(&DAT_201ca550 + iVar7) * 4) != 0) {
            uVar4 = *(undefined4 *)
                     (*(int *)(&DAT_2022118c + *(int *)(&DAT_201ca550 + iVar7) * 4) + 0x28);
            puVar5 = (undefined4 *)(iVar7 + 0x201ca540);
LAB_2001190c:
            if (*param_5 != '\0') {
              return;
            }
            puVar5 = (undefined4 *)
                     FUN_2001b9c0(local_38,param_1,param_4,param_2,param_3,uVar4,0x2010003,
                                  &DAT_201ca534 + iVar7,puVar5);
            pcVar8 = &local_70;
            for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(undefined4 *)pcVar8 = *puVar5;
              puVar5 = puVar5 + 1;
              pcVar8 = pcVar8 + 4;
            }
            if (((local_70 != '\0') || (local_6f != '\0')) || (local_6c < *(float *)(param_5 + 4)))
            {
              cVar1 = param_5[1];
              local_40 = (int *)(&DAT_201ca530 + iVar7);
              pcVar8 = &local_70;
              pcVar9 = param_5;
              for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar9 = pcVar9 + 4;
              }
              if (cVar1 != '\0') {
                param_5[1] = '\x01';
              }
            }
          }
        }
        else if (param_6 == 0) {
          uVar3 = uVar2 >> 8 & 0xff;
          local_7c = (float)(int)-(uVar2 & 0xff);
          local_78 = (float)(int)-uVar3;
          local_88 = (float)(uVar2 & 0xff);
          local_84 = (float)uVar3;
          local_74 = (float)(int)-(uint)(byte)(&DAT_201ca56a)[iVar7];
          local_80 = (float)(int)((byte)(&DAT_201ca56b)[iVar7] - 0x80);
          uVar4 = FUN_2001a840(&local_7c,&local_88);
          puVar5 = &DAT_20390c24;
          goto LAB_2001190c;
        }
      }
      local_90 = local_90 + 1;
    } while (local_90 < DAT_201e7f5c);
  }
  return;
}

