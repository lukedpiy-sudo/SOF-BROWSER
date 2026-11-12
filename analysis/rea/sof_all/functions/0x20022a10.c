// rea decompile_all
// name: FUN_20022a10
// address: 0x20022a10
// body: available
// range: 0x20022a10-0x20022a82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20022a10(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_400 [1024];
  
  uVar2 = FUN_200faa9a(param_1,&DAT_20121204);
  for (puVar1 = DAT_2024b1d8; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[7]) {
    if ((*(byte *)(puVar1 + 3) & 1) != 0) {
      Com_sprintf(local_400,0x400,s_set__s___s__201200fc,*puVar1,puVar1[1]);
      FUN_200faa48(uVar2,&DAT_2011d114,local_400);
    }
  }
  FUN_200fa9ae(uVar2);
  return;
}

