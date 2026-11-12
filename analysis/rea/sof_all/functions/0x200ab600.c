// rea decompile_all
// name: FUN_200ab600
// address: 0x200ab600
// body: available
// range: 0x200ab600-0x200ab848 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200ab600(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  
  iVar5 = param_1;
  piVar1 = (int *)(in_ECX + 4);
  piVar2 = (int *)(in_ECX + 0x110);
  *piVar2 = 0;
  FUN_20068e30(param_1,piVar1);
  if (*piVar1 == -1) {
    FUN_20068e30(iVar5,piVar2);
    FUN_20068e30(iVar5,piVar1);
  }
  FUN_20068e30(iVar5,in_ECX + 8);
  FUN_20068e30(iVar5,in_ECX + 0xc);
  FUN_20068e30(iVar5,in_ECX + 0x10);
  FUN_20068e30(iVar5,in_ECX + 0x14);
  FUN_20068e30(iVar5,in_ECX + 0x18);
  FUN_20068e30(iVar5,in_ECX + 0x1c);
  FUN_20068e30(iVar5,in_ECX + 0x20);
  FUN_20068e30(iVar5,in_ECX + 0x24);
  FUN_20068e30(iVar5,in_ECX + 0x28);
  FUN_20068e30(iVar5,in_ECX + 0x2c);
  FUN_20068e30(iVar5,in_ECX + 0x30);
  FUN_20068e30(iVar5,in_ECX + 0x34);
  FUN_20068e30(iVar5,in_ECX + 0x38);
  FUN_20068e30(iVar5,in_ECX + 0x3c);
  FUN_20068e30(iVar5,in_ECX + 0x40);
  FUN_20068e30(iVar5,in_ECX + 0x44);
  FUN_20068e30(iVar5,in_ECX + 0x48);
  FUN_20068e30(iVar5,in_ECX + 0x4c);
  FUN_20068e30(iVar5,in_ECX + 0x50);
  FUN_20068e30(iVar5,in_ECX + 0x54);
  FUN_200674d0(iVar5);
  FUN_20068f80(iVar5,in_ECX + 0x74);
  FUN_20068f80(iVar5,in_ECX + 0x80);
  FUN_20068f80(iVar5,in_ECX + 0x8c);
  FUN_20068f80(iVar5,in_ECX + 0x98);
  *(undefined4 *)(in_ECX + 0x108) = 0;
  if (*piVar2 != 0) {
    FUN_20068ef0(iVar5,&param_1);
    if ((char)param_1 != '\0') {
      puVar4 = operator_new(0x38);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[5] = 0;
        *(char *)(puVar4 + 4) = (char)param_1;
        puVar4[6] = 0;
        puVar4[7] = 0;
        *(char *)(puVar4 + 8) = (char)param_1;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[0xd] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined1 *)(puVar4 + 0xc) = 1;
      }
      *(undefined4 **)(in_ECX + 0x108) = puVar4;
      FUN_200b8ad0(iVar5);
    }
  }
  FUN_20068e30(iVar5,in_ECX + 0xa4);
  pcVar3 = *(char **)(iVar5 + 4);
  if (*pcVar3 == '\0') {
    iVar5 = (*DAT_204058ac)(&param_1,4,1,*(undefined4 *)(pcVar3 + 4));
    pcVar3[2] = pcVar3[2] | iVar5 != 1;
  }
  else {
    piVar1 = *(int **)(pcVar3 + 0x18) + 1;
    if (*(int **)(pcVar3 + 0x20) < piVar1) {
      pcVar3[2] = '\x01';
      *(int **)(pcVar3 + 0x18) = *(int **)(pcVar3 + 0x20);
    }
    else {
      param_1 = **(int **)(pcVar3 + 0x18);
      *(int **)(pcVar3 + 0x18) = piVar1;
    }
  }
  *(int *)(in_ECX + 0xac) = *(int *)(pcVar3 + 0x14) + param_1;
  FUN_200ab360(param_2);
  *(undefined1 *)(in_ECX + 0xa8) = 0;
  return 1;
}

