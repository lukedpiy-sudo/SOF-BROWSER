// rea decompile_all
// name: FUN_50004050
// address: 0x50004050
// body: available
// range: 0x50004050-0x50004382 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50004050(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  int unaff_EBX;
  int iVar5;
  undefined4 *puStack_290;
  int *piStack_28c;
  int iStack_288;
  undefined4 auStack_284 [2];
  undefined4 auStack_27c [3];
  undefined1 local_270 [624];
  
  (*DAT_5015cb48)(0x41494149,local_270,0x24c,0);
  (**(code **)(*param_1 + 0x224))(local_270);
  (*DAT_5015cb48)(0x4149534c,&stack0xfffffd6c,4,0);
  if (unaff_EBX != 0) {
    puVar1 = operator_new(unaff_EBX * 4);
    (*DAT_5015cb48)(0x41495345,puVar1,unaff_EBX * 4,0);
    iVar5 = 0;
    if (0 < unaff_EBX) {
      do {
        iStack_288 = *(int *)(puVar1 + iVar5 * 4);
        puVar2 = (undefined4 *)0x0;
        if (iStack_288 != 0) {
          FUN_5006b1a0(&DAT_5018b56c,(int *)&piStack_28c,&iStack_288);
          if (piStack_28c == DAT_5018b570) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar2 = (undefined4 *)piStack_28c[4];
          }
        }
        puStack_290 = puVar2;
        FUN_50009eb0(&DAT_5018b558,puVar2);
        FUN_5000a290(param_1 + 0x93,auStack_284,param_1[0x94],(int *)&puStack_290);
        iVar5 = iVar5 + 1;
      } while (iVar5 < unaff_EBX);
    }
    FUN_50106b60(puVar1);
  }
  (*DAT_5015cb48)(0x4149444c,&stack0xfffffd6c,4,0);
  if (unaff_EBX != 0) {
    puVar1 = operator_new(unaff_EBX * 4);
    (*DAT_5015cb48)(0x41494445,puVar1,unaff_EBX * 4,0);
    iVar5 = 0;
    if (0 < unaff_EBX) {
      do {
        puStack_290 = *(undefined4 **)(puVar1 + iVar5 * 4);
        piVar3 = (int *)0x0;
        if (puStack_290 != (undefined4 *)0x0) {
          FUN_5006b1a0(&DAT_5018b51c,&iStack_288,(int *)&puStack_290);
          if (iStack_288 == DAT_5018b520) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = *(int **)(iStack_288 + 0x10);
          }
        }
        piStack_28c = piVar3;
        FUN_50009c50(&DAT_5018b508,piVar3);
        FUN_5000a290(param_1 + 0x99,auStack_284,param_1[0x9a],(int *)&piStack_28c);
        iVar5 = iVar5 + 1;
      } while (iVar5 < unaff_EBX);
    }
    FUN_50106b60(puVar1);
  }
  (*DAT_5015cb48)(0x4149414c,&stack0xfffffd6c,4,0);
  if (unaff_EBX != 0) {
    puVar1 = operator_new(unaff_EBX * 4);
    (*DAT_5015cb48)(0x41494145,puVar1,unaff_EBX * 4,0);
    iVar5 = 0;
    if (0 < unaff_EBX) {
      do {
        puStack_290 = *(undefined4 **)(puVar1 + iVar5 * 4);
        piVar3 = (int *)0x0;
        if (puStack_290 != (undefined4 *)0x0) {
          FUN_5006b1a0(&DAT_5018b544,&iStack_288,(int *)&puStack_290);
          if (iStack_288 == DAT_5018b548) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = *(int **)(iStack_288 + 0x10);
          }
        }
        piStack_28c = piVar3;
        FUN_500099f0(&DAT_5018b530,piVar3);
        FUN_5000a290(param_1 + 0x96,auStack_284,param_1[0x97],(int *)&piStack_28c);
        iVar5 = iVar5 + 1;
      } while (iVar5 < unaff_EBX);
    }
    FUN_50106b60(puVar1);
  }
  if (*(int *)(param_1[0x61] + 0x450) != 0) {
    *(int **)(param_1[0x61] + 0x450) = param_1;
    piStack_28c = param_1;
    FUN_5006b100(&DAT_5018b440,(int *)&puStack_290,(uint *)&piStack_28c);
    if (puStack_290 == DAT_5018b444) {
      iStack_288 = DAT_501546ec;
      DAT_501546ec = DAT_501546ec + 1;
      puStack_290 = (undefined4 *)0x0;
      puVar4 = (uint *)FUN_50010d00(auStack_284,&piStack_28c,&puStack_290);
      piVar3 = (int *)FUN_5000a2e0(&DAT_5018b440,auStack_27c,puVar4);
      *(int *)(*piVar3 + 0x10) = iStack_288;
      puVar2 = (undefined4 *)FUN_50010ba0(&DAT_5018b454,&iStack_288);
      *puVar2 = piStack_28c;
    }
  }
  return;
}

