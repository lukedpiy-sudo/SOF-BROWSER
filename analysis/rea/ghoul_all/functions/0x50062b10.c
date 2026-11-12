// rea decompile_all
// name: FUN_50062b10
// address: 0x50062b10
// body: available
// range: 0x50062b10-0x50062b82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_50062b10(void *this,uint param_1)

{
  ushort uVar1;
  char *pcVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_4;
  
  uVar3 = in_EAX & 0xffffff00;
  cVar6 = '\0';
  iVar7 = 9999;
  if ('\0' < *(char *)((int)this + 0x18)) {
    puVar8 = *(undefined4 **)((int)this + 0xc);
    uStack_4 = (uint)CONCAT11(*(char *)((int)this + 0x18),*(undefined1 *)this) << 0x10;
    do {
      pcVar2 = (char *)*puVar8;
      if (uStack_4._2_1_ == *pcVar2) {
        uVar1 = *(ushort *)(pcVar2 + 2);
      }
      else {
        uVar1 = *(ushort *)(pcVar2 + 4);
      }
      uVar3 = (uint)uVar1 - (param_1 & 0xffff);
      uVar5 = (int)uVar3 >> 0x1f;
      iVar4 = (uVar3 ^ uVar5) - uVar5;
      if (iVar4 < iVar7) {
        uStack_4 = (uint)CONCAT21(uStack_4._2_2_,cVar6) << 8;
        iVar7 = iVar4;
      }
      cVar6 = cVar6 + '\x01';
      puVar8 = puVar8 + 1;
    } while (cVar6 < uStack_4._3_1_);
    uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),uStack_4._1_1_);
  }
  return uVar3;
}

