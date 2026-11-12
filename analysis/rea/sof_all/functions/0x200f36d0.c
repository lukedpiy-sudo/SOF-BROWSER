// rea decompile_all
// name: FUN_200f36d0
// address: 0x200f36d0
// body: available
// range: 0x200f36d0-0x200f383b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f36d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = param_1;
  if (param_1[1] == 2) {
    return;
  }
  if (0 < (int)param_1[0x46]) {
    while (FUN_200f3840(*puVar1,0,&param_1,0), param_1 != (undefined4 *)0x0) {
      iVar2 = puVar1[0x46];
      if (0x3ff < iVar2) {
        iVar2 = 0x400;
      }
      iVar2 = Ordinal_19(*puVar1,puVar1[0x45],iVar2,0);
      if ((iVar2 == 0) || (iVar2 == -1)) break;
      iVar5 = puVar1[0x46];
      puVar1[0x46] = iVar5 - iVar2;
      FUN_200fa360(puVar1[0x45],puVar1[0x45] + iVar2,iVar5 - iVar2);
      *(undefined1 *)(puVar1[0x45] + puVar1[0x46]) = 0;
      if ((int)puVar1[0x46] < 1) break;
    }
  }
  do {
    FUN_200f3840(*puVar1,&param_1,0,0);
    if (param_1 == (undefined4 *)0x0) {
      return;
    }
    if ((int)puVar1[0x44] < puVar1[0x43] + 0x1000) {
      uVar4 = puVar1[0x43] + 0x3000;
      uVar3 = uVar4 & 0x80001fff;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffe000) + 1;
      }
      iVar5 = uVar4 - uVar3;
      iVar2 = FUN_200f9a92(puVar1[0x42],iVar5 + 1);
      if (iVar2 == 0) {
        return;
      }
      puVar1[0x42] = iVar2;
      puVar1[0x44] = iVar5;
    }
    iVar2 = Ordinal_16(*puVar1,puVar1[0x43] + puVar1[0x42],0x1000,0);
    if (iVar2 < 1) {
      Ordinal_111();
      puVar1[1] = 2;
      return;
    }
    iVar5 = puVar1[0x43];
    puVar1[0x43] = iVar5 + iVar2;
    *(undefined1 *)(iVar5 + iVar2 + puVar1[0x42]) = 0;
  } while( true );
}

