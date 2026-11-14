// rea decompile_all
// name: FUN_30001d10
// address: 0x30001d10
// body: available
// range: 0x30001d10-0x30001ec4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_30001d10(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5,char *param_6)

{
  float fVar1;
  char *pcVar2;
  undefined4 extraout_ECX;
  undefined3 uVar4;
  int iVar3;
  uint uVar5;
  undefined3 uVar7;
  int iVar6;
  int unaff_EBX;
  int iVar8;
  int unaff_EDI;
  undefined *puVar9;
  float fVar10;
  
  pcVar2 = FUN_30007380(param_6,3,'\0','\x01');
  if (pcVar2 == (char *)0x0) {
    (*DAT_3008fde8)(0,s_Can_t_find_pic___s_3002e2ec,param_6);
    return;
  }
  FUN_30006400((int)pcVar2);
  uVar4 = (undefined3)((uint)extraout_ECX >> 8);
  uVar5 = DAT_300a46e0 & 0xfffffffd;
  DAT_300a46e0 = uVar5;
  if (((byte)DAT_300a4588 & 2) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  uVar7 = (undefined3)(uVar5 >> 8);
  iVar3 = CONCAT31(uVar4,param_5[1]);
  iVar6 = CONCAT31(uVar7,*param_5);
  (*DAT_300a4718)(iVar6,iVar3,CONCAT31(uVar7,param_5[2]),CONCAT31(uVar4,param_5[3]));
  DAT_300a46e0 = DAT_300a46e0 | 1;
  if (((byte)DAT_300a4588 & 1) != 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a4610 = 0x302;
  DAT_300a43fc = 0x303;
  if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  FUN_300062a0(0x2100);
  FUN_3001b650();
  (*DAT_300a4710)(7);
  iVar8 = param_2 * 0x20;
  puVar9 = &DAT_3002c178 + iVar8;
  (*DAT_300a465c)(puVar9);
  (*DAT_300a4670)((float)iVar6,(float)iVar3);
  (*DAT_300a465c)(&DAT_3002c180 + iVar8);
  fVar1 = (float)(unaff_EDI + unaff_EBX);
  fVar10 = fVar1;
  (*DAT_300a4670)(fVar1,(float)iVar3);
  (*DAT_300a465c)(&DAT_3002c188 + iVar8);
  (*DAT_300a4670)(fVar1,(float)(int)(puVar9 + (int)fVar10));
  (*DAT_300a465c)(&DAT_3002c190 + iVar8);
  (*DAT_300a4670)((float)iVar6,(float)(int)(puVar9 + (int)fVar10));
  (*DAT_300a45f4)();
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
  if (((byte)DAT_300a4588 & 1) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  return;
}

