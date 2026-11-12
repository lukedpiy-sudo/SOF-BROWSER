// rea decompile_all
// name: FUN_500b4320
// address: 0x500b4320
// body: available
// range: 0x500b4320-0x500b453a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl
FUN_500b4320(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5,
            char *param_6)

{
  int *piVar1;
  uint uVar2;
  void *this;
  undefined4 *puVar3;
  void *this_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *local_8;
  
  pcVar8 = (char *)param_4[6];
  local_8 = (char *)0x0;
  if ((pcVar8 != (char *)0x0) || (pcVar8 = *(char **)(param_2 + 0x18), pcVar8 != (char *)0x0)) {
    local_8 = pcVar8;
  }
  uVar2 = (**(code **)(*param_1 + 0x88))();
  this = (void *)FUN_500a5e10(&DAT_5015c79c,uVar2);
  if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
    puVar3 = FUN_500a5c10(&DAT_5015c79c,(char *)*param_4,(char *)param_4[1],1,(char *)0x0,
                          (char *)0x0,'\0');
LAB_500b43b5:
    if (puVar3 != (undefined4 *)0x0) {
      FUN_500a4de0(puVar3);
    }
  }
  else {
    puVar3 = FUN_500a5c10(&DAT_5015c79c,(char *)*param_4,(char *)param_4[1],0,param_6,(char *)0x0,
                          '\0');
    if (puVar3 != (undefined4 *)0x0) {
      FUN_500a5290(puVar3,local_8);
      goto LAB_500b43b5;
    }
  }
  if (this == (void *)0x0) {
    (*DAT_5015ca24)(s_ERROR__SimpleModelAddBolt___can__5014d33c,*(undefined4 *)(param_2 + 4));
    if (puVar3 != (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  else if (puVar3 != (undefined4 *)0x0) {
    this_00 = (void *)FUN_500a51d0(this,(uint)param_1);
    piVar1 = (int *)puVar3[9];
    if (this_00 == (void *)0x0) {
      return (undefined4 *)0x0;
    }
    if (*(int **)((int)this + 0x24) == (int *)0x0) {
      return (undefined4 *)0x0;
    }
    if (piVar1 == (int *)0x0) {
      return (undefined4 *)0x0;
    }
    uVar4 = (**(code **)(**(int **)((int)this + 0x24) + 0x1c))(param_3);
    FUN_500a5da0((int)puVar3,param_4[1]);
    iVar5 = (**(code **)(*piVar1 + 0x1c))(param_4);
    if ((short)uVar4 == 0) {
      (*DAT_5015ca24)(s_ERROR__SimpleModelAddBolt___can__5014d370,param_3);
LAB_500b44f6:
      if ((short)iVar5 != 0) {
        return (undefined4 *)0x0;
      }
    }
    else if ((short)iVar5 != 0) {
      if ((short)param_1 != 0) {
        puVar3 = FUN_500a4020(this_00,uVar4,puVar3,iVar5,0,(undefined4 *)0x3f800000);
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        if ((local_8 != (char *)0x0) && (param_6 != (char *)0x0)) {
          piVar1 = (int *)puVar3[7];
          piVar6 = (int *)(**(code **)(*piVar1 + 0x88))();
          uVar4 = (**(code **)(*piVar6 + 0x40))(local_8);
          if ((short)uVar4 != 0) {
            piVar6 = (int *)(**(code **)(*piVar1 + 0x88))();
            uVar7 = (**(code **)(*piVar6 + 0x50))(uVar4,param_6,0);
            if ((short)uVar7 != 0) {
              (**(code **)(*piVar1 + 0x2c))(uVar4,uVar7,0);
            }
          }
        }
        FUN_500a32b0(puVar3,param_1,DAT_5015ccdc,0,1,3,0,0);
        return puVar3;
      }
      goto LAB_500b44f6;
    }
    pcVar8 = s_ERROR__SimpleModelAddBolt___can__5014d370;
    goto LAB_500b4526;
  }
  param_4 = (undefined4 *)param_4[1];
  pcVar8 = s_ERROR__SimpleModelAddBolt___can__5014d33c;
LAB_500b4526:
  (*DAT_5015ca24)(pcVar8,param_4);
  return (undefined4 *)0x0;
}

