// rea decompile_all
// name: FUN_200f6020
// address: 0x200f6020
// body: available
// range: 0x200f6020-0x200f6127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f6020(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 *puVar5;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    pcVar2 = *(char **)(in_ECX + 0x14);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    iVar3 = __strcmpi(pcVar2,param_1);
    if (iVar3 == 0) {
      puVar5 = *(undefined1 **)(in_ECX + 0x14);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_201116cc;
      }
      uVar4 = FUN_20055450(&DAT_2015a4f8,puVar5,0);
      FUN_200c7fd0(uVar4);
      return;
    }
    pcVar2 = *(char **)(in_ECX + 0x14);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    iVar3 = -1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      puVar5 = *(undefined1 **)(in_ECX + 0x14);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_201116cc;
      }
      uVar4 = FUN_20055450(&DAT_2015a4e0,puVar5,0);
      FUN_200c7fd0(uVar4);
      puVar5 = *(undefined1 **)(in_ECX + 0x14);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_201116cc;
      }
      uVar4 = FUN_20055450(&DAT_2015a360,puVar5);
      FUN_200f2fc0(*(undefined4 *)(in_ECX + 0xc),uVar4);
    }
    uVar4 = FUN_20055450(&DAT_2015a4c8,param_1,0);
    FUN_200c7fd0(uVar4);
    uVar4 = FUN_20055450(&DAT_2015a360,param_1,param_2,&PTR_LAB_2015a050,&LAB_200f5e90,0,0);
    FUN_200f2f30(*(undefined4 *)(in_ECX + 0xc),uVar4);
  }
  return;
}

