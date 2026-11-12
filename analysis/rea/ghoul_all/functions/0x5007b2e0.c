// rea decompile_all
// name: FUN_5007b2e0
// address: 0x5007b2e0
// body: available
// range: 0x5007b2e0-0x5007b511 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_5007b2e0(void *this,int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  char *_Source;
  undefined4 *puVar8;
  undefined4 local_8;
  
  iVar6 = *(int *)((int)this + 0x104);
  _Source = (char *)(*(int *)((int)this + 0x114) + iVar6);
  do {
    iVar7 = *(int *)((int)this + 0x114);
    cVar1 = *(char *)(iVar6 + iVar7);
    *(int *)((int)this + 0x114) = iVar7 + 1;
  } while (cVar1 != '\0');
  uVar2 = *(undefined1 *)(iVar7 + 1 + iVar6);
  *(int *)((int)this + 0x114) = iVar7 + 2;
  uVar3 = *(undefined1 *)(iVar7 + 2 + iVar6);
  *(int *)((int)this + 0x114) = iVar7 + 3;
  uVar4 = *(undefined1 *)(iVar7 + 3 + iVar6);
  *(int *)((int)this + 0x114) = iVar7 + 4;
  uVar5 = *(undefined1 *)(iVar7 + 4 + iVar6);
  *(int *)((int)this + 0x114) = iVar7 + 5;
  local_8 = CONCAT13(*(undefined1 *)(iVar7 + 5 + iVar6),CONCAT12(uVar5,CONCAT11(uVar4,uVar3)));
  *(int *)((int)this + 0x114) = iVar7 + 6;
  puVar8 = (undefined4 *)0x0;
  *param_1 = local_8;
  switch(uVar2) {
  case 0:
    puVar8 = operator_new(0x50);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar8 + 1),_Source,0x40);
      puVar8[0x11] = 0;
      puVar8[0x12] = 0xffffffff;
      *puVar8 = &PTR_FUN_50129328;
      puVar8[0x13] = 0;
      goto switchD_5007b371_default;
    }
    break;
  case 1:
    puVar8 = operator_new(0x50);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar8 + 1),_Source,0x40);
      puVar8[0x11] = 1;
      puVar8[0x12] = 0xffffffff;
      *puVar8 = &PTR_FUN_501293f0;
      puVar8[0x13] = 0;
      goto switchD_5007b371_default;
    }
    break;
  case 2:
    puVar8 = operator_new(0x58);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar8 + 1),_Source,0x40);
      puVar8[0x11] = 2;
      puVar8[0x12] = 0xffffffff;
      *puVar8 = &PTR_FUN_50129458;
      puVar8[0x13] = 0;
      puVar8[0x14] = 0;
      puVar8[0x15] = 0;
      goto switchD_5007b371_default;
    }
    break;
  case 3:
    puVar8 = operator_new(0x50);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar8 + 1),_Source,0x40);
      puVar8[0x11] = 3;
      puVar8[0x12] = 0xffffffff;
      *puVar8 = &PTR_FUN_501294c0;
      puVar8[0x13] = DAT_5015cca0;
      goto switchD_5007b371_default;
    }
    break;
  case 4:
    puVar8 = operator_new(0x8c);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar8 + 1),_Source,0x40);
      puVar8[0x11] = 4;
      puVar8[0x12] = 0xffffffff;
      *puVar8 = &PTR_FUN_50129528;
      _strncpy((char *)(puVar8 + 0x13),&DAT_5015911c,0x40);
      goto switchD_5007b371_default;
    }
    break;
  default:
    goto switchD_5007b371_default;
  }
  puVar8 = (undefined4 *)0x0;
switchD_5007b371_default:
  if (99 < *param_1) {
    FUN_500817d0(this,(byte *)s_Index_out_of_range___d_>__d_50145720);
  }
  *(undefined4 **)((int)this + *param_1 * 4 + 0x188) = puVar8;
  return puVar8;
}

