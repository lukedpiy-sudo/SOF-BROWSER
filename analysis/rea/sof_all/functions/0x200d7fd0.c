// rea decompile_all
// name: FUN_200d7fd0
// address: 0x200d7fd0
// body: available
// range: 0x200d7fd0-0x200d8056 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d7fd0(void)

{
  short sVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x7c) != 0) {
    puVar2 = *(undefined1 **)(in_ECX + 0x9c);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_201116cc;
    }
    sVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x7c) + 0x8c) + 0x1c))(puVar2);
    *(short *)(in_ECX + 0x84) = sVar1;
    if (sVar1 != 0) {
      puVar2 = *(undefined1 **)(in_ECX + 0xac);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_201116cc;
      }
      uVar3 = (**(code **)(**(int **)(in_ECX + 0x8c) + 0x1c))(puVar2);
      *(short *)(in_ECX + 0x96) = (short)uVar3;
      if ((short)uVar3 != 0) {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x7c) + 0x90) + 0x70))
                  (CONCAT22((short)((uint)*(undefined4 *)(in_ECX + 0x90) >> 0x10),
                            *(undefined2 *)(in_ECX + 0x84)),*(undefined4 *)(in_ECX + 0x90),uVar3);
        *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(*(int *)(in_ECX + 0x7c) + 0xc);
        *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(*(int *)(in_ECX + 0x7c) + 0x10);
      }
    }
  }
  return;
}

