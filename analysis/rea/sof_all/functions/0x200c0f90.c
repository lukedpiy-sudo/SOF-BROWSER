// rea decompile_all
// name: FUN_200c0f90
// address: 0x200c0f90
// body: available
// range: 0x200c0f90-0x200c10a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c0f90(char param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  int in_ECX;
  undefined1 local_3e8 [1000];
  
  if (param_1 != '\0') {
    FUN_2008ea00(s_Loaded_Maps______________________20158214,0);
    piVar1 = *(int **)(in_ECX + 4);
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      puVar3 = (undefined1 *)piVar2[4];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      FUN_200fabac(local_3e8,&DAT_2011d990,puVar3);
      FUN_2008ea00(local_3e8,1);
      FUN_20075f90();
      piVar1 = *(int **)(in_ECX + 4);
    }
    FUN_2008ea00(s________________________201581fc,0);
    FUN_2008ea00(s_Loaded_Textures__________________201581d4,0);
    piVar1 = *(int **)(in_ECX + 0x18);
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      puVar3 = (undefined1 *)piVar2[4];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      FUN_200fabac(local_3e8,&DAT_2011d990,puVar3);
      FUN_2008ea00(local_3e8,1);
      FUN_20075f90();
      piVar1 = *(int **)(in_ECX + 0x18);
    }
    FUN_2008ea00(s________________________201581fc,0);
  }
  FUN_200fabac(local_3e8,s__d_Maps___d_Textures_201581bc,*(undefined4 *)(in_ECX + 0x10),
               *(undefined4 *)(in_ECX + 0x24));
  FUN_2008ea00(local_3e8,0);
  return;
}

