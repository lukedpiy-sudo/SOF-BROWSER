// rea decompile_all
// name: FUN_50060a00
// address: 0x50060a00
// body: available
// range: 0x50060a00-0x50060b25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_50060a00(void *this,float param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int local_6c;
  int local_60 [2];
  char local_58 [88];
  
  fVar4 = param_1;
  iVar2 = *(int *)((int)param_1 + 0xc);
  local_6c = 0;
  param_1 = (float)param_2;
  if (param_2 == 0) {
    param_1 = 2.312234e-35;
  }
  param_1 = (float)(int)param_1;
  pcVar5 = local_58;
  iVar8 = 8;
  do {
    pcVar5[-0xffffffff00000008] = '\0';
    pcVar5[-0xffffffff00000007] = '\0';
    pcVar5[-0xffffffff00000006] = '\0';
    pcVar5[-0xffffffff00000005] = '\0';
    pcVar5[-0xffffffff00000004] = '\0';
    pcVar5[-0xffffffff00000003] = '\0';
    pcVar5[-0xffffffff00000002] = '\0';
    pcVar5[-0xffffffff00000001] = '\0';
    *pcVar5 = '\0';
    pcVar5 = pcVar5 + 0xc;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar9 = *(undefined4 **)((int)fVar4 + 0x30);
  iVar8 = 0;
  while (puVar9 != (undefined4 *)0x0) {
    uVar1 = *(ushort *)(puVar9 + 1);
    piVar13 = puVar9 + 2;
    puVar9 = (undefined4 *)*puVar9;
    iVar11 = *(int *)((int)this + 0x18);
    local_60[iVar8 * 3 + 1] = *piVar13;
    local_60[iVar8 * 3] = iVar11 + (uVar1 & 0x7fff) * 0x34;
    iVar8 = iVar8 + 1;
  }
  iVar11 = 1;
  do {
    bVar3 = false;
    if (0 < iVar8) {
      pcVar5 = local_58;
      iVar12 = iVar8;
      bVar3 = false;
      do {
        if ((*pcVar5 == '\0') &&
           (uVar6 = *(int *)(*(int *)(pcVar5 + -8) + 0xc) - iVar2, uVar10 = (int)uVar6 >> 0x1f,
           (uVar6 ^ uVar10) - uVar10 == iVar11)) {
          bVar3 = true;
          *pcVar5 = '\x01';
        }
        pcVar5 = pcVar5 + 0xc;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    iVar11 = iVar11 + 1;
  } while (bVar3);
  if (0 < iVar8) {
    piVar13 = local_60;
    do {
      if ((char)piVar13[2] == '\0') {
        if ((float)piVar13[1] < param_1) {
          iVar2 = *piVar13;
          uVar7 = FUN_50060b30(this,*(short *)(iVar2 + 0xc));
          if ((char)uVar7 == '\0') {
            param_1 = (float)piVar13[1];
            local_6c = iVar2;
          }
        }
      }
      piVar13 = piVar13 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return local_6c;
}

