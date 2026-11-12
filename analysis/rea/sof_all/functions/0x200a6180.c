// rea decompile_all
// name: FUN_200a6180
// address: 0x200a6180
// body: available
// range: 0x200a6180-0x200a6329 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a6180(void)

{
  undefined1 *puVar1;
  int in_ECX;
  int *piVar2;
  undefined1 local_3e8 [1000];
  
  puVar1 = *(undefined1 **)(in_ECX + 8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_201116cc;
  }
  FUN_200fabac(local_3e8,s_Usage_Report_For___s_20157940,puVar1);
  FUN_2008ea00(local_3e8,1);
  piVar2 = *(int **)(in_ECX + 0xa4);
  if (piVar2 != *(int **)(in_ECX + 0xa8)) {
    do {
      if (*(char *)(*piVar2 + 5) == '\0') {
        puVar1 = *(undefined1 **)(*piVar2 + 0xc);
        if (puVar1 == (undefined1 *)0x0) {
          puVar1 = &DAT_201116cc;
        }
        FUN_200fabac(local_3e8,&DAT_2011d990,puVar1);
        FUN_2008ea00(local_3e8,1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(in_ECX + 0xa8));
  }
  piVar2 = *(int **)(in_ECX + 0xb4);
  if (piVar2 != *(int **)(in_ECX + 0xb8)) {
    do {
      if (*(char *)(*piVar2 + 5) == '\0') {
        puVar1 = *(undefined1 **)(*piVar2 + 0xc);
        if (puVar1 == (undefined1 *)0x0) {
          puVar1 = &DAT_201116cc;
        }
        FUN_200fabac(local_3e8,&DAT_2011d990,puVar1);
        FUN_2008ea00(local_3e8,1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(in_ECX + 0xb8));
  }
  piVar2 = *(int **)(in_ECX + 0xc4);
  if (piVar2 != *(int **)(in_ECX + 200)) {
    do {
      if (*(char *)(*piVar2 + 5) == '\0') {
        puVar1 = *(undefined1 **)(*piVar2 + 0xc);
        if (puVar1 == (undefined1 *)0x0) {
          puVar1 = &DAT_201116cc;
        }
        FUN_200fabac(local_3e8,&DAT_2011d990,puVar1);
        FUN_2008ea00(local_3e8,1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(in_ECX + 200));
  }
  piVar2 = *(int **)(in_ECX + 0xd4);
  if (piVar2 != *(int **)(in_ECX + 0xd8)) {
    do {
      if (*(char *)(*piVar2 + 5) == '\0') {
        puVar1 = *(undefined1 **)(*piVar2 + 0xc);
        if (puVar1 == (undefined1 *)0x0) {
          puVar1 = &DAT_201116cc;
        }
        FUN_200fabac(local_3e8,&DAT_2011d990,puVar1);
        FUN_2008ea00(local_3e8,1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(in_ECX + 0xd8));
  }
  puVar1 = *(undefined1 **)(in_ECX + 8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_201116cc;
  }
  FUN_200fabac(local_3e8,s_End_of_Usage_Report_For___s_20157920,puVar1);
  FUN_2008ea00(local_3e8,1);
  return;
}

