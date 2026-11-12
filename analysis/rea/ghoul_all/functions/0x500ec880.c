// rea decompile_all
// name: FUN_500ec880
// address: 0x500ec880
// body: available
// range: 0x500ec880-0x500eca4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500ec880(void *this,float *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_64 [4];
  undefined1 local_54 [16];
  float local_44 [16];
  float local_4;
  
  iVar3 = 0x10;
  fVar1 = param_1[0x10];
  puVar2 = this;
  if (((uint)fVar1 & 1) != 0) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
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
    *(undefined4 *)((int)this + 0x40) = 1;
    return;
  }
  pfVar4 = param_1;
  pfVar5 = local_44;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  local_4 = fVar1;
  iVar3 = FUN_500ecb10(local_44,(int)local_54,(float *)&param_1);
  if (iVar3 != 0) {
    local_64[0] = 1.0;
    local_64[1] = 0.0;
    local_64[2] = 0.0;
    local_64[3] = 0.0;
    FUN_500eca50((int)local_44,(int)local_54,local_64);
    iVar3 = 0;
    pfVar4 = this;
    do {
      pfVar5 = local_64 + iVar3;
      iVar3 = iVar3 + 1;
      *pfVar4 = *pfVar5;
      pfVar4 = pfVar4 + 4;
    } while (iVar3 < 4);
    local_64[0] = 0.0;
    local_64[1] = 1.0;
    local_64[2] = 0.0;
    local_64[3] = 0.0;
    FUN_500eca50((int)local_44,(int)local_54,local_64);
    iVar3 = 0;
    pfVar4 = (float *)((int)this + 4);
    do {
      pfVar5 = local_64 + iVar3;
      iVar3 = iVar3 + 1;
      *pfVar4 = *pfVar5;
      pfVar4 = pfVar4 + 4;
    } while (iVar3 < 4);
    local_64[0] = 0.0;
    local_64[1] = 0.0;
    local_64[2] = 1.0;
    local_64[3] = 0.0;
    FUN_500eca50((int)local_44,(int)local_54,local_64);
    iVar3 = 0;
    pfVar4 = (float *)((int)this + 8);
    do {
      pfVar5 = local_64 + iVar3;
      iVar3 = iVar3 + 1;
      *pfVar4 = *pfVar5;
      pfVar4 = pfVar4 + 4;
    } while (iVar3 < 4);
    local_64[0] = 0.0;
    local_64[1] = 0.0;
    local_64[2] = 0.0;
    local_64[3] = 1.0;
    FUN_500eca50((int)local_44,(int)local_54,local_64);
    iVar3 = 0;
    pfVar4 = (float *)((int)this + 0xc);
    do {
      pfVar5 = local_64 + iVar3;
      iVar3 = iVar3 + 1;
      *pfVar4 = *pfVar5;
      pfVar4 = pfVar4 + 4;
    } while (iVar3 < 4);
    *(undefined4 *)((int)this + 0x40) = 0;
    return;
  }
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
  *(undefined4 *)((int)this + 0x40) = 1;
  return;
}

