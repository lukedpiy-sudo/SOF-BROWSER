// rea decompile_all
// name: FUN_200cbc10
// address: 0x200cbc10
// body: available
// range: 0x200cbc10-0x200cbcfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200cbc10(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  char *_Str1;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e4cb;
  local_c = ExceptionList;
  puVar6 = *(undefined4 **)(in_ECX + 4);
  ppvVar3 = &local_c;
  if ((puVar6 == (undefined4 *)0x0) || (ppvVar3 = &local_c, *(char *)((int)puVar6 + 0x8e) != '\0'))
  {
    for (; ExceptionList = ppvVar3, puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
      _Str1 = (char *)puVar6[2];
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar4 = __strcmpi(_Str1,param_1);
      if ((iVar4 == 0) && (*(char *)((int)puVar6 + 0x8d) == '\0')) {
        puVar1 = *(undefined4 **)(in_ECX + 4);
        while (puVar1 != puVar6) {
          puVar2 = *(undefined4 **)(in_ECX + 4);
          puVar1 = (undefined4 *)*puVar2;
          if (puVar2 != (undefined4 *)0x0) {
            FUN_200c9b10();
            FUN_200f9f75(puVar2);
          }
          *(undefined4 **)(in_ECX + 4) = puVar1;
        }
        FUN_200ca110();
        ExceptionList = local_c;
        return *(undefined4 *)(in_ECX + 4);
      }
      ppvVar3 = ExceptionList;
    }
    pvVar5 = operator_new(0x10c);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)FUN_200c96a0(in_ECX,param_1);
    }
    *puVar6 = *(undefined4 *)(in_ECX + 4);
    *(undefined4 **)(in_ECX + 4) = puVar6;
  }
  else {
    ExceptionList = &local_c;
    (*DAT_20390d94)(s_menu_small_invalid_wav_20158370);
  }
  ExceptionList = local_c;
  return 0;
}

