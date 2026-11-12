// rea decompile_all
// name: FUN_200cbb10
// address: 0x200cbb10
// body: available
// range: 0x200cbb10-0x200cbc03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cbb10(undefined4 param_1,char *param_2)

{
  void **ppvVar1;
  char *_Str1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  char *_Str2;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010e4a9;
  local_c = ExceptionList;
  local_4 = 0;
  piVar4 = (int *)**(int **)(in_ECX + 0xa0);
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (piVar4 != *(int **)(in_ECX + 0xa0)) {
    do {
      _Str2 = "";
      if (param_2 != (char *)0x0) {
        _Str2 = param_2;
      }
      _Str1 = (char *)piVar4[3];
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar2 = __strcmpi(_Str1,_Str2);
      if (iVar2 == 0) goto LAB_200cbbc1;
      piVar4 = (int *)*piVar4;
      ppvVar1 = ExceptionList;
    } while (piVar4 != (int *)*(int *)(in_ECX + 0xa0));
  }
  ExceptionList = ppvVar1;
  iVar2 = *(int *)(in_ECX + 0xa0);
  piVar4 = *(int **)(iVar2 + 4);
  piVar3 = operator_new(0x18);
  *piVar3 = iVar2;
  if (piVar4 == (int *)0x0) {
    piVar4 = piVar3;
  }
  piVar3[1] = (int)piVar4;
  *(int **)(iVar2 + 4) = piVar3;
  *(int **)piVar3[1] = piVar3;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (piVar3 != (int *)0xfffffff8) {
    FUN_200234d0(&param_1);
  }
  *(int *)(in_ECX + 0xa4) = *(int *)(in_ECX + 0xa4) + 1;
LAB_200cbbc1:
  if (param_2 != (char *)0x0) {
    if (param_2[-1] != '\0') {
      param_2[-1] = param_2[-1] + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_200f9f75(param_2 + -1);
  }
  ExceptionList = local_c;
  return;
}

