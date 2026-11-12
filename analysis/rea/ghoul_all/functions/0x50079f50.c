// rea decompile_all
// name: FUN_50079f50
// address: 0x50079f50
// body: available
// range: 0x50079f50-0x5007a346 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50079f50(int param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  char acStack_40 [64];
  
  local_68 = 0xd;
  (*DAT_5015cb44)(0x53434944,&local_68,4);
  (*DAT_5015cb44)(0x534e414d,param_1,0x104);
  uStack_5c = *(undefined4 *)(param_1 + 0x110);
  uStack_64 = *(undefined4 *)(param_1 + 0x108);
  uStack_60 = *(undefined4 *)(param_1 + 0x10c);
  uStack_58 = *(undefined4 *)(param_1 + 0x114);
  uStack_54 = *(undefined4 *)(param_1 + 0x124);
  iStack_50 = FUN_500ba390(*(int *)(param_1 + 0x118));
  iStack_4c = FUN_500ba390(*(int *)(param_1 + 0x11c));
  iStack_48 = FUN_500ba390(*(int *)(param_1 + 0x120));
  (*DAT_5015cb44)(0x53435250,&uStack_64,0x20);
  iStack_6c = 0;
  piVar5 = (int *)(param_1 + 0x318);
  iVar6 = 100;
  piVar2 = piVar5;
  do {
    if (*piVar2 != 0) {
      iStack_6c = iStack_6c + 1;
    }
    piVar2 = piVar2 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  (*DAT_5015cb44)(0x53464e4d,&iStack_6c,4);
  iVar6 = 100;
  do {
    if ((int *)*piVar5 != (int *)0x0) {
      (**(code **)(*(int *)*piVar5 + 4))(param_1);
    }
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iStack_6c = 0;
  piVar5 = (int *)*DAT_5015c4e4;
  if (piVar5 != DAT_5015c4e4) {
    do {
      iVar6 = 0;
      piVar2 = (int *)(param_1 + 0x188);
      do {
        if (*piVar2 == piVar5[2]) {
          if (iVar6 != -1) {
            iStack_6c = iStack_6c + 1;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar6 < 100);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != DAT_5015c4e4);
  }
  (*DAT_5015cb44)(0x53474e4d,&iStack_6c,4);
  piVar5 = (int *)*DAT_5015c4e4;
  if (piVar5 != DAT_5015c4e4) {
    piVar2 = DAT_5015c4e4;
    do {
      local_68 = 0;
      piVar4 = (int *)(param_1 + 0x188);
      do {
        if (*piVar4 == piVar5[2]) goto LAB_5007a0c8;
        local_68 = local_68 + 1;
        piVar4 = piVar4 + 1;
      } while (local_68 < 100);
      local_68 = -1;
LAB_5007a0c8:
      if (local_68 != -1) {
        pcVar3 = (char *)(piVar5[2] + 4);
        pcVar7 = acStack_40;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          *pcVar7 = cVar1;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        iStack_44 = local_68;
        (*DAT_5015cb44)(0x53474c42,&iStack_44,0x44);
        piVar2 = DAT_5015c4e4;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != piVar2);
  }
  iStack_6c = *(int *)(param_1 + 0x130);
  (*DAT_5015cb44)(0x534c4e4d,&iStack_6c,4);
  piVar5 = (int *)**(int **)(param_1 + 300);
  if (piVar5 != *(int **)(param_1 + 300)) {
    do {
      (**(code **)(*(int *)piVar5[2] + 0x30))(param_1);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 300));
  }
  iStack_6c = *(int *)(param_1 + 0x13c);
  (*DAT_5015cb44)(0x53504e4d,&iStack_6c,4);
  piVar5 = (int *)**(int **)(param_1 + 0x138);
  if (piVar5 != *(int **)(param_1 + 0x138)) {
    do {
      (**(code **)(*(int *)piVar5[2] + 0x30))(param_1);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x138));
  }
  iStack_6c = *(int *)(param_1 + 0x148);
  (*DAT_5015cb44)(0x53534e4d,&iStack_6c,4);
  piVar5 = (int *)**(int **)(param_1 + 0x144);
  if (piVar5 != *(int **)(param_1 + 0x144)) {
    do {
      (**(code **)(*(int *)piVar5[2] + 0x30))(param_1);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x144));
  }
  iStack_6c = *(int *)(param_1 + 0x160);
  (*DAT_5015cb44)(0x53574e4d,&iStack_6c,4);
  piVar5 = (int *)**(int **)(param_1 + 0x15c);
  if (piVar5 != *(int **)(param_1 + 0x15c)) {
    do {
      (**(code **)(*(int *)piVar5[2] + 0x30))(param_1);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x15c));
  }
  iStack_6c = *(int *)(param_1 + 0x154);
  (*DAT_5015cb44)(0x53494e4d,&iStack_6c,4);
  piVar5 = (int *)**(int **)(param_1 + 0x150);
  if (piVar5 != *(int **)(param_1 + 0x150)) {
    do {
      (**(code **)(*(int *)piVar5[2] + 4))(param_1);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x150));
  }
  iStack_6c = *(int *)(param_1 + 0x16c);
  (*DAT_5015cb44)(0x53564e4d,&iStack_6c,4);
  piVar5 = (int *)**(int **)(param_1 + 0x168);
  if (piVar5 != *(int **)(param_1 + 0x168)) {
    do {
      (**(code **)(*(int *)piVar5[2] + 0x30))(param_1);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x168));
  }
  iStack_6c = *(int *)(param_1 + 0x178);
  (*DAT_5015cb44)(0x53454e4d,&iStack_6c,4);
  piVar5 = (int *)**(int **)(param_1 + 0x174);
  if (piVar5 != *(int **)(param_1 + 0x174)) {
    do {
      (**(code **)(*(int *)piVar5[2] + 0x10))(param_1);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x174));
  }
  iStack_6c = *(int *)(param_1 + 0x184);
  (*DAT_5015cb44)(0x53434e4d,&iStack_6c,4);
  piVar4 = operator_new(iStack_6c * 4);
  piVar5 = (int *)**(int **)(param_1 + 0x180);
  piVar2 = piVar4;
  if (piVar5 != *(int **)(param_1 + 0x180)) {
    do {
      *piVar2 = piVar5[2];
      piVar5 = (int *)*piVar5;
      piVar2 = piVar2 + 1;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x180));
  }
  (*DAT_5015cb44)(0x53434e44,piVar4,iStack_6c * 4);
  FUN_50106b60((undefined *)piVar4);
  return;
}

