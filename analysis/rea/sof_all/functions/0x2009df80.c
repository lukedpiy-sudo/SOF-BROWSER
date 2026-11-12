// rea decompile_all
// name: FUN_2009df80
// address: 0x2009df80
// body: available
// range: 0x2009df80-0x2009e093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_2009df80(undefined1 *param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  iVar1 = *(int *)(in_ECX + 8);
  puVar7 = param_1;
  if (param_2 != iVar1) {
    puVar3 = param_1 + 0x19;
    iVar5 = param_2 + 0x1c;
    do {
      *puVar7 = *(undefined1 *)(iVar5 + -0x1c);
      FUN_2000a3a0(iVar5 + -0x18,0,0xffffffff);
      puVar3[-5] = *(undefined1 *)(iVar5 + -8);
      puVar3[-4] = *(undefined1 *)(iVar5 + -7);
      puVar3[-3] = *(undefined1 *)(iVar5 + -6);
      puVar3[-1] = *(undefined1 *)(iVar5 + -4);
      *puVar3 = puVar3[param_2 - (int)param_1];
      puVar3[1] = *(undefined1 *)(iVar5 + -2);
      FUN_2009fe10(iVar5);
      FUN_2009f9e0(iVar5 + 0x10);
      puVar3[0x6b] = *(undefined1 *)(iVar5 + 0x68);
      *(undefined4 *)(puVar3 + 0x6f) = *(undefined4 *)(iVar5 + 0x6c);
      puVar3[0x73] = *(undefined1 *)(iVar5 + 0x70);
      *(undefined2 *)(puVar3 + 0x75) = *(undefined2 *)(iVar5 + 0x72);
      *(undefined2 *)(puVar3 + 0x77) = *(undefined2 *)(iVar5 + 0x74);
      puVar6 = (undefined4 *)(iVar5 + 0x78);
      puVar8 = (undefined4 *)(puVar3 + 0x7b);
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar7 = puVar7 + 0xd8;
      puVar3 = puVar3 + 0xd8;
      iVar2 = iVar5 + 0xbc;
      iVar5 = iVar5 + 0xd8;
    } while (iVar2 != iVar1);
  }
  puVar3 = *(undefined1 **)(in_ECX + 8);
  for (puVar4 = puVar7; puVar4 != puVar3; puVar4 = puVar4 + 0xd8) {
    FUN_2009b9e0();
  }
  *(undefined1 **)(in_ECX + 8) = puVar7;
  return param_1;
}

