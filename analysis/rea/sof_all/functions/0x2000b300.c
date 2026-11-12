// rea decompile_all
// name: FUN_2000b300
// address: 0x2000b300
// body: available
// range: 0x2000b300-0x2000b4f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000b300(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 auStack_64 [4];
  undefined4 uStack_54;
  char *pcStack_50;
  undefined4 *apuStack_4c [4];
  undefined4 local_28 [4];
  short local_16;
  undefined4 local_14 [4];
  short local_2;
  
  if (((DAT_201c1f00 == 2) || (DAT_201c1f00 == 1)) && (iVar1 = FUN_2001cae0(), iVar1 != 0)) {
    DAT_201c1f00 = 4;
    apuStack_4c[3] = (undefined4 *)0x2000b340;
    _strncpy(&DAT_201c1f2c,s_localhost_2011d7dc,0x7f);
    apuStack_4c[3] = local_28;
    apuStack_4c[2] = (undefined4 *)&DAT_201c1f2c;
    apuStack_4c[1] = (undefined4 *)0x2000b34f;
    iVar1 = FUN_2004e2d0();
    if (iVar1 != 0) {
      if (local_16 == 0) {
        local_16 = FUN_20055380();
      }
      _DAT_201c1f18 = 0x40490fdb;
      FUN_200216d0();
      uVar2 = __ftol();
      DAT_2024b1d0 = 0;
      FUN_20022c60();
      apuStack_4c[3] = (undefined4 *)DAT_201ca400;
      apuStack_4c[2] = (undefined4 *)DAT_201ca3fc;
      apuStack_4c[0] = (undefined4 *)0x21;
      pcStack_50 = s_connect__i__i__i__d__4_2f___s__2011d774;
      puVar3 = local_28;
      puVar4 = auStack_64;
      apuStack_4c[1] = (undefined4 *)uVar2;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_2004d2f0(0);
      DAT_201c1fac = DAT_201c1f0c;
      return;
    }
LAB_2000b356:
    Com_Printf();
    DAT_201c1fac = 0;
    return;
  }
  if ((DAT_201c1f00 == 2) || (DAT_201c1f00 == 3)) {
    DAT_201ca400 = FUN_200fa7cc();
    DAT_201c1fb0 = 3000;
    if (DAT_201c1f00 != 3) {
      DAT_201c1fac = -99999;
    }
    DAT_201c1f00 = 4;
  }
  else if (((DAT_201c1f00 != 4) && (DAT_201c1f00 != 5)) && (DAT_201c1f00 != 6)) {
    return;
  }
  if (DAT_201c1fb0 <= DAT_201c1f0c - DAT_201c1fac) {
    DAT_201c1fac = DAT_201c1f0c;
    iVar1 = FUN_2004e2d0();
    if (iVar1 == 0) goto LAB_2000b356;
    if (local_2 == 0) {
      local_2 = FUN_20055380();
    }
    Com_Printf();
    puVar3 = local_14;
    ppuVar5 = apuStack_4c;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppuVar5 = (undefined4 *)*puVar3;
      puVar3 = puVar3 + 1;
      ppuVar5 = ppuVar5 + 1;
    }
    pcStack_50 = (char *)0x0;
    uStack_54 = 0x2000b4ea;
    FUN_2004d2f0();
  }
  return;
}

