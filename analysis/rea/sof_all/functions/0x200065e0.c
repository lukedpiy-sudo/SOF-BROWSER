// rea decompile_all
// name: FUN_200065e0
// address: 0x200065e0
// body: available
// range: 0x200065e0-0x20006816 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200065e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5,
                 int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined *puVar7;
  char *local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  char local_80 [64];
  undefined1 local_40 [64];
  
  if (param_6 < 1) {
    Com_sprintf(local_80,0x40,&DAT_2011d0b4,param_4);
  }
  else {
    Com_sprintf(local_40,0x40,s____dd_2011d0b8,param_6);
    Com_sprintf(local_80,0x40,local_40,param_4);
  }
  uVar4 = 0xffffffff;
  pcVar5 = local_80;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_94 = ~uVar4 - 1;
  if (param_5 == '\0') {
    pcVar5 = local_80;
    for (; local_94 != 0; local_94 = local_94 + -1) {
      cVar1 = *pcVar5;
      if ((cVar1 < '0') || ('9' < cVar1)) {
        param_1 = param_1 + 0x10;
      }
      else {
        uVar3 = *(undefined4 *)(s__moveleft_2011ca94 + cVar1 * 4);
        (*DAT_204035b4)(&local_8c,&local_90,uVar3);
        FUN_20014190(*(int *)(in_ECX + 4) + param_1,*(int *)(in_ECX + 8) + param_2,local_8c,local_90
                    );
        (*DAT_204035bc)(*(int *)(in_ECX + 4) + param_1,*(int *)(in_ECX + 8) + param_2,0x3f800000,
                        0x3f800000,param_3,uVar3);
        param_1 = param_1 + *(int *)(s__lookdown_2011cabc + *pcVar5 * 4 + 4);
      }
      pcVar5 = pcVar5 + 1;
    }
  }
  else {
    local_98 = local_80 + (~uVar4 - 2);
    if (local_94 != 0) {
      do {
        iVar2 = DAT_2011cba8;
        puVar7 = PTR_s_pics_interface2_no_blank_2011cb7c;
        cVar1 = *local_98;
        if ((cVar1 < '0') || ('9' < cVar1)) {
          if (cVar1 == ' ') {
            (*DAT_204035b4)(&local_90,&local_8c,PTR_s_pics_interface2_no_blank_2011cb7c);
            uVar3 = local_90;
            uVar6 = local_8c;
            goto LAB_200066be;
          }
          param_1 = param_1 + -0x10;
        }
        else {
          iVar2 = *(int *)(s__lookdown_2011cabc + cVar1 * 4 + 4);
          puVar7 = *(undefined **)(s__moveleft_2011ca94 + cVar1 * 4);
          (*DAT_204035b4)(&local_88,&local_84,puVar7);
          uVar3 = local_88;
          uVar6 = local_84;
LAB_200066be:
          param_1 = param_1 - iVar2;
          FUN_20014190(*(int *)(in_ECX + 4) + param_1,*(int *)(in_ECX + 8) + param_2,uVar3,uVar6);
          (*DAT_204035bc)(*(int *)(in_ECX + 4) + param_1,*(int *)(in_ECX + 8) + param_2,0x3f800000,
                          0x3f800000,param_3,puVar7);
        }
        local_98 = local_98 + -1;
        local_94 = local_94 + -1;
        if (local_94 == 0) {
          return;
        }
      } while( true );
    }
  }
  return;
}

