// rea decompile_all
// name: FUN_200d5bc0
// address: 0x200d5bc0
// body: available
// range: 0x200d5bc0-0x200d5cdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d5bc0(int *param_1)

{
  char *_Str2;
  int iVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  char acStack_138 [4];
  undefined1 local_134 [48];
  undefined1 auStack_104 [128];
  undefined1 auStack_84 [132];
  
  (**(code **)(*param_1 + 0x30))(local_134);
  Cvar_Set(**(undefined4 **)(in_ECX + 0x13c),acStack_138);
  uVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if ((*(int *)(in_ECX + 0x158) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x15c) - *(int *)(in_ECX + 0x158)) / 0x14) <= uVar3))
    goto LAB_200d5c74;
    _Str2 = *(char **)(*(int *)(in_ECX + 0x158) + iVar2 + 4);
    if (_Str2 == (char *)0x0) {
      _Str2 = "";
    }
    iVar1 = __strcmpi(acStack_138,_Str2);
    if (iVar1 == 0) break;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x14;
  }
  if (*(undefined4 **)(in_ECX + 300) != (undefined4 *)0x0) {
    Cvar_SetValue(**(undefined4 **)(in_ECX + 300),(float)(int)uVar3);
  }
LAB_200d5c74:
  if (*(int *)(in_ECX + 300) != 0) {
    Com_sprintf(auStack_104,0x80,s_teamicons__s_20158c8c,
                *(undefined4 *)(*(int *)(in_ECX + 0x13c) + 4));
    Com_sprintf(auStack_84,0x80,s__s_image_20158c80,**(undefined4 **)(in_ECX + 300));
    Cvar_Set(auStack_84,auStack_104);
  }
  return;
}

