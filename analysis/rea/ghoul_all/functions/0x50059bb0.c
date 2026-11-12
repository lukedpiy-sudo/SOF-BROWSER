// rea decompile_all
// name: FUN_50059bb0
// address: 0x50059bb0
// body: available
// range: 0x50059bb0-0x50059cf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_50059bb0(void *this,int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_8c;
  undefined1 auStack_80 [128];
  
  iVar1 = DAT_5015d8c8;
  iVar7 = 0;
  local_8c = -1;
  puVar6 = (undefined4 *)((int)this + 0xb8);
  do {
    if ((int *)*puVar6 == (int *)(DAT_5015cca0 + param_1 * 0x464)) {
      FUN_50058070(this,(int *)*puVar6);
      uVar11 = 0;
      uVar10 = 0;
      pcVar9 = s________50142ff0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      *(undefined1 *)(puVar6 + 1) = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      *(undefined1 *)((int)puVar6 + 5) = 0;
      puVar2 = FUN_500fe1e0((byte *)s_bot_name_i_50142fe4);
      iVar3 = (*DAT_5015cb4c)(puVar2,pcVar9,uVar10,uVar11);
      puVar6[-2] = iVar3;
      uVar10 = *(undefined4 *)(iVar3 + 4);
      puVar2 = &DAT_50142f40;
      puVar8 = auStack_80;
      uVar11 = 0x80;
      FUN_500fe2b0();
      (*DAT_5015cb50)(*(undefined4 *)puVar6[-2],s________50142ff0,puVar8,uVar11,puVar2,uVar10);
      local_8c = iVar7;
    }
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 6;
  } while (iVar7 < 0x20);
  uVar4 = param_1 + 1;
  if ((int)uVar4 <= iVar1) {
    piVar5 = (int *)(DAT_5015cca0 + 0x78 + uVar4 * 0x464);
    do {
      if ((*piVar5 == 0) && (local_8c != -1)) {
        uVar10 = (*DAT_5015cb50)(**(undefined4 **)((int)this + local_8c * 0x18 + 0xb0),auStack_80);
        return CONCAT31((int3)((uint)uVar10 >> 8),1);
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x119;
    } while ((int)uVar4 <= iVar1);
  }
  return uVar4 & 0xffffff00;
}

