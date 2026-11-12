// rea decompile_all
// name: FUN_2010825d
// address: 0x2010825d
// body: available
// range: 0x2010825d-0x20108377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2010825d(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  undefined4 uVar6;
  char local_a8 [132];
  undefined1 local_24 [8];
  undefined4 local_1c;
  uint local_18;
  ushort local_14 [4];
  undefined *local_c;
  undefined4 local_8;
  
  iVar3 = FUN_20108431(param_2,local_a8,local_14,&local_1c,param_1);
  if (iVar3 != 0) {
    sVar4 = _strlen(local_a8);
    pvVar5 = _malloc(sVar4 + 1);
    if (pvVar5 != (void *)0x0) {
      puVar1 = (uint *)(&DAT_20408468 + param_1 * 4);
      puVar2 = (undefined *)(&DAT_2015e1ac)[param_1 * 3];
      local_18 = *puVar1;
      local_c = &DAT_204087c4 + param_1 * 6;
      FUN_200fe470(local_24,local_c,6);
      local_8 = DAT_20408480;
      uVar6 = FUN_20101cf0(pvVar5,local_a8);
      (&DAT_2015e1ac)[param_1 * 3] = uVar6;
      *puVar1 = (uint)local_14[0];
      FUN_200fe470(local_c,local_14,6);
      if (param_1 == 2) {
        DAT_20408480 = local_1c;
      }
      if (param_1 == 1) {
        DAT_20408484 = local_1c;
      }
      iVar3 = (**(code **)(&DAT_2015e1b0 + param_1 * 0xc))();
      if (iVar3 == 0) {
        if (puVar2 != &DAT_2015e09c) {
          FUN_200f9d32(puVar2);
        }
        return (&DAT_2015e1ac)[param_1 * 3];
      }
      (&DAT_2015e1ac)[param_1 * 3] = puVar2;
      FUN_200f9d32(pvVar5);
      *puVar1 = local_18;
      DAT_20408480 = local_8;
    }
  }
  return 0;
}

