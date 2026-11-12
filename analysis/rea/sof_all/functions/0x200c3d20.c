// rea decompile_all
// name: FUN_200c3d20
// address: 0x200c3d20
// body: available
// range: 0x200c3d20-0x200c3e08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c3d20(undefined4 param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 *in_ECX;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010dd26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[2] = 0xffffffff;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_1;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  local_4 = 0;
  *(undefined1 *)(in_ECX + 9) = (undefined1)param_1;
  pvVar2 = operator_new(0xc);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  in_ECX[10] = pvVar2;
  in_ECX[0xb] = 0;
  uVar3 = 0xffffffff;
  *in_ECX = param_1;
  pcVar6 = &DAT_2015ee44;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_4 = CONCAT31(local_4._1_3_,1);
  cVar1 = FUN_2000a6c0(uVar3,1);
  if (cVar1 != '\0') {
    puVar5 = (undefined4 *)&DAT_2015ee44;
    puVar7 = (undefined4 *)in_ECX[4];
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    in_ECX[5] = uVar3;
    *(undefined1 *)(uVar3 + in_ECX[4]) = 0;
  }
  in_ECX[1] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[2] = 0;
  ExceptionList = local_c;
  return;
}

