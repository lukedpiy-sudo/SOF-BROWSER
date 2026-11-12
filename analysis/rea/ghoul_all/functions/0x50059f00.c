// rea decompile_all
// name: FUN_50059f00
// address: 0x50059f00
// body: available
// range: 0x50059f00-0x5005a080 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50059f00(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_8;
  
  iVar8 = -1;
  piVar3 = (int *)0x0;
  iVar6 = 0;
  local_8 = 0;
  puVar7 = (uint *)((int)this + 0xb8);
  do {
    piVar2 = (int *)*puVar7;
    if ((piVar2 != (int *)0x0) && ((piVar3 == (int *)0x0 || (piVar2 < piVar3)))) {
      piVar3 = piVar2;
      iVar8 = iVar6;
    }
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 6;
  } while (iVar6 < 0x20);
  if ((piVar3 != (int *)0x0) &&
     (piVar2 = (int *)(DAT_5015cca0 + DAT_5015d8c8 * 0x464), piVar3 <= piVar2)) {
    piVar3 = piVar3 + 0x1e;
    do {
      if ((piVar3[-1] == 0) || (*piVar3 == 0)) {
        local_8 = local_8 + 1;
      }
      piVar1 = piVar3 + 0xfb;
      piVar3 = piVar3 + 0x119;
    } while (piVar1 <= piVar2);
  }
  if ((param_1 <= local_8) && (-1 < iVar8)) {
    FUN_50058070(this,*(int **)((int)this + iVar8 * 0x18 + 0xb8));
    uVar11 = 0;
    uVar10 = 0;
    pcVar9 = s________50142ff0;
    *(undefined4 *)((int)this + iVar8 * 0x18 + 0xb0) = 0;
    *(undefined4 *)((int)this + iVar8 * 0x18 + 0xb4) = 0;
    *(undefined4 *)((int)this + iVar8 * 0x18 + 0xb8) = 0;
    *(undefined1 *)((int)this + iVar8 * 0x18 + 0xbc) = 0;
    *(undefined4 *)((int)this + iVar8 * 0x18 + 0xc4) = 0;
    *(undefined4 *)((int)this + iVar8 * 0x18 + 0xc0) = 0;
    *(undefined1 *)((int)this + iVar8 * 0x18 + 0xbd) = 0;
    puVar4 = FUN_500fe1e0((byte *)s_bot_name_i_50142fe4);
    puVar5 = (undefined4 *)(*DAT_5015cb4c)(puVar4,pcVar9,uVar10,uVar11);
    *(undefined4 **)((int)this + iVar8 * 0x18 + 0xb0) = puVar5;
    (*DAT_5015cb50)(*puVar5,s________50142ff0);
    *(undefined4 *)(*(int *)((int)this + iVar8 * 0x18 + 0xb0) + 0x14) = 0;
    return;
  }
  uVar11 = 0;
  uVar10 = 0;
  pcVar9 = s________50142ff0;
  piVar3 = (int *)((int)this + param_2 * 0x18 + 0xb0);
  *piVar3 = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  *(undefined1 *)(piVar3 + 3) = 0;
  piVar3[5] = 0;
  piVar3[4] = 0;
  *(undefined1 *)((int)piVar3 + 0xd) = 0;
  puVar4 = FUN_500fe1e0((byte *)s_bot_name_i_50142fe4);
  puVar5 = (undefined4 *)(*DAT_5015cb4c)(puVar4,pcVar9,uVar10,uVar11);
  *piVar3 = (int)puVar5;
  (*DAT_5015cb50)(*puVar5,s________50142ff0);
  *(undefined4 *)(*piVar3 + 0x14) = 0;
  return;
}

