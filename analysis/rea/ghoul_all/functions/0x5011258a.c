// rea decompile_all
// name: FUN_5011258a
// address: 0x5011258a
// body: available
// range: 0x5011258a-0x50112710 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_5011258a(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  uint *lpName;
  undefined1 *puVar5;
  void *this;
  int *piVar6;
  bool bVar7;
  undefined *this_00;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar1 = FUN_501127d0(param_1,0x3d);
  if (puVar1 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar1) {
    return 0xffffffff;
  }
  bVar7 = *(char *)((int)puVar1 + 1) == '\0';
  if (DAT_5018c32c == DAT_5018c330) {
    DAT_5018c32c = FUN_50112769(DAT_5018c32c);
  }
  if (DAT_5018c32c == (int *)0x0) {
    if ((param_2 == 0) || (DAT_5018c334 == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_5018c32c = _malloc(4);
      if (DAT_5018c32c == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_5018c32c = 0;
      if (DAT_5018c334 == (undefined4 *)0x0) {
        DAT_5018c334 = _malloc(4);
        if (DAT_5018c334 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_5018c334 = 0;
      }
    }
    else {
      iVar2 = FUN_501121fe();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_5018c32c;
  this = (void *)((int)puVar1 - (int)param_1);
  iVar2 = FUN_50112711((uchar *)param_1,(size_t)this);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = FUN_5010a07c(this,piVar3,(uint *)(iVar2 * 4 + 8));
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar7) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_501126be;
    }
    this_00 = (undefined *)piVar3[iVar2];
    piVar6 = piVar3 + iVar2;
    FUN_5010880b(this_00);
    for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
      iVar2 = iVar2 + 1;
      *piVar6 = piVar6[1];
    }
    piVar3 = FUN_5010a07c(this_00,piVar3,(uint *)(iVar2 << 2));
    if (piVar3 == (int *)0x0) goto LAB_501126be;
  }
  DAT_5018c32c = piVar3;
LAB_501126be:
  if (param_2 != 0) {
    sVar4 = _strlen((char *)param_1);
    lpName = _malloc(sVar4 + 2);
    if (lpName != (uint *)0x0) {
      FUN_5010c140(lpName,param_1);
      puVar5 = (undefined1 *)(((int)lpName - (int)param_1) + (int)puVar1);
      *puVar5 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(puVar5 + 1)));
      FUN_5010880b((undefined *)lpName);
    }
  }
  return 0;
}

