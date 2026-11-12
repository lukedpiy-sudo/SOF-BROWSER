// rea decompile_all
// name: FUN_500a5a30
// address: 0x500a5a30
// body: available
// range: 0x500a5a30-0x500a5c04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_500a5a30(void *this,char *param_1,char *param_2,undefined1 param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  void *local_80;
  undefined4 local_7c;
  int local_78 [2];
  undefined1 local_70 [100];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_5011501b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_80 = operator_new(0x5bc);
  local_4 = 0;
  if (local_80 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_500a4930(local_80,param_1,param_2,param_3,param_4,param_5);
  }
  local_4 = 0xffffffff;
  FUN_5000a1e0(&DAT_5018b468,puVar4);
  if (puVar4[9] == 0) {
    FUN_500a6920(&DAT_5018b468,puVar4);
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  uVar6 = 0xffffffff;
  pcVar7 = s_enemy_meso_5012f830;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  iVar5 = _strncmp(param_1,s_enemy_meso_5012f830,~uVar6 - 1);
  if (iVar5 != 0) {
    uVar6 = 0xffffffff;
    pcVar7 = s_enemy_ecto_5012f824;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    iVar5 = _strncmp(param_1,s_enemy_ecto_5012f824,~uVar6 - 1);
    if (iVar5 != 0) {
      uVar6 = 0xffffffff;
      pcVar7 = s_enemy_female_5012f814;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      iVar5 = _strncmp(param_1,s_enemy_female_5012f814,~uVar6 - 1);
      if (iVar5 != 0) {
        puVar8 = (undefined4 *)((int)puVar4 + 0x2a);
        for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = 0x1010101;
          puVar8 = puVar8 + 1;
        }
        goto LAB_500a5bc0;
      }
    }
  }
  pcVar7 = s_std_istand_n_a_n_50135c48;
  if (s_std_istand_n_a_n_50135c48[0] != '\0') {
    iVar5 = 0;
    do {
      FUN_500fe2b0();
      sVar3 = (**(code **)(*(int *)puVar4[9] + 0xc))(local_70);
      if (sVar3 == 0) {
        *(undefined1 *)(iVar5 / 0x58 + 0x2a + (int)puVar4) = 0;
      }
      else {
        *(undefined1 *)(iVar5 / 0x58 + 0x2a + (int)puVar4) = 1;
      }
      pcVar1 = pcVar7 + 0x58;
      pcVar7 = pcVar7 + 0x58;
      iVar5 = iVar5 + 0x58;
    } while (*pcVar1 != '\0');
  }
LAB_500a5bc0:
  local_80 = (void *)puVar4[9];
  local_7c = 0;
  FUN_5000a3d0(this,local_78,(uint *)&local_80);
  *(undefined4 **)(local_78[0] + 0x10) = puVar4;
  ExceptionList = local_c;
  return puVar4;
}

