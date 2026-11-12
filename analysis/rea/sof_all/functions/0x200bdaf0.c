// rea decompile_all
// name: FUN_200bdaf0
// address: 0x200bdaf0
// body: available
// range: 0x200bdaf0-0x200bdbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bdaf0(uint param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint *in_ECX;
  undefined1 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010da2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 2) = (undefined1)param_1;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *in_ECX = param_1;
  in_ECX[1] = 0;
  local_4 = 0;
  if (in_ECX[3] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = in_ECX[5] - in_ECX[3];
  }
  if (uVar2 < param_1) {
    uVar2 = param_1;
    if ((int)param_1 < 0) {
      uVar2 = 0;
    }
    puVar3 = operator_new(uVar2);
    puVar1 = (undefined1 *)in_ECX[4];
    puVar6 = puVar3;
    for (puVar4 = (undefined1 *)in_ECX[3]; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    FUN_200f9f75(in_ECX[3]);
    in_ECX[5] = (uint)(puVar3 + param_1);
    if (in_ECX[3] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = in_ECX[4] - in_ECX[3];
    }
    in_ECX[3] = (uint)puVar3;
    in_ECX[4] = (uint)(puVar3 + iVar5);
  }
  ExceptionList = local_c;
  return;
}

