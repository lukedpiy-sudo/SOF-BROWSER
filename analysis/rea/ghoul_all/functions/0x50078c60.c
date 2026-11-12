// rea decompile_all
// name: FUN_50078c60
// address: 0x50078c60
// body: available
// range: 0x50078c60-0x50078d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50078c60(void *this,int param_1,int param_2)

{
  byte *_Dest;
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined **ppuVar4;
  byte *pbVar5;
  bool bVar6;
  
  _Dest = (byte *)((int)this + 4);
  _strncpy((char *)_Dest,(char *)(param_2 + 4),0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  iVar3 = *(int *)(param_2 + 0x50);
  *(int *)((int)this + 0x50) = iVar3;
  if ((param_1 != 0) && (iVar3 != -1)) {
    *(void **)(param_1 + 0x318 + iVar3 * 4) = this;
  }
  *(undefined4 *)((int)this + 0x4c) = 0x15;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  ppuVar4 = &PTR_DAT_50145268;
  pbVar2 = _Dest;
  pbVar5 = PTR_DAT_50145268;
  if (PTR_DAT_50145268 == (undefined *)0x0) {
    return;
  }
LAB_50078cc7:
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 == *pbVar5) {
      if (bVar1 != 0) {
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_50078ceb;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
        if (bVar1 != 0) goto LAB_50078cc7;
      }
      iVar3 = 0;
    }
    else {
LAB_50078ceb:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
    }
    if (iVar3 == 0) {
      *(undefined **)((int)this + 0x48) = ppuVar4[1];
      *(undefined **)((int)this + 0x4c) = ppuVar4[2];
      return;
    }
    pbVar5 = ppuVar4[4];
    ppuVar4 = ppuVar4 + 4;
    pbVar2 = _Dest;
    if (pbVar5 == (byte *)0x0) {
      return;
    }
  } while( true );
}

