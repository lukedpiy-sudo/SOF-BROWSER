// rea decompile_all
// name: FUN_500bad50
// address: 0x500bad50
// body: available
// range: 0x500bad50-0x500baf09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500bad50(void)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  iVar5 = 0;
  if (0 < DAT_5015c938) {
    psVar4 = (short *)(DAT_5015cca0 + 0x66);
    do {
      if ((*(int *)(psVar4 + 9) != 0) && ((*(byte *)(psVar4 + -0x1b) & 1) != 0)) {
        local_14._0_2_ = psVar4[-1];
        local_14._2_2_ = (undefined2)((uint)*(int *)(psVar4 + 9) >> 0x10);
        if ((short)local_14 != 0) {
          FUN_500bb8d0(&DAT_50165b3c,(int *)&local_10,(short *)&local_14);
          if (local_10 == DAT_50165b40) {
            sVar3 = 0;
            local_14._2_2_ = 0;
          }
          else {
            sVar3 = *(short *)((int)local_10 + 0xe);
            local_14._2_2_ = (undefined2)((uint)local_10 >> 0x10);
          }
          psVar4[-1] = sVar3;
        }
        local_14._0_2_ = *psVar4;
        if ((short)local_14 != 0) {
          FUN_500bb8d0(&DAT_50165b3c,(int *)&local_c,(short *)&local_14);
          if (local_c == DAT_50165b40) {
            sVar3 = 0;
            local_14._2_2_ = 0;
          }
          else {
            sVar3 = *(short *)((int)local_c + 0xe);
            local_14._2_2_ = (undefined2)((uint)local_c >> 0x10);
          }
          *psVar4 = sVar3;
        }
        local_14._0_2_ = psVar4[1];
        if ((short)local_14 != 0) {
          FUN_500bb8d0(&DAT_50165b3c,(int *)&local_8,(short *)&local_14);
          if (local_8 == DAT_50165b40) {
            sVar3 = 0;
            local_14._2_2_ = 0;
          }
          else {
            sVar3 = *(short *)((int)local_8 + 0xe);
            local_14._2_2_ = (undefined2)((uint)local_8 >> 0x10);
          }
          psVar4[1] = sVar3;
        }
        local_14 = (int *)CONCAT22(local_14._2_2_,psVar4[2]);
        if (psVar4[2] != 0) {
          FUN_500bb8d0(&DAT_50165b3c,(int *)&local_4,(short *)&local_14);
          if (local_4 == DAT_50165b40) {
            sVar3 = 0;
          }
          else {
            sVar3 = *(short *)((int)local_4 + 0xe);
          }
          psVar4[2] = sVar3;
        }
      }
      iVar5 = iVar5 + 1;
      psVar4 = psVar4 + 0x232;
    } while (iVar5 < DAT_5015c938);
  }
  piVar2 = DAT_50165b40;
  local_14 = (int *)*DAT_50165b40;
  if (DAT_50165b4c != 0) {
    FUN_500bbd20(&DAT_50165b3c,(int *)DAT_50165b40[1]);
    DAT_50165b40[1] = DAT_50165b44;
    DAT_50165b4c = 0;
    *DAT_50165b40 = (int)DAT_50165b40;
    DAT_50165b40[2] = (int)DAT_50165b40;
    return;
  }
  DAT_50165b4c = 0;
  piVar1 = local_14;
  while (piVar1 != piVar2) {
    local_14 = piVar1;
    FUN_500bc070(&local_14);
    FUN_500bb940(&DAT_50165b3c,&local_4,piVar1);
    piVar1 = local_14;
  }
  return;
}

