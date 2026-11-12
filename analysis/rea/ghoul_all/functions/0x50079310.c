// rea decompile_all
// name: FUN_50079310
// address: 0x50079310
// body: available
// range: 0x50079310-0x50079541 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50079310(void *this,int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 unaff_EBX;
  float *pfVar4;
  float10 fVar5;
  float local_c;
  float fStack_8;
  
  switch(*(undefined4 *)((int)this + 0x48)) {
  case 0xfffffffc:
    iVar1 = (**(code **)(*param_1 + 0x10))();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x74) != 0)) {
      pfVar4 = (float *)(*(int *)(iVar1 + 0x74) + 0x14);
LAB_50079355:
      if (pfVar4 != (float *)0x0) {
        switch(*(undefined4 *)((int)this + 0x4c)) {
        case 0:
          fVar3 = (float)(**(code **)(*param_2 + 4))();
          *pfVar4 = fVar3;
          return;
        default:
          return;
        case 2:
          fVar5 = (float10)(**(code **)(*param_2 + 8))();
          *pfVar4 = (float)fVar5;
          return;
        case 4:
          (**(code **)(*param_2 + 0xc))(pfVar4);
          return;
        case 7:
          fVar3 = (float)(**(code **)(*param_2 + 0x10))();
          *pfVar4 = fVar3;
          return;
        }
      }
    }
    break;
  case 0xfffffffd:
  case 0xfffffffe:
  case 0xffffffff:
    break;
  default:
    iVar1 = (**(code **)(*param_1 + 0x10))();
    if (iVar1 != 0) {
      pfVar4 = (float *)(*(int *)((int)this + 0x48) + iVar1);
      goto LAB_50079355;
    }
  }
  iVar1 = *(int *)((int)this + 0x48);
  if (iVar1 == -3) {
    (**(code **)(*param_1 + 0xc))(&local_c);
    fVar5 = (float10)(**(code **)(*param_1 + 8))();
    fStack_8 = (float)fVar5;
    puVar2 = operator_new(0x58);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar2 + 1),&DAT_5015911c,0x40);
      puVar2[0x11] = 2;
      puVar2[0x12] = 0xffffffff;
      *puVar2 = &PTR_FUN_50129458;
      puVar2[0x13] = unaff_EBX;
      puVar2[0x14] = local_c;
      puVar2[0x15] = fStack_8;
      goto LAB_50079453;
    }
  }
  else if (iVar1 == -2) {
    (**(code **)(*param_1 + 0xc))(&local_c);
    fVar5 = (float10)(**(code **)(*param_1 + 8))();
    local_c = (float)fVar5;
    puVar2 = operator_new(0x58);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar2 + 1),&DAT_5015911c,0x40);
      puVar2[0x11] = 2;
      puVar2[0x12] = 0xffffffff;
      *puVar2 = &PTR_FUN_50129458;
      puVar2[0x13] = unaff_EBX;
      puVar2[0x14] = local_c;
      puVar2[0x15] = fStack_8;
      goto LAB_50079453;
    }
  }
  else {
    if (iVar1 != -1) {
      return;
    }
    (**(code **)(*param_1 + 0xc))(&local_c);
    fVar5 = (float10)(**(code **)(*param_1 + 8))();
    puVar2 = operator_new(0x58);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar2 + 1),&DAT_5015911c,0x40);
      puVar2[0x11] = 2;
      puVar2[0x12] = 0xffffffff;
      *puVar2 = &PTR_FUN_50129458;
      puVar2[0x13] = (float)fVar5;
      puVar2[0x14] = local_c;
      puVar2[0x15] = fStack_8;
      goto LAB_50079453;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_50079453:
  (**(code **)(*param_1 + 0x44))(puVar2);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  (**(code **)*puVar2)(1);
  return;
}

