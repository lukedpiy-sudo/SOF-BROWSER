// rea decompile_all
// name: FUN_200c67d0
// address: 0x200c67d0
// body: available
// range: 0x200c67d0-0x200c6958 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200c6859) */
/* WARNING: Removing unreachable block (ram,0x200c68b6) */
/* WARNING: Removing unreachable block (ram,0x200c6861) */

undefined4 FUN_200c67d0(void)

{
  char *_Str2;
  int iVar1;
  void *pvVar2;
  int iVar3;
  int in_ECX;
  undefined1 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010dfab;
  local_c = ExceptionList;
  if (*(int *)(in_ECX + 0x24) != 0) {
    ExceptionList = &local_c;
    FUN_2000a3a0(in_ECX + 0x1c,0,0xffffffff);
    for (iVar3 = *(int *)(in_ECX + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      _Str2 = *(char **)(iVar3 + 0xc);
      if (_Str2 == (char *)0x0) {
        _Str2 = "";
      }
      iVar1 = __strcmpi("",_Str2);
      if (iVar1 == 0) {
        FUN_2000a5b0(1);
        if (iVar3 != 0) {
          iVar1 = *(int *)(in_ECX + 4);
          while (iVar1 != iVar3) {
            *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(iVar1 + 4);
            if (iVar1 != 0) {
              FUN_200e61a0();
              FUN_200f9f75(iVar1);
            }
            iVar1 = *(int *)(in_ECX + 4);
          }
          FUN_200c6960();
          ExceptionList = local_c;
          return 1;
        }
        break;
      }
    }
    pvVar2 = operator_new(0xa4);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      puVar4 = *(undefined1 **)(in_ECX + 0x20);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_201116cc;
      }
      iVar3 = FUN_200e5d60(in_ECX,puVar4);
    }
    local_4 = 0xffffffff;
    if ((*(int *)(iVar3 + 0x10) == 0) || (*(char *)(iVar3 + 0x8a) == '\0')) {
      FUN_200e61a0();
      FUN_200f9f75(iVar3);
      ExceptionList = local_c;
      return 0;
    }
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(in_ECX + 4);
    *(int *)(in_ECX + 4) = iVar3;
  }
  ExceptionList = local_c;
  return 1;
}

