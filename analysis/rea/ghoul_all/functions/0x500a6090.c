// rea decompile_all
// name: FUN_500a6090
// address: 0x500a6090
// body: available
// range: 0x500a6090-0x500a62ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_500a6090(void *this,int param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort uVar9;
  int unaff_retaddr;
  int *piStack_d0;
  uint uStack_cc;
  char local_c8 [100];
  undefined1 local_64 [100];
  
  if ((*(int *)(param_1 + 0x164) != 0) || ((*(uint *)(param_1 + 0x34) & 0x400000) != 0)) {
    return;
  }
  pcVar4 = param_3;
  do {
    cVar2 = *pcVar4;
    pcVar4[(int)(local_c8 + -(int)param_3)] = cVar2;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if ((((param_4 == (char *)0x0) || (*param_4 == '\0')) || (param_5 == (char *)0x0)) ||
     (*param_5 == '\0')) {
    puVar5 = FUN_500a5c10(this,param_2,local_c8,1,(char *)0x0,(char *)0x0,'\0');
  }
  else {
    puVar5 = FUN_500a5c10(this,param_2,local_c8,0,param_4,(char *)0x0,'\0');
    FUN_500a5290(puVar5,param_5);
  }
  if (puVar5 != (undefined4 *)0x0) {
    if ((puVar5[9] != 0) && (*(char *)(puVar5 + 10) == '\0')) {
      puVar6 = FUN_500a5110(puVar5,0);
      fVar1 = *(float *)(DAT_5015d9b0 + 0x18);
      uVar9 = (ushort)(fVar1 < 0.0) << 8 | (ushort)(fVar1 == 0.0) << 0xe;
      if ((fVar1 < 0.0 || (fVar1 == 0.0) != 0) ||
         (fVar1 = *(float *)(DAT_5015d2b8 + 0x18),
         uVar9 = (ushort)(fVar1 < 0.0) << 8 | (ushort)(fVar1 == 0.0) << 0xe,
         fVar1 < 0.0 || (fVar1 == 0.0) != 0)) {
        uVar7 = (uint)uVar9;
      }
      else {
        uVar7 = CONCAT31((uint3)(byte)(uVar9 >> 8),1);
      }
      (**(code **)(*(int *)puVar5[9] + 8))(uVar7);
      uStack_cc = puVar6[3];
      FUN_5006b100(puVar5 + 1,(int *)&piStack_d0,&uStack_cc);
      if (piStack_d0 != (int *)puVar5[2]) {
        if ((undefined4 *)piStack_d0[4] != (undefined4 *)0x0) {
          FUN_500a67a0(&DAT_5018b4b8,(undefined4 *)piStack_d0[4]);
        }
        piStack_d0[4] = 0;
        FUN_500a6c30(puVar5 + 1,&piStack_d0,piStack_d0);
      }
    }
    *(undefined1 *)(puVar5 + 10) = 1;
    FUN_50107654(local_64,(byte *)s_ghoul__s__s_ghl_5012f804);
    if (*(char *)(puVar5 + 10) == '\0') {
      (*DAT_5015ca24)(s_Tried_to_find_sequence__s_before_5014b2ec,param_3);
    }
    else {
      uVar8 = (**(code **)(*(int *)puVar5[9] + 0xc))(local_64);
      if ((short)uVar8 != 0) {
        puVar5 = FUN_500a5110(puVar5,unaff_retaddr);
        if (puVar5 != (undefined4 *)0x0) {
          uVar3 = puVar5[3];
          *(undefined4 *)(unaff_retaddr + 0x34) = 0x400000;
          *(undefined4 *)(unaff_retaddr + 0x164) = uVar3;
          uVar3 = DAT_5015ccdc;
          *(short *)(puVar5 + 6) = (short)uVar8;
          (**(code **)(*(int *)puVar5[3] + 0x44))(uVar8,uVar3,0,1,0,0,0);
          return;
        }
        (*DAT_5015ca24)(s_SetSimpleGhoulModel_couldn_t_add_5014b370,param_2);
        return;
      }
    }
    (*DAT_5015ca24)(s_SetSimpleGhoulModel_couldn_t_fin_5014b3b0,param_3);
    return;
  }
  (*DAT_5015ca24)(s_SetSimpleGhoulModel_couldn_t_cre_5014b3e8,param_2,local_c8);
  return;
}

