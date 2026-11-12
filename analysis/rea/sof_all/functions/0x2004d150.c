// rea decompile_all
// name: FUN_2004d150
// address: 0x2004d150
// body: available
// range: 0x2004d150-0x2004d24c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_2004d150(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_44 = 0;
  local_48 = 0;
  local_58 = 0x67452301;
  local_54 = 0xefcdab89;
  local_50 = 0x98badcfe;
  local_4c = 0x10325476;
  FUN_2004ca10(&local_58,param_1,param_2);
  uVar3 = 0;
  puVar2 = (undefined1 *)((int)&local_48 + 2);
  do {
    *(undefined1 *)((int)&local_68 + uVar3) = puVar2[-2];
    *(undefined1 *)((int)&local_68 + uVar3 + 1) = puVar2[-1];
    *(undefined1 *)((int)&local_68 + uVar3 + 2) = *puVar2;
    *(undefined1 *)((int)&local_68 + uVar3 + 3) = puVar2[1];
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 8);
  iVar1 = 0x38;
  uVar3 = local_48 >> 3 & 0x3f;
  if (0x37 < uVar3) {
    iVar1 = 0x78;
  }
  FUN_2004ca10(&local_58,&DAT_20136870,iVar1 - uVar3);
  FUN_2004ca10(&local_58,&local_68,8);
  uVar3 = 0;
  puVar2 = (undefined1 *)((int)&local_58 + 2);
  do {
    *(undefined1 *)((int)&local_68 + uVar3) = puVar2[-2];
    *(undefined1 *)((int)&local_68 + uVar3 + 1) = puVar2[-1];
    *(undefined1 *)((int)&local_68 + uVar3 + 2) = *puVar2;
    *(undefined1 *)((int)&local_68 + uVar3 + 3) = puVar2[1];
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 4;
  } while (uVar3 < 0x10);
  return local_5c ^ local_60 ^ local_64 ^ local_68;
}

