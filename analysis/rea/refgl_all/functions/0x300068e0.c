// rea decompile_all
// name: FUN_300068e0
// address: 0x300068e0
// body: available
// range: 0x300068e0-0x30006a81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_300068e0(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  lVar8 = __ftol();
  iVar6 = (int)lVar8;
  if (*(float *)(DAT_3008fc5c + 0x18) != 0.0) {
    iVar6 = iVar6 + *(int *)(param_1 + 0x2d8);
  }
  if ((iVar6 < 0) || (0xe < iVar6)) {
    iVar6 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x244 + iVar6 * 4);
  do {
    if ((puVar1[-0x10] <= DAT_3008fc40) && (*puVar1 <= DAT_3008fc40)) break;
    iVar6 = iVar6 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar6 < 0xf);
  if (0 < iVar6) {
    piVar2 = (int *)(param_1 + 0x204 + iVar6 * 4);
    do {
      if (*piVar2 != 0) break;
      iVar6 = iVar6 + -1;
      piVar2 = piVar2 + -1;
    } while (0 < iVar6);
  }
  uVar3 = *(uint *)(param_1 + 0x2c4) >> 0xb;
  iVar5 = 0;
  *(byte *)(param_2 + 0x54) = (byte)uVar3 & 1;
  if (*(int *)(param_2 + 0x40) == 5) {
    uVar7 = 0x8040;
  }
  else {
    uVar7 = DAT_3008fc3c;
    if ((uVar3 & 1) == 0) {
      uVar7 = DAT_3008fc38;
    }
  }
  if (iVar6 < 0xf) {
    piVar2 = (int *)(param_1 + 0x244 + iVar6 * 4);
    do {
      if (piVar2[-0x10] == 0) {
        return;
      }
      if (*piVar2 == 0) {
        return;
      }
      (*DAT_300a43f4)(0xde1,iVar5,uVar7,piVar2[-0x10],*piVar2,0,0x1908,0x1401,piVar2[0x10] + param_1
                     );
      iVar4 = (*DAT_300a4564)();
      if (iVar4 == 0) {
        if ((*(byte *)(param_1 + 0x378) & 1) != 0) {
          return;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 1;
        piVar2 = piVar2 + 1;
      }
      else {
        if (*(char *)(param_2 + 0x54) == '\0') {
          (*DAT_3008fde8)(0,&DAT_3002e9f4);
          (*DAT_3008fe0c)(s_r_isf_3002e9e4,s_GL_SOLID_FORMAT_3002e814);
          DAT_3008fc38 = 3;
        }
        else {
          (*DAT_3008fde8)(0,&DAT_3002ea28);
          (*DAT_3008fe0c)(s_r_iaf_3002e9ec,s_GL_ALPHA_FORMAT_3002e804);
          DAT_3008fc3c = 4;
        }
        if (*(int *)(param_2 + 0x40) == 5) {
          uVar7 = 0x8040;
        }
        else {
          uVar7 = DAT_3008fc38;
          if (*(char *)(param_2 + 0x54) != '\0') {
            uVar7 = DAT_3008fc3c;
          }
        }
      }
    } while (iVar6 < 0xf);
  }
  return;
}

