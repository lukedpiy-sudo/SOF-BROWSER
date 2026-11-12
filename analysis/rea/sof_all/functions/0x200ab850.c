// rea decompile_all
// name: FUN_200ab850
// address: 0x200ab850
// body: available
// range: 0x200ab850-0x200aba47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ab850(undefined4 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  
  FUN_200692e0(param_1,0xffffffff);
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x110));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 4));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 8));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0xc));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x10));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x14));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x18));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x1c));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x20));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x24));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x28));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x2c));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x30));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x34));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x38));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x3c));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x40));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x44));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x48));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x4c));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x50));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x54));
  FUN_20067510(param_1);
  FUN_200692b0(param_1,in_ECX + 0x74);
  FUN_200692b0(param_1,in_ECX + 0x80);
  FUN_200692b0(param_1,in_ECX + 0x8c);
  FUN_200692b0(param_1,in_ECX + 0x98);
  if (*(int *)(in_ECX + 0x108) == 0) {
    FUN_20069340(param_1,0);
  }
  else {
    FUN_20069340(param_1,1);
    FUN_200b8e00(param_1);
  }
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0xa4));
  pbVar2 = (byte *)*param_1;
  iVar3 = *(int *)(in_ECX + 0xa4);
  iVar4 = *(int *)(in_ECX + 0xac);
  pbVar1 = pbVar2 + 0x14;
  iVar5 = FUN_200facde(pbVar1,4,1,*(undefined4 *)(pbVar2 + 4));
  *pbVar2 = *pbVar2 | iVar5 != 1;
  iVar5 = *(int *)(pbVar2 + 0xc);
  piVar7 = *(int **)(iVar5 + 4);
  piVar6 = operator_new(0x10);
  *piVar6 = iVar5;
  if (piVar7 == (int *)0x0) {
    piVar7 = piVar6;
  }
  piVar6[1] = (int)piVar7;
  *(int **)(iVar5 + 4) = piVar6;
  *(int **)piVar6[1] = piVar6;
  if (piVar6 + 2 != (int *)0x0) {
    piVar6[2] = iVar4;
    piVar6[3] = iVar3;
  }
  *(int *)(pbVar2 + 0x10) = *(int *)(pbVar2 + 0x10) + 1;
  *(int *)pbVar1 = *(int *)pbVar1 + iVar3;
  return;
}

