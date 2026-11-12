// rea decompile_all
// name: FUN_500ecef0
// address: 0x500ecef0
// body: available
// range: 0x500ecef0-0x500ecfbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500ecef0(void *this,int param_1,float param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  puVar2 = this;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar3 = 4;
  puVar2 = this;
  do {
    *puVar2 = 0x3f800000;
    puVar2 = puVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fVar5 = (float10)fsin((float10)param_2);
  fVar1 = (float)fVar5;
  fVar5 = (float10)fcos((float10)param_2);
  if (param_1 == 0) {
    *(float *)((int)this + 0x14) = (float)fVar5;
    *(float *)((int)this + 0x18) = -fVar1;
    *(float *)((int)this + 0x24) = fVar1;
    *(float *)((int)this + 0x28) = (float)fVar5;
  }
  else if (param_1 == 1) {
    *(float *)this = (float)fVar5;
    *(float *)((int)this + 0x20) = -fVar1;
    *(float *)((int)this + 8) = fVar1;
    *(float *)((int)this + 0x28) = (float)fVar5;
  }
  else if (param_1 == 2) {
    *(float *)this = (float)fVar5;
    *(float *)((int)this + 4) = -fVar1;
    *(float *)((int)this + 0x10) = fVar1;
    *(float *)((int)this + 0x14) = (float)fVar5;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      fVar1 = *(float *)((int)this + (iVar4 + iVar3 * 4) * 4);
      if (iVar3 == iVar4) {
        fVar1 = 1.0 - fVar1;
      }
      if (0.0001 < ABS(fVar1)) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      *(undefined4 *)((int)this + 0x40) = 1;
      return;
    }
  } while( true );
}

