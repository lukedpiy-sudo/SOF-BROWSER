// rea decompile_all
// name: FUN_500b4670
// address: 0x500b4670
// body: available
// range: 0x500b4670-0x500b4972 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl
FUN_500b4670(void *param_1,int param_2,char *param_3,undefined4 *param_4,undefined4 param_5,
            char *param_6)

{
  void *this;
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *this_00;
  undefined4 uVar4;
  char *this_01;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  char *local_24;
  undefined4 uStack_20;
  char *local_1c;
  int aiStack_18 [4];
  undefined4 auStack_8 [2];
  
  puVar1 = param_4;
  pcVar2 = (char *)param_4[6];
  iVar9 = 0;
  local_1c = (char *)0x0;
  local_24 = (char *)0x0;
  if ((pcVar2 != (char *)0x0) || (pcVar2 = *(char **)(param_2 + 0x18), pcVar2 != (char *)0x0)) {
    local_24 = pcVar2;
  }
  if ((param_1 != (void *)0x0) && (*(int **)((int)param_1 + 0x1c) != (int *)0x0)) {
    uVar3 = (**(code **)(**(int **)((int)param_1 + 0x1c) + 0x88))();
    iVar9 = FUN_500a5e10(&DAT_5015c79c,uVar3);
  }
  if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
    this_00 = FUN_500a5c10(&DAT_5015c79c,(char *)*puVar1,(char *)puVar1[1],1,(char *)0x0,(char *)0x0
                           ,'\0');
LAB_500b4710:
    if (this_00 != (undefined4 *)0x0) {
      FUN_500a4de0(this_00);
    }
  }
  else {
    this_00 = FUN_500a5c10(&DAT_5015c79c,(char *)*puVar1,(char *)puVar1[1],0,param_6,(char *)0x0,
                           '\0');
    if (this_00 != (undefined4 *)0x0) {
      FUN_500a5290(this_00,local_24);
      goto LAB_500b4710;
    }
  }
  if (iVar9 == 0) {
    (*DAT_5015ca24)(s_ERROR__ComplexModelAddBolt___can_5014d3a4,*(undefined4 *)(param_2 + 4));
    if (this_00 != (undefined4 *)0x0) {
      return local_1c;
    }
  }
  else if (this_00 != (undefined4 *)0x0) {
    piVar8 = (int *)this_00[9];
    if (*(int **)(iVar9 + 0x24) == (int *)0x0) {
      return local_1c;
    }
    if (piVar8 == (int *)0x0) {
      return local_1c;
    }
    uVar4 = (**(code **)(**(int **)(iVar9 + 0x24) + 0x1c))(param_3);
    param_1 = (void *)FUN_500a5da0((int)this_00,puVar1[1]);
    pcVar2 = (char *)param_4;
    iVar9 = (**(code **)(*piVar8 + 0x1c))(param_4);
    if ((short)uVar4 == 0) {
      (*DAT_5015ca24)(s_ERROR__ComplexModelAddBolt___can_5014d3d8,param_3);
LAB_500b492e:
      if ((short)iVar9 != 0) {
        return local_1c;
      }
    }
    else if ((short)iVar9 != 0) {
      if ((short)param_2 != 0) {
        this_01 = (char *)FUN_500a3320(param_1,uVar4,this_00,iVar9,0,(undefined4 *)0x3f800000);
        pcVar10 = local_24;
        pcVar2 = param_6;
        if (this_01 == (char *)0x0) {
          return (char *)0x0;
        }
        local_1c = this_01;
        if ((local_24 != (char *)0x0) && (param_6 != (char *)0x0)) {
          piVar8 = *(int **)(this_01 + 0x1c);
          piVar5 = (int *)(**(code **)(*piVar8 + 0x88))();
          uVar4 = (**(code **)(*piVar5 + 0x40))(pcVar10);
          if ((short)uVar4 != 0) {
            piVar5 = (int *)(**(code **)(*piVar8 + 0x88))();
            uVar6 = (**(code **)(*piVar5 + 0x50))(uVar4,pcVar2,0);
            if ((short)uVar6 != 0) {
              (**(code **)(*piVar8 + 0x2c))(uVar4,uVar6,0);
            }
          }
        }
        FUN_500a32b0(this_01,param_2,DAT_5015ccdc,0,1,3,0,0);
        iVar9 = FUN_500a32f0((int)this_01);
        if ((iVar9 != 0) && (this = *(void **)(iVar9 + 0x210), this != (void *)0x0)) {
          iVar9 = *(int *)((int)this + 0x24);
          if (iVar9 < DAT_5014d1b4) {
            iVar7 = iVar9 + 1;
            *(int *)((int)this + 0x24) = iVar7;
            if ((iVar7 <= DAT_5014d1b4) && (0 < iVar7)) {
              *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 1 << ((byte)iVar9 & 0x1f);
            }
          }
          param_3 = this_01;
          param_6 = this_01;
          FUN_5006b100(&DAT_5018b490,(int *)&param_1,(uint *)&param_3);
          iVar9 = DAT_501546ec;
          if (param_1 == DAT_5018b494) {
            DAT_501546ec = DAT_501546ec + 1;
            local_24 = param_3;
            uStack_20 = 0;
            piVar8 = (int *)FUN_5000a2e0(&DAT_5018b490,aiStack_18 + 2,(uint *)&local_24);
            aiStack_18[0] = iVar9;
            aiStack_18[1] = 0;
            *(int *)(*piVar8 + 0x10) = iVar9;
            piVar8 = (int *)FUN_500c7c80(&DAT_5018b4a4,auStack_8,aiStack_18);
            *(char **)(*piVar8 + 0x10) = param_3;
          }
          FUN_500632d0(this,*(undefined4 **)((int)this + 8),1,&param_6);
          return local_1c;
        }
        pcVar10 = s_ERROR__ComplexModelAddBolt___can_5014d40c;
        pcVar2 = param_3;
        goto LAB_500b495e;
      }
      goto LAB_500b492e;
    }
    pcVar10 = s_ERROR__SimpleModelAddBolt___can__5014d370;
    goto LAB_500b495e;
  }
  pcVar2 = (char *)puVar1[1];
  pcVar10 = s_ERROR__ComplexModelAddBolt___can_5014d3a4;
LAB_500b495e:
  (*DAT_5015ca24)(pcVar10,pcVar2);
  return local_1c;
}

