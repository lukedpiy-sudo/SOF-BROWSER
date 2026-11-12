// rea decompile_all
// name: FUN_2007b870
// address: 0x2007b870
// body: available
// range: 0x2007b870-0x2007b946 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2007b870(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_14 [2];
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  local_14[0] = CONCAT22(local_14[0]._2_2_,param_2._0_2_);
  local_8 = param_3;
  *(undefined1 *)(in_ECX + 0x128) = 1;
  *(undefined1 *)(in_ECX + 0x129) = 1;
  local_4 = param_1;
  puVar3 = *(undefined4 **)(in_ECX + 0x150);
  local_c = local_14[0];
  puVar4 = (undefined4 *)puVar3[1];
  cVar1 = '\x01';
  if (puVar4 != *(undefined4 **)(in_ECX + 0x154)) {
    do {
      puVar3 = puVar4;
      cVar1 = FUN_20087600(&local_c,puVar3 + 3);
      if (cVar1 == '\0') {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
      }
    } while (puVar4 != *(undefined4 **)(in_ECX + 0x154));
  }
  if (*(char *)(in_ECX + 0x158) == '\0') {
    param_2 = puVar3;
    if (cVar1 != '\0') {
      if (puVar3 == (undefined4 *)**(int **)(in_ECX + 0x150)) {
        puVar2 = &param_1;
        goto LAB_2007b92f;
      }
      FUN_20086fc0();
    }
    if ((ushort)local_c <= *(ushort *)(param_2 + 3)) {
      if ((ushort)local_c < *(ushort *)(param_2 + 3)) {
        return;
      }
      if (local_8 <= (int)param_2[4]) {
        return;
      }
    }
    puVar2 = local_14;
  }
  else {
    puVar2 = &param_3;
  }
LAB_2007b92f:
  FUN_20085610(puVar2,puVar4,puVar3,&local_c);
  return;
}

