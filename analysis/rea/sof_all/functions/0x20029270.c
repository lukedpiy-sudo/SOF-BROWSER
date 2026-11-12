// rea decompile_all
// name: FUN_20029270
// address: 0x20029270
// body: available
// range: 0x20029270-0x20029434 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20029270(int param_1,undefined4 *param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float afStack_110 [5];
  undefined4 uStack_fc;
  undefined1 *puStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined1 *puStack_ec;
  undefined4 *puStack_e8;
  undefined4 *puStack_e4;
  undefined4 *puStack_e0;
  undefined4 *puStack_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined1 local_c0 [80];
  float local_70 [14];
  undefined1 local_38 [56];
  
  local_cc = *param_2;
  local_c8 = param_2[1];
  puStack_dc = &local_cc;
  local_c4 = (float)param_2[2] - 256.0;
  puStack_e0 = &DAT_20390c24;
  puStack_e4 = &DAT_20390c24;
  puStack_ec = local_38;
  puStack_e8 = param_2;
  uStack_f0 = 0x200292b6;
  pfVar1 = (float *)FUN_2002fdb0();
  pfVar3 = pfVar1;
  pfVar4 = local_70;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  if (local_70[1] < 1.0) {
    pfVar3 = afStack_110;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar3 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar3 = pfVar3 + 1;
    }
    FUN_200300d0(local_c0);
    if (param_1 == 4) {
      local_d0 = 0xfa000064;
      puStack_ec = (undefined1 *)0x437a0000;
      iStack_f4 = param_1;
    }
    else {
      if (param_1 == 0xf) {
        puStack_dc = (undefined4 *)0x0;
        puStack_e0 = (undefined4 *)0x0;
        puStack_e4 = (undefined4 *)0xbf800000;
        puStack_e8 = (undefined4 *)0x40c00000;
        puStack_ec = (undefined1 *)0x437f0000;
        uStack_f0 = 0xfafafaff;
        puStack_f8 = local_c0;
        iStack_f4 = 0x1a;
        uStack_fc = 0x20029377;
        FUN_2003bb60();
        return;
      }
      if (param_1 == 0x11) {
        puStack_dc = (undefined4 *)0xf0;
        puStack_e0 = (undefined4 *)0xc8;
        puStack_e4 = (undefined4 *)0x20029397;
        irand();
        return;
      }
      if (param_1 == 0x1c) {
        puStack_dc = (undefined4 *)0x0;
        puStack_e0 = (undefined4 *)0x0;
        puStack_e4 = (undefined4 *)0xbf800000;
        puStack_e8 = (undefined4 *)0x40000000;
        puStack_ec = (undefined1 *)0x437f0000;
        uStack_f0 = 0xfffafaff;
        puStack_f8 = local_c0;
        iStack_f4 = 0x20;
        uStack_fc = 0x200293e0;
        FUN_2003bb60();
        return;
      }
      if (param_1 != 0x35) {
        return;
      }
      local_d0 = 0xfffabeaa;
      puStack_ec = (undefined1 *)0x43480000;
      iStack_f4 = 0x38;
    }
    puStack_dc = (undefined4 *)0x0;
    puStack_e0 = (undefined4 *)0x0;
    puStack_e4 = (undefined4 *)0xbf800000;
    puStack_e8 = (undefined4 *)0x40000000;
    puStack_f8 = local_c0;
    uStack_fc = 0x20029429;
    uStack_f0 = local_d0;
    FUN_2003bb60();
  }
  return;
}

