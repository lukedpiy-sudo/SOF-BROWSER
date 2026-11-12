// rea decompile_all
// name: FUN_200d7950
// address: 0x200d7950
// body: available
// range: 0x200d7950-0x200d79f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d7950(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xb9) != '\0') {
    cVar1 = *(char *)(in_ECX + 0x61);
    if (cVar1 != '\0') {
      if (*(int *)(in_ECX + 0xc0) == 1) {
        return;
      }
      if (cVar1 != '\0') goto LAB_200d7986;
    }
    if (*(int *)(in_ECX + 0xc0) != 2) {
      if (cVar1 != '\0') {
LAB_200d7986:
        iVar2 = *(int *)(*(int *)**(undefined4 **)(in_ECX + 4) + 0x14);
        (**(code **)(**(int **)(in_ECX + 0x90) + 0x44))
                  (CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(in_ECX + 0x94)),
                   *(undefined4 *)(iVar2 + 0x28),0,0,1,1,0);
        *(undefined4 *)(in_ECX + 0xc0) = 1;
        return;
      }
      iVar2 = *(int *)(*(int *)**(undefined4 **)(in_ECX + 4) + 0x14);
      (**(code **)(**(int **)(in_ECX + 0x90) + 0x44))
                (CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(in_ECX + 0x94)),
                 *(undefined4 *)(iVar2 + 0x28),0,0,1,1,1);
      *(undefined4 *)(in_ECX + 0xc0) = 2;
    }
  }
  return;
}

