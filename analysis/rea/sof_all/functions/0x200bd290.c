// rea decompile_all
// name: FUN_200bd290
// address: 0x200bd290
// body: available
// range: 0x200bd290-0x200bd34d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bd290(int param_1)

{
  void *pvVar1;
  undefined1 *puVar2;
  int iVar3;
  byte *in_ECX;
  
  in_ECX[8] = (byte)param_1;
  pvVar1 = operator_new(0x10);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)(in_ECX + 0xc) = pvVar1;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  puVar2 = *(undefined1 **)(param_1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_201116cc;
  }
  iVar3 = FUN_200faa9a(puVar2,&DAT_2011d688);
  *(int *)(in_ECX + 4) = iVar3;
  *in_ECX = iVar3 == 0;
  if (iVar3 != 0) {
    param_1 = 0x198237fe;
    iVar3 = FUN_200facde(&param_1,4,1,iVar3);
    *in_ECX = *in_ECX | iVar3 != 1;
    param_1 = 0;
    iVar3 = FUN_200facde(&param_1,4,1,*(undefined4 *)(in_ECX + 4));
    *in_ECX = *in_ECX | iVar3 != 1;
    iVar3 = FUN_200facde(&param_1,4,1,*(undefined4 *)(in_ECX + 4));
    *in_ECX = *in_ECX | iVar3 != 1;
  }
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  return;
}

