// rea decompile_all
// name: FUN_200e0f10
// address: 0x200e0f10
// body: available
// range: 0x200e0f10-0x200e117f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e0f10(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4 [16];
  int local_c4;
  char *local_bc;
  int local_b0;
  undefined4 *local_94;
  int local_90;
  undefined1 local_8c [16];
  int local_7c;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f8b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_2000a5b0(0);
  FUN_2009df30(&local_d6);
  FUN_2009df30(&local_d5);
  local_4 = 0;
  puVar2 = (undefined4 *)Cvar_Get(param_1,&DAT_2015ee44,0,0);
  if ((float)puVar2[6] == 0.0) {
    Com_sprintf(local_8c,0x80,s__s_info_20159020,param_1);
    cVar1 = FUN_200e0590(local_8c,*(undefined4 *)(in_ECX + 4),1);
    if (cVar1 != '\0') {
      if (*(int *)(in_ECX + 0xa4) < *(int *)(in_ECX + 0xa8) + local_b0) {
        (*DAT_20390d94)(s_menu_small_invalid_wav_20158370);
      }
      else {
        local_94 = puVar2;
        Cvar_SetValue(*puVar2,(float)local_c4);
        pcVar3 = local_bc;
        if (local_bc == (char *)0x0) {
          pcVar3 = "";
        }
        iVar4 = __strcmpi(pcVar3,&DAT_2011f22c);
        if (iVar4 != 0) {
          pcVar3 = local_bc;
          if (local_bc == (char *)0x0) {
            pcVar3 = "";
          }
          local_90 = Cvar_Get(pcVar3,&DAT_2015ee44,0,0);
          if (*(float *)(local_90 + 0x18) == 0.0) {
            pcVar3 = local_bc;
            if (local_bc == (char *)0x0) {
              pcVar3 = "";
            }
            FUN_200e0550();
            local_4 = CONCAT31(local_4._1_3_,1);
            puVar2 = (undefined4 *)FUN_200e0de0(pcVar3,local_8c,0);
            if (puVar2 != (undefined4 *)0x0) {
              Cvar_SetValue(*puVar2,(float)local_7c);
            }
            local_4 = local_4 & 0xffffff00;
            FUN_2000a5b0(1);
            FUN_2000a5b0(1);
            FUN_2000a5b0(1);
          }
        }
        *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) + local_b0;
        iVar4 = *(int *)(in_ECX + 0xb4);
        piVar6 = *(int **)(iVar4 + 4);
        piVar5 = operator_new(0x50);
        *piVar5 = iVar4;
        if (piVar6 == (int *)0x0) {
          piVar6 = piVar5;
        }
        piVar5[1] = (int)piVar6;
        *(int **)(iVar4 + 4) = piVar5;
        *(int **)piVar5[1] = piVar5;
        FUN_200e5010(piVar5 + 2,local_d4);
        *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
      }
    }
  }
  else {
    (*DAT_20390d94)(s_menu_small_invalid_wav_20158370);
  }
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  FUN_2000a5b0(1);
  FUN_2000a5b0(1);
  ExceptionList = pvStack_c;
  return;
}

